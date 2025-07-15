#include <iostream>
using namespace std;

void solve(string &in, int i, string &output) {
    // Base case
    if (i == in.length()) {
      
            cout << output<<endl; 
      
        return;
    }

    // 1. Include current character
    output.push_back(in[i]);
    solve(in, i + 1, output);

    // Backtrack: remove the last added character
    output.pop_back();

    // 2. Exclude current character
    solve(in, i + 1, output);
}

int main() {
    string input = "abc";
    string output = "";
    solve(input, 0, output);
//OUTPUT
// abc
// ab
// ac
// a
// bc
// b
// c
//   
// THE BLANK LINE IS FOR EMPTY SUBSEQUENCE

    return 0;
}
