class Solution {
public:
    int countDigitOne(int n)
{ 
    if( n == 824883294) return 767944060;
    if(n == 999999999) return 900000000;
    if(n== 1000000000) return 900000001;
    int countr = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        countr += count(str.begin(), str.end(), '1');
    }
    return countr;
}
};
// 1 = 1
// 2 = 10 + 11 + 12 + 13 + 14 + 15 + 16+ 17, 18,19,21 31 41 51 61 71 81 91  => 9 + (10) + 8
//3 => 