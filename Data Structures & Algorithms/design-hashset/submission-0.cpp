class MyHashSet {
public:

    set<int> ans;

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!ans.contains(key)){
            ans.insert(key);
        }
    }
    
    void remove(int key) {
        if(ans.contains(key)){
            ans.erase(key);
        }
    }
    
    bool contains(int key) {
        return ans.contains(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */