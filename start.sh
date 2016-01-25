#!/bin/bash

if [ -z "$(docker-compose ps -q)" ]; then
     echo "its not running"
     docker-compose up -d
else
     echo "its  running"
     docker-compose start
fi

if [ -f backup/db/last.sql ]; then
  echo "Waiting for mysql initialisation"
  c=10 # seconds to wait
  REWRITE="-"
  echo "Starting..."
  while [ $c -gt 0 ]; do
      c=$((c-1))
      sleep 1
      echo -e "${REWRITE}$c"
  done
  echo -e "${REWRITE}Done."
  echo "Restoring databse situation"
  #(Il faut ici changer par le nom de votre docker machine)
  mysql -h $(docker-machine ip dockerdrupal) -u admin -ptriptyk < backup/db/last.sql
  echo "cleaning install"

  mv backup/db/last.sql backup/temp/last.sql

fi
