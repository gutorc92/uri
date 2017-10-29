#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, q, p1, p2;
    while(1){
        std::cin >> n;
        if(n == 0) break;
        p1 = p2 = 0;
        for(int i = 0; i < n; i++){
            std::cin >> t >> q;
            if(t > q) p1++;
            if(t < q) p2++;
        }
        std::cout << p1 << " " <<  p2 << std::endl;
    }    
}
