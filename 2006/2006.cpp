#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, q = 0;
    std::cin >> n;
    for(int i = 0; i < 5; i++){
        std::cin >> t;
        if( t == n) q++;
    }
	std::cout << q << std::endl;
}
