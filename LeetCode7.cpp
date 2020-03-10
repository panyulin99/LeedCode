int reverse(int x){
    if (x / 10 == 0) return x;
    int y = 0;
    while (x) {
        if (y > INT_MAX / 10 || y < INT_MIN / 10) return 0;
	y *= 10;
	y += x % 10;
	x /= 10;
    }
    return y;
}
