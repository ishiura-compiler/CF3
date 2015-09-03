#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = UINT16_MAX;
volatile uint16_t x22 = 6214U;
int16_t x27 = INT16_MIN;
volatile int8_t x28 = INT8_MIN;
uint16_t x29 = 0U;
int32_t x31 = INT32_MIN;
int8_t x56 = 1;
uint8_t x63 = 81U;
int8_t x90 = INT8_MIN;
volatile int8_t x104 = 1;
volatile uint32_t t14 = UINT32_MAX;
int8_t x109 = INT8_MAX;
uint8_t x111 = 2U;
uint64_t x113 = 2230866333546835LLU;
uint8_t x129 = 36U;
volatile int16_t x144 = 4841;
int64_t x148 = INT64_MIN;
uint8_t x162 = 0U;
static volatile int64_t x163 = -1LL;
int8_t x167 = INT8_MIN;
int32_t t25 = 1240;
volatile int64_t t26 = 8328224763917172LL;
int16_t x173 = 37;
uint16_t x177 = 26U;
volatile int64_t x185 = INT64_MAX;
uint8_t x210 = UINT8_MAX;
volatile uint64_t x217 = 53284358961154LLU;
int64_t x218 = INT64_MIN;
uint16_t x220 = 6742U;
int16_t x233 = INT16_MAX;
uint8_t x238 = 5U;
uint64_t t38 = UINT64_MAX;
volatile uint64_t t40 = 767058LLU;
uint16_t x277 = 27171U;
uint64_t x279 = UINT64_MAX;
static uint64_t t42 = 1550532LLU;
static uint32_t t44 = 137U;
uint32_t x314 = 30314U;
uint64_t x316 = 4020540341LLU;
volatile uint64_t t47 = 96448902LLU;
uint8_t x323 = 1U;
volatile int64_t t49 = 3402167368LL;
int8_t x333 = INT8_MIN;
int8_t x335 = -5;
volatile int32_t t52 = 3226;
int64_t x337 = 1781679728612516821LL;
static volatile uint64_t x340 = 34437536633369LLU;
volatile int32_t x342 = -34;
int16_t x344 = INT16_MIN;
uint64_t t54 = 2782LLU;
int8_t x345 = 4;
int32_t x347 = 51;
int32_t t55 = -1;
uint64_t x349 = UINT64_MAX;
int16_t x350 = INT16_MIN;
int8_t x364 = INT8_MIN;
volatile int8_t x366 = -1;
volatile int64_t t60 = -127522LL;
volatile int32_t x374 = INT32_MAX;
static int64_t x393 = -53102972LL;
static int8_t x401 = -1;
static uint64_t x402 = UINT64_MAX;
volatile uint64_t t66 = 5500LLU;
int16_t x417 = 1;
uint64_t x418 = 2LLU;
int64_t x431 = -1LL;
int16_t x433 = 4226;
uint32_t x438 = 977554U;
int32_t x440 = -471;
int32_t x444 = -1;
uint32_t x447 = 23741U;
uint64_t x455 = 3063767LLU;
int16_t x479 = -1;
int8_t x484 = -1;
volatile uint64_t x485 = UINT64_MAX;
static uint64_t t80 = 21277300LLU;
int64_t x501 = INT64_MIN;
uint8_t x507 = UINT8_MAX;
int8_t x508 = -1;
int16_t x513 = INT16_MIN;
int16_t x530 = INT16_MIN;
volatile uint64_t x532 = 22879524625129893LLU;
static int16_t x533 = INT16_MIN;
static volatile int64_t t89 = -59808452LL;
volatile int64_t t90 = -217065625132181116LL;
int64_t x541 = INT64_MIN;
int8_t x545 = INT8_MIN;
int32_t x548 = INT32_MAX;
volatile uint64_t t92 = 650223920821007LLU;
uint16_t x549 = 1U;
int64_t t93 = -53LL;
uint64_t t94 = 99LLU;
int64_t t96 = INT64_MIN;
volatile uint16_t x581 = 780U;


