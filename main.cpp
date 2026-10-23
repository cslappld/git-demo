#include<iostream>

// [test_b] 返回两个整数的和（重构版）
int add(int a,int b)
{
    return b + a;
}

int main()
{
    using namespace std;
    cout<<"test_b result: "<<add(3,5)<<endl;
    return 0;
}
