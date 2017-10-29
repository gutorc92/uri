#include<iostream>
#include <iomanip>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, totalkgs = 0;
    double total = 0, val;
    std::string line;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> val;
        total += val;
        //std::cout << "val: " << val << std::endl;
        getline(std::cin, line);
        getline(std::cin, line);
        //std::cout << "line: " << line << std::endl;
        int kgs = std::count(line.begin(), line.end(), ' ');
        totalkgs += (kgs + 1);
        std::cout << "day " << i+1 << ": " << (kgs + 1) << " kg" << std::endl; 


    }	
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << totalkgs/(double)n << " kg by day" << std::endl;
    std::cout << std::setprecision(2) << "R$ " << total/n << " by day" << std::endl;
}
