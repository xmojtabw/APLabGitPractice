//reviewed
#include <iostream>
using namespace std;

class container {

	int size;
public:

	float* p;
	container(int s) :size(s){}
	const int& getsize() { return size;}

};

class vector : public container {

	int call_num;
public:
	explicit vector(int l) :container(1 * 100), len(l){
		p = new float();
	}
	int len;
	int& getlen()  {
		call_num ++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector v1 (100); 
	container& r1 = v1;
	container c2 = 100;
	cout << c2.getsize() << endl;
	vector v2 (100);
	cout << v2.getlen() << endl;;
}

//output:
//100
//100