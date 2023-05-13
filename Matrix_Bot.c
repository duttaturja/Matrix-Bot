#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<time.h>
///////////////////////////Addition of Matrix
void addition()
{
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    int n,m,i,j;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Addition of Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    printf("\n\n\t");
    printf("Input the elements of 1st Matrix: ");
    int arr1[n][m], arr2[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\t\t\t\t          ");
    }
    printf("\n\n\t");
    printf("Input the elements of 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\t\t\t\t          ");
    }
    int sum[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\n\n\t");
    printf("Addition of 1st & 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n\t\t\t\t      ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tAddition of matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            fprintf(fpr,"%d ",sum[i][j]);
        }
        fprintf(fpr,"\n\t\t\t   ");
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
///////////////////////////subtraction of Matrix
void subtraction()
{
    int n,m,i,j;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Subtraction of Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    printf("\n\n\t");
    printf("Input the elements of 1st Matrix: ");
    int arr1[n][m], arr2[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\t\t\t\t          ");
    }
    printf("\n\n\t");
    printf("Input the elements of 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\t\t\t\t          ");
    }
    int sub[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            sub[i][j]=(arr1[i][j])-(arr2[i][j]);
        }
    }
    printf("\n\n\t");
    printf("Subtraction of 1st & 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n\t\t\t\t         ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tSubtraction of matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            fprintf(fpr,"%d ",sub[i][j]);
        }
        fprintf(fpr,"\n\t\t\t       ");
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }

}
///////////////////////////Scaler Multiplication of Matrix
void scalar_mult()
{
    int n,m,i,j,target;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Scaler Multiplication of a Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n\tInput multiplier: ");
    scanf("%d",&target);
    int smulti[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            smulti[i][j]=target*(arr1[i][j]);
        }
    }
    printf("\n\tScaler multiplication of the matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",smulti[i][j]);
        }
        printf("\n\t\t\t\t\t     ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tScaler multiplication of the matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            fprintf(fpr,"%d ",smulti[i][j]);
        }
        fprintf(fpr,"\n\t\t\t\t\t     ");
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
/////////////////////////// Multiplication of Matrix
void matrix_mult()
{
    int n,m,i,j,k;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Multiplication of Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    printf("\n\n\t");
    printf("Input the elements of 1st Matrix: ");
    int arr1[n][m], arr2[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        printf("\t\t\t\t          ");
    }
    printf("\n\n\t");
    printf("Input the elements of 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\t\t\t\t          ");
    }

    int multi[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            multi[i][j]=0;
            for(k=0; k<n; k++)
            {
                multi[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\n\n\t");
    printf("Multiplication of 1st & 2nd Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n\t\t\t\t\t    ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tMultiplication of matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            fprintf(fpr,"%d ",multi[i][j]);
        }
        fprintf(fpr,"\n\t\t\t\t  ");
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
/////////////////////////// rowsum of Matrix
void rowsum()
{
    int n,m,i,j,sum1,sum2;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Row sum of a Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    int arr[n][m];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        sum1=0;
        for(j=1; j<=m; j++)
        {
            sum1=sum1+arr[i][j];
        }
        printf("\t%dno. Row sum = %d\n",i,sum1);
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tRow sum of the Matrix: \n");
    for(i=1; i<=n; i++)
    {
        sum1=0;
        for(j=1; j<=m; j++)
        {
            sum1=sum1+arr[i][j];
        }
        fprintf(fpr,"\t\t%dno. Row sum = %d\n",i,sum1);
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }

}
/////////////////////////// colsum of Matrix

void colsum()
{
    int n,m,i,j,sum1,sum2;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Row sum of a Matrix");
    gotoxy(8,5);
    printf("Input the numbers of row & column: ");
    scanf("%d %d",&n,&m);
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    int arr[n][m];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n");
    for(i=1; i<=n; i++)
    {
        sum1=0;
        for(j=1; j<=m; j++)
        {
            sum1=sum1+arr[j][i];
        }
        printf("\t%dno. Column sum = %d\n",i,sum1);
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tColumn sum of the Matrix: \n");
    for(i=1; i<=n; i++)
    {
        sum1=0;
        for(j=1; j<=m; j++)
        {
            sum1=sum1+arr[j][i];
        }
        fprintf(fpr,"\t\t%dno. Column sum = %d\n",i,sum1);
    }
    fprintf(fpr,"\n");
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }

}
/////////////////////////// transpose of Matrix

void transpose()
{
    int n,m,i,j;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Transpose Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n\n\t");
    printf("The Transpose Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n\t\t\t\      ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tThe Transpose Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            fprintf(fpr,"%d ",arr[j][i]);
        }
        fprintf(fpr,"\n\t\t\t\      ");
    }
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
/////////////////////////// determinant of Matrix
void determinant()
{
    int k,d,i,j,arr[10][10],adj[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Determinant of a Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        determinant();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    d=deter(arr,k);
    printf("\n\n\t");
    printf("Determinant of the Matrix: %d",d);
    gotoxy(50,26);
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tDeterminant of the Matrix: %d",d);
    fclose(fpr);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
int deter(int arr[10][10],int k)
{
    int det,c,s=1,temp[10][10],i,j,m,n;
    if(k==1)
    {
        return (arr[0][0]);
    }
    else
    {
        det=0;
        for(c=0; c<k; c++)
        {
            m=0;
            n=0;
            for(i=0; i<k; i++)
            {
                for(j=0; j<k; j++)
                {
                    temp[i][j]=0;
                    if(i!=0&&j!=c)
                    {
                        temp[m][n]=arr[i][j];
                        if(n<(k-2))
                        {
                            n++;
                        }
                        else
                        {
                            n=0;
                            m++;
                        }
                    }
                }
            }
            det=det+s*(arr[0][c]*deter(temp,k-1));
            s=-1*s;
        }
    }

    return(det);
}
void getCofactor(int A[10][10], int temp[10][10], int p, int q, int k)
{
    int i = 0, j = 0;
    for (int row = 0; row < k; row++)
    {
        for (int col = 0; col < k; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = A[row][col];
                if (j == k- 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
void adjointlol(int A[10][10],int adj[10][10],int k)
{
    if (k == 1)
    {
        adj[0][0] = 1;
        return;
    }
    int sign = 1, temp[10][10];
    for (int i=0; i<k; i++)
    {
        for (int j=0; j<k; j++)
        {
            getCofactor(A, temp, i, j, k);
            sign = ((i+j)%2==0)? 1: -1;
            adj[j][i] = (sign)*(deter(temp, k-1));
        }
    }
}
/////////////////////////// adjoint of Matrix

void adjoint()
{
    int k,d,i,j,arr[10][10],adj[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Adjoint Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        adjoint();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    d=deter(arr,k);
    adjointlol(arr, adj,k);
    printf("\n\n\t");
    printf("The adjoint matrix is: ");
    for (int a=0; a<k; a++)
    {
        for (int b=0; b<k; b++)
        {
            printf("%d ",adj[a][b]);
        }
        printf("\n\t\t\t\       ");
    }
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tThe adjoint matrix: ");
    for (int a=0; a<k; a++)
    {
        for (int b=0; b<k; b++)
        {
            fprintf(fpr,"%d ",adj[a][b]);
        }
        fprintf(fpr,"\n\t\t\t\    ");
    }
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
/////////////////////////// inverse of Matrix

void inverselol(int A[10][10],int k,int adj[10][10], float I[10][10])
{
    memset(I,0,sizeof(I));
    int det=0;
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    det=deter(A,k);
    if(det==0)
    {
        printf("\n\t\t\tSingular matrix, can't find its inverse\n");
        fprintf(fpr,"\n\t%s",buffer);
        fprintf(fpr,"\tSingular matrix, can't find its inverse");
        fclose(fpr);
    }
    else
    {
        for (int i=0; i<k; i++)
        {
            for (int j=0; j<k; j++)
            {
                I[i][j] = adj[i][j]/(float)(det);
            }
        }
        printf("\n\n\t");
        printf("The inverse matrix is: ");
        for (int x=0; x<k; x++)
        {
            for (int y=0; y<k; y++)
            {
                printf("%.2f ",I[x][y]);
            }
            printf("\n\t\t\t\       ");
        }
        fprintf(fpr,"\n\t%s",buffer);
        fprintf(fpr,"\tThe inverse matrix: ");
        for (int x=0; x<k; x++)
        {
            for (int y=0; y<k; y++)
            {
                fprintf(fpr,"%.2f ",I[x][y]);
            }
            fprintf(fpr,"\n\t\t\t\    ");
        }
        fclose(fpr);
    }
}
/////////////////////////// inverse of Matrix

void inverse()
{
    int k,d,i,j,arr[10][10],adj[10][10];
    system("cls");
    gotoxy(50,2);
    printf("Inverse of a Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    fflush(stdin);
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        determinant();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    d=deter(arr,k);
    adjointlol(arr, adj,k);
    float inv[10][10]= {};
    inverselol(arr,k,adj,inv);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        submenu();
    }
}
void scalar_div()
{
    int n,i,j;
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Scalar Division of a Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    double div[n][n],target;
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n\n\tInput divider: ");
    scanf("%lf",&target);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            div[i][j]=arr[i][j]/target;
        }
    }
    printf("\n\n\t");
    printf("The Scalar Division of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%.2lf ",div[i][j]);
        }
        printf("\n\t\t\t\t       ");
    }
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tThe Scalar Division of matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            fprintf(fpr,"%.2f ",div[i][j]);
        }
        fprintf(fpr,"\n\t\t\t\    ");
    }
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        next();
    }
}
void trace()
{
    int n,i,j,target=0;
    FILE*fpr;
    fpr=fopen("history.txt","a");
    time_t rawtime;
    char buffer [255];
    time (&rawtime);
    sprintf(buffer,"%s",ctime(&rawtime) );
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Trace of a Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<n; i++)
    {
        target=target+arr[i][i];
    }
    printf("\n\n\tThe Trace of the given Matrix: %d",target);
    fprintf(fpr,"\n\t%s",buffer);
    fprintf(fpr,"\tThe Trace of the given matrix: ");
    fprintf(fpr,"%d",target);
    fclose(fpr);
    gotoxy(50,26);
    printf("press c for more calculations");
    while(getch()=='c')
    {
        next();
    }
}

/////////////////////////////////HISTORY
void history()
{
    system("cls");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("history.txt","r");
    fgets(ch,200,fpr);
    puts(ch);
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        puts(ch);
    }
    fclose(fpr);
    printf("\n\t\t\t\t\tEnter m for main menu option.");
    while(getch()=='m')
    {
        menu();
    }
}
//////////////////////////////definition
void matrixdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("matrix.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
}
void indentifydef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("identitymatrix.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void nulldef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("null.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void idempotentdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("idempotent.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void nilpotentdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("nilpotent.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void involutorydef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("involutory.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void transposedef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("transpose.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void scalardef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("scalar.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        defnext();
    }
    getch();
}
void submatrixdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("submatrix.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        definition();
    }
    getch();
}
void symmetricdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("symmetric.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        defnext();
    }
    getch();
}
void adjointdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("adjoint.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        defnext();
    }
    getch();
}
void inversedef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("inverse.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        defnext();
    }
    getch();
}
void skewsymmetricdef()
{
    system("cls");
    system("color 6");
    char ch[200];
    int o;
    FILE *fpr;
    fpr=fopen("skewsymmetric.txt","r");
    while(!feof(fpr))
    {
        fgets(ch,200,fpr);
        printf("%s",ch);
    }
    fclose(fpr);
    printf("\n\n\t\t\t\t\tpress d for more definition");
    while(getch()=='d')
    {
        defnext();
    }
    getch();
}

