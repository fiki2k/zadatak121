// Program treba zamjenit dijagonale matrice.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int redak, stupac, upit, temp;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

	// ? je isto sto i if(m < n).
    upit = (m < n) ? m : n;

    /*
     Zamjena dijagonala
     */
    for(redak=0; redak < upit; redak++)
    {
        stupac = redak;

        temp = A[redak][stupac];
        A[redak][stupac] = A[redak][(upit - stupac)-1];
        A[redak][(upit - stupac)-1] = temp;
    }

    /*
      Ispis matrice.
     */
    printf("\nMatrica nakon zamjene dijagonala: \n");
    for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    return 0;
}
