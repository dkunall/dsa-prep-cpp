#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] <= x) {
			ans = arr[mid];
			//look for smaller index on the left
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

int findCeil(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}




#include <iostream>
#include <vector>
using namespace std;

pair<int, int> FloorAndCeil(vector<int> &arr, int x) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x) {
            floor = ceil = arr[mid];
            return {floor, ceil};
        } else if (arr[mid] < x) {
            floor = arr[mid];     // floor may be updated
            low = mid + 1;        // go right
        } else {
            ceil = arr[mid];      // ceil may be updated
            high = mid - 1;       // go left
        }
    }
    return {floor, ceil};
}

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 5;

    pair<int, int> ans = FloorAndCeil(arr, x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << endl;

    return 0;
}