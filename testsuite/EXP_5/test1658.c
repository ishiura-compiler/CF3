#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = UINT8_MAX;
static int16_t x15 = INT16_MIN;
volatile int64_t x16 = -1LL;
volatile int32_t t1 = -246331726;
uint8_t x17 = 1U;
int32_t x18 = 116;
uint32_t x19 = 1310U;
static int32_t x23 = INT32_MIN;
int8_t x27 = INT8_MIN;
int64_t x29 = INT64_MAX;
int32_t x56 = INT32_MIN;
int8_t x58 = -1;
uint64_t x68 = 26353LLU;
volatile int32_t x87 = -5;
static int64_t x89 = 1662118369056LL;
int64_t t14 = -5819277233493LL;
volatile uint8_t x94 = UINT8_MAX;
static uint32_t x96 = 7040U;
int8_t x115 = INT8_MIN;
int16_t x116 = 6;
volatile int32_t t18 = 1;
int32_t x120 = -1;
int8_t x125 = 0;
uint32_t x128 = 51241932U;
int32_t x135 = 5323;
uint16_t x136 = UINT16_MAX;
volatile uint16_t x137 = 1U;
volatile int32_t x139 = INT32_MIN;
static int32_t x144 = INT32_MIN;
static int32_t t24 = 1;
volatile int16_t x164 = -721;
uint32_t x167 = 296114073U;
static int16_t x174 = INT16_MIN;
uint8_t x193 = UINT8_MAX;
int8_t x194 = INT8_MIN;
int32_t x195 = 226;
int64_t x198 = -160554235817766597LL;
volatile uint32_t x208 = 831U;
int64_t t34 = -124LL;
uint16_t x209 = 52U;
static volatile uint64_t x212 = UINT64_MAX;
static volatile int32_t t35 = -13;
uint8_t x213 = UINT8_MAX;
int64_t x214 = INT64_MAX;
int16_t x215 = INT16_MAX;
static int64_t x219 = 179161LL;
volatile uint64_t t37 = 461967831641363LLU;
int64_t x222 = INT64_MIN;
int8_t x224 = -1;
int32_t x231 = -5295;
uint16_t x233 = UINT16_MAX;
static uint8_t x236 = 2U;
static volatile int32_t t40 = -285361;
uint32_t x249 = 631927077U;
volatile int64_t x250 = INT64_MIN;
volatile int32_t x279 = -7327198;
int64_t x283 = INT64_MIN;
static int32_t x284 = 2;
static int16_t x305 = INT16_MAX;
static uint16_t x313 = 0U;
uint64_t x314 = 11LLU;
volatile int32_t t50 = 3326493;
uint32_t x321 = 3066915U;
volatile uint16_t x324 = 2U;
volatile uint32_t t51 = 54536563U;
uint64_t x325 = 14284333387173557LLU;
uint32_t x327 = 338U;
int8_t x328 = INT8_MIN;
int8_t x339 = INT8_MIN;
static volatile int64_t t53 = 4LL;
static volatile int16_t x347 = INT16_MIN;
int32_t t55 = 8301676;
volatile int8_t x370 = -1;
volatile uint16_t x373 = 0U;
static int64_t x377 = INT64_MAX;
uint64_t x391 = 36021340282093468LLU;
volatile uint32_t x392 = 15956447U;
static volatile uint16_t x413 = UINT16_MAX;
uint64_t x424 = 2102328860950784765LLU;
volatile int32_t x425 = INT32_MAX;
static volatile int32_t t64 = 64777774;
int16_t x438 = 160;
int8_t x440 = -37;
volatile int64_t t65 = INT64_MAX;
volatile int32_t t66 = 19;
volatile int16_t x451 = -11;
volatile int8_t x453 = 33;
uint32_t x479 = 70032998U;
int64_t x485 = 32386636LL;
volatile uint16_t x486 = 0U;
int8_t x487 = INT8_MAX;
volatile int64_t x509 = INT64_MAX;
int8_t x513 = INT8_MAX;
int32_t t77 = -23059832;
static int8_t x542 = -1;
int8_t x550 = 3;
volatile int64_t t79 = INT64_MAX;
volatile int8_t x573 = 7;
volatile uint16_t x593 = 0U;
static uint8_t x602 = UINT8_MAX;
static int64_t x631 = INT64_MAX;
uint64_t x640 = 50700317LLU;
int8_t x672 = -3;
uint32_t x704 = 784126U;
int32_t t94 = -3;
uint16_t x728 = UINT16_MAX;
int16_t x743 = -5;
uint64_t x744 = 9218LLU;
volatile uint64_t t97 = 28610458952988659LLU;
static volatile int32_t t98 = -15997636;
int16_t x762 = -2517;
int16_t x763 = -1;


