/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

/*TEST(FieldTest, getInBounds)
{
	Field minefield;
	minefield.get(99,99);
	ASSERT_EQ( "Out of bounds", minefield.get(99,99));

}*/

TEST(FieldTest, MineisSafe)
{
	Field minefield;
        minefield.placeMine(4,5);
        ASSERT_EQ( false, minefield.isSafe(4,5));
}
TEST(FieldTest, isSafe)
{
	Field minefield;
	ASSERT_EQ( true, minefield.isSafe(5,5));

}

TEST(FieldTest, inBounds)
{
	Field minefield;
	ASSERT_EQ( EMPTY_HIDDEN, minefield.get(5,5));
}
