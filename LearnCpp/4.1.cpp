#include<iostream>

int main() {
	//現代ではメモリは1ビットではなく1バイトでアドレスが割り当てられる
	//
	// 整数オブジェクトに値が入ると2進数に変換され、メモリに格納される
	// 逆にオブジェクトが評価されて値が生成され、ビットシーケンスが元の値に再構築される
	//

	//変数の型
	[[maybe_unused]] float a{};
	[[maybe_unused]] double b{};
	[[maybe_unused]] long double c{};
	[[maybe_unused]] bool d{};
	[[maybe_unused]] char e{};
	[[maybe_unused]] wchar_t f{};
	[[maybe_unused]] short int g{};
	[[maybe_unused]] int h{};
	[[maybe_unused]] long int i{};
	[[maybe_unused]] long long int j{};

	//shortは符号なしで表現することができる
	//最近のバージョンで追加されたもので_tがついているものがあればそれは大体型
}