#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
#include <array>
#include <time.h>
#include <time.h>
#include <time.h>
#include<numeric>
#include <algorithm>
#include <string_view>

// Built-in Data Structures
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <vector>
#include <deque>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <array>
#include <string>
#include <sstream>
#include <cstdlib>
#include "add.h"
#include <climits> // for CHAR_BIT
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <cstdint> // for fast and least types
using namespace std;

/*
	█▀▄▀█ █▀▀█ █▀▀ █▀▀ █▀▀ ─█▀▀█ █▀▀▄ █▀▀ █───█ █▀▀█ █── █──█ 
	█░█░█ █──█ ▀▀█ █▀▀ ▀▀█ ░█▄▄█ █──█ █▀▀ █▄█▄█ █──█ █── █──█ 
	█──░█ ▀▀▀▀ ▀▀▀ ▀▀▀ ▀▀▀ ░█─░█ ▀▀▀─ ▀▀▀ ─▀─▀─ ▀▀▀▀ ▀▀▀ ─▀▀▀
*/

class Solution {
public:
    vector<int> twoSumLoop(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
        	for (int j = i + 1; j < nums.size(); ++j) {
        		if (nums[i] + nums[j] == target) {
        			return vector<int>{nums[i], nums[j]};
        		}
        	}
        }
        return vector<int>{-1, -1};
    }
    vector<int> twoSumMap(vector<int>& nums, int target) {
    }
};


vector<int> findAnswers(vector<int>& nums, int target) {

}

int main() {
	
	return 0;
}