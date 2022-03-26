/*
	Topic:
		Array
		Switch

	Description:
		input:  [2,7,13,2,8,9...],  cantidad < 100, i=0, j=5 
		output: 21
*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char** argv){
	// i=0
	// i++ , i=i+1 <->  ++i i=0
	// int i=0;
	// cout << "case 1: " << i++ << endl;	
	// i=0;
	// cout << "case 2: " << ++i << endl;

	// int arr[100]
	int arr[argc+1];
	cout << "cantidad: " << argc << endl;
	int cantidad = argc-1; // 3

	for(int i=0; i<cantidad; i++){ // i: 0 1 2
		arr[i] = atoi(argv[i+1]);
	}
	string s = "7 8 9 10 7  0 8 1 0 0 1\n";
	for(int i=0; i<cantidad; i++){
		cout << arr[i] << " ";
	}

	for(int i=0; i<cantidad; i++){
		for(int j=0; j<cantidad; j++){
			// pendiente
		}
	}


	return 0;
}

