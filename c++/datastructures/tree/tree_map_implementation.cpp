template <typename Key, typename Value>
class TreeMap {
public:
TreeMap();
 ~TreeMap();

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
 node *left, *right;
 };
 int count;
 node *root;

 void disposeTree(node *root);
 const node * const & findNode(const Key& key) const;
 node *ensureNodeExists(const Key& key);
};

template <typename Key, typename Value>
TreeMap<Key, Value>::TreeMap() {
count = 0;
root = NULL;
}
template <typename Key, typename Value>
TreeMap<Key, Value>::~TreeMap() {
disposeTree(root);
}
template <typename Key, typename Value>
void TreeMap<Key, Value>::disposeTree(node *root) {
if (root == NULL) return;
disposeTree(root->left);
disposeTree(root->right);
delete root;
}
template <typename Key, typename Value>
bool TreeMap<Key, Value>::containsKey(const Key& key) const {
return findNode(key) != NULL;
}
template <typename Key, typename Value>
Value TreeMap<Key, Value>::get(const Key& key) const {
const node *found = findNode(key);
return found != NULL ? found->value : Value();
}
template <typename Key, typename Value>
void TreeMap<Key, Value>::put(const Key& key, const Value& value) {
ensureNodeExists(key)->value = value;
}
template <typename Key, typename Value>
Value& TreeMap<Key, Value>::operator[](const Key& key) {
return ensureNodeExists(key)->value;
}
3
template <typename Key, typename Value>
const typename TreeMap<Key, Value>::node * const &
TreeMap<Key, Value>::findNode(const Key& key) const {
const node * const *currp = &root;
 while (*currp != NULL && !((*currp)->key == key)) {
if ((*currp)->key < key) currp = &(*currp)->right;
 else currp = &(*currp)->left;
}
 return *currp;
}
template <typename Key, typename Value>
typename TreeMap<Key, Value>::node *
TreeMap<Key, Value>::ensureNodeExists(const Key& key) {
 node *& found = const_cast<node *&>(findNode(key));
 if (found == NULL) {
 node n = {key, Value(), NULL, NULL};
 found = new node(n);
 }
 return found;
}


