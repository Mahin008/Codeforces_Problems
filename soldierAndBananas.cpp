#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int k , n , w , b;

    cin >> k >> n >> w;

    for(int i=1 ; i<=w ; i++)
    {
        b= i*k;
        n= n-b;
    }
    if(n>=0)
    cout << 0;

    else{
        cout << abs(n);
    }

    




    return 0;
}