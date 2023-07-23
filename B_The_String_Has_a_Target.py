for _ in range(int(input())):
    n = int(input())
    s = input()
    ind = s.rfind(min(s))  # Find the last ind such that s[ind] = min(s)
    print(s[ind] + s[:ind] + s[ind + 1:])