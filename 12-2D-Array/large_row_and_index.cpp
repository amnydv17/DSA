#include <iostream>
using namespace std;

int largeIndex(int arr[][3],int row, int col)
{
    int maxi=INT_MIN;
    int numIndex=-1;

     for (int row = 0; row < 3; row++)
    {   
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum=sum+arr[row][col];
        }
        if(sum>maxi)
        {
            maxi=sum;
            numIndex=row;
        }
    }
    cout<<"Maximum sum is-->"<<maxi<<endl;
    return numIndex;
}
int main()
{

    int arr[3][3];
    cout << "Enter the Element:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int numIndex=largeIndex(arr,3,3);
    cout<<"Largest row is-->"<<numIndex<<endl;

    return 0;
}
