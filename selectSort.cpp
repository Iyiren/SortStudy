void selectSort(unsigned int array[], unsigned int size)
{
	int i, j;
	i = j = 0;
	
	for (i = 0; i < size - 1; i++)
	{
		unsigned int min = array[i];
		unsigned int temp = array[i];
		for (j = i + 1; j < size - 1; j++)
		{
			if (array[j] < min)
				min = array[j];
		}
		if (temp > min)
		{
			array[i] = array[j];
			array[j] = temp;
		}

		i = 0;
		while (i < size)
		{
			cout << array[i] << " ";
			i++;
		}

		cout << endl;
	}
	
}
