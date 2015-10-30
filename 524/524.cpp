#include<iostream>
#include<cmath>
#include<stdio.h>
#include<set>
#include<algorithm>
using namespace std;

int isvalid(int& p){
    if(p % 2 != 0){
        return -1;
    }
    if(p == 8 || p == 14){
        return -1;
    }
    return 1;
}

bool isf(int *p,int n){
    bool valid = true;
    for(int i = 0; i < n; i++){
        if( i % 2 != 0 && p[i] % 2 != 0){
//cout << p[i] << endl;
            valid = false;
            break;
        }
        if( i % 2 == 0 && p[i] % 2 == 0){
//cout << p[i] << endl;
            valid = false;
            break;
        }
    }
    return valid;
}

int main(int argc, char * argv[]){
    set<int> primos = {2,3,5,7,11,13,17,19,21,23,27,31,35,41,43,47}; 
    int p[48] = { -1, -1, 1, 1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, 1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1}; 
    int c;
    int n[16];
    int ca = 1;
    int next, sum;
    
    while(cin >> c){
           for(int i = 0; i < c; i++){
                n[i] = i + 1;
            }
            cout << "Case " << ca << ":" << endl; 
            if(c % 2 == 0){
                do{
                    bool is = true;
                    if(isvalid(n[1]) == -1  || isvalid(n[c -1]) == -1){
                       is = false;
                    }else if(!isf(n,c)){
                        is = false;
                    }else{
                        for(int i = 0; i < c; i++){
                            next = (i + 1) % c;
                            sum = n[i] + n[next];
                            if(p[sum] == -1){
                                is = false;
                                break;
                            }
                        }
                    }
                    if(is){
                        for(int i =0; i < c; i++){
                            cout << n[i] << " ";
                        }
                        cout << endl;
                    }
                }while(next_permutation(n+1,n+c));
                cout << endl;
            }
            ca++;
    }
}
