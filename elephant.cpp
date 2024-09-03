#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , count=0;
    cin >> n;
    

    if(n==1 || n==2 || n==3 || n==4 || n==5)
        cout << 1;
    else if(n>5){

   while(n!=0){
        n= n-5;
        count++;
        if(n==1 || n==2 || n==3 || n==4 || n==5){
            
           count++;
           break; 
        }
        
   }
    
    cout << count;
   }

    

    return 0;
}