class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1 && flowerbed[0] == 0) return true;
        if (find(flowerbed.begin(), flowerbed.end(), 1) == flowerbed.end()) {
            if (flowerbed.size() % 2 != 0 && ceil(flowerbed.size() / 2.0) >= n) return true;
            else if (flowerbed.size() % 2 == 0 && flowerbed.size() / 2 >= n) return true;
            else return false;
        }
        int N = flowerbed.size();
        int c = 0, ans = 0;
        bool flag = false;
        for (int i = 0; i < N; i++) {
            if (flowerbed[i] == 1) { c = 0; flag = true; }
            else c++;
            if (!flag) {
                if (c > 0 && c % 2 == 0) ans++;
            } else {
                if (c > 1 && c % 2 != 0) ans++;
                else if (c > 0 && c % 2 == 0 && i == N - 1) ans++;
            }
            if (ans == n) return true;
        }
        return false;
    }
};