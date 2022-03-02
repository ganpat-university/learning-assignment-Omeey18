#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void addbook();
void display();
void count();
void disp_author();
void title();
void acc_order();

int T_book = 0;

struct library
{
  int ano;
  char title[30];
  char author[20];
  int price;
  int flag;
}b[100];

int main()
{
    int choice;
    
    
    while(choice!=7){
        printf("\n*****Library Management System*****\n\n");
        printf("1.Add book information\n2.Display book information\n3.List all books of given author\n4.List the title of specified book\n5.List the count of books in the library\n6.List the books in the order of accession number\n7.exit\n");;
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        printf("\n---------------------------------------------------------------------\n");
        switch(choice)
        {
            case 1:
                addbook();
                break;
            case 2:
                display();
                break;
            case 3:
                disp_author();
                break;
            case 4:
                title();
                break;
            case 5:
                count();
                break;
            case 6:
                acc_order();
                break;
            case 7:
                printf("Fir Milenge Bye...!\n");
                exit(1);
            default:
                printf("Enter valid choice..\n");
        }
        printf("\n---------------------------------------------------------------------\n");
    }
    
    
    return 0;
}

void addbook()
{
    int n,i;
    printf("How many books you want to add? ");
    scanf("%d",&n);
    //printf("Enter details of %d books\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter information of book no. %d\n",i+1);
        printf("Accession number: ");
        scanf("%d",&b[i].ano);
        printf("[NOTE]: Use _(Underscore) to sparate words...!  [DO NOT USE WHITE SPACE]\n");
        printf("Title of the book: ");
        scanf("%s",b[i].title);
        //gets(b[i].title);
        //fgets(b[i].title, 30, stdin);
        //scanf("%[^\n]s",b[i].title);
        printf("[NOTE]: Use _(Underscore) to sparate words...!  [DO NOT USE WHITE SPACE]\n");
        printf("Author name: ");
        scanf("%s",b[i].author);
        //gets(b[i].author);
        //fgets(b[i].author, 30, stdin);
        //scanf("%[^\n]s",b[i].author);
        printf("Price: ");
        scanf("%d",&b[i].price); 
        printf("Issue status yes/no(1/0): ");
        scanf("%d",&b[i].flag);
        T_book++;
    }
    //c=i; //store total no. of books added
    
}

void display(){
     printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
               printf("Book no. %d\n",i+1);
                printf("Accession number: %d\n",b[i].ano);
                printf("Title of the book: %s\n",b[i].title);
                printf("Author name: %s\n",b[i].author);
                printf("Price: %d\n",b[i].price);
                printf("Issue status yes/no(1/0): %d\n\n",b[i].flag);
                
            }
     }
}

void disp_author(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Author name: %s\n",b[i].author);
            }
     }
}
void title(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Title of the book: %s\n",b[i].title);
            }
     }
    
}

void count(){
    
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else {
         printf("Total numbers of books are %d\n",T_book);
     }
    
}

void acc_order(){
    printf("Total numbers of books are %d\n\n",T_book);
     if(T_book<1){
         printf("No Books are here...!\n");
     }
     else{
            for(int i=0;i<T_book;i++){
                printf("Accession number: %d\n",b[i].ano);
            }
     }
}
