// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    bool areBracketsBalanced(string s)
    {
        int n = s.size();
        stack<char> st; // to store opening brackets
        char x;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                // Push the element in the stack
                st.push(s[i]);
                continue;
            }

            // IF current current character is not opening
            // bracket, then it must be closing. So stack
            // cannot be empty at this point.
            if (st.empty())
            {
                return false;
            }

            switch (s[i])
            {
            case ')':

                // Store the top element of stack st for compare with closing bracket
                x = st.top();
                st.pop();
                if (x == '{' || x == '[')
                {
                    return false;
                }
                break;

            case '}':

                // Store the top element of stack st for compare with closing bracket
                x = st.top();
                st.pop();
                if (x == '(' || x == '[')
                {
                    return false;
                }
                break;

            case ']':

                // Store the top element of stack st for compare with closing bracket
                x = st.top();
                st.pop();
                if (x == '(' || x == '{')
                {
                    return false;
                }
                break;
            }
        }

        if (st.empty() == true)
        {
            return true;
        }

        return false;
    }
};
