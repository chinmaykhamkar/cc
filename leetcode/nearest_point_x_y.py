
from dis import dis
from turtle import st


def solve(x, y, points):
    
    store = []
    dist = float("inf")
    for a,b in points:
        print(a,b)
        if x==a or y==b:
            dist = min(dist,abs(x-a)+abs(y-b))
            store.append((a,b))                
                
    print(store)
    for ele in store:
        if abs(x-ele[0])+abs(y-ele[1])!=dist:
            store.remove(ele)
    idx = []
    for ele in store:        
        idx.append(points.index(list(ele)))
    print(idx)
            

x = 3
y = 4
points = [[3,4]]
solve(x,y,points)