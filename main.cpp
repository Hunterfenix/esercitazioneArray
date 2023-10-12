#include<iostream>
#include<algorithm>

void fillArray(int* array, int dim) {
    for (int i = 0; i < dim; i++) {
        std::cout << "Inserisci l'elemento n." << i << ": ";
        std::cin >> array[i];
    }
}

void sortDecr(int* array, int dim) {
  std::sort(array, array + dim, std::greater<int>());
}

void sortIncr(int* array, int dim) {
    std::sort(array, array + dim);
}

int verifyNumber(int* array, int dim, int searchCrit) {
    int timeFinded = 0;
    for (int i = 0; i < dim; i++) {
        if (searchCrit == array[i])
        timeFinded++;
    }
    return timeFinded;
}

void printArray(int* array, int dim) {
    for (int i = 0; i < dim; i++) {
        std::cout << array[i] << ",";
    }
    std::cout << std::endl;
}

int main() {

    int searchCrit;
    int timeFinded;
    int dim;
    std::cout << "dammi la dimensione degli array: ";
    std::cin >> dim;
    

    int array1[dim];
    int array2[dim];
    std::cout << "Inserisci gli elementi nel primo array." << std::endl;
    fillArray(array1,dim);

    std::cout << "Ecco i valori del primo array: ";
    printArray(array1, dim);

    std::cout << "Inserisci gli elementi nel secondo array." << std::endl;
    fillArray(array2,dim);

    std::cout << "Ecco i valori del secondo array: ";
    printArray(array2, dim);

    sortIncr(array1,dim);
    sortDecr(array2,dim);

    std::cout << "Ecco il primo array in oridne crescnete: ";
    printArray(array1,dim);

    std::cout << "Ecco il secondo array in oridne decrescnete: ";
    printArray(array2,dim);

    std::cout << "Dammi un numero da verificare se è presente ed in che quantita' nel secondo array: ";
    std::cin >> searchCrit;

    timeFinded = verifyNumber(array2,dim,searchCrit);

    std::cout << "Il nuemro è presente " << timeFinded << " volte." << std::endl;

    return 0;
}

