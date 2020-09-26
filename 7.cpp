给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。

示例 1:

输入: 123
输出: 321
 示例 2:

输入: -123
输出: -321
示例 3:

输入: 120
输出: 21
注意:

假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


我的解法比较笨，直接反过来加到数组中，在从数组中逐个相加，时间慢，希望通过以后的联系可以慢慢长进




class Solution {
public:
    int reverse(int x) {
        long b = x;
        if(b > 2147483647 || b < -2147483648) {
            return 0;
        } else if(b < 0) {
            b = -b;
        }
        vector<int> num;
        while(b) {
            int a = b % 10;
            num.push_back(a);
            b = b / 10;
        }
        int number = 0;
        for(int j = 0; j < num.size(); j++) {
            if(num[j] != 0) {
                number = j;
                break;
            }
        }
        long count = 0;
        for(int j = number; j < num.size(); j++) {
            count = count * 10 + num[j];
        }
        if(x < 0) {
            count = -count;
        }
        if(count > 2147483647 || count < -2147483648) {
            count = 0;
        }
        return count;
        
    }
};
