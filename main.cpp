#include <iostream>
#include <string>
#include <vector>
using namespace std;

void draw_bubble(const string& text) {
    size_t length = text.size();
    cout << " ";
    for (size_t i = 0; i < length + 2; ++i) cout << "_"
    cout << "\n( " << text << " )\n ";
    for (size_t i = 0; i < length + 2; ++i) cout << "-";
// cout << endl;
}

void draw_cow() {
    cout << R"(
        \   ^__^
         \  (oo)\_______
            (__)\       )\/\
                ||----w |
                ||     ||
    )" << endl;
}

int main() {
    cout << "What does the cow say? ";
    string user_input;
    getline(cin, user_input);
    if (user_input.empty()) {
        user_input = "Moo!";
    }
    draw_bubble(user_input);
    draw_cow();
    return 0;
}
