#include <iostream>
using namespace std;

long long int sqrtInt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int Precision, int tempSol)
{
    double factor=1;
    double ans=tempSol;

    for(int i=0; i<Precision; i++)
    {
        factor=factor/10;
        
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number= ";
    cin>>n;

    int tempSol=sqrtInt(n);

    cout<<"Answer is= "<<morePrecision(n, 4, tempSol)<<endl;
    return 0;
}
