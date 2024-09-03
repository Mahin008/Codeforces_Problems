#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, count =0 , p=0;
    cin >> t;
    for(int i=0 ; i<t ; i++)
    {
        int n[3] ;

        for(int i=0 ; i<3 ; i++)
        {
            cin >> n[i];
            if(n[i]==1 || n[i]==0)
                if(n[i]==1){
                    count++;
                }
           

            
        }

        if(count >1)
        {
            p++;
        }
        else{

        }
        count =0;

    }
    cout<< p;


    return 0;
}