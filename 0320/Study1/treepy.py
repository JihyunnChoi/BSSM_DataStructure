class TNode:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right

if __name__=='__main__':
    n2 = TNode(20, None, None)
    n3 = TNode(30, None, None)
    n1 = TNode(10, n2, n3)
        
    print(n1.data)
    print(n2.data)
    print(n3.data)