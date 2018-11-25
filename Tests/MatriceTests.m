//
//  MatriceTests.m
//  FunctionTests
//
//  Created by Marcus Florentin on 24/11/2018.
//  Copyright © 2018 Marcus Florentin. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "../Matrices/matrice.h"

@interface MatriceTests : XCTestCase

@end

@implementation MatriceTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testMatriceCreation {

	t_matrice_coord size = { 6, 8 };

	t_ctrl *matrice = init_matrice(size.row, size.column);

	t_item *place = matrice->first;

	t_matrice_coord coord;
	while (place) {
		coord = *(t_matrice_coord *)place->content;
		XCTAssertLessThanOrEqual(coord.row, size.row);
		XCTAssertLessThanOrEqual(coord.column, size.column);
		place = place->next;
	}

	if (matrice)
		XCTAssertEqual(matrice->count, size.row * size.column);
	else
		XCTFail("Can't create matrice");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.

	[self measureBlock:^{
        // Put the code you want to measure the time of here.
		init_matrice(100, 100);
    }];
}

@end
