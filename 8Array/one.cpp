#include<iostream>
using namespace std;

void printingArray(int arr[], int size)
{
    cout<<"Printing the Array."<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;
}
int main(){
    int arr[15];    //Declare an array

     //Accesing element
    cout<<"Value at 14 index "<<arr[14]<<endl<<endl; 


    // cout<<"Value at 20 index "<<arr[20]<<endl; 

    //Initialising an array
    int second[4]={1,3,5,7};

    //Accesing element
    cout<<"Value at 2 index "<<second[2]<<endl;

    int third[15]={2,5};

    //printing an array
    printingArray(third,15);
    cout<<endl;
    //initialising an array with zeros
    int fourth[15]={0};

    //printing an array
    printingArray(fourth,15);

    cout<<endl;
    //initialising an array with ones[not possible to all initialise with one]
    int fifth[15]={1};

    //printing an array
    printingArray(fifth,15);


    cout<<endl<<"Everything is Fine"<<endl<<endl; 
    return 0;
}