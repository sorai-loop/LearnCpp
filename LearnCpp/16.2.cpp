#include<iostream>

//可変長配列は
#include<vector>
//を使用する

int main() {
	std::vector<int> empty{};
	//vectorは宣言時に型を必要とする
	//クラステンプレートとして定義されているため

	std::vector<int> foo{ 1,2,3,4,5 };
	//初期化はリストで行い、参照は[]を使用する
	foo[4] = 6;
	std::vector<int> v1{10};
	//この定義では要素0に10が入っただけの要素数1の配列と思われるため定義外の9等を唐突に指定すると実行時に警告（？）が出てくる

	std::vector<int> v2({ 10 });
	//これも同上
	
	//v1[9] = 8;
	v2[0] = 7;

	std::cout << v2[0] << std::endl;

	//例によってconstする場合は初期値をしっかり決める
	//コンテナの要素がconstを持つのではなくコンテナ自体がconstを持つ

	//vectorの由来はSchemeとCommon Lispから借用されたもの
	//しかしこのありかたは数学のvectorとは矛盾するものだったが修正されずにここまで来てしまったという

	return 0;

}