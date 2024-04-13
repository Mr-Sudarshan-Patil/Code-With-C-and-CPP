
    int num;
    printf("\n\n1.Addition \n\n2.Substraction \n\n3.Multiplication \n4.division\nEnter your Choise number =  ");
    scanf("%d",&num);
    switch(num){

        case 1:
        {
            int a,b,c;
            printf("\nEnter your First no= ");
            scanf("%d",&a);

            printf("\nEnter your Second no= ");
            scanf("%d",&b);

            c=a+b;

            printf("\nAddition a+b is %d+%d= %d",a,b,c);
        }
        break;

        case 2:
        {
            int a,b,c;
            printf("\nEnter your First no= ");
            scanf("%d",&a);

            printf("\nEnter your Second no= ");
            scanf("%d",&b);

            c=a-b;

            printf("\nSubstraction a-b is %d-%d= %d",a,b,c);
        }
        break;

        case 3:
        {
            int a,b,c;
            printf("\nEnter your First no= ");
            scanf("%d",&a);

            printf("\nEnter your Second no= ");
            scanf("%d",&b);

            c=a*b;

            printf("\nMultiplication a*b is %d*%d= %d",a,b,c);
        }
        break;
               case 4:
        {
            int a,b,c;
            printf("\nEnter your First no= ");
            scanf("%d",&a);

            printf("\nEnter your Second no= ");
            scanf("%d",&b);

            c=a/b;

            printf("\ndivision a/b is %d/%d= %d",a,b,c);
        }
        break;
    }
    return 0;