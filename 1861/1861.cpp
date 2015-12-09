#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<set>
using namespace std;



int main(int argc, char * argv[]){
    map<string,int> names;
    set<string> d;
    string n1,n2;
    map<string,int>::key_compare my_comp = names.key_comp();

    while(cin >> n1 >> n2){
        if(names.count(n1) == 0){
            names[n1] = 1;
        }else{
            names[n1]++;
        }
        d.insert(n2);
     }
   
    string highest = names.rbegin()->first;          // last element
    cout << "HALL OF MURDERERS" << endl;
    std::map<string,int>::iterator it = names.begin();
    do {
        if(d.count(it->first) == 0){
            cout << it->first << " " << it->second << endl;
        }
    } while ( my_comp((*it++).first, highest) );
}
