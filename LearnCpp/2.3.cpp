#include<iostream>

void foo(void) {
	int foobar;

	//return;冗長なので戻り値がvoidな関数の末尾にreturnは書かなくてよい
}

void bar(int) {
	//引数を使用しないのに用意しておく場合がある
	//https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
	//読んだがよくわかんなかった。多分オーバーライド関連と思われる
	//インクリメントのタイミング等が問題にあるらしい？
	//キーワード：名前なしパラメーター
}


int main(void) {
	foo();
	int a;
	bar(4);
	return 0;
}