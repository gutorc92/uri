#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int num_leds[] =  {6, 2, 5, 5, 4, 5, 6, 3, 7, 6} ;   
    int n, total;
    std::string nums;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> nums;
        total = 0;
        for(unsigned int j = 0; j < nums.size(); j++){
            for(int t = 0; t < 10; t++){
                if(num[t] == nums[j]){
                    total += num_leds[t];
                    break;
                }
            }
        }
        std::cout << total << " leds" << std::endl;
    }
   	
}
