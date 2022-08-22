/*Fecha: 21 de agosto 2022
 *Autor: Juan Carlos Castro
 *Tema: Taller 1: Math Exercises & Math Problems: Matrix Equations
 *Materia: Métricas de Rendimiento para HPC*/

#include <iostream>
#include <eigen3/Eigen/Dense>
#include <vector>

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = 3A - 4B
// A=[4,-2;1,7]
// B=[-1,2;6,-5]

void PuntoA(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(2,2);
    B.resize(2,2);
    X.resize(2,2);
    A << 4,-2,1,7;
    B << -1,2,6,-5;
    X = 3*A - 4*B;
    std::cout << "\nX = 3A - 4B\n" << std::endl;
    std::cout << X << std::endl;

}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// 2X + 4A = 3BA
//despejamos la ecuacion '2X + 4A = 3BA'
// X = (3BA - 4A) / 2 
// A=[0,-1;2,1]
// B=[1,2;3,4]

void PuntoB(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(2,2);
    B.resize(2,2);
    X.resize(2,2);
    A << 0,-1,2,1;
    B << 1,2,3,4;
    X = (3*B*A - 4*A) / 2;
    std::cout << "\n2X + 4A = 3BA\n" << std::endl;
    std::cout << "X = (3BA - 4A) / 2\n" << std::endl;
    std::cout << X << std::endl;
}


//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// x = B * A^(-1)
// A=[2,1;-4,-3]
// B=[2,2;6,4]

