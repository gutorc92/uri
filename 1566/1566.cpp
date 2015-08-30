#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int nc;
    cin >> nc;
    int n;
    int alturas [235];
    for(int i = 0; i < nc; i++){
        cin >> n;
        fill(alturas,alturas+235,0);
        int alt;
        for(int j = 0; j < n; j++){
            cin >> alt;
            alturas[alt] += 1;
        }
        for(int j = 20; j < 230; j++){
            if(alturas[j] == 1){
                cout << j << " ";
            }
            if(alturas[j] > 1){
                for(int k = 0; k < alturas[j]; k++){
                    cout << j << " ";
                }
            }
            
        }
        cout << endl;    
    }	
}
