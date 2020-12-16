#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // 1. STL容器类都支持了初始化列表
    vector<int> v1 = {3, 4, 1, 9};
    vector<int> v2 {3, 4, 1, 9};

    // 2. auto
    for(auto it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}