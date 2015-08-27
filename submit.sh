#!/bin/sh


problem=$(basename $PWD)
file="$PWD/$problem.cpp"
echo "You will submit the problem $problem"
echo "The file $file will be used"

if [ -e "$file" ];
then
   java -jar ../urisubmit-1.0-SNAPSHOT.jar "$file" "$problem"
else
    echo "There is no a cpp file"
fi
 
	

