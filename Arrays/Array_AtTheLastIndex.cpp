#include<iostream>
using namespace std;
int main(){
    int s,val;
    cout<<"enter size of the array"<<endl;
    cin>>s;
    cout<<"enter "<<s<<" elements"<<endl;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"now the array will be"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the value that you want to insert in the last index"<<endl;
    cin>>val;
    int act=sizeof(arr)/sizeof(arr[0]);
    arr[act]=val;
    cout<<"final array will be"<<endl;
    for(int i=0;i<=s;i++)
    {
        cout<<arr[i]<<" ";
    }
}