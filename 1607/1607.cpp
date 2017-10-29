#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;


int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string c1, c2;
    for(int i = 0; i < n; i++){
        std::cin >> c1 >> c2;
        int soma = 0;
        for(unsigned int j = 0; j < c1.size(); j++){
            int result = c2[j] - c1[j];
            //std::cout << result << std::endl;
            result = result < 0 ?  (c2[j] - 97) + (123 - c1[j])  : result;
            //std::cout << result << std::endl;
            soma += result;
        }
        std::cout << soma << std::endl;
        //std::cout << std::endl;
    }	
}
