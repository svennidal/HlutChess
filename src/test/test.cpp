// Copyright Svenni Dal - Sveinn Dal Bjornsson - sun maí  3 14:23:51 GMT 2015
#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
using namespace std;

SCENARIO( "Scenario", "[Game]" ){
	//initialize

	GIVEN( "A Game" ){
		//create something

		THEN( "Then" ){
			REQUIRE( 0 == 0);
		}

		WHEN( "When"){
			//change
			THEN( "Then" ){
				REQUIRE( 1 == 1 );
			}
		}
		WHEN( "When" ){
			//change
			THEN( "Then" ){
				CHECK( true );
				CHECK( true );
			}
		}
	}
}


