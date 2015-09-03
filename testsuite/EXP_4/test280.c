#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = INT16_MAX;
uint64_t x18 = 1956207415084LLU;
uint32_t t4 = 484396U;
uint32_t x36 = 1U;
uint32_t x49 = 4U;
int64_t x50 = -1LL;
int16_t x63 = INT16_MAX;
volatile int8_t x64 = -7;
int32_t t7 = -6429;
volatile int32_t t8 = 604517;
uint64_t x71 = UINT64_MAX;
volatile uint64_t t10 = 2446959387LLU;
volatile uint8_t x84 = UINT8_MAX;
uint32_t x99 = 4058U;
int64_t x110 = INT64_MIN;
volatile uint16_t x122 = 4297U;
int32_t x140 = -20;
uint64_t x146 = UINT64_MAX;
static uint16_t x184 = UINT16_MAX;
volatile int32_t t23 = INT32_MAX;
volatile uint8_t x186 = UINT8_MAX;
uint8_t x214 = 16U;
int16_t x221 = INT16_MAX;
static int16_t x245 = 1;
int8_t x246 = -1;
int64_t x248 = 3074026726570557295LL;
volatile uint64_t t31 = 0LLU;
volatile uint8_t x254 = 1U;
uint32_t x270 = 15U;
uint8_t x272 = 2U;
int8_t x295 = INT8_MIN;
int16_t x296 = INT16_MIN;
int32_t t35 = -4266;
int64_t x304 = -1LL;
volatile uint32_t x317 = 1606244184U;
volatile int16_t x324 = 10409;
uint8_t x325 = UINT8_MAX;
int32_t x359 = INT32_MIN;
int32_t x372 = INT32_MAX;
volatile int16_t x376 = -1;
static int64_t x378 = INT64_MIN;
volatile uint32_t x386 = 1U;
int32_t x408 = INT32_MIN;
volatile int16_t x410 = INT16_MIN;
int8_t x435 = 0;
static int8_t x437 = 1;
int32_t x438 = INT32_MIN;
int32_t x451 = 39;
volatile int32_t x457 = 1;
static int64_t x459 = 1357088046291LL;
uint8_t x482 = 25U;
int64_t x506 = -35LL;
int64_t x507 = INT64_MIN;
int32_t x512 = -15;
volatile int32_t t61 = 330610;
int32_t x536 = -1;
int64_t t62 = 4300LL;
int32_t x555 = -1;
int32_t t64 = -25;
uint64_t x557 = UINT64_MAX;
static uint8_t x559 = 0U;
volatile uint64_t t65 = UINT64_MAX;
int64_t x565 = 2LL;
int64_t x566 = -1LL;
volatile int64_t t66 = 5LL;
volatile int8_t x574 = -1;
int16_t x586 = INT16_MIN;
uint8_t x588 = 0U;
volatile uint64_t x589 = UINT64_MAX;
int16_t x602 = INT16_MAX;
static uint32_t x620 = UINT32_MAX;
int32_t x634 = INT32_MAX;
int32_t x636 = -32783194;
static uint8_t x649 = 3U;
int32_t x658 = INT32_MIN;
int8_t x667 = -1;
uint32_t x676 = 382U;
int8_t x683 = -15;
int64_t x684 = -662173258422208LL;
int64_t t82 = -44404LL;
volatile uint16_t x685 = UINT16_MAX;
uint16_t x698 = 1723U;
uint64_t x699 = 31LLU;
int16_t x720 = INT16_MAX;
int32_t x732 = INT32_MIN;
volatile int64_t x767 = -1LL;
static uint32_t x771 = 3446U;
static volatile int32_t t92 = 2;
uint64_t x773 = UINT64_MAX;
int64_t x774 = INT64_MIN;
volatile int64_t x778 = INT64_MIN;
static volatile uint32_t x780 = 7739602U;
int32_t x789 = 47908;
int32_t x790 = INT32_MIN;
uint16_t x797 = 21080U;
static uint8_t x799 = UINT8_MAX;
int8_t x800 = INT8_MAX;
int32_t t99 = -2194;


