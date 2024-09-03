#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s ;
    int num[100];
    
    cin>> s;
    int j=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            
            num[j]=s[i]-'0';
            
            j++;
               
        }
        
        
    }
    
    
    sort(num , num+j);
    cout << endl;
    for(int i=0 ; i<j ; i++)
    {
        if(i>0 && i<j)
        cout<<"+";
        cout << num[i];
    }

    
    
    

    //  if(num.size()==1){
    //     cout<< num[0];
    // }



    return 0;
}