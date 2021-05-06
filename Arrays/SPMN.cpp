/*Smallest Positive Missing Number*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number in Array\n";
        cin>>a[i];
    }
    const int N=1e2 +2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0;

    }
    for (int i = 0; i <n; i++)
    {
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for (int i = 1; i <N; i++)
    {
        if(check[a[i]]==false){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    

    
    return 0;
}