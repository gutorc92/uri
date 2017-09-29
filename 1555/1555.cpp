#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, n1, n2, b, r, c;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> n1 >> n2;
        r = pow(3 * n1, 2) + pow(n2, 2);
        b = (2 * pow(n1, 2)) + pow(5 * n2,2);
        c = (-100 *n1) + pow(n2,3);
        if( r > b && r > c){
            std::cout << "Rafael ganhou" << std::endl;
        }
        if(  b > r && b > c){
            std::cout << "Beto ganhou" << std::endl;
        }
        if( c > b && r < c){
            std::cout << "Carlos ganhou" << std::endl;
        }
    }
}
