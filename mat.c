// Coded By Bhaskar Narayan

#include "stdio.h"
#include "stdlib.h"

int main(){
	int array[4][7]={{1,2,3,4},{2,2,1,0},{1,2,0,0},{0,0,3,2}};
	int stk_0=4, stk_1=3, stk_2=2, stk_3=4;
	int i, j, row, col, new, elm, choice;

	printf("Current Array Elements Are Shown Below\n\a");

	for(i=0; i<4; i++){
		for(j=0; j<7; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}

xy:

	printf("How Many Elements Do You Want To Add ?\n");
	scanf("%d", &elm);

	printf("Enter The Position Where You Want To Add Element\n");
	scanf("%d %d", &row, &col);

	if(row==0){
		if((stk_0+elm)>7)
			printf("Sorry !\nArray Overflowed\n");
		else{
			for(i=6; i>=col; i--){
				if(i==col){
					printf("Enter The Value Of The Element\n");
					scanf("%d", &new);
					array[row][i]=new;
					if(new > 0 || new < 0)
						stk_0+=(i+1)-stk_0;
				}
				else
					array[row][i]=array[row][i-1];
			}
		}
	}

	else if(row==1){
		if((stk_1+elm)>7)
			printf("Sorry !\nArray Overflowed\n");
		else{
			for(i=6; i>=col; i--){
				if(i==col){
					printf("Enter The Value Of The Element\n");
					scanf("%d", &new);
					array[row][i]=new;
					if(new > 0 || new < 0)
						stk_1+=(i+1)-stk_1;
				}
				else
					array[row][i]=array[row][i-1];
			}
		}
	}

	else if(row==2){
		if((stk_2+elm)>7)
			printf("Sorry !\nArray Overflowed\n");
		else{
			for(i=6; i>=col; i--){
				if(i==col){
					printf("Enter The Value Of The Element\n");
					scanf("%d", &new);
					array[row][i]=new;
					if(new > 0 || new < 0)
						stk_2+=(i+1)-stk_2;
				}
				else
					array[row][i]=array[row][i-1];
			}
		}
	}

	else if(row==3){
		if((stk_3+elm)>7)
			printf("Sorry !\nArray Overflowed\n");
		else{
			for(i=6; i>=col; i--){
				if(i==col){
					printf("Enter The Value Of The Element\n");
					scanf("%d", &new);
					array[row][i]=new;
					if(new > 0 || new < 0)
						stk_3+=(i+1)-stk_3;
				}
				else
					array[row][i]=array[row][i-1];
			}
		}
	}

	else
		printf("You Are Not Supposed To Operate Computers\n");

	printf("The Current Array Elements Is Shown Below\n\a");

	for(i=0; i<4; i++){
		for(j=0; j<7; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}

	if(stk_0 != 7 || stk_1 != 7 || stk_2 != 7 || stk_3 != 7){
		printf("Do You Want To Add Another Element ?\n");
		printf("Press 1 For YES and 0 For NO\n");
		scanf("%d", &choice);
		if(choice==1)
			goto xy;
		else 
			exit(0);
	}

	else
		printf("\nNo Space Left!\nProgram Terminated\n\a");
	
	return 0;
}
