#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;

    sort(d.begin(), d.end());

    for (int i = 0; i < d.size(); i++) {
        if (budget >= d[i]) {
            budget -= d[i];
            answer++;
        } else {
            break;
        }
    }

    return answer;
}

int main() {
    vector<int> test1 = {1, 3, 2, 5, 4};
    vector<int> test2 = {2, 2, 3, 3};

    cout << "Test 1 : " << solution(test1, 9) << endl;
    cout << "Test 2 : " << solution(test2, 10) << endl;

    return 0;
}
