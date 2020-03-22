from collections import defaultdict,Counter 

""" t = int(input())
cou = []
a = list(map(int,input().split()))
k = defaultdict(int)
for i in range(t):
    k[a[i]] += 1
for key,value in k.items():
    cou.append(value//2)
print(sum(cou)) """

t = int(input())
a = Counter(map(int,input().split()))
ans = 0
for i in a:
    ans += a[i]//2
print(ans)
print(a)

