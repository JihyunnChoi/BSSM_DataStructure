#include <stdio.h>
#define MAX 6

typedef struct GraphType {
    int n; // 정점의 개수
    int adj_mat[MAX][MAX]; // 연결 관계를 저장할 2차원 배열
} GraphType;

// 그래프 초기화: 배열의 모든 값을 0으로 설정
void init(GraphType* g) {
    g->n = MAX;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            g->adj_mat[i][j] = 0;
}

// 간선 삽입: 행렬의 대칭되는 위치에 1을 기록
void insert_edge(GraphType* g, int u, int v) {
    if (u >= g->n || v >= g->n) {
        printf("정점 번호 오류입니다.\n");
        return;
    }
    g->adj_mat[u][v] = 1;
    g->adj_mat[v][u] = 1;
}

// 인접 행렬 출력 함수
void print_adj_mat(GraphType* g) {
    printf("현재 그래프의 인접 행렬 상태:\n");
    for (int i = 0; i < g->n; i++) {
        for (int j = 0; j < g->n; j++) {
            printf("%d ", g->adj_mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    GraphType g;
    init(&g);

    

    insert_edge(&g, 0, 1); // A-B 연결 (0-1)
    insert_edge(&g, 0, 2); // A-C 연결 (0-2)
    insert_edge(&g, 1, 4); // B-D 연결 (1-3)
    insert_edge(&g, 1, 5); // C-D 연결 (2-3)
    insert_edge(&g, 2, 3);
    insert_edge(&g, 3, 4);
    insert_edge(&g, 4, 5);

    print_adj_mat(&g);
    if( g.adj_mat [1][4] == 1){
            printf("인접합니다.\n");
    }
    else{
        printf("인접하지 않습니다.\n");
        
    }

    for(int k = 0; k<6; k++){
        if (g.adj_mat[0]){
            printf("%d",g.adj_mat[0][k]);
        }
    }


    return 0;
}