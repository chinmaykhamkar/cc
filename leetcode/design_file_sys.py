class FileSystem:

    def __init__(self):
        self.mp = defaultdict(int)
        self.mp['']=-1

    def createPath(self, path: str, value: int) -> bool:
        store = path.split('/')
        parent = ('/').join(store[:-1])
        print(store,parent)
        if path in self.mp or parent not in self.mp:
            return False
        self.mp[path] = value
        return True
        
        

    def get(self, path: str) -> int:
        if path not in self.mp:
            return -1
        return self.mp[path]
        


# Your FileSystem object will be instantiated and called as such:
# obj = FileSystem()
# param_1 = obj.createPath(path,value)
# param_2 = obj.get(path)