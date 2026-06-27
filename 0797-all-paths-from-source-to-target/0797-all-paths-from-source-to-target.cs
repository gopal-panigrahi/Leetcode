public class Solution {
    public IList<IList<int>> AllPathsSourceTarget(int[][] graph) {
        int n = graph.Length - 1;

        var stack = new Stack<int>();
        stack.Push(0);

        var all_paths = new List<IList<int>>();

        var current_path = new List<int>();
        
        while(stack.Count > 0) {
            int cur = stack.Peek();
            if(current_path.Count > 0 && cur == current_path.Last()) {
                stack.Pop();
                current_path.RemoveAt(current_path.Count - 1);
                continue;
            } else {
                current_path.Add(cur);
            }

            if(cur == n) {
                all_paths.Add(current_path.ToList());
            }

            // Console.WriteLine(cur);
            // Console.WriteLine("path: " + string.Join(',', current_path));

            for(int i = 0; i < graph[cur].Length; i++) {
                stack.Push(graph[cur][i]);
            }
        }
        return all_paths;
    }
}