#!/bin/bash
echo "Enter chmod file"
read chmod_file
chmod u+x $chmod_file
git add .
echo "Enter your git commit message"
read commit_message
git commit -m "$commit_message"
git push
