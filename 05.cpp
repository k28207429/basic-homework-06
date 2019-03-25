#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int y;
	cout <<"請輸入年分(公元)";
	cin >> y;
	if ((y % 4 == 0 and y % 100 != 0) or (y % 400 == 0 and y % 3200 != 0))
		printf("閏年");
	else
		printf("平年");
		

	system("pause");
	return 0;
}