void definition()///////////////////definition menu
{
    system("cls");
    system("color 2");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DEFINITION of MATRIX \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Matrix");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Identity Matrix");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Null Matrix");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Idempotent Matrix");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.Nilpotent Matrix");
    gotoxy(31,19);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 6.Involutory Matrix");
    gotoxy(31,22);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 7.Transpose Matrix");
    gotoxy(31,25);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 8.Next");
    gotoxy(31,28);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 9.Back");
    FILE *fpr;
    switch(getch())
    {
    case '1':
        matrixdef();
        break;
    case '2':
        indentifydef();
        break;
    case '3':
        nulldef();
        break;
    case '4':
        idempotentdef();
        break;
    case '5':
        nilpotentdef();
        break;
    case '6':
        involutorydef();
        break;
    case '7':
        transposedef();
        break;
    case '8':
        defnext();
        break;
    case '9':
        menu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        definition();
        getch();
    }
}
void defnext()////////////////////////////definition sub menu
{
    system("cls");
    system("color 2");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DEFINITION of MATRIX \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Sub-Matrix");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Scaler Matrix");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Symmetric Matrix");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Adjoint of Matrix");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.Inverse Matrix");
    gotoxy(31,19);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 6.Skew-Symmetric Matrix");
    gotoxy(31,22);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 7.Back");
    gotoxy(31,25);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 8.Main menu");
    switch(getch())
    {
    case '1':
        submatrixdef();
        break;
    case '2':
        scalardef();
        break;
    case '3':
        symmetricdef();
        break;
    case '4':
        adjointdef();
        break;
    case '5':
        inversedef();
        break;
    case '6':
        skewsymmetricdef();
        break;
    case '7':
        definition();
        break;
    case '8':
        menu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        defnext();
        getch();
    }
}
void identification()
{
    system("cls");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 IDENTIFICATION of MATRIX \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Singular/Non-singular");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Symmetric");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Skew-symmetric");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Triangular");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.Identity");
    gotoxy(31,19);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 6.Idempotent");
    gotoxy(31,22);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 7.Involuntary");
    gotoxy(31,25);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 8.Scalar Matrix");
    gotoxy(31,28);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 9.Back");
    switch(getch())
    {
    case '1':
        singular();
        break;
    case '2':
        symmetric();
        break;
    case '3':
        skewsymmetric();
        break;
    case '4':
        triangular();
        break;
    case '5':
        identity();
        break;
    case '6':
        idempotent();
        break;
    case '7':
        involuntary();
        break;
    case '8':
        scalarmatrix();
        break;
    case '9':
        menu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        identification();
        getch();
    }
}
void singular()
{
    int k,d,i,j,arr[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Singular/Non-singular");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        singular();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    d=deter(arr,k);
    printf("\n\n\t");
    if(d==0)
    {
        printf("Checker: The given matrix is a Singular Matrix");
    }
    else
        printf("Checker: The given matrix is a Non-Singular Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void symmetric()
{
    int k,d=0,i,j,arr[10][10],temp[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Symmetric Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        symmetric();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n\n\t");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            temp[i][j]=arr[j][i];
        }
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(temp[i][j]!=arr[i][j])
            {
                d=1;
            }
        }
    }
    if(d==0)
    {
        printf("Checker: The given matrix is a Symmetric Matrix");
    }
    else
        printf("Checker: The given matrix is not a Symmetric Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void skewsymmetric()
{
    int k,d=0,i,j,arr[10][10],temp[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Skew-Symmetric Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        skewsymmetric();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    printf("\n\n\t");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            temp[i][j]=arr[j][i];
        }
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(temp[i][j]!=(-1)*arr[i][j])
            {
                d=1;
            }
        }
    }
    if(d==0)
    {
        printf("Checker: The given matrix is a Skew-Symmetric Matrix");
    }
    else
        printf("Checker: The given matrix is not a Skew-Symmetric Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void triangular()
{
    system("cls");
    gotoxy(31,1);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Upper Triangular");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Lower Triangular");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Back");
    switch(getch())
    {
    case '1':
        uppertriangular();
        break;
    case '2':
        lowertriangular();
        break;
    case '3':
        identification();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        triangular();
        getch();
    }
}
void lowertriangular()
{
    int k,i,j,d=0;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Lower Triangular Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    int arr[k][k];
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        main();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(j>i)
            {
                if(arr[i][j]==0)
                {
                    d=1;
                }
            }
        }
    }
    printf("\n\n\t");
    if(d==1)
    {
        printf("Checker: The given matrix is lower triangular");
    }
    else
        printf("Checker: The given matrix is not lower triangular");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void uppertriangular()
{
    int k,i,j,d=0;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Upper Triangular Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    int arr[k][k];
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        uppertriangular();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(i>j)
            {
                if(arr[i][j]==0)
                {
                    d=1;
                }
            }
        }
    }
    printf("\n\n\t");
    if(d==1)
    {
        printf("Checker: The given matrix is upper triangular");
    }
    else
        printf("Checker: The given matrix is not upper triangular");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}

