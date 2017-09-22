#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int x;
    std::cin >> x;
    for(int i = 0; i <= x; i++){
        if(i % 2 != 0){
            std::cout << i << std::endl; 
        }
    }	
}
