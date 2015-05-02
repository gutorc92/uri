#!/bin/sh

problem=$1;

echo "$problem";

git checkout -b "$problem"; 

if [ ! -d "$problem" ];
then
	mkdir "$problem";
	cp base.cpp "$problem/$problem.cpp";
else
	echo "File already exists";	
fi
