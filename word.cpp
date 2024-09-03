#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    cin >> s;
    int u=0 , l=0;

    for(int i=0 ; i<s.length() ; i++)
    {   
        if(s[i]>='a' && s[i]<='z')
        {
            l++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            u++;
        }


    }
    

    if(l>u || l==u){
        for(int i=0 ; i<s.length() ; i++)
        {
            cout << (char)tolower(s[i]);
            
        }
        
    }
    else if(u>l ){
        for(int i=0 ; i<s.length() ; i++)
        {
            cout << (char)toupper(s[i]);
        }
        
    }
    




    return 0;
}