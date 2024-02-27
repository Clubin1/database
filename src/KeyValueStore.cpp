#include "KeyValueStore.h"

KeyValueStore::KeyValueStore() {}
KeyValueStore::~KeyValueStore() {}

void KeyValueStore::insert(const std::string& key, const std::string& value) {
    data[key] = value;
}

std::string KeyValueStore::retrieve(const std::string& key){ 
    if (data.find(key) != data.end()) {
        return data[key];
    } else {
        return ""; 
    }
}

bool KeyValueStore::update(const std::string& key, const std::string& value) {
    if (data.find(key) != data.end()) {
        data[key] = value;
        return true;
    } else {
        return false;
    }
}

bool KeyValueStore::remove(const std::string& key) {
    if (data.find(key) != data.end()) {
        data.erase(key);
        return true;
    } else {
        return false;
    }
}