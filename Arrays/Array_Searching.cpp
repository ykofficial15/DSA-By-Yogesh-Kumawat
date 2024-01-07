#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"enter array size: "<<endl;
    cin>>s;
    int arr[s];
    cout<<"enter "<<s<<" elements in the array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter which element you want to search: "<<endl;
    int val;
    cin>>val;
    for(int i=0;i<s;i++)
    {
        if(val==arr[i])
        {
            cout<<"value"<<val<<" found at index"<<i<<endl;
            break;
        }
    }
    return 0;
}