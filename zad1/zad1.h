#pragma once
#include <iostream>
#include <vector>
#include <initializer_list>

template <typename T>
class Join
{
public:
	Join(std::initializer_list<std::vector<T>> list)
	{
		int maxSize = 0;
		for (auto vec : list)
		{
			maxSize += vec.size();
		}

		joined.reserve(maxSize);
		int s = 0;
		for (auto vec : list)
		{
			joined.insert(joined.begin() + s, vec.begin(), vec.end());
			s += vec.size();
		}
	}

	operator std::vector<T>()
	{
		return joined;
	}

private:
	std::vector<T> joined;
};
