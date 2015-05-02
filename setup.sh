#!/bin/sh

problem=$1;

echo "$problem"; 

if [ ! -d "$problem" ];
then
	mkdir "$problem";
	cp base.cpp "$problem/$problem.cpp";
else
	echo "File already exists";	
fi
