
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x53 = INT8_MAX;
int8_t x56 = 10;
static int16_t x297 = INT16_MAX;
int8_t x299 = INT8_MAX;
volatile uint16_t x300 = 3U;
volatile int64_t x790 = -3542610804505483LL;
int32_t t6 = -980077;
int64_t x1026 = INT64_MIN;
static uint8_t x1385 = 4U;
volatile int32_t x1426 = INT32_MIN;
volatile uint32_t t11 = 0U;
int32_t x1746 = -14;
int32_t t15 = -1022215;
int32_t x2145 = INT32_MAX;
uint64_t x2147 = UINT64_MAX;
uint64_t t17 = 1908561997617395LLU;
volatile int32_t t19 = 37;
volatile uint8_t x2660 = 7U;
volatile uint64_t t20 = 25696892290708545LLU;
static uint16_t x2754 = 1182U;
static uint64_t x3095 = 827552458337587196LLU;
uint16_t x3123 = 1U;
static volatile uint16_t x3237 = 12U;
static uint16_t x3239 = 3U;
volatile int32_t t27 = 0;
uint8_t x3843 = UINT8_MAX;
volatile uint64_t x3857 = 22377294721565LLU;
int8_t x3939 = 17;
uint8_t x4148 = 2U;
int32_t t35 = -406616;
volatile uint32_t x4219 = 1953003711U;
int16_t x4261 = 10835;
int8_t x4264 = 8;
int32_t t38 = -818174;
int8_t x4361 = 15;
uint64_t x4363 = 2296LLU;
uint32_t t43 = 4023U;
volatile int8_t x4681 = 60;
static int8_t x4730 = INT8_MIN;
volatile int8_t x4732 = 3;
volatile int32_t t46 = 0;
uint64_t x4973 = 84383450437982081LLU;
volatile uint64_t t47 = 28267309116930745LLU;
int8_t x5045 = INT8_MAX;
volatile int32_t t50 = 2221;
int8_t x5361 = INT8_MAX;
int16_t x5363 = INT16_MAX;
int16_t x5611 = 7382;
uint16_t x6276 = 12U;
int16_t x6409 = 2;
int64_t x6634 = -3266LL;
uint8_t x7160 = 3U;


