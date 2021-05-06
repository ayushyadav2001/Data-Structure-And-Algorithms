/*if a array og size N and find two sub array that give sum of S*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int s;
    cout<<"Enter the Sum you want to find";
    cin>>s;
   
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter elements in Array";
        cin>>a[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<j<<endl;

    }
    while(j<n ){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;

    return 0;
}