#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um array com números aleatórios
void generateRandomArray(int *arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }
}

// Função para copiar um array
void copyArray(int *source, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = source[i];
    }
}

// Implementação do Bubble Sort
void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Implementação do Selection Sort
void selectionSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            // Troca os elementos se estiverem fora de ordem
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

// Implementação do Insertion Sort
void insertionSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Implementação do Merge Sort
void merge(int *arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int left_arr[n1];
    int right_arr[n2];

    for (int i = 0; i < n1; i++) {
        left_arr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        right_arr[i] = arr[middle + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        } else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void mergeSortHelper(int *arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        mergeSortHelper(arr, left, middle);
        mergeSortHelper(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

void mergeSort(int *arr, int size) {
    mergeSortHelper(arr, 0, size - 1);
}

// Implementação do Quick Sort
int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

void quickSortHelper(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSortHelper(arr, low, pi - 1);
        quickSortHelper(arr, pi + 1, high);
    }
}

void quickSort(int *arr, int size) {
    quickSortHelper(arr, 0, size - 1);
}

// Implementação do seu algoritmo personalizado
void    troca(int *nbr1, int *nbr2)
{
    int aux;

    aux = 0;
    aux = *nbr1;
    *nbr1 = *nbr2;
    *nbr2 = aux;

}

int     ft_partition(int *nbr, int left, int ringht)
{
   int i;
   int pivo;
   int pos;

   i = ringht;
   pivo = nbr[left];
   pos = ringht + 1;

    while (i >= left)
    {
        if (nbr[i] >= pivo)
        {
            pos--;
            troca(&nbr[i], &nbr[pos]);
        }
        i--;
    }

    return (pos);
}

void ft_quick_sort(int *nbr, int letf, int right)
{
    int nb_help;

    nb_help = 0;
    if (letf < right)
    {
        nb_help = ft_partition(nbr, letf, right);
        ft_quick_sort(nbr, letf, nb_help -1);
        ft_quick_sort(nbr, nb_help +1, right);
    }


}

int main() {
    int size = 1000; // Tamanho do array
    int arr[size]; // Array de números aleatórios

    // Gere um array aleatório
    generateRandomArray(arr, size);

    // Clone o array para que todos os algoritmos ordenem o mesmo conjunto de números
    int arr_copy[size];
    copyArray(arr, arr_copy, size);

    // Teste e meça o tempo de execução de cada algoritmo
    clock_t start, end;
    double cpu_time_used;

    // Bubble Sort
    copyArray(arr, arr_copy, size);
    start = clock();
    bubbleSort(arr_copy, size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sort: %f segundos\n", cpu_time_used);

    // Selection Sort
    copyArray(arr, arr_copy, size);
    start = clock();
    selectionSort(arr_copy, size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection Sort: %f segundos\n", cpu_time_used);

    // Insertion Sort
    copyArray(arr, arr_copy, size);
    start = clock();
    insertionSort(arr_copy, size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Insertion Sort: %f segundos\n", cpu_time_used);

    // Merge Sort
    copyArray(arr, arr_copy, size);
    start = clock();
    mergeSort(arr_copy, size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Merge Sort: %f segundos\n", cpu_time_used);

    // Quick Sort
    copyArray(arr, arr_copy, size);
    start = clock();
    quickSort(arr_copy, size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Quick Sort: %f segundos\n", cpu_time_used);

    // Seu algoritmo personalizado
    copyArray(arr, arr_copy, size);
    start = clock();
    ft_quick_sort(arr, 0,  size);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Seu Algoritmo Personalizado: %f segundos\n", cpu_time_used);

    return 0;
}
