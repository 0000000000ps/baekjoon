#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	search_str(char *dic, char *word);
int		register_book(BOOK *book_list, int *nth);
int		search_book(BOOK *book_list, int total_num_book);
int		borrow_book(BOOK *book_list);
int		return_book(BOOK *book_list);
int		print_book_list(BOOK *book_list, int total_num_book);
int		retrieve_book_info(BOOK **book_list, int *total_num_book);

typedef struct BOOK {
	char book_name[30];
	char auth_name[30];
	char publ_name[30];
	int borrowed;
}BOOK;

int		main(void)
{
	int user_choice;
	int num_total_book = 0;

	BOOK *book_list;

	printf("How many books do you have? : ");
	scanf("%d", &user_choice);

	book_list = (BOOK *)malloc(sizeof(BOOK) * user_choice); //????

	while (1) {
		printf("C LIBRARY PROGRAM\n");
		printf("select menu\n");
		printf("1. Add new book \n");
		printf("2. Search book \n");
		printf("3. Borrow book \n");
		printf("4. Return book \n");
		printf("5. Print book's sentence to book_list.txt \n");
		printf("6. Open book's sentennce from book_list.txt \n");
		printf("7. Print the list of the books \n");
		printf("8. Finish program \n");

		printf("Which one would you select? : ");
		scanf("%d", &user_choice);

		if (user_choice == 1) {
			register_book(book_list, &num_total_book);
		}
		else if (user_choice == 2) {
			search_book(book_list, num_total_book);
		}
		else if (user_choice == 3) {
			borrow_book(book_list);
		}
		else if (user_choice == 4) {
			return_book(book_list);
		}
		else if (user_choise == 5) {
			print_book_list(book_list, num_total_book);
		}
		else if (user_choice == 6) {
			retrieve_book_info(&book_list, &num_total_book);
		}
		else if (user_choice == 7) {
			for (int i = 0; i < num_total_book; i++) {
				printf("%s // %s // %s // ", book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
				if (book_list[i].borrowed == 0) printf("NO\n");
				else printf("YES\n");
			}
		}
		else {
			printf("/* finish program. */");
			break;
			}
	}
	free(book_list);
	return 0;
}

int		register_book(BOOK *book_list, int *nth) {
	printf("book name : ");
	scanf("%s", book_list[*nth].book_name, sizeof(book_list[*nth].book_name)); // ?????

	printf("auth name : ");
	scanf("%s", book_list[*nth].auth_name, sizeof(book_list[*nth].auth_name));

	printf("publ name : ");
	scanf("%s", book_list[*nth].publ.name, sizeof(book_list[*nth].publ.name));

	book_list[*nth].borrowed = 0;
	(*nth)++; //?? while...for...?

	return 0;
}

int		search_book(BOOK *book_list, int total_num_book) {
	int user_input;
	int i;

	char user_search[30];
	printf("Which one would you choose? \n");
	printf("1. search for book name \n");
	printf("2. search for auth name \n");
	printf("3. search for publ name \n");
	scanf("%d", &user_input);

	printf("insert a word : ");
	scanf("%s", user_search, sizeof(user_search)); //...
	printf("result \n");

	if (user_input == 1) {
		for (i = 0; i < total_num_book; i++) {
			if (search_str(book_list[i].book_name, user_search) >= 0) {
				printf("no : %d // book name : %s // auth : %s // publ : %s \n", i, book_list[i].book_name,
						book_list[i].auth_name, book_list[i].publ.name);
			}
			else printf("nothing.\n");
		}
	}
	else if (user_input == 2) {
		for (i = 0; i < total_num_book; i++) {
			if (search_str(book_list[i].auth_name, user_search) >= 0) {
				printf("no : %d // book name : %s // auth : %s // publ : %s \n", i, book_list[i].book_name,
						book_list[i].auth_name, book_list[i].publ.name);
			}
			else printf("nothing.\n");
		}
	}
	else if (user_input == 3) {
		for (i = 0; i < total_num_book; i++) {
			if (search_str(book_list[i].publ_name, user_search) >= 0) {
				printf("no : %d // book name : %s // auth : %s // publ : %s \n", i, book_list[i].book_name,
						book_list[i].auth_name, book_list[i].publ.name);
			}
			else printf("nothing.\n");
		}
	}
	return 0;
}

char	search_str(char *dic, char *word) { //??
	int loc = 0;
	int search_loc = 0;

	while (*dic) {
		if (*dic == *word) {
			while (*word) {
				if (*dic != *word) {
					word -= search_loc;
					loc += search_loc;
					search_loc = 0;
					break;
				}
				dic++;
				word++;
				search_loc++;
				if (*word == 0) {
					return loc;
				}
			}
		}
		dic++;
		loc++;
	}
	return -1;
}

int		borrow_book(BOOK *book_list) {
	int book_num;

	printf("What's the number of the book you'll borrow? \n");
	printf("book number : ");
	scanf("%d", &book_num);

	if (book_list[book_num].borrowed == 1) {
		printf("already borrowed! \n");
	}
	else {
		printf("succeed to borrow. \n");
		book_list[book_num].borrowed = 1;
	}
	return 0;
}

int		return_book(BOOK *book_list) {
	int num_book;

	printf("Please write the number of the borrowed book \n");
	printf("book number : ");
	scanf("%d", &num_book);

	if (book_list[num_book].borrowed == 0) {
		printf("already done \n");
	}
	else {
		book_list[num_book].borrowed = 0;
		printf("succeed to return \n");
	}
	return 0;
}

int		print_book_list(BOOK *book_list, int total_num_book) {
	FILE *fp;
	errno_t err = fopen(&fp, "book_list.txt", "w"); //??????
	if (err == 0) {
		printf("success !");
	}
	else {
		printf("error");
		return 0;
	}
	fprintf(fp, "%d\n", total_num_book);

	for (int i = 0; i < tatal_num_book; i++) {
		fprintf(fp, "%s\n%s\n%s\n", book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
		if (book_list[i].borrowed == 0) fprint(fp, "NO\n");
		else fprintf(fp, "YES\n");
	}
	fclose(fp);

	return (0);
}

int		retrieve_book_info(BOOK **book_list, int *total_num_book) {
	FILE *fp;
	errno_t err = fopen(&fp, "book_list.txt", "r");
	int total_book;
	char borrow[10];
	if (err == 0) {
		printf("success !");
	}
	else {
		printf("error");
		return 0;
	}
	fscanf(fp, "%d", &total_book);
	*total_num_book = total_book;

	free(*book_list); //...?
	(*book_list) = (BOOK *)malloc(sizeof(BOOK) * total_book);

	for (int i = 0; i < total_book; i++) {
		fscanf(fp, "%s", (*book_list)[i].book_name, sizeof((*book_list)[i].book_name));
		fscanf(fp, "%s", (*book_list)[i].auth_name, sizeof((*book_list)[i].book_name));
		fscanf(fp, "%s", (*book_list)[i].publ_name, sizeof((*book_list)[i].book_name));
		fscanf(fp, "%s", borrow, sizeof(borrow));
		if (strcmp(borrow, "NO") == 0)
			(*book_list)[i].borrowed = 0;
		else if (strcmp(borrow, "YES") == 0)
			(*book_list)[i].borrowed = 1;
	}
	return 0;
}
