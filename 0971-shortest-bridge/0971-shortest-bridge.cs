public class Solution
{

    public struct Coord
    {
        public Coord(int x, int y)
        {
            X = x;
            Y = y;
        }

        public int X { get; }
        public int Y { get; }
        public override string ToString() => $"({X}, {Y})";
    }

    public Coord FindShoreOfFirstIsland(int[][] grid)
    {
        for (int x = 0; x < grid.Length; x++)
        {
            for (int y = 0; y < grid.Length; y++)
            {
                if (grid[x][y] == 1)
                {
                    return new Coord(x, y);
                }
            }
        }

        return new Coord(-1, -1);
    }

    public IList<Coord> Neighbours(Coord cell, int size)
    {
        var directions = new int[4, 2] { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        List<Coord> neighbours = new List<Coord>();
        for (int i = 0; i < 4; i++)
        {
            var neighbour = new Coord(cell.X + directions[i, 0], cell.Y + directions[i, 1]);
            if (0 <= neighbour.X && neighbour.X < size && 0 <= neighbour.Y && neighbour.Y < size)
            {
                neighbours.Add(neighbour);
            }
        }

        return neighbours;
    }

    public List<Coord> FindFirstIsland(int[][] grid, Coord shoreOfFirstIsland)
    {
        var firstIsland = new List<Coord>();

        var stk = new Stack<Coord>();
        var visited = new Dictionary<Coord, bool>();

        stk.Push(shoreOfFirstIsland);
        visited.Add(shoreOfFirstIsland, true);

        while (stk.Count > 0)
        {
            var cell = stk.Pop();

            firstIsland.Add(cell);

            foreach (var n in Neighbours(cell, grid.Length))
            {
                if (!visited.ContainsKey(n) && grid[n.X][n.Y] == 1)
                {
                    stk.Push(n);
                    visited.Add(n, true);
                }
            }
        }

        return firstIsland;
    }

    public int DistanceToSecondIsland(int[][] grid, List<Coord> firstIsland)
    {
        var visited = new Dictionary<Coord, bool>();
        var q = new Queue<(Coord, int)>();

        foreach (var cell in firstIsland)
        {
            q.Enqueue((cell, 0));
            visited.Add(cell, true);
        }

        while (q.Count > 0)
        {
            var (cell, lvl) = q.Dequeue();

            foreach (var n in Neighbours(cell, grid.Length))
            {
                if (!visited.ContainsKey(n))
                {
                    if (grid[n.X][n.Y] == 1)
                    {
                        return lvl;
                    }
                    else
                    {
                        q.Enqueue((n, lvl + 1));
                        visited.Add(n, true);
                    }
                }
            }
        }

        return -1;
    }

    public int ShortestBridge(int[][] grid)
    {
        var shoreOfFirstIsland = FindShoreOfFirstIsland(grid);
        var firstIsland = FindFirstIsland(grid, shoreOfFirstIsland);
        var distance = DistanceToSecondIsland(grid, firstIsland);
        return distance;
    }
}