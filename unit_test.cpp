#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  DOCTest unit tests
 */

#include "doctest.h"
#include "inclassone.h"


int nums_0[] = {3, 2 ,2, 3};
int nums_1[] = {0,1,2,2,3,0,4,2};
int nums_2[] = {};
int nums_3[] = {1};


TEST_CASE("unit_tests"){
	CHECK(ECRemoveSpace(nums_0,4, 2)==2);
        CHECK(ECRemoveSpace(nums_1,8, 2)==5);
        CHECK(ECRemoveSpace(nums_2,0, 1)==0);
        CHECK(ECRemoveSpace(nums_3,1, 1)==0);
};
