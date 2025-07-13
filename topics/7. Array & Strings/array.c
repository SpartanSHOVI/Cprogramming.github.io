/*

🔷 8.1 Arrays in C
    An array is a collection of elements of the same data type stored in contiguous memory locations.

🔹 Types of Arrays
    1. One-dimensional

    2. Two-dimensional (Matrix)

    3. Multidimensional

🔹 Declaring and Initializing Arrays
c
int marks[5];                // Declaration
int scores[5] = {90, 80, 70, 85, 60};  // Initialization

📌 Accessing:
c
printf("%d", scores[2]);  // Output: 70

🔹 Looping Through Arrays
c
for (int i = 0; i < 5; i++) {
    printf("Score %d: %d\n", i + 1, scores[i]);
}

🔹 2D Arrays (Matrix)
c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

📌 Accessing:
c
printf("%d", matrix[1][2]);  // Output: 6

🔹 Passing Arrays to Functions
c
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}




*/