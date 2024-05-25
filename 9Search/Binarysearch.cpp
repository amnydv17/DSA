#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={1,4,7,9,14,15};
    int odd[5]={3,5,8,11,13};

    // int key;
    // cout<<"Enter the value of key= ";
    // cin>>key;

    int evenindex=BinarySearch(even,6,4);
    cout<<"Index of is= "<<evenindex<<endl;

    int oddindex=BinarySearch(odd,5,14);
    cout<<"Index of is= "<<oddindex<<endl;

    return 0;
}