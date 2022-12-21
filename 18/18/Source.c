#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
struct point {
	float x;
	float y;
	char name;
};
typedef struct point Point;
struct tm* mytime;
void put_point(Point z);
float dist(Point z, Point w);
void put_newpoint(Point z);
float newpointx(Point z, Point w);
float newpointy(Point z, Point w);
void quarter(Point z);
void main()
{
	setlocale(LC_ALL, "RUS");
	Point b, a, c, z, A, B, M1;
	a = (Point){ 1.f,2.f,'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	c.name = 'C'; c.x = 2; c.y = -1;
	z.name = 'M'; z.x = newpointx(b, c); z.y = newpointy(b, c);
	A.name = 'A'; A.x; A.y;
	B.name = 'B'; B.x; B.y;
	put_point(b);
	put_point(c);
	dist(b, c);
	put_newpoint(z);
	printf("\nВведите кординаты А(x;y): ");
	scanf("%f%f", &A.x, &A.y);
	printf("\nВведите координаты B(x;y): ");
	scanf("%f%f", &B.x, &B.y);
	printf("Координата х для новой точки М1: %.1f", newpointx(A, B));
	printf("\nКоордината у для новой точки М1: %.1f", newpointy(A, B));
	M1.name = 'M1'; M1.x = newpointx(A, B); M1.y = newpointy(A, B);
	put_newpoint(M1);
	quarter(M1);
	puts("\n\n");
	time_t t;
	t = time(NULL);
	mytime = localtime(&t);
	printf("Московское время %2d:%2d:%2d,\n", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
	for (int i = 0; i <= 80; i++)
	{
		printf("*");
	}
	printf("Сегодня %d-й день %d года", mytime->tm_yday, 1900+mytime->tm_year);
	for (int i = 0; i <= 80; i++)
	{
		printf("*");
	}
}
void put_point(Point z)
{
	printf("\npoint %c (%.1f; %.1f)",z.name,z.x,z.y);
}
void put_newpoint(Point z)
{
	printf("\nnewpoint %c (%.1f; %.1f)",z.name, z.x, z.y);
}
void quarter(Point z)
{
	if (z.x > 0 && z.y > 0) printf("\nТочка принадлежит I четверти");
	else if (z.x < 0 && z.y > 0) printf("\nТочка принадлежит II четверти");
	else if (z.x < 0 && z.y < 0) printf("\nТочка принадлежит III четверти");
	else if (z.x > 0 && z.y < 0) printf("\nТочка принадлежит IV четверти");
}
float dist(Point z, Point w)
{
	float y;
	y = sqrt(pow(z.x-w.x,2)+pow(z.y-w.y,2));
	printf("\nrasstoyanie = %.2f", y);
	return y;
}
float newpointx(Point z, Point w)
{
	float x;
	x = (z.x + w.x) / 2;
	return x;
}
float newpointy(Point z, Point w)
{
	float y;
	y = (z.y + w.y) / 2;
	return y;
}