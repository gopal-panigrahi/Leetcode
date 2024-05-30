class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        int count = 0;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int k = i + 1; k < arr.size(); k++)
            {
                int left = 0, right = 0;
                for (int j = i; j <= k; j++)
                {
                    right ^= arr[j];
                }

                for (int j = i + 1; j <= k; j++)
                {
                    left ^= arr[j];
                    right ^= arr[j];
                    if (left == right)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};