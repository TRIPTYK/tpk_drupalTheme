read -p "Nouvelle installation Github ?(y/n) " query
	
	if [ $query = "y" ]; then
		cd www/default/
		cp ../../environment/git/gitIgnorer sites/all/.gitignore 
		cd sites/all/
		git init
		read -p "url depot git ? " url
		git remote add origin https://github.com/maxgosset/$url.git
		git push -u origin master
	fi