void f0(void) {
	int64_t x9 = INT64_MIN;
	volatile int8_t x11 = -1;
	int64_t x12 = -139453285987960958LL;
	static int64_t t0 = INT64_MIN;

	t0 = (x9+(x10/(x11*x12)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MAX;
	static uint64_t x18 = 10LLU;
	volatile int8_t x19 = INT8_MIN;
	int8_t x20 = -3;
	volatile uint64_t t1 = 6731LLU;

	t1 = (x17+(x18/(x19*x20)));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x21 = 42;
	int8_t x23 = -2;
	int8_t x24 = INT8_MIN;
	volatile int32_t t2 = 3160832;

	t2 = (x21+(x22/(x23*x24)));

	if (t2 != 66) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	volatile uint8_t x26 = 11U;
	volatile int32_t t3 = -33117734;

	t3 = (x25+(x26/(x27*x28)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x30 = 237972781LL;
	static int64_t x32 = 1LL;
	static int64_t t4 = -113417671LL;

	t4 = (x29+(x30/(x31*x32)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x41 = INT32_MIN;
	uint32_t x42 = UINT32_MAX;
	volatile uint8_t x43 = UINT8_MAX;
	uint8_t x44 = 1U;
	uint32_t t5 = 184U;

	t5 = (x41+(x42/(x43*x44)));

	if (t5 != 2164326657U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x53 = -6744441;
	int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MIN;
	volatile int64_t t6 = 915913LL;

	t6 = (x53+(x54/(x55*x56)));

	if (t6 != -6744441LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = UINT8_MAX;
	static uint8_t x58 = 33U;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = -6020LL;
	volatile int64_t t7 = -57288219LL;

	t7 = (x57+(x58/(x59*x60)));

	if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	int8_t x64 = -5;
	int32_t t8 = -47;

	t8 = (x61+(x62/(x63*x64)));

	if (t8 != -2147483568) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x73 = 8486540908978046647LLU;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t9 = 655922626445LLU;

	t9 = (x73+(x74/(x75*x76)));

	if (t9 != 8486540908978179791LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x77 = INT16_MAX;
	int64_t x78 = -18935132LL;
	int32_t x79 = 62;
	volatile int8_t x80 = -1;
	static volatile int64_t t10 = 31189490419222714LL;

	t10 = (x77+(x78/(x79*x80)));

	if (t10 != 338172LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = -153365539;
	int16_t x82 = -1;
	int16_t x83 = -8857;
	static volatile uint16_t x84 = 802U;
	int32_t t11 = -454;

	t11 = (x81+(x82/(x83*x84)));

	if (t11 != -153365539) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x89 = INT16_MIN;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = 5;
	int32_t t12 = -99741;

	t12 = (x89+(x90/(x91*x92)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x97 = UINT64_MAX;
	static int16_t x98 = -341;
	int16_t x99 = 35;
	static int32_t x100 = 3517;
	static volatile uint64_t t13 = UINT64_MAX;

	t13 = (x97+(x98/(x99*x100)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = 51U;
	static volatile int8_t x103 = INT8_MAX;

	t14 = (x101+(x102/(x103*x104)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -13;
	int32_t x106 = INT32_MIN;
	static uint64_t x107 = 108LLU;
	int64_t x108 = INT64_MAX;
	uint64_t t15 = 97571363211207LLU;

	t15 = (x105+(x106/(x107*x108)));

	if (t15 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x110 = UINT32_MAX;
	int32_t x112 = 608831;
	uint32_t t16 = 2125U;

	t16 = (x109+(x110/(x111*x112)));

	if (t16 != 3654U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x114 = INT32_MAX;
	uint64_t x115 = 13LLU;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t17 = 3816213331LLU;

	t17 = (x113+(x114/(x115*x116)));

	if (t17 != 2230866333546835LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = -1;
	volatile uint16_t x118 = 969U;
	volatile int32_t x119 = 140126;
	int8_t x120 = INT8_MIN;
	volatile int32_t t18 = -2705385;

	t18 = (x117+(x118/(x119*x120)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x121 = 51343647LL;
	uint32_t x122 = 51U;
	uint32_t x123 = 30253361U;
	int64_t x124 = -1LL;
	static int64_t t19 = -42368180792519207LL;

	t19 = (x121+(x122/(x123*x124)));

	if (t19 != 51343647LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x130 = UINT16_MAX;
	int16_t x131 = 5;
	volatile int16_t x132 = -1;
	static int32_t t20 = -1;

	t20 = (x129+(x130/(x131*x132)));

	if (t20 != -13071) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x133 = INT8_MIN;
	volatile uint16_t x134 = 15214U;
	int16_t x135 = 1;
	volatile uint16_t x136 = 1U;
	volatile int32_t t21 = 5;

	t21 = (x133+(x134/(x135*x136)));

	if (t21 != 15086) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	uint8_t x143 = 2U;
	int32_t t22 = 771;

	t22 = (x141+(x142/(x143*x144)));

	if (t22 != 189033) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x145 = UINT32_MAX;
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = UINT64_MAX;
	static uint64_t t23 = 30LLU;

	t23 = (x145+(x146/(x147*x148)));

	if (t23 != 4294967295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x161 = -1LL;
	static int8_t x164 = INT8_MAX;
	int64_t t24 = -92144449LL;

	t24 = (x161+(x162/(x163*x164)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x165 = -1;
	static volatile int8_t x166 = INT8_MIN;
	static int8_t x168 = INT8_MIN;

	t25 = (x165+(x166/(x167*x168)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = -8;
	uint32_t x171 = 948787678U;
	volatile int64_t x172 = -40997LL;

	t26 = (x169+(x170/(x171*x172)));

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x174 = -20348369LL;
	int8_t x175 = -57;
	int32_t x176 = 45613;
	int64_t t27 = 1737785775437370945LL;

	t27 = (x173+(x174/(x175*x176)));

	if (t27 != 44LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x178 = 14;
	volatile uint32_t x179 = 99U;
	static uint8_t x180 = 1U;
	volatile uint32_t t28 = 1958858105U;

	t28 = (x177+(x178/(x179*x180)));

	if (t28 != 26U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	uint64_t t29 = 71620175319345820LLU;

	t29 = (x185+(x186/(x187*x188)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x193 = -49225;
	int16_t x194 = 78;
	uint32_t x195 = 1186U;
	uint32_t x196 = 32687U;
	volatile uint32_t t30 = 1964U;

	t30 = (x193+(x194/(x195*x196)));

	if (t30 != 4294918071U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x201 = -1;
	volatile int16_t x202 = INT16_MIN;
	static int16_t x203 = -11;
	int64_t x204 = 13124LL;
	static int64_t t31 = 20177041LL;

	t31 = (x201+(x202/(x203*x204)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x209 = 10U;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -4;
	volatile int32_t t32 = -6;

	t32 = (x209+(x210/(x211*x212)));

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x213 = UINT64_MAX;
	static uint8_t x214 = 3U;
	static volatile int32_t x215 = INT32_MIN;
	volatile int64_t x216 = -228073210LL;
	static uint64_t t33 = UINT64_MAX;

	t33 = (x213+(x214/(x215*x216)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x219 = 13U;
	volatile uint64_t t34 = 115037LLU;

	t34 = (x217+(x218/(x219*x220)));

	if (t34 != 18446692123693448823LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x225 = 2643927046833792LL;
	volatile int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	static volatile uint8_t x228 = 21U;
	int64_t t35 = 3853437323LL;

	t35 = (x225+(x226/(x227*x228)));

	if (t35 != 441852119278013592LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x234 = UINT16_MAX;
	int64_t x235 = -99LL;
	int8_t x236 = INT8_MAX;
	static volatile int64_t t36 = -322042777449LL;

	t36 = (x233+(x234/(x235*x236)));

	if (t36 != 32762LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x237 = INT8_MAX;
	uint8_t x239 = UINT8_MAX;
	static int8_t x240 = INT8_MAX;
	int32_t t37 = -372;

	t37 = (x237+(x238/(x239*x240)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MAX;
	int16_t x243 = 14646;
	int8_t x244 = INT8_MAX;

	t38 = (x241+(x242/(x243*x244)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = INT16_MIN;
	volatile uint16_t x248 = 8412U;
	uint64_t t39 = UINT64_MAX;

	t39 = (x245+(x246/(x247*x248)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = 1;

	t40 = (x253+(x254/(x255*x256)));

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = 533984390248284LL;
	uint64_t x267 = UINT64_MAX;
	volatile uint16_t x268 = 53U;
	static volatile uint64_t t41 = 19101479563409457LLU;

	t41 = (x265+(x266/(x267*x268)));

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x278 = INT64_MAX;
	static int32_t x280 = INT32_MIN;

	t42 = (x277+(x278/(x279*x280)));

	if (t42 != 4294994466LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = -1LL;
	uint16_t x291 = 5734U;
	int32_t x292 = -1;
	int64_t t43 = -14071615773949LL;

	t43 = (x289+(x290/(x291*x292)));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	uint32_t x296 = 2251U;

	t44 = (x293+(x294/(x295*x296)));

	if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x305 = -71993594236LL;
	uint64_t x306 = 70695LLU;
	volatile int32_t x307 = INT32_MAX;
	static uint64_t x308 = 1450339512818891LLU;
	uint64_t t45 = 157LLU;

	t45 = (x305+(x306/(x307*x308)));

	if (t45 != 18446744001715957380LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	int64_t x311 = -127924LL;
	int16_t x312 = 11363;
	int64_t t46 = INT64_MIN;

	t46 = (x309+(x310/(x311*x312)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x315 = INT8_MIN;

	t47 = (x313+(x314/(x315*x316)));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x317 = INT32_MAX;
	int32_t x318 = INT32_MIN;
	static int64_t x319 = -26842117346674028LL;
	volatile uint64_t x320 = 211378900580181870LLU;
	volatile uint64_t t48 = 6713LLU;

	t48 = (x317+(x318/(x319*x320)));

	if (t48 != 2147483649LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MIN;
	int16_t x324 = INT16_MIN;

	t49 = (x321+(x322/(x323*x324)));

	if (t49 != 281474976710528LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x325 = -1457802488LL;
	static uint32_t x326 = UINT32_MAX;
	static uint16_t x327 = 518U;
	int8_t x328 = -1;
	int64_t t50 = -457586LL;

	t50 = (x325+(x326/(x327*x328)));

	if (t50 != -1457802487LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x329 = 317490U;
	int32_t x330 = -16644524;
	volatile int32_t x331 = INT32_MAX;
	uint32_t x332 = 90U;
	volatile uint32_t t51 = 746526162U;

	t51 = (x329+(x330/(x331*x332)));

	if (t51 != 317490U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x334 = INT16_MIN;
	static int16_t x336 = -1;

	t52 = (x333+(x334/(x335*x336)));

	if (t52 != -6681) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static uint64_t t53 = 25LLU;

	t53 = (x337+(x338/(x339*x340)));

	if (t53 != 1781679728612516822LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x341 = 43U;
	uint64_t x343 = 1515107972191160401LLU;

	t54 = (x341+(x342/(x343*x344)));

	if (t54 != 44LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x346 = 1U;
	int8_t x348 = INT8_MAX;

	t55 = (x345+(x346/(x347*x348)));

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x351 = 129639LLU;
	int8_t x352 = 7;
	volatile uint64_t t56 = 42022468283LLU;

	t56 = (x349+(x350/(x351*x352)));

	if (t56 != 20327595502795LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x353 = 946LLU;
	uint16_t x354 = 149U;
	static volatile uint16_t x355 = 201U;
	uint16_t x356 = 233U;
	uint64_t t57 = 1LLU;

	t57 = (x353+(x354/(x355*x356)));

	if (t57 != 946LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x361 = -1;
	int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 1U;
	volatile int64_t t58 = 17766748653LL;

	t58 = (x361+(x362/(x363*x364)));

	if (t58 != -2147483713LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x365 = INT32_MIN;
	static volatile int8_t x367 = -1;
	int8_t x368 = INT8_MIN;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x365+(x366/(x367*x368)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = INT8_MIN;
	static int32_t x370 = INT32_MIN;
	volatile int64_t x371 = -303LL;
	static int16_t x372 = 45;

	t60 = (x369+(x370/(x371*x372)));

	if (t60 != 157369LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x373 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -1;
	int64_t t61 = 22043382101170442LL;

	t61 = (x373+(x374/(x375*x376)));

	if (t61 != -9223372036837998593LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x377 = INT16_MIN;
	volatile int64_t x378 = 10735441807892115LL;
	volatile uint8_t x379 = 8U;
	int16_t x380 = INT16_MIN;
	volatile int64_t t62 = 398869LL;

	t62 = (x377+(x378/(x379*x380)));

	if (t62 != -40952493277LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x389 = -1;
	uint16_t x390 = 7U;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = 5U;
	int32_t t63 = -212;

	t63 = (x389+(x390/(x391*x392)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x394 = UINT8_MAX;
	volatile uint8_t x395 = 12U;
	static int8_t x396 = -1;
	volatile int64_t t64 = 738022627795443379LL;

	t64 = (x393+(x394/(x395*x396)));

	if (t64 != -53102993LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x403 = UINT16_MAX;
	uint32_t x404 = 13U;
	uint64_t t65 = 265475657093612LLU;

	t65 = (x401+(x402/(x403*x404)));

	if (t65 != 21652251672575LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x409 = -1;
	int8_t x410 = -1;
	volatile uint64_t x411 = UINT64_MAX;
	static uint64_t x412 = UINT64_MAX;

	t66 = (x409+(x410/(x411*x412)));

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x413 = 1375015U;
	static volatile int16_t x414 = 205;
	static int64_t x415 = INT64_MIN;
	uint64_t x416 = 2032733658706565LLU;
	volatile uint64_t t67 = 69774501887401995LLU;

	t67 = (x413+(x414/(x415*x416)));

	if (t67 != 1375015LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x419 = UINT64_MAX;
	static int32_t x420 = -81540;
	static volatile uint64_t t68 = 447LLU;

	t68 = (x417+(x418/(x419*x420)));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x429 = -1;
	volatile int64_t x430 = INT64_MIN;
	static volatile uint32_t x432 = 180U;
	static volatile int64_t t69 = 19LL;

	t69 = (x429+(x430/(x431*x432)));

	if (t69 != 51240955760304309LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x434 = 0U;
	volatile int8_t x435 = INT8_MAX;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t70 = 28045106;

	t70 = (x433+(x434/(x435*x436)));

	if (t70 != 4226) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x437 = 54U;
	int8_t x439 = INT8_MIN;
	uint32_t t71 = 18082U;

	t71 = (x437+(x438/(x439*x440)));

	if (t71 != 70U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x441 = 573U;
	static int16_t x442 = -3;
	uint64_t x443 = 3960LLU;
	uint64_t t72 = 1074705362725997LLU;

	t72 = (x441+(x442/(x443*x444)));

	if (t72 != 574LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x445 = 174567220U;
	int64_t x446 = -5LL;
	volatile int32_t x448 = INT32_MAX;
	static volatile int64_t t73 = -8136874754LL;

	t73 = (x445+(x446/(x447*x448)));

	if (t73 != 174567220LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x449 = -1;
	static int64_t x450 = INT64_MAX;
	int64_t x451 = -108806684028LL;
	volatile uint16_t x452 = 13874U;
	int64_t t74 = -13369050067LL;

	t74 = (x449+(x450/(x451*x452)));

	if (t74 != -6110LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x453 = INT64_MIN;
	int8_t x454 = 0;
	int8_t x456 = -1;
	uint64_t t75 = 65157384997LLU;

	t75 = (x453+(x454/(x455*x456)));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x466 = 116U;
	uint32_t x467 = UINT32_MAX;
	int64_t x468 = 125826130LL;
	volatile int64_t t76 = -3813679151LL;

	t76 = (x465+(x466/(x467*x468)));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	volatile int64_t x476 = -60LL;
	int64_t t77 = 100819018501LL;

	t77 = (x473+(x474/(x475*x476)));

	if (t77 != -1220LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x477 = -10953;
	int16_t x478 = INT16_MAX;
	int8_t x480 = -1;
	static int32_t t78 = 135678;

	t78 = (x477+(x478/(x479*x480)));

	if (t78 != 21814) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x481 = 0U;
	uint32_t x482 = 369143U;
	uint64_t x483 = 61852LLU;
	uint64_t t79 = 20717LLU;

	t79 = (x481+(x482/(x483*x484)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x486 = INT16_MIN;
	uint8_t x487 = 51U;
	uint32_t x488 = 10U;

	t80 = (x485+(x486/(x487*x488)));

	if (t80 != 8421439LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x489 = 982055537333600422LLU;
	static int64_t x490 = 1289091LL;
	int16_t x491 = INT16_MIN;
	int32_t x492 = -1;
	volatile uint64_t t81 = 32912661LLU;

	t81 = (x489+(x490/(x491*x492)));

	if (t81 != 982055537333600461LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x493 = 10U;
	int32_t x494 = -3733;
	uint64_t x495 = UINT64_MAX;
	volatile uint8_t x496 = 3U;
	static volatile uint64_t t82 = 58720084LLU;

	t82 = (x493+(x494/(x495*x496)));

	if (t82 != 10LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x502 = 832260082;
	int8_t x503 = -6;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t83 = 1282527LLU;

	t83 = (x501+(x502/(x503*x504)));

	if (t83 != 9223372036993485821LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x505 = -1;
	int32_t x506 = 65892;
	int32_t t84 = 3774;

	t84 = (x505+(x506/(x507*x508)));

	if (t84 != -259) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x514 = UINT8_MAX;
	int16_t x515 = INT16_MIN;
	volatile uint32_t x516 = UINT32_MAX;
	volatile uint32_t t85 = 409163U;

	t85 = (x513+(x514/(x515*x516)));

	if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x517 = 4U;
	static int8_t x518 = -1;
	int32_t x519 = -63251;
	int16_t x520 = INT16_MIN;
	static uint32_t t86 = 10700224U;

	t86 = (x517+(x518/(x519*x520)));

	if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x525 = 6U;
	int32_t x526 = INT32_MIN;
	uint8_t x527 = 49U;
	int16_t x528 = INT16_MAX;
	volatile int32_t t87 = 327844995;

	t87 = (x525+(x526/(x527*x528)));

	if (t87 != -1331) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x529 = INT32_MIN;
	int64_t x531 = 401LL;
	static volatile uint64_t t88 = 41474090LLU;

	t88 = (x529+(x530/(x531*x532)));

	if (t88 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x534 = 0LL;
	int16_t x535 = INT16_MIN;
	volatile int64_t x536 = -1LL;

	t89 = (x533+(x534/(x535*x536)));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MAX;
	int32_t x539 = 2110;
	volatile uint16_t x540 = UINT16_MAX;

	t90 = (x537+(x538/(x539*x540)));

	if (t90 != 66701249100LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x542 = -1;
	int32_t x543 = -1;
	static uint64_t x544 = 15440061745LLU;
	volatile uint64_t t91 = 56718782LLU;

	t91 = (x541+(x542/(x543*x544)));

	if (t91 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x546 = UINT64_MAX;
	uint64_t x547 = UINT64_MAX;

	t92 = (x545+(x546/(x547*x548)));

	if (t92 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x550 = INT32_MAX;
	volatile int8_t x551 = 34;
	static int64_t x552 = 31150249525382LL;

	t93 = (x549+(x550/(x551*x552)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x553 = -51;
	uint64_t x554 = UINT64_MAX;
	volatile int8_t x555 = INT8_MIN;
	int8_t x556 = -53;

	t94 = (x553+(x554/(x555*x556)));

	if (t94 != 2719154491997229LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x561 = -1;
	int32_t x562 = -1;
	volatile int16_t x563 = -1;
	int64_t x564 = -1LL;
	volatile int64_t t95 = 11996201576LL;

	t95 = (x561+(x562/(x563*x564)));

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x565 = INT64_MIN;
	int32_t x566 = -1;
	volatile int8_t x567 = -1;
	static int8_t x568 = INT8_MIN;

	t96 = (x565+(x566/(x567*x568)));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x569 = -721;
	uint8_t x570 = 0U;
	static int16_t x571 = INT16_MIN;
	int8_t x572 = INT8_MAX;
	int32_t t97 = -8577543;

	t97 = (x569+(x570/(x571*x572)));

	if (t97 != -721) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x573 = INT64_MIN;
	volatile int8_t x574 = -57;
	volatile int16_t x575 = 379;
	volatile int8_t x576 = -19;
	int64_t t98 = INT64_MIN;

	t98 = (x573+(x574/(x575*x576)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x582 = UINT64_MAX;
	static int8_t x583 = -30;
	volatile uint16_t x584 = 4635U;
	volatile uint64_t t99 = 44385LLU;

	t99 = (x581+(x582/(x583*x584)));

	if (t99 != 781LLU) { NG(); } else { ; }
	
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

