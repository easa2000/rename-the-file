// rename the file
#include<stdio.h>
void main()
{
    int success = 0;
    success = rename("comment.txt","feedback.txt");
    if(success != 0)
    printf("\n The File could not be removed");
}
