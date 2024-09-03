#include<bits/stdc++.h>
using namespace std;

int main()
{  
        int t, count=0;
        cin >> t;
        for(int i=0 ; i<t ; i++)
        {
    
            string s , s2;
        
            cin >> s;
            for(int i=0 ; i<s.length(); i++)
            {
                if(s[i]>='a' && s[i]<= 'z')
                {
                    count++;
                    
                }
            }
            if(count==s.length())
            {
            s2 = s;
            reverse(s.begin() , s.end());

            if(s2 == s){
                cout <<"YES"<<endl;
            }
            else{
                cout << "NO"<< endl;
            }
            }
            count=0;
           

        }


    return 0;
}