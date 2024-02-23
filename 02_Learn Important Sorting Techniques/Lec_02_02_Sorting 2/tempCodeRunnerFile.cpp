    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Insertion sort
    merge_sortt(arr, n);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;