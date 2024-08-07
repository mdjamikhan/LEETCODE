class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        vector<string> lessThan20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> ten = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        
        // Function to convert two-digit number
        auto two_digit = [&](int num) {
            if (num < 20) return lessThan20[num];
            else {
                int tens = num / 10;
                int ones = num % 10;
                return ten[tens] + (ones == 0 ? "" : " " + lessThan20[ones]);
            }
        };
        
        // Function to convert three-digit number
        auto three = [&](int num) {
            if (num == 0) return string("");
            if (num < 100) return two_digit(num);
            return lessThan20[num / 100] + " Hundred" + (num % 100 == 0 ? "" : " " + two_digit(num % 100));
        };
        
        int billion = num / 1000000000;
        int million = (num / 1000000) % 1000;
        int thousand = (num / 1000) % 1000;
        int hundred = num % 1000;
        string res;
        
        if (billion) res += three(billion) + " Billion";
        if (million) res += (res.empty() ? "" : " ") + three(million) + " Million";
        if (thousand) res += (res.empty() ? "" : " ") + three(thousand) + " Thousand";
        if (hundred) res += (res.empty() ? "" : " ") + three(hundred);
        
        return res;
    }
};
