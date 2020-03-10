bool isPalindrome(int x){
    if (x < 0) return false;
    int cur = 0;
    int num = x;
    while (num) {
        if (cur > INT_MAX / 10) return false;
	cur = cur * 10 + num % 10;
	num /= 10;
    }
    return cur == x;
}
