class Solution {
public:
    string countAndSay(int n) {
        if(n==1) {
            return "1";
        }
	auto s = countAndSay(n-1) + ' ';
	string out;
	for(auto i{0}, j{0}; i<size(s); ++i)
		if(s[i] != s[j]) {
            out= out+ to_string(i-j)+s[i-1], j=i;
        }
	return out;
    }
};