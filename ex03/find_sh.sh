#!/bin/bash

find . -type f,d -name "*.sh" -execdir basename {} .sh ";"
