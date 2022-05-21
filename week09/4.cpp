// CPP Program to demonstrate passing
// an array to a function is always treated
// as a pointer
#include <iostream>
using namespace std;
 
// Note that arr[] for fun is
// just a pointer even if square
// brackets are used
void fun(int arr[]) // SAME AS void fun(int *arr)
{
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray size inside fun() is " << n;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size inside main() is " << n;
    fun(arr);
    return 0;
}