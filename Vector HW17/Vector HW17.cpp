#include <iostream>
#include <vector>

class Vector 
{
  private:
	double x; //Переменные класса
	double y;
	double z;

  public:
	Vector() : x(7), y(7), z(8) //Конструктор по умолчанию
	{}

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) //Конструктор с аргументами
	{}

	void Show()
	{
		std::cout << x << ' ' << y << ' '<< z << '\n'; 
	}

};

int main()
{
	Vector V;
	V.Show();  
	Vector V2(12, 10, 9); //Объекты класса
	V2.Show();

	std::vector<int> array{ 8, 6, 9, 10, 14, 16 }; //Узнаем длину вектора 
	std::cout << "The length is  " << array.size() << '\n';

	return 0;

}