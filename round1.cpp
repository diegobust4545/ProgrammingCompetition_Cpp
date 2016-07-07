#include <iostream>
#include <fstream>

using namespace std;

int shots=0;
int rounds=0;
int destroyerShield = 18;
int magnitude=0;

int main(){
	bool game = true;
	cin>>rounds;
	int totalShots = 0;
	for (int i=0; i < rounds; i++){
		cin>>magnitude;
		//cout<<shots;
		totalShots = totalShots + magnitude;
		//cout << "T: " << totalShots	 << endl;
		magnitude+=magnitude;
	}


	if(totalShots<=destroyerShield){
		cout << "Shield needs to be at least: " << totalShots << endl; 
	}
	

	if(totalShots < 0){
		//cout << "Destroyer is Destroyed" << endl;
		game = false;

	}
	



	return 0;
}