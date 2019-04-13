#include <stdio.h>
main()
{
	unsigned int x, y, sum = 0;
	char day[][4] = {   "MON" ,  "TUE" ,  "WED" ,  "THU" ,  "FRI" ,  "SAT" ,"SUN"};
	scanf("%d %d", &x, &y);
	switch (x) {
	case 12:
		sum += 30;
	case 11:
		sum += 31;
	case 10:
		sum += 30;
	case 9:
		sum += 31;
	case 8:
		sum += 31;
	case 7:
		sum += 30;
	case 6:
		sum += 31;
	case 5:
		sum += 30;
	case 4:
		sum += 31;
	case 3:
		sum += 28;
	case 2:
		sum += 31;
	case 1:
		break;
	}
	printf("%s", day[(sum + y - 1) % 7]);
	return 0;
}
