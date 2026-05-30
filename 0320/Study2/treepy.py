class attack:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right
if __name__=='__main__':
    D = attack(40,None,None)
    E = attack(35,None,None)
    B = attack(20,D,None)
    C = attack(15,E,None)
    A = attack(10,B,C)

    print(A.data)
    print(B.data)
    print(C.data)
    print(D.data)
    print(E.data)

    newD = int(input())
    print(A.data)
    print(B.data)
    print(newD)

    print("태양의 겁 최종 루트 공격력 합계 :",((A.data)+(B.data)+newD))