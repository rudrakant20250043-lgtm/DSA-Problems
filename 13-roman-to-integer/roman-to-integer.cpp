class Solution {
public:

    int Value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000;
    }

    int romanToInt(string s) {
        int sum = 0;
        int i = 0;

        while(i < s.size() - 1) {

            if(Value(s[i]) < Value(s[i+1]))
                sum -= Value(s[i]);

            else
                sum += Value(s[i]);

            i++;
        }

        sum += Value(s[s.size()-1]);

        return sum;
    }
};