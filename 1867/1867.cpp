#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string>

using namespace std;

int total(string& s){
    int sum = 0;
    do{
        sum = 0;
        for(unsigned int i = 0; i < s.length(); i++){
            const char z = s.at(i);
            sum += atoi(&z);
        }
        //cout << "The sum: " << sum << endl;
        s = to_string(sum);
        //cout << "New String" << s << endl;
    }while(sum > 9);

    return sum;
}

int main(int argc, char * argv[]){
    string n, m;
    string zero = "0";
    cin >> n >> m;
    while(n.compare(zero) != 0 && m.compare(zero) != 0){
        int sumn = total(n);
        int summ = total(m);
        if(sumn > summ){
            cout << "1" << endl;
        }else if(sumn < summ){
            cout << "2" << endl;
        }else{
            cout << "0" << endl;
        }
       cin >> n >> m; 
    }
	
}
