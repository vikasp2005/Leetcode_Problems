class Solution(object):
    l=[0]
    def help(self,n):
        if n<2:
            return n
        if(len(self.l)>=n):
            return self.l[n-1]
        self.l.append(self.help(n-1)+self.help(n-2))
        return self.l[n-1]
    def fib(self, n):
       return self.help(n)
        