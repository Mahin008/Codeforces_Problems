#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , a;
    
    int count=0 ;

    cin >> s;
    sort(s.begin(), s.end());

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i+1]!=s[i])
        {
            
            a+=s[i];
            
        }
        
        
    }
    
    for(int i=0 ; i<a.size() ; i++)
    {
        count=0;

        for(int j=0 ; j<s.size() ; j++)
        {
            if(a[i]==s[j])
            {
                count++;
            }
            
        }
        cout << a[i] <<" : " <<count;
        cout << endl;
    }


    return 0;
}