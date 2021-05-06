// Maximum sub Array sum
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[], int n ){
int currSum=0;
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    currSum+=arr[i];
    if(currSum<0){
        currSum=0;
    }
    maxSum=max(maxSum,currSum);

}
return maxSum;
}
int main()
{
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element";
        cin>>arr[i];

    }
    int wrapSum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalSum=0;

    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapSum=totalSum+kadane(arr,n);

    cout<<max(wrapSum,nonwrapsum)<<endl;
    return 0;
}