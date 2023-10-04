#include<cstdint>
#include "range_queries.h"
#include <iostream>

extern uint64_t range_queries(uint64_t *search_space, uint32_t search_space_size, uint64_t* queries_lb, uint64_t* queries_ub, uint32_t query_count)
{
	uint64_t r = 0;
 
	for(uint32_t i = 0; i < query_count; i++) {
		for(uint32_t j = 0; j < search_space_size; j++) {
			if (search_space[j] >= queries_lb[i] && search_space[j] < queries_ub[i]) {
				r++;
			}
		}
	}
	return r;
}