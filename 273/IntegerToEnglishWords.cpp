class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        return recurse(num);
    }

    string recurse(int num) {
        if (num <= 20)
            return conv.at(num);
        else if (num < 100)
            return conv.at(num - num % 10) + string((num % 10 > 0) ? " " + conv.at(num % 10) : "");
        else if (num < 1000)
            return recurse(num / 100) + " Hundred" + string((num % 100 > 0) ? " " + recurse(num % 100) : "");
        else if (num < 1000000)
            return recurse(num / 1000) + " Thousand" + string((num % 1000 > 0) ? " " + recurse(num % 1000) : "");
        else if (num < 1000000000)
            return recurse(num / 1000000) + " Million" + string((num % 1000000 > 0) ? " " + recurse(num % 1000000) : "");
        else
            return recurse(num / 1000000000) + " Billion" + string((num % 1000000000 > 0) ? " " + recurse(num % 1000000000) : "");
    }

    const map<int, string> conv = {
        {0, ""},
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"},
        {10, "Ten"},
        {11, "Eleven"},
        {12, "Twelve"},
        {13, "Thirteen"},
        {14, "Fourteen"},
        {15, "Fifteen"},
        {16, "Sixteen"},
        {17, "Seventeen"},
        {18, "Eighteen"},
        {19, "Nineteen"},
        {20, "Twenty"},
        {30, "Thirty"},
        {40, "Forty"},
        {50, "Fifty"},
        {60, "Sixty"},
        {70, "Seventy"},
        {80, "Eighty"},
        {90, "Ninety"},
    };
};