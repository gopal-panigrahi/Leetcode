public class RecentCounter {
    private readonly List<int> _pings;
    private int start = 0;

    public RecentCounter() {
        _pings = new List<int>();
    }
    
    public int Ping(int t) {
        _pings.Add(t);
        while((t-_pings[start]) > 3000) {
            start++;
        }
        return _pings.Count() - start;
    }
}

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter obj = new RecentCounter();
 * int param_1 = obj.Ping(t);
 */