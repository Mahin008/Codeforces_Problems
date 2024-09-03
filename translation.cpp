#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t , s;
    cin >> t >> s;

    reverse(t.begin(),t.end());

    if(t==s)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }



    return 0;
}