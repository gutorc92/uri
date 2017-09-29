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
        //distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        //std::cout << distancia << std::endl;
        //if(std::floor(distancia) == distancia){
        r1 = abs(x2 - x1);
        r2 = abs(y2 - y1);
        if(r1 == r2){
            //distancia =  distancia  > 0 ? 1 : 0;
            r1 = r1 == 0 ? 0 : 1;
            std::cout << r1 << std::endl;
            
        }else{
            std::cout << 2 << std::endl;
        }
    }
    return 1;
}
