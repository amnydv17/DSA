#include<iostream>
using namespace std;

bool search(int arr[],int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}

int main(){
    int arr[10]={1,3,23,-3,-5,4,6,1,2,0};
    
    int key;
    cout<<"Enter key value ";
    cin>>key;

    bool found=search(arr,10,key);

    if(found)
    cout<<"Present"<<endl;
    else
    cout<<"Absent"<<endl;
    return 0;
    
}