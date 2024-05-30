class Node
{
public:
    int key;
    int val;
    Node *next;

    Node(int k, int v)
    {
        key = k;
        val = v;
        next = nullptr;
    }

    Node(int k, int v, Node *n)
    {
        key = k;
        val = v;
        next = n;
    }
};

class MyHashMap
{
    vector<Node *> hm;
    int num_buckets = 17;

public:
    MyHashMap()
    {
        hm = vector<Node *>(num_buckets, new Node(0, 0));
    }

    void put(int key, int value)
    {
        int bucket = key % num_buckets;
        Node *ptr = hm[bucket];
        while (ptr->next)
        {
            ptr = ptr->next;
            if (ptr->key == key)
            {
                ptr->val = value;
                return;
            }
        }
        ptr->next = new Node(key, value);
    }

    int get(int key)
    {
        int bucket = key % num_buckets;
        Node *ptr = hm[bucket];
        while (ptr->next)
        {
            ptr = ptr->next;
            if (ptr->key == key)
            {
                return ptr->val;
            }
        }
        return -1;
    }

    void remove(int key)
    {
        int bucket = key % num_buckets;
        Node *prev = nullptr, *ptr = hm[bucket];
        while (ptr->next)
        {
            prev = ptr;
            ptr = ptr->next;
            if (ptr->key == key)
            {
                prev->next = ptr->next;
                delete ptr;
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */