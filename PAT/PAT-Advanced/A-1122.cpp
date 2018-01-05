#include <iostream>
#include <string.h>
#include <queue>
#include <list>
using namespace std;
class custom {
public:
	int couple;
	int count;
	int represent;
};
int main(void) {
	bool result = true;
	int v1, v2, count;
	int v[200];
	int map[201][201], numOfVertices, numOfEdge;
	memset(map, 0, sizeof(map));
	memset(v, 0, sizeof(v));
	cin >> numOfVertices >> numOfEdge;
	for (int i = 0; i < numOfEdge; i++) {
		cin >> v1 >> v2;
		map[v1][v2] = 1;
		map[v2][v1] = 1;
	}
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> numOfEdge;
		for (int j = 0; j < numOfEdge; j++) {
			cin >> v[j];
		}
		if (numOfEdge != numOfVertices + 1 || v[0] != v[numOfEdge - 1]) {
			result = false;
		}
		else for (int j = 0; j < numOfVertices; j++) {
			if (map[v[j]][v[j + 1]] != 1 || map[0][v[j]] != 0) {
				result = false;
				break;
			}
			map[0][v[j]] = 1;
		}
		if (result)cout << "YES" << endl;
		else cout << "NO" << endl;
		for (int j = 1; j <= numOfVertices; j++) {
			map[0][j] = 0;
		}
		result = true;
	}
	return 0;
}
