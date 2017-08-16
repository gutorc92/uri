#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
	double a,b,c, r;
	double t;
	cin >> a >> b >> c;
	cout.precision(5);

	if( a == 0){
		cout << "Impossivel calcular\n";
		return 1;
	}


	r = pow(b,2) - (4 * a * c);

	if( r < 0){
		cout << "Impossivel calcular\n";
		return 1;
	}

	if(r == 0){
		t = (-b)/(2*a);
		printf("R1 = %.5f\n",t);
		printf("R2 = %.5f\n",t);
		return 1;
	}	
	t = ((-b) + sqrt(r))/(2*a);
	printf("R1 = %.5f\n",t);
	t = ((-b) - sqrt(r))/(2*a);
	printf("R2 = %.5f\n",t);

	


}
