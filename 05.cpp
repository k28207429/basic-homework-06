#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int y;
	cout <<"�п�J�~��(����)";
	cin >> y;
	if ((y % 4 == 0 and y % 100 != 0) or (y % 400 == 0 and y % 3200 != 0))
		printf("�|�~");
	else
		printf("���~");
		

	system("pause");
	return 0;
}