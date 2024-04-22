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

int upstairWays (int steps, int jump) {
    if (steps <= jump) {
        int sum = 1;
        for (int j = steps; j > 1; j--) {
              sum *= 2;
        }
        return sum;
    } else {
        int sum = 0;
        for (int j = jump; j > 0; j--) {
            sum += upstairWays(steps - j, jump);
        }
        return sum;
    }
}

void evenDigits (long long number, int &ans) {
    ans += 1 - number % 2;
    number /= 10;
    if (number != 0) {
        evenDigits (number , ans);
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
    // 18.5.2 rabbit and ladder: how many ways to the top
    // while (true) {
    //     int steps, jumpMax;
    //     std::cout << "Input ladder steps and longest possible jump:" << std::endl;
    //     std::cin >> steps >> jumpMax;
    //     if (steps > 0 && jumpMax > 0) {
    //         std::cout << "There are " << upstairWays(steps, jumpMax) << " ways to top!" << std::endl;
    //     } else {
    //         std::cout << "Incorrect input! Try again!" << std::endl;
    //     }
    // }

    // 18.5.3
    long long num = 922337203685477580;
    int ans = 0;
    num = (num > 0 ? num : -num);
    evenDigits (num, ans);
    std::cout << ans << std::endl;


    return 0;
}