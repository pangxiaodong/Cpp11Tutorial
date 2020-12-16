// Learn C++ 11 in 20 Minutes - Part I
// https://www.youtube.com/watch?v=U6mgsPqV32A&t=267s

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_title(string title) {
    cout << "---------------------------------------------" << endl;
    cout << title << endl;
    cout << "---------------------------------------------" << endl;
}

// 2.统一初始化
class dog
{
public:
    int age; // 第三选择，聚合构造    
    dog(int a) { // 第二选择，普通构造函数
        age = a;    
        cout << "dog constructor" << endl;
    };
    /*
    dog(const initializer_list<int>& vec) { // 第一选择，初始化列表构造函数
        age = *(vec.begin());
        cout << "dog initializer_list" << endl;
    }
    */
};

// nullptr
void foo(int i) { cout << "foo_int" << endl; }
void foo(char *pc) { cout << "foo_char*" << endl; }

int main()
{
    // 1. 初始化列表(STL容器类都支持)
    vector<int> v1 = {3, 4, 1, 9};
    vector<int> v2{3, 4, 1, 9};

    // 2. 统一初始化
    print_title("2. Init");
    dog d1 = {5};

    // 3. auto类型
    print_title("3. auto");
    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 4. foreach。注意这里用了auto引用，如果v1是给stuct或者class的话，可以避免调用拷贝构造函数
    print_title("4. foreach");
    for (auto &i : v1)
    {
        cout << i << " ";
        i++;
    }

    // 5. nullptr代替NULL
    // foo(NULL); // ambiguous, 编译失败
    foo(nullptr);
    return 0;

    // 5. enum class
}