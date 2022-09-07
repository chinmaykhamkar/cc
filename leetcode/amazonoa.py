


import collections

input1 = "abba"
input2 = "abc"
input3 ="abccabcbadeeefdefehijkj"

store = []
# mp = collections.defaultdict(list)
mp = collections.defaultdict(int)
for i in range(len(input2)):
    mp[input2[i]] = i
print(mp)
s=0
e=0
t=0
while e < len(input2) and s < len(input2):
    e = mp[input2[s]]
    while t<e:
        e = max(e, mp[input2[t]])        
        t+=1
    print(s,e)
    store.append(input2[s:e+1])
    s=e+1
    t=s
print(store)    

newm = collections.defaultdict(list)
for i in range(len(input3)):
    newm[input3[i]].append(i)
      
    

