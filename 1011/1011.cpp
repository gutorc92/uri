#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159;
using namespace std;

int main(){

    double radius, volume;
    cin >> radius;
    volume = pow(radius,3)*1.3333333333333333333 * PI ; 
    cout.precision(3);
    cout << setiosflags (ios::fixed) << "VOLUME = " << volume <<endl;
    /*  
    cout << "A= "<< area << endl;   
    */  
    return 1;
}
