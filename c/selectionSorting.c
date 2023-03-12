/*
cara kerja algoritma selection sort
adalah dengan membandingkan semua nilai dalam array
lalu menukarnya.
*/

/*
untuk lebih detail, pada array akan diberikan nilai maxIndex yang akan menyimpan
index nilai paling besar yang diisi dengan nilai awal i, lalu tiap nilai akan dibandingkan
dengan variabel tersebut, jika lebih besar atau sama dengan maka nilai maxIndex akan diisi oleh nilai
tersebut, dan akan di tukar pada akhir perulangan j.
*/

#include <stdio.h>

void printArr(int arr[], int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    printf("%d, ", arr[i]);
  }
}

void selectSort(int arr[], int length)
{
  for (int i = 0; i < length - 1; i++) {
    int maxIndex = i;
    int temp;
    for (int j = i; j < length - 1; j++) {
      if (arr[j] >= arr[maxIndex]) {
        maxIndex = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[maxIndex];
    arr[maxIndex] = temp;
  }
  printArr(arr, length);
}

int main()
{
  int someArr[5] = {3, 1, 15, 2};
  int someArrSize = sizeof(someArr) / sizeof(int);

  printf("sebelum sorting: \n");
  printArr(someArr, someArrSize);

  printf("\nsetelah sorting: \n");
  selectSort(someArr, someArrSize);

  return 0;
}