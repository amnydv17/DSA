#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
  int size = e-s+1;
  cout<<"Size of Array is: "<<size<<endl;
  for(int i=s;i<=e;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int key){
  cout<<endl;
  print(arr,s,e);
  if(s>e){
    return false;
  }
  int mid = s + (e-s)/2;
  cout<<"Mid: "<<mid<<endl;

  if(arr[mid]==key){
    return true;
  }
  if(arr[mid]<key){
    return binarySearch(arr,mid+1,e,key);
  }else{
    return binarySearch(arr,s,mid-1,key);
  }
}
int main(){
  int arr[6] = {1,5,6,8,9,10};
  int size = 6;
  int key = 10;

  bool ans = binarySearch(arr,0,size-1,key);
  if(ans){
    cout<<"Element is present in the array"<<endl;
  }else{
    cout<<"Element is not present in the array"<<endl;
  }
  return 0;
}