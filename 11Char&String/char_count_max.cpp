#include<iostream>
using namespace std;


char getMaxOccCharacter(string s)
{
    int arr[26]={0};
    //create array for count of character
    for(int i=0;i<s.length();i++)
    {
        int number=0;
        char ch=s[i];
        if(ch>='a' && ch<='z')
        {
            number=ch-'a'; //get index number for that character in array
        }
        else
        {
            number=ch-'A';
        }
        arr[number]++;  //increase count of that character in array value
    }

    int maxi=-1,ans=0;//ans store index number of that max occ char
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];    //store index of max occ char.
        }
    }
    int finalAns=ans+'a';  //convert index number in char.
    return finalAns;
}   
int main(){
    
    string s;
    cout<<"Enter Your String->"<<endl;
    cin>>s;

    cout<<endl;

    cout<<"Maximum occ. char->"<<getMaxOccCharacter(s)<<endl;
    cout<<endl;
    return 0;
}