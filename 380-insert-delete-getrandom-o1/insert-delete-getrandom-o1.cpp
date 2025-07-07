#include <vector>
#include <unordered_map>
#include <cstdlib>
using namespace std;

class RandomizedSet {
public:
    vector<int> vec;
    unordered_map<int, int> mp;

    RandomizedSet() {
        // Constructor does nothing special
    }

    bool insert(int val) {
        // If val is already present, return false
        if (mp.find(val) != mp.end()) return false;

        // Else insert at the end of the vector and store its index in the map
        vec.push_back(val);
        mp[val] = vec.size() - 1;
        return true;
    }

    bool remove(int val) {
        // If val not present, cannot remove
        if (mp.find(val) == mp.end()) return false;

        // Get index of val to remove and the last element
        int index = mp[val];
        int lastElement = vec.back();

        // Move the last element to the position of val to remove
        vec[index] = lastElement;
        mp[lastElement] = index;

        // Remove last element from vector
        vec.pop_back();

        // Remove val from map
        mp.erase(val);

        return true;
    }

    int getRandom() {
        int n = vec.size();
        int randomIndex = rand() % n;
        return vec[randomIndex];
    }
};
