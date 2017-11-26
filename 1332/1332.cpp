#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;



int main(int argc, char * argv[]){
    int t;
    std::string word;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> word;
        if(word.size() > 3){
            std::cout << "3" << std::endl;
        }else{
            int count = 0;
            if(word[0] == 'o') count++;
            if(word[1] == 'n') count++;
            if(word[2] == 'e') count++;
            count == 2 ? std::cout << "1" << std::endl : std::cout << "2" << std::endl;
        }            
        
    }
	
}
