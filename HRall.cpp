#include <iostream>
#include<vector>

using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {


}

int main()
{

	int n, m;
	cin >> n >> m;

	vector<vector<int>> queries(m);
	for (int i = 0; i < m; i++) {
		queries[i].resize(3);

		for (int j = 0; j < 3; j++) {
			cin >> queries[i][j];
		}
	}

	long result = arrayManipulation(n, queries);

	cout << result << "\n";

	return 0;
}
