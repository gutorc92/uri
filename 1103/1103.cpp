#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int x1, y1, x2, y2, r1, r2;
    //double distancia;
    while(1){
        std::cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
            return 1;
        }
        x2 = x2 == 0 ? 24 : x2;
        r1 = (x2 * 60 + y2); 
        r2 =  (x1 * 60 + y1);
        r1 = r1 < r2 ? r1 + (24*60) : r1;
        r1 = r1 - r2;
        std::cout << r1 << std::endl;    
    
    }
    return 1;
}
