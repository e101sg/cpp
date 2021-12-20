// C++ program to illustrate the above
// topic
#include <iostream>
#include <ctime>// include this header 
#include <windows.h>
#include <ppl.h>
#include <concurrent_vector.h>
#include <array>
#include <vector>
#include <tuple>
#include <algorithm>
#include <iostream>
#include <chrono>

using namespace std;

// Driver Code

int main()
{

	// Declare the vector
	//vector<int> arr = { 1, 2, 3, 4 };

	//vector<int> arr(100, 9);
	vector<double> arr(2);
	
	//arr.resize(2);
	for (double i = 0; i <= 10; i++) {
		//int number;
		//std::cin >> number;
		//arr.push_back(number);


	  arr.push_back(i * 1);
		
	}


	auto t_start = std::chrono::high_resolution_clock::now();

	
	// Traversing the vector using
	// values directly
	for (auto& it : arr) {

		// Print the values
		std::cout << it << ' ';

	}
	cout << "Size : " << arr.size();
	cout << "\nCapacity : " << arr.capacity();
	cout << "\nMax_Size : " << arr.max_size();

	auto t_end = std::chrono::high_resolution_clock::now();
	double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end - t_start).count();
	std::cout <<"\n" << elapsed_time_ms;
	//return 0;
}
