#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, p = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t;
        p = 0;
        for(int j = 2; j < t; j++){
            if( t % j == 0){
                std::cout << t << " nao eh primo" << std::endl;
                p = 1;
                break;
            }
        }
        if(p == 0) std::cout << t << " eh primo" << std::endl;
    }	
}
