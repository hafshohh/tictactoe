#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,bar,kol;
    char b[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    printf("%c %c %c\n",b[0][0],b[0][1],b[0][2]);
    printf("%c %c %c\n",b[1][0],b[1][1],b[1][2]);
    printf("%c %c %c\n",b[2][0],b[2][1],b[2][2]);
   
while (i<9)
    {
        if(i%2==0){
            printf("player 1 your move :");
        }else{
            printf("player 2 your move :");
        }   
        scanf ("%d %d",&bar,&kol);
        
        if (b[bar][kol]=='.'){
        if(i%2==0){
            b[bar][kol]='X';
        }else if(i%2==1){
            b[bar][kol]='O';
        }
         printf("%c %c %c\n%c %c %c\n%c %c %c\n",b[0][0],b[0][1],b[0][2],b[1][0],b[1][1],b[1][2],b[2][0],b[2][1],b[2][2]);
       i+=1;
        }
        
        for(bar=0;bar<3;bar++){
            if(b[bar][0]==b[bar][1] && b[bar][1]==b[bar][2]){
                if(b[bar][0]=='X') {
                    printf("player 1 win\n");
                    break;
                }
                else if (b[bar][0]=='O') {
                    printf("player 2 win\n");
                    break;
                }
            }
        }
        
        for(kol=0; kol<3; kol++){
			if(b[0][kol]==b[1][kol] && b[1][kol]==b[2][kol]){
			   if(b[0][kol]=='X') {
                    printf("player 1 win\n");
                    break;
                }
                else if (b[0][kol]=='O') {
                    printf("player 2 win\n");
                    break;
                }
			}
		}
		
		if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
			if(b[0][0]=='X') {
                printf("player 1 win\n");
                break;
            }
            else if (b[0][0]=='O') {
                printf("player 2 win\n");
                break;
            }
		}
		else if(b[0][2]==b[1][1] && b[1][1]==b[2][0]){
			if(b[0][2]=='X') {
                printf("player 1 win\n");
                break;
            }
            else if (b[0][2]=='O') {
                printf("player 2 win\n");
                break;
            }
		}
}

printf ("Game Finished");
return 0;
}