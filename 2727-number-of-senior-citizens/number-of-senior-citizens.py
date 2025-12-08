class Solution:
    def countSeniors(self, details: List[str]) -> int:
        res= 0
        for d in details:
            ten = ord(d[11])- ord("0")
            one= ord(d[12])- ord("0")
            num = one + 10*ten
            if num > 60:
                res += 1
        return res