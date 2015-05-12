#!/bin/sh

problem=$1;

if $# = 2
then
	gityes=$(echo "$*"| egrep "-s");
	echo "Git yes: $gityes\n";
fi

echo "$problem";
echo "$*";

git checkout -b "$problem"; 

if [ ! -d "$problem" ];
then
	mkdir "$problem";
	cp base.cpp "$problem/$problem.cpp";
	sed s/namefile/$problem.cpp/g Makefile >> $problem/Makefile
	else
	echo "File already exists";	
fi
 
	

