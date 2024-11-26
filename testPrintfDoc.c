#include<stdio.h>
#include<stdarg.h>
//https://pythontutor.com/render.html#code=%23include%3Cstdio.h%3E%0A%23include%3Cstdarg.h%3E%0A%0Aint%20ft_sum%28int%20n,...%29%0A%7B%0A%20%20%20%20int%20sum%20%3D%200%3B%0A%20%20%20%20va_list%20ap%3B%0A%20%20%20%20va_start%28ap,%20n%29%3B%0A%20%20%20%20int%20%20i%20%3D%200%3B%0A%20%20%20%20while%28i%20%3C%20n%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20sum%20%2B%3D%20va_arg%28ap,int%29%3B%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%7D%0A%20%20%20%20va_end%28ap%29%3B%0A%20%20%20%20return%20sum%3B%0A%7D%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20printf%28%22%25d%22,ft_sum%285,2,3,4,10%29%29%3B%0A%7D&cumulative=false&curInstr=21&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false


//the include file <stdarg.h> declares a type (va_list) and defines three macros for stepping through a list of arguments whose number and types are not known to the called function.

//the called function must declare an object of type va_list which is used by the macros va_start() and va_arg() va_end().

/*
Key Components:
Fixed Parameters: These are the arguments explicitly //declared (e.g., int n in your example).
Variadic Arguments (...): The ... tells the compiler that additional, unspecified arguments may follow.
*/

//'c': Always promoted to int in variadic functions


/*
	example(3, 'a', 'b', 'c');
	num = 3 (fixed argument)
	The rest: 'a', 'b', 'c' (variadic arguments)

But inside the function, the compiler doesn’t know how many arguments or their types — that’s up to you to handle with the stdarg.h library.
*/

/*
			Accessing Variadic Arguments
To process the ... arguments, you use these macros from <stdarg.h>:

va_list: A special type to iterate over the arguments.
va_start: Initializes the va_list to point to the first variadic argument.
va_arg: Fetches the next argument (you specify the type, e.g., int, char, etc.).
va_end: Cleans up the va_list.

*/


//NOTES:
/*
	variadic function: is a function that can take a variable number of arguments.
	va_list --> is type defined in the C standar library <stdarg.h>. is a pointer to a structure that holds information about the arguments passed to a function that uses a variable number of arguments.
	ap --> argument pointer. (standard)
	ap is pointing to first argument which is n.
	Always use int in va_arg when dealing with promoted types like char.

	why not declaring --> va_list *ap ?? just va_list *ap
	the va_list type is already defined as a pinter type.

	under the hood we are having a pointer ap to this struct.
	the gp_offset & fp_offset members of the va_list structure are like "pointers" that keep track of which register should be used to pass the next argument of a specific type.
			struct__va__list _tag
			{
				gp_offset: an integer variable of size 8 bytes, which specifires the offset of the next available general_purpose_arg_register. 
				fp_offset:An integer variable of size of 4 bytes, which specifies the offset of the next available floating point arg regiester.
			}
*/
int ft_sum(int n, ...)
{
	va_list ap; // here is pointer to n (3 in this example).
	int i = 0;
	int sum = 0;

	va_start(ap,n);
	while(i < n)
	{
		sum += va_arg(ap,int);
		i++;
	}
	return sum;

}
long double ft_sum01(int n, ...) // so in this case also the long double with int n as count of args.
{
	va_list ap; // here is pointer to n (3 in this example).
	int i = 0;
	long double sum = 0;

	va_start(ap,n);
	while(i < n)
	{
		sum += va_arg(ap,long double);
		i++;
	}
	return sum;

}
void toupperrr(int n, ... ) // always use int (its job only to count the number of argumts)
{
	int i = 0;
	va_list ap ; // here is pointer to n (2 in this example).
	va_start(ap, n);
	char *test;
	while(i < n)
	{
		//Each call to va_arg moves the pointer forward to fetch the next argument ('a', then 'b', then 'c').
		test = va_arg(ap, char*);
		printf("%s\n",test );
		i++;
	}
	//va_end macro is used to clean up resources used by va_list. 
	//ensures no memory leaks or undefined behavior occur when accessing the arguments
	va_end(ap);
}



void arrprint(int n, ...)
{
	va_list ap;

	va_start(ap,n);
	int i = 0;
	int j = 0;

	while(i < n)
	{
		int *arr = va_arg(ap,int *);
		j = 0;
		while(j < 4)
		{
			printf("%d\n",arr[j]);
			j++;
		}
		i++;
	}
	va_end(ap);
}


#include <unistd.h>
int main()
{
	int sum = ft_sum(3,1,2,5);
	printf("%d\n",sum);
	// here i am casting because inplicitly it took double as default.
	printf("%Lf\n",ft_sum01(3,(long double)1.6,(long double)5.2,(long double)54.6));
	toupperrr(2,"Hello","World");
	int arr[4] = {0,1,2,3};
	int arr1[4] = {4,5,6,7};
	arrprint(2,arr,arr1);
}



/*
		%d Vs %i
		
For printf, %d and %i are synonyms. They're functionally identical.

In scanf, %d only matches decimal, whereas %i can match to decimal, octal, and hexadecimal.



*/



int main()
{

}