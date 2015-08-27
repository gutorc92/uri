#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
    int n;
    while(cin >> n){
        int c = n/2 ;
        int mi = n/3;
        int ms = n - mi;
        for(int i=0; i < n; i++){
            for(int j=0; j < n; j++){
                if(c == j && c == i){
                    cout << "4";
                }else if(( i >= mi && i < ms) && (j >= mi && j < ms)){
                    cout << "1";
                }else if(i == j){
                    cout << "2";
                }else if( j == n - 1 - i){
                    cout << "3";
                }else if(i < mi || i >= ms || j < mi || j >= ms){
                    cout << "0";
                }
            }
            cout << endl;    
        }
        cout << endl;
    }
}
