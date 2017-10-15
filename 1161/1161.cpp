#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;
long int val[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

long int fa(int n){
    if(n < 10) return val[n];
    return n * fa(n-1);

}

int main(int argc, char * argv[]){
    long int t, q, t1, t2;
    while(1){
        std::cin >> t >> q;
        if(!std::cin.good()) break;
        t1 = fa(t); t2 = fa(q); 
        /*
        if(t < 10){
            t1 = val[t];
        }
        for(int j = t; j > 0; j--){
            t1 *= j;
        }
        for(int j = q; j > 0; j--){
            t2 *= j;
        }
        */
        std::cout << t1 +  t2 << std::endl;

    }
    	
}
