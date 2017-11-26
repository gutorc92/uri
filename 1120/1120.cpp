#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    std::string c, c1;
    while(1){
        std::cin >> c >> c1;
        if(c[0] == '0' && c1[0] == '0') break;
        std::size_t found = c1.find(c);
        while(found != string::npos){
            c1.erase(c1.begin()+found);
            found = c1.find(c);
        }
        if(c1.size() == 0){
            std::cout << "0" << std::endl;
        }else if(std::all_of(c1.begin(), c1.end(), [](unsigned char c)->bool { return c == '0'; })){
            std::cout << "0" << std::endl;
        }else{
            int imprime = 0;
            for(unsigned int j = 0; j < c1.size(); j++){
                if(c1[j] > 48) imprime = 1;
                if(imprime == 1) std::cout << c1[j];
            }
            std::cout << std::endl;
        }
        
    }
    	
}
