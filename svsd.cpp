#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct State {
    int bx, by, px, py;
    State(int bx, int by, int px, int py) : bx(bx), by(by), px(px), py(py) {}
};

int minMoves(vector<string>& grid, int box_edge) {
    int N = grid.size();
    int M = grid[0].size();
    int bx, by, px, py;
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 'B') {
                bx = i;
                by = j;
            } else if (grid[i][j] == 'E') {
                px = i;
                py = j;
            }
        }
    }

    queue<State> q;
    vector<vector<vector<vector<bool>>>> visited(N, vector<vector<vector<bool>>>(M,
        vector<vector<bool>>(N, vector<bool>(M, false))));

    q.push(State(bx, by, px, py));
    visited[bx][by][px][py] = true;
    int moves = 0;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; ++i) {
            State curr = q.front();
            q.pop();

            if (curr.bx == px && curr.by == py) {
                return moves;
            }

            int dx[] = {0, 0, 1, -1};
            int dy[] = {1, -1, 0, 0};

            for (int k = 0; k < 4; ++k) {
                int nbx = curr.bx + dx[k];
                int nby = curr.by + dy[k];
                int npx = curr.bx - dx[k] * box_edge;
                int npy = curr.by - dy[k] * box_edge;

                if (nbx >= 0 && nbx < N && nby >= 0 && nby < M &&
                    npx >= 0 && npx < N && npy >= 0 && npy < M &&
                    grid[nbx][nby] != '#' && grid[npx][npy] != '#' &&
                    !visited[nbx][nby][npx][npy]) {
                    visited[nbx][nby][npx][npy] = true;
                    q.push(State(nbx, nby, npx, npy));
                }
            }
        }

        moves++;
    }

    return -1; // Path not found
}

int main() {
    vector<string> grid = {"...",
                           "...",
                           "#.."};

    int box_edge = 2;
    int minMovesToReachEnd = minMoves(grid, box_edge);
    cout << "Minimum number of moves to reach the end: " << minMovesToReachEnd << endl;

    return 0;
}
