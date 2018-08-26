void maopaoSort(unsigned int array[], unsigned int size)
{
	int i, j;
	i = j = 0;
	for (i = 0; i< size; i++)
	{
		for (j = size - 1; j  > i; j--)
		{
			unsigned int temp = array[j-1];
			if (array[j-1] >= array[j])
			{
				array[j-1] = array[j];
				array[j] = temp;
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
