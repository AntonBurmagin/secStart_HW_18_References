#include <iostream>
#include <vector>

void swapVec (std::vector<int> &v, int b[]) {
    int temp = 0;
    for (int i = 0; i < v.size(); i++) {
        temp = v[i];
        v[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    //18.5.1 swap vector and array
    /*
    std::vector<int> vec = {1,2,3,4};
    int b[] = {2,4,6,8};

    swapVec(vec,b);

    for(int i = 0; i < 4; ++i)
        std::cout << vec[i];

    std::cout << std::endl;

    for(int i = 0; i < 4; ++i)
        std::cout << b[i];
    */

    return 0;
}