#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, i;
    while(1){
        std::cin >> n;
        if(n == 0) break;
        for(i = 1; i < n; i++){
            std::cout << i << " ";
        }
        std::cout << i << std::endl;

    }	
}
