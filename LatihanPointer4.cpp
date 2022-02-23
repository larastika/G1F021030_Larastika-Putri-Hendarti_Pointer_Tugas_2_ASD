#include <iostream>

using namespace std;

int main()
{
     int a, b, c, *p1, *p2, *p3;

     a = 10;
     b = 15;
     c = 27;
     p1 = &a;
     p2 = &b;
     cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3 << "\n\n";

     *p1 = c;
     cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3 << "\n\n";

     a = *p2;
     b = 6;
     p3 = &b;
     cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3 << "\n\n";

     p3 = &c;
     *p1 = *p3;
     cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\np1 = " << p1 << "\np2 = " << p2 << "\np3 = " << p3;

     return 0;
}
