#!/bin/sh

cat /etc/passwd | grep -v '^#' | awk "NR% 2==0" | rev | sort -r | grep "_" | cut -d : -f7 | sed -n "${FT_LINE1} , ${FT_LINE"}p" | tr "\n" " " | sed 's/ /, /g' | sed '$ s/..$/./' | tr '\n' ' '$
