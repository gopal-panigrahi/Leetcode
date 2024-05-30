class Solution
{
public:
    unordered_map<int, int> fib_cache;

    int fib(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        if (!fib_cache[n - 1])
        {
            fib_cache[n - 1] = fib(n - 1);
        }
        if (!fib_cache[n - 2])
        {
            fib_cache[n - 2] = fib(n - 2);
        }

        return fib_cache[n - 1] + fib_cache[n - 2];
    }
};