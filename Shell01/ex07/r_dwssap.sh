# FT_LINE1=3
# FT_LINE2=7
cat /etc/passwd | sed 's/\:\*\:.*$//g' | grep -v '^#' | awk 'NR%2==0' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/\./g' | tr -d '\n'
