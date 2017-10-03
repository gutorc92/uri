#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(t >= 2015){
            t++;
            std::cout << t - 2015 << " A.C." << std::endl;
        }else{
            std::cout << 2015 - t << " D.C." << std::endl;
        }
    }	
}
