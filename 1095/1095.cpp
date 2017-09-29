#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int i = 1;
    for(int j = 60;  j >= 0; j = j - 5){
        std::cout << "I=" << i << " J=" << j << std::endl;
        i = i + 3;
    }	
}
