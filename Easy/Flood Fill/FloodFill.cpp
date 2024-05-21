class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        stack<vector<int>> st;
        int reference_color = image[sr][sc];
        int m = image.size();
        int n = image[0].size();

        st.push({sr, sc});
        while (!st.empty()) {
            vector<int> p = st.top();
            st.pop();
            if (p[0] < 0 || p[0] >= m || p[1] < 0 || p[1] >= n) {
                continue;
            }

            if (image[p[0]][p[1]] == reference_color &&
                image[p[0]][p[1]] != color) {
                image[p[0]][p[1]] = color;
                st.push({p[0], p[1] - 1});
                st.push({p[0], p[1] + 1});
                st.push({p[0] - 1, p[1]});
                st.push({p[0] + 1, p[1]});
            }
        }
        return image;
    }
};