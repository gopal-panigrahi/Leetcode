class MyHashSet
{
    vector<bool> hm;

public:
    MyHashSet()
    {
        hm = vector<bool>(1000001, false);
    }

    void add(int key)
    {
        hm[key] = true;
    }

    void remove(int key)
    {
        hm[key] = false;
    }

    bool contains(int key)
    {
        return hm[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */