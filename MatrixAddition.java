import java.util.*;
public class MatrixAddition
{
public static void main(String[] args)
{
int n, m;
Scanner sc = new Scanner(System.in);
System.out.println("Enter the order of the matrix : ");
m = sc.nextInt();
n = sc.nextInt();
int[][] mat1 = new int[m][n];
int[][] mat2 = new int[m][n];
int[][] mat3 = new int[m][n];
System.out.println("Input the matrix 1 elements : ");
int i, j;
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
mat1[i][j] = sc.nextInt();
}

System.out.println("Input the matrix 2 elements : ");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
mat2[i][j] = sc.nextInt();
}

for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
}

System.out.println("Addition of the two matrices :");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
System.out.print(mat3[i][j] + " ");
System.out.println();
}

}
}