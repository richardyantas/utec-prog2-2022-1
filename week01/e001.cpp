#include<iostream>

using namespace std;
// std::cout << "hello world\n";

int main(){
	int suma = 0;
	int count=0;
	for(int i=0; i<100; i++){ // i = i + 1, ejem: i += 2 , i = i + 2   
		if (i%2 != 0){
			cout << "suma: " << suma << ", num: " << i << endl;
			suma = suma + i;
			count += 1;
		}
	}
	cout << "promedio de los numeros impares de [0-100]" << endl;
	cout << suma/count << endl;
	return 0;
}


