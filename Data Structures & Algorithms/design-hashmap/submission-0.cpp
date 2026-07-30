class MyHashMap {
private:
    vector<pair<int, int>> data;
public:
    MyHashMap(){}

    void put(const int key, const int value) {
        for (auto & p : data) {
            if (p.first == key) {
                p.second = value;
                return;
            }
        }
        data.push_back({key, value});
    }

    int get(const int key) {
        for (auto & p : data) {
            if (p.first == key) {
                return p.second;
            }
        }
        return -1;
    }

    void remove(const int key) {
        data.erase(
            remove_if(
                data.begin(), 
                data.end(), 
                [key](const pair<int, int> & p){return p.first == key;}
            ),
            data.end()
        );
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */