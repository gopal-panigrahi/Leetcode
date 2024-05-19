// https://leetcode.com/problems/design-an-ordered-stream

class OrderedStream {
  vector<string> stream;
  int currptr = 0;

public:
  OrderedStream(int n) { stream.resize(n + 1); }

  vector<string> insert(int idKey, string value) {
    stream[idKey - 1] = value;
    vector<string> result;

    while (!stream[currptr].empty()) {
      result.push_back(stream[currptr++]);
    }
    return result;
  }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */