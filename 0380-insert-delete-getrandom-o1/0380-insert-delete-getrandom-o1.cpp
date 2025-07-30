class RandomizedSet {
public:
    unordered_map<int, int> mpp; // {val, index}
    vector<int> keys;

    RandomizedSet() {}

    bool insert(int val) {
        if (mpp.find(val) == mpp.end()) {
            keys.push_back(val);
            mpp[val] = keys.size() - 1;
            return true;
        } else {
            return false;
        }
    }

    bool remove(int val) {
        if (mpp.find(val) != mpp.end()) {
            int index1 = mpp[val];
            int index2 = keys.size() - 1;

            if (index1 == index2) {
                // If it's already the last element, just pop and erase
                mpp.erase(val);
                keys.pop_back();
            } else {
                // Swap with last element, update index, then pop and erase
                mpp[keys[index2]] = index1;
                swap(keys[index1], keys[index2]);
                mpp.erase(val);
                keys.pop_back();
            }
            return true;
        }
        return false;
    }

    int getRandom() {
        int randomIndex = rand() % keys.size();
        return keys[randomIndex];
    }
};