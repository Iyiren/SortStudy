void insertSort(unsigned int array[], unsigned int size)
{
	unsigned int i, j;
	i = j = 0;
	for (i; i < size; i++)
	{
		unsigned int left = array[i];
		if (array[i] > array[i + 1])
		{
			array[i] = array[i + 1];
			array[i + 1] = left;
			for (j = i; j > 0; j--)
			{
				unsigned int temp = array[j];
				if (array[j - 1] > array[j])
				{
					array[j] = array[j - 1];
					array[j - 1] = temp;
				}
			}
		}
	}
	i = 0;
	while (i < size)
	{
		cout << array[i] << " ";
		i++;
	}

	cout << endl;
}
