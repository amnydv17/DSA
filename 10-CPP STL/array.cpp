#include<iostream>
#include<array>
using namespace std;

int main(){
    
    int basic[3]={1,2,3};

    array<int,4>a={1,2,3,4};
    //Size of any STL array
    int size=a.size();

    //Print STL Array
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

    //Print Element at index number
    cout<<endl<<"Element at index 3->"<<a.at(3)<<endl;

    //Print to check array is empty or not
    cout<<endl<<"Empty or not->"<<a.empty()<<endl;

    //Print First element STL array
    cout<<endl<<"First Element is->"<<a.front()<<endl;

    //Print Last Element of STL array
    cout<<endl<<"Last Element is->"<<a.back()<<endl; 
    return 0;
}