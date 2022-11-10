class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> stack;
        int n = s.length();
        string result;
        for (int i = 0; i < n; i++)
        {
            if (stack.empty())
                stack.push(s[i]);
            else if (s[i] == stack.top())
                stack.pop();
            else
                stack.push(s[i]);        
        }
        while(!stack.empty())
        {
            result += stack.top();
            stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
