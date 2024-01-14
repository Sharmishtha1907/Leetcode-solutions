class Solution:
    def judgeCircle(self, moves: str) -> bool:
        if moves.count("U")!=moves.count("D"):
            return False
        if moves.count("R")!=moves.count("L"):
            return False
        return True
        
