#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, x, y, q, total;
    std::cin >> n;	
    for(int i = 0; i < n; i++){
        std::cin >> x >> y;	
        q = 0; total = 0;
        while(q < y){
            if(x % 2 != 0){
                total += x;
                q++;
            }
            x++;
        }
        std::cout << total << std::endl;
    }
}
