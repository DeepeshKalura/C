/*
    Write a program in C to Find the Frequency of Characters.
*/

int main()
{
    char a[1000], b;
    gets(a);
    int count = 0;
    scanf("%c", &b);
    printf("Input a character to the gets its frequency from string.\n");
    for(int i = 0; i<strlen(a); i++)
    {
        if (a[i] == b)
        {
            count+=1;
        }
    }
    printf("The frequency of '%c' is : %d ", b, count);
    return 0;
}