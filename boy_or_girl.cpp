#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0;
    char temp;
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(s[i]>s[j]){
                temp =s[j];
                s[j]= s[i];
                s[i] = temp;
            }
        }
    }
    // cout << s;
    for(int i=1 ; i<n ; i++)
    {
        if(s[i]== s[i-1]){
            count++;
        }
    }
    count = n- count;
    if(count % 2==0){
        cout <<"CHAT WITH HER!";
    }
    else{
        cout <<"IGNORE HIM!";
    }
    


    return 0 ;
}