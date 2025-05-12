#!/bin/bash

cd ~/Low-level-Programming || exit 1

while true; do
    git add .

    timestamp=$(date +"%Y-%m-%d %H:%M:%S")
    git commit -m "⛓ Auto-commit from the depths at $timestamp" 2>/dev/null

    git push origin main

    echo "[$timestamp] Synced with the underworld."
    
    sleep 300  # 5 minutes
done


