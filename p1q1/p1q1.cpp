#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    while(cin >> n){
    int last = -1;
    int total = 0;
    int qtde = 0;    
    for(int i=0; i < n; i++){
        int m;
        cin >> m;
        if(last == -1){
            last = m;
            total = total + m;
            qtde++;
        }else if(m <= last && qtde < 6){
            last = m;
            total += m;
            qtde++;
        }
    }
    cout << "Massa empilhada: " << total << " kg" << endl;
    }	
}
