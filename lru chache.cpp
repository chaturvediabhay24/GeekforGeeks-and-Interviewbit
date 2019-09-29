#include<bits/stdc++.h>

int cap;
list<int> l;
map<int, int> m;
map<int, list<int>:: iterator > t;

LRUCache::LRUCache(int capacity) {
    cap=capacity;
    l.clear();
    m.clear();
    t.clear();
}

int LRUCache::get(int key) {
    if(m.find(key)==m.end()){
        return -1;
    }else{
        l.erase(t[key]);
        l.push_front(key);
        t[key]=l.begin();
        return m[key];
    }
}

void LRUCache::set(int key, int value) {
    
    
    
    if(m.find(key)==m.end() and l.size()<cap){
        m[key]=value;
        l.push_front(key);
        t[key]=l.begin();
    }else if(m.find(key)==m.end() and l.size()>=cap){
        int k=l.back();
        l.pop_back();
        m[key]=value;
        l.push_front(key);
        t[key]=l.begin();
        m.erase(k);
        t.erase(k);
    }
    else{
        l.erase(t[key]);
        l.push_front(key);
        t[key]=l.begin();
        m[key]=value;
    }
}

