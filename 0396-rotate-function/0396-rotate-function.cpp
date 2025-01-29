class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();

        if (n==1) return 0;

        int allsum=0;
        int first=0;
        for(int i=0;i<n;i++)
        {
            first+=i*nums[i];
            allsum+=nums[i];
        } 
        int max=first;       
        for(int i=n-1;i>0;i--)
        {
            first=first+allsum-n*nums[i];

            max=max>first?max:first;
        }

        return max;
    }
};