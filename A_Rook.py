for _ in range(int(input())):
    s = input()
    for c in "abcdefgh":
        if c != s[0]:
            print(c + s[1], end=' ')
    for c in "12345678":
        if c != s[1]:
            print(s[0] + c, end=' ')
    print()