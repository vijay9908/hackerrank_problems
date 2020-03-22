q , w = map(int,input().split())
a = list(map(int,input().split()))
b = int(input())
a.remove(a[w])
k = sum(a)
if(k//2 == b):
    print("Bon Appetit")
else:
    print(abs(b-k//2))