#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;

    for(int i = 0; i < 10; i++){
        std::cout << "N[" << i << "] = " << n << std::endl;
        n = n * 2;
    }	
}
