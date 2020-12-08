#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect{ 7, 9, 1, 7, 8, 0, 9, 1, 8 };
	for (size_t i = 0; i < vect.size(); ++i)
	{
		size_t count = 0;
		for (size_t j = 0; j < vect.size(); ++j)
		{
			if (vect[i] == vect[j])
			{
				count++;
			}
		}
	}
}


