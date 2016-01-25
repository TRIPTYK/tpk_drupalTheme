
#!/bin/bash

#!/bin/bash
# echo "making a backup for this website"
# ./drupal_bck.sh
echo "stopping docker services for this website"
#(Il faut ici changer par le nom de votre docker machine)
mysqldump -h $(docker-machine ip dockerdrupal) -u admin -ptriptyk --all-databases > backup/db/last.sql
docker-compose stop;
# docker-compose rm -f;

