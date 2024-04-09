class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        bool res = true;
        int n = str.size();
        int i = 0;
        int j = n - 1;

        while (i < n / 2 && res) {
            if (str[i] != str[j]) {
                res = false;
            }
            i++;
            j--;
        }

        return res;
    }
};