#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    string  stns;
    cin >> stns;

    for(int i=1 ; i<n ; i++)
    {
        if(stns[i]==stns[i-1])
            count++;


    }


    cout << count;


    return 0;
}