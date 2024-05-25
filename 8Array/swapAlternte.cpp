#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n)
{
    
    for(int i=0; i<n; i+=2)
    {
        if(i+1<n)
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[6]={1,0,3,2,4,7};
    int odd[5]={5,-2,0,-4,7};

    swapAlternate(even,6);
    printArray(even,6);

    cout<<endl;
    
    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;
}