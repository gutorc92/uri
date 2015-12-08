#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<list>
using namespace std;

int max(list<int> &ns){
    int m = 0;
    if(ns.front() > ns.back()){
        m = ns.front();
        ns.pop_front();
    }else{
        m = ns.back();
        ns.pop_back();
    }
cout << "Max " << m << endl;
    return m;

}

int main(int argc, char * argv[]){
    int n;
    while(cin >> n){
cout << n << endl;
        list<int> num (0,n);
        int t;
        for(int i = 0; i < n; i++){
            cin >> t;
cout << t << endl;
            num.push_back(t);
        }
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if( i % 2 == 1){
                sum += max(num);   
            }else{
                max(num);
            }
        }
        cout << "Soma " << sum << endl;
    }	
}
