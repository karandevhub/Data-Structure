 int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + (end - start) / 2);
        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;