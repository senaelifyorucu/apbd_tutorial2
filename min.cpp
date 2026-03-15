int CalculateMin(int values[], int size){
	int min = values[0];
	for(int i=1;i<size;i++){
		if(values[i] < min){
			min = values[i];
		}
	}
	return min;
}