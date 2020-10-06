#!/bin/sh
find . ! -name '.*' -or -name . | wc -l | tr -d " "
