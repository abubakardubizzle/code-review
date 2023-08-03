#include<iostream>

using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    if(n <= 1)
    {
        return;
    }
    int countZeros = 0;
    int insertionPoint = 0;
    for(int index =0; index <n; index++)
    {
        if(arr[index] == 0)
        {
            countZeros++;
        }
        else
        {
            arr[insertionPoint] = arr[index];
            insertionPoint++;
        }
    }
    for(int appendIndex = n -countZeros; appendIndex < n; appendIndex++)
    {
        arr[appendIndex] = 0;
    }
}
