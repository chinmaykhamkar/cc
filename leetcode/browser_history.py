username = ["joe","joe","joe","james","james","james","james","mary","mary","mary"]
timestamp = [1,2,3,4,5,6,7,8,9,10]
website = ["home","about","career","home","cart","maps","home","home","about","career"]
from collections import defaultdict
from itertools import combinations
from os import times
webinfo = []
for time,usr,web in zip(timestamp,username,website):
    webinfo.append((time,usr,web))
# print(webinfo)
webinfo.sort(key=lambda x:x[0])

visited = defaultdict(list)

for _,usr,web in webinfo:
    visited[usr].append(web)
# print(visited)

possible = defaultdict(int) 
for usr in visited:
    routes = set(combinations(visited[usr],3))
    for route in routes:
        possible[route] += 1
# print(possible)
maxval, final = max(possible.values()),[]

for r,val in possible.items():
    if val == maxval:
        final.append(r)
# print(final)     

if len(final)>1:
    final.sort() 
print(final[0])  

    
