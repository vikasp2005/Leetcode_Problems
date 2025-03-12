class Solution {
public:
    int numberOfMatches(int n) {
        if(n<3) return n-1;
        return (n/2)+numberOfMatches((n/2)+(n%2));
    }
};