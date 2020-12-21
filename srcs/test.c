#include "libft.h"

int main(int argc, char const *argv[])
{
	char dst[10] = "test";

	memmove(dst + 4, dst, 4);
	printf("%s\n", dst);
	return 0;
}