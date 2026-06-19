class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        while (s[i] == ' ')
            i++;

        int sign = 1;

        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-' ? -1 : 1);
            i++;
        }
        while (s[i] == '0')
            i++;

        long long d = 0;
        int plce = 10;
        while (i < n && isdigit(s[i])) {
            d = d * 10 + (s[i] - '0');
            if (d * sign > INT_MAX)
                return INT_MAX;
            if (d * sign < INT_MIN)
                return INT_MIN;

            i++;
        }
        return sign * d;
    }
};
