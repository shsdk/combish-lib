sqlite3_tablecopy() {
    local this_db=$1
    local table_src=$2
    local table_dest=$3
    
    sqlite3_query "${this_db}" "CREATE TABLE ${table_dest} AS SELECT * FROM ${table_src} WHERE 0"
} ## END: sqlite3_tablecopy()
