
#include <iostream>
// int a = (2<<29)+(2<<28); on cling
// int a=0b11111111111111111111111111111111;
// int a=0b1111111111111111111111111111111 - 1;
// int a=0b1111111111111111111111111111111 + 1;


#define MAXINT 2<<29
using namespace std;
void fun(int *arr)
{
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray size inside fun() is " << n;
}
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, MAXINT };
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size inside main() is " << n;
    fun(arr);
    return 0;
}