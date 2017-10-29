#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n,t,q;
    int m[10001];
    while(1){
        std::cin >> n >> t;
        if(n == 0 && t == 0) break;
        std::fill(m, m + 10001, 0);
        for(int i = 0; i < t; i++){
            std::cin >> q;
            m[q]++;
        }	
        int count = 0;
        /*
        for(int i = 1; i <= n; i++){
            std::cout << m[i] << " ";
        }
        std::cout << std::endl;
        */
        for(int i = 1; i <= n; i++){
            if(m[i] > 1) count++;
        }
        std::cout << count << std::endl;
    }
}
