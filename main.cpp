#include <string>
#include <regex>

using namespace std;

int solution(string s) {

    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");

    int answer = stoi(s);
    return answer;
}

#include <iostream>

int main() {
    // string test1 = "try hello world";
    // string test2 = "this is a test";
    // vector<int> test1 = {2,1,3,4,1};
    // vector<int> test2 = {5,0,2,7};
    // vector<vector<int> > test1 = {{60, 50}, {30, 70}, {60, 30}, {80, 40}};
    // vector<vector<int> > test2 = {{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}};

    cout << "test1 : " << solution("one4seveneight") << endl;
    cout << "test2 : " << solution("23four5six7") << endl;

    /*vector<int> result1 = solution(test1);
    cout << "Test 1 : [";
    for (int num : result1) { // Range-based for loop
        cout << num << ", ";
    }
    cout << "]" << endl;
    cout << endl;*/

    /*vector<int> result2 = solution(test2);
    cout << "Test 2 : [";
    for (int num : result2) { // Range-based for loop
        cout << num << " ,";
    }
    cout << "]" << endl;
    cout << endl;

    return 0;*/
}