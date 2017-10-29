#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, op, po = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> op;
        if(op == 0) po++;
    }	
    po / (double)n > 0.5 ? std::cout << "Y" : std::cout << "N";
    std::cout << std::endl;
}
