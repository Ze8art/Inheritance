#include <iostream>

using namespace std;

class base {
private:
	int _i;
	int _j;
protected:
	int _a;
public:
	base() {
		_i = _j = 0;
		cout << "base()" << endl;
	};
	base(int i, int j) {
		_i = i, _j = j; cout << "base(int, int)" << endl;
	}
	~base() { cout << "~base()" << endl; }
	void set(int i, int j) { _i = i; _j = j; }
	int getI() { return _i; };
	int getJ() { return _j; };
	void show() { cout << "i = " << _i << ", j = " << _j << endl; }

};

class derived : public base {		//наследование классов
private:
	int _k;

public:
	derived() { cout << "derived()" << endl; _k = 0; }
	derived(int k) : base(1, 2) { cout << "derived(int)" << endl; _k = k; }
	~derived() { cout << "~derived()" << endl; }
	void setK(int k) { _k = k; }
	int getK() { return _k; }
	void showK() { cout << "k = " << _k << endl; }
};

int main() {
	derived ob(3);
	//ob.set(1, 2);
	ob.show();
	ob.showK();
}