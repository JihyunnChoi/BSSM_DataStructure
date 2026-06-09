# 학교 비상구 찾기 프로그램
# BFS(너비 우선 탐색)를 이용하여 비상구(H)를 찾는다.

from collections import deque

# 그래프 생성 (무방향 그래프)
graph = {
    'A': ['B', 'C'],
    'B': ['A', 'D'],
    'C': ['A', 'D', 'E'],
    'D': ['B', 'C', 'F'],
    'E': ['C', 'F', 'G'],
    'F': ['D', 'E', 'H'],
    'G': ['E', 'H'],
    'H': ['F', 'G']
}

# BFS 함수
def bfs(start):
    queue = deque([start])   # 큐 생성
    visited = []             # 방문한 정점 저장

    while queue:
        current = queue.popleft()

        if current not in visited:
            visited.append(current)

            # 비상구 발견
            if current == 'H':
                print("탐색 순서 :", end=" ")
                for place in visited:
                    print(place, end=" ")
                print()
                print("비상구를 찾았습니다!")
                return

            # 연결된 정점을 큐에 추가
            for next_node in graph[current]:
                queue.append(next_node)

    print("비상구를 찾지 못했습니다.")

# 시작 위치 입력
start = input("현재 위치를 입력하세요(A~G): ")

# 입력 확인
if start not in graph or start == 'H':
    print("올바른 위치를 입력하세요.")
else:
    bfs(start)