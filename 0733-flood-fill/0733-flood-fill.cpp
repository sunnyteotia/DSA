class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();        // rows
        int m = image[0].size();     // cols

        int startColor = image[sr][sc];
        if (startColor == color) return image; // avoid infinite loop

        queue<pair<int,int>> q;
        q.push({sr, sc});
        image[sr][sc] = color;

        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];

                // ✅ Correct boundary checks
                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

                if (image[nx][ny] == startColor) {
                    image[nx][ny] = color;
                    q.push({nx, ny});
                }
            }
        }
        return image;
    }
};
