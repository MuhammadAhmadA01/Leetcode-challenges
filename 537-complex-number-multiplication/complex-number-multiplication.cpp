class Solution {
public:
 pair<int, int> separateRealComplexParts(string num) {
        int i = num.find('+');
        double real = stoi(num.substr(0, i));
        double imaginary = stoi(num.substr(i+1, num.size()-i-2));
        pair<int, int> res(real, imaginary);
        return res;
    }
    
    string complexNumberMultiply(string num1, string num2) {
        pair<int, int> a = separateRealComplexParts(num1), b = separateRealComplexParts(num2);
        int real_a = a.first, imag_a = a.second;
        int real_b = b.first, imag_b = b.second;
        return to_string(real_a * real_b - imag_a * imag_b) + '+' + to_string(real_a * imag_b  + real_b * imag_a)+'i' ;
    }
};