//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*


#include <stdio.h>

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
