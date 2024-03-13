#include <stdio.h>

int main(void)
{
    int x = 50;
	float y = 1234.123;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.5f\n", z);
	return 0;
}
-------------------------------------------
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int x = INT_MAX;
    printf("int형 의 최댓값 x는 %d입니다.\n", x);
    printf("x +1은 %d입니다.\n", x+1);
	return 0;
}
-------------------------------------------
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	printf("x = %d입니다.\n", x);
	printf("y = %d입니다.\n", y);
	printf("x + y = %d입니다.\n", x+y);
	return 0;
}
---------------------------------------------
#include <stdio.h>
#define MONTHS 12
 
int main(void)
{
	double monthsalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS); 
	return 0;
}

-----------------------------------------
#include <stdio.h>

int main(void)
{
	int x = 65;
	printf("%c\n", x);
	char y = 65;
	printf("%c\n", y);
	char z = 'B';
	printf("%d\n", z);
	return 0;
}

---------------------------------------
#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("10진수로 출력 : %d\n", x);
	printf("8진수로 출력 : %o\n", x);
	printf("16진수로 출력 : %x\n", x);
	return 0;
}
----------------------------------

#include <stdio.h>
#define SECOND_PRE_MINUTE 60

int main(void)
{
    int input = 1000;
    int minute = input / SECOND_PRE_MINUTE;
    int second = input % SECOND_PRE_MINUTE;
    printf("%d초 %d분 %d초 입니다.\n", input, minute, second);
	return 0;
}

---------------------------------

#include <stdio.h>
#define SECOND_PRE_MINUTE 60

int main(void)
{
    int x = 0;
    printf("현재의 x는 %d입니다.\n", x);
    x++;
	printf("현재의 x는 %d입니다.\n", x); 
	printf("현재의 x는 %d입니다.\n", x--);
	printf("현재의 x는 %d입니다.\n", x);
	printf("현재의 x는 %d입니다.\n", --x);
	return 0;
}

-----------------------------------------------
#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("현재 x의값은 %d입니다.\n", x);
	x += 50; // x = x + 50; 
    printf("현재 x의값은 %d입니다.\n", x);
	x -= 50; // x = x - 50;
	printf("현재 x의값은 %d입니다.\n", x);
	x *= 50; // x = x * 50;
	printf("현재 x의값은 %d입니다.\n", x);
	x /= 50;
	printf("현재 x의값은 %d입니다.\n", x);
	x %= 3;
	printf("현재 x의값은 %d입니다.\n", x);
	return 0;
}
---------------------------------------------
#include <stdio.h>

int main(void)
{
	int x = 50, y =30;
    printf("x가 y와 같은가 ? %d\n", x == y); 
    printf("x가 y와 다른가 ? %d\n", x != y); 
    printf("x가 y보다 큰가 ? %d\n", x > y);
    printf("x가 y보다 작은가 ? %d\n", x < y);
    printf("x가 y값을 넣으면 ? %d\n", (x = y));
	return 0;
}
#include <stdio.h>
----------------------------------------------
#include <stdio.h>

int main(void)
{
    int x = -50, y = 30;
    int absoluteX = (x > 0) ? x : y;
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x의 절댓값은 %d입니다. \n", absoluteX);
	printf("x와 y 중에서 최댓값은 %d입니다. \n", max);
    printf("x와 y 중에서 최솟값은 %d입니다. \n", min); 
    return 0;
}
	

----------------------------------------------
#include

int main(void)
{    
	int score = 85;
	if(score >= 90)
	{
		printf("당신의 학점은 A입니다.\n");
	}
	else if(score >= 80)
	{
		printf("당신의 학점은 B입니다.\n");
	}
	else if(score >= 70)
	{
		printf("당신의 학점은 C입니다.\n");
	}
	else 
	{
		printf("당신의 학점은 F입니다.\n");
	}
	return 0;
}
-----------------------------------------------------------------------
#include <stdio.h>

int main(void)
{   
    int year = 2022;
    if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
    {
    	printf("%d년은 윤년입니다.\n", year);
		 
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return 0;
	
}
----------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;
    while(i <= 1000)
    {
        sum = sum + i;
        i++;
    }
    printf("1부터 1000까지의 합은 %d입니다.\n", sum);
    return 0;

}
-----------------------------------------------------------------

#include <stdio.h>
#define N 10

int main(void)
{
    int i, j;
    for(i = 0; i < N; i++)
    {
    	for(j = 0; j < N; j++)
    	{
    		printf("★");
		}
        printf("\n");	
	}
    return 0;

}
//사각형 별
-----------------------------------------------------------
#include <stdio.h>
#define N 20

int main(void)
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = N - i -1; j > 0; j--)
        {
        	printf("  ");
		}
		for(j = 0; j < i; j++)
		{
			printf("★"); 
		}
		for(j = 0; j < i - 1; j++)
		{
			printf("★");
		}
		printf("\n");
	}
	return 0;
}
//피라미드
---------------------------------------
#include <stdio.h>

