#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

	float x1;
	float y1;
	float z1;
	float x2;
	float y2;
	float z2;
	float x3;
	float y3;
	float z3;
	float d;

	cin >> x1;
	cin >> y1;
	cin >> z1;
	cout<<endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	cout<<endl;
	cin >> d;	

	int Xsqrt = (x2-x1)*(x2-x1);
	int Ysqrt = (y2-y1)*(y2-y1);
	int Zsqrt = (z2-z1)*(z2-z1);	
		
	double result = sqrt (Xsqrt+Ysqrt+Zsqrt);
	
	result = result - d;
	cout << result << endl;

	if (result <= 10 && result >=0) {
		cout << "Fire!" << endl;
	}
	else {
		cout << "Target not in range" << endl;
	}



}