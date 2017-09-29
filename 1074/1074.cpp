#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, n1;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> n1;
        if(n1 == 0){
            std::cout << "NULL" << std::endl;
        }else{
            if(n1 % 2 == 0){
                std::cout << "EVEN";
            }else{
                std::cout << "ODD";
            }
            if(n1 < 0){
                std::cout << " NEGATIVE" << std::endl;
            }else{
                std::cout << " POSITIVE" << std::endl;
            }
        }
        
    }
}
