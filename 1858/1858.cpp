#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, t, min = 30, min_index = -1;
	std::cin >> n;
	for(int i = 0; i < n; i++){
		std::cin >> t;
		if(t < min){
			min = t;
			min_index = i;
		}
	}
	std::cout << min_index + 1 << std::endl;
}
