#include<iostream>
using namespace std;

//Function for Minimum Element
int getMin(int Min[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(Min[i]<min)
        {
            min=Min[i];
        }
    }
    return min;
}

//Function for Maximum Element
int getMax(int Max[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(Max[i]>max)
        {
            max=Max[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter the number of element in array ";
    cin>>size;

    int arr[100];
    //Taking input in array
    cout<<"Enter array element."<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Maximum element is "<<getMax(arr,size)<<endl<<endl;
    cout<<"Minimum element is "<<getMin(arr,size)<<endl<<endl;
    return 0;
}