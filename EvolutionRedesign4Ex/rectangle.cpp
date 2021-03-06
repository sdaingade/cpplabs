/*
 * Copyright SciSpike
 *
 * Implementation file for rectangle
 */
#include "shape.h"
#include "rectangle.h"
#include <stdio.h>

/*
 * Declaration of the function table for rectangle
 */
static ShapeFunctionTable RectangleFunctionTable;

/*
 * Initialze the function table for rectangle
 */
void initializeRectangle() {
	RectangleFunctionTable.drawFunc = drawRectangle;
	RectangleFunctionTable.eraseFunc = eraseRectangle;
}

/*
 * Implementation of draw rectangle
 */
void drawRectangle( Shape* s ) {
	/* Draw the rectangle */
	printf("This function should have drawn a rectangle\n");
}

/*
 * Implementation of erase rectangle
 */
void eraseRectangle( Shape *s ) {
	/* Erase the rectangle */
	printf("This function should have ereased a rectangle\n");
}


/*
 * Create a rectangle
 */
Shape* createRectangle() {
	Shape* retVal;
	retVal = new Shape;
	/*
	 * Notice. We have to initialize the manipulation fuctions
	 */
	retVal->fTable = &RectangleFunctionTable;
	return retVal;
}

