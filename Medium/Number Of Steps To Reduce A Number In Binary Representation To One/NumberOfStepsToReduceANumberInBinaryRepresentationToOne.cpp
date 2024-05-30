class Solution
{
public:
    int ascii(char c)
    {
        return c - '0';
    }

    int numSteps(string s)
    {
        int steps = 0;
        int carry = 0;
        for (int i = s.length() - 1; i > 0; i--)
        {
            if ((ascii(s[i]) + carry) & 1)
            {
                steps += 1;
                carry = 1;
            }
            steps += 1;
        }

        return steps + carry;
    }
};