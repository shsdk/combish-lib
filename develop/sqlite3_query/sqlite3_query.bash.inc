sqlite3_query() {
    local this_db="$(echo $* | cut -d' ' -f1)"
    local query="$(  echo $* | cut -d' ' -f2-)"

    sqlite3 "${this_db}" "$query"
} ## END: sqlite3_query()