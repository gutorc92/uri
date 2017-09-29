#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int d,n;
    int num[100000];
    int s[100000];
    while(cin >> d >> n){
//cout << "d: " << d << " n:" << n << endl;
        if(!(d && n)){
            break;
        }
        string t;
        cin >> t;
        for(int i = 0; i < d; i++){
//cout << "Q: " << t[i] << endl;
            num[i] = t[i] - '0';
//cout << "Num: " << num[i] << endl;
        }
        n = d - n;
        int begin = 0;
        int pos = 0;
        for(int i = n-1; i >= 0; i--){
            int maior = -1;
            for(int j = begin; j < d - i; j++){
                if(num[j] > maior){
                    maior = num[j];
                    begin = j;
                }
            }
//cout << "Maior " << maior << endl; 
            s[pos] = maior;
            pos++;
            begin++;
        }
        for(int i = 0; i < n; i++){
            cout << s[i];
        }
        cout << endl;
    
    }	
}
