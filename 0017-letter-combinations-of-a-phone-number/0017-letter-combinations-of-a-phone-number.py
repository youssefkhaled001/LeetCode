class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if(digits == ''):
            return []
        
        dict = {'2': 'abc', '3':'def','4':'ghi', '5':'jkl', '6':'mno', '7': 'pqrs', '8':'tuv','9':'wxyz'}
        res = []

        def solve(s, *args):
            if(len(args) == 0):
                res.append(s)
            else:
                for i in dict[args[0]]:
                    solve(s+i, *args[1:])
               

        solve("", *digits)
        return res