void f0(void) {
    	int64_t x54 = INT64_MIN;
	static int16_t x55 = 0;
	static volatile int32_t t0 = -132232793;

    t0 = (x53>>(x54<=(x55<<x56)));

    if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x65 = 20420320U;
	int64_t x66 = -444733428539LL;
	static int32_t x67 = 29;
	uint16_t x68 = 6U;
	volatile uint32_t t1 = 535891605U;

    t1 = (x65>>(x66<=(x67<<x68)));

    if (t1 != 10210160U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x298 = 57;
	volatile int32_t t2 = 52;

    t2 = (x297>>(x298<=(x299<<x300)));

    if (t2 != 16383) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x425 = 10U;
	int8_t x426 = INT8_MIN;
	static int16_t x427 = INT16_MAX;
	uint8_t x428 = 7U;
	volatile uint32_t t3 = 618U;

    t3 = (x425>>(x426<=(x427<<x428)));

    if (t3 != 5U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x602 = INT16_MAX;
	uint32_t x603 = 2233U;
	int8_t x604 = 15;
	volatile uint32_t t4 = 6837626U;

    t4 = (x601>>(x602<=(x603<<x604)));

    if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x789 = 1;
	int8_t x791 = 4;
	volatile int32_t x792 = 5;
	volatile int32_t t5 = 280371;

    t5 = (x789>>(x790<=(x791<<x792)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x957 = 48;
	int64_t x958 = -160171031928LL;
	uint64_t x959 = UINT64_MAX;
	volatile uint16_t x960 = 15U;

    t6 = (x957>>(x958<=(x959<<x960)));

    if (t6 != 24) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x1025 = 45U;
	uint32_t x1027 = UINT32_MAX;
	uint8_t x1028 = 1U;
	volatile uint32_t t7 = 1987U;

    t7 = (x1025>>(x1026<=(x1027<<x1028)));

    if (t7 != 22U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1386 = 2;
	static volatile int64_t x1387 = 0LL;
	uint16_t x1388 = 1U;
	int32_t t8 = -46;

    t8 = (x1385>>(x1386<=(x1387<<x1388)));

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x1425 = 287LLU;
	uint32_t x1427 = 70023U;
	static uint8_t x1428 = 30U;
	static volatile uint64_t t9 = 2075269LLU;

    t9 = (x1425>>(x1426<=(x1427<<x1428)));

    if (t9 != 143LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x1441 = 7U;
	int32_t x1442 = -1;
	uint16_t x1443 = UINT16_MAX;
	volatile int8_t x1444 = 0;
	volatile uint32_t t10 = 32774U;

    t10 = (x1441>>(x1442<=(x1443<<x1444)));

    if (t10 != 3U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x1469 = 5U;
	static int32_t x1470 = -1;
	static volatile int64_t x1471 = 151712831266710182LL;
	uint16_t x1472 = 1U;

    t11 = (x1469>>(x1470<=(x1471<<x1472)));

    if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1577 = 3430U;
	static int16_t x1578 = -1;
	uint16_t x1579 = UINT16_MAX;
	uint8_t x1580 = 5U;
	volatile int32_t t12 = 1139246;

    t12 = (x1577>>(x1578<=(x1579<<x1580)));

    if (t12 != 1715) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x1689 = UINT16_MAX;
	int8_t x1690 = INT8_MAX;
	uint64_t x1691 = UINT64_MAX;
	uint8_t x1692 = 31U;
	volatile int32_t t13 = 347261;

    t13 = (x1689>>(x1690<=(x1691<<x1692)));

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1745 = 6231338029854LLU;
	uint32_t x1747 = 30337U;
	volatile uint32_t x1748 = 10U;
	volatile uint64_t t14 = 59304215LLU;

    t14 = (x1745>>(x1746<=(x1747<<x1748)));

    if (t14 != 6231338029854LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1765 = INT8_MAX;
	uint8_t x1766 = UINT8_MAX;
	int8_t x1767 = INT8_MAX;
	uint8_t x1768 = 3U;

    t15 = (x1765>>(x1766<=(x1767<<x1768)));

    if (t15 != 63) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x2146 = INT64_MIN;
	uint8_t x2148 = 0U;
	int32_t t16 = -77782807;

    t16 = (x2145>>(x2146<=(x2147<<x2148)));

    if (t16 != 1073741823) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x2217 = UINT64_MAX;
	static int64_t x2218 = INT64_MIN;
	int32_t x2219 = 58;
	int32_t x2220 = 1;

    t17 = (x2217>>(x2218<=(x2219<<x2220)));

    if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x2261 = 55U;
	static uint64_t x2262 = 1150943LLU;
	int32_t x2263 = 1028847;
	volatile int16_t x2264 = 1;
	int32_t t18 = -15;

    t18 = (x2261>>(x2262<=(x2263<<x2264)));

    if (t18 != 27) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2621 = 1U;
	static volatile uint8_t x2622 = UINT8_MAX;
	uint32_t x2623 = 8603U;
	uint8_t x2624 = 10U;

    t19 = (x2621>>(x2622<=(x2623<<x2624)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2657 = 50427197528643LLU;
	volatile int16_t x2658 = INT16_MAX;
	static uint16_t x2659 = 3U;

    t20 = (x2657>>(x2658<=(x2659<<x2660)));

    if (t20 != 50427197528643LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x2681 = 0;
	int64_t x2682 = INT64_MAX;
	int16_t x2683 = 2;
	volatile int8_t x2684 = 1;
	int32_t t21 = -31931;

    t21 = (x2681>>(x2682<=(x2683<<x2684)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x2753 = 1;
	uint8_t x2755 = 1U;
	static int8_t x2756 = 17;
	volatile int32_t t22 = 2298;

    t22 = (x2753>>(x2754<=(x2755<<x2756)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2785 = 56U;
	int64_t x2786 = -522174715095262347LL;
	uint32_t x2787 = UINT32_MAX;
	uint32_t x2788 = 6U;
	int32_t t23 = -234;

    t23 = (x2785>>(x2786<=(x2787<<x2788)));

    if (t23 != 28) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x3093 = 814U;
	int32_t x3094 = INT32_MIN;
	uint32_t x3096 = 7U;
	uint32_t t24 = 723145U;

    t24 = (x3093>>(x3094<=(x3095<<x3096)));

    if (t24 != 814U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x3121 = INT16_MAX;
	static int64_t x3122 = INT64_MIN;
	int8_t x3124 = 9;
	static volatile int32_t t25 = -3554797;

    t25 = (x3121>>(x3122<=(x3123<<x3124)));

    if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x3238 = 9621952LL;
	static uint8_t x3240 = 12U;
	volatile int32_t t26 = -200583012;

    t26 = (x3237>>(x3238<=(x3239<<x3240)));

    if (t26 != 12) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x3461 = INT8_MAX;
	int32_t x3462 = INT32_MAX;
	volatile int32_t x3463 = INT32_MAX;
	static uint8_t x3464 = 0U;

    t27 = (x3461>>(x3462<=(x3463<<x3464)));

    if (t27 != 63) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x3545 = 251U;
	static int32_t x3546 = 1;
	uint32_t x3547 = 1488U;
	uint8_t x3548 = 2U;
	volatile uint32_t t28 = 1800U;

    t28 = (x3545>>(x3546<=(x3547<<x3548)));

    if (t28 != 125U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x3717 = UINT8_MAX;
	uint32_t x3718 = 1092U;
	uint32_t x3719 = UINT32_MAX;
	uint64_t x3720 = 15LLU;
	static volatile int32_t t29 = -6820278;

    t29 = (x3717>>(x3718<=(x3719<<x3720)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint64_t x3841 = UINT64_MAX;
	int64_t x3842 = 921677406294069952LL;
	static int32_t x3844 = 23;
	static uint64_t t30 = UINT64_MAX;

    t30 = (x3841>>(x3842<=(x3843<<x3844)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x3858 = UINT64_MAX;
	int16_t x3859 = INT16_MAX;
	uint8_t x3860 = 4U;
	uint64_t t31 = 276LLU;

    t31 = (x3857>>(x3858<=(x3859<<x3860)));

    if (t31 != 22377294721565LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x3885 = 2;
	int16_t x3886 = INT16_MIN;
	uint8_t x3887 = 0U;
	int8_t x3888 = 7;
	int32_t t32 = 330272064;

    t32 = (x3885>>(x3886<=(x3887<<x3888)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x3937 = 4980387LLU;
	uint16_t x3938 = 100U;
	volatile int8_t x3940 = 1;
	uint64_t t33 = 19296773LLU;

    t33 = (x3937>>(x3938<=(x3939<<x3940)));

    if (t33 != 4980387LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x3941 = 22U;
	static int8_t x3942 = -3;
	uint64_t x3943 = UINT64_MAX;
	uint8_t x3944 = 1U;
	volatile int32_t t34 = -688473676;

    t34 = (x3941>>(x3942<=(x3943<<x3944)));

    if (t34 != 11) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x4145 = 1U;
	int64_t x4146 = -1LL;
	uint16_t x4147 = 2861U;

    t35 = (x4145>>(x4146<=(x4147<<x4148)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x4217 = 1;
	int16_t x4218 = -61;
	uint16_t x4220 = 12U;
	volatile int32_t t36 = 475376855;

    t36 = (x4217>>(x4218<=(x4219<<x4220)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x4262 = 34408LLU;
	uint64_t x4263 = UINT64_MAX;
	volatile int32_t t37 = -1;

    t37 = (x4261>>(x4262<=(x4263<<x4264)));

    if (t37 != 5417) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x4297 = 1U;
	int32_t x4298 = INT32_MIN;
	uint16_t x4299 = 23602U;
	static int8_t x4300 = 1;

    t38 = (x4297>>(x4298<=(x4299<<x4300)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x4362 = INT8_MAX;
	int8_t x4364 = 0;
	volatile int32_t t39 = 7;

    t39 = (x4361>>(x4362<=(x4363<<x4364)));

    if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x4393 = 14;
	uint8_t x4394 = 29U;
	volatile uint32_t x4395 = 262012U;
	volatile int8_t x4396 = 0;
	static int32_t t40 = -240535;

    t40 = (x4393>>(x4394<=(x4395<<x4396)));

    if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x4421 = 22;
	static int32_t x4422 = -1;
	uint32_t x4423 = UINT32_MAX;
	int32_t x4424 = 0;
	static volatile int32_t t41 = 5;

    t41 = (x4421>>(x4422<=(x4423<<x4424)));

    if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x4525 = 51035U;
	static volatile int64_t x4526 = INT64_MIN;
	int16_t x4527 = 371;
	uint8_t x4528 = 2U;
	uint32_t t42 = 28U;

    t42 = (x4525>>(x4526<=(x4527<<x4528)));

    if (t42 != 25517U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x4641 = 212384U;
	volatile int16_t x4642 = 1;
	int8_t x4643 = INT8_MAX;
	static uint8_t x4644 = 21U;

    t43 = (x4641>>(x4642<=(x4643<<x4644)));

    if (t43 != 106192U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x4669 = 491;
	static uint8_t x4670 = UINT8_MAX;
	int32_t x4671 = 3;
	uint8_t x4672 = 6U;
	int32_t t44 = -131919;

    t44 = (x4669>>(x4670<=(x4671<<x4672)));

    if (t44 != 491) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x4682 = -1;
	int32_t x4683 = 56224;
	int16_t x4684 = 2;
	int32_t t45 = -98301103;

    t45 = (x4681>>(x4682<=(x4683<<x4684)));

    if (t45 != 30) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x4729 = 0;
	static uint8_t x4731 = 10U;

    t46 = (x4729>>(x4730<=(x4731<<x4732)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x4974 = UINT32_MAX;
	uint64_t x4975 = 717877LLU;
	static uint8_t x4976 = 34U;

    t47 = (x4973>>(x4974<=(x4975<<x4976)));

    if (t47 != 42191725218991040LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x4981 = UINT64_MAX;
	int8_t x4982 = INT8_MIN;
	int16_t x4983 = INT16_MAX;
	int8_t x4984 = 15;
	uint64_t t48 = 402395691311159LLU;

    t48 = (x4981>>(x4982<=(x4983<<x4984)));

    if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x5046 = 245571500970711LLU;
	volatile uint32_t x5047 = 27U;
	static int16_t x5048 = 3;
	int32_t t49 = 406733686;

    t49 = (x5045>>(x5046<=(x5047<<x5048)));

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x5265 = INT8_MAX;
	int16_t x5266 = INT16_MIN;
	static uint32_t x5267 = 36U;
	int8_t x5268 = 0;

    t50 = (x5265>>(x5266<=(x5267<<x5268)));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x5362 = UINT8_MAX;
	uint32_t x5364 = 6U;
	int32_t t51 = -9298;

    t51 = (x5361>>(x5362<=(x5363<<x5364)));

    if (t51 != 63) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x5553 = 1107U;
	static volatile uint64_t x5554 = 5LLU;
	uint16_t x5555 = 24U;
	int8_t x5556 = 0;
	volatile int32_t t52 = 37340;

    t52 = (x5553>>(x5554<=(x5555<<x5556)));

    if (t52 != 553) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x5581 = 14607U;
	uint64_t x5582 = 20LLU;
	uint16_t x5583 = 13425U;
	int32_t x5584 = 1;
	volatile int32_t t53 = -254161625;

    t53 = (x5581>>(x5582<=(x5583<<x5584)));

    if (t53 != 7303) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x5609 = 6384U;
	static volatile uint8_t x5610 = 10U;
	static volatile uint8_t x5612 = 15U;
	static int32_t t54 = -9;

    t54 = (x5609>>(x5610<=(x5611<<x5612)));

    if (t54 != 3192) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x5617 = 0;
	volatile int64_t x5618 = INT64_MIN;
	int32_t x5619 = 22;
	int16_t x5620 = 1;
	volatile int32_t t55 = -5;

    t55 = (x5617>>(x5618<=(x5619<<x5620)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x5881 = 0;
	volatile int8_t x5882 = INT8_MIN;
	int64_t x5883 = 134053270204LL;
	volatile uint64_t x5884 = 8LLU;
	static volatile int32_t t56 = -1855895;

    t56 = (x5881>>(x5882<=(x5883<<x5884)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x6057 = 17U;
	uint64_t x6058 = 731961017303LLU;
	static uint64_t x6059 = UINT64_MAX;
	uint8_t x6060 = 10U;
	volatile int32_t t57 = -981563;

    t57 = (x6057>>(x6058<=(x6059<<x6060)));

    if (t57 != 8) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x6161 = 1U;
	int8_t x6162 = 3;
	static volatile uint32_t x6163 = 1498U;
	uint8_t x6164 = 14U;
	int32_t t58 = 4226;

    t58 = (x6161>>(x6162<=(x6163<<x6164)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x6233 = UINT64_MAX;
	int8_t x6234 = INT8_MAX;
	static uint64_t x6235 = 546665144106287LLU;
	int16_t x6236 = 5;
	volatile uint64_t t59 = 138176916579777545LLU;

    t59 = (x6233>>(x6234<=(x6235<<x6236)));

    if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x6273 = 10U;
	uint64_t x6274 = UINT64_MAX;
	volatile uint32_t x6275 = 167097694U;
	static int32_t t60 = 5461413;

    t60 = (x6273>>(x6274<=(x6275<<x6276)));

    if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x6317 = 1844LLU;
	int64_t x6318 = -1LL;
	int8_t x6319 = INT8_MAX;
	static int8_t x6320 = 5;
	volatile uint64_t t61 = 502991LLU;

    t61 = (x6317>>(x6318<=(x6319<<x6320)));

    if (t61 != 922LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x6410 = INT32_MIN;
	static uint16_t x6411 = UINT16_MAX;
	uint8_t x6412 = 1U;
	volatile int32_t t62 = -80;

    t62 = (x6409>>(x6410<=(x6411<<x6412)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x6633 = UINT32_MAX;
	uint32_t x6635 = 243U;
	uint8_t x6636 = 6U;
	volatile uint32_t t63 = 129U;

    t63 = (x6633>>(x6634<=(x6635<<x6636)));

    if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x6929 = UINT32_MAX;
	static int8_t x6930 = -12;
	static int64_t x6931 = 36395191LL;
	int8_t x6932 = 0;
	static volatile uint32_t t64 = 472380989U;

    t64 = (x6929>>(x6930<=(x6931<<x6932)));

    if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x6933 = INT16_MAX;
	static int8_t x6934 = INT8_MAX;
	uint64_t x6935 = UINT64_MAX;
	int8_t x6936 = 4;
	volatile int32_t t65 = -32;

    t65 = (x6933>>(x6934<=(x6935<<x6936)));

    if (t65 != 16383) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x6977 = 239;
	int32_t x6978 = 174261;
	static uint32_t x6979 = 2U;
	int16_t x6980 = 0;
	int32_t t66 = 13;

    t66 = (x6977>>(x6978<=(x6979<<x6980)));

    if (t66 != 239) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x7053 = 779603328641174845LLU;
	static int64_t x7054 = INT64_MAX;
	static volatile int8_t x7055 = 16;
	int8_t x7056 = 1;
	uint64_t t67 = 1568LLU;

    t67 = (x7053>>(x7054<=(x7055<<x7056)));

    if (t67 != 779603328641174845LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x7069 = 0LL;
	uint8_t x7070 = UINT8_MAX;
	uint64_t x7071 = UINT64_MAX;
	static int32_t x7072 = 50;
	volatile int64_t t68 = -590LL;

    t68 = (x7069>>(x7070<=(x7071<<x7072)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x7077 = 11U;
	int8_t x7078 = -1;
	int8_t x7079 = 30;
	int16_t x7080 = 3;
	volatile int32_t t69 = -8682;

    t69 = (x7077>>(x7078<=(x7079<<x7080)));

    if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x7125 = 0;
	static int32_t x7126 = INT32_MAX;
	static int16_t x7127 = 0;
	static uint32_t x7128 = 7U;
	int32_t t70 = -119;

    t70 = (x7125>>(x7126<=(x7127<<x7128)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x7129 = 6975U;
	volatile int64_t x7130 = INT64_MIN;
	volatile uint8_t x7131 = 0U;
	int16_t x7132 = 1;
	uint32_t t71 = 1U;

    t71 = (x7129>>(x7130<=(x7131<<x7132)));

    if (t71 != 3487U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x7157 = 84U;
	uint64_t x7158 = 4581944465362487LLU;
	static uint8_t x7159 = 2U;
	uint32_t t72 = 26624363U;

    t72 = (x7157>>(x7158<=(x7159<<x7160)));

    if (t72 != 84U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();


    return 0;
}

