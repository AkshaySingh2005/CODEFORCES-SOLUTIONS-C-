#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    string s;
    cin>>s;

   int count0 = 0;
   int count1 = 0;

 for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        count0++;

    }
    else {
        count1++;
    }
    
 }
 for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        if(count1){
            count1--;
        }
        else{
            break;
        }
    }
    else if(s[i] == '1'){
        if(count0){
            count0--;
        }
        else{
            break;
        }
    }
 }

 cout<<count1+count0<<endl;



 
    



}

}

