class Solution(object):
    def solveNQueens(self, n):
        """
        :type n: int
        :rtype: List[List[str]]
        """
        if n==1:
            return [["Q"]]
        elif n==2 or n==3:
            return []
        res=[]
        def dfs_possibilities(i,l,r,m,arr):
            if i==n:
                res.append(arr)
            else:
                l=l[1:]+[0]
                r=[0]+r[:-1]
                for j in range(n):
                    if l[j]==r[j]==m[j]==0:
                        l[j]=r[j]=m[j]=1
                        dfs_possibilities(i+1,l,r,m,arr+[("."*j)+"Q"+("."*(n-j-1))])
                        l[j]=r[j]=m[j]=0
        dfs_possibilities(0,[0]*n,[0]*n,[0]*n,[])
        return res