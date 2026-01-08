#include<iostream>
#define ENABLE_DEBUG
int main() {
	// 効率的にデバックをするためにプリプロセッサディレクティブをしようしてデバック文を条件付きにする
	//
#ifdef ENABLE_DEBUG
	std::cerr << "デバックするよ！" << std::endl;
#endif // ENABLE_DEBUG
#ifndef ENABLE_DEBUG
	std::cerr << "デバックしないよ！" << std::endl;
#endif // !ENABLE_DEBUG
	//他にもロガーというログ生成ツールが存在する

}