#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n , out , in , r=0;
    cin >> n;
    int max = r;
    while(n--)
    {
        
        cin >> out >> in;
        r= r-out+in ;
        if(r>max)
        max=r;

        
        
    }
    cout << max;

    return 0;
}