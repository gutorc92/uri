#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int r, l;
    while(1){
        std::cin >> r >> l;
        if(r == 0 && l == 0){
            break;
        }
        std::cout << r + l << std::endl;
    }	
}
