#include<iostream>
using namespace std;
int main(){
    int s,val,loc;
    cout<<"enter array size"<<endl;
    cin>>s;
    int arr[s];
    cout<<"enter "<<s<<" elements in the array"<<endl;
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
    cout<<"enter the location where you want to insert the element"<<endl;
    cin>>loc;
    cout<<"enter the value do you want to insert"<<endl;
    cin>>val;
    for(int i=s;i>loc;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[loc]=val;
    cout<<"now the final array will be"<<endl;
    for(int i=0;i<=s;i++)
    {
        cout<<arr[i]<<" ";
    }
}