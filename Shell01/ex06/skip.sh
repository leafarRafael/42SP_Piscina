#!/bin/bash
ls -l | perl -pe 's/\n/\n\n/g'
