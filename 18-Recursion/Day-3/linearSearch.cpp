#include<iostream>
using namespace std;

void print(int arr[],int size){
  cout<<"Size of Array is: "<<size<<endl;
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

bool linearSearch(int arr[],int size,int key){
  print(arr,size);
  if(size==0){
    return false;
  }
  if(arr[0]==key){
    return true;
  }
  return linearSearch(arr+1,size-1,key);
}

int main(){
  int arr[] = {1,5,6,18,47,9,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  int key = 18;

  bool ans = linearSearch(arr,size,key);
  if(ans){
    cout<<"Element is present in the array"<<endl;
  }else{
    cout<<"Element is not present in the array"<<endl;
  }
  return 0;
}