#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    while(1){
        std::cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            int sp = 2, ip = i + 1;
            for(int j = 0; j < n; j++){
                std::cout.width(3);
                if( i == j) std::cout << std::right << "1";
                if( j < i ){
                     std::cout << std::right << ip;
                     ip--;
                }
                if( j > i){
                     std::cout << std::right << sp;
                     sp++;
                }
                if(j + 1 < n) std::cout << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }	
}
