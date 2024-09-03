#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b ;
    int arr[5][5];

    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ; j<5 ; j++)
        {
            cin >> arr[i][j];
            
            if(arr[i][j]==1){
                a= i;
                b = j;
            }
        }
    }
    

    a= 2-a;
    b= 2-b;

cout << abs(a)+abs(b);


    
    
    
   




  
    


    return 0;
}