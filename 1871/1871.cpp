#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;



int main(int argc, char * argv[]){
    unsigned int m, n;
    string s;
    cin >> m >> n;
    while(m != 0 && n != 0){
        unsigned int sum = m + n;
        s = to_string(sum);
//cout << s << endl;
        for(auto it = s.begin(); it != s.end(); it++){
//cout << *it << endl;
            if(*it != '0'){
                cout << *it;
            }
        } 
        cout << endl;
        cin >> m >> n;

    }	
}
