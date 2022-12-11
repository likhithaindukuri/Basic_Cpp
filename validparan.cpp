
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int>st;
        int n=x.length();
        for(int i=0;i<n;i++)
        {
            if(x[i]=='(' || x[i]=='[' || x[i]=='{')
            {
                st.push(x[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                char c=st.top();
                st.pop();
                if((x[i]==')' &&c=='(') || (x[i]==']' &&
                c=='[') || (x[i]=='}' && c=='{') )
                {

                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
