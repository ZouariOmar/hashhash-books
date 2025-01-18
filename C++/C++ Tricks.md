- **If you want to make a combustible tests you can use this trick:**
	```cpp
	int main(int argc, char const *argv[]) {
	#ifndef __TEST__
		freopen("../doc/input", "r", stdin);
		freopen("../out/output", "w", stdout);
	#endif  // __TEST__
		return 0;
	}
	```
- In C++, when you access an element in a `std::unordered_map` (or `std::map`) using the `[]` operator, if the key does not already exist, it will be inserted with a default value. For integers, the default value is `0`.
- Other way to test your program is by including **[C++ Assert](https://www.programiz.com/cpp-programming/assertions)** (`#include <cassert>`) or using [gtest](http://google.github.io/googletest) tool
- 