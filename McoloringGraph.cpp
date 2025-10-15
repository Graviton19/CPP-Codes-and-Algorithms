class Solution {
public:
    // Check if it's safe to color 'node' with 'usedColor'
    bool isSafe(int node, vector<int> &color, vector<vector<int>> &edges, int usedColor) {
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            if ((u == node && color[v] == usedColor) ||
                (v == node && color[u] == usedColor))
                return false;
        }
        return true;
    }

    bool solve(int node, vector<int> &color, int m, int v, vector<vector<int>> &edges) {
        if (node == v) return true;

        for (int c = 1; c <= m; c++) {
            if (isSafe(node, color, edges, c)) {
                color[node] = c;
                if (solve(node + 1, color, m, v, edges))
                    return true;
                color[node] = 0; // backtrack
            }
        }
        return false;
    }

    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        vector<int> color(v, 0);
        return solve(0, color, m, v, edges);
    }
};
