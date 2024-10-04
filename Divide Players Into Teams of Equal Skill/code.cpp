class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int sum = skill[0] + skill[n-1];

        for(int i = 0; i < n / 2; i++) {
            if((skill[i] + skill[n-1-i]) != sum) {
              return -1;
            }
        }

        long long res = 0;
        for(int i = 0; i < n / 2; i++) {
            res += (skill[i] * skill[n-1-i]);
        }

        return res;
    }
};