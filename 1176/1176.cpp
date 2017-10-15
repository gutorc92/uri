#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

long int nums[] = { 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040};

long int fib(int n){

    if(n < 31) return nums[n];
    return fib(n -1) + fib(n -2);
}


int main(int argc, char * argv[]){
    int n,t;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t;
        std::cout << "Fib(" << t << ") = " << fib(t) << std::endl;
    }	
}
