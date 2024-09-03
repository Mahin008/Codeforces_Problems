#include<bits/stdc++.h>
using namespace std;

int main()
{   
    long long int n;
    cin >> n;
    int s;
    int i=0 , j=0;
    while(n!=0)
    {
        
        s= n%10;
        if(s==4 || s==7)
        j++;

        n= n/10;


    }
    
    if(j==7 || j==4)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    

    

    return 0;
}