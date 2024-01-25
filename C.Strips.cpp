#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char arr[64][64];

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
                {
                    cin>> arr[i][j];
                }
        }

        int f=0;

        for(int i=0; i<8; i++)
        {
            int countr=0;
            for(int j=0; j<8; j++)
                {
                    if(arr[i][j]=='R')
                    {
                        countr++;
                    }
                }
                if(countr==8)
                {
                    cout<<"R"<<endl;
                    break;
                }
        }

        for(int j=0; j<8; j++)
        {
            int countb=0;
            for(int i=0; i<8; i++)
                {
                    if(arr[i][j]=='B')
                    {
                        countb++;
                    }
                }
                if(countb==8)
                {
                    cout<<"B"<<endl;
                    break;
          
                }
        }

    }




    return 0;
}



