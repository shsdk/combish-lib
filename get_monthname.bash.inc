get_monthname() {
    local month_numeric=$1
    local case_output=${2:-'asis'} ## as-is, lower, or upper

    local retval=
    case $month_numeric in
        01)
          retval='January'
        ;;
        02)
          retval='February'
        ;;
        03)
          retval='March'
        ;;
        04)
          retval='April'
        ;;
        05)
          retval='May'
        ;;
        06)
          retval='June'
        ;;
        07)
          retval='July'
        ;;
        08)
          retval='August'
        ;;
        09)
          retval='September'
        ;;
        10)
          retval='October'
        ;;
        11)
          retval='November'
        ;;
        12)
          retval='December'
        ;;
    esac

    ## return value depending on $case_out
    ##
    case $case_output in
        asis)
            echo $retval
        ;;
        lower)
            echo $retval|tr "A-Z" "a-z"
        ;;
        upper)
            echo $retval|tr "a-z" "A-Z"
        ;;
    esac
} ## END: get_monthname()
