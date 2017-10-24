#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n,t;
    std::cin >> n;
    std::vector<int> pares, impares;

    for(int i = 0; i < n; i++){
        std::cin >> t;
        if( t % 2 == 0){
            pares.push_back(t);
        }else{
            impares.push_back(t);
        }
    }	
    std::sort(pares.begin(), pares.end());
    std::sort(impares.rbegin(), impares.rend());
    for(auto it = pares.begin(); it != pares.end(); it++){
        std::cout << *it << std::endl;
    }
    for(auto it = impares.begin(); it != impares.end(); it++){
        std::cout << *it << std::endl;
    }
}
