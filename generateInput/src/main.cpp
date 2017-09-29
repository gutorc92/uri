#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include "operation.h"

using namespace std;




int main(int argc, char * argv[]){
    string line;
    while(cin >> line){
cout << line << endl;
    }
    Operation op(line);
    cout << op.generate() << endl;	
}
