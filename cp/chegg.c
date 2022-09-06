// C program for the above approach
#include <stdio.h>  //declaration of header file in c

void print(float arr[], int N, int K) //function definition in c 
{
	int j;
    float max;
    //printf("%d",N);
	for (int i = 0; i <= N - K; i=i+K) {    //run a loop till (N-K)....
		max = arr[i];                //storing each window of size k of first element in max;
      //  printf("%f",max);
		for (j = 1; j < K; j++) {   //here run a loop for given grouped student k to find the max among window 
			if (arr[i + j] > max)
				max = arr[i + j];
		}
		printf("%.2f ", max);   //each time print max height of student which is caption  (** here ("%.2f") id used to print a number up to a two decimal place as given in the question format)
	}
}

 
int main()
{
    int n,k;   
    scanf("%d",&n);//input of number of student
    scanf("%d",&k);//input number of student to be grouped
    float arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%f",&arr[i]);
    }
	print(arr, n, k);
	return 0;
}

//if any doubt please comment feel free to leave a comment will solve doubt shortly at once
//please like
//thank you
