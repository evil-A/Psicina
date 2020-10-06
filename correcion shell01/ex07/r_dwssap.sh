#! /bin/bash
cat /etc/passwd | sed '/^#/ d' | awk -F ":" '{print $1}' | rev | awk 'NR % 2 == 0' | sort -r | awk -v ftline1="$FT_LINE1" -v ftline2="$FT_LINE2" 'NR>=ftline1 && NR>=ftline2 {print $0}' | tr '\n' ',' | sed 's/, */, /g' | sed 's/.\{2\}$/./' | tr -d "\n"
