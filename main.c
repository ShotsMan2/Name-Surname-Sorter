#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, buyukmu, k, p1, p2, ilen = 0, maxilen, maxindex;

    char temp[50], temp1[50];

    char liste[5][50] = {
        "Mehmet Yildiz",
        "Ahmet Demir",
        "Zeynep Celik",
        "Ayse Kaya",
        "Baris Mancho"};

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 50; j++)
        {
            printf("%c", liste[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            buyukmu = 0;
            k = 0;
            while (1)
            {
                if (liste[j][k] > liste[j + 1][k])
                {
                    buyukmu = 1;
                    break;
                }
                else if (liste[j][k] < liste[j + 1][k])
                {
                    buyukmu = 0;
                    break;
                }
                else
                {
                    buyukmu = 0;
                    break;
                }
                k++;
            }

            if (buyukmu == 1)
            {
                k = 0;
                while (liste[j][k] != '\0')
                {
                    temp[k] = liste[j][k];
                    k++;
                }
                temp[k] = '\0';

                k = 0;
                while (liste[j + 1][k] != '\0')
                {
                    liste[j][k] = liste[j + 1][k];
                    k++;
                }
                liste[j][k] = '\0';

                k = 0;
                while (temp[k] != '\0')
                {
                    liste[j + 1][k] = temp[k];
                    k++;
                }
                liste[j + 1][k] = '\0';
            }
        }
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", liste[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            p1 = 0;
            p2 = 0;

            buyukmu = 0;

            while (liste[j][p1] != ' ')
            {
                p1++;
            }
            p1++;

            while (liste[j + 1][p2] != ' ')
            {
                p2++;
            }
            p2++;

            while (1)
            {
                if (liste[j][p1] > liste[j + 1][p2])
                {
                    buyukmu = 1;
                    break;
                }
                else if (liste[j][p1] < liste[j + 1][p2])
                {
                    buyukmu = 0;
                    break;
                }
                else if (liste[j][p1] == '\0' && liste[j + 1][p2] == '\0')
                {
                    buyukmu = 0;
                    break;
                }
                p1++;
                p2++;
            }

            if (buyukmu == 1)
            {
                k = 0;
                while (liste[j][k] != '\0')
                {
                    temp[k] = liste[j][k];
                    k++;
                }
                temp[k] = '\0';

                k = 0;
                while (liste[j + 1][k] != '\0')
                {
                    liste[j][k] = liste[j + 1][k];
                    k++;
                }
                liste[j][k] = '\0';

                k = 0;
                while (temp[k] != '\0')
                {
                    liste[j + 1][k] = temp[k];
                    k++;
                }
                liste[j + 1][k] = '\0';
            }
        }
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", liste[i]);
    }

    while (liste[0][j] != ' ')
    {
        ilen++;
        j++;
    }
    maxilen = ilen;
    maxindex = 0;

    for (i = 0; i < 5; i++)
    {
        ilen = 0;
        j = 0;
        while (liste[i][j] != ' ')
        {
            ilen++;
            j++;
        }
        if (ilen > maxilen)
        {
            maxilen = ilen;
            maxindex = i;
        }
    }
    printf("\n");

    printf("%s", liste[maxindex]);

    maxilen = 0;

    for (i = 0; i < 5; i++)
    {

        j = 0;
        while (liste[i][j] != ' ')
        {
            j++;
        }
        j++;
        ilen = 0;
        while (liste[i][j] != '\0')
        {
            ilen++;
            j++;
        }
        if (ilen > maxilen)
        {
            maxilen = ilen;
            maxindex = i;
        }
    }

    printf("\n");

    printf("%s", liste[maxindex]);

    for (i = 0; i < 5; i++)
    {
        k = 0;
        while (liste[i][k] != ' ')
        {
            temp1[k] = liste[i][k];
            k++;
        }
        temp1[k] = '\0';
        k++;
        j = 0;
        while (liste[i][k] != '\0')
        {
            liste[i][j] = liste[i][k];
            k++;
            j++;
        }
        liste[i][j] = ' ';
        j++;
        k = 0;
        while (temp1[k] != '\0')
        {
            liste[i][j] = temp1[k];
            j++;
            k++;
        }
    }

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", liste[i]);
    }
}
