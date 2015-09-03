#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
int64_t x5 = INT64_MAX;
uint16_t x8 = UINT16_MAX;
static uint64_t x12 = 2707LLU;
int16_t x21 = INT16_MAX;
volatile int16_t x37 = INT16_MIN;
volatile int32_t x38 = INT32_MAX;
volatile uint32_t t5 = 881036371U;
int64_t x42 = -88706911676052LL;
int16_t x44 = 525;
static uint32_t x51 = 218935U;
volatile uint16_t x56 = UINT16_MAX;
static int8_t x57 = INT8_MAX;
volatile int32_t t10 = -66701735;
uint32_t t11 = 956333U;
static uint8_t x85 = 13U;
static int16_t x91 = 201;
int16_t x97 = INT16_MAX;
volatile uint16_t x98 = UINT16_MAX;
int32_t x113 = -1;
uint64_t x114 = 99928808532026LLU;
int32_t x118 = INT32_MAX;
uint32_t t17 = 36622U;
uint32_t x122 = 382U;
uint8_t x123 = 91U;
volatile int16_t x125 = INT16_MAX;
volatile int32_t t19 = -134993;
int64_t x131 = -1LL;
static uint64_t x137 = 10032144LLU;
volatile int16_t x147 = -3;
int32_t t22 = -50954111;
int64_t x149 = -3767365298512LL;
static int16_t x152 = -1;
int16_t x154 = INT16_MAX;
int8_t x162 = INT8_MIN;
static uint16_t x163 = 1U;
static uint16_t x164 = UINT16_MAX;
volatile int16_t x165 = 0;
static int32_t x166 = INT32_MIN;
static int32_t x186 = INT32_MIN;
static int8_t x192 = INT8_MIN;
uint64_t t28 = 970054883815LLU;
volatile int64_t x198 = INT64_MIN;
int8_t x203 = -1;
volatile uint32_t t31 = 92001U;
int32_t x212 = INT32_MIN;
volatile uint32_t x215 = 1455284189U;
static uint64_t t33 = 71259281865LLU;
int8_t x222 = -1;
static volatile int8_t x260 = INT8_MIN;
uint32_t x266 = UINT32_MAX;
int8_t x267 = 1;
volatile int8_t x268 = -1;
static int16_t x281 = INT16_MIN;
uint16_t x284 = UINT16_MAX;
uint64_t t43 = 5491796LLU;
static volatile int16_t x325 = INT16_MIN;
int64_t x326 = 20313769294321749LL;
volatile int32_t t46 = 1;
int64_t x350 = INT64_MIN;
volatile int8_t x351 = INT8_MIN;
static int16_t x359 = -1;
volatile uint32_t t50 = 142506924U;
uint32_t x373 = 36292566U;
int32_t x379 = INT32_MIN;
static int32_t x386 = INT32_MAX;
int16_t x387 = -14209;
int64_t x394 = INT64_MAX;
uint64_t x421 = 98LLU;
int8_t x422 = INT8_MIN;
volatile int32_t x441 = INT32_MIN;
int64_t t59 = -936575364LL;
int32_t t61 = -3;
static int16_t x461 = INT16_MIN;
volatile int64_t x464 = 8030272818LL;
int16_t x475 = INT16_MIN;
uint32_t t65 = 634U;
uint64_t x490 = UINT64_MAX;
int64_t x495 = INT64_MIN;
uint32_t x504 = UINT32_MAX;
int8_t x519 = -9;
static int8_t x520 = INT8_MAX;
int32_t t70 = 149;
static volatile int32_t x523 = INT32_MAX;
volatile uint16_t x545 = 0U;
int64_t t73 = 7LL;
volatile uint64_t x555 = 12063705520634203LLU;
int64_t x578 = INT64_MIN;
static volatile uint64_t x594 = UINT64_MAX;
volatile uint64_t x595 = 26390395873LLU;
volatile int16_t x607 = INT16_MAX;
int64_t x622 = INT64_MIN;
volatile int8_t x624 = 3;
static int32_t x634 = INT32_MAX;
static uint64_t x637 = 28011762807LLU;
int16_t x644 = INT16_MAX;
volatile int8_t x649 = 0;
int32_t x650 = 2511;
uint8_t x668 = 9U;
static uint16_t x689 = UINT16_MAX;
uint64_t x702 = 1645104653LLU;
volatile uint64_t x704 = 140323036441LLU;
uint8_t x705 = 0U;
uint64_t x708 = 1768527212329818LLU;
int64_t t95 = INT64_MIN;
volatile int32_t x729 = 3345365;
volatile int16_t x730 = INT16_MIN;
volatile int64_t t97 = 6431613LL;
static int16_t x743 = INT16_MAX;
uint8_t x745 = 7U;
volatile int32_t t99 = -2032554;


