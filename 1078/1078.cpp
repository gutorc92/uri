#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    for(int i = 1; i <= 10; i++){
        std::cout << i << " x " << n << " = " << n * i << std::endl;
    }	
}