void PuntoD(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(2,2);
    B.resize(2,2);
    X.resize(2,2);
    A << 2,1,-4,-3;
    B << 2,2,6,4;
    X = B*A.inverse();
    std::cout << "\nXA = B\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = 2(AB+C)
// A=[3,0,-1;0,2,1]
// B=[1,2;1,0;0,6]
// C=[-2,0;-2,-5]

void PuntoE(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd X){
    A.resize(2,3);
    B.resize(3,2);
    C.resize(2,2);
    X.resize(2,2);
    A << 3,0,-1,0,2,1;
    B << 1,2,1,0,0,6;
    C << -2,0,-2,-5;
    X = 2*(A*B + C);
    std::cout << "\nX = 2(BC+C)\n" << std::endl;
    std::cout << X << std::endl;
}



//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = A + 3B
// A=[2, 5, -1; -1, 2, 2; 0, -3, 3]
// B=[-1, -4, 3; 1, -2, -2; -3, 3, -5]

void PuntoF(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(3,3);
    B.resize(3,3);
    X.resize(3,3);
    A << 1,5,-1,-1,2,2,0,-3,3;
    B << -1,-4,3,1,-2,-2,-3,3,-5;
    X = A + 3*B;
    std::cout << "\nX = A + 3B\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// x = B * A^(-1)
// A=[2,7,3;3,9,4;1,5,3]
// B=[1,0,2;0,1,0;0,0,1]

void PuntoG(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(3,3);
    B.resize(3,3);
    X.resize(3,3);
    A << 2,7,3,3,9,4,1,5,3;
    B << 1,0,2,0,1,0,0,0,1;
    X = B*A.inverse();
    std::cout << "\nXA = B\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// x = B * A^(-1)
// A=[1,1,1;6,5,4;13,10,8]
// B=[0,1,2;1,0,2;1,2,0]

void PuntoH(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(3,3);
    B.resize(3,3);
    X.resize(3,3);
    A << 1,1,1,6,5,4,13,10,8;
    B << 0,1,2,1,0,2,1,2,0;
    X = A.inverse() * B;
    std::cout << "\nXA = B\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = A^(T)A - 2A
// A=[3,-1;0,2]

void PuntoI(Eigen::MatrixXd A, Eigen::MatrixXd X){
    A.resize(2,2);
    X.resize(2,2);
    A << 3,-1,0,2;
    X = A.transpose()*A - 2*A;
    std::cout << "\nX = A^(T)A - 2A\n" << std::endl;
    std::cout << X << std::endl;
} 

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = A^(3)
// A=[4,2;-1,0]

void PuntoJ(Eigen::MatrixXd A, Eigen::MatrixXd X){
    A.resize(2,2);
    X.resize(2,2);
    A << 4,2,-1,0;
    X = A*A*A;
    std::cout << "\nX = A^(3)\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// A^T X B = C; Despejamos X:  X = ((tran(A))^-1)*(C*(B)^-1)
// A = [2,4;3,2]
// B = [1,0;2,1]
// C = [7,5;6,1]

void PuntoK(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd X){
    A.resize(2,2);
    B.resize(2,2);
    C.resize(2,2);
    X.resize(2,2);
    A << 2,4,3,2;
    B << 1,0,2,1;
    C << 7,5,6,1;
    X = ((A.transpose()).inverse())*(C*(B.inverse()));
    std::cout << "\nA^T XB = C\n" << std::endl;
    std::cout << "A = [2,4;3,2]\n" << std::endl;
    std::cout << "B = [1,0;2,1]\n" << std::endl;
    std::cout << "C = [7,5;6,1]\n" << std::endl;
    std::cout << "X = A^T B\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = AA^T -2AB
// A = [1,0,-2;2,-1,3]
// B = [2,-3;2-2,0;-1,-2]
void PuntoL(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(2,3);
    B.resize(3,2);
    X.resize(2,2);
    A << 1,0,-2,2,-1,3;
    B << 2,-3,-2,0,-1,-2;
    X = A*A.transpose() - 2*A*B;
    std::cout << "\nX = AA^T -2AB\n" << std::endl;
    std::cout << "A = [1,0,-2;2,-1,3]\n" << std::endl;
    std::cout << "B = [2,-3;2-2,0;-1,-2]\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// X = ABC
// A = [4,8,12]
// B = [3,2;0,1;-1,0]
// C = [3;-1]
//ERROR

void PuntoM(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd X){
    A.resize(1,3);
    B.resize(3,2);
    C.resize(2,1);
    X.resize(1,1);
    A << 4,8,12;
    B << 3,2,0,1,-1,0;
    C << 3,-1;
    X = A*B*C;
    std::cout << "\nX = ABC\n" << std::endl;
    std::cout << "A = [4,8,12]\n" << std::endl;
    std::cout << "B = [3,2;0,1;-1,0]\n" << std::endl;
    std::cout << "C = [3;-1]\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// A^T X = B; Despejamos X:  X = ((tran(A))^-1)*(B)
// A = [2,5,7;6,3,4;5,-2,-3]
// B = [-1,1,0;0,1,1;1,0,-1]

void PuntoN(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(3,3);
    B.resize(3,3);
    X.resize(3,3);
    A << 2,5,7,6,3,4,5,-2,-3;
    B << -1,1,0,0,1,1,1,0,1;
    X = (A.transpose()).inverse()*B;
    std::cout << "\nA^T X = B\n" << std::endl;
    std::cout << "A = [2,5,7;6,3,4;5,-2,-3]\n" << std::endl;
    std::cout << "B = [-1,1,0;0,1,1;1,0,-1]\n" << std::endl;
    std::cout << "X = A^T\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// XA = B ; Despejamos X:  X = B*A^-1
// A = [2,5,7;6,3,4;5,-2,-3]
// B = [-1,1,0;0,1,1;1,0,-1]

void PuntoO(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd X){
    A.resize(3,3);
    B.resize(3,3);
    X.resize(3,3);
    A << 2,5,7,6,3,4,5,-2,-3;
    B << -1,1,0,0,1,1,1,0,1;
    X = B*A.inverse();
    std::cout << "\nXA = B\n" << std::endl;
    std::cout << "A = [2,5,7;6,3,4;5,-2,-3]\n" << std::endl;
    std::cout << "B = [-1,1,0;0,1,1;1,0,-1]\n" << std::endl;
    std::cout << "X = A^-1\n" << std::endl;
    std::cout << X << std::endl;
}

//Funcion que cree las matrices y muestre el resultado para la siguiente operacion de matrices:
// AX = B ; Despejamos X:  X = A^-1*B
// A = [1,1,1,1;1,1,-1,-1;1,-1,1,-1;1,-1,-1,1]
// B = [1,1,0,0; 1,0,1,0; 1,0,0,1; 1,0,1,1]


void PuntoP(Eigen::MatrixXd A, Eigen::MatrixXd B, Eigen::MatrixXd C, Eigen::MatrixXd X){
    A.resize(4,4);
    B.resize(4,4);
    C.resize(2,2);
    X.resize(4,4);
    A << 1,1,1,1, 1,1,-1,-1, 1,-1,1,-1, 1,-1,-1,1;
    B << 1,1,0,0, 1,0,1,0, 1,0,0,1, 1,1,0,1;
    X = A.inverse()*B;
    std::cout << "\nAX = B\n" << std::endl;
    std::cout << "A = [1,1,1,1;1,1,-1,-1;1,-1,1,-1;1,-1,-1,1]\n" << std::endl;
    std::cout << "B = [1,1,0,0; 1,0,1,0; 1,0,0,1; 1,0,1,1]\n" << std::endl;
    std::cout << "X = A^-1*B\n" << std::endl;
    std::cout << X << std::endl;
}


int main()
{
//creamos las matrices 
    Eigen::MatrixXd A,B,C,X;
//Creamos un menu para las funciones 

    int opcion;
    do{
        std::cout << "Menu de opciones" << std::endl;
        std::cout << "1. Punto A" << std::endl;
        std::cout << "2. Punto B" << std::endl; 
        std::cout << "4. Punto D" << std::endl;
        std::cout << "5. Punto E" << std::endl;
        std::cout << "6. Punto F" << std::endl;
        std::cout << "7. Punto G" << std::endl;
        std::cout << "8. Punto H" << std::endl;
        std::cout << "9. Punto I" << std::endl;
        std::cout << "10. Punto J" << std::endl;
        std::cout << "11. Punto K" << std::endl;
        std::cout << "12. Punto L" << std::endl;
        std::cout << "13. Punto M" << std::endl;
        std::cout << "14. Punto N" << std::endl;
        std::cout << "15. Punto O" << std::endl;
        std::cout << "16. Punto P" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cin >> opcion;
        switch(opcion){
            case 1:
                PuntoA(A,B,C);
                break;
            case 2:
                PuntoB(A,B,C);
                break;
            case 4:
                PuntoD(A,B,C);
                break;
            case 5:
                PuntoE(A,B,C,X);
                break;
            case 6:
                PuntoF(A,B,C);
                break;
            case 7:
                PuntoG(A,B,C);
                break;
            case 8:
                PuntoH(A,B,C);
                break;
            case 9:
                PuntoI(A,B);
                break;
            case 10:
                PuntoJ(A,B);
                break;
            case 11:
                PuntoK(A,B,C,X);
                break;
            case 12:
                PuntoL(A,B,C);
                break;
            case 13:
                PuntoM(A,B,C,X);
                break;
            case 14:
                PuntoN(A,B,C);
                break;
            case 15:
                PuntoO(A,B,C);
                break;
            case 16:
                PuntoP(A,B,C,X);
                break;
            case 0:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida" << std::endl;
                break;

            
}
    }while(opcion != 0);
    return 0;
}

