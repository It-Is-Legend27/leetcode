void DuplicateZeros(int[] arr)
{
    for (int i = 0; i < arr.Length; i++)
    {
        if(arr[i] == 0)
        {
            for (int j = arr.Length - 1; j >= i+1 ; j--)
            {
                arr[j] = arr[j] ^ arr[j-1];
                arr[j-1] = arr[j] ^ arr[j-1];
                arr[j] = arr[j] ^ arr[j-1];
            }
            arr[i] = 0;
            i++;
        }
    }
}

int[] A = {1,2,3,4,0,5};

DuplicateZeros(A);

foreach (var item in A)
{
    Console.WriteLine(item);
}