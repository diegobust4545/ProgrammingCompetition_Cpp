#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

int banthas;
int deaths;
int born;
int taken = 3;
int years;


int main(){
	cin >> banthas;
	cin >> years;
	for(int i = 0; i < years; i++){
		deaths = (banthas/20);
		born = (banthas/16) - 1;
		if(banthas > 10){
			taken = 3;
			banthas = banthas - taken;
		}
		else if(banthas < 10){
			taken = 0;
		}
		banthas = banthas + born;
		banthas = banthas - deaths;
		if(banthas == 0){
			cout << "After " << i << " years there are no more banthas!" << endl;
			return 0;
		}

	}
	cout << "After " << years << " years there are " << banthas << " banthas."<< endl;
	return 0;
}