/*#include <stdio.h>
void exerc1(void) {
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다.\n", inch, cm);
}
void exerc2(void) {
	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.\n", C, F);
}
void exerc3(void) {
	double r, area;
	scanf("%lf",&r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf 입니다.");
}
double r, area;

int main()
{
	exerc1();
	exerc2();
	exerc3();

	double inch, cm;
	double F, C;
	double r, area;

	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다.\n", inch, cm);

	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.\n", C, F);

	scanf("%lf", &r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf 입니다.", r,area);
	
	return 0;
}*/

/*#include <stdio.h>

int main() {
	
	int total = 7384;
	int hours = total / 3600;
	int minutes = (total % 3600) / 60;
	int seconds = total % 60;
	printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

	int score = 75, attendance = 85;
	int passed = (score >= 60 && attendance >= 80);
	printf("합격 여부: %d\n", passed);

	unsigned int permission = 0x01;
#define EXEC 0x04
	permission |= EXEC;
	printf("권한: 0x%X\n", permission);

	return 0;
}
#include <stdio.h>

int main() {
    int a, b, c;
    double h, w;

    scanf("%d %d %d", &a, &b, &c);
    printf("weighted_score=%.2f\n", a * 0.3 + b * 0.4 + c * 0.3);

    scanf("%lf %lf", &h, &w);
    printf("bmi=%.2f\n", w / (h * h));

    return 0;
} */

/*#include <stdio.h>

int main() {
	int money;

	scanf("%d", &money);

	printf("10000:%d ", money / 10000);
	money %= 10000;

	printf("1000:%d ", money / 1000);
	money %= 1000;

	printf("100:%d ", money / 100);
	money %= 100;

	printf("10:%d\n", money / 10);

	return 0;
} */
/* #include <stdio.h>

int main() {
	int year;

	scanf("%d", &year);

	printf("%d\n", (year % 400 == 0) ||
		(year % 4 == 0 && year % 100 != 0));

	return 0;
}*/
/* #include <stdio.h>

int main() {
	int a, b, c;
	double h, w;

	scanf("%d %d %d", &a, &b, &c);
	printf("weighted_score=%.2f\n", a * 0.3 + b * 0.4 + c * 0.3);

	scanf("%lf %lf", &h, &w);
	printf("bmi=%.2f\n", w / (h * h));

	return 0;
} */