#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"random_number_tool.h"

int get_random_number_time(void){
	int t;
	srand(time(NULL));
	t = rand()%100+1;
	return t;
}

int input_number(int * number){
	
	printf("請猜一個數字(1~100): ");
		
	if(scanf("%d",number) != 1){
		printf("您輸入的不是整數喔!\n");
		printf("請重新輸入!\n");
		pause(); 
		clear();
		return 1;
	}
	return 0;
}

int determine_input_number(int in_number ,int random_number,int * count){
	(*count)++;
	if(in_number==random_number){
				printf("恭喜答對!\n");
				printf("總共花了: %d 次\n",*count);
				return 0;
			}
			
			if(abs(in_number-random_number)<=5){
				printf("數字很接近了!!\n");
				return 1;
			}
			if(in_number>random_number){
				printf("數字猜大了( ↑ )\n");
				return 1;
			}
			
			if(in_number<random_number){
				printf("數字猜小了( ↓ )\n");
				return 1;	
			}	
}

int show_choose(void){
		int choose;
		printf("====================================\n");
			printf("要繼續輸入1\n");
			printf("要結束輸入0\n");
			printf("你的輸入: ");
			scanf("%d",&choose);

			switch(choose){
				case 0:
					printf("請按 Enter 結束...");
					pause();
					return CHOICE_EXIT;
				case 1:
					clear();
					return CHOICE_CONTINUE;
				default:
					printf("請輸入正確的選項（0或1）\n");
					return CHOICE_INVALID;
			}
}

void pause(void){
	while (getchar() != '\n');	// 清除緩衝區的字符
    getchar();	// 等待使用者按下  Enter 鍵 
}

void clear(void){
	
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif 
} 
