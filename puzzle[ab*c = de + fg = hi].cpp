#include <iostream>
#include <set>
#include <vector>
#define loop(x)     for(x=1; x<10; x++)
using namespace std;
int main() {
    int a, b, c, d, e, f, g, h, i;
    loop(a) {
        loop(b) {
            loop(c) {
                int number_1 = a*10 + b;
                int number_2 = c;
                int number_3 = number_1 * number_2;
                if(number_3 > 99)   break;
                d = number_3 / 10;
                e = number_3 % 10;
                loop(f) {
                    loop(g) {
                        int number_4 = f*10 + g;
                        int final = number_3 + number_4;
                        if(final > 99)  break;
                        h = final/10;
                        i = final%10;
                        vector<int> vec = {a, b, c, d, e, f, g, h, i};
                        set<int> s;
                        s.insert(vec.begin(), vec.end());
                        if(s.size() == 9 && s.find(0) == s.end()) {
                            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<"\n";
                        }
                    }
                }
            }
        }
    }
}
