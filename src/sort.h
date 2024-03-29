#ifndef SORT_H
#define SORT_H

#include <vector>
#include <algorithm>
#include <fstream>

#define RADIX_DIGIT(n, exp) (((n)/(exp))%10)

void _countingSort(const std::vector<int64_t>& in, std::vector<int64_t>& out, int64_t k);
void countingSort(std::vector<int64_t>& v);

void _countingSortRadix(const std::vector<int64_t>& in, std::vector<int64_t>& out, int exp);
void _radixSort(const std::vector<int64_t>& in, std::vector<int64_t>& out, int64_t max);
void radixSort(std::vector<int64_t>& v);

#endif // !SORT_H