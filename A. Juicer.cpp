#include <iostream>
using namespace std;


int main(){
    int n,b,d;cin>>n>>b>>d;

    int arr[n];

    int sum =0;
    int count=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        


    }

    for(int i=0;i<n;i++){
        if(arr[i]>b){
            continue;
        }
        else{
            sum +=arr[i];
            if(sum>d){
                count++;
                sum=0;

            }

        }
    }

    cout<<count<<endl;




}