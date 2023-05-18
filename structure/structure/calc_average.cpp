
float calc_average(int* progress, int size)
{
	float sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += progress[i];
	}
	return static_cast<float>(sum) / size;
}