void f0(void) {
	int32_t x1 = -1;
	static uint8_t x2 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 1453428222397659LL;

	t0 = ((x1/(x2/x3))+x4);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 2888;
	uint8_t x7 = 31U;
	volatile int64_t t1 = -537656395LL;

	t1 = ((x5/(x6/x7))+x8);

	if (t1 != 99176043407106135LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 1U;
	static int32_t x10 = INT32_MIN;
	static volatile int32_t x11 = INT32_MIN;
	static uint64_t t2 = 346810228787031LLU;

	t2 = ((x9/(x10/x11))+x12);

	if (t2 != 2708LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	volatile int8_t x24 = INT8_MIN;
	int32_t t3 = -825467260;

	t3 = ((x21/(x22/x23))+x24);

	if (t3 != -386) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	volatile int32_t t4 = -7193;

	t4 = ((x33/(x34/x35))+x36);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x39 = 16034U;
	int16_t x40 = INT16_MIN;

	t5 = ((x37/(x38/x39))+x40);

	if (t5 != 4294966595U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -3390;
	int32_t x43 = INT32_MIN;
	static int64_t t6 = -3185089687090LL;

	t6 = ((x41/(x42/x43))+x44);

	if (t6 != 525LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -1;
	int32_t x52 = INT32_MIN;
	uint32_t t7 = 15486U;

	t7 = ((x49/(x50/x51))+x52);

	if (t7 != 2147702589U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = INT64_MIN;
	volatile uint32_t x54 = 2130519U;
	uint8_t x55 = 6U;
	volatile int64_t t8 = -800LL;

	t8 = ((x53/(x54/x55))+x56);

	if (t8 != -25975037071538LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x58 = UINT64_MAX;
	int16_t x59 = -3;
	static volatile int32_t x60 = -789;
	uint64_t t9 = 976LLU;

	t9 = ((x57/(x58/x59))+x60);

	if (t9 != 18446744073709550954LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	int8_t x63 = 1;
	int32_t x64 = -199184;

	t10 = ((x61/(x62/x63))+x64);

	if (t10 != -199184) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = 14855;
	int8_t x75 = -1;
	uint32_t x76 = 6U;

	t11 = ((x73/(x74/x75))+x76);

	if (t11 != 4294822739U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x77 = INT64_MAX;
	uint32_t x78 = 23U;
	static int64_t x79 = -1LL;
	int8_t x80 = -1;
	int64_t t12 = -18064LL;

	t12 = ((x77/(x78/x79))+x80);

	if (t12 != -401016175515425036LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x86 = -3307878;
	int16_t x87 = -1;
	int16_t x88 = -1;
	volatile int32_t t13 = -43;

	t13 = ((x85/(x86/x87))+x88);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	uint32_t x92 = 53U;
	uint32_t t14 = 335786747U;

	t14 = ((x89/(x90/x91))+x92);

	if (t14 != 254U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x99 = 14U;
	static volatile uint8_t x100 = 1U;
	uint32_t t15 = 51992563U;

	t15 = ((x97/(x98/x99))+x100);

	if (t15 != 8U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x115 = 421U;
	static uint8_t x116 = 1U;
	uint64_t t16 = 1717155LLU;

	t16 = ((x113/(x114/x115))+x116);

	if (t16 != 77716120LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x119 = 1894U;
	int8_t x120 = 7;

	t17 = ((x117/(x118/x119))+x120);

	if (t17 != 1901U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x121 = UINT32_MAX;
	static int8_t x124 = -1;
	volatile uint32_t t18 = 169433041U;

	t18 = ((x121/(x122/x123))+x124);

	if (t18 != 1073741822U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x126 = 5811;
	int32_t x127 = -1;
	int16_t x128 = INT16_MIN;

	t19 = ((x125/(x126/x127))+x128);

	if (t19 != -32773) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	int64_t x132 = 351029331775LL;
	volatile int64_t t20 = 58LL;

	t20 = ((x129/(x130/x131))+x132);

	if (t20 != 351029331775LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x138 = 3306U;
	int8_t x139 = -55;
	uint8_t x140 = 1U;
	uint64_t t21 = 9LLU;

	t21 = ((x137/(x138/x139))+x140);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x145 = INT8_MAX;
	volatile int16_t x146 = INT16_MAX;
	static int32_t x148 = -1;

	t22 = ((x145/(x146/x147))+x148);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = -1;
	volatile int64_t t23 = -4228840312478812LL;

	t23 = ((x149/(x150/x151))+x152);

	if (t23 != 57486308LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x153 = 262652145;
	uint8_t x155 = 1U;
	uint8_t x156 = 3U;
	int32_t t24 = 133;

	t24 = ((x153/(x154/x155))+x156);

	if (t24 != 8018) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = -1;
	int32_t t25 = 2096232;

	t25 = ((x161/(x162/x163))+x164);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x167 = INT16_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t26 = 1;

	t26 = ((x165/(x166/x167))+x168);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = -1;
	volatile int8_t x187 = 3;
	int8_t x188 = -20;
	static volatile int32_t t27 = -105144355;

	t27 = ((x185/(x186/x187))+x188);

	if (t27 != -20) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x189 = 1083911LLU;
	int64_t x190 = -1LL;
	int32_t x191 = -1;

	t28 = ((x189/(x190/x191))+x192);

	if (t28 != 1083783LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x197 = 13419976135585LLU;
	volatile uint16_t x199 = 3U;
	int8_t x200 = INT8_MIN;
	uint64_t t29 = 5995216246LLU;

	t29 = ((x197/(x198/x199))+x200);

	if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = 356355523;
	int8_t x204 = -1;
	int32_t t30 = -33954286;

	t30 = ((x201/(x202/x203))+x204);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MIN;
	static int32_t x207 = -3;
	volatile uint32_t x208 = 20402U;

	t31 = ((x205/(x206/x207))+x208);

	if (t31 != 19622U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x209 = -1;
	int32_t x210 = INT32_MIN;
	uint64_t x211 = 493299LLU;
	static uint64_t t32 = 12650LLU;

	t32 = ((x209/(x210/x211))+x212);

	if (t32 != 18446744071562561267LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x213 = UINT8_MAX;
	int32_t x214 = -1;
	static volatile uint64_t x216 = 648714351411285LLU;

	t33 = ((x213/(x214/x215))+x216);

	if (t33 != 648714351411412LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x221 = -1;
	volatile uint32_t x223 = UINT32_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t34 = -52497LL;

	t34 = ((x221/(x222/x223))+x224);

	if (t34 != 4294967294LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x225 = INT64_MIN;
	static uint32_t x226 = 16089483U;
	volatile uint32_t x227 = 2477439U;
	volatile uint32_t x228 = UINT32_MAX;
	volatile int64_t t35 = -3421058LL;

	t35 = ((x225/(x226/x227))+x228);

	if (t35 != -1537228668514162006LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x229 = INT32_MIN;
	volatile int16_t x230 = INT16_MIN;
	static volatile uint64_t x231 = 24223LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t36 = 94469628LLU;

	t36 = ((x229/(x230/x231))+x232);

	if (t36 != 18446744071562092190LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x233 = -11948LL;
	volatile int64_t x234 = INT64_MAX;
	int16_t x235 = INT16_MAX;
	int32_t x236 = INT32_MIN;
	int64_t t37 = 102445400486019LL;

	t37 = ((x233/(x234/x235))+x236);

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x249 = INT32_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MAX;
	int32_t t38 = 150463;

	t38 = ((x249/(x250/x251))+x252);

	if (t38 != -2147483520) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x257 = 1LLU;
	static volatile int8_t x258 = INT8_MAX;
	int8_t x259 = -1;
	static uint64_t t39 = 84739LLU;

	t39 = ((x257/(x258/x259))+x260);

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x265 = -1;
	uint32_t t40 = 15944U;

	t40 = ((x265/(x266/x267))+x268);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x282 = INT32_MAX;
	int8_t x283 = INT8_MIN;
	volatile int32_t t41 = 28753;

	t41 = ((x281/(x282/x283))+x284);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x289 = -125621;
	int32_t x290 = INT32_MAX;
	uint16_t x291 = 1126U;
	volatile int8_t x292 = -7;
	volatile int32_t t42 = 4094726;

	t42 = ((x289/(x290/x291))+x292);

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x317 = -3;
	uint64_t x318 = 294942424LLU;
	int64_t x319 = 1836557LL;
	int64_t x320 = INT64_MAX;

	t43 = ((x317/(x318/x319))+x320);

	if (t43 != 9338664187315460504LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x327 = UINT8_MAX;
	volatile int8_t x328 = INT8_MAX;
	volatile int64_t t44 = 680850212LL;

	t44 = ((x325/(x326/x327))+x328);

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x333 = 66149929U;
	uint64_t x334 = 1264057LLU;
	int8_t x335 = 48;
	uint32_t x336 = UINT32_MAX;
	static volatile uint64_t t45 = 473663011LLU;

	t45 = ((x333/(x334/x335))+x336);

	if (t45 != 4294969806LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x345 = -1;
	int16_t x346 = INT16_MAX;
	volatile int16_t x347 = INT16_MAX;
	static int32_t x348 = INT32_MAX;

	t46 = ((x345/(x346/x347))+x348);

	if (t46 != 2147483646) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x349 = INT16_MIN;
	int64_t x352 = INT64_MAX;
	int64_t t47 = INT64_MAX;

	t47 = ((x349/(x350/x351))+x352);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x357 = 2;
	volatile int16_t x358 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t48 = INT32_MIN;

	t48 = ((x357/(x358/x359))+x360);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x361 = -1;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -1;
	volatile int64_t t49 = 31751932898488LL;

	t49 = ((x361/(x362/x363))+x364);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = -1;
	static uint32_t x371 = UINT32_MAX;
	static volatile int8_t x372 = 5;

	t50 = ((x369/(x370/x371))+x372);

	if (t50 != 4U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x374 = 39747U;
	uint8_t x375 = 59U;
	int8_t x376 = INT8_MAX;
	volatile uint32_t t51 = 703989U;

	t51 = ((x373/(x374/x375))+x376);

	if (t51 != 54053U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x377 = 219LL;
	uint64_t x378 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	volatile uint64_t t52 = 4125961830795LLU;

	t52 = ((x377/(x378/x379))+x380);

	if (t52 != 91LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x385 = -218;
	volatile int8_t x388 = INT8_MIN;
	int32_t t53 = -1405452;

	t53 = ((x385/(x386/x387))+x388);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MIN;
	int8_t x391 = -1;
	int32_t x392 = -1;
	volatile int64_t t54 = -274400462892794LL;

	t54 = ((x389/(x390/x391))+x392);

	if (t54 != -281474976710657LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x393 = 177700831052607908LLU;
	int32_t x395 = INT32_MAX;
	int16_t x396 = -6;
	volatile uint64_t t55 = 27699029000254686LLU;

	t55 = ((x393/(x394/x395))+x396);

	if (t55 != 41374192LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x397 = -1;
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = -10102LL;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x397/(x398/x399))+x400);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x417 = -1;
	int64_t x418 = 56623LL;
	int8_t x419 = INT8_MIN;
	uint32_t x420 = 4004696U;
	int64_t t57 = -33466826LL;

	t57 = ((x417/(x418/x419))+x420);

	if (t57 != 4004696LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x423 = -1;
	int8_t x424 = 0;
	static uint64_t t58 = 288711LLU;

	t58 = ((x421/(x422/x423))+x424);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x442 = -924593681654LL;
	static volatile int8_t x443 = -1;
	int16_t x444 = INT16_MIN;

	t59 = ((x441/(x442/x443))+x444);

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x445 = 6U;
	int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = ((x445/(x446/x447))+x448);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x457 = INT8_MAX;
	int32_t x458 = -1;
	int32_t x459 = -1;
	uint8_t x460 = 3U;

	t61 = ((x457/(x458/x459))+x460);

	if (t61 != 130) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	int64_t t62 = -109784872658066LL;

	t62 = ((x461/(x462/x463))+x464);

	if (t62 != 8030240050LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	int16_t x471 = INT16_MAX;
	uint64_t x472 = 28738522568LLU;
	volatile uint64_t t63 = 7LLU;

	t63 = ((x469/(x470/x471))+x472);

	if (t63 != 28738555335LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x473 = UINT8_MAX;
	int32_t x474 = 343667;
	uint64_t x476 = 29710050LLU;
	uint64_t t64 = 7LLU;

	t64 = ((x473/(x474/x475))+x476);

	if (t64 != 29710025LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x477 = 52U;
	int32_t x478 = -12458;
	uint8_t x479 = UINT8_MAX;
	volatile uint32_t x480 = 2737941U;

	t65 = ((x477/(x478/x479))+x480);

	if (t65 != 2737940U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x489 = -15;
	volatile int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MIN;
	volatile uint64_t t66 = 272413285987LLU;

	t66 = ((x489/(x490/x491))+x492);

	if (t66 != 18446744073709518833LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x493 = 960224297715704243LLU;
	volatile uint64_t x494 = UINT64_MAX;
	int64_t x496 = -1LL;
	uint64_t t67 = 7LLU;

	t67 = ((x493/(x494/x495))+x496);

	if (t67 != 960224297715704242LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x497 = 1U;
	int64_t x498 = INT64_MIN;
	volatile int16_t x499 = 12214;
	int8_t x500 = INT8_MIN;
	int64_t t68 = 15LL;

	t68 = ((x497/(x498/x499))+x500);

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x501 = INT16_MAX;
	volatile uint16_t x502 = UINT16_MAX;
	int8_t x503 = -1;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x501/(x502/x503))+x504);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x517 = 324U;
	uint16_t x518 = 20U;

	t70 = ((x517/(x518/x519))+x520);

	if (t70 != -35) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x521 = INT8_MAX;
	int32_t x522 = INT32_MAX;
	volatile int16_t x524 = INT16_MAX;
	static int32_t t71 = -58653;

	t71 = ((x521/(x522/x523))+x524);

	if (t71 != 32894) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x546 = INT16_MIN;
	int8_t x547 = 1;
	int16_t x548 = -1;
	static volatile int32_t t72 = 0;

	t72 = ((x545/(x546/x547))+x548);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x549 = -1;
	int64_t x550 = INT64_MIN;
	static uint32_t x551 = 56U;
	int8_t x552 = INT8_MAX;

	t73 = ((x549/(x550/x551))+x552);

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x553 = UINT16_MAX;
	int16_t x554 = INT16_MIN;
	int32_t x556 = -1;
	uint64_t t74 = 871265320LLU;

	t74 = ((x553/(x554/x555))+x556);

	if (t74 != 41LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x577 = -1;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 25481U;
	volatile int64_t t75 = -17140925922LL;

	t75 = ((x577/(x578/x579))+x580);

	if (t75 != 25481LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x581 = 191125142824LLU;
	volatile int64_t x582 = -97387760317LL;
	int32_t x583 = 161;
	int32_t x584 = -113602;
	static volatile uint64_t t76 = 3422049227LLU;

	t76 = ((x581/(x582/x583))+x584);

	if (t76 != 18446744073709438014LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x585 = 4012U;
	int64_t x586 = 1024218698101LL;
	int16_t x587 = -1;
	int64_t x588 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = ((x585/(x586/x587))+x588);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x593 = UINT16_MAX;
	int8_t x596 = -1;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x593/(x594/x595))+x596);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x597 = -1;
	int64_t x598 = INT64_MIN;
	int64_t x599 = INT64_MAX;
	volatile int64_t x600 = -1LL;
	volatile int64_t t79 = -151829559859LL;

	t79 = ((x597/(x598/x599))+x600);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x601 = INT8_MIN;
	int32_t x602 = -1;
	uint32_t x603 = 334U;
	int64_t x604 = -1LL;
	int64_t t80 = -12LL;

	t80 = ((x601/(x602/x603))+x604);

	if (t80 != 333LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x605 = 195031943LLU;
	static uint32_t x606 = 999655401U;
	static volatile int64_t x608 = INT64_MIN;
	volatile uint64_t t81 = 6633124333LLU;

	t81 = ((x605/(x606/x607))+x608);

	if (t81 != 9223372036854782201LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x621 = -1;
	uint16_t x623 = UINT16_MAX;
	int64_t t82 = 66935268218314490LL;

	t82 = ((x621/(x622/x623))+x624);

	if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x633 = -8927553143609932LL;
	int32_t x635 = 250612181;
	int16_t x636 = -1;
	static int64_t t83 = -8159LL;

	t83 = ((x633/(x634/x635))+x636);

	if (t83 != -1115944142951242LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x638 = 198986385;
	static int32_t x639 = 91668868;
	int8_t x640 = 41;
	uint64_t t84 = 58305749093LLU;

	t84 = ((x637/(x638/x639))+x640);

	if (t84 != 14005881444LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x641 = -1;
	uint8_t x642 = UINT8_MAX;
	static int64_t x643 = -1LL;
	volatile int64_t t85 = 606480LL;

	t85 = ((x641/(x642/x643))+x644);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x651 = 74U;
	uint8_t x652 = UINT8_MAX;
	volatile uint32_t t86 = 101U;

	t86 = ((x649/(x650/x651))+x652);

	if (t86 != 255U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x661 = INT16_MIN;
	int32_t x662 = INT32_MAX;
	volatile uint8_t x663 = 12U;
	static volatile int8_t x664 = INT8_MIN;
	int32_t t87 = -25175622;

	t87 = ((x661/(x662/x663))+x664);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x665 = 556821441130013121LLU;
	int8_t x666 = INT8_MIN;
	int8_t x667 = INT8_MIN;
	static uint64_t t88 = 130381229013295LLU;

	t88 = ((x665/(x666/x667))+x668);

	if (t88 != 556821441130013130LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x669 = 6U;
	int8_t x670 = INT8_MIN;
	uint16_t x671 = 42U;
	static volatile uint16_t x672 = 244U;
	int32_t t89 = 6696476;

	t89 = ((x669/(x670/x671))+x672);

	if (t89 != 242) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x690 = INT16_MIN;
	int8_t x691 = -1;
	static int64_t x692 = -1LL;
	volatile int64_t t90 = -2618LL;

	t90 = ((x689/(x690/x691))+x692);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x701 = 750;
	uint16_t x703 = 86U;
	volatile uint64_t t91 = 414LLU;

	t91 = ((x701/(x702/x703))+x704);

	if (t91 != 140323036441LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x706 = INT16_MIN;
	int8_t x707 = -1;
	static uint64_t t92 = 141340398015167744LLU;

	t92 = ((x705/(x706/x707))+x708);

	if (t92 != 1768527212329818LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x709 = 31526U;
	int8_t x710 = INT8_MIN;
	volatile uint32_t x711 = 334U;
	uint16_t x712 = UINT16_MAX;
	uint32_t t93 = 1U;

	t93 = ((x709/(x710/x711))+x712);

	if (t93 != 65535U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x717 = -1LL;
	static int16_t x718 = INT16_MAX;
	int16_t x719 = -213;
	volatile int16_t x720 = 5;
	int64_t t94 = -694364631033927LL;

	t94 = ((x717/(x718/x719))+x720);

	if (t94 != 5LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x725 = INT32_MIN;
	int64_t x726 = 1757989177567LL;
	volatile uint16_t x727 = 182U;
	int64_t x728 = INT64_MIN;

	t95 = ((x725/(x726/x727))+x728);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x731 = INT16_MAX;
	uint16_t x732 = 566U;
	volatile int32_t t96 = -3;

	t96 = ((x729/(x730/x731))+x732);

	if (t96 != -3344799) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x733 = 1;
	int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MAX;
	int16_t x736 = INT16_MIN;

	t97 = ((x733/(x734/x735))+x736);

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x741 = INT32_MAX;
	int64_t x742 = INT64_MIN;
	static volatile int16_t x744 = 794;
	int64_t t98 = 13830991311171762LL;

	t98 = ((x741/(x742/x743))+x744);

	if (t98 != 794LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x746 = INT16_MAX;
	uint8_t x747 = UINT8_MAX;
	int16_t x748 = -1;

	t99 = ((x745/(x746/x747))+x748);

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

