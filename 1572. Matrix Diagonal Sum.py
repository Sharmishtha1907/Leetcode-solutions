class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
       s=0
       l=len(mat)
       for i in range(l):
           if(i!=l//2):
               s=s+mat[i][i]+mat[i][l-i-1]
           elif(l%2!=0):
               s=s+mat[i][i]
           else:
              s=s+mat[i][i]+mat[i][l-i-1] 
       return s
