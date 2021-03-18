def inv(s):
        rs = ''
        index = len(s)
        while index > 0:
                rs += s[index - 1]
                index = index - 1
        return rs
print(inv('correr'))
