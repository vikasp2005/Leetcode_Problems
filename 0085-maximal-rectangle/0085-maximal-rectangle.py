class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        def main(a):
            stack = [] # key: (index, height)

            ans = 0
            for i in range(len(a)):
                insert_index = i
                while stack and stack[-1][1] > a[i]:
                    index, height = stack.pop()
                    insert_index = index
                    ans = max(ans, height*(i-index))

                stack.append((insert_index, a[i]))

            while stack:
                index, height = stack.pop()
                ans = max(ans, height*(len(a)-index))

            return ans
        
        con_cu = [0]*len(matrix[0])
        ans = 0
        for i in range(len(matrix)):
            new_con_cu = matrix[i]
            for j in range(len(con_cu)):
                x = int(new_con_cu[j])
                if x == 0:
                    con_cu[j] = 0
                else:
                    con_cu[j] += 1
            #print(con_cu)
            ans = max(ans, main(con_cu))
        return ans