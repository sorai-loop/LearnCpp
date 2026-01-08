#include<iostream>
#include<cstdlib>

int main(void) {
	//main関数より先にグローバル変数は初期化される

	//関数の終了は3パターン用意されている
	//１つは0であり正常に終了したことを示す
	//残り２つは<cstdlib>というものであり、
	//正常に終了した事を示すEXIT_SUCCESSと、
	//エラーが発生した事を示すEXIT_FAILUREがある。

	//同じ処理を繰り返さないことは重要で
	//DRY:Don't Repeat Yourselfという言葉と、
	//WET:Write Everything Twice
	//という皮肉がある

	return 0;
}