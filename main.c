#include<stdio.h>
#include<stdlib.h>
#include"random_number_tool.h"

int main(void){ 
	
	int random_number;
	int in_number;
	int count;
	int choice;
	
	while(1){
		count = 0;
		random_number = get_random_number_time();
		printf("========== 新的一局開始！ ==========\n");
		while(1){
			
			if(input_number(&in_number)==EC_Input_error){ 
				continue;
			}
			 
			
			printf("\n");
					
			if(determine_input_number(in_number ,random_number,&count)==EC_Input_error){
				continue;
			}
			break;
		}
			
		while(1){
			
			choice = show_choose();
			
			switch(choice) {
				
				case CHOICE_EXIT:     return 0;
				case CHOICE_CONTINUE: break;
				case CHOICE_INVALID:  continue;
				
			}
			break;	
		}
		continue;	
	}
}

