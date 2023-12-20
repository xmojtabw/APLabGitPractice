#include <iostream>
using namespace std;

class container {
	int size;
public:
	float* p;
	container(int s) :size(s) {}
	const int& getsize() { return size; }

};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l), container(1 * 100), call_num(0) {
		p = new float();
	}
	int len;
	int& getlen() {
		call_num++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1(100);
	container& r1 = v1;
	container c2 = 100;
	cout << c2.getsize();
	vector v2(100);
	v2.getlen() = 40;
	cout << v2.getlen();
	return 0;
}