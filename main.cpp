#include <iostream>
#include <cassert>
#include <string>
#include <cstring> 
# include <string_view>

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

// int find(string s, string c) {
//     int lngth = s.length();
    
//     for (int i = 0; i < lngth; i++) {
//         if (s[i] == c) {
//             return i;
//         }
//     }
    
//     return -1;
// }



int main(){

    assert(find("Hello", 'e') == 1);
    assert(find("Hello", 'l') == 2);
    assert(find("Hello", 'o') == 4);


    cout << "\npassed succesfully\n";



    return 0;
}