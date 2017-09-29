#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;


int main(int argc, char * argv[]){
    int n, n1, sum = 0;
    while(1){
        std::cin >> n >> n1;
        if(n <= 0 || n1 <= 0) break;
        sum = 0;
        if(n > n1) std::swap(n, n1);
        for(int i = n; i <= n1; i++){
            std::cout << i << " ";
            sum += i;
        }
        std::cout << "Sum=" << sum << std::endl;
    }	
}
