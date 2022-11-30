/******************************************************************************************************
//
//      ONE DIMENSONAL ARRAY
//
// Program to take 5 values from the user and store them in an array
// Print the numbers  stored in  the array
// Program to find the average of n numbers using arrays
//******************************************************************************************************/


    printf("enter numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The numbers in %d is %d\n", i, number[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += number[i];
    }
 printf("sum is %d\n", sum);
    printf("avg is %d", sum/5);

    return 0;
}