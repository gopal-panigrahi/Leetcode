class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int count = 0;
        vector<int> a(s.length() + 1), b(s.length() + 1), c(s.length() + 1);

        for (int i = 0; i < s.length(); i++)
        {
            a[i + 1] = a[i];
            if (s[i] == 'a')
            {
                a[i + 1]++;
            }

            b[i + 1] = b[i];
            if (s[i] == 'b')
            {
                b[i + 1]++;
            }

            c[i + 1] = c[i];
            if (s[i] == 'c')
            {
                c[i + 1]++;
            }
        }
        for (int j = 0; j < s.length(); j++)
        {
            a |= s[j] == 'a';
            b |= s[j] == 'b';
            c |= s[j] == 'c';

            if (a && b && c)
            {
                count += s.length() - j;
                break;
            }
        }
        return count;
    }
};