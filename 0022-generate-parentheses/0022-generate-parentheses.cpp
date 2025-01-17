class Solution {
public:
    vector<string> construct(int ob,int cb,int n,string t,vector<string> res)
    {
        if(ob==cb && ob+cb==2*n)
        {
            res.push_back(t);
            return res;
        }
        if(ob<n)
        {
            res=construct(ob+1,cb,n,t+'(',res);
        }
        if(cb<ob)
        {
            res=construct(ob,cb+1,n,t+')',res);
        }
        return res;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        return construct(0,0,n,"",res);
    }
};