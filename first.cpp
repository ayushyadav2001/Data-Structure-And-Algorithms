#include<iostream>
using namespace std;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r","stdin");
    // freopen("output.txt","w","stdout");
    // #endif
    // cout<<"Hello i am learning C++\n";
    int a,b,c;
    cout<<"Enteer the Three numbers";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;

        }
        else{
            cout<<c<<endl;
        }
    }

    return 0;
}