#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,4,5,3,4,2,6,45,6,0};
    int target=6;
    int size = 10;
    for (int i = 0; i<size-1; i++){
        for (int j=i+1;j<size-1;j++){
            if (arr[i]+arr[j]==target){
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<"Not found";
    cout<<"Usman Conflict Merge"<<endl;
    return 0;
}