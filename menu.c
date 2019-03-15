#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char default_drive[] = "D:";
const char default_folder[] = "tools";
const char program_1_folder[] = "depota";
const char program_1_exe_filename[] = "depota";
const char program_2_folder[] = "acca";
const char program_2_exe_filename[] = "acca";
const char program_3_folder[] = "daga";
const char program_3_exe_filename[] = "daga";
const char program_4_folder[] = "accga";
const char program_4_exe_filename[] = "accga";
const char editor_folder[] = "pe2";
const char editor_exe_filename[] = "pe2";
const char report_filename[] = "RL41.txt";

const int total_item_num = 7;
const char menu_str_top[] =				"-[AJ-DosMenu 1.13]--------------------------\n";
const char menu_str_1[] =				"|      A. 執行永盛貨櫃管理 (DEPOTA)        |\n";
const char menu_str_2[] =				"|      B. 執行永盛會計系統 (ACCA)          |\n";
const char menu_str_3[] =				"|      C. 執行大傢貨櫃管理 (DAGA)          |\n";
const char menu_str_4[] =				"|      D. 執行大傢會計系統 (ACCGA)         |\n";
const char menu_str_5[] =				"|      E. 列印庫存報表                     |\n";
const char menu_str_6[] =				"|      F. 文書處理                         |\n";
const char menu_str_7[] =				"|      Q. 回到DOS命令列                    |\n";
const char menu_str_selected_1[] =		"|   -->A. 執行永盛貨櫃管理 (DEPOTA)<--     |\n";
const char menu_str_selected_2[] =		"|   -->B. 執行永盛會計系統 (ACCA)<--       |\n";
const char menu_str_selected_3[] =		"|   -->C. 執行大傢貨櫃管理 (DAGA)<--       |\n";
const char menu_str_selected_4[] =		"|   -->D. 執行大傢會計系統 (ACCGA)<--      |\n";
const char menu_str_selected_5[] =		"|   -->E. 列印庫存報表<--                  |\n";
const char menu_str_selected_6[] =		"|   -->F. 文書處理<--                      |\n";
const char menu_str_selected_7[] =		"|   -->Q. 回到DOS命令列<--                 |\n";
const char menu_comment_1[] =			"|  ======================================= |\n";
const char menu_comment_2[] =			"|      *  按CTRL+ALT使用滑鼠               |\n";
const char menu_comment_3[] =			"|      *  按CTRL+ALT再按ALT+F4離開DOS      |\n";
const char menu_comment_4[] =			"|      *  按CTRL+ALT+INS執行暖開機         |\n";
const char menu_comment_bottom[] =		"--------------------------------------------\n";
const char menu_description_str[] =			"請按方向鍵或按快速鍵執行, 按Q或ESC離開選單\n";
const char input_filename_comment_str[] =	"請輸入檔名: ";

enum
{
	KEY_ESC         = 27,
	KEY_ENTER       = 13,
	KEY_A           = 97,
	KEY_B           = 98,
	KEY_C           = 99,
	KEY_D           = 100,
	KEY_E           = 101,
	KEY_F           = 102,
	KEY_Q           = 113,
	ARROW_UP    = 256 + 72,
	ARROW_DOWN  = 256 + 80,
	ARROW_LEFT  = 256 + 75,
	ARROW_RIGHT = 256 + 77
};

enum
{
	FALSE = 0,
	TRUE = 1
};

void draw_menu(select_item_num)
{
	system("cls");
	printf("%s", menu_str_top);
	switch(select_item_num)
	{
		case 1:
			printf("%s", menu_str_selected_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_7);
			break;
		case 2:
			printf("%s", menu_str_1);
			printf("%s", menu_str_selected_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_7);
			break;
		case 3:
			printf("%s", menu_str_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_selected_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_7);
			break;
		case 4:
			printf("%s", menu_str_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_selected_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_7);
			break;
		case 5:
			printf("%s", menu_str_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_selected_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_7);
			break;
		case 6:
			printf("%s", menu_str_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_selected_6);
			printf("%s", menu_str_7);
			break;
		case 7:
			printf("%s", menu_str_1);
			printf("%s", menu_str_2);
			printf("%s", menu_str_3);
			printf("%s", menu_str_4);
			printf("%s", menu_str_5);
			printf("%s", menu_str_6);
			printf("%s", menu_str_selected_7);
			break;
	}
	printf("%s", menu_comment_1);
	printf("%s", menu_comment_2);
	printf("%s", menu_comment_3);
	printf("%s", menu_comment_4);
	printf("%s", menu_comment_bottom);
	printf("%s", menu_description_str);

}

