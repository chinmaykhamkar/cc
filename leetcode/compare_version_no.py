class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
       
       
        ver1 = version1.split('.')
        ver2 = version2.split('.')
        n = len(ver1)
        m = len(ver2)
        i=0
        j=0
        while i<n or j<m:
            v1 = int(ver1[i]) if (i<n) else 0
            v2 = int(ver2[j]) if (j<m) else 0
            if(v1<v2):
                return -1
            if(v1>v2):
                return 1
            if(v1==v2):
                i,j=i+1,j+1
        return 0
            
        
       
        
        return final
        