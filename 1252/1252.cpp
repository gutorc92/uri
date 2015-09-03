#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int m;

bool ordenacao(int i, int j){
    int modi = i % m;
    int modj = j % m;
    if(modi == modj){
        if(j % 2 == 0 && i % 2 == 0){
            return i < j;
        }else if( j % 2 == 1 && i % 2 == 1){
            return i > j;
        }else{
            return j % 2 < i % 2;
        } 
    }else{
        return modi < modj;  
    }  
}

int main(int argc, char * argv[]){
    int n;
    int nu[10005];
    while(true){
        cin >> n >> m;
        cout << n << " " << m << endl;
        if(m == 0 && n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
           cin >> nu[i]; 
        }
        sort(nu,nu+n,ordenacao);
        for(int i = 0; i < n; i++){
           cout << nu[i] << endl; 
        }
    }	
}
