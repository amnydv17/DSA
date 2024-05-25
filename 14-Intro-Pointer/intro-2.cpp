#include <iostream>
using namespace std;

int main()
{

    // int arr[10]={4,5,6};

    // cout<<" Address of First location of Array->"<<arr;
    // cout<<endl<<arr[0]<<endl;
    // cout<<endl<<" Address of First location of Array->"<<&arr[0];

    // cout<<endl<<"4th ->"<<*arr;
    // cout<<endl<<"5th ->"<<*arr + 1;
    // cout<<endl<<"6th ->"<<*(arr+1);
    // cout<<endl<<"7th ->"<<*(arr)+1;
    // cout<<endl<<"8th ->"<<arr[2];
    // cout<<endl<<"9th ->"<<*(arr+2);

    // int i=1;
    // cout<<endl<<"cahalaki-->"<<i[arr];

    // int temp[10] = {1, 2};
    // cout << sizeof(temp) << endl;
    // cout << "1st->" << sizeof(*temp) << endl;
    // cout << "2nd->" << sizeof(&temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;


//     int a[20] = {1,2,3,5};
//    cout << " ->" << &a[0] << endl;
//     cout << &a << endl;
//    cout << a << endl;

//    int *p = &a[0];
//    cout << p << endl;
//    cout << *p << endl;
//    cout << "-> " << &p << endl;



   int arr[10];

//ERROR
//    arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;


    return 0;
}