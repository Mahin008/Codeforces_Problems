#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    string s ;
    char temp ='0';
 
        cin >> s;

    

    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(s[i] > s[j])
            {
                temp = s[i];
                s[i]= s[j];
                s[j] = temp;
            }
        }
    }
    cout << s;
    return 0;
}