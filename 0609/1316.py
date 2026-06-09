# 학교 비상구 찾기 프로그램
# BFS 사용 (직접 구현한 큐 사용)

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
    queue = []          # 큐 생성
    visited = []        # 방문한 정점 저장

    queue.append(start) # enqueue

    while len(queue) != 0:
        current = queue.pop(0) # dequeue

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

            # 연결된 정점을 큐에 삽입
            for next_node in graph[current]:
                queue.append(next_node)

    print("비상구를 찾지 못했습니다.")

# 시작 위치 입력
start = input("현재 위치를 입력하세요(A~G): ")

if start not in graph or start == 'H':
    print("올바른 위치를 입력하세요.")
else:
    bfs(start)