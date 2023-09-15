#!/bin/bash
id -nG $FT_USER | perl -pe 's/ /,/g' | tr -d '\n'
