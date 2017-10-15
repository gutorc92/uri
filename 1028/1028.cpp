#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, q;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t >> q;
        for(int j = std::min(t, q); j > 0; j--){
            if(t % j == 0 && q % j == 0){
                std::cout << j << std::endl;
                break;
            }
        }
    
    }
	
}
