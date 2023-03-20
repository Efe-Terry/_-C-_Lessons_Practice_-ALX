#include <stdio.h>
#include <stdlib.h>

/*
* malloc
* free
* calloc
* realloc
*/

/*
*
* malloc        ||---- memory allocation dynamically
* returns a void pointer we can type cast/ allocate
*
* i.e   || int malloc(size * sizeof(int));
* i.e   || char malloc(size * sizeof(char));
*
* i.e   || ptr = (cast-type*) malloc(byte-size)
*
*/

/*
*Use:
*Prototype:      ||void *malloc(size_t size);
*/

void m(int n0, int n1, int n2)
{
    int *t;
    int sum;

    t = malloc(sizeof(*t) * 3);
    t[0] = n0;
    t[1] = n1;
    t[2] = n2;
    sum = t[0] + t[1] + t[2];
    printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);

    free(m);
}

int main(void)
{
    /*i.e*/
    /*type-cast int**/

    int *ptr;
    int n, i;

    /*Ex-2*/
    int *nn;

    printf("Enter number of elements to be stored: \n");
    scanf("%d", &n);
    printf("Number of elements you entered: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    /*Ex-2 to show the effect of (int*)*/
    nn = (int*)malloc(2 * sizeof(int)); /*Testing methods*/
    nn[0] = 95;
    nn[1] = 75;

    /*check*/

    if ( ptr == NULL )
    {
        printf("NO! Memory not allocated!\n");
        exit(0);
    }
    else
    {
        printf("YES! Memory allocated successfully using malloc! \n");

        /*Loop through the entered number*/
        for ( i = 0; i < n; ++i )
        {
            ptr[i] = i++;
        }

        printf("The elements of the array are: %d\n", i );
        for ( i = 0; i < n; ++i )
        {
            printf("%d \n", ptr[i]);
        }
    }

    printf("nn is:\t nn[0]%d nn[1]2%d\n", nn[0], nn[1]);
    printf("The address is:\t nn[0]%d nn[1]2%d\n", &nn[0], &nn[1]);

    printf("Other Examples: \n");

    /*Other examples..*/

    char *str;

    str = malloc(sizeof(char) * 3);

    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);

    int *tab;

    tab = malloc(sizeof(*tab) * 3);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);

    free(tab);
    free(str);
    free(ptr);
    free(nn);

    m(9, 4, 18);

    return (0);
}
