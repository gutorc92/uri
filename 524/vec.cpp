#include<iostream>
#include<cmath>
#include<stdio.h>
#include<set>

using namespace std;

int main(int argc, char * argv[]){
    set<int> primos = {2,3,5,7,11,13,17,19,21,23,27,31,35,41,43,47};
    cout << "int p[47] = { ";
    for(int i = 0; i < 48; i++){
        if(primos.find(i) != primos.end()){
            cout << "1";
        }else{
            cout << "-1";
        }
        cout << ", ";
    }
    cout << "}" << endl;	
}
