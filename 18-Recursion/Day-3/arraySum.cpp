#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
  if(size==0){
    return 0;
  }
  return arr[size-1]+arraySum(arr,size-1);
}

int main(){
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int arr[size];
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int sum = arraySum(arr,size);
  cout<<"Sum of the array elements is: "<<sum<<endl;
  return 0;
}