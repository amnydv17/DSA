#include<iostream>
using namespace std;

void colSum(int arr[][3], int row, int col)
{
    for(int col=0;col<3;col++)
    {
        int sum=0;
        for(int row=0;row<3;row++)
        {
           sum = sum + arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Column wise sum is->"<<endl;
    colSum(arr,3,3);

    return 0;
}