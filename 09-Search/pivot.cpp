#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    int arr[7]={7,8,9,11,1,2,3};
    cout<<"Pivot Index is "<<getPivot(arr,7)<<endl;
    return 0;
}