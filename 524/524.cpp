#include<iostream>
#include<cmath>
#include<stdio.h>
#include<set>
#include<algorithm>
using namespace std;



int main(int argc, char * argv[]){
    set<int> primos = {2,3,5,7,11,13,17,19,21,23,27,31,35,41,43,47}; 
    int p[47] = { -1, -1, 1, 1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1 } 
    int c;
    int n[16];
    int ca = 1;
    while(cin >> c){
       for(int i = 0; i < c; i++){
            n[i] = i + 1;
        }
        cout << "Case " << ca << ":" << endl; 
        do{
    /*
            for(int i = 0; i < c; i++){
                cout << n[i] << " ";
            }
            cout << endl;
    */
            if(n[0] == 1){
                bool is = true;
                for(int i = 1; i < c; i++){
                    int next = (i + 1) % c;
        //cout << "next " << next << endl;
                    if(primos.find(n[i] + n[next]) == primos.end()){
                        is = false;
                        break;
                    }
                }
                if(is){
                    for(int i =0; i < c; i++){
                        cout << n[i] << " ";
                    }
                    cout << endl;
                }
            }
        }while(next_permutation(n,n+c));
        ca++;
    }
}
