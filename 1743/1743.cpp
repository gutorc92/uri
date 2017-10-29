#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n[5], m[5];

    for(int i = 0; i < 5; i++){
        std::cin >> n[i];
    }	
    for(int i = 0; i < 5; i++){
        std::cin >> m[i];
    }
    int t = 1;
    for(int i = 0; i < 5; i++){
        if(n[i] + m[i] == 2) t = 0;
        if(n[i] + m[i] == 0) t = 0;
    }
    t == 1 ? std::cout << "Y" : std::cout << "N";
    std::cout << std::endl;
}
