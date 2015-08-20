#include<iostream>

using namespace std;

int main(int argc, char * argv[]){
    int a, b,q,r;
    cin >> a >> b;
    q = a/b;
    r = a - b * q;
    if( r < 0){
        cout << a << b;
    }
    cout << q << " " << r << endl;	
}
