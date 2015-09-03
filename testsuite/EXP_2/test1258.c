#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 382;
int16_t x25 = 124;
int64_t x32 = INT64_MIN;
int32_t t4 = -299668;
int64_t x66 = INT64_MIN;
volatile int8_t x70 = 1;
static volatile int32_t t10 = -423;
static int8_t x75 = INT8_MIN;
int32_t x76 = INT32_MIN;
int16_t x91 = -2952;
int16_t x93 = INT16_MAX;
int32_t x94 = INT32_MIN;
int16_t x96 = -1;
int8_t x99 = -28;
static uint8_t x105 = 6U;
uint8_t x133 = 2U;
volatile int32_t t21 = -1;
uint8_t x159 = UINT8_MAX;
volatile int32_t t24 = 3046;
int32_t x162 = 1805;
volatile int16_t x166 = INT16_MIN;
volatile uint64_t x168 = 16537464639LLU;
int8_t x174 = -1;
int32_t t27 = 335442;
static volatile int32_t t29 = -50507971;
int64_t x197 = INT64_MAX;
volatile int16_t x200 = -1;
static int32_t t35 = -24204273;
int32_t x243 = 1415217;
static int32_t t37 = 7857687;
volatile int32_t t38 = 157200;
uint8_t x277 = UINT8_MAX;
int8_t x278 = INT8_MAX;
static int32_t x280 = -190245;
int32_t t39 = 93402787;
volatile int32_t t43 = -473852054;
static uint16_t x308 = 164U;
int32_t t44 = -71;
static volatile uint64_t x329 = UINT64_MAX;
uint16_t x391 = 7833U;
static int32_t t51 = -506554029;
static uint8_t x405 = 27U;
uint32_t x417 = 6496817U;
int64_t x420 = INT64_MIN;
volatile int32_t t55 = -279009;
int16_t x430 = INT16_MIN;
uint64_t x440 = UINT64_MAX;
int32_t x449 = INT32_MAX;
uint32_t x454 = 3691U;
static int8_t x463 = 0;
static volatile uint64_t x473 = UINT64_MAX;
int16_t x474 = INT16_MIN;
int64_t x476 = 123599605LL;
int64_t x494 = -1782560173LL;
uint16_t x497 = UINT16_MAX;
static uint16_t x498 = 439U;
int16_t x499 = -1;
int32_t x500 = INT32_MIN;
static int64_t x506 = INT64_MIN;
volatile int8_t x507 = INT8_MIN;
volatile int64_t x523 = INT64_MIN;
volatile int8_t x524 = INT8_MAX;
volatile int8_t x525 = 3;
static volatile int64_t x536 = -205847LL;
uint16_t x542 = 244U;
uint8_t x543 = 3U;
uint16_t x544 = UINT16_MAX;
uint64_t x554 = 25LLU;
int32_t t74 = -255901;
volatile int16_t x557 = INT16_MAX;
uint64_t x562 = 6LLU;
int16_t x563 = INT16_MIN;
int32_t x566 = -438046266;
int16_t x569 = 4;
uint64_t x572 = UINT64_MAX;
int64_t x574 = -1LL;
uint32_t x575 = UINT32_MAX;
uint16_t x576 = UINT16_MAX;
volatile int64_t x577 = 4450411464721093LL;
volatile int64_t x586 = INT64_MAX;
static int8_t x610 = INT8_MIN;
int32_t t83 = 2528978;
volatile int32_t t84 = -418;
int64_t x648 = -1LL;
static int16_t x651 = INT16_MIN;
static int64_t x658 = -1LL;
uint8_t x667 = 0U;
volatile int32_t t91 = 1;
uint64_t x686 = 4296797LLU;
int32_t x696 = -2475794;
uint64_t x699 = 16437190274719999LLU;
static int32_t x703 = 7363380;
int8_t x711 = -1;
volatile int32_t t98 = 853;


