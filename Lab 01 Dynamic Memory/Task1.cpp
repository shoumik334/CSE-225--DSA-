#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of an array"<<endl;

    cin >> size;
    int*arr = new int [size];
    cout << "Enter the Elements now: "<<endl;

    for (int i=0;i<size;i++)
    {
        cin>> arr[i];
    }
    cout <<"Printed Array: "<<endl;

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    delete[]arr;
    return 0;


}