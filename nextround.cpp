#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , k , count=0 ;
    cin >> n >> k;

    int arr[n+1];

    for(int i=1 ; i<=n ; i++)
    {
        cin >> arr[i];
        
    }
  
        for(int i=1 ; i<=n ; i++)
        {
            
            if(arr[i]>=arr[k] && arr[i]>0){
                count++;
            }
        
        }
        cout<< count;
    
    
    return 0;
}