void f0(void) {
	static volatile int64_t x1 = 2043214882990385LL;
	uint32_t x2 = 45309354U;
	volatile int8_t x3 = INT8_MAX;
	volatile int16_t x4 = INT16_MIN;
	int64_t t0 = -53132736372LL;

	t0 = (x1>>((x2<=x3)&x4));

	if (t0 != 2043214882990385LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x14 = UINT16_MAX;

	t1 = (x13>>((x14<=x15)&x16));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x20 = -8940LL;
	volatile int32_t t2 = -569312;

	t2 = (x17>>((x18<=x19)&x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MAX;
	static uint64_t x22 = UINT64_MAX;
	uint8_t x24 = 12U;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x21>>((x22<=x23)&x24));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	uint8_t x26 = 105U;
	static int32_t x28 = 738438;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x25>>((x26<=x27)&x28));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;
	int64_t t5 = -86981010824705LL;

	t5 = (x29>>((x30<=x31)&x32));

	if (t5 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 24;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -1;
	uint32_t x36 = 17852U;
	volatile int32_t t6 = 66844;

	t6 = (x33>>((x34<=x35)&x36));

	if (t6 != 24) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 6U;
	int8_t x42 = 1;
	int8_t x43 = INT8_MAX;
	int16_t x44 = -1;
	volatile int32_t t7 = 17628374;

	t7 = (x41>>((x42<=x43)&x44));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = -1;
	int32_t t8 = INT32_MAX;

	t8 = (x53>>((x54<=x55)&x56));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = 20379U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 45U;
	int32_t t9 = -1920016;

	t9 = (x57>>((x58<=x59)&x60));

	if (t9 != 20379) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x65 = 27367852LLU;
	volatile int16_t x66 = -1;
	static int16_t x67 = INT16_MIN;
	uint64_t t10 = 12LLU;

	t10 = (x65>>((x66<=x67)&x68));

	if (t10 != 27367852LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = 31U;
	volatile uint16_t x74 = 15U;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 18031U;
	int32_t t11 = -4080327;

	t11 = (x73>>((x74<=x75)&x76));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int32_t x82 = INT32_MAX;
	uint16_t x83 = 26U;
	uint64_t x84 = 2036LLU;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x81>>((x82<=x83)&x84));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x85 = 34490706513315LLU;
	static int64_t x86 = 4LL;
	int32_t x88 = INT32_MIN;
	uint64_t t13 = 387735LLU;

	t13 = (x85>>((x86<=x87)&x88));

	if (t13 != 34490706513315LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x90 = INT32_MAX;
	static uint16_t x91 = 3533U;
	int32_t x92 = INT32_MAX;

	t14 = (x89>>((x90<=x91)&x92));

	if (t14 != 1662118369056LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x93 = 4U;
	volatile int32_t x95 = 10306920;
	volatile int32_t t15 = -1037921;

	t15 = (x93>>((x94<=x95)&x96));

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = 7441;
	volatile uint8_t x106 = 80U;
	int8_t x107 = 1;
	int64_t x108 = -1LL;
	volatile int32_t t16 = 0;

	t16 = (x105>>((x106<=x107)&x108));

	if (t16 != 7441) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = INT64_MAX;
	uint32_t x110 = 535051U;
	int64_t x111 = -14579137566521444LL;
	volatile uint64_t x112 = 116763090298612787LLU;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x109>>((x110<=x111)&x112));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = INT8_MAX;
	int64_t x114 = INT64_MAX;

	t18 = (x113>>((x114<=x115)&x116));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x117 = UINT16_MAX;
	static int16_t x118 = 7;
	int32_t x119 = INT32_MIN;
	int32_t t19 = 8870678;

	t19 = (x117>>((x118<=x119)&x120));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	static volatile int64_t x123 = INT64_MIN;
	volatile int32_t x124 = INT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (x121>>((x122<=x123)&x124));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x126 = 3U;
	static uint8_t x127 = 3U;
	volatile int32_t t21 = -195;

	t21 = (x125>>((x126<=x127)&x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x133 = 1U;
	uint16_t x134 = UINT16_MAX;
	int32_t t22 = 7;

	t22 = (x133>>((x134<=x135)&x136));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x138 = 1;
	int32_t x140 = 3454268;
	volatile int32_t t23 = 300302914;

	t23 = (x137>>((x138<=x139)&x140));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x141 = 3U;
	int64_t x142 = -1LL;
	volatile int16_t x143 = INT16_MIN;

	t24 = (x141>>((x142<=x143)&x144));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MAX;
	int16_t x154 = 1;
	static uint16_t x155 = 447U;
	uint32_t x156 = 9838758U;
	volatile int32_t t25 = -196078;

	t25 = (x153>>((x154<=x155)&x156));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x157 = 7U;
	int16_t x158 = -3385;
	static volatile int64_t x159 = INT64_MAX;
	int16_t x160 = 1624;
	volatile int32_t t26 = 1;

	t26 = (x157>>((x158<=x159)&x160));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x161 = INT8_MAX;
	int16_t x162 = -1246;
	int8_t x163 = 31;
	volatile int32_t t27 = -415596089;

	t27 = (x161>>((x162<=x163)&x164));

	if (t27 != 63) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x165 = INT8_MAX;
	int8_t x166 = INT8_MIN;
	uint16_t x168 = 13446U;
	int32_t t28 = -399497;

	t28 = (x165>>((x166<=x167)&x168));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = 1U;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t29 = -1032816353;

	t29 = (x173>>((x174<=x175)&x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x181 = 93094653U;
	volatile int16_t x182 = 4060;
	int8_t x183 = -15;
	int16_t x184 = INT16_MIN;
	static uint32_t t30 = 222309086U;

	t30 = (x181>>((x182<=x183)&x184));

	if (t30 != 93094653U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t31 = -104328;

	t31 = (x193>>((x194<=x195)&x196));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x197 = 1344420271LL;
	static int8_t x199 = INT8_MIN;
	volatile int32_t x200 = INT32_MIN;
	int64_t t32 = 1772690991000LL;

	t32 = (x197>>((x198<=x199)&x200));

	if (t32 != 1344420271LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = -1;
	uint8_t x203 = 6U;
	int16_t x204 = 281;
	volatile uint32_t t33 = 20827580U;

	t33 = (x201>>((x202<=x203)&x204));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x205 = INT64_MAX;
	uint32_t x206 = 1415395U;
	int8_t x207 = -1;

	t34 = (x205>>((x206<=x207)&x208));

	if (t34 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x210 = UINT8_MAX;
	uint16_t x211 = 381U;

	t35 = (x209>>((x210<=x211)&x212));

	if (t35 != 26) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x216 = INT64_MAX;
	int32_t t36 = -9;

	t36 = (x213>>((x214<=x215)&x216));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x217 = 30660600732686311LLU;
	uint8_t x218 = UINT8_MAX;
	int64_t x220 = INT64_MIN;

	t37 = (x217>>((x218<=x219)&x220));

	if (t37 != 30660600732686311LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x221 = INT16_MAX;
	static int64_t x223 = INT64_MIN;
	volatile int32_t t38 = -4129;

	t38 = (x221>>((x222<=x223)&x224));

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x229>>((x230<=x231)&x232));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x234 = INT32_MAX;
	uint32_t x235 = 1905U;

	t40 = (x233>>((x234<=x235)&x236));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x241 = 1;
	int64_t x242 = -1LL;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t41 = 352032;

	t41 = (x241>>((x242<=x243)&x244));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x251 = -1;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t42 = 250U;

	t42 = (x249>>((x250<=x251)&x252));

	if (t42 != 631927077U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MAX;
	static uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t43 = -3839;

	t43 = (x257>>((x258<=x259)&x260));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x277 = 1467304971U;
	uint16_t x278 = 2017U;
	uint64_t x280 = UINT64_MAX;
	static volatile uint32_t t44 = 0U;

	t44 = (x277>>((x278<=x279)&x280));

	if (t44 != 1467304971U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 598519665361201LLU;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x281>>((x282<=x283)&x284));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x289 = INT16_MAX;
	uint8_t x290 = 52U;
	int16_t x291 = -1;
	uint64_t x292 = 49183385767LLU;
	static int32_t t46 = -416707849;

	t46 = (x289>>((x290<=x291)&x292));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x293 = 0U;
	static volatile int64_t x294 = 589594217LL;
	volatile int64_t x295 = INT64_MIN;
	int8_t x296 = -4;
	int32_t t47 = -57939;

	t47 = (x293>>((x294<=x295)&x296));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = 11544U;
	int32_t x303 = -202;
	int16_t x304 = INT16_MIN;
	uint32_t t48 = UINT32_MAX;

	t48 = (x301>>((x302<=x303)&x304));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 647255429U;
	static int16_t x308 = INT16_MIN;
	int32_t t49 = -1002787;

	t49 = (x305>>((x306<=x307)&x308));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x315 = 7U;
	uint8_t x316 = UINT8_MAX;

	t50 = (x313>>((x314<=x315)&x316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x322 = INT16_MAX;
	int64_t x323 = INT64_MAX;

	t51 = (x321>>((x322<=x323)&x324));

	if (t51 != 3066915U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x326 = 30863U;
	uint64_t t52 = 228057502155811427LLU;

	t52 = (x325>>((x326<=x327)&x328));

	if (t52 != 14284333387173557LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x337 = 48692613391563270LL;
	static volatile int32_t x338 = -2748454;
	static uint64_t x340 = UINT64_MAX;

	t53 = (x337>>((x338<=x339)&x340));

	if (t53 != 24346306695781635LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x345 = 186U;
	volatile uint64_t x346 = UINT64_MAX;
	static int8_t x348 = -1;
	int32_t t54 = -62;

	t54 = (x345>>((x346<=x347)&x348));

	if (t54 != 186) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x349 = 290;
	uint64_t x350 = 2693195712LLU;
	int32_t x351 = INT32_MAX;
	int8_t x352 = -1;

	t55 = (x349>>((x350<=x351)&x352));

	if (t55 != 290) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x369 = 4607;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	static int32_t t56 = 82823273;

	t56 = (x369>>((x370<=x371)&x372));

	if (t56 != 4607) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x374 = 1194U;
	uint8_t x375 = 5U;
	uint8_t x376 = 6U;
	volatile int32_t t57 = -1;

	t57 = (x373>>((x374<=x375)&x376));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x378 = INT8_MIN;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = 1LL;
	int64_t t58 = 400665190LL;

	t58 = (x377>>((x378<=x379)&x380));

	if (t58 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x389 = INT64_MAX;
	uint32_t x390 = 197U;
	volatile int64_t t59 = 1LL;

	t59 = (x389>>((x390<=x391)&x392));

	if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x405 = 22U;
	static uint8_t x406 = 18U;
	volatile int8_t x407 = 7;
	static int8_t x408 = -1;
	static uint32_t t60 = 20003U;

	t60 = (x405>>((x406<=x407)&x408));

	if (t60 != 22U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x414 = 389167;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 905678017U;
	static volatile int32_t t61 = -17159886;

	t61 = (x413>>((x414<=x415)&x416));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x421 = 0U;
	static int64_t x422 = INT64_MIN;
	volatile int64_t x423 = INT64_MIN;
	static volatile int32_t t62 = 1200;

	t62 = (x421>>((x422<=x423)&x424));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x426 = 1;
	static volatile int16_t x427 = -1;
	uint16_t x428 = UINT16_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (x425>>((x426<=x427)&x428));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x429 = UINT16_MAX;
	uint16_t x430 = 8U;
	int16_t x431 = 1;
	static int32_t x432 = INT32_MIN;

	t64 = (x429>>((x430<=x431)&x432));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x437 = INT64_MAX;
	int32_t x439 = -1;

	t65 = (x437>>((x438<=x439)&x440));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x441 = INT8_MAX;
	int16_t x442 = -297;
	volatile int32_t x443 = INT32_MAX;
	uint8_t x444 = 11U;

	t66 = (x441>>((x442<=x443)&x444));

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x449 = UINT8_MAX;
	int32_t x450 = INT32_MIN;
	uint8_t x452 = 24U;
	volatile int32_t t67 = -1298;

	t67 = (x449>>((x450<=x451)&x452));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x454 = 124077LLU;
	volatile int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	static volatile int32_t t68 = 940622;

	t68 = (x453>>((x454<=x455)&x456));

	if (t68 != 33) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x457 = 3462065U;
	int8_t x458 = 6;
	int64_t x459 = INT64_MAX;
	static volatile uint8_t x460 = UINT8_MAX;
	volatile uint32_t t69 = 12065U;

	t69 = (x457>>((x458<=x459)&x460));

	if (t69 != 1731032U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x477 = 60U;
	uint8_t x478 = UINT8_MAX;
	int32_t x480 = 667;
	static int32_t t70 = 1838141;

	t70 = (x477>>((x478<=x479)&x480));

	if (t70 != 30) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x488 = INT8_MIN;
	int64_t t71 = -52140901514150148LL;

	t71 = (x485>>((x486<=x487)&x488));

	if (t71 != 32386636LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x505 = INT16_MAX;
	int64_t x506 = -1LL;
	uint16_t x507 = 731U;
	int8_t x508 = -1;
	static volatile int32_t t72 = -4783;

	t72 = (x505>>((x506<=x507)&x508));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x510 = -1;
	uint8_t x511 = 13U;
	static uint64_t x512 = 30284657030LLU;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x509>>((x510<=x511)&x512));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x514 = 6128U;
	static int64_t x515 = INT64_MIN;
	int32_t x516 = INT32_MIN;
	static volatile int32_t t74 = 0;

	t74 = (x513>>((x514<=x515)&x516));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x517 = 2578944U;
	int8_t x518 = -8;
	int64_t x519 = INT64_MIN;
	int32_t x520 = -1;
	uint32_t t75 = 29889U;

	t75 = (x517>>((x518<=x519)&x520));

	if (t75 != 2578944U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x521 = 48U;
	uint16_t x522 = 14U;
	uint8_t x523 = 1U;
	int32_t x524 = 1909375;
	int32_t t76 = -1872;

	t76 = (x521>>((x522<=x523)&x524));

	if (t76 != 48) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x529 = 37U;
	int16_t x530 = -1;
	uint8_t x531 = 1U;
	int64_t x532 = INT64_MIN;

	t77 = (x529>>((x530<=x531)&x532));

	if (t77 != 37) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x541 = UINT16_MAX;
	int32_t x543 = INT32_MIN;
	int16_t x544 = -10972;
	int32_t t78 = 3338;

	t78 = (x541>>((x542<=x543)&x544));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x549 = INT64_MAX;
	int64_t x551 = 946837151443LL;
	int16_t x552 = INT16_MIN;

	t79 = (x549>>((x550<=x551)&x552));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x574 = INT64_MIN;
	uint8_t x575 = 100U;
	static int64_t x576 = 4223145634LL;
	static int32_t t80 = -437;

	t80 = (x573>>((x574<=x575)&x576));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x581 = 102117205322594745LLU;
	volatile uint16_t x582 = 140U;
	volatile int16_t x583 = 0;
	volatile int16_t x584 = -1;
	static volatile uint64_t t81 = 1335499404707108LLU;

	t81 = (x581>>((x582<=x583)&x584));

	if (t81 != 102117205322594745LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x594 = -1;
	static uint64_t x595 = UINT64_MAX;
	int32_t x596 = -1;
	int32_t t82 = 11329;

	t82 = (x593>>((x594<=x595)&x596));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x601 = 89U;
	static uint32_t x603 = UINT32_MAX;
	uint64_t x604 = 11851980LLU;
	static int32_t t83 = 2720;

	t83 = (x601>>((x602<=x603)&x604));

	if (t83 != 89) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x629 = INT64_MAX;
	uint32_t x630 = UINT32_MAX;
	static uint64_t x632 = UINT64_MAX;
	static int64_t t84 = 13672769280LL;

	t84 = (x629>>((x630<=x631)&x632));

	if (t84 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x633 = INT64_MAX;
	static volatile uint16_t x634 = UINT16_MAX;
	uint32_t x635 = 1U;
	int8_t x636 = INT8_MIN;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x633>>((x634<=x635)&x636));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x637 = UINT8_MAX;
	int16_t x638 = -6593;
	volatile int8_t x639 = -1;
	int32_t t86 = -96;

	t86 = (x637>>((x638<=x639)&x640));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x653 = INT32_MAX;
	static uint32_t x654 = UINT32_MAX;
	int64_t x655 = -1LL;
	uint8_t x656 = 1U;
	volatile int32_t t87 = INT32_MAX;

	t87 = (x653>>((x654<=x655)&x656));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x657 = INT16_MAX;
	uint8_t x658 = 0U;
	uint32_t x659 = UINT32_MAX;
	int16_t x660 = -1;
	volatile int32_t t88 = 23812792;

	t88 = (x657>>((x658<=x659)&x660));

	if (t88 != 16383) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x661 = 8U;
	int16_t x662 = 1;
	int64_t x663 = 0LL;
	int16_t x664 = -1;
	volatile int32_t t89 = 21424533;

	t89 = (x661>>((x662<=x663)&x664));

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x665 = 7980;
	uint8_t x666 = 2U;
	static uint64_t x667 = 92LLU;
	int32_t x668 = 0;
	int32_t t90 = -41;

	t90 = (x665>>((x666<=x667)&x668));

	if (t90 != 7980) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x669 = 52U;
	int16_t x670 = -3;
	uint32_t x671 = UINT32_MAX;
	volatile uint32_t t91 = 169525782U;

	t91 = (x669>>((x670<=x671)&x672));

	if (t91 != 26U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x685 = 29;
	int32_t x686 = -1;
	uint32_t x687 = 13825110U;
	volatile uint16_t x688 = UINT16_MAX;
	static int32_t t92 = 111132;

	t92 = (x685>>((x686<=x687)&x688));

	if (t92 != 29) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x701 = INT64_MAX;
	int64_t x702 = INT64_MIN;
	static int16_t x703 = -1;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x701>>((x702<=x703)&x704));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x721 = 498;
	static int16_t x722 = -1;
	int8_t x723 = -1;
	int64_t x724 = 36449810LL;

	t94 = (x721>>((x722<=x723)&x724));

	if (t94 != 498) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x725 = 237556873795114LLU;
	int32_t x726 = INT32_MIN;
	uint64_t x727 = 1542123LLU;
	static uint64_t t95 = 171193812843694171LLU;

	t95 = (x725>>((x726<=x727)&x728));

	if (t95 != 237556873795114LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x733 = UINT8_MAX;
	int8_t x734 = -1;
	volatile int64_t x735 = 19490LL;
	int64_t x736 = 298127450783LL;
	int32_t t96 = 31;

	t96 = (x733>>((x734<=x735)&x736));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x741 = 3LLU;
	volatile uint32_t x742 = 1U;

	t97 = (x741>>((x742<=x743)&x744));

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x753 = INT16_MAX;
	static uint16_t x754 = 6U;
	volatile int8_t x755 = INT8_MAX;
	static uint8_t x756 = UINT8_MAX;

	t98 = (x753>>((x754<=x755)&x756));

	if (t98 != 16383) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x761 = INT8_MAX;
	static int32_t x764 = -1783;
	int32_t t99 = 0;

	t99 = (x761>>((x762<=x763)&x764));

	if (t99 != 63) { NG(); } else { ; }
	
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

