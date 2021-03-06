#define CATCH_CONFIG_MAIN
#include "../Catch/single_include/catch.hpp"
#include "solution.h"
#include <iostream>

TEST_CASE("Remove Duplicates from Sorted Array II", "[removeDuplicates]")
{
    SECTION( "1" )
    {
        int arr[] = {1,1,1,2,2,3};
        Solution s;
        REQUIRE( s.removeDuplicates(arr, 6) == 5 );
    }
    SECTION( "2" )
    {
        int arr[] = {1,1,1};
        Solution s;
        REQUIRE( s.removeDuplicates(arr, 3) == 2 );
    }
}




