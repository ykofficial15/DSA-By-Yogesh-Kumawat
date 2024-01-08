#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"enter the size of the array"<<endl;
    cin>>s;
    int arr[s];
    cout<<"please enter "<<s<<" elements in the array"<<endl;
    for(int i=0;i<s;i++)
{
    cin>>arr[i];
}
cout<<"array before sorting is "<<endl;
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<endl;
}
cout<<"array after sorting is "<<endl;
for(int i=0;i<s;i++)
{
    for(int j=i+1;j<s;j++)
    {
        if(arr[i]<arr[j])   //you can change the sign to use > or < operations for sorting in the array
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}