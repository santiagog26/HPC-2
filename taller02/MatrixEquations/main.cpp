/****************************
* Date: 22-08-2022
* Author: Santiago Gutiérrez Orjuela
* Topic: Matrix equations with Eigen
* course: performance metrics for HPC
*****************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

// Create dinamic matrix
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> dMatrixDD;

// Declaration of functions
void exerciseOne();
void exerciseTwo();
void exerciseThree();
void exerciseFour();
void exerciseFive();
void exerciseSix();
void exerciseSeven();
void exerciseEight();
void exerciseNine();
void exerciseTen();
void exerciseEleven();
void exerciseTwelve();
void exerciseThirteen();
void exerciseFourteen();
void exerciseFifteen();

int main()
{
    // Variables declaration
    bool closeWhile = false;
    char exitWhile;

    std::cout << "Welcome to the matrix equations!" << std::endl;

    do{
        // Variables declaration
        int exercise = 0;
        bool aux = true;

        // Input for the number of the exercise
        std::cout << "Please write the exercise you want to resolve: " << std::endl;
        std::cin >> exercise;

        switch (exercise) {
            case 1:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseOne();
                break;
            case 2:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseTwo();
                break;
            case 3:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseThree();
                break;
            case 4:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseFour();
                break;
            case 5:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseFive();
                break;
            case 6:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseSix();
                break;
            case 7:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseSeven();
                break;
            case 8:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseEight();
                break;
            case 9:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseNine();
                break;
            case 10:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseTen();
                break;
            case 11:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseEleven();
                break;
            case 12:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseTwelve();
                break;
            case 13:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseThirteen();
                break;
            case 14:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseFourteen();
                break;
            case 15:
                std::cout << "Exercise " << exercise << std::endl;
                exerciseFifteen();
                break;
            default:
                std::cout << "Try another number between 1 and 16!" << std::endl;
        }
        std::cout << "\nDo you want to exit the program? (Y/N)" << std::endl;
        std::cin >> exitWhile;

        if (exitWhile == 'Y' || exitWhile == 'y') closeWhile = true;

    }while (closeWhile == false);

    return 0;
}

void exerciseOne() {
    // Exercise
    std::cout << "\nX = 3A - 4B " << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, B, X;

    // Initial values for matrices
    A << 4, -2,
            1, -7;
    B << -1, 2,
            6, -5;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = 3*A - 4*B;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseTwo() {
    // Exercise
    std::cout << "\n2X + 4A = 3BA " << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, B, X;

    // Initial values for matrices
    A << 0, -1,
            2, 1;
    B << 1, 2,
            3, 4;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = (3*B*A - 4*A)/2;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseThree() {
    // Exercise
    std::cout << "\nAXB^T = C " << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, B, C, X;

    // Initial values for matrices
    A << -3, -2,
            3, 3;
    B << 5, 3,
            9, 4;
    C << 1, 1,
            0, 0;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << "\nC = \n" << C << std::endl;

    // Equation resolve
    X = A.inverse()*C*(B.transpose()).inverse();

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseFour() {
    // Exercise
    std::cout << "\nXA = B " << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, B, X;

    // Initial values for matrices
    A << 2, 1,
            -4, -3;
    B << 2, 2,
            6, 4;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = B * A.inverse();

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseFive() {
    // Exercise
    std::cout << "\nX = 2(AB + C)" << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d C, X;
    dMatrixDD A(2, 3), B(3, 2);

    // Initial values for matrices
    A << 3, 0, -1,
            0, 2, 1;
    B << 1, 2, 1,
            0, 0, 6;
    C << -2, 0,
            -2, -5;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << "\nC = \n" << C << std::endl;

    // Equation resolve
    X = 2*(A*B+C);

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseSix() {
    // Exercise
    std::cout << "\nX = A + 3B" << std::endl;

    // Declaration for matrices
    Eigen::Matrix3d A, B, X;

    // Initial values for matrices
    A << 1, 5, -1,
            -1, 2, 2,
            0, -3, 3;
    B << -1, -4, 3,
            1, -2, -2,
            -3, 3, -5;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = A + 3*B;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseSeven() {
    // Exercise
    std::cout << "\nXA = B" << std::endl;

    // Declaration for matrices
    Eigen::Matrix3d A, B, X;

    // Initial values for matrices
    A << 2, 7, 3,
            3, 9, 4,
            1, 5, 3;
    B << 1, 0, 2,
            0, 1, 0,
            0, 0, 1;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = B * A.inverse();

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseEight() {
    // Exercise
    std::cout << "\nAX = B" << std::endl;

    // Declaration for matrices
    Eigen::Matrix3d A, B, X;

    // Initial values for matrices
    A << 1, 1, 1,
            6, 5, 4,
            13, 10, 8;
    B << 0, 1, 2,
            1, 0, 2,
            1, 2, 0;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = A.inverse() * B;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseNine() {
    // Exercise
    std::cout << "\nX = A^TA - 2A" << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, X;

    // Initial values for matrices
    A << 3, -1,
            0, 2;

    std::cout << "\nA = \n" << A << std::endl;

    // Equation resolve
    X = A.transpose() * A - 2 * A;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseTen() {
    // Exercise
    std::cout << "\nX = A³" << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, X;

    // Initial values for matrices
    A << 4, 2,
            -1, 0;

    std::cout << "\nA = \n" << A << std::endl;

    // Equation resolve
    X = A*A*A;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseEleven() {
    // Exercise
    std::cout << "\nA^TXB = C" << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d A, B, C, X;

    // Initial values for matrices
    A << 2, 4,
            3, 2;
    B << 1, 0,
            2, 1;
    C << 7, 5,
            6, 1;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << "\nC = \n" << C << std::endl;

    // Equation resolve
    X = (A.transpose()).inverse()*C*B.inverse();

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseTwelve() {
    // Exercise
    std::cout << "\nX = AA^T - 2AB" << std::endl;

    // Declaration for matrices
    Eigen::Matrix2d X;
    dMatrixDD A(2, 3), B(3, 2);

    // Initial values for matrices
    A << 1, 0, -2,
            2, -1, 3;
    B << 2, -3,
            -2, 0,
            -1, -2;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = A*A.transpose() - 2*A*B;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseThirteen() {
    // Exercise
    std::cout << "\nX = ABC" << std::endl;

    // Declaration for matrices
    dMatrixDD A(1, 3), B(3, 2), C(2,1), X(1,1);

    // Initial values for matrices
    A << 4, 8, 12;
    B << 3, 2,
            0, 1,
            -1, 0;
    C << 3, -1;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << "\nC = \n" << C << std::endl;

    // Equation resolve
    X = A*B*C;

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseFourteen() {
    // Exercise
    std::cout << "\nXA = B" << std::endl;

    // Declaration for matrices
    Eigen::Matrix3d A, B, X;

    // Initial values for matrices
    A << 2, 5, 7,
            6, 3, 4,
            5, -2, -3;
    B << -1, 1, 0,
            0, 1, 1,
            1, 0, -1;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = B * A.inverse();

    std::cout << "\nX is equal to \n" << X << std::endl;
}

void exerciseFifteen() {
    // Exercise
    std::cout << "\nAX = B" << std::endl;

    // Declaration for matrices
    Eigen::Matrix4d A, B, X;

    // Initial values for matrices
    A << 1, 1, 1, 1,
            1, 1, -1, -1,
            1, -1, 1, -1,
            1, -1, -1, 1;
    B << 1, 1, 0, 0,
            1, 0, 1, 0,
            1, 0, 0, 1,
            1, 0, 1, 1;

    std::cout << "\nA = \n" << A << "\nB = \n" << B << std::endl;

    // Equation resolve
    X = A.transpose() * B;

    std::cout << "\nX is equal to \n" << X << std::endl;
}
