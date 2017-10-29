#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        int nr, s, pos = -1, min = 120, c, diff;
        std::cin >> nr >> s;
        for(int j = 0; j < nr; j++){
            std::cin >> c;
            diff = abs(c - s);
            if(diff < min){
                min = diff;
                pos = j;
            }
        }
        std::cout << pos + 1 << std::endl;
    }	
}
