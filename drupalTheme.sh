#!/bin/bash
cd www/
if [ ! -d "private" ]; then
  mkdir private
fi
if [ ! -d "default" ]; then

	drush dl drupal-7.41 --drupal-project-rename=default
	echo "copie du profile "
	cp -r ./triptyk/ ./default/profiles/triptyk/
	drush make --no-core triptyk/drupal-org.make default -y

	cd default/

	drush si -y -d triptyk --db-url=mysql://admin:triptyk@$(docker-machine ip dockerdrupal):3306/triptykDb --db-su=admin --db-su-pw=triptyk --account-name=admin --account-pass=Y0sh1W11 --site-name="standard" ;

	drush en entity -y
	drush en entityreference -y
	drush en og -y

	cp -r ../features_triptyk/ sites/all/modules/features_triptyk/

	drush pm-enable tpk_galerie -y
	drush pm-enable tpk_gmap -y
	drush pm-enable tpk_highlighted -y
	drush pm-enable tpk_message -y
	drush pm-enable tpk_news -y
	drush pm-enable tpk_slider -y

	
	read -p "Nouvelle installation Github ? (y/n) " query
	if [ $query = "y" ]; then
		read -p "user github ? " user
		read -p "nom depot ? " url
		curl -u $user https://api.github.com/user/repos -d '{"name":"'$url'"}'
		cd www/default/
		cp ../../environment/git/gitIgnorer sites/all/.gitignore 
		cd sites/all/
		git init
		git add . --a
		git commit -m "first commit"
		git remote add origin https://github.com/$user/$url.git
		git push -u origin master
	fi

else 
		echo "le dossier default existe";
fi