#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -4;
int32_t t1 = -57;
static volatile int32_t x31 = -1;
int32_t x32 = -1;
int16_t x33 = -1;
uint16_t x42 = 0U;
uint16_t x45 = 3138U;
static uint16_t x47 = UINT16_MAX;
uint32_t x48 = 139615266U;
static volatile int32_t x50 = INT32_MAX;
static uint64_t x52 = 28038378168707LLU;
volatile int64_t t7 = INT64_MIN;
int64_t x54 = INT64_MIN;
static int8_t x56 = INT8_MAX;
int32_t x67 = -1;
int64_t x75 = -1LL;
int32_t x88 = -28;
int64_t x92 = -9939624828114LL;
int64_t x95 = INT64_MAX;
volatile int64_t x96 = 65722663LL;
uint8_t x97 = 49U;
uint8_t x111 = 5U;
int8_t x118 = INT8_MAX;
volatile int16_t x121 = INT16_MAX;
volatile uint32_t x122 = UINT32_MAX;
int64_t x128 = INT64_MIN;
int16_t x135 = INT16_MIN;
int64_t x138 = INT64_MIN;
static int8_t x145 = INT8_MAX;
int64_t t27 = -251502558569LL;
int8_t x155 = INT8_MIN;
volatile int64_t x157 = 3259461192LL;
int16_t x160 = INT16_MAX;
int64_t t29 = 3LL;
uint64_t x165 = UINT64_MAX;
static volatile int64_t x166 = INT64_MIN;
volatile uint64_t t30 = UINT64_MAX;
volatile int64_t x171 = -1315738675455157LL;
static int32_t t31 = INT32_MIN;
uint32_t x173 = UINT32_MAX;
int64_t x176 = INT64_MIN;
volatile uint32_t t32 = UINT32_MAX;
static int64_t x195 = -34938483LL;
volatile int32_t t35 = -165012;
int64_t t36 = 20444LL;
int8_t x249 = 13;
static int32_t x252 = 1;
uint64_t x273 = UINT64_MAX;
int8_t x275 = 8;
volatile uint64_t t39 = UINT64_MAX;
uint32_t x301 = UINT32_MAX;
int64_t x326 = -1LL;
volatile int32_t t46 = 567390526;
static int64_t x362 = -1LL;
volatile uint32_t x364 = 1U;
int64_t t47 = INT64_MAX;
uint8_t x388 = 1U;
static volatile int16_t x400 = INT16_MIN;
int8_t x409 = INT8_MIN;
int32_t x435 = 3561474;
static volatile uint32_t x458 = UINT32_MAX;
uint64_t x463 = 21392045LLU;
static int32_t x464 = INT32_MAX;
volatile uint16_t x465 = 1403U;
int16_t x467 = INT16_MAX;
volatile int32_t t55 = -1532223;
static volatile uint8_t x481 = UINT8_MAX;
static uint64_t x482 = 69083LLU;
int8_t x499 = INT8_MIN;
static int32_t x501 = INT32_MIN;
int8_t x503 = 3;
uint16_t x536 = 0U;
static int32_t t64 = 8294;
uint32_t t65 = 532566974U;
static uint8_t x541 = 69U;
int32_t t66 = 9;
uint16_t x573 = 185U;
static volatile int32_t x574 = INT32_MIN;
uint8_t x601 = 21U;
static uint16_t x602 = UINT16_MAX;
volatile int16_t x603 = INT16_MIN;
uint32_t x604 = 379407975U;
int64_t x607 = INT64_MAX;
int16_t x608 = -1041;
static int32_t t74 = -958;
int32_t x623 = INT32_MIN;
volatile int8_t x624 = INT8_MIN;
static int64_t x659 = -1LL;
int64_t x660 = INT64_MAX;
volatile int16_t x664 = INT16_MAX;
int32_t x668 = -1;
volatile int32_t t79 = 1;
uint16_t x677 = UINT16_MAX;
static int32_t t83 = 32340695;
static int64_t x705 = INT64_MIN;
int64_t x706 = INT64_MIN;
uint16_t x711 = 5091U;
int32_t t85 = -3495;
static uint16_t x715 = 801U;
int8_t x721 = INT8_MIN;
int32_t t88 = 13444660;
int64_t x736 = INT64_MAX;
uint8_t x744 = 0U;
int32_t x749 = 18210;
int64_t x770 = -675004083924800393LL;
volatile int16_t x771 = INT16_MIN;
static volatile uint32_t x777 = 859214487U;
static int16_t x780 = -95;
volatile int32_t x785 = INT32_MAX;
volatile int64_t x818 = -84435855683LL;
static uint16_t x820 = 13383U;
volatile int32_t t98 = -521233877;


