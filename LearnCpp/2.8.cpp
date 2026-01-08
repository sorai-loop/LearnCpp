#include<iostream>

int add(int, int);

int main(void) {
	//複数に分割されたファイルについて
	//他のファイルに存在する関数を呼び出すにもプロトタイプ宣言を使用する

	std::cout << "1+2=" << add(1, 2) << std::endl;

	return 0;
}