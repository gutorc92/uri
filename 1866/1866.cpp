#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
    int c;
    cin >> c;
    int n;
    for(int i =0; i < c; i++){
        cin >> n;
        if( n % 2 == 0){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
    }	
}
