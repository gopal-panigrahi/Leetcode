class Solution {
public:
    static bool compare(pair<vector<int>, int> a, pair<vector<int>, int> b) {
        int a1 = 0, b1 = 0;
        for(int i = 0; i < a.first.size(); i++) {
            if(a.first[i] == 1) { a1++; }
            if(b.first[i] == 1) { b1++; }
        }
        if(a1 == b1) {
            return a.second < b.second;
        } else {
            return a1 < b1;
        }
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<vector<int>, int>> indexedMat;
        for (int i = 0; i < mat.size(); i++) {
            indexedMat.push_back({mat[i], i});
        }

        sort(indexedMat.begin(), indexedMat.end(), compare);
        vector<int> result(k);
        for(int i = 0; i < k; i++) {
            result[i] = indexedMat[i].second;
        }
        return result;
    }
};