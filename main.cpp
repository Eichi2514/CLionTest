#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for (int i = 0; i < number.size(); i++) {
        for (int j = i + 1; j < number.size(); j++) {
            for (int k = j + 1; k < number.size(); k++) {
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }
    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    vector<int> test1 = {-3, -2, -1, 0, 1, 2, 3};
    vector<int> test2 = {2, 2, 3, 3};

    cout << "Test 1 : " << solution(test1) << endl;
    cout << "Test 2 : " << solution(test2) << endl;

    return 0;
}
