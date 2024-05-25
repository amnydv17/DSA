#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the number of element in array ";
    cin>>size;

    int arr[100];
    int sum=0;
    //Taking input in array
    cout<<"Enter array element."<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"Sum of Array is "<<sum<<endl;
    return 0;
}