void f0(void) {
	int32_t x9 = INT32_MAX;
	int64_t x11 = 75337092411028LL;
	int16_t x12 = INT16_MIN;
	volatile int32_t t0 = -77288;

	t0 = (x9>>(x10<(x11-x12)));

	if (t0 != 1073741823) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = 7037406LL;
	int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	static int8_t x16 = 16;
	volatile int64_t t1 = -2779279255454LL;

	t1 = (x13>>(x14<(x15-x16)));

	if (t1 != 7037406LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x19 = INT16_MAX;
	int64_t x20 = 715867091569862LL;
	volatile int32_t t2 = 174;

	t2 = (x17>>(x18<(x19-x20)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x22 = 1;
	volatile int8_t x23 = -1;
	int32_t x24 = -3416846;
	uint64_t t3 = 21176394495836LLU;

	t3 = (x21>>(x22<(x23-x24)));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x29 = 111095U;
	int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	uint8_t x32 = UINT8_MAX;

	t4 = (x29>>(x30<(x31-x32)));

	if (t4 != 55547U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 1;
	volatile uint8_t x34 = 3U;
	int16_t x35 = INT16_MAX;
	int32_t t5 = -2634557;

	t5 = (x33>>(x34<(x35-x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	static uint32_t t6 = 1U;

	t6 = (x49>>(x50<(x51-x52)));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;

	t7 = (x61>>(x62<(x63-x64)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = 22;
	int8_t x66 = INT8_MIN;
	static int16_t x67 = INT16_MAX;
	uint32_t x68 = 10U;

	t8 = (x65>>(x66<(x67-x68)));

	if (t8 != 22) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t9 = 2426;

	t9 = (x69>>(x70<(x71-x72)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x73 = 17943976522972LLU;
	volatile int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -1;
	static int8_t x76 = INT8_MIN;

	t10 = (x73>>(x74<(x75-x76)));

	if (t10 != 17943976522972LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x81 = UINT16_MAX;
	static uint16_t x82 = 3188U;
	int8_t x83 = -6;
	volatile int32_t t11 = -63911270;

	t11 = (x81>>(x82<(x83-x84)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x97 = 5U;
	static volatile int32_t x98 = INT32_MIN;
	int16_t x100 = 1;
	volatile int32_t t12 = 224;

	t12 = (x97>>(x98<(x99-x100)));

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x109 = 104U;
	uint16_t x111 = 231U;
	int32_t x112 = 0;
	uint32_t t13 = 1007025893U;

	t13 = (x109>>(x110<(x111-x112)));

	if (t13 != 52U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 8610U;
	int32_t x116 = INT32_MAX;
	int32_t t14 = -2;

	t14 = (x113>>(x114<(x115-x116)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x121 = INT16_MAX;
	static int8_t x123 = INT8_MAX;
	int16_t x124 = -1621;
	int32_t t15 = -508421;

	t15 = (x121>>(x122<(x123-x124)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x125 = 9;
	uint32_t x126 = 14070511U;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	static int32_t t16 = 0;

	t16 = (x125>>(x126<(x127-x128)));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x137 = 2U;
	static int32_t x138 = INT32_MIN;
	int64_t x139 = -1LL;
	volatile int32_t t17 = 31485285;

	t17 = (x137>>(x138<(x139-x140)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x145 = 3455U;
	uint8_t x147 = UINT8_MAX;
	static uint64_t x148 = 95381972789LLU;
	uint32_t t18 = 92586U;

	t18 = (x145>>(x146<(x147-x148)));

	if (t18 != 3455U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x157 = INT32_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile int8_t x159 = INT8_MAX;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x157>>(x158<(x159-x160)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = 12U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t20 = -6728;

	t20 = (x161>>(x162<(x163-x164)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x165 = UINT32_MAX;
	volatile int64_t x166 = 8683LL;
	volatile int8_t x167 = -1;
	static uint8_t x168 = 28U;
	uint32_t t21 = UINT32_MAX;

	t21 = (x165>>(x166<(x167-x168)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x173 = INT8_MAX;
	int8_t x174 = 14;
	volatile int8_t x175 = 1;
	int16_t x176 = INT16_MIN;
	int32_t t22 = 440262;

	t22 = (x173>>(x174<(x175-x176)));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x181 = INT32_MAX;
	static uint64_t x182 = UINT64_MAX;
	static int16_t x183 = INT16_MIN;

	t23 = (x181>>(x182<(x183-x184)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x185 = INT16_MAX;
	static int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	static int32_t t24 = 11706;

	t24 = (x185>>(x186<(x187-x188)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x193 = INT32_MAX;
	int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MAX;
	int32_t x196 = -1;
	volatile int32_t t25 = 467034;

	t25 = (x193>>(x194<(x195-x196)));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x209 = 15;
	volatile int64_t x210 = INT64_MIN;
	static int64_t x211 = -1LL;
	static volatile int8_t x212 = INT8_MIN;
	int32_t t26 = 922540226;

	t26 = (x209>>(x210<(x211-x212)));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int16_t x215 = INT16_MAX;
	uint16_t x216 = 26462U;
	uint64_t t27 = 8373769752LLU;

	t27 = (x213>>(x214<(x215-x216)));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x222 = 237U;
	int64_t x223 = -16297981498917LL;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t28 = 31388;

	t28 = (x221>>(x222<(x223-x224)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x229 = INT32_MAX;
	int64_t x230 = -1LL;
	uint32_t x231 = 32U;
	volatile uint16_t x232 = 1U;
	int32_t t29 = 446257861;

	t29 = (x229>>(x230<(x231-x232)));

	if (t29 != 1073741823) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x247 = INT8_MIN;
	static int32_t t30 = -228249;

	t30 = (x245>>(x246<(x247-x248)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x249 = 436919701206392LLU;
	int32_t x250 = -724264;
	volatile uint32_t x251 = 31010U;
	int8_t x252 = INT8_MAX;

	t31 = (x249>>(x250<(x251-x252)));

	if (t31 != 436919701206392LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x253 = 455U;
	static int16_t x255 = INT16_MAX;
	uint32_t x256 = 95195U;
	volatile int32_t t32 = 444959879;

	t32 = (x253>>(x254<(x255-x256)));

	if (t32 != 227) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x257 = UINT32_MAX;
	static int32_t x258 = INT32_MAX;
	static int32_t x259 = -3217390;
	volatile uint8_t x260 = 8U;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x257>>(x258<(x259-x260)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x269 = 1;
	uint64_t x271 = 155095LLU;
	int32_t t34 = -13005;

	t34 = (x269>>(x270<(x271-x272)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x293 = 3U;
	int64_t x294 = INT64_MAX;

	t35 = (x293>>(x294<(x295-x296)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x301 = 341;
	uint64_t x302 = UINT64_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	volatile int32_t t36 = 29734;

	t36 = (x301>>(x302<(x303-x304)));

	if (t36 != 341) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x318 = -5;
	int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	uint32_t t37 = 279180742U;

	t37 = (x317>>(x318<(x319-x320)));

	if (t37 != 1606244184U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x321 = 27346293U;
	static int8_t x322 = INT8_MIN;
	int64_t x323 = -924469771LL;
	volatile uint32_t t38 = 1659435U;

	t38 = (x321>>(x322<(x323-x324)));

	if (t38 != 27346293U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x326 = 0U;
	static volatile int64_t x327 = -1LL;
	int32_t x328 = 347277;
	int32_t t39 = 675056;

	t39 = (x325>>(x326<(x327-x328)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x353 = INT32_MAX;
	int16_t x354 = -8224;
	volatile uint8_t x355 = 5U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t40 = 739291880;

	t40 = (x353>>(x354<(x355-x356)));

	if (t40 != 1073741823) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x357 = 204377538196545LLU;
	uint8_t x358 = 32U;
	static int32_t x360 = -29;
	static uint64_t t41 = 237013046LLU;

	t41 = (x357>>(x358<(x359-x360)));

	if (t41 != 204377538196545LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x365 = 1;
	volatile int8_t x366 = INT8_MIN;
	int16_t x367 = 3;
	int8_t x368 = 19;
	volatile int32_t t42 = 842616847;

	t42 = (x365>>(x366<(x367-x368)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x369 = 1;
	int16_t x370 = -1;
	uint8_t x371 = 1U;
	volatile int32_t t43 = -414506;

	t43 = (x369>>(x370<(x371-x372)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int32_t x374 = 2247016;
	int16_t x375 = INT16_MAX;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x373>>(x374<(x375-x376)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x377 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	static int32_t x380 = INT32_MAX;
	int64_t t45 = 488660812LL;

	t45 = (x377>>(x378<(x379-x380)));

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint8_t x387 = 11U;
	int64_t x388 = -1267099921579175LL;
	volatile uint64_t t46 = 5510633616925LLU;

	t46 = (x385>>(x386<(x387-x388)));

	if (t46 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x401 = UINT16_MAX;
	static volatile int8_t x402 = INT8_MAX;
	uint16_t x403 = 4201U;
	static uint64_t x404 = 1438979840996LLU;
	static volatile int32_t t47 = 8122784;

	t47 = (x401>>(x402<(x403-x404)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MIN;
	int32_t x407 = -1;
	static volatile uint32_t t48 = 65U;

	t48 = (x405>>(x406<(x407-x408)));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x409 = 3533864888LLU;
	int8_t x411 = 21;
	int16_t x412 = INT16_MIN;
	static uint64_t t49 = 0LLU;

	t49 = (x409>>(x410<(x411-x412)));

	if (t49 != 1766932444LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x433 = 26846U;
	int16_t x434 = 7;
	volatile uint16_t x436 = 31156U;
	static volatile uint32_t t50 = 278825196U;

	t50 = (x433>>(x434<(x435-x436)));

	if (t50 != 26846U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x439 = 21;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t51 = -5692;

	t51 = (x437>>(x438<(x439-x440)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x449 = 1;
	uint64_t x450 = 3752377176205453184LLU;
	uint32_t x452 = 6273U;
	int32_t t52 = -1159070;

	t52 = (x449>>(x450<(x451-x452)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x453 = 454680228250LL;
	volatile int32_t x454 = INT32_MIN;
	int32_t x455 = -1;
	uint64_t x456 = 2862458314238289577LLU;
	static volatile int64_t t53 = 5LL;

	t53 = (x453>>(x454<(x455-x456)));

	if (t53 != 454680228250LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x458 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	volatile int32_t t54 = -64202;

	t54 = (x457>>(x458<(x459-x460)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x461 = 30942913;
	uint16_t x462 = 68U;
	int16_t x463 = INT16_MAX;
	volatile uint32_t x464 = 51433U;
	volatile int32_t t55 = 11;

	t55 = (x461>>(x462<(x463-x464)));

	if (t55 != 15471456) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x477 = 427LLU;
	uint64_t x478 = 4386180LLU;
	volatile uint32_t x479 = 3486794U;
	int8_t x480 = -11;
	uint64_t t56 = 37LLU;

	t56 = (x477>>(x478<(x479-x480)));

	if (t56 != 427LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x481 = INT8_MAX;
	int64_t x483 = -1LL;
	static volatile int8_t x484 = INT8_MAX;
	int32_t t57 = -3;

	t57 = (x481>>(x482<(x483-x484)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x485 = 31851979044133272LLU;
	static uint32_t x486 = 7045868U;
	volatile uint32_t x487 = UINT32_MAX;
	static int64_t x488 = -31427757023LL;
	uint64_t t58 = 5732803LLU;

	t58 = (x485>>(x486<(x487-x488)));

	if (t58 != 15925989522066636LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x505 = 8825U;
	int8_t x508 = -49;
	volatile uint32_t t59 = 6129711U;

	t59 = (x505>>(x506<(x507-x508)));

	if (t59 != 8825U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x509 = 1864336608476LLU;
	int32_t x510 = INT32_MIN;
	static int8_t x511 = INT8_MIN;
	volatile uint64_t t60 = 10400167433523LLU;

	t60 = (x509>>(x510<(x511-x512)));

	if (t60 != 932168304238LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x529 = INT8_MAX;
	static int64_t x530 = -1LL;
	static int16_t x531 = INT16_MIN;
	static int64_t x532 = INT64_MIN;

	t61 = (x529>>(x530<(x531-x532)));

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x533 = 57931952797LL;
	int64_t x534 = INT64_MAX;
	int64_t x535 = 143537LL;

	t62 = (x533>>(x534<(x535-x536)));

	if (t62 != 57931952797LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x545 = UINT64_MAX;
	static int64_t x546 = INT64_MAX;
	uint16_t x547 = 5551U;
	volatile uint16_t x548 = 443U;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x545>>(x546<(x547-x548)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x553 = UINT8_MAX;
	int32_t x554 = INT32_MIN;
	int32_t x556 = 2747681;

	t64 = (x553>>(x554<(x555-x556)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x558 = 42;
	int8_t x560 = INT8_MAX;

	t65 = (x557>>(x558<(x559-x560)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x567 = INT64_MAX;
	static uint8_t x568 = UINT8_MAX;

	t66 = (x565>>(x566<(x567-x568)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x573 = 16U;
	int32_t x575 = 1870;
	static volatile int16_t x576 = -1;
	volatile int32_t t67 = 654843369;

	t67 = (x573>>(x574<(x575-x576)));

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x585 = UINT32_MAX;
	static int8_t x587 = INT8_MAX;
	uint32_t t68 = 3U;

	t68 = (x585>>(x586<(x587-x588)));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x590 = INT8_MIN;
	int32_t x591 = 220148496;
	uint64_t x592 = 60451521651483048LLU;
	uint64_t t69 = UINT64_MAX;

	t69 = (x589>>(x590<(x591-x592)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x597 = UINT16_MAX;
	static int8_t x598 = INT8_MIN;
	uint8_t x599 = UINT8_MAX;
	uint32_t x600 = UINT32_MAX;
	volatile int32_t t70 = 53609243;

	t70 = (x597>>(x598<(x599-x600)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x601 = 15;
	uint16_t x603 = UINT16_MAX;
	volatile int16_t x604 = 1099;
	volatile int32_t t71 = 34;

	t71 = (x601>>(x602<(x603-x604)));

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x617 = 443238U;
	uint32_t x618 = 0U;
	volatile uint16_t x619 = UINT16_MAX;
	uint32_t t72 = 169U;

	t72 = (x617>>(x618<(x619-x620)));

	if (t72 != 221619U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x633 = 0U;
	int16_t x635 = -1;
	static volatile int32_t t73 = -7052637;

	t73 = (x633>>(x634<(x635-x636)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x637 = INT16_MAX;
	volatile uint16_t x638 = UINT16_MAX;
	uint64_t x639 = UINT64_MAX;
	int8_t x640 = 3;
	int32_t t74 = -1013983116;

	t74 = (x637>>(x638<(x639-x640)));

	if (t74 != 16383) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x650 = INT8_MIN;
	int64_t x651 = INT64_MIN;
	volatile int16_t x652 = -197;
	int32_t t75 = -28;

	t75 = (x649>>(x650<(x651-x652)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x653 = INT8_MAX;
	volatile int64_t x654 = 313434020027455LL;
	uint8_t x655 = UINT8_MAX;
	static volatile uint32_t x656 = UINT32_MAX;
	static volatile int32_t t76 = 11990;

	t76 = (x653>>(x654<(x655-x656)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x657 = 2049799U;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MIN;
	uint32_t t77 = 907606U;

	t77 = (x657>>(x658<(x659-x660)));

	if (t77 != 2049799U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x665 = INT64_MAX;
	volatile int8_t x666 = -1;
	int64_t x668 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = (x665>>(x666<(x667-x668)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x669 = INT64_MAX;
	volatile uint32_t x670 = 226846403U;
	uint16_t x671 = 6299U;
	uint64_t x672 = 3238LLU;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x669>>(x670<(x671-x672)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x673 = 1586LLU;
	volatile uint8_t x674 = 0U;
	int32_t x675 = 3310;
	volatile uint64_t t80 = 4505385LLU;

	t80 = (x673>>(x674<(x675-x676)));

	if (t80 != 793LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x677 = 259U;
	static volatile uint8_t x678 = UINT8_MAX;
	volatile uint32_t x679 = 77561848U;
	static int64_t x680 = -1LL;
	int32_t t81 = -1276;

	t81 = (x677>>(x678<(x679-x680)));

	if (t81 != 129) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x681 = INT64_MAX;
	volatile int64_t x682 = -4187826004809634723LL;

	t82 = (x681>>(x682<(x683-x684)));

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x686 = -492;
	static volatile uint8_t x687 = 8U;
	volatile uint16_t x688 = UINT16_MAX;
	int32_t t83 = -397898;

	t83 = (x685>>(x686<(x687-x688)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x697 = UINT32_MAX;
	volatile int8_t x700 = -1;
	uint32_t t84 = UINT32_MAX;

	t84 = (x697>>(x698<(x699-x700)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x701 = 10U;
	uint8_t x702 = 17U;
	uint16_t x703 = UINT16_MAX;
	uint16_t x704 = UINT16_MAX;
	static volatile uint32_t t85 = 0U;

	t85 = (x701>>(x702<(x703-x704)));

	if (t85 != 10U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x713 = 2;
	int64_t x714 = -1LL;
	uint64_t x715 = 17316247987080742LLU;
	volatile int16_t x716 = INT16_MAX;
	volatile int32_t t86 = -41;

	t86 = (x713>>(x714<(x715-x716)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x717 = 3;
	int64_t x718 = -1LL;
	uint32_t x719 = 738522U;
	volatile int32_t t87 = -1;

	t87 = (x717>>(x718<(x719-x720)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x721 = 1810332439LL;
	static volatile int8_t x722 = -1;
	int16_t x723 = -1;
	int16_t x724 = 0;
	int64_t t88 = 27977005162447LL;

	t88 = (x721>>(x722<(x723-x724)));

	if (t88 != 1810332439LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x729 = INT8_MAX;
	int64_t x730 = INT64_MIN;
	int32_t x731 = -251602699;
	volatile int32_t t89 = 43880072;

	t89 = (x729>>(x730<(x731-x732)));

	if (t89 != 63) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x757 = INT8_MAX;
	int64_t x758 = INT64_MIN;
	int64_t x759 = -12928857136305LL;
	int16_t x760 = INT16_MIN;
	volatile int32_t t90 = 98849;

	t90 = (x757>>(x758<(x759-x760)));

	if (t90 != 63) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x765 = 31347U;
	volatile uint16_t x766 = 7698U;
	int16_t x768 = 1;
	volatile uint32_t t91 = 125595717U;

	t91 = (x765>>(x766<(x767-x768)));

	if (t91 != 31347U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x769 = INT8_MAX;
	uint8_t x770 = UINT8_MAX;
	volatile uint64_t x772 = UINT64_MAX;

	t92 = (x769>>(x770<(x771-x772)));

	if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x775 = INT32_MAX;
	int16_t x776 = 9;
	uint64_t t93 = 7542084078367036LLU;

	t93 = (x773>>(x774<(x775-x776)));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x777 = 9;
	int8_t x779 = -11;
	int32_t t94 = -58929;

	t94 = (x777>>(x778<(x779-x780)));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x781 = UINT64_MAX;
	int64_t x782 = -101970437746322LL;
	uint16_t x783 = 55U;
	int32_t x784 = -1;
	uint64_t t95 = 3210772752023354LLU;

	t95 = (x781>>(x782<(x783-x784)));

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x791 = -1;
	int64_t x792 = -2727687739029LL;
	volatile int32_t t96 = -18118;

	t96 = (x789>>(x790<(x791-x792)));

	if (t96 != 23954) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x793 = INT8_MAX;
	static uint64_t x794 = 98492072LLU;
	int16_t x795 = INT16_MAX;
	int32_t x796 = 116734772;
	int32_t t97 = -2393;

	t97 = (x793>>(x794<(x795-x796)));

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x798 = 439576566LL;
	volatile int32_t t98 = -45063;

	t98 = (x797>>(x798<(x799-x800)));

	if (t98 != 21080) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x817 = 0;
	int16_t x818 = INT16_MAX;
	uint64_t x819 = UINT64_MAX;
	int16_t x820 = INT16_MIN;

	t99 = (x817>>(x818<(x819-x820)));

	if (t99 != 0) { NG(); } else { ; }
	
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
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

