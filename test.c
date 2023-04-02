#include <stdio.h>
unsigned long long a,b,num,day,count= 1000000000000000000ull;  // 注意要加上后缀 "ull"，表示无符号长长整数

int main() {
	scanf("%llu%llu%llu", &a, &b, &num);
	day = 1;
	count = 0;
	while (1) {
		if (day % 7 != 6 && day % 7 != 0) {
			count = count + a;
		}
		else {
			count = count + b;
		}
		if (count >= num) {
			break;
		}
		day++;
	}
	printf("%llu", day);
	return 0;
}