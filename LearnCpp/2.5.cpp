#include<iostream>

int main(void) {
	int a{1};
	std::cout << a;
	//変数は使用の直前に宣言したほうがいい？
	//可読性を考えると微妙では？
	//かつてのCでは変数は関数の先頭で宣言する必要があったが、
	//C99の制約解除によりその必要はなくなった
	//つまり慣例としてこれまで書いていたのだろうか？
	[[maybe_unused]]int b{};

	return 0;
}