//
//  FunctionTests.m
//  FunctionTests
//
//  Created by Marcus Florentin on 30/05/2018.
//  Copyright © 2018 Marcus Florentin. All rights reserved.
//

#import <XCTest/XCTest.h>
#include "../includes/libft.h"

@interface FunctionTests : XCTestCase

@end

@implementation FunctionTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)test_ft_memndup {

	char *str = "Marcus est le meilleur";
	long i = 5;
	char cmp_str[i + 1];
	char *new_str = ft_memndup(str, i);

	if (new_str) {
		for (long y = 0; y < i; y += 1) {
			cmp_str[y] = str[y];
		}
		NSString *test = [[NSString alloc] initWithUTF8String:cmp_str];
		NSString *result = [[NSString alloc] initWithUTF8String:new_str];
		XCTAssertEqualObjects(result, test);
		free(new_str);
	}


	new_str = ft_memndup(NULL, 5);
	if (new_str) {
		XCTFail("\"ft_memndup\" n'a pas retouné \"NULL\"");
		free(new_str);
	}

	new_str = ft_memndup(str, 0);
	if (*new_str) {
		XCTFail("\"ft_memndup\" n'a pas retouné une string vide");
		free(new_str);
	}
}

- (void)test_ft_longset {

	long i[] = {5, 6, 3};
	long value = -1;

	ft_longset(i, value, 3);
	for (int y = 0; y < 2; y++) {
		XCTAssertEqual(i[y], value);
	}

}

- (void)test_ft_int_cmp {

	int a = 3;
	int b = 3;

	XCTAssertEqual(ft_int_cmp(&a, &b), 1);

	b = 18;

	XCTAssertEqual(ft_int_cmp(&a, &b), 0);
}

- (void)test_ft_sizet_cmp {

	size_t a = 3;
	size_t b = 3;

	XCTAssertEqual(ft_sizet_cmp(&a, &b), 1);

	b = 18;

	XCTAssertEqual(ft_sizet_cmp(&a, &b), 0);
}


- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
