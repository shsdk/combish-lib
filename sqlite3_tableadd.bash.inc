sqlite3_tableadd() {
    local table_schema=$1 ## e.g. this_table.sql
    local db_file=$2      ## e.g. pse_trial.db

    cat $table_schema | sqlite3 $db_file
} ## END: sqlite3_tableadd()
