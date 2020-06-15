#include <iostream>
#include <string>

using namespace std;

bool is_consonant(char c) {
    string vokaler{"aoueiy"};

    for (int i{0}; i < vokaler.size(); ++i) {
        if (c == vokaler[i]) {
            return false;
        }
    }
    return true;
}

string transform(char c) {
    string toReturn{c};

    return toReturn + "o" + toReturn;
}

int main() {

    string alma{};
    cout << "Mata in nå fint: ";
    cin >> alma;

    for (int i{0}; i < alma.size(); ++i) {
        char cur_char{alma[i]};

        if (is_consonant(cur_char)) {
            cout << transform(cur_char);
        } else {
            cout << cur_char;
        }
    }
    return 0;
}

