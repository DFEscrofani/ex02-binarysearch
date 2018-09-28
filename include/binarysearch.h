/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: Binary Search
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @DaltonEscrofani
*/

#include <cstdint>

namespace edu {	namespace vcccd {	namespace vc {	namespace csv15 {
		template <class T>
		int64_t binarysearch(const T& value, T array[], size_t size) {
			if (size == 0) return -1;
			int guess = size / 2;
			if (array[guess] == value) return guess;
			if (array[guess] < value) return binarysearch(value, array, size / 2);
			else if (array[guess] > value) return binarysearch(value, array + guess + 1, guess);
		return -1;
		}
}}}}