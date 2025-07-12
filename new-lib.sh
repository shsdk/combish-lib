#!/bin/bash

lib_name=$1

create_template() {
cat > ${lib_name}/${lib_name}.bash.inc << EOL
${lib_name}() {
  :
} ## END: ${lib_name}()
EOL
} ## END: create_template()

## check that it isn't an existing library
cd maintainer

git fetch
if [[ $(git branch -a|grep -c ${lib_name}) -eq 0 ]]; then

    mkdir ${lib_name}

    ## create template
    create_template

    ## create common.txt
    touch ${lib_name}/common.txt

    ## prep git workspace
    cd $lib_name
    git init
    git config --local user.name "Ismael Casimpan Jr."
    git config --local user.email "ismael.angelo@casimpan.com"
    git remote add origin git@github.com:shsdk/combish-lib.git
    git checkout -b develop/${lib_name}
else
    echo "ERROR: Existing library with name '${lib_name}' already found."
fi
