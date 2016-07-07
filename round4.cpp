#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int numItems;
string item;
int value=0;
int haul1;
int haul2;
bool end = true;

int main(){
	cin >> numItems;
	cin.ignore();
	for(int i = 0; i<numItems; i++) {
	    getline(cin, item);
	    if (item == "Shield Plate"){
	    	value+=1;
	    }
	    else if (item == "Telesponder"){
	    	value+=1;
	    }
	    else if (item == "Flux Converter"){
	    	value+=2;
	    }
	    else if (item == "Power Damper"){
	    	value+=3;
	    }
	    else if (item == "Stabilizer"){
	    	value+=5;
	    }
	    else if (item == "Hydrobooster"){
	    	value+=6;
	    }
	    else {
	    	cout << "Unusual Haul" << endl;

	    	return 0;
	    }


	    while (value >= 4){
	    	haul1++;
	    	value=value-4;
		 
		}


	}
	cout << haul1 << " and " << value << " quarter portions ";

	return 0;
}