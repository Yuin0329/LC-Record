class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> grid(n, vector<int>(m, 0));

        for (auto& s : sources) {
            int r = s[0], c = s[1], color = s[2];
            grid[r][c] = max(grid[r][c], color);
        }

        vector<pair<int, int>> frontier;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) {
                    frontier.push_back({i, j});
                }
            }
        }

        vector<vector<int>> cand(n, vector<int>(m, 0));
        vector<vector<int>> seen(n, vector<int>(m, 0));
        int stamp = 0;

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while (!frontier.empty()) {
            stamp++;
            vector<pair<int, int>> cells;

            for (auto& p : frontier) {
                int r = p.first, c = p.second;
                int color = grid[r][c];

                for (int k = 0; k < 4; k++) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];

                    if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
                    if (grid[nr][nc] != 0) continue;

                    if (seen[nr][nc] != stamp) {
                        seen[nr][nc] = stamp;
                        cand[nr][nc] = color;
                        cells.push_back({nr, nc});
                    } else {
                        cand[nr][nc] = max(cand[nr][nc], color);
                    }
                }
            }

            frontier.clear();
            for (auto& p : cells) {
                int r = p.first, c = p.second;
                grid[r][c] = cand[r][c];
                frontier.push_back({r, c});
            }
        }

        return grid;
    }
};