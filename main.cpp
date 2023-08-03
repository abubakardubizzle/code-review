/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void shiftZeros(int numbers[], int size)
{
    int last_pointer=size-1;
    int swap_variable=0;
    for(int start_pointer=0;start_pointer<=last_pointer;start_pointer++)
    {
        if(numbers[start_pointer]==0)
        {
            swap_variable=numbers[start_pointer];
            numbers[start_pointer]=numbers[last_pointer];
            numbers[last_pointer]=swap_variable;
            last_pointer--;
            start_pointer--;
        }
    }
}
void printArray(int numbers[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int numbers[10]={0,2,5,3,0,1,9,0,4,0};
    shiftZeros(numbers,10);
    printArray(numbers,10);
    return 0;
}