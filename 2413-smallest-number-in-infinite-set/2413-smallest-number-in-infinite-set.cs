public class SmallestInfiniteSet {

    private bool[] _numberSet; 
    private int _smallest = 1;
    public SmallestInfiniteSet() {
        _numberSet = new bool[1002];
    }
    
    public int PopSmallest() {
        int smallestVal = _smallest;
        _numberSet[_smallest] = true;
        while(_numberSet[_smallest]) {
            _smallest++;
        }
        return smallestVal;
    }
    
    public void AddBack(int num) {
        if(num < _smallest) {
            _smallest = num;
        }        
        _numberSet[num] = false;
    }
}

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet obj = new SmallestInfiniteSet();
 * int param_1 = obj.PopSmallest();
 * obj.AddBack(num);
 */