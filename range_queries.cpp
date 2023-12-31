#include <cstdlib>
#include "archlab.h"
#include <unistd.h>
#include<algorithm>
#include<cstdint>
#include<unordered_set>
#include <unordered_map>
#include "perfstats.h"
#include "range_queries.h"

#define START_C extern "C" { // this just hides the braces from the editor, so it won't try to indent everything.
#define END_C  }


START_C

uint64_t range_queries_solution(uint64_t *search_space, uint32_t search_space_size, uint64_t* queries_lb, uint64_t* queries_ub, uint32_t query_count)
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

// hello

END_C
