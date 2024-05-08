#include <iostream>
#include <vector>
using namespace std;


template <typename TYPE>
void Show(const vector<TYPE> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << flush;
    }
    cout << endl;
}

int main()
{
    vector<int> v(5, 0);

    for (int i = 0; i < v.size(); i++) {
        v[i] = i + 1;
    }

    Show(v);


    v.resize(10, 0);

    for (int i = 0; i < v.size(); i++) {
    }

    Show(v);


    return 0;
}