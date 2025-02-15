# Hash Table

`Hash Table` is a data structure that supports operations like **insertion**, **search** and **deletion** efficiently. 

There are two kinds of hash tables:

- **Hash Set**: Data structure to hold non duplicate values;
- **Hash Map**: Data structure to store pairs *<key, value>*;

Most common languages have implamentations of hash table in its standand template libraries like dictionaries in python, maps and sets in C++ and Java.

To efficiently implement hash tables, it its necessary to choose good **hash functions**. Functions that "translates" the key value to an index, or pointer to a value.


----------

In C++, whenever you need to find a key in a hashmap you can use the `find()`method. It returns an iterator that looks for the key. If it is not found, the iterator points to `end()`

```
unorderd_map <int> hashmap;

hashmap.insert(1);

auto it = hashmap.find(2);

if(it == hashmap.end()) // Element not found;
else // Element was found and it points to the element;
```