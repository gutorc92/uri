#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n,n1, mary = 0, john = 0;

    while(1){
        std::cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            std::cin >> n1;
            if(n1 == 0){
                mary++;
            }else{
                john++;
            }
        }
        std::cout << "Mary won " << mary << " times and John won " << john  << " times" << std::endl;
    	mary = 0; 
	john = 0;
    }
}
