#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
    int n;
    while(cin >> n){
        int maior = 0;
        int t;
        for(int i = 0; i < n ; i++){
            cin >> t;
            if(i == 0){
                maior = t;
            }else if(t > maior){
                maior = t;
            }
        }
        if(maior < 10){
            cout << "1" << endl;
        }else if( maior >= 10 && maior < 20){
            cout << "2" << endl;
        }else if( maior >= 20){
            cout << "3" << endl;

        }

    }	
}
