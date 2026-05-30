# 1. 4x4 행렬 생성 및 0으로 초기화
adj_mat = [[0] * 6 for _ in range(6)]

# 2. 간선 삽입 함수 정의
def insert_edge(mat, u, v):
    mat[u][v] = 1
    mat[v][u] = 1

# 3. 그래프 출력 함수 정의
def print_graph(mat):
    print("   A B C D")  # 상단 열 레이블
    vertices = ['A', 'B', 'C', 'D', 'E', 'F']
    
    for i in range(len(mat)):
        print(f"{vertices[i]} ", end="") # 좌측 행 레이블
        for j in range(len(mat[i])):
            print(f"{mat[i][j]} ", end="")
        print() # 줄바꿈

# 4. 데이터 입력
insert_edge(adj_mat, 0, 1) # A-B
insert_edge(adj_mat, 0, 2) # A-C
insert_edge(adj_mat, 1, 4) # B-D
insert_edge(adj_mat, 1, 5) # C-D
insert_edge(adj_mat, 2, 3)
insert_edge(adj_mat, 3, 4)
insert_edge(adj_mat, 4, 5)

if adj_mat[1][4]==1:
    print("인접")
else:
    print("인접 안함")

# 5. 결과 출력
print_graph(adj_mat)