void identity()
{
    int n,i,j,flag=0;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Identity Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<n; i++)
    {
        if(arr[i][i]==0 || arr[i][i]!=1)
        {
            flag=1;
            break;
        }
    }
    printf("\n\n\t");
    if(flag==0)
    {
        printf("Checker: The given matrix is a Identity Matrix");
    }
    else
        printf("Checker: The given matrix is not a Identity Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void idempotent()
{
    int k,d=0,f,i,j,arr[10][10],temp[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Idempotent Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        idempotent();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            temp[i][j]=0;
            for(f=0; f<k; f++)
            {
                temp[i][j]+=arr[i][f]*arr[f][j];
            }
        }
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            if(temp[i][j]!=arr[i][j])
            {
                d=1;
                break;
            }
        }
    }
    printf("\n\n\t");
    if(d==0)
    {
        printf("Checker: The given matrix is a Idempotent Matrix");
    }
    else
        printf("Checker: The given matrix is not a Idempotent Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void involuntary()
{
    int k,d=0,f,i,j,arr[10][10],temp[10][10];
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Involuntary Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&k);
    if(k>10)
    {
        system("cls");
        gotoxy(49,2);
        printf("!! TOO MUCH BIGGER !!");
        gotoxy(51,5);
        printf("Try a bit shorter");
        sleep(2);
        system("cls");
        involuntary();
        getch();
    }
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<k; i++)
    {
        for(j=0; j<k; j++)
        {
            temp[i][j]=0;
            for(f=0; f<k; f++)
            {
                temp[i][j]+=arr[i][f]*arr[f][j];
            }
        }
    }
    for(i=0; i<k; i++)
    {
        if(temp[i][i]==0 || temp[i][i]!=1)
        {
            d=1;
            break;
        }
    }
    printf("\n\n\t");
    if(d==0)
    {
        printf("Checker: The given matrix is a Involuntary Matrix");
    }
    else
        printf("Checker: The given matrix is not a Involuntary Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void scalarmatrix()
{
    int n,i,j,flag=0;
    system("cls");
    fflush(stdin);
    gotoxy(50,2);
    printf("Scalar Matrix");
    gotoxy(8,5);
    printf("Input the size of Matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\n\n\t");
    printf("Input the elements of Matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\t\t\t\t      ");
    }
    for(i=0; i<n; i++)
    {
        if(arr[i][i]==0 || arr[i][i]!=arr[0][0])
        {
            flag=1;
            break;
        }
    }
    printf("\n\n\t");
    if(flag==0)
    {
        printf("Checker: The given matrix is a Scalar Matrix");
    }
    else
        printf("Checker: The given matrix is not a Scalar Matrix");
    gotoxy(50,26);
    printf("Enter y for more identification.");
    while(getch()=='y')
    {
        identification();
    }
}
void exitlol()
{
    system("cls");
    sleep(3);
    system("color 2");
    int i,x,j;
    gotoxy(0,0);
    for(i=0; i<=119; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(0,1);
    printf("\xDB\xDB");
    for(j=0; j<=27; j++)
    {
        for(i=0; i<=115; i++)
        {
            printf(" ");
        }
        printf("\xDB\xDB\xDB\xDB");
    }
    gotoxy(0,29);
    for(i=0; i<=119; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(16,3);//e 1 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(16,4);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(16,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(16,6);//e 2 line 1
    for(i=0; i<=7; i++) //////////////////////E
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(22,7);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(22,8);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(16,9);//e 2 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(25,3);//e 3 line 1
    for(i=0; i<=7; i++) //////////////////////E
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(25,4);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(25,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(25,6);//e 4 line 1
    for(i=0; i<=5; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(25,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(25,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(25,9);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    ///////////////////////////N
    gotoxy(34,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(34,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(34,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(34,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(34,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(34,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(34,9);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(35,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(36,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(37,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(38,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(39,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(40,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(41,9);//e 5 line 1
    printf("\xDB\xDB");
    //////////////
    gotoxy(42,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(42,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(42,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(42,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(42,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(42,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(42,9);//e 5 line 1
    printf("\xDB\xDB");
    /////////////////////////////////////////T
    gotoxy(45,3);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(48,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(48,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(48,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(48,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(48,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(48,9);//e 5 line 1
    printf("\xDB\xDB");
    /////////////////////////////////I
    gotoxy(54,3);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(57,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(57,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(57,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(57,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(57,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(57,9);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(54,9);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    //////////////////////////////N
    gotoxy(63,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(63,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(63,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(63,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(63,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(63,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(63,9);//e 5 line 1
    printf("\xDB\xDB");

    gotoxy(64,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(65,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(66,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(67,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(68,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(69,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(70,9);//e 5 line 1
    printf("\xDB\xDB");
    //////////////
    gotoxy(71,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(71,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(71,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(71,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(71,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(71,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(71,9);//e 5 line 1
    printf("\xDB\xDB");
    /////////////////////////////////////
    gotoxy(75,3);//e 5 line 1
    for(i=0; i<=7; i++) //////////////////////E
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(75,4);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(75,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(75,6);//e 4 line 1
    for(i=0; i<=5; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(75,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(75,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(75,9);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    //////////////////////////////////L
    gotoxy(84,3);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(84,4);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(84,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(84,6);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(84,7);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(84,8);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(84,9);//e 5 line 1
    printf("\xDB\xDB");
    gotoxy(84,9);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    ////////////////////////S
    gotoxy(93,3);//e 6 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(93,4);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(93,5);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(93,6);//e 2 line 1
    for(i=0; i<=7; i++) //////////////////////s
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(99,7);//e 2 line 1
    printf("\xDB\xDB");
    gotoxy(99,8);//e 3 line 1
    printf("\xDB\xDB");
    gotoxy(93,9);//e 2 line 1
    for(i=0; i<=7; i++)
    {
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(30,13);
    //\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 TEAM MEMBERS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(40,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB AVISHEK DAS");
    gotoxy(40,18);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB TURJA DUTTA");
    gotoxy(40,20);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB MINHAJUL ISLAM RAHAT");
    gotoxy(40,22);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB MD. MOIN UDDIN SHAWON");
    gotoxy(22,26);
    char a[200]= {"\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 THANK YOU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3"};
    x=strlen(a);
    for(i=0; i<x; i++)
    {
        Sleep(20);
        printf("%c ",a[i]);
    }
    getch();
}
/////////////////////////////////WELCOME SCREEN
void welcomescreen()
{
    sleep(2);
    system("cls");
    int i,x,j;
    char n;
    char a[200]= {"WELCOME TO MATRIX BOT"};
    x=strlen(a);
    gotoxy(0,0);
    for(i=0; i<=59; i++)
    {
        Sleep(20);
        printf("\xB2 ");
    }
    gotoxy(1,1);
    for(i=0; i<60; i++)
    {
        Sleep(20);
        printf("\xB2 ");
    }
    gotoxy(1,28);
    for(i=0; i<=59; i++)
    {
        Sleep(20);
        printf("\xB2 ");
    }
    gotoxy(0,29);
    for(i=0; i<=59; i++)
    {
        Sleep(20);
        printf("\xB2 ");
    }
    gotoxy(33,13);
    printf("\xDB");
    gotoxy(35,13);
    for(i=0; i<x; i++)
    {
        Sleep(50);
        printf("%c ",a[i]);
    }
    gotoxy(77,13);
    printf("\xDB");
    gotoxy(40,23);
    printf("Press any key to continue ");
    switch(getch())
    {
    default:
        menu();
    }
    system("cls");
}
///////////////////////////////////gotoxyfunction
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
////////////////////////////////////menu function
void menu()
{
    system("cls");
    system("color 2");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MATRIX BOT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.DEFINITION");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.IDENTIFICATION");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.CALCULATION");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.HISTORY");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.EXIT");
    switch(getch())
    {
    case '1':
        definition();
        break;
    case '2':
        identification();
        break;
    case '3':
        submenu();
        break;
    case '4':
        history();
        break;
    case '5':
        exitlol();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        menu();
        getch();
    }
}
///////////////////////////////////////multiplication menu
void multiplication()
{
    system("cls");
    gotoxy(31,1);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Scalar Multiplication");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Matrix Multiplication");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Back");
    switch(getch())
    {
    case '1':
        scalar_mult();
        break;
    case '2':
        matrix_mult();
        break;
    case '3':
        submenu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        multiplication();
        getch();
    }
}
////////////////////////////////////////////////rowcolumn menu
void rowcol()
{
    system("cls");
    gotoxy(31,1);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Row Sum");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Column Sum");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Back");
    switch(getch())
    {
    case '1':
        rowsum();
        break;
    case '2':
        colsum();
        break;
    case '3':
        submenu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        rowcol();
        getch();
    }
}
////////////////////////////////////sub menu
void next()
{
    system("cls");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CALCULATION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Scalar Division of a Matrix");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Trace of a Matrix");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Transpose Matrix");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Back");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.Main Menu");
    switch(getch())
    {
    case '1':
        scalar_div();
        break;
    case '2':
        trace();
        break;
    case '3':
        transpose();
        break;
    case '4':
        submenu();
        break;
    case '5':
        menu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        next();
        getch();
    }
}
void submenu()/////////////////////calculation menu
{
    system("cls");
    gotoxy(30,1);
    printf("\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CALCULATION \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3");
    gotoxy(31,4);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 1.Addition of Matrix");
    gotoxy(31,7);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 2.Subtraction of Matrix");
    gotoxy(31,10);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 3.Multiplication of Matrix");
    gotoxy(31,13);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 4.Row/Column Sum of Matrix");
    gotoxy(31,16);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 5.Determinant of Matrix");
    gotoxy(31,19);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 6.Adjoint Matrix");
    gotoxy(31,22);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 7.Inverse Matrix");
    gotoxy(31,25);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 8.Next");
    gotoxy(31,28);
    printf("\xB3\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB 9.Back");
    switch(getch())
    {
    case '1':
        addition();
        break;
    case '2':
        subtraction();
        break;
    case '3':
        multiplication();
        break;
    case '4':
        rowcol();
        break;
    case '5':
        determinant();
        break;
    case '6':
        adjoint();
        break;
    case '7':
        inverse();
        break;
    case '8':
        next();
        break;
    case '9':
        menu();
        break;
    default:
        system("cls");
        gotoxy(49,2);
        printf("!!Invalid Enter!!");
        sleep(2);
        system("cls");
        submenu();
        getch();
    }
}
int main()
{
    system("color 2");
    FILE * fpr;
    fpr=fopen("history.txt","w");
    fprintf(fpr,"\n\t\t\t\t\t\tHISTORY");
    fclose(fpr);
    welcomescreen();
    getch();
}
