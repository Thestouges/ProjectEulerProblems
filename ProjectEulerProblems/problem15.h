#include <iostream>
using namespace std;

class problem15{
public:
	problem15();
	void initgrid();
	void routes();
	void recursiverouting(int,int);
	void dynamicrouting();
private:
	int nth;
	__int64 counter;
	__int64 **grid;
};