int main(void)
{   
    char o;
    int x, y;
    while(1)
    {
    	printf("수식을 입력하세요 : ");
    	scanf("%d %c %d", &x , &o, &y);
    	if(o == '+')
		{
    		printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if(o == '*')
    	{
    		printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);	
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y);	
	    }
		else
		{	
			printf("입력이 잘못 되었습니다.\n");
		}
		getchar();
		printf("프로그램을 종료하시겠습니까? (y/n) ");
	    scanf("%c", &o);
	    if(o == 'n' || o =='N')
	    {
	    	continue;
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("입력이 잘못되었습니다.\n");
		}
	}
	return 0; 
}
// 계산기 프로그램 
----------------------------------------------------
#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요 : ");
	scanf("%d", &number);
	for(i = 0; i < number; i++)
	{
		printf("정수의 값을 입력하세요 : ");
		scanf("%d", &x);
		sum += x;
	}
	printf("전체 정수의 값은 %d입니다.\n", sum);
	return 0; 
}
------------------------------------------------
 #include <stdio.h>
 
 int main(void)
 {
 	int x, i;
 	printf("정수를 입력하세요 : ");
 	scanf("%d", &x);
 	for(i = 1; i <= 9; i++)
 	{
 		printf("%d X %d = %d\n", x, i, x * i);
	}
	 return 0; 
 }
 // 구구단 프로그램
 ---------------------------------------------------#include <stdio.h>

int hour;
int minute;
int minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}

int main(void)
{
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf("%d", &minute);
	printf("더할 분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	counter();
	printf("더해진 시간은 %d시 %d분 입니다.\n", hour, minute);
	return 0;
}
//시간 계산기 프로그램
----------------------------------------------------------------------
#include <stdio.h>

// 특정한 금액을 받아서 가장 적은 거스름 화페의 개수를 구하는 함수입니다. 
int smallest(int number)
{
	int count = 0;
	while(number >= 50000)
	{
		number -= 50000;
		count++;
	}
	while(number >= 10000)
	{
		number -= 10000;
		count++;
	}
	while(number >= 5000)
	{
		number -= 5000;
		count++;
	}
	while(number >= 1000)
	{
		number -= 1000;
		count++;
	}
	while(number >= 500)
	{
		number -= 500;
		count++;
	}
	while(number >= 100)
	{
		number -= 100;
		count++;
	}
	while(number >= 50)
	{
		number -= 50;
		count++;
	}
	while(number >= 10)
	{
		number -= 10;
		count++;
	}
    return count;
} 
 
int main(void)
{
	int number;
	printf("금액을 입력하세요 : ");
	scanf("%d", &number);
	printf("최소로 줄 수 있는 화폐의 개수는 %d개 입니다.\n", smallest(number));
    return 0;
}
------------------------------------------------------------
#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2)
		{
			sum += 28;
		}
		else if(i % 2 == 0)
		{
			sum += 30;
		}
		else
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 거리는 %d일입니다", getDays(month, day));
	return 0;
}
----------------------------------------------------------------
#include <stdio.h>
#include <limits.h>
#define NUMBER 5

int main(void)
{
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("가장 큰 값은 %d입니다. 그리고 %d번쨰에 있습니다.\n", max, index + 1);  
	min = INT_MAX;
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	printf("가장 큰 작은 %d입니다. 그리고 %d번쨰에 있습니다.\n", min, index + 1);  
	return 0;
} 
------------------------------------------------------------
#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int array[NUMBER];
	int i, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0)
		{
			if(evenMax < array[i])
			{
				evenMax = array[i];
			}
		}
		else
		{
			if(oddMax < array[i])
			{
				oddMax = array[i];
			}
		}
	}
	printf("%d %d", oddMax, evenMax);
	return 0;
}

-------------------------------------
#include <stdio.h>

int main(void)
{
	char name[256];
	printf("이름이 뭐예요? ");
	scanf("%s", name, sizeof(name));
	
	int age;
	printf("몇살이예요? ");
	scanf("%f", &age);
	
	float weight;
	printf("몸무게는 몇 kg 이예요? ");
	scanf("%f", &weight);
	
	double height;
	printf("키는 몇 cm 이예요? ");
	scanf("%lf", &height);
	
	char what[256];
	printf("무슨 법죄를 저질렸어요? ");
	scanf("%s", what, sizeof(what));

	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름      : %s\n", name);
	printf("나이      : %d\n", age);
	printf("몸무게    : %.2f\n", weight);
	printf("키        : %.2lf\n", height);
	printf("범죄      : %s\n", what); 
    return 0;
}
------------------------------------------
#include <stdio.h>

int main(void)
{
	int floor;
	printf("몇 층으로 쌓겠습니까?");
	scanf("%d", &floor);
	for(int i = 0; i < floor; i++)
	{
		for(int j = i; j < floor - 1; j++)
        {
        	printf(" ");
		}
		for(int k = 0; k < i * 1 + 1; k++)
		{
			printf("★");
		}
		printf("\n"); 
	}
	return 0;
}
--------------------------------------------------
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0; 
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) :");
		scanf("%d", &answer);
		
		if (answer > num)
		{
			printf("DOWN ↓\n\n");
		} 
		else if (answer < num)
		{
			printf("UP ↑\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다!\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했습니다.\n\n");
		}
		
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요.\n\n");
			break;
		}
	}
}