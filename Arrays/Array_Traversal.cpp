#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"enter size of the array: ";
    cin>>s;
    cout<<endl;
    int arr[s];
    cout<<"enter "<<s<< "elements in the array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"The final array will be: ";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}