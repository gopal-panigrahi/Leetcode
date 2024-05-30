class Solution
{
public:
    vector<vector<int>> result;
    vector<int> current;

    void solve(vector<int> &nums, vector<bool> used)
    {
        bool all_used = true;
        for (bool i : used)
        {
            all_used &= i;
        }
        if (all_used)
        {
            result.push_back(current);
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (!used[i])
                {
                    used[i] = true;
                    current.push_back(nums[i]);
                    solve(nums, used);
                    current.pop_back();
                    used[i] = false;
                }
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        solve(nums, vector<bool>(nums.size(), false));
        return result;
    }
};