class Solution:   
  
    
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        def dfs(vis,dfsvis,graph,i)->bool:
            vis[i] = 1
            dfsvis[i] = 1

            for ele in graph[i]:
                if(vis[ele] == 0):
                    if(dfs(vis,dfsvis,graph,ele)):
                        return True
                elif(dfsvis[ele] == 1):
                    return True
            dfsvis[i] = 0
            return False
    
        graph = defaultdict(list)
        for ele in prerequisites:           
            graph[ele[0]].append(ele[1])        
        V = numCourses
        vis = [0]*V
        dfsvis = [0]*V
        for i in range(0,V):
            if(vis[i] == 0):
                if(dfs(vis,dfsvis,graph,i)):
                    return False        
        return True 
    
    
        
        
        
        
        
        