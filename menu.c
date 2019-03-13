#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char default_drive[] = "D:";
const char default_folder[] = "temp\\code\\tc201";
const char depota_folder[] = "depota";
const char depota_exe_filename[] = "depota";
const char acca_folder[] = "acca";
const char acca_exe_filename[] = "acca";
const char accga_folder[] = "accga";
const char accga_exe_filename[] = "accga";
const char daga_folder[] = "daga";
const char daga_exe_filename[] = "daga";
const char editor_folder[] = "pe2";
const char editor_exe_filename[] = "pe2";
const char report_filename[] = "rn11";

const int total_item_num = 7;
const char menu_str_top[] =			"---------------------------------------\n";
const char menu_str_1[] =			"|    A. press A to xxx                |\n";
const char menu_str_2[] =			"|    B. press B to xxx                |\n";
const char menu_str_3[] =			"|    C. press C to xxx                |\n";
const char menu_str_4[] =			"|    D. press D to xxx                |\n";
const char menu_str_5[] =			"|    E. press E to xxx                |\n";
const char menu_str_6[] =			"|    F. press F to xxx                |\n";
const char menu_str_7[] =			"|    Q. press Q or ESC for exit       |\n";
const char menu_str_selected_1[] =	"| -->A. press A to xxx<--             |\n";
const char menu_str_selected_2[] =	"| -->B. press B to xxx<--             |\n";
const char menu_str_selected_3[] =	"| -->C. press C to xxx<--             |\n";
const char menu_str_selected_4[] =	"| -->D. press D to xxx<--             |\n";
const char menu_str_selected_5[] =	"| -->E. press E to xxx<--             |\n";
const char menu_str_selected_6[] =	"| -->F. press F to xxx<--             |\n";
const char menu_str_selected_7[] =	"| -->Q. press Q or ESC for exit<--    |\n";
const char menu_str_bottom[] =		"---------------------------------------\n";
const char menu_comment_str[] = 	"Press arrow keys, escape key to exit:\n";

const char input_filename_comment_str[] = 	"Press input filename: ";

enum
{
    KEY_ESC     = 27,
	KEY_ENTER	= 13,
	KEY_A		= 97,
	KEY_B		= 98,
	KEY_C		= 99,
	KEY_D		= 100,
	KEY_E		= 101,
	KEY_F		= 102,
	KEY_Q		= 113,
    ARROW_UP    = 256 + 72,
    ARROW_DOWN  = 256 + 80,
    ARROW_LEFT  = 256 + 75,
    ARROW_RIGHT = 256 + 77
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
	printf("%s", menu_str_bottom);
	printf("%s", menu_comment_str);

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
			chdir(depota_folder);
			system(depota_exe_filename);
			break;
		case 2:
			chdir(acca_folder);
			system(acca_exe_filename);
			break;
		case 3:
			chdir(accga_folder);
			system(accga_exe_filename);
			break;
		case 4:
			chdir(daga_folder);
			system(daga_exe_filename);
			break;
		case 5:
			/*chdir(editor_folder);*/
			strcat(run_str, default_drive);
			strcat(run_str, "\\");
			strcat(run_str, editor_folder);
			strcat(run_str, "\\");
			strcat(run_str, editor_exe_filename);
			strcat(run_str, " ");
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
	static int select_item_num = 1;
    int ch = get_code();

    while ((ch != KEY_ESC) && (ch != KEY_Q))
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
				draw_menu(select_item_num);
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
		/*printf("press key code: %d\n", ch);*/
		ch = get_code();
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