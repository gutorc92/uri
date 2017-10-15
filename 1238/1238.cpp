#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string c, c1;
    for(int i = 0; i < n; i++){
        std::cin >> c >> c1;
        unsigned int max = std::max(c.size(), c1.size());
        for(unsigned int j = 0; j < max; j++){
            if(c.size() > j) std::cout << c[j];
            if(c1.size() > j) std::cout << c1[j];
        }
        std::cout << std::endl;
    }	
}
