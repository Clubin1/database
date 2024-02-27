#ifndef KEYVALUESTORE_H
#define KEYVALUESTORE_H

#include <unordered_map>
#include <string>

class KeyValueStore {
public:
    KeyValueStore();

    ~KeyValueStore();

    void insert(const std::string& key, const std::string& value);

    std::string retrieve(const std::string& key);

    bool update(const std::string& key, const std::string& value);

    bool remove(const std::string& key);

private:
    std::unordered_map<std::string, std::string> data;
};

#endif