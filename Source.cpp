#include <iostream>
#include <vector>
#include <time.h>

using namespace std;


int main(){
	vector <int> vect1;

	srand((time(NULL)));     //initialise random seed 
	for (int i = 0; i < 20; i++){
		int b = rand() % 20 + 1;       //generating random numbers from 1 to 20
		vect1.push_back(b);
	}

	vector <int>::iterator t = vect1.begin(); //create iterator
	while (t != vect1.end()){
		cout << *t << " " << endl;
		t++;
	}
	return 0;

}