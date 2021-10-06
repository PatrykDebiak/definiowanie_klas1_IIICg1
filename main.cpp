#include <iostream>
using namespace std;
int main() {
	class Triangle{
		public:
			float bok_a, bok_b,bok_c,h;
			float oblicz_pole(){		
				return (bok_a*h)/2;
			};
			float oblicz_obwod(){
				return bok_a+bok_b+bok_c;
			};
	};
	
	Triangle trojkat;
	trojkat.oblicz_pole();
	trojkat.oblicz_obwod();
	
	trojkat.bok_a = 3;
	trojkat.bok_b = 3;
	trojkat.bok_c = 3;
	trojkat.h = 3;
	
	cout<<"Pole wynosi:\t"<<trojkat.oblicz_pole()<<"\nObwod wynosi:\t"<<trojkat.oblicz_obwod();
	
	return 0;
}
