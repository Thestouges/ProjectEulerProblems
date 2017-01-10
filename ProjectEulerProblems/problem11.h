#include <iostream>
using namespace std;

class problem11{
public:
	problem11();
	void initgrid();
	void greatestproduct();
private:
	int grid[20][20];
	int nth;
};