#include<iostream>
using namespace std;
int main(){
    int s,loc;
    cout<<"enter size of the array"<<endl;
    cin>>s;
    int arr[s];
    cout<<"enter "<<s<<" elements in  the array"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"now the array looks like"<<endl;
       for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the location of the element you want to delete"<<endl;
    cin>>loc;
    loc=loc-1;  // if you remove this condition element will be deleted index wise
    for(int i=loc;i<s;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"array after deletion will be"<<endl;
    for(int i=0;i<s-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}