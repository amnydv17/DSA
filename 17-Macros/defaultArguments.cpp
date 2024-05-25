#include<iostream>
using namespace std;
                            //optional (Default Argument by putting value)
void print(int arr[], int n, int start=0)
{
    for(int i = start; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main(){
    
    int arr[5] = {1, 4, 7, 9, 11};
    int size = 5;

    print(arr, size);
    cout<<endl;
    print(arr, size, 2);
    return 0;
}