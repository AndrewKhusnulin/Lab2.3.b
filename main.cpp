#include <tchar.h>  
#include <iostream> 
using namespace std;

class Area2d
{
	double a, b, s;
	char Area_t;
public:
	Area2d(double x, double y)
	{
		this->Area_t = 'r';
		this->a = x;
		this->b = y;
		this->s = x*y;
	}
	Area2d(double x)
	{
		this->Area_t = 'c';
		this->a = x;
		this->b = 0;
		this->s = 3.14*pow(x, 2);
	}
	void print()
	{
		cout << "\n";
		cout << "Area type:" << Area_t << endl;
		cout << "A = " << a << endl;
		cout << "B = " << b << endl;
		cout << "S(" << Area_t << ") = " << s << endl;
	}
};
class Area3d :
	public Area2d
{
	double h, v;
	char Area3d_t;
public: 
	Area3d(double x, double y, double z) :
		Area2d(x, y)
	{
		this->Area3d_t = 'R';
		this->h = z;
		this->v = x*y*z;
	}
	Area3d(double x, double z) :
		Area2d(x)
	{
		this->Area3d_t = 'C';
		this->h = z;
		this->v = 3.14*pow(x, 2)*z;
	}
	void print()
	{
		Area2d::print();
		cout << "Z = " << h << endl;
		cout << "V(" << Area3d_t << ") = " << v << endl;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	Area2d f1(10);
	f1.print();
	Area2d f2(3, 4);
	f2.print();
	Area3d f3(10,5);
	f3.print();
	Area3d f4(3, 4, 5);
	f4.print();
	system("pause");
	return 0;
}
