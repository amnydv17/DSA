#include<iostream>
using namespace std;

void sayDigits(int n, string num[]){
  if(n==0){
    return;
  }
  int digit = n%10;
  n = n/10;
  sayDigits(n,num);

  cout<<num[digit]<<" ";
}

int main(){
  string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  int n;
  cout<<"Enter the number: ";
  cin>>n;
 
 cout<<endl;

 sayDigits(n,num);


  return 0;
}