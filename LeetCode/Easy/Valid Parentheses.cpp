class Solution {
public:
    bool isValid(string s1) {
         stack<int> s;
        
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]=='(' || s1[i]=='[' || s1[i]=='{')
            {
                s.push(s1[i]);
            }
            else
            {
                if(!s.empty())
                {
                     if((s.top()=='(' && s1[i]==')') || (s.top()=='[' && s1[i]==']') || (s.top()=='{'&& s1[i]=='}'))
                     {
                        s.pop();
                     }
                     else
                     {
                         return false;
                     }
                }
                 else
                     {
                         return false;
                     }
            }
        }
        
        return s.empty();
    }
};