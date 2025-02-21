class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n==1) return 1; 
        int np=primes.size();
        vector<int> index(np,0);

        int superugly[n];
        superugly[0]=1;

        for(int i=1;i<n;i++){
            long minVal=INT_MAX;
            for(int j=0;j<np;j++){
                minVal=min(minVal,(long)primes[j]*superugly[index[j]]);
            }
            superugly[i]=(int)minVal;
            for(int j=0;j<np;j++){
                if(minVal==(long)primes[j]*superugly[index[j]]){
                    index[j]++;
                }
            }
        }
        return superugly[n-1];
        
    }
};