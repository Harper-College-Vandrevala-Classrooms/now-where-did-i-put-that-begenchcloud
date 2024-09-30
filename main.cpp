#include <iostream>
#include <cassert>
#include <string>
#include <cstring> 
#include <string_view>

using namespace std;

int find(string s, char c)
{
    int lngth = s.length();
    

    for (int i = 0; i <= lngth; i++){
        if (s[i] == c)
        {
            return i;
        }
    
    }

    return -1;


}

int find(string s, string c) {
    int s_len = s.length();
    int c_len = c.length();


    for (int i = 0; i <= s_len - c_len; i++) {

        int j;
        for (j = 0; j < c_len; j++) {
            if (s[i + j] != c[j]) {
                break;
            }
        }

        if (j == c_len) {
            return i;
        }
    }

    return -1;
}



int main(){

    assert(find("Hello", 'e') == 1);
    assert(find("Hello", 'l') == 2);
    assert(find("Hello", 'o') == 4);

    assert(find("Hello", "lo") == 3);
    assert(find("Hello", "el") == 1);
    assert(find("Hello", "Hello") == 0);
    assert(find("Hello", "world") == -1);


    cout << "\npassed succesfully\n";



    return 0;
}