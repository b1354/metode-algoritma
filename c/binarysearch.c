//--- Binary search -------------------------//
// Binary Search adalah algoritma pencarian  //
// Untuk data yang terurut.                  //
// Pencarian dilakkan dengan cara menebak    //
// apakah data yang dicari berada di tengah- //
// tengah data, kemudian membandingkan data  //
// yang dicari dengan data yang ada di       //
// tengah                                    //
//-------------------------------------------//

/*
  Bila data yang di tengah lebih besar dari
  angka yang dicari maka pencarian akan dilakukan
  ke kiri
  Bila data yang di tengah lebih besar dari angka
  yang dicari, maka pencarian akan dilakukan
  ke kanan
*/

// syarat dari algoritma ini adalah data yang akan dicari
// harus berurutan

#include<stdio.h>

int binarySearch(int arr[], int size, int search)
{
  int mid = (size/2);
  int i = mid;

  while(search!=arr[mid])
  {
    // kondisi jika nilai tengah == nilai yang dicari
    if (arr[i] == search)
    {
      return i;
    }

    // kondisi untuk loop yang melebihi array
    if (i<0 || i > size) {
      printf("fail\n");
      return -1;
      break;
    }

    // kodisi increment/decrement
    if (search < arr[mid]) {
      i--;
    } else {
      i++;
    }
  }

  return i;
}

int main ()
{
  int someArr[7] = {10, 11, 12, 13, 14, 15, 16};
  int cariBil;
  int arrSize = sizeof(someArr) / sizeof(someArr[0]);

  printf("masukan bilangan yang ingin di cari: ");
  scanf("%d", &cariBil);

  int indexBil = binarySearch(someArr, arrSize, cariBil);
  printf("indeks ke- %d\n", indexBil);

  return 0;
}