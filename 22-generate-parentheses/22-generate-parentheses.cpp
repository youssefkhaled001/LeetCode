class Solution {
public:
    vector<string> res;
    void solve(int n, int opened, int closed, string s)
    {
        if(closed == n)
            return;
        
        string s1=s,s2=s;
        if(opened < n)
        {
            s1+="(";
            solve(n,opened+1, closed, s1);
        }
        if(opened > closed && closed < n)
        {
            s2+=")";
            solve(n,opened,closed+1, s2);
            if(closed+1 == n)
                res.push_back(s2);
        }
       
        return;
    }
    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return res;
    }
};