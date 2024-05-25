#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"Reached "<<src<<" Destination "<<dest<<endl;
    if(src==dest){ // base case
        cout<<"Reached Home"<<endl;
        return;
    }
   
    src++; // Ek step aage badho
    reachHome(src,dest); //recursive call
}
int main(){
    
    int src = 1;
    int dest = 11;

    reachHome(src,dest);

    return 0;
}