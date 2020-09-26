判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

示例 1:

输入: 121
输出: true
示例 2:

输入: -121
输出: false
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3:

输入: 10
输出: false
解释: 从右向左读, 为 01 。因此它不是一个回文数。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


和7题想到了同样的办法，while出每位的数字，然后组成新的所需要的的数


class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int num = x;
        long count = 0;
        while(num) {
            int a = num % 10;
            count = count * 10 + a;
            num = num / 10;
        }
        if(count == x) {
            return true;
        }

        return false;
        
    }
};