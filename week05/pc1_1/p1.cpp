#include<iostream>
#include<cmath>
using namespace std;

bool baseValida ( int base , int numero ) {
	// convertir a string y comparar y cada digito 
	// extraer los digitos por divisiones suscesivas a traves del modulo
	int digit;
	do{
		digit = numero % 10;
		if (digit > base){
			return false;
		}
		numero = int(numero/10);
	}while(numero > 0);
	return true;
 }

 void basen_base10 ( int base , int num , int & rpta ) {
	// abc(B) => a*B² + b*B + c
	int digit;
	int num10 = 0;	
	int i=0;
	do{
		digit = num % 10;
		num10 += digit*pow(base,i++); // 
		num = int(num/10);
	}while(num > 0);
	// 257 (8) -> 7*8^0 +  

	cout << "num10: " << num10 << endl;

	rpta = num10;

 }


void convertir_basen_base10 () {
  	int base, num ;
	do{
		cout << "ingrese un valor entre 2 y 9" << endl;
		cin >> base ;
	} while ( 2 > base || base > 9 ); // 2 < base < 9,   && <-> and, || <-> or 
	// !(2 < base and base < 9)
	do{
		cout << "ingrese  numero valido: " << endl;
 		cin >> num ;		
 	}while (!baseValida(base, num));
	
	int rpta;
	basen_base10 ( base , num , rpta ) ;
	cout << num << " equivale a " << rpta << " en base 10 " << endl;;
 }

/*
	3231
	N = 4573(B=5) , B = 5   -> return false
*/

 

 // N = 32213 (B=4) , B%4   

 int main(){	 
	 convertir_basen_base10();	 
	 return 0;
 }