void f0(void) {
	uint16_t x9 = 59U;
	uint16_t x11 = 1835U;
	uint16_t x12 = 5460U;
	int32_t t0 = 44665932;

	t0 = (x9/(x10<(x11&x12)));

	if (t0 != 59) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = 1014;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	volatile int8_t x16 = 0;

	t1 = (x13/(x14<(x15&x16)));

	if (t1 != 1014) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x21 = 91359817854571LLU;
	int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MAX;
	volatile uint64_t t2 = 683415LLU;

	t2 = (x21/(x22<(x23&x24)));

	if (t2 != 91359817854571LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = INT64_MAX;
	uint32_t x30 = 291580684U;
	int64_t t3 = INT64_MAX;

	t3 = (x29/(x30<(x31&x32)));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x34 = 5369466272749LLU;
	volatile int64_t x35 = -1LL;
	static int8_t x36 = -1;
	static volatile int32_t t4 = -1;

	t4 = (x33/(x34<(x35&x36)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 13;
	uint32_t x43 = 258480U;
	uint8_t x44 = 46U;
	int32_t t5 = -871;

	t5 = (x41/(x42<(x43&x44)));

	if (t5 != 13) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x46 = 2U;
	static int32_t t6 = 34914926;

	t6 = (x45/(x46<(x47&x48)));

	if (t6 != 3138) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x49 = INT64_MIN;
	static int16_t x51 = INT16_MIN;

	t7 = (x49/(x50<(x51&x52)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = UINT16_MAX;
	static uint16_t x55 = 4771U;
	static int32_t t8 = 6;

	t8 = (x53/(x54<(x55&x56)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	int16_t x68 = -1;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x65/(x66<(x67&x68)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = 528461944427479LL;
	uint32_t x70 = 0U;
	volatile int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	int64_t t10 = 3835273151552LL;

	t10 = (x69/(x70<(x71&x72)));

	if (t10 != 528461944427479LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = INT64_MIN;
	static int32_t x74 = -18692817;
	int8_t x76 = -1;
	static int64_t t11 = INT64_MIN;

	t11 = (x73/(x74<(x75&x76)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -18596LL;
	int8_t x78 = INT8_MAX;
	static int8_t x79 = INT8_MIN;
	uint32_t x80 = 37477U;
	int64_t t12 = 20172832360844414LL;

	t12 = (x77/(x78<(x79&x80)));

	if (t12 != -18596LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = UINT16_MAX;
	static int64_t x86 = INT64_MIN;
	int8_t x87 = -1;
	static int32_t t13 = 417940352;

	t13 = (x85/(x86<(x87&x88)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x89 = INT32_MAX;
	static uint8_t x90 = 0U;
	uint32_t x91 = 170147907U;
	volatile int32_t t14 = INT32_MAX;

	t14 = (x89/(x90<(x91&x92)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x93 = INT16_MIN;
	volatile int8_t x94 = INT8_MAX;
	volatile int32_t t15 = -24732699;

	t15 = (x93/(x94<(x95&x96)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x98 = INT64_MIN;
	volatile int8_t x99 = -1;
	uint16_t x100 = 97U;
	int32_t t16 = 13123599;

	t16 = (x97/(x98<(x99&x100)));

	if (t16 != 49) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = INT16_MIN;
	static int64_t x102 = INT64_MIN;
	static uint32_t x103 = 1U;
	static volatile int16_t x104 = -1;
	static volatile int32_t t17 = -2597081;

	t17 = (x101/(x102<(x103&x104)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x109 = 19740U;
	static int16_t x110 = -1233;
	int32_t x112 = INT32_MAX;
	volatile uint32_t t18 = 5980094U;

	t18 = (x109/(x110<(x111&x112)));

	if (t18 != 19740U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int64_t t19 = -2375161198005139LL;

	t19 = (x113/(x114<(x115&x116)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MIN;
	int32_t x119 = 435016;
	int32_t x120 = -9410167;
	int32_t t20 = INT32_MIN;

	t20 = (x117/(x118<(x119&x120)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x123 = UINT64_MAX;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t21 = 3723162;

	t21 = (x121/(x122<(x123&x124)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	static volatile int64_t x127 = 1LL;
	static int32_t t22 = -625987363;

	t22 = (x125/(x126<(x127&x128)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x129 = 39U;
	volatile int64_t x130 = -14837016372LL;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;
	volatile int32_t t23 = 9;

	t23 = (x129/(x130<(x131&x132)));

	if (t23 != 39) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x133 = INT16_MIN;
	uint32_t x134 = 0U;
	int16_t x136 = INT16_MIN;
	volatile int32_t t24 = -26047944;

	t24 = (x133/(x134<(x135&x136)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = -12;
	uint32_t x139 = UINT32_MAX;
	uint16_t x140 = UINT16_MAX;
	static volatile int32_t t25 = -794034097;

	t25 = (x137/(x138<(x139&x140)));

	if (t25 != -12) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t26 = 9700;

	t26 = (x145/(x146<(x147&x148)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x149 = -58804LL;
	int64_t x150 = INT64_MIN;
	static volatile int8_t x151 = -1;
	volatile uint8_t x152 = 58U;

	t27 = (x149/(x150<(x151&x152)));

	if (t27 != -58804LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = INT16_MIN;
	int8_t x156 = INT8_MAX;
	static volatile int32_t t28 = -1013910;

	t28 = (x153/(x154<(x155&x156)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x158 = -1;
	uint8_t x159 = UINT8_MAX;

	t29 = (x157/(x158<(x159&x160)));

	if (t29 != 3259461192LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x167 = INT32_MIN;
	volatile int32_t x168 = INT32_MAX;

	t30 = (x165/(x166<(x167&x168)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 0;
	volatile int32_t x172 = 1;

	t31 = (x169/(x170<(x171&x172)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x174 = INT64_MIN;
	static volatile int32_t x175 = 179;

	t32 = (x173/(x174<(x175&x176)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x189 = 27U;
	int32_t x190 = -1;
	int32_t x191 = 6087351;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t33 = 75363;

	t33 = (x189/(x190<(x191&x192)));

	if (t33 != 27) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MIN;
	uint8_t x196 = 1U;
	static volatile int32_t t34 = 2;

	t34 = (x193/(x194<(x195&x196)));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x197 = 13U;
	int32_t x198 = 1;
	int8_t x199 = -1;
	volatile int32_t x200 = 15;

	t35 = (x197/(x198<(x199&x200)));

	if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x221 = -1LL;
	int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	int32_t x224 = 907711;

	t36 = (x221/(x222<(x223&x224)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x250 = INT16_MIN;
	static int8_t x251 = INT8_MAX;
	volatile int32_t t37 = -6487346;

	t37 = (x249/(x250<(x251&x252)));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x265 = INT64_MAX;
	volatile uint32_t x266 = 1016384U;
	int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	int64_t t38 = INT64_MAX;

	t38 = (x265/(x266<(x267&x268)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x274 = INT16_MIN;
	static int32_t x276 = INT32_MIN;

	t39 = (x273/(x274<(x275&x276)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x281/(x282<(x283&x284)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x289 = -1;
	int8_t x290 = 0;
	int64_t x291 = 90500LL;
	static uint32_t x292 = 61101354U;
	volatile int32_t t41 = -8809;

	t41 = (x289/(x290<(x291&x292)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x302 = -9;
	int32_t x303 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x301/(x302<(x303&x304)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x309 = 9528U;
	static volatile int8_t x310 = -2;
	uint8_t x311 = UINT8_MAX;
	static uint16_t x312 = 1914U;
	int32_t t43 = -1414;

	t43 = (x309/(x310<(x311&x312)));

	if (t43 != 9528) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x325 = -2037LL;
	int32_t x327 = INT32_MIN;
	volatile int16_t x328 = INT16_MAX;
	static volatile int64_t t44 = 93442LL;

	t44 = (x325/(x326<(x327&x328)));

	if (t44 != -2037LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x329 = 1895503279U;
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = -7710;
	uint64_t x332 = 288400330039531LLU;
	volatile uint32_t t45 = 125042U;

	t45 = (x329/(x330<(x331&x332)));

	if (t45 != 1895503279U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x337 = 25;
	volatile int64_t x338 = 0LL;
	uint32_t x339 = 195223367U;
	volatile int32_t x340 = -1118;

	t46 = (x337/(x338<(x339&x340)));

	if (t46 != 25) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x361 = INT64_MAX;
	int64_t x363 = INT64_MIN;

	t47 = (x361/(x362<(x363&x364)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x365 = 31U;
	uint32_t x366 = 1198955U;
	uint32_t x367 = 2319083U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t48 = -279;

	t48 = (x365/(x366<(x367&x368)));

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MAX;
	volatile int32_t t49 = 35;

	t49 = (x385/(x386<(x387&x388)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 1259750587U;
	static int32_t t50 = -38126266;

	t50 = (x397/(x398<(x399&x400)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x410 = -1;
	int64_t x411 = INT64_MIN;
	static volatile int8_t x412 = 28;
	volatile int32_t t51 = 5866;

	t51 = (x409/(x410<(x411&x412)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x433 = UINT8_MAX;
	int8_t x434 = INT8_MIN;
	int32_t x436 = 19452819;
	volatile int32_t t52 = 26404;

	t52 = (x433/(x434<(x435&x436)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x457 = 4;
	uint64_t x459 = 2703121640727748758LLU;
	static int16_t x460 = -1;
	int32_t t53 = -10;

	t53 = (x457/(x458<(x459&x460)));

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x461 = INT16_MAX;
	int16_t x462 = 2019;
	static volatile int32_t t54 = -375;

	t54 = (x461/(x462<(x463&x464)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x466 = 2;
	int64_t x468 = -103324LL;

	t55 = (x465/(x466<(x467&x468)));

	if (t55 != 1403) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x473 = -1;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t56 = 13384;

	t56 = (x473/(x474<(x475&x476)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x483 = -1;
	int16_t x484 = -303;
	static int32_t t57 = -3;

	t57 = (x481/(x482<(x483&x484)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x485 = -9;
	int64_t x486 = INT64_MIN;
	int64_t x487 = INT64_MIN;
	volatile uint8_t x488 = UINT8_MAX;
	volatile int32_t t58 = 11;

	t58 = (x485/(x486<(x487&x488)));

	if (t58 != -9) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x489 = INT32_MIN;
	int32_t x490 = -2;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = -7560;
	static int32_t t59 = INT32_MIN;

	t59 = (x489/(x490<(x491&x492)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x493 = INT32_MAX;
	int8_t x494 = INT8_MAX;
	static int64_t x495 = INT64_MAX;
	volatile int8_t x496 = INT8_MIN;
	int32_t t60 = INT32_MAX;

	t60 = (x493/(x494<(x495&x496)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x497 = 2U;
	volatile int16_t x498 = INT16_MAX;
	static int64_t x500 = 7807508411LL;
	volatile int32_t t61 = 56;

	t61 = (x497/(x498<(x499&x500)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x502 = INT32_MIN;
	int8_t x504 = INT8_MIN;
	static volatile int32_t t62 = INT32_MIN;

	t62 = (x501/(x502<(x503&x504)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x525 = 19324969287506042LLU;
	int16_t x526 = INT16_MIN;
	uint8_t x527 = 0U;
	volatile int8_t x528 = INT8_MIN;
	volatile uint64_t t63 = 31433LLU;

	t63 = (x525/(x526<(x527&x528)));

	if (t63 != 19324969287506042LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x533 = INT16_MIN;
	static int32_t x534 = INT32_MIN;
	int8_t x535 = INT8_MAX;

	t64 = (x533/(x534<(x535&x536)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x537 = 283820154U;
	static int8_t x538 = INT8_MIN;
	int8_t x539 = -1;
	static uint64_t x540 = UINT64_MAX;

	t65 = (x537/(x538<(x539&x540)));

	if (t65 != 283820154U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x542 = INT8_MIN;
	volatile int32_t x543 = 2898;
	int64_t x544 = -1LL;

	t66 = (x541/(x542<(x543&x544)));

	if (t66 != 69) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x549 = INT64_MIN;
	static uint32_t x550 = UINT32_MAX;
	volatile int16_t x551 = INT16_MIN;
	int64_t x552 = 3553153746174LL;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x549/(x550<(x551&x552)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x565 = UINT16_MAX;
	int32_t x566 = INT32_MIN;
	static int8_t x567 = -1;
	int64_t x568 = INT64_MAX;
	volatile int32_t t68 = -411;

	t68 = (x565/(x566<(x567&x568)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x575 = 146U;
	int8_t x576 = 1;
	static int32_t t69 = 1;

	t69 = (x573/(x574<(x575&x576)));

	if (t69 != 185) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MIN;
	uint8_t x579 = UINT8_MAX;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t70 = 6428;

	t70 = (x577/(x578<(x579&x580)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x589 = -14LL;
	int32_t x590 = 0;
	int32_t x591 = -1;
	static volatile int8_t x592 = 2;
	static int64_t t71 = 14969134LL;

	t71 = (x589/(x590<(x591&x592)));

	if (t71 != -14LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t t72 = 37548206;

	t72 = (x601/(x602<(x603&x604)));

	if (t72 != 21) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x605 = 1354U;
	int16_t x606 = INT16_MAX;
	volatile int32_t t73 = -1100;

	t73 = (x605/(x606<(x607&x608)));

	if (t73 != 1354) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x613 = -29;
	static int8_t x614 = INT8_MIN;
	static volatile int8_t x615 = -1;
	int32_t x616 = INT32_MAX;

	t74 = (x613/(x614<(x615&x616)));

	if (t74 != -29) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x621 = 48;
	static uint32_t x622 = 28089U;
	volatile int32_t t75 = 15545418;

	t75 = (x621/(x622<(x623&x624)));

	if (t75 != 48) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x629 = 3LLU;
	static volatile int8_t x630 = -29;
	int64_t x631 = INT64_MAX;
	int8_t x632 = INT8_MAX;
	volatile uint64_t t76 = 498446944227LLU;

	t76 = (x629/(x630<(x631&x632)));

	if (t76 != 3LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x657 = 4275114;
	int64_t x658 = -1389883359142959LL;
	static int32_t t77 = 9724;

	t77 = (x657/(x658<(x659&x660)));

	if (t77 != 4275114) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x661 = 13U;
	uint16_t x662 = 24971U;
	int32_t x663 = -430205;
	int32_t t78 = 194808;

	t78 = (x661/(x662<(x663&x664)));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x665 = -1;
	int64_t x666 = INT64_MIN;
	int16_t x667 = INT16_MAX;

	t79 = (x665/(x666<(x667&x668)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x669 = 12U;
	uint8_t x670 = UINT8_MAX;
	uint64_t x671 = UINT64_MAX;
	uint64_t x672 = 2164LLU;
	volatile uint32_t t80 = 13855230U;

	t80 = (x669/(x670<(x671&x672)));

	if (t80 != 12U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x678 = INT32_MAX;
	int8_t x679 = -1;
	uint64_t x680 = 6661498759197047006LLU;
	static int32_t t81 = -267652613;

	t81 = (x677/(x678<(x679&x680)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x689 = 2311U;
	volatile int8_t x690 = 1;
	int16_t x691 = INT16_MAX;
	static int64_t x692 = 52387957LL;
	static volatile int32_t t82 = 14;

	t82 = (x689/(x690<(x691&x692)));

	if (t82 != 2311) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	uint8_t x703 = 96U;
	static uint32_t x704 = 7058U;

	t83 = (x701/(x702<(x703&x704)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x707 = 482U;
	uint16_t x708 = 15U;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x705/(x706<(x707&x708)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x709 = -1;
	uint8_t x710 = 1U;
	static int64_t x712 = 1903020229869LL;

	t85 = (x709/(x710<(x711&x712)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x713 = 1LLU;
	static int64_t x714 = -1LL;
	int32_t x716 = INT32_MIN;
	static uint64_t t86 = 134666889767LLU;

	t86 = (x713/(x714<(x715&x716)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x717 = 75U;
	volatile int16_t x718 = INT16_MIN;
	int16_t x719 = INT16_MIN;
	static int8_t x720 = INT8_MAX;
	volatile int32_t t87 = 14;

	t87 = (x717/(x718<(x719&x720)));

	if (t87 != 75) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x722 = 59865197630LLU;
	int16_t x723 = INT16_MIN;
	int32_t x724 = -1;

	t88 = (x721/(x722<(x723&x724)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x733 = -7;
	static int32_t x734 = INT32_MAX;
	int16_t x735 = INT16_MIN;
	volatile int32_t t89 = -39;

	t89 = (x733/(x734<(x735&x736)));

	if (t89 != -7) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x741 = INT16_MIN;
	volatile int16_t x742 = -1;
	uint16_t x743 = 3253U;
	static volatile int32_t t90 = 26630;

	t90 = (x741/(x742<(x743&x744)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x745 = -21;
	uint8_t x746 = UINT8_MAX;
	uint64_t x747 = UINT64_MAX;
	int8_t x748 = INT8_MIN;
	int32_t t91 = -7111609;

	t91 = (x745/(x746<(x747&x748)));

	if (t91 != -21) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x750 = INT8_MIN;
	int32_t x751 = INT32_MAX;
	int64_t x752 = INT64_MIN;
	int32_t t92 = -469;

	t92 = (x749/(x750<(x751&x752)));

	if (t92 != 18210) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x769 = INT8_MIN;
	int8_t x772 = INT8_MIN;
	int32_t t93 = 26;

	t93 = (x769/(x770<(x771&x772)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x778 = 4U;
	int8_t x779 = INT8_MAX;
	uint32_t t94 = 393U;

	t94 = (x777/(x778<(x779&x780)));

	if (t94 != 859214487U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x781 = 386246743971LLU;
	static volatile int32_t x782 = INT32_MAX;
	int16_t x783 = INT16_MIN;
	uint64_t x784 = UINT64_MAX;
	uint64_t t95 = 1LLU;

	t95 = (x781/(x782<(x783&x784)));

	if (t95 != 386246743971LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x786 = 1;
	int64_t x787 = 9LL;
	static uint64_t x788 = 168LLU;
	int32_t t96 = INT32_MAX;

	t96 = (x785/(x786<(x787&x788)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x801 = -1;
	uint16_t x802 = 47U;
	volatile uint64_t x803 = UINT64_MAX;
	static int64_t x804 = -718317115518633856LL;
	static volatile int32_t t97 = 886278;

	t97 = (x801/(x802<(x803&x804)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x817 = UINT8_MAX;
	int64_t x819 = -1LL;

	t98 = (x817/(x818<(x819&x820)));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x837 = -1;
	static int64_t x838 = INT64_MIN;
	int16_t x839 = INT16_MIN;
	static int32_t x840 = -7990;
	int32_t t99 = -560;

	t99 = (x837/(x838<(x839&x840)));

	if (t99 != -1) { NG(); } else { ; }
	
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

