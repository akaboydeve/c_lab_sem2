#include <stdio.h>
#include <stdlib.h>

struct record
{
    int roll;
    float marks[5];
};

int main()
{

    struct record shcool[5];
    int ch, index, rolln,s, m;
    printf("1.Add Student\n2.Print Student Info\n3.Print avg Marks\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter The Index of the Student\n");
        scanf("%d", &index);
        printf("Enter The Roll of the Student\n");
        scanf("%d", &rolln);
        shcool[i].roll = rolln;
        for (int i = 0; i < 5; i++)
        {
            printf("Enter Marks of Subject %d\n", i + 1);
            scanf("%d", &m);
            shcool[index].marks[i];
        }

        break;
    case 2:
       printf("Enter The Index of the Student\n");
       scanf("%d", &index);
       printf("For Index %d the Roll is %d\n");
       for (int i = 0; i < 5; i++)
        {
            printf("Marks of Subject %d\ is :%d\n", (i + 1),school[index].marks[i]);
        }
break;

case 3:
     printf("Enter The Index of the Student\n");
      scanf("%d", &index);
       printf("For Index %d the Roll is %d\n");
s=0;
       for (int i = 0; i < 5; i++)
        {
s=s+shcool[index].marks[i];
}
printf("The Average is %d\n",s);
break;

    default:
printf("wrong input\n");
        break;
    }

return 0;
}
