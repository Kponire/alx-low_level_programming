#!/bin/bash
echo "Enter the chmod file"
read chmod_file
chmod u+x $chmod_file
git add .
echo "Enter the commit message:"
read commit_message
git commit -m "$commit_message"
git push
