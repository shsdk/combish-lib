#!/bin/bash

lib_name=$1

mkdir ${lib_name}

## create template
cat > ${lib_name}/${lib_name}.bash.inc << EOL
${lib_name}() {
  :
} ## END: ${lib_name}()
EOL

## create common.txt
touch ${lib_name}/common.txt

## prep git workspace
cd $lib_name
git init
git config --local user.name "Ismael Casimpan Jr."
git config --local user.email "ismael.angelo@casimpan.com"
git remote add origin git@github.com:shsdk/combish-lib.git
git checkout -b develop/${lib_name}
