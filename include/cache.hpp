#pragma once
#include <unordered_map>
#include <string>

template <typename K, typename V>
class Cache {
private:
    std::unordered_map<K, V> data;
public:
    void put(const K& key, const V& value) {
        data[key] = value;
    }

    V get(const K& key) const {
        auto it = data.find(key);
        if (it != data.end()) return it->second;
        throw std::runtime_error("Key not found");
    }

    void remove(const K& key) {
        data.erase(key);
    }

    size_t size() const { return data.size(); }
};
