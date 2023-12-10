#include<stdio.h>


int Seating();

int main(void)
{
    int User_choice;
    printf("\n*****Air Line Ticketing****\n");
    char Seat_arrangement[13][6]={
                    {'*','*','X','*','X','X'},
                    {'*','X','*','X','*','X'},
                    {'*','*','X','X','*','X'},
                    {'X','*','X','*','X','X'},
                    {'*','X','*','X','*','*'},
                    {'*','X','*','*','*','X'},
                    {'X','*','*','*','X','X'},
                    {'*','X','X','X','X','*'},
                    {'X','*','X','X','*','X'},
                    {'*','X','*','X','X','X'},
                    {'*','*','X','*','X','*'},
                    {'*','*','X','X','*','X'},
                    {'*','*','*','*','X','*'}};
    char seat_type;
    while(1)
    {
    printf("\nTicket type:\nFirst_class(F)\nBusiness Class(B)\nEconomy class(E)\n'x' to exit\n");
    printf("\nYour Choice:");
    scanf(" %c",&seat_type);
    if(seat_type!='x')
    {
    
    printf("       ");
    for(int k=0;k<6;++k)
        {
            printf("%c ",65+k);
        }
        printf ("\n");
      for(int i=0;i<13;++i)
    {
        printf("%2d    ",i+1);
        
        
        for(int j=0;j<6;++j)
        {
            
            printf("%c ",Seat_arrangement[i][j]);
        }
        printf("\n");
    }
    printf("\nAbove Seats are available\n");
   
    char (*arrangement)[6]=Seat_arrangement;
    char seat;
    int rows,col;
    switch (seat_type)
    {

    case 'f':
    case 'F':
    printf("\nIn first class you have first two rows seats\n");
    printf("\nEnter your desired seat(A-F):");
    scanf(" %c",&seat);
    printf("\nENter your desired row:");
    scanf("%d",&rows);
    col=(int)seat-65;
       if(rows>=1 && rows<=2)
    {
     Seating(rows,col,arrangement);
    }
    else
    {
        printf("\nOnly first two rows are available for First class\n");
    }
        break;
    
    case 'b':
    case 'B':
    printf("\nIn Business class you have seats  in rows from 3-7\n");
    printf("\nEnter your desired seat(A-F):");
    scanf(" %c",&seat);
    printf("\nENter your desired row:");
    scanf("%d",&rows);
    --rows;
    col=(int)seat-65;
       if(rows>=3 && rows<=7)
    {
     Seating(rows,col,arrangement);
    }
    else
    {
        printf("\nOnly 3-7 rows seats  are available for business class\n");
    }
       
        break;
    
    case 'e':
    case 'E':
    printf("\nIn Business class you have seats  in rows from 8-13\n");
    printf("\nEnter your desired seat(A-F):");
    scanf(" %c",&seat);
    printf("\nENter your desired row:");
    scanf("%d",&rows);
    col=(int)seat-65;
       if(rows>=8 && rows<=13)
    {
     Seating(rows,col,arrangement);
    }
    else
    {
        printf("\nOnly 8-13 rows seats  are available for business class\n");
    }
       
    default:
        printf("\nInvalid selection\n");
        break;
    }
    }
    else if(seat_type=='x')
    {
        break;
    }
    }
    return 0;
}


int Seating(int rows, int col,char (*arrangement)[6])
{
                if(arrangement[rows][col]=='*')
                {
                    arrangement[rows][col]='X';
                    printf("\nYour seat has been reserved successfully\n");
                    return 0;
                }
                else if(arrangement[rows][col]=='X')
                {
                    printf("\nThis seat is already reserced. Please select another seat\n");
                    
                }
            
        
  
}