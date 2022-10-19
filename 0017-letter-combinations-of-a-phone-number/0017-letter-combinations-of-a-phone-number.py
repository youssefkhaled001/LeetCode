class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        MIN = ord('a')
        
        res = []
        nums = []
        
        for i in digits:
            num = int(i)
            nums.append(num)

        if(digits == ''):
            return res

        def solve(s, *args):
            if(len(args) == 0):
                res.append(s)
            else:
                sevenAdder = 0 if args[0] <8 else 1
                for i in range(4 if args[0] == 7 or args[0] == 9 else 3):
                    newS = s
                    char = chr((args[0]-2)*3 + MIN + i + sevenAdder)
                    newS += char
                    solve(newS, *args[1:])




        solve("", *nums)
        return res