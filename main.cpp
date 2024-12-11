using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while (n >= a) {
        answer += n/a*b;
        n = (n/a*b)+n%a;
    }

    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {1, 5, 2, 6, 3, 7, 4};
    // vector<int> test2 = {1, 7, 1, 2};
    // vector<string> test1 = {"sun", "bed", "car"};
    // vector<string> test2 = {"abce", "abcd", "cdx"};
    // vector<vector<int> > test3 = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    // vector<vector<int> > test4 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    // solution(test1,1);
    // solution(test2,2);

    cout << "test1 : " << solution(2, 1 ,20) << endl;
    cout << "test2 : " << solution(3, 1 ,20) << endl;

    /*vector<int> result1 = solution(test1, test3);
    cout << "Test 1 : [";
    for (int temps : result1) { // Range-based for loop
        cout << temps << ", ";
    }
    cout << "]" << endl;
    cout << endl;*/

    /*vector<int> result2 = solution(test2 , test4);
    cout << "Test 2 : [";
    for (int temps : result2) { // Range-based for loop
        cout << temps << " ,";
    }
    cout << "]" << endl;
    cout << endl;*/

    return 0;
}
