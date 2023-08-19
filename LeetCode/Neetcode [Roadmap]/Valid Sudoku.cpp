class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowsCount = board.size();
        int colsCount = board[0].size();
        
        map<int, vector<vector<int>>> mp;
        for (int i = 0; i < rowsCount; i++)
            for (int j = 0; j < colsCount; j++)
                if (board[i][j] != '.') mp[board[i][j]].push_back({i, j});
        
        for (auto it : mp) {
            vector<vector<int>> v = it.second;
            int n = v.size();
            if (n > 1) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i != j) {
                            if (v[i][0] == v[j][0] || v[i][1] == v[j][1]) return false;
                            if (ceil(v[i][0] / 3) == ceil(v[j][0] / 3) 
                            && ceil(v[i][1] / 3) == ceil(v[j][1] / 3)) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};