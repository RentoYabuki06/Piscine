#!/bin/bash

# Check if the current directory is a Git repository
if ! git rev-parse --is-inside-work-tree &>/dev/null; then
    echo "Error: Not inside a Git repository"
    exit 1
fi

# Get the 5 most recent commit IDs
commit_ids=$(git log --format='%H' -n 5)

# Iterate over each commit ID and print it
echo "$commit_ids" | while IFS= read -r line; do
    echo "$line"
done
