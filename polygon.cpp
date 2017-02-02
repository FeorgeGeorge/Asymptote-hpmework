#include <iostream>
#include <fstream>
int main()
{
	int n = 0;
	std::cin >> n;

	std::ofstream out("asy_ngon.asy");
	if (!out) {
		std::cout << "Cannot open file.\n";
		return 1;
	}
	out << "unitsize(1cm); import geometry; real n = " << n << ";";
	out << "real r = 2;";
	out << "for (int k = 1; k <= n; ++k){point A = (r*cos(2 * pi*k / n), r*sin(2 * pi*k / n)); point B = (r*cos(2 * pi*(k + 1) / n), r*sin(2 * pi*(k + 1) / n)); draw(A--B);}";

	out.close();
	system("asy -V asy_ngon");
	return 0;
}