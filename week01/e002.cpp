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
	//	Index ->  0 1 2 3 4 5
	//  Input ->  1 5 3 2 7 2;    Input [2-4] :    3 + 2 + 7 = 12
	for(int i=0; i<cantidad; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	int a=2, b=4;
	int s=0;
	for(int i=a; i<=b; i++){
		s = s + arr[i];
	}
	cout << "suma de elementos en el intervalo [" << a<< "," << b << "] :" << s << endl;

	return 0;
}

