class Solution {
public:
    int jump(vector<int>& nums) {
      int n=nums.size();
      if(n==1) return 0;
      int j=0,c=0,f=0;
      for(int i=0;i<n-1;i++)
      {
        f=max(f,nums[i]+i);
        if(i==c)
        {
            j++;
            c=f;
            if(c>=n-1) break;
        }
      }
      return j;
    }
};