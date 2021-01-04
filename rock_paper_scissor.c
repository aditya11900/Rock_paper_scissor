#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissor(char you, char computer)
{
    if(you==computer)
    {
        return 0;
    }
    if(you =='r' && computer=='p')
    {
        return -1;
    }
    else if (you =='p'&& computer == 'r')
    {
        return 1;
    }
    if (you == 'r' && computer == 's')
    {
        return 1;
    
    }else if (you == 's' && computer == 'r')
    {
        return -1;
    }
    if (you == 's' && computer =='p'){
        return 1;
    }
    else if (you == 'p' && computer == 's')
    {
        return -1;
    }
    
}


int main(){
    char you, computer;
    srand(time(0));
    int number = rand()%100+1;
    if(number<33){
        computer='s';
    }else if(number>33 && number<66){
        computer='p';
    }else
    {
    computer= 'r';
    }

    printf("enter 'r' for rock, 'p' for paper and 's' for scissor\n");
    scanf("%c", &you);
    int result =RockPaperScissor(you, computer);
    printf("you chose %c and computer chose %c",you, computer);
if(result==0){
    printf("game draw\n");
}
    else if(result == 1){
        printf("you won and computer lost\n");
    }
    else
    {
        printf("you lost and computer won\n");
    }

 return 0;
}