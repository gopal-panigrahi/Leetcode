class Solution
{
public:
    int findChampion(vector<vector<int>> &grid)
    {
        int champion = 0, champion_team = 0;
        for (int team = 0; team < grid.size(); team++)
        {
            int ones = accumulate(grid[team].begin(), grid[team].end(), 0);
            if (champion < ones)
            {
                champion = ones;
                champion_team = team;
            }
        }
        return champion_team;
    }
};