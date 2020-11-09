#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Ktx
{
	char ktxStation[20];
	int ktxFee;
	struct Ktx *Next;
}Ktx;

char	 MenuKtx(void);
Ktx		*AppendList(Ktx *p);
int		DisplayList(Ktx *p);
void	FreeMallocList(Ktx *p);

int		main(void)
{
	Ktx *tail, *head = (Ktx *)malloc(sizeof(Ktx));
	head->Next = NULL;
	tail = head;

	while (TRUE)
	{
		switch (MenuKtx())
		{
			case '1':
				tail = AppendList(tail);
				break;
			case '6':
				DisplayList(head);
				getchar(); break;
			case '0':
				FreeMallocList(head);
				return 0;
			default:
				puts(" \t 없는 메뉴\a\a\a");
		}
	}
	getchar();
	return 0;
}

char	MenuKtx(void)
{
	char number;
	system("cls");
	puts("*** 링크드 리스트***");
	puts(" 1. AppendList (추가) ");
	puts(" 2. InsertList (삽입) ");
	puts(" 3. UpdateList (수정) ");
	puts(" 4. DeleteList (삭제) ");
	puts(" 5. SearchList (찾기) ");
	puts(" 6. DisplayList (출력) ");
	puts(" 0. QuitList (종료) ");
	puts("************************");

	printf("번호 선택[   ]\b\b\b");
	fflush(stdin);
	number = getchar();
	return number;
}

Ktx		*AppendList(Ktx *p)
{
	printf("역 이름을 입력하세요: ");
	fflush(stdin);
	gets(p->ktxStation);
	printf("서울에서부터 요금은: ");
	scanf("%d", &p->ktxFee);

	p->Next = (Ktx *)malloc(sizeof(Ktx));
	p = p->Next;
	p->Next = NULL;
	return p;
}

int DisplayList(Ktx *p)
{
	int i = 1;
	puts("\t --------------------");
	puts("\t 번호 역 이름 요금 ");
	puts("\t --------------------");
	while (p->Next != NULL)
	{
		printf("\t %3d %8s %6d원\n", i++, p->ktxStation, p->ktxFee);
		p = p->Next;
	}
	puts("\t--------------------");
	puts("\t 아무키나 누르세요.");
	getchar();
	return i-1;
}

void	FreeMallocList(Ktx *p)
{
	Ktx *tmp = p;

	while (p != NULL)
	{
		tmp = p->Next;
		free(p);
		p = tmp;
	}
	puts(" Good - bye !!! ");
}
