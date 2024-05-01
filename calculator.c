#include <stdio.h>
#include <math.h>
#include<windows.h>

void real_numbers();
void complex_numbers();
void matrices();
void series();

    void restart() {
        printf("\nPress any key to continue.\n");
        getch();
}

void add_real_numbers() {
    printf("Addition of Two Real Numbers: \n");

    double num1, num2, result;

    printf("Enter two real numbers:\n");
    printf("\nFirst number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("\nResult: %lf\n", result);

    restart();
}

void sub_real_numbers() {
    printf("Subtraction of Two Real Number: \n");

    double num1, num2, result;

    printf("Enter two real numbers:\n");
    printf("\nFirst number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("\nResult: %lf\n", result);
    restart();
}

void mul_real_numbers() {
    printf("Multiplication of Two Real Number: \n");

    double num1, num2, result;

    printf("Enter two real numbers:\n");
    printf("\nFirst number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf("\nResult: %lf\n", result);

    restart();
}

void div_real_numbers() {

    printf("Division of Two Real Number: \n");


    double num1, num2, result;

    printf("Enter two real numbers:\n");
    printf("\nFirst number(Dividend): ");
    scanf("%lf", &num1);
    printf("Second number(Divisor): ");
    scanf("%lf", &num2);

    if(num2 == 0) {
        printf("\nResult: Cannot divide by zero.\n");
    } else {
        result = num1 / num2;
        printf("\nResult: %lf\n", result);
        }

    restart();
}

void real_roots() {
    printf("Solution of a Quadratic Equation with Real Numbers: \n");

    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficient values of the quadratic equation(ax^2 + bx + c = 0):\n\n");
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("\nThis mode only works for real number roots.\n");
    } else {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoots: %lf, %lf\n", root1, root2);
    }

    restart();
}
void add_complex_numbers() {

    int real1, imag1, real2, imag2, result_real, result_imag;

    printf("Enter first complex number (a + bi):\n\n");
    printf("Real part, a: ");
    scanf("%d", &real1);
    printf("Imaginary part, b: ");
    scanf("%d", &imag1);
    printf("\nEnter second complex number (c + di):\n\n");
    printf("Real part, c: ");
    scanf("%d", &real2);
    printf("Imaginary part, d: ");
    scanf("%d", &imag2);
    system("cls");

    printf("Addition of Two Complex Number: \n");

    if(imag1 >= 0) {
        printf("\nFirst Number: %d + i%d", real1, imag1);
    } else {
        printf("\nFirst Number: %d - i%d", real1, -1 * imag1);
    }

    if(imag2 >= 0) {
        printf("\nSecond Number: %d + i%d", real2, imag2);
    } else {
        printf("\nSecond Number: %d - i%d", real2, -1 * imag2);
    }

    result_real = real1 + real2;
    result_imag = imag1 + imag2;

    if(result_imag >= 0) {
        printf("\n\nResult: %d + i%d\n", result_real, result_imag);
    } else {
        printf("\n\nResult: %d - i%d\n", result_real, -1 * result_imag);
    }

    restart();
}

void sub_complex_numbers() {

    int real1, imag1, real2, imag2, result_real, result_imag;

    printf("Enter first complex number (a + bi):\n\n");
    printf("Real part, a: ");
    scanf("%d", &real1);
    printf("Imaginary part, b: ");
    scanf("%d", &imag1);
    printf("\nEnter second complex number (c + di):\n\n");
    printf("Real part, c: ");
    scanf("%d", &real2);
    printf("Imaginary part, d: ");
    scanf("%d", &imag2);
    system("cls");

    printf("Subtraction of Two Real Number: \n");

    if(imag1 >= 0) {
        printf("\nFirst Number: %d + i%d", real1, imag1);
    } else {
        printf("\nFirst Number: %d - i%d", real1, -1 * imag1);
    }

    if(imag2 >= 0) {
        printf("\nSecond Number: %d + i%d", real2, imag2);
    } else {
        printf("\nSecond Number: %d - i%d", real2, -1 * imag2);
    }

    result_real = real1 - real2;
    result_imag = imag1 - imag2;

    if(result_imag >= 0) {
        printf("\n\nResult: %d + i%d\n", result_real, result_imag);
    } else {
        printf("\n\nResult: %d - i%d\n", result_real, -1 * result_imag);
    }

    restart();
}

void mul_complex_numbers() {

    int real1, imag1, real2, imag2, result_real, result_imag;

    printf("Enter first complex number (a + bi):\n\n");
    printf("Real part, a: ");
    scanf("%d", &real1);
    printf("Imaginary part, b: ");
    scanf("%d", &imag1);
    printf("\nEnter second complex number (c + di):\n\n");
    printf("Real part, c: ");
    scanf("%d", &real2);
    printf("Imaginary part, d: ");
    scanf("%d", &imag2);
    system("cls");

    printf("Multiplication of Two Complex Number: \n");

    if(imag1 >= 0) {
        printf("\nFirst Number: %d + i%d", real1, imag1);
    } else {
        printf("\nFirst Number: %d - i%d", real1, -1 * imag1);
    }
    if(imag2 >= 0) {
        printf("\nSecond Number: %d + i%d", real2, imag2);
    } else {
        printf("\nSecond Number: %d - i%d", real2, -1 * imag2);
    }

    result_real = real1 * real2 - imag1 * imag2;
    result_imag = real1 * imag2 + imag1 * real2;

    if(result_imag >= 0) {
        printf("\n\nResult: %d + i%d\n", result_real, result_imag);
    } else {
        printf("\n\nResult: %d - i%d\n", result_real, -1 * result_imag);
    }

    restart();

}

void div_complex_numbers() {

    double real1, imag1, real2, imag2, result_real, result_imag;

    printf("Enter first complex number (a + bi):\n\n");
    printf("Real part, a: ");
    scanf("%lf", &real1);
    printf("Imaginary part, b: ");
    scanf("%lf", &imag1);
    printf("\nEnter second complex number (c + di):\n\n");
    printf("Real part, c: ");
    scanf("%lf", &real2);
    printf("Imaginary part, d: ");
    scanf("%lf", &imag2);
    system("cls");

    printf("Division of Two Real numbers: \n");

    if(imag1 >= 0) {
        printf("\nFirst Number: %0.0lf + i%0.0lf", real1, imag1);
    } else {
        printf("\nFirst Number: %0.0lf - i%0.0lf", real1, -1 * imag1);
    }

    if(imag2 >= 0) {
        printf("\nSecond Number: %0.0lf + i%0.0lf", real2, imag2);
    } else {
        printf("\nSecond Number: %0.0lf - i%0.0lf", real2, -1 * imag2);
    }

    if(real2 == 0 && imag2 == 0) {
        printf("\n\nResult: MATH ERROR!!\n");
    } else {

        result_real = (real1 * real2 + imag1 * imag2) / (pow(real2, 2) + pow(imag2, 2));
        result_imag = (imag1 * real2 - real1 * imag2) / (pow(real2, 2) + pow(imag2, 2));

        if(result_imag >= 0) {
        printf("\n\nResult: %lf + i%lf\n", result_real, result_imag);
        } else {
        printf("\n\nResult: %lf - i%lf\n", result_real, -1 * result_imag);
        }
    }

    restart();
}

void complex_conjugate() {

    int real1, imag1;

    printf("Enter a complex number (a + bi):\n\n");
    printf("Real part, a: ");
    scanf("%d", &real1);
    printf("Imaginary part, b: ");
    scanf("%d", &imag1);
    system("cls");

    printf("Complex Conjugate of a Complex Number: \n");

    if(imag1 >= 0) {
        printf("\nComplex number: %d + i%d\n", real1, imag1);
    } else {
        printf("\nComplex number: %d - i%d\n", real1, -1 * imag1);
    }

    if(imag1 >= 0) {
        printf("Complex conjugate: %d - i%d\n", real1, imag1);
    } else {
        printf("Complex conjugate: %d + i%d\n", real1, -1 * imag1);
    }

    restart();
}

void img_roots() {

    printf("Solution of a Quadratic Equation with Complex numbers:\n");

    double a, b, c, discriminant, real_part, imaginary_part;

    printf("Enter coefficients of the quadratic equation(ax^2 + bx + c = 0):\n\n");
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        printf("\nThis mode only works for complex number roots.\n");
    } else {

        discriminant *= -1;
        real_part = -b / 2 * a;
        imaginary_part = sqrt(discriminant) / 2 * a;

        if(imaginary_part > 0) {
        printf("\nRoots: %lf + i%lf, %lf - i%lf\n", real_part, imaginary_part, real_part, imaginary_part);
        } else {
        printf("\nRoots: %lf + i%lf, %lf - i%lf\n", real_part, -1 * imaginary_part, real_part, -1 * imaginary_part);
        }
    }

    restart();
}
void add_matrices() {

    int row1, col1, row2, col2;

    printf("Enter the dimension of first matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row1);
    printf("Number of columns: ");
    scanf("%d", &col1);
    printf("\nEnter the dimension of second matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row2);
    printf("Number of columns: ");
    scanf("%d", &col2);

    int mat1[row1][col1];
    int mat2[row2][col2];

    system("cls");

    printf("Addition of Two Matrices: \n");


    printf("Enter the elements of first matrix(%d * %d):\n\n", row1, col1);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat1[i][j]);
        }
    }

    system("cls");

    printf("Enter the elements of second matrix(%d * %d):\n\n", row2, col2);

    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("cls");

    printf("Addition of Two Matrices:\n");

    printf("First matrix:\n");

    for(int i = 0; i < row1; i++) {
        printf("\n");
        for(int j = 0; j < col1; j++) {
            printf("%d\t", mat1[i][j]);
        }
    }

    printf("\n\nSecond matrix:\n\n");

    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    if(row1 == row2 && col1 == col2) {
        printf("\nResult:\n\n");

        for(int i = 0; i < row2; i++) {
            for(int j = 0; j < col2; j++) {
                printf("%d\t", mat1[i][j] + mat2[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nThe addition is not possible, dimensions of X and Y are not matched.\n");
    }

    restart();
}

void sub_matrices() {

    int row1, col1, row2, col2;

    printf("Enter the dimension of first matrix(Subtrahend): \n\n");
    printf("Number of rows: ");
    scanf("%d", &row1);
    printf("Number of columns: ");
    scanf("%d", &col1);
    printf("\nEnter the dimension of second matrix(Minuend): \n\n");
    printf("Number of rows: ");
    scanf("%d", &row2);
    printf("Number of columns: ");
    scanf("%d", &col2);

    int mat1[row1][col1];
    int mat2[row2][col2];

    system("cls");

    printf("Subtraction of Two Matrices:\n");

    printf("Enter the elements of first matrix(%d * %d):\n\n", row1, col1);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat1[i][j]);
        }
    }

    system("cls");

    printf("Enter the elements of second matrix(%d * %d):\n\n", row2, col2);

    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("cls");

    printf("Subtraction of Two Matrices:\n");

    printf("First matrix:\n");

     for(int i = 0; i < row1; i++) {
        printf("\n");
        for(int j = 0; j < col1; j++) {
            printf("%d\t", mat1[i][j]);
        }
    }

    printf("\n\nSecond matrix:\n\n");

     for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    if(row1 == row2 && col1 == col2) {

        printf("\nResult:\n\n");

        for(int i = 0; i < row2; i++) {
            for(int j = 0; j < col2; j++) {
                printf("%d\t", mat1[i][j] - mat2[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nThe subtraction is not possible, dimensions of X and Y are not matched.\n");
    }

    restart();
}

void mul_matrices() {

    int row1, col1, row2, col2;

    printf("Enter the dimension of first matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row1);
    printf("Number of columns: ");
    scanf("%d", &col1);
    printf("\nEnter the dimension of second matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row2);
    printf("Number of columns: ");
    scanf("%d", &col2);

    int mat1[row1][col1];
    int mat2[row2][col2];

    system("cls");

    printf("Multiplication of Two Matrices:\n");


    printf("Enter the elements of first matrix(%d * %d):\n\n", row1, col1);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat1[i][j]);
        }
    }

    system("cls");

    printf("Multiplication of Two Matrices:\n");

    printf("Enter the elements of second matrix(%d * %d):\n\n", row2, col2);

    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("cls");

    printf("Multiplication of Two Matrices:\n");

    printf("First matrix:\n");

     for(int i = 0; i < row1; i++) {
        printf("\n");
        for(int j = 0; j < col1; j++) {
            printf("%d\t", mat1[i][j]);
        }
    }

    printf("\n\nSecond matrix:\n\n");

     for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    if(col1 == row2) {

        printf("\nResult:\n\n");

        for(int u = 0; u < row1; u++) {
            for(int i = 0; i < col2; i++) {
                int product = 0;
                for(int j = 0; j < col1; j++) {
                    int counter = 0;
                    counter = mat1[u][j] * mat2[j][i];
                    product += counter;
                }
                printf("%d\t", product);
            }
            printf("\n");
        }

    } else {
        printf("\nThe multiplication is not possible, dimensions of X and Y are not matched.\n");
    }

    restart();
}

void mul_by_elements_matrices() {

    int row1, col1, row2, col2;

    printf("Enter the dimension of first matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row1);
    printf("Number of columns: ");
    scanf("%d", &col1);
    printf("\nEnter the dimension of second matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row2);
    printf("Number of columns: ");
    scanf("%d", &col2);

    int mat1[row1][col1];
    int mat2[row2][col2];

    system("cls");

    printf("Multiplication of Two Matrices by CORRESPONDING Elements:\n");

    printf("Enter the elements of first matrix(%d * %d):\n\n", row1, col1);

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat1[i][j]);
        }
    }

    system("cls");

     printf("Multiplication of Two Matrices by CORRESPONDING Elements:\n");

    printf("Enter the elements of second matrix(%d * %d):\n\n", row2, col2);

    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("cls");

     printf("Multiplication of Two Matrices by CORRESPONDING Elements:\n");

    printf("First matrix:\n");

     for(int i = 0; i < row1; i++) {
        printf("\n");
        for(int j = 0; j < col1; j++) {
            printf("%d\t", mat1[i][j]);
        }
    }

    printf("\n\nSecond matrix:\n\n");

     for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    if(row1 == row2 && col1 == col2) {

        printf("\nResult:\n\n");

        for(int i = 0; i < row2; i++) {
            for(int j = 0; j < col2; j++) {
                printf("%d\t", mat1[i][j] * mat2[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nThe multiplication by elements is not possible, dimensions of X and Y are not matched.\n");
    }

    restart();
}

void transpose_matrix() {

    int row, col;

    printf("Enter the dimension of the matrix: \n\n");
    printf("Number of rows: ");
    scanf("%d", &row);
    printf("Number of columns: ");
    scanf("%d", &col);

    int mat[row][col];

    system("cls");

    printf("Transpose of a Matrix:\n");

    printf("Enter the elements of the matrix(%d * %d):\n\n", row, col);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Element of row %d column %d [%d, %d]: ", i + 1, j + 1, i + 1, j +1);
            scanf("%d", &mat[i][j]);
        }
    }

    system("cls");

    printf("Transpose of a Matrix:\n");

    printf("Original matrix:\n");

     for(int i = 0; i < row; i++) {
        printf("\n");
        for(int j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
    }

    printf("\n\nTranspose matrix:\n\n");

     for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }

    restart();
}
void sin_series() {
    double x, result = 0;
    int N, sign = 1, fact = 1;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    x=x*3.14159/180;

    for (int i = 1; i <= N; i += 2) {
        result += sign * pow(x, i) / fact;
        sign *= -1;
        fact *= (i + 1) * (i + 2);
    }

    printf("sin(%lf) = %lf\n", x, result);
}

void cos_series() {
    double x, result = 1;
    int N, sign = -1, fact = 2;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    x=x*3.14159/180;

    for (int i = 2; i <= N; i += 2) {
        result += sign * pow(x, i) / fact;
        sign *= -1;
        fact *= (i + 1) * (i + 2);
    }

    printf("cos(%lf) = %lf\n", x, result);
}

void exponential_Series() {
    double x, sum = 0;
    int n, i;

    printf("Enter the value of x (0 < x < 1): ");
    scanf("%lf", &x);

    printf("Enter the number of terms N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum += pow(x, i) / factorial(i);
    }

    printf("Sum of the exponential series: %lf\n", sum);

}

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}


int main() {
    int choice;

    do {
        system("cls");
        go:
        printf("\t      Calculator\n\n");


        printf("MAIN MENU\n");

        printf("Select a mode:\n\n");

        printf("1. Operations on real numbers\n");
        printf("2. Operations on complex numbers\n");
        printf("3. Operations on matrices\n");
        printf("4. Operations on series\n");
        printf("5. Quit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

                system("cls");

        switch (choice) {
            case 1:
                real_numbers();
                break;
            case 2:
                complex_numbers();
                break;
            case 3:
                matrices();
                break;
            case 4:
                series();
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                goto go;
        }

    } while (choice != 5);

    return 0;
}
void real_numbers() {
    int real_choice;

    do {
        system("cls");
        jump_real:

        printf("OPERATIONS ON REAL NUMBERS\n");

        printf("Select a mode:\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Solution of a Quadratic Equation\n");
        printf("6. Back to main menu\n\n");
        printf("Enter your choice: ");
        scanf("%d", &real_choice);

        system("cls");

        switch (real_choice) {
            case 1:
                add_real_numbers();
                break;
            case 2:
                sub_real_numbers();
                break;
            case 3:
                mul_real_numbers();
                break;
            case 4:
                div_real_numbers();
                break;
            case 5:
                real_roots();
                break;
            case 6:
                printf("Returning to main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
                goto jump_real;
        }

    } while (real_choice != 6);
}
void complex_numbers() {
    int complex_choice;

    do {
        system("cls");
        jump_complex:

        printf("OPERATIONS ON COMPLEX NUMBERS\n");

        printf("Select a mode:\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Complex Conjugate\n");
        printf("6. Solution of a Quadratic Equation\n");
        printf("7. Back to main menu\n\n");
        printf("Enter your choice: ");
        scanf("%d", &complex_choice);

        system("cls");

        switch (complex_choice) {
            case 1:
                add_complex_numbers();
                break;
            case 2:
                sub_complex_numbers();
                break;
            case 3:
                mul_complex_numbers();
                break;
            case 4:
                div_complex_numbers();
                break;
            case 5:
                complex_conjugate();
                break;
            case 6:
                img_roots();
                break;
            case 7:
                printf("Returning to main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 7.\n");
                goto jump_complex;
        }

    } while (complex_choice != 7);
}
void matrices() {
    int matrix_choice;

    do {
        system("cls");
        jump_matrices:

        printf("OPERATIONS ON MATRICES\n");

        printf("Select a mode:\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Multiplication by corresponding elements\n");
        printf("5. Transpose Matrix\n");
        printf("6. Back to main menu\n\n");
        printf("Enter your choice: ");
        scanf("%d", &matrix_choice);

        system("cls");

        switch (matrix_choice) {
            case 1:
                add_matrices();
                break;
            case 2:
                sub_matrices();
                break;
            case 3:
                mul_matrices();
                break;
            case 4:
                mul_by_elements_matrices();
                break;
            case 5:
                transpose_matrix();
                break;
            case 6:
                printf("Returning to main menu.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
                goto jump_matrices;
        }

    } while (matrix_choice != 6);
}

void series() {
    int choice;

    do {
        printf("\n1. SinX Series\n");
        printf("2. CosX Series\n");
        printf("3. Exponential Series\n");
        printf("4. Return to Front Page\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sin_series();
                break;
            case 2:
                cos_series();
                break;
            case 3:
                exponential_Series();
                break;
            case 4:
                printf("Returning to front page...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
