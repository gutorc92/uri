#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, total;
    long int t;

    std::cin >> n;
    for(int i = 0; i < n; i++){	
        std::cin >> t;
        total = 0;
        for(int j = 1; j < t; j++){
            if(t % j == 0) total += j;
        }	
        if( total == t){
            std::cout << t << " eh perfeito" << std::endl;
        }else{
            std::cout << t << " nao eh perfeito" << std::endl;
        }
    }
}
