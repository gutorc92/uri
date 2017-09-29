#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    while(1){
        int n,n1, mary = 0, john = 0;
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
        std::cout << "Mary won " << mary << " times and John won " << john  << " times";
        
	}
}
