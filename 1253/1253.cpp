#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

char alf[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int pos(char a){
    for(int i = 0; i < 26; i++){
        if(alf[i] == a){
            return i;
        }
    }
    return -1;
}

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string c;
    int d;
    for(int i = 0; i < n; i++){
        std::cin >> c >> d;
        //std::cout << c << " " << d << std::endl;
        for(unsigned int j = 0; j < c.size(); j++){
            //std::cout << c[j] << std::endl;
            int l = pos(c[j]);
            //std::cout << l << std::endl;
            if( l - d >= 0){
                l = l - d;
            }else{
                l = (26 + l) - d;
            }
            //std::cout << l << " ";;
            std::cout << alf[l];
        }
        std::cout << std::endl;

    }	
}
