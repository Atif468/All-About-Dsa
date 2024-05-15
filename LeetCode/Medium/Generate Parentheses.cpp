class Solution {
public:
    vector<string> res;

    void dfs(string cur, int open, int close, int n)
    {
        if (cur.length() == 2 * n)
        {
            if (open == close) res.push_back(cur);
            return;
        }

        if (open < n) dfs(cur + "(", open + 1, close, n);
        if (open > close) dfs(cur + ")", open, close + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        dfs("", 0, 0, n);
        return res;

    }
};