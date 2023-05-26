#in l u d e < s t d i o.h>
i n t main() {
    i n t a, b;
    s c a n f(”% d % d ” , &a, &b);
    i n t r = 0;
    f o r(i n t i = a; i <= b; i++) {
        i n t s = i % 1 0, t = i / 10000 % 1 0;
        i n t u = i / 10 % 1 0, v = i / 1000 % 1 0;
        i f(s == t && u == v) r++;
        1
    }
    p r i n t f(”% d\n ” , r);
}
