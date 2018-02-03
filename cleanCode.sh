#!/usr/bin/env bash

function clean_code() {
    cat $1 | awk "{sub(/[\t ]*\r/,\"\")}1" | expand -t 4 | tr \\200\\221\\222\\223\\224\\226\\231\\265\\327\\342 \'\'\'\"\"-\'ux\' > tmp$$
    mv tmp$$ $1
}

for f in $(find . -name '*.c' -o -name '*.h' -type f); do
    clean_code $f
done
