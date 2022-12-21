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
	printf("\n¬ведите фамилию игрока: ");
	scanf(" %s",a.surname);
	printf("\n¬ведите день рождени€ игрока: ");
	scanf(" %d%d%d",&a.day, &a.month,&a.year);
	printf("\n¬ведите место рождени€ игрока: ");
	scanf(" %s", a.place);
	printf("\n¬ведите позицию игрока: ");
	scanf(" %s", a.position);
	printf("\n¬ведите сыгранное количество игр: ");
	scanf(" %g", &a.game);
	printf("\n¬ведите количество полученных жЄлтых карт: ");
	scanf(" %d", &a.ycard);
	data(a);
	printf("\n¬ведите фамилию игрока: ");
	scanf(" %s", b.surname);
	printf("\n¬ведите день рождени€ игрока: ");
	scanf(" %d%d%d", &b.day, &b.month, &b.year);
	printf("\n¬ведите место рождени€ игрока: ");
	scanf(" %s", b.place);
	printf("\n¬ведите позицию игрока: ");
	scanf(" %s", b.position);
	printf("\n¬ведите сыгранное количество игр: ");
	scanf(" %g", &b.game);
	printf("\n¬ведите количество полученных жЄлтых карт: ");
	scanf(" %d", &b.ycard);
	printf("\n¬ведите фамилию игрока: ");
	scanf(" %s", c.surname);
	printf("\n¬ведите день рождени€ игрока: ");
	scanf(" %d%d%d", &c.day, &c.month, &c.year);
	printf("\n¬ведите место рождени€ игрока: ");
	scanf(" %s", c.place);
	printf("\n¬ведите позицию игрока: ");
	scanf(" %s", c.position);
	printf("\n¬ведите сыгранное количество игр: ");
	scanf(" %g", &c.game);
	printf("\n¬ведите количество полученных жЄлтых карт: ");
	scanf(" %d", &c.ycard);
	printf("\n¬ведите фамилию игрока: ");
	scanf(" %s", d.surname);
	printf("\n¬ведите день рождени€ игрока: ");
	scanf(" %d%d%d", &d.day, &d.month, &d.year);
	printf("\n¬ведите место рождени€ игрока: ");
	scanf(" %s", d.place);
	printf("\n¬ведите позицию игрока: ");
	scanf(" %s", d.position);
	printf("\n¬ведите сыгранное количество игр: ");
	scanf(" %g", &d.game);
	printf("\n¬ведите количество полученных жЄлтых карт: ");
	scanf(" %d", &d.ycard);
	printf("\n¬ведите фамилию игрока: ");
	scanf(" %s", e.surname);
	printf("\n¬ведите день рождени€ игрока: ");
	scanf(" %d%d%d", &e.day, &e.month, &e.year);
	printf("\n¬ведите место рождени€ игрока: ");
	scanf(" %s", e.place);
	printf("\n¬ведите позицию игрока: ");
	scanf(" %s", e.position);
	printf("\n¬ведите сыгранное количество игр: ");
	scanf(" %g", &e.game);
	printf("\n¬ведите количество полученных жЄлтых карт: ");
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
	printf("\n»грок: %s, %d.%d.%d, %s, %s. —ыграно игр: %f. ∆Єлтые карточки: %d.", z.surname,z.day,z.month,z.year,z.place,z.position,z.game,z.ycard);
} 
void otbor(P z)
{
	if (z.year < 2002 && (z.game / 10 >= z.ycard))
		printf("\nѕод критерий подходит игрок:  %s, %d.%d.%d, %s, %s. —ыграно игр: %f. ∆Єлтые карточки: %d.", z.surname, z.day, z.month, z.year, z.place, z.position, z.game, z.ycard);
}