#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	
    int n, t = 1;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= 3; j++){
            std::cout << t << " ";
            t++;
        }
        t++;
        std::cout << "PUM" << std::endl;
    }
}
