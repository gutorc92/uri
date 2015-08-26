#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    unsigned int m, n;
    cin >> m >> n;
    while(m != 0 && n != 0){
        unsigned int sum = m + n;
        string s = to_string(sum);
        replace(s.begin(),s.end(),'0','\0');
        cout << s << endl;
        cin >> m >> n;

    }	
}
