#include <stdio.h>

int countsearchkey(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main()
{
    int size,i;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter elements : ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int key;
    printf("search key: ");
    scanf("%d", &key);

    int count = countsearchkey(arr, size, key);
    printf("Search key appears %d times\n",count);
    return 0;
}
