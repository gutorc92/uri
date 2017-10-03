#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, q;
    while(1){
        std::cin >> n;
        if(n == 0) break;
        t = 1;
        for(int i = 0; i < n; i++){
            q = t;
            for(int j = 1; j <= n; j++){
                printf(" %2d", q);
                q = q * 2;
            }
            t = t * 2;
            std::cout << std::endl;
        }	
        std::cout << std::endl;
    }
}
