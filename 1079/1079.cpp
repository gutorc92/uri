#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    double b, c, d;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> b >> c >> d;
        printf("%.1lf\n", (2*b + 3 * c + 5 * d)/10);

    }	
}
