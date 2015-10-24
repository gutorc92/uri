#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>

using namespace std;

int f(int* p,int n, int val){
    int i = 1;
    for(i = 1; i <= n; i++){
        if(p[i] == val){
            return i;
        }
    }
    return -1;
}

void print(int* p, int n){
    for(int i = 1; i <= n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

int main(int argc, char * argv[]){
    int n,q;
    int marmores[100005];
    int caso = 1;
    while(true){

        cin >> n >> q;
        if(n == 0 && q == 0){
            break;
        }
        int nu;
        for(int i = 1; i <= n ; i++){
            cin >> nu;
            marmores[i] = nu; 
        };
        sort(marmores,marmores+n+1);
        //print(marmores, n);
        int con;
        cout << "CASE# " << caso << ":" << endl;
        for(int i = 0; i < q ; i++){
            cin >> con;
            int pos = f(marmores,n,con);
            if(pos == -1){
                cout << con <<  " not found" << endl;
            }else{
                cout << con << " found at " << pos << endl;
            }
        };
        caso++; 
        
    }    
}
