        if (i & 1 == 0)
            for (int j = 0; j < m; j++)
            {
                cout<< arr[j][i]<<" ";
            }
        else
        {
            for (int j = m-1; j >=0; j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }