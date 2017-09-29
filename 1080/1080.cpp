#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, max = 0, i_max = 0;
    for(int i = 1; i <= 100; i++){
        std::cin >> n;
        if(n > max){
            max = n;
            i_max = i;
        }
    }	
    std::cout << max << std::endl;
    std::cout << i_max << std::endl;
}
