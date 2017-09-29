#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    for(int i = 0; i < 10000; i++){
        if(i % n == 2){
            std::cout << i << std::endl;
        }
    }	
}
