#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<iomanip>  
using namespace std;

int main(int argc, char * argv[]){
    int n = 0;
    double total = 0, nr = 0;

    for(int i = 0; i < 6; i++){
        std::cin >> nr;
        if(nr > 0){ total += nr; n++; }
    }
    std::cout << n << " valores positivos" << std::endl;    
    std::cout << std::fixed << std::setprecision(1) << total/n << std::endl;    
}