void f0(void) {
	int16_t x5 = 7533;
	volatile uint32_t x6 = 1791285U;
	static volatile uint8_t x7 = 2U;
	volatile int16_t x8 = -1;
	int32_t t0 = 2009553;

	t0 = ((x5<<(x6==x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x13 = 8U;
	static int64_t x14 = -1LL;
	volatile int16_t x15 = -1;
	uint8_t x16 = 1U;
	int32_t t1 = -2344;

	t1 = ((x13<<(x14==x15))<=x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x17 = INT32_MAX;
	int32_t x18 = 0;
	int32_t x19 = INT32_MIN;
	int8_t x20 = -1;

	t2 = ((x17<<(x18==x19))<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 1750U;
	volatile int64_t x28 = INT64_MIN;
	int32_t t3 = -29385494;

	t3 = ((x25<<(x26==x27))<=x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MAX;
	static int64_t x30 = -2LL;
	static int32_t x31 = -1;

	t4 = ((x29<<(x30==x31))<=x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = 2;
	static uint32_t x34 = 3448093U;
	int8_t x35 = INT8_MIN;
	int16_t x36 = -837;
	int32_t t5 = -4614;

	t5 = ((x33<<(x34==x35))<=x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 12922653;
	static int32_t x42 = 1;
	uint16_t x43 = 18666U;
	uint32_t x44 = 3184U;
	volatile int32_t t6 = 480925543;

	t6 = ((x41<<(x42==x43))<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = 20899U;
	static int8_t x46 = INT8_MIN;
	volatile int64_t x47 = -1LL;
	static volatile int16_t x48 = INT16_MAX;
	int32_t t7 = -7326;

	t7 = ((x45<<(x46==x47))<=x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x57 = 3;
	volatile uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	volatile int32_t x60 = -26;
	volatile int32_t t8 = 12;

	t8 = ((x57<<(x58==x59))<=x60);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = 76;
	int16_t x67 = INT16_MAX;
	int16_t x68 = -1593;
	int32_t t9 = 5230;

	t9 = ((x65<<(x66==x67))<=x68);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x71 = -156644634679LL;
	int64_t x72 = -203458545612162470LL;

	t10 = ((x69<<(x70==x71))<=x72);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x73 = 167;
	uint64_t x74 = 195246559120774LLU;
	int32_t t11 = -3;

	t11 = ((x73<<(x74==x75))<=x76);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x81 = 1U;
	int8_t x82 = 1;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t12 = 14;

	t12 = ((x81<<(x82==x83))<=x84);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 5760532290302101LLU;
	static uint64_t x90 = 4935904131102LLU;
	volatile int16_t x92 = -7;
	volatile int32_t t13 = 234;

	t13 = ((x89<<(x90==x91))<=x92);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x95 = INT8_MAX;
	static volatile int32_t t14 = -3;

	t14 = ((x93<<(x94==x95))<=x96);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x97 = 0U;
	static int8_t x98 = INT8_MIN;
	static int32_t x100 = -6743402;
	volatile int32_t t15 = 1;

	t15 = ((x97<<(x98==x99))<=x100);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x106 = INT64_MIN;
	int32_t x107 = INT32_MAX;
	volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t16 = 1;

	t16 = ((x105<<(x106==x107))<=x108);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x113 = INT32_MAX;
	uint32_t x114 = 9U;
	volatile int16_t x115 = INT16_MAX;
	int8_t x116 = 0;
	volatile int32_t t17 = 1517254;

	t17 = ((x113<<(x114==x115))<=x116);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x121 = 38;
	int16_t x122 = INT16_MAX;
	int16_t x123 = -1;
	int32_t x124 = -1;
	int32_t t18 = 2672702;

	t18 = ((x121<<(x122==x123))<=x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = INT16_MIN;
	int16_t x128 = -1;
	static int32_t t19 = 1;

	t19 = ((x125<<(x126==x127))<=x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x129 = INT16_MAX;
	int64_t x130 = -1LL;
	int64_t x131 = INT64_MAX;
	volatile uint64_t x132 = 132543636LLU;
	volatile int32_t t20 = -228;

	t20 = ((x129<<(x130==x131))<=x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x134 = 30U;
	int32_t x135 = -114;
	volatile int32_t x136 = INT32_MIN;

	t21 = ((x133<<(x134==x135))<=x136);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x149 = INT32_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	int8_t x152 = -1;
	volatile int32_t t22 = 603969353;

	t22 = ((x149<<(x150==x151))<=x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x153 = INT16_MAX;
	uint32_t x154 = 5769294U;
	static int16_t x155 = INT16_MAX;
	int8_t x156 = -1;
	volatile int32_t t23 = -7413;

	t23 = ((x153<<(x154==x155))<=x156);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = UINT8_MAX;
	uint8_t x158 = 14U;
	int8_t x160 = 0;

	t24 = ((x157<<(x158==x159))<=x160);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x161 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	int64_t x164 = 10651961LL;
	int32_t t25 = 236;

	t25 = ((x161<<(x162==x163))<=x164);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = 2989720386481LL;
	volatile uint16_t x167 = 314U;
	int32_t t26 = -259700;

	t26 = ((x165<<(x166==x167))<=x168);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = 29072951LLU;
	volatile uint16_t x175 = 15375U;
	volatile int32_t x176 = INT32_MIN;

	t27 = ((x173<<(x174==x175))<=x176);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x181 = 5U;
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = 91U;
	int64_t x184 = -244676841717LL;
	static volatile int32_t t28 = -82;

	t28 = ((x181<<(x182==x183))<=x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x185 = 0U;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int32_t x188 = 95322109;

	t29 = ((x185<<(x186==x187))<=x188);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x193 = 325LL;
	uint64_t x194 = 0LLU;
	int32_t x195 = INT32_MAX;
	int8_t x196 = 49;
	int32_t t30 = 11700283;

	t30 = ((x193<<(x194==x195))<=x196);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	int32_t t31 = -6;

	t31 = ((x197<<(x198==x199))<=x200);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x209 = 2U;
	volatile int16_t x210 = -1;
	uint32_t x211 = 1893122224U;
	static uint64_t x212 = 2918634656504LLU;
	volatile int32_t t32 = 5151936;

	t32 = ((x209<<(x210==x211))<=x212);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int64_t x228 = -1LL;
	static int32_t t33 = -6805;

	t33 = ((x225<<(x226==x227))<=x228);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x229 = 3U;
	volatile uint16_t x230 = 96U;
	volatile int8_t x231 = -2;
	int16_t x232 = 144;
	volatile int32_t t34 = 38151;

	t34 = ((x229<<(x230==x231))<=x232);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 55U;

	t35 = ((x233<<(x234==x235))<=x236);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x241 = INT8_MAX;
	static volatile uint8_t x242 = UINT8_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t36 = -1;

	t36 = ((x241<<(x242==x243))<=x244);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x249 = 306U;
	static volatile int64_t x250 = INT64_MIN;
	static volatile int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MAX;

	t37 = ((x249<<(x250==x251))<=x252);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x273 = 0;
	static volatile int8_t x274 = -1;
	volatile uint16_t x275 = UINT16_MAX;
	static int8_t x276 = 1;

	t38 = ((x273<<(x274==x275))<=x276);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x279 = UINT16_MAX;

	t39 = ((x277<<(x278==x279))<=x280);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x289 = 1752383LLU;
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t40 = -793241475;

	t40 = ((x289<<(x290==x291))<=x292);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -10714;
	uint32_t x295 = 45U;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t41 = 90190654;

	t41 = ((x293<<(x294==x295))<=x296);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x297 = 5;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 275334000LLU;
	int64_t x300 = INT64_MAX;
	volatile int32_t t42 = 0;

	t42 = ((x297<<(x298==x299))<=x300);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x301 = INT64_MAX;
	static int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	static uint64_t x304 = 157979051LLU;

	t43 = ((x301<<(x302==x303))<=x304);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x305 = 0U;
	int16_t x306 = INT16_MAX;
	static uint64_t x307 = 1896LLU;

	t44 = ((x305<<(x306==x307))<=x308);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x325 = 25;
	volatile int16_t x326 = INT16_MAX;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	static int32_t t45 = 59827;

	t45 = ((x325<<(x326==x327))<=x328);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = -3;
	int64_t x332 = 10813840640244LL;
	volatile int32_t t46 = 0;

	t46 = ((x329<<(x330==x331))<=x332);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x337 = 0;
	static int64_t x338 = -3028135036010924458LL;
	int32_t x339 = -29214;
	static uint16_t x340 = 886U;
	static volatile int32_t t47 = 159696;

	t47 = ((x337<<(x338==x339))<=x340);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x369 = 3;
	static int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MIN;
	static int64_t x372 = INT64_MAX;
	volatile int32_t t48 = 3;

	t48 = ((x369<<(x370==x371))<=x372);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x373 = 203395455U;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	volatile int64_t x376 = -118661371865135490LL;
	volatile int32_t t49 = -364222;

	t49 = ((x373<<(x374==x375))<=x376);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x389 = 358248033U;
	static int32_t x390 = INT32_MIN;
	volatile uint16_t x392 = 19891U;
	volatile int32_t t50 = -10469344;

	t50 = ((x389<<(x390==x391))<=x392);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x393 = UINT64_MAX;
	static int32_t x394 = INT32_MIN;
	static volatile uint32_t x395 = 16579168U;
	volatile int8_t x396 = 0;

	t51 = ((x393<<(x394==x395))<=x396);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x397 = UINT8_MAX;
	uint16_t x398 = UINT16_MAX;
	static int8_t x399 = INT8_MAX;
	int16_t x400 = 0;
	static int32_t t52 = 189;

	t52 = ((x397<<(x398==x399))<=x400);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x401 = 7208253873301716LLU;
	int16_t x402 = 0;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = 0U;
	volatile int32_t t53 = -1275;

	t53 = ((x401<<(x402==x403))<=x404);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = -25;
	int32_t t54 = 824;

	t54 = ((x405<<(x406==x407))<=x408);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x418 = 1138;
	static int64_t x419 = -3006939229LL;

	t55 = ((x417<<(x418==x419))<=x420);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x421 = 24U;
	int16_t x422 = INT16_MAX;
	uint64_t x423 = 8183657815LLU;
	int32_t x424 = 3637216;
	static volatile int32_t t56 = -3015;

	t56 = ((x421<<(x422==x423))<=x424);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x429 = 1015LLU;
	int32_t x431 = INT32_MIN;
	volatile int32_t x432 = -61537;
	volatile int32_t t57 = -32;

	t57 = ((x429<<(x430==x431))<=x432);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x433 = INT32_MAX;
	int16_t x434 = 7199;
	int16_t x435 = INT16_MAX;
	static uint8_t x436 = 125U;
	static volatile int32_t t58 = 341;

	t58 = ((x433<<(x434==x435))<=x436);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x437 = 109774789LL;
	uint64_t x438 = UINT64_MAX;
	static int8_t x439 = 5;
	static volatile int32_t t59 = -838;

	t59 = ((x437<<(x438==x439))<=x440);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x445 = 24;
	int8_t x446 = INT8_MAX;
	int16_t x447 = 2;
	static volatile int64_t x448 = INT64_MAX;
	volatile int32_t t60 = -4761;

	t60 = ((x445<<(x446==x447))<=x448);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x450 = INT8_MIN;
	uint16_t x451 = 11U;
	int64_t x452 = -1LL;
	volatile int32_t t61 = -169;

	t61 = ((x449<<(x450==x451))<=x452);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x453 = 1;
	uint8_t x455 = UINT8_MAX;
	int8_t x456 = 0;
	volatile int32_t t62 = 270509;

	t62 = ((x453<<(x454==x455))<=x456);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x461 = 2598025977LLU;
	int64_t x462 = INT64_MIN;
	int32_t x464 = 8250072;
	volatile int32_t t63 = 29;

	t63 = ((x461<<(x462==x463))<=x464);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x475 = INT8_MIN;
	volatile int32_t t64 = 821253180;

	t64 = ((x473<<(x474==x475))<=x476);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x485 = 32064U;
	int8_t x486 = -1;
	static uint32_t x487 = UINT32_MAX;
	int64_t x488 = -43894LL;
	int32_t t65 = -73030;

	t65 = ((x485<<(x486==x487))<=x488);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x493 = INT16_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t66 = 973639066;

	t66 = ((x493<<(x494==x495))<=x496);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t t67 = -3212;

	t67 = ((x497<<(x498==x499))<=x500);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x505 = INT16_MAX;
	int64_t x508 = -1LL;
	int32_t t68 = 0;

	t68 = ((x505<<(x506==x507))<=x508);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x521 = 337U;
	static int64_t x522 = 55930404LL;
	int32_t t69 = 1946;

	t69 = ((x521<<(x522==x523))<=x524);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x526 = -1LL;
	static volatile uint32_t x527 = 37U;
	volatile int16_t x528 = -3399;
	volatile int32_t t70 = -115;

	t70 = ((x525<<(x526==x527))<=x528);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x533 = 876741LLU;
	volatile uint32_t x534 = 6U;
	volatile uint64_t x535 = 3092881090LLU;
	int32_t t71 = 275;

	t71 = ((x533<<(x534==x535))<=x536);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x537 = 0U;
	int16_t x538 = -1;
	uint32_t x539 = UINT32_MAX;
	int32_t x540 = -2518;
	int32_t t72 = 1985;

	t72 = ((x537<<(x538==x539))<=x540);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x541 = 1;
	int32_t t73 = 382099919;

	t73 = ((x541<<(x542==x543))<=x544);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x553 = INT32_MAX;
	static int32_t x555 = INT32_MAX;
	int16_t x556 = -1;

	t74 = ((x553<<(x554==x555))<=x556);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x558 = INT16_MAX;
	int64_t x559 = INT64_MIN;
	static volatile int32_t x560 = -3332;
	volatile int32_t t75 = 3;

	t75 = ((x557<<(x558==x559))<=x560);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x561 = 0;
	uint32_t x564 = UINT32_MAX;
	static volatile int32_t t76 = 28426188;

	t76 = ((x561<<(x562==x563))<=x564);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x565 = UINT32_MAX;
	int16_t x567 = INT16_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t77 = 16247;

	t77 = ((x565<<(x566==x567))<=x568);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x570 = INT64_MAX;
	uint64_t x571 = 251691LLU;
	int32_t t78 = -1;

	t78 = ((x569<<(x570==x571))<=x572);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x573 = 1010LL;
	int32_t t79 = 1958;

	t79 = ((x573<<(x574==x575))<=x576);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x578 = -130250LL;
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MAX;
	int32_t t80 = 70;

	t80 = ((x577<<(x578==x579))<=x580);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x585 = 765008249;
	uint32_t x587 = UINT32_MAX;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t81 = 292;

	t81 = ((x585<<(x586==x587))<=x588);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x597 = UINT64_MAX;
	static int32_t x598 = INT32_MAX;
	volatile int32_t x599 = -1;
	static int32_t x600 = -1;
	volatile int32_t t82 = 255311658;

	t82 = ((x597<<(x598==x599))<=x600);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x609 = 5982331LLU;
	int32_t x611 = INT32_MAX;
	volatile int64_t x612 = 28260LL;

	t83 = ((x609<<(x610==x611))<=x612);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x613 = 23440U;
	static int8_t x614 = INT8_MIN;
	uint16_t x615 = UINT16_MAX;
	uint32_t x616 = UINT32_MAX;

	t84 = ((x613<<(x614==x615))<=x616);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x629 = 22554405658203028LL;
	volatile int64_t x630 = INT64_MIN;
	volatile int8_t x631 = -1;
	int8_t x632 = 1;
	static int32_t t85 = 21817410;

	t85 = ((x629<<(x630==x631))<=x632);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x637 = UINT64_MAX;
	volatile int16_t x638 = INT16_MAX;
	int8_t x639 = INT8_MAX;
	static int64_t x640 = 8LL;
	volatile int32_t t86 = -3841250;

	t86 = ((x637<<(x638==x639))<=x640);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x645 = 174631237724173LL;
	static int64_t x646 = INT64_MIN;
	volatile int8_t x647 = INT8_MIN;
	volatile int32_t t87 = -88434977;

	t87 = ((x645<<(x646==x647))<=x648);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x649 = INT16_MAX;
	static uint64_t x650 = 310248224935LLU;
	uint64_t x652 = UINT64_MAX;
	int32_t t88 = 45602;

	t88 = ((x649<<(x650==x651))<=x652);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x657 = INT32_MAX;
	uint32_t x659 = UINT32_MAX;
	int64_t x660 = -1LL;
	static int32_t t89 = 10;

	t89 = ((x657<<(x658==x659))<=x660);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x665 = 399909119U;
	int32_t x666 = -1;
	volatile int32_t x668 = INT32_MAX;
	volatile int32_t t90 = 89;

	t90 = ((x665<<(x666==x667))<=x668);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x669 = 5992U;
	int8_t x670 = 1;
	static int16_t x671 = 37;
	uint64_t x672 = UINT64_MAX;

	t91 = ((x669<<(x670==x671))<=x672);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x677 = 375U;
	uint32_t x678 = 65982U;
	int8_t x679 = -1;
	int64_t x680 = -30879916779298576LL;
	static volatile int32_t t92 = -2258818;

	t92 = ((x677<<(x678==x679))<=x680);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x681 = 1U;
	int8_t x682 = INT8_MIN;
	uint16_t x683 = 861U;
	uint32_t x684 = 85381U;
	int32_t t93 = -124;

	t93 = ((x681<<(x682==x683))<=x684);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x685 = INT32_MAX;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 3500150095123013LLU;
	static volatile int32_t t94 = 4;

	t94 = ((x685<<(x686==x687))<=x688);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x693 = INT64_MAX;
	static uint8_t x694 = 2U;
	int16_t x695 = INT16_MAX;
	volatile int32_t t95 = -23271;

	t95 = ((x693<<(x694==x695))<=x696);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x697 = INT16_MAX;
	volatile int8_t x698 = INT8_MIN;
	int64_t x700 = -59152746LL;
	int32_t t96 = -4;

	t96 = ((x697<<(x698==x699))<=x700);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x701 = INT64_MAX;
	int32_t x702 = -4299659;
	int8_t x704 = INT8_MIN;
	static int32_t t97 = -8;

	t97 = ((x701<<(x702==x703))<=x704);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x709 = INT64_MAX;
	static int32_t x710 = INT32_MAX;
	int64_t x712 = 70LL;

	t98 = ((x709<<(x710==x711))<=x712);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x713 = UINT64_MAX;
	int8_t x714 = INT8_MIN;
	int16_t x715 = 1;
	int32_t x716 = -663787;
	int32_t t99 = 1;

	t99 = ((x713<<(x714==x715))<=x716);

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

