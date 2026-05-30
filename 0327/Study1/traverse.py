class struct:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right

def inorder(n):
    if n is None:
        return
    inorder(n.left)
    print(n.data, end=' ')
    inorder(n.right)

def preorder(n):
    if n is None:
        return
    print(n.data, end=' ')
    inorder(n.left)
    inorder(n.right)

def Postorder(n):
    if n is None:
        return
    inorder(n.left)
    inorder(n.right)
    print(n.data, end=' ')

if __name__ == '__main__':
    D = struct(40, None, None)
    E = struct(35, None, None)
    B = struct(20, D, E)
    C = struct(15, None, None)
    A = struct(10, B, C)

    print("inorder : ", end='')
    inorder(A)
    print("pre : ", end='')
    preorder(A)
    print("post : ",end='')
    Postorder(A)
