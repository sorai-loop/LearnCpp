#include<iostream>

int main(void) {
	std::cout << sizeof(int) << std::endl;
	//この場合sizeof関数は4を返すが環境によっては2を返すこともある。
	//動作が一定でない関数の使用は避けるべきであるとされている
	//関数透過性的な話？
	return 0;
}