#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>

using namespace std;

int buscabinaria(int x, int n, int* p){
    int e, m, d;
    e = 0;
    d = n -1;
    while(e <= d){
        m = (e + d)/2;
        if(p[m] == x){
            return m;
        }
        if(p[m] < x){
            e = m + 1;
        }else{
            d = m - 1;
        }
    }

    return -1;

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
        sort(marmores,marmores+n);
        int con;
        cout << "CASE# " << caso << ":" << endl;
        for(int i = 0; i < q ; i++){
            cin >> con;
            int pos = buscabinaria(con, n, marmores);
            if(pos == -1){
                cout << con << " not found" << endl;
            } else{
                cout << con <" found at " << pos + 1 << endl;
            }
        };
        caso++; 
        
    }    
}
