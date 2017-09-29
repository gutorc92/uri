#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            std::cout << i << "^2 = " << i * i << std::endl;
        }
    }
	
}
