#include<iostream>
#include<vector>

// vectorは他の変数と同様に関数に値を渡すことが出来る
// しかし、配列を渡すということは膨大な要素のコピーを作る可能性がある
// そのため、配列は参照渡しをする必要がある
// 

// この宣言方式では与えられる型がintで確定されてしまう
void Foo(std::vector<int>&);

// そのため、関数テンプレート（11章）を使用する
// これは呼び出し側が関数の型を定義できるテンプレートパラメータ
// これによりintでもfloatでも呼び出せる
// しかし、これは想定していない型の値を渡されても動作してしまうという点がある
// これについて他にも、要素の最大数が分からないという点もある
//
template <typename T>
void Bar(std::vector<T>&);

int main() {

}

void Foo(std::vector<int>& arr) {

}

template <typename T>
void Bar(std::vector<T>&) {

}