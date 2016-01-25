#!/bin/bash
echo "Backuping website"
cd ./www/default
if [ -d ../../backup/drupal/$(date +"%Y%d%m") ]; then
	mkdir ../../backup/drupal/$(date +"%Y%d%m")
fi
drush ard --destination=../../backup/drupal/$(date +"%Y%d%m")/Drupal$(date +"%Y%d%m|%Hh%M").tar
cd ../../
echo "end backup"
