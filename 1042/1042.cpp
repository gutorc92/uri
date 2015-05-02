#include<iostream>
#include<cmath>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunction (int i,  int j) { return (i < j); }

int main(int argc, char * argv[]){
	int a,b,c;
	cin >> a >> b >> c;
	vector<int> myints;
	myints.push_back(a);
	myints.push_back(b);
	myints.push_back(c);

	std::sort(myints.begin(),myints.end(),myfunction);

	for(vector<int>::iterator it = myints.begin(); it != myints.end(); ++it){
		cout << *it << endl;
	}
	cout << endl;
	cout << a << endl;	
	cout << b << endl;
	cout << c << endl;
}
