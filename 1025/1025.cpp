#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(int argc, char * argv[]){
    int n,q;
    int marmores[100005];
    int caso = 1;
    while(true){

        fill(marmores,marmores+100005,-1);
        cin >> n >> q;
        if(n == 0 && q == 0){
            break;
        }
        int nu;
        for(int i = 1; i <= n ; i++){
            cin >> nu;
            if(marmores[nu] == -1){
                marmores[nu] = i; 
            }
        };
        int con;
        cout << "CASE# " << caso << ":" << endl;
        for(int i = 0; i < q ; i++){
            cin >> con;
            if(marmores[con] != -1){
                cout << con << " found at " << marmores[con] << endl;
            }else{
                cout << con << " not found" << endl;
            } 
             
        };
        caso++; 
        
    }    
}
