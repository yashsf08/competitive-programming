Data Structures \& C++ STL
"Similar to Collection Library if you are cominng from java background"

- Functions
- Data Structures
- Template Classes


Containers
"Container is an object that stores a collection of other objects"
"Container manages the storage space for its elements & provides member functions to access them (mostly through iterators)"

There are 4 categories in Containers
-	Sequence Containers
	-	Array (Fixed Sequence of Data)
	-	Vector (Expanding in Forward direction)
	-	Deque (Expanding in both directions)
	-	Forward List (Linked List)
	-	List (Double ended Linked List)
-	Associative Containers
	-	Set (orderd Set with unique values)
	-	Map (ordered key-value pairs)
	-	MultiSet (ordered set with non-unique values)
	-	Multimap (ordered keys with non-unique keys)
	-	Unordered Associave Containers (Same as above except thing are not ordered which results in O(1) insertion, lookup and delection)
	-	Unordered Set
	-	Unordered Map
	-	Unordered Multiset
	-	Unordered MultiMap
-	Containers Adaptors
	there are some problems which can only be modeled using these containers, however we build this containers using the premitive data structures or using the above mentioned, but they have been provided for your convenience
	-	Stack 
	-	Queue
	-	Priority Queue (Implementation based on heap) 
	-	the operations are of the complextiy O(n)	


Arrays in C++
	-	There are some pros of using STL based arrays
		


Vector in C++
	Dynamic array with the ability to resize itself automatically when an element is inserted
	Contagious store location, relocation happens when the underlying data is full

Methods
	-	[] (overloaded)
	-	at()
	-	back()
	-	begin()
	-	caacity()
	-	clear() - Clear all the elements, however the size remains the same
	-	empty()
	-	end()
	-	erase()
	-	front()
	-	insert()
	-	pop_back()
	-	push_back()
	-	reserve() (reserve the memory for the array while making)
	-	resize()
	-	size()
	Note: - We dont have push_front and pop_front methoed because elements will be added at the back, and also push/pop at the beginning would casue the whole element to be shifted. 


Deque in C++
	-	double-ended queue is sequence containers with dynamic sizes that can be expanded or contracted on both ends (front or back)
	-	deques are not guaranteed to store all its elements in contiguous storage locations: accessingg elements in a deque by offsetting a pointer to another element cause udefined behavior
	-	Elements of a deque can be scattered in different chunks or storage

Methods
	- [] (overloaded again)
	- at()
	- back()
	- begin()
	- capacity()
	- clear()
	- empty()
	- end()
	- erase()
	- front()
	- insert()
	- pop_back()
	- pop_front()
	- push_back()
	- push_front()
	- resize()
	- size()

	


