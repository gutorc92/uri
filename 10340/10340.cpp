#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
    string s, t;
    while(cin >> s >> t){
//cout << s << " " << t << endl;
        int npo = 0;
        bool is = true;
        size_t te;
        for(unsigned int i = 0; i < s.size(); i++){
            te = t.find(s[i], npo);
 //    cout << s[i] << " " << i << " " << te << " " << npo << endl;
            if(te == string::npos){
                is = false;
                break;
            }else{
                npo = te + 1;
            }
        }
        if(is){
           cout << "Yes" << endl; 
        }else{
            cout << "No" << endl;
        }
    }	
}
