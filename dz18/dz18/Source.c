#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
struct player {
	char surname[20];
	int day;
	int month;
	int year;
	char place[20];
	char position[20];
	float game;
	int ycard;
};
typedef struct player P;
void data(P z);
void otbor(P z);
void main()
{
	setlocale(LC_ALL, "RUS");
	P a, b, c, d, e;
	printf("\n������� ������� ������: ");
	scanf(" %s",a.surname);
	printf("\n������� ���� �������� ������: ");
	scanf(" %d%d%d",&a.day, &a.month,&a.year);
	printf("\n������� ����� �������� ������: ");
	scanf(" %s", a.place);
	printf("\n������� ������� ������: ");
	scanf(" %s", a.position);
	printf("\n������� ��������� ���������� ���: ");
	scanf(" %g", &a.game);
	printf("\n������� ���������� ���������� ����� ����: ");
	scanf(" %d", &a.ycard);
	data(a);
	printf("\n������� ������� ������: ");
	scanf(" %s", b.surname);
	printf("\n������� ���� �������� ������: ");
	scanf(" %d%d%d", &b.day, &b.month, &b.year);
	printf("\n������� ����� �������� ������: ");
	scanf(" %s", b.place);
	printf("\n������� ������� ������: ");
	scanf(" %s", b.position);
	printf("\n������� ��������� ���������� ���: ");
	scanf(" %g", &b.game);
	printf("\n������� ���������� ���������� ����� ����: ");
	scanf(" %d", &b.ycard);
	printf("\n������� ������� ������: ");
	scanf(" %s", c.surname);
	printf("\n������� ���� �������� ������: ");
	scanf(" %d%d%d", &c.day, &c.month, &c.year);
	printf("\n������� ����� �������� ������: ");
	scanf(" %s", c.place);
	printf("\n������� ������� ������: ");
	scanf(" %s", c.position);
	printf("\n������� ��������� ���������� ���: ");
	scanf(" %g", &c.game);
	printf("\n������� ���������� ���������� ����� ����: ");
	scanf(" %d", &c.ycard);
	printf("\n������� ������� ������: ");
	scanf(" %s", d.surname);
	printf("\n������� ���� �������� ������: ");
	scanf(" %d%d%d", &d.day, &d.month, &d.year);
	printf("\n������� ����� �������� ������: ");
	scanf(" %s", d.place);
	printf("\n������� ������� ������: ");
	scanf(" %s", d.position);
	printf("\n������� ��������� ���������� ���: ");
	scanf(" %g", &d.game);
	printf("\n������� ���������� ���������� ����� ����: ");
	scanf(" %d", &d.ycard);
	printf("\n������� ������� ������: ");
	scanf(" %s", e.surname);
	printf("\n������� ���� �������� ������: ");
	scanf(" %d%d%d", &e.day, &e.month, &e.year);
	printf("\n������� ����� �������� ������: ");
	scanf(" %s", e.place);
	printf("\n������� ������� ������: ");
	scanf(" %s", e.position);
	printf("\n������� ��������� ���������� ���: ");
	scanf(" %g", &e.game);
	printf("\n������� ���������� ���������� ����� ����: ");
	scanf(" %d", &e.ycard);
	data(a);
	data(b);
	data(c);
	data(d);
	data(e);
	puts("\n");
	otbor(a);
	otbor(b);
	otbor(c);
	otbor(d);
	otbor(e);
}
void data(P z)
{
	printf("\n�����: %s, %d.%d.%d, %s, %s. ������� ���: %f. Ƹ���� ��������: %d.", z.surname,z.day,z.month,z.year,z.place,z.position,z.game,z.ycard);
} 
void otbor(P z)
{
	if (z.year < 2002 && (z.game / 10 >= z.ycard))
		printf("\n��� �������� �������� �����:  %s, %d.%d.%d, %s, %s. ������� ���: %f. Ƹ���� ��������: %d.", z.surname, z.day, z.month, z.year, z.place, z.position, z.game, z.ycard);
}