void set_env()
{
	system(default_drive);
	system("cd\\");
	chdir(default_folder);
}

void run_process(select_item_num) {
	char input_filename[100];
	char run_str[100] = "";

	system("cd\\");
	switch(select_item_num)
	{
		case 1:
			chdir(program_1_folder);
			system(program_1_exe_filename);
			break;
		case 2:
			chdir(program_2_folder);
			system(program_2_exe_filename);
			break;
		case 3:
			chdir(program_3_folder);
			system(program_3_exe_filename);
			break;
		case 4:
			chdir(program_4_folder);
			system(program_4_exe_filename);
			break;
		case 5:
			/*chdir(editor_folder);*/
			strcat(run_str, default_drive);
			strcat(run_str, "\\");
			strcat(run_str, editor_folder);
			strcat(run_str, "\\");
			strcat(run_str, editor_exe_filename);
			strcat(run_str, " ");
			strcat(run_str, default_drive);
			strcat(run_str, "\\");
			strcat(run_str, program_1_folder);
			strcat(run_str, "\\");
			strcat(run_str, report_filename);
			printf("%s\n", run_str);
			system(run_str);
			break;
		case 6:
			/*chdir(editor_folder);*/
			printf("%s", input_filename_comment_str);
			scanf("%s", input_filename);
			strcat(run_str, default_drive);
			strcat(run_str, "\\");
			strcat(run_str, editor_folder);
			strcat(run_str, "\\");
			strcat(run_str, editor_exe_filename);
			strcat(run_str, " ");
			strcat(run_str, input_filename);
			printf("%s\n", run_str);
			system(run_str);
			break;
	}
	set_env();
}

static int get_code(void)
{
    int ch = getch();
    if (ch == 0 || ch == 224)
	ch = 256 + getch();
    return ch;
}

void set_select_item_num(total_item_num)
{
	int is_exit_menu = FALSE;
	static int select_item_num = 1;
	int ch = get_code();

	while (TRUE)
	{
		switch (ch)
		{
			case KEY_A:
				run_process(1);
				draw_menu(select_item_num);
				break;
			case KEY_B:
				run_process(2);
				draw_menu(select_item_num);
				break;
			case KEY_C:
				run_process(3);
				draw_menu(select_item_num);
				break;
			case KEY_D:
				run_process(4);
				draw_menu(select_item_num);
				break;
			case KEY_E:
				run_process(5);
				draw_menu(select_item_num);
				break;
			case KEY_F:
				run_process(6);
				draw_menu(select_item_num);
				break;
			case ARROW_UP:
				if (select_item_num == 1) {
					select_item_num = total_item_num;
				}
				else {
					select_item_num = select_item_num - 1;
				}
				draw_menu(select_item_num);
				break;
			case ARROW_DOWN:
				if (select_item_num == total_item_num) {
					select_item_num = 1;
				}
				else {
					select_item_num = select_item_num + 1;
				}
				draw_menu(select_item_num);
				break;
			case KEY_ENTER:
				if (select_item_num == total_item_num) {
					is_exit_menu = TRUE;
				}
				else {
					run_process(select_item_num);
					draw_menu(select_item_num);
				}
				break;
			case KEY_ESC:
			case KEY_Q:
				is_exit_menu = TRUE;
				break;
			/*
			case ARROW_LEFT:
				printf("LEFT\n");
				break;
			case ARROW_RIGHT:
				printf("RIGHT\n");
				break;
			*/
		}

		if (is_exit_menu == TRUE) {
			system("cls");
			break;
		}
		else {
			/*printf("press key code: %d\n", ch);*/
			ch = get_code();
		}
	}
}

void print_word(char word[10])
{
	printf("%s\n", word);
}

int main()
{
	set_env();
	draw_menu(1);
	set_select_item_num(total_item_num);
	/*print_word("hello world");*/
	set_env();
}

