#include <iostream>
using namespace std;

// while and do differences

int main(){

	int x = 0;
	
	// gets printed despite x being 0
	do {
		cout << "x equals: " << x+1 << endl;
	} while (x != 0);

	x = 0;
	
	// will never get printed 
	while (x != 0){
		
		cout << "x equals: " << x+1 << endl;	
	}
}
