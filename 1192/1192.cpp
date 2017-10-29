#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int n, n1;
        char c;
        std::cin >> n >> c >> n1;
        if(n == n1){
            std::cout << n * n1 << std::endl;
        }else if(c >= 65 && c <= 90){
            std::cout << n1 - n << std::endl;
        }else{
            std::cout << n1 + n << std::endl;
        }
    }	
}
