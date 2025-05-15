class DSU:
    # space complexity: O(n)
    # time complexity: O(1) for all operations, get_intervals is O(n log n) for the sort
    def __init__(self):
        self._parents = {}
        self._size = {}
        self._intervals = {}

    def create_interval(self, x):
        self._parents[x] = x
        self._size[x] = 1
        self._intervals[x] = [x,x]
    
    def get_intervals(self):
        return sorted(list(self._intervals.values()),key=lambda x:x[0])
    
    def find_set(self, x):
        if x not in self._parents:
            return None

        if self._parents[x] != x:
            self._parents[x] = self.find_set(self._parents[x])
        return self._parents[x]

    def union_sets(self, a, b):
        a = self.find_set(a)
        b = self.find_set(b)

        if a is None or b is None:
            return

        if a != b:
            if self._size[a] < self._size[b]:
                a,b = b,a
            self._parents[b] = a
            self._size[a] += self._size[b]

            # straight up delete interval of b
            out_interval = self._intervals[b]
            del self._intervals[b]
            # update a interval with new min and max
            self._intervals[a] = [min(self._intervals[a][0], out_interval[0]), max(self._intervals[a][1], out_interval[1])]
        

class SummaryRanges:

    def __init__(self):
        self._dsu = DSU()

    def addNum(self, value: int) -> None:
        if self._dsu.find_set(value) is not None:
            return
        self._dsu.create_interval(value)    # O(1)
        self._dsu.union_sets(value,value-1) # O(1)
        self._dsu.union_sets(value,value+1) # O(1)

    def getIntervals(self) -> List[List[int]]:
        return self._dsu.get_intervals()    # O(n log n)


# Your SummaryRanges object will be instantiated and called as such:
# obj = SummaryRanges()
# obj.addNum(value)
# param_2 = obj.getIntervals()