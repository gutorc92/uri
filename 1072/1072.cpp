#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, n2, in = 0, out = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> n2;
        if(n2 >= 10 && n2 <= 20){
            in++;
        }else{
            out++;
        }
    }
    std::cout << in << " in" << std::endl;
    std::cout << out << " out" << std::endl;
 
	
}
