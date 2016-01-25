#!/bin/bash
if [ "$1" = "" ]; then
  echo "You must provide a first argument with the backup file"
else

  echo "Restore on the way"

  drush arr $1  --db-url=mysql://admin:triptyk@$(docker-machine ip dockerdrupal):3306/triptykDb --destination=./www/default --overwrite -d

fi
# drush arr ./scp.20150521_122743.tar.gz --destination=./www/default --db-url=mysql://demoUser:demoPasss@192.168.59.103:3306/demoDb --overwrite –v
