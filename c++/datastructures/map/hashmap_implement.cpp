#include <iostream>

using namespace std;

template <typename Key, typename Value>
class HashMap {
public:
HashMap(int sizeHint = 10001);
~HashMap();

bool isEmpty() const { return size() == 0; }
 int size() const { return count; }

bool containsKey(const Key& key) const;
 void put(const Key& key, const Value& value);
 Value get(const Key& key) const;
 Value& operator[](const Key& key);

private:
 struct node {
 Key key;
 Value value;
 node *next;
 };

 node **buckets;
 int numBuckets;
 int count;
int hash(const Key& key) const;
 node *ensureNodeExists(const Key& key);
const node *findNode(const Key& key) const;
};



