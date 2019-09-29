#include "matching_brackets.h"

#include <string>
#include <stack>
using namespace std;

namespace matching_brackets {
    bool check(std::string seq)
    {
        stack<char> st;
        int size = seq.size();
        for(int i = 0; i < size; i++)
        {
            if(seq[i] == '(' || seq[i] == '{' || seq[i] == '[')st.push(seq[i]);
            else
            {
                if(seq[i] == ')')
                {
                    if(st.empty() || st.top() != '(')return false;
                    st.pop();
                }
                else if(seq[i] == '}')
                {
                    if(st.empty() || st.top() != '{')return false;
                    st.pop();
                }
                else if(seq[i] == ']')
                {
                    if(st.empty() || st.top() != '[')return false;
                    st.pop();
                }
                
            }
        }
        return st.size() == 0;
    }

}  // namespace matching_brackets
