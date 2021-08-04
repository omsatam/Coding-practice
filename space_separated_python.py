n,m = map(int,input().split())
for i in range (0,n):
  a = list(map(int, input().split()))
  ans.append(max(a))
print(*ans)
