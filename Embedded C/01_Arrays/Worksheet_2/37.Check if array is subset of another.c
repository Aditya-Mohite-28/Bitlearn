#include <stdio.h>

int is_subset(int arr1[], int size1, int arr2[], int size2) {
    if (size2 > size1) {
        return 0;
    }

    for (int i = 0; i < size2; i++) {
        int found = 0;

        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            return 0;
        }
    }
    
    return 1;
}
int main() {
    int arr1[] = {1, 2, 3 ,4 ,5};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2, 3, 3,4, 5};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    if(is_subset(arr1, size1, arr2, size2)){
        printf("Yess");
    }else {
        printf("Noo");
    }

    return 0;
}