#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 0LLU;
int16_t x22 = INT16_MAX;
int64_t x42 = -1LL;
volatile uint32_t x45 = 51063015U;
volatile uint64_t t6 = 14LLU;
static volatile uint8_t x73 = UINT8_MAX;
static int8_t x87 = 22;
uint32_t t8 = 1029485704U;
int16_t x99 = -1;
int32_t x100 = -45736135;
int8_t x107 = -12;
volatile uint64_t x113 = 2610696110769556149LLU;
volatile int32_t x114 = 1056;
static volatile uint32_t x117 = 1U;
uint16_t x125 = UINT16_MAX;
int32_t x126 = INT32_MIN;
int8_t x137 = INT8_MIN;
uint32_t x140 = 64219U;
uint32_t t15 = 22113U;
uint64_t x148 = 8242874LLU;
static uint64_t t16 = 8499500067126551LLU;
uint32_t x154 = 361790U;
volatile int64_t x176 = -118221348LL;
uint32_t x186 = UINT32_MAX;
int16_t x187 = -1;
int64_t t20 = -1821126992550915815LL;
static volatile int8_t x189 = INT8_MIN;
int16_t x190 = -1;
uint64_t x201 = UINT64_MAX;
int32_t x213 = INT32_MIN;
uint16_t x215 = 6418U;
uint8_t x235 = UINT8_MAX;
uint32_t t28 = 210968493U;
uint32_t x244 = 8826200U;
uint64_t t30 = 491504047278241LLU;
int64_t x252 = -3546232LL;
int8_t x253 = INT8_MIN;
volatile uint16_t x254 = 337U;
static volatile int32_t t33 = 3523;
uint32_t x263 = UINT32_MAX;
int64_t t38 = 38409189LL;
int32_t x282 = -1;
int64_t x285 = 986075LL;
int8_t x310 = 1;
uint32_t t45 = 2008U;
uint8_t x336 = 4U;
uint64_t x339 = UINT64_MAX;
int8_t x354 = INT8_MIN;
volatile uint32_t x360 = 3690U;
static uint64_t t53 = 458558031945044LLU;
int16_t x372 = INT16_MAX;
int32_t x374 = -75978;
int64_t t55 = 815933865929666916LL;
int64_t x382 = 3871509137LL;
int8_t x386 = INT8_MIN;
int16_t x392 = INT16_MIN;
static int8_t x393 = INT8_MIN;
uint16_t x396 = UINT16_MAX;
uint64_t t60 = 716684131LLU;
int16_t x403 = 0;
uint8_t x406 = UINT8_MAX;
static int64_t x409 = 77589107275810490LL;
int16_t x421 = -1;
uint16_t x440 = UINT16_MAX;
int64_t x452 = 75226LL;
static volatile uint32_t x454 = 1282742369U;
volatile int32_t x456 = INT32_MIN;
static int32_t x464 = INT32_MAX;
int16_t x470 = -1;
static uint8_t x481 = 2U;
int32_t x518 = 16;
volatile uint64_t t76 = 1618867892069269328LLU;
static uint8_t x525 = UINT8_MAX;
static int64_t x526 = -1LL;
int8_t x528 = -1;
int16_t x530 = INT16_MIN;
int8_t x549 = INT8_MIN;
static uint8_t x550 = 0U;
int8_t x551 = 10;
volatile int32_t t84 = -38639160;
volatile uint8_t x580 = 11U;
volatile uint32_t t85 = 1340752U;
volatile int32_t x601 = INT32_MIN;
int16_t x604 = INT16_MAX;
int32_t x612 = 870;
static int8_t x620 = INT8_MAX;
int16_t x622 = INT16_MAX;
volatile int32_t x630 = -1520338;
int32_t x631 = -1;
int32_t t92 = 0;
int64_t x639 = -29090998481LL;
volatile int8_t x642 = 1;
static int8_t x643 = INT8_MIN;
int64_t x644 = -45379441789249474LL;
volatile uint32_t x646 = UINT32_MAX;
uint16_t x660 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = 39771261277LLU;
	int16_t x2 = -14;
	int16_t x3 = INT16_MIN;
	volatile uint32_t x4 = 5488729U;

	t0 = (x1+((x2*x3)-x4));

	if (t0 != 44061198596LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	static int64_t x11 = -161327LL;
	int8_t x12 = INT8_MIN;
	static volatile int64_t t1 = 661563573LL;

	t1 = (x9+((x10*x11)-x12));

	if (t1 != 20650111LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x21 = UINT8_MAX;
	uint32_t x23 = 5U;
	static int8_t x24 = -1;
	static volatile uint32_t t2 = 1U;

	t2 = (x21+((x22*x23)-x24));

	if (t2 != 164091U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x41 = 18U;
	int64_t x43 = -1LL;
	volatile int8_t x44 = -1;
	volatile int64_t t3 = -126LL;

	t3 = (x41+((x42*x43)-x44));

	if (t3 != 20LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x46 = 42;
	volatile int16_t x47 = -303;
	int8_t x48 = -31;
	uint32_t t4 = 1U;

	t4 = (x45+((x46*x47)-x48));

	if (t4 != 51050320U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = -1;
	volatile int16_t x54 = -1291;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = 1;
	static uint32_t t5 = 62785859U;

	t5 = (x53+((x54*x55)-x56));

	if (t5 != 1289U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x62 = 1U;
	uint64_t x63 = UINT64_MAX;
	static uint64_t x64 = 256554LLU;

	t6 = (x61+((x62*x63)-x64));

	if (t6 != 9223372036854519252LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x74 = 2U;
	int32_t x75 = 494427;
	int16_t x76 = INT16_MIN;
	volatile int32_t t7 = 126283108;

	t7 = (x73+((x74*x75)-x76));

	if (t7 != 1021877) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x85 = -1;
	volatile uint8_t x86 = 1U;
	static uint32_t x88 = 2180U;

	t8 = (x85+((x86*x87)-x88));

	if (t8 != 4294965137U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x97 = INT16_MIN;
	static volatile uint8_t x98 = 31U;
	int32_t t9 = -50;

	t9 = (x97+((x98*x99)-x100));

	if (t9 != 45703336) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x101 = 0U;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 242083LLU;
	static uint16_t x104 = UINT16_MAX;
	volatile uint64_t t10 = 41LLU;

	t10 = (x101+((x102*x103)-x104));

	if (t10 != 9223372036854468190LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x105 = 879363828;
	uint64_t x106 = 1397692LLU;
	uint16_t x108 = 25488U;
	uint64_t t11 = 2170838LLU;

	t11 = (x105+((x106*x107)-x108));

	if (t11 != 862566036LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x115 = 44;
	uint64_t x116 = 35870141297038LLU;
	static uint64_t t12 = 196797377859LLU;

	t12 = (x113+((x114*x115)-x116));

	if (t12 != 2610660240628305575LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x118 = -1;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = -1;
	volatile uint32_t t13 = 51643U;

	t13 = (x117+((x118*x119)-x120));

	if (t13 != 4294901763U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x127 = 1LL;
	int8_t x128 = -1;
	volatile int64_t t14 = -1LL;

	t14 = (x125+((x126*x127)-x128));

	if (t14 != -2147418112LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = -7875;

	t15 = (x137+((x138*x139)-x140));

	if (t15 != 4294910824U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x145 = -1;
	static int16_t x146 = -1;
	static uint32_t x147 = 22U;

	t16 = (x145+((x146*x147)-x148));

	if (t16 != 4286724399LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x153 = UINT16_MAX;
	uint16_t x155 = 7U;
	uint64_t x156 = 1702556968871211686LLU;
	uint64_t t17 = 12561128314405060LLU;

	t17 = (x153+((x154*x155)-x156));

	if (t17 != 16744187104840937995LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x165 = UINT8_MAX;
	volatile uint16_t x166 = 29U;
	int64_t x167 = -1LL;
	int16_t x168 = -2;
	volatile int64_t t18 = -6306223594574309LL;

	t18 = (x165+((x166*x167)-x168));

	if (t18 != 228LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x173 = -1;
	volatile int8_t x174 = -1;
	volatile uint16_t x175 = UINT16_MAX;
	static volatile int64_t t19 = 100970306355182LL;

	t19 = (x173+((x174*x175)-x176));

	if (t19 != 118155812LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x185 = INT16_MIN;
	static int64_t x188 = 17813LL;

	t20 = (x185+((x186*x187)-x188));

	if (t20 != -50580LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x191 = -1;
	int16_t x192 = -210;
	int32_t t21 = -35243;

	t21 = (x189+((x190*x191)-x192));

	if (t21 != 83) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x197 = INT32_MIN;
	volatile int16_t x198 = -3512;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = 5U;
	int32_t t22 = 21005083;

	t22 = (x197+((x198*x199)-x200));

	if (t22 != -2032402437) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	static int8_t x204 = INT8_MAX;
	uint64_t t23 = 108LLU;

	t23 = (x201+((x202*x203)-x204));

	if (t23 != 2147483520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x214 = -1;
	uint32_t x216 = 28U;
	volatile uint32_t t24 = 3281226U;

	t24 = (x213+((x214*x215)-x216));

	if (t24 != 2147477202U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x221 = INT8_MIN;
	int32_t x222 = 1452467;
	volatile int8_t x223 = -7;
	int64_t x224 = INT64_MIN;
	int64_t t25 = 15577011096271810LL;

	t25 = (x221+((x222*x223)-x224));

	if (t25 != 9223372036844608411LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x225 = -1LL;
	static int32_t x226 = -3930;
	uint16_t x227 = 54U;
	int8_t x228 = INT8_MIN;
	volatile int64_t t26 = -1LL;

	t26 = (x225+((x226*x227)-x228));

	if (t26 != -212093LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x229 = -1;
	static int32_t x230 = 17034;
	int64_t x231 = -7856LL;
	uint16_t x232 = 3U;
	volatile int64_t t27 = -27130104LL;

	t27 = (x229+((x230*x231)-x232));

	if (t27 != -133819108LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x233 = 1;
	uint8_t x234 = 5U;
	uint32_t x236 = 208U;

	t28 = (x233+((x234*x235)-x236));

	if (t28 != 1068U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x237 = 946U;
	int16_t x238 = 84;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = 779156LLU;
	volatile uint64_t t29 = 3699040LLU;

	t29 = (x237+((x238*x239)-x240));

	if (t29 != 18446744073708773322LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x241 = 2;
	int16_t x242 = INT16_MAX;
	volatile uint64_t x243 = 140042139282474734LLU;

	t30 = (x241+((x242*x243)-x244));

	if (t30 != 13968247588871982012LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x245 = 11U;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	uint64_t t31 = 4LLU;

	t31 = (x245+((x246*x247)-x248));

	if (t31 != 32652LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x249 = -1;
	volatile int16_t x250 = INT16_MAX;
	int8_t x251 = -52;
	volatile int64_t t32 = -32980LL;

	t32 = (x249+((x250*x251)-x252));

	if (t32 != 1842347LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x255 = 16;
	int8_t x256 = INT8_MIN;

	t33 = (x253+((x254*x255)-x256));

	if (t33 != 5392) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x257 = 1906;
	int16_t x258 = INT16_MAX;
	static int16_t x259 = 37;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t34 = -16;

	t34 = (x257+((x258*x259)-x260));

	if (t34 != 1247053) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x261 = 8;
	uint8_t x262 = UINT8_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t35 = 118465625825436LLU;

	t35 = (x261+((x262*x263)-x264));

	if (t35 != 4294967050LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = 63;
	uint16_t x267 = 276U;
	uint32_t x268 = 158776125U;
	uint32_t t36 = 118569321U;

	t36 = (x265+((x266*x267)-x268));

	if (t36 != 1988724911U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x273 = -1LL;
	uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 9941301248LLU;
	static int32_t x276 = INT32_MIN;
	uint64_t t37 = 104253571488LLU;

	t37 = (x273+((x274*x275)-x276));

	if (t37 != 18446744065915734015LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = 40U;
	static uint8_t x279 = UINT8_MAX;
	volatile int64_t x280 = 0LL;

	t38 = (x277+((x278*x279)-x280));

	if (t38 != 10072LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x281 = UINT64_MAX;
	static int8_t x283 = -1;
	volatile uint16_t x284 = UINT16_MAX;
	uint64_t t39 = 1LLU;

	t39 = (x281+((x282*x283)-x284));

	if (t39 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x286 = -11430;
	static int16_t x287 = INT16_MAX;
	static volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t40 = 19265324681726739LLU;

	t40 = (x285+((x286*x287)-x288));

	if (t40 != 18446744073336010882LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = UINT64_MAX;
	volatile int16_t x295 = -6;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t41 = 1807201380943LLU;

	t41 = (x293+((x294*x295)-x296));

	if (t41 != 18446744071562068102LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	static int8_t x300 = INT8_MIN;
	volatile uint64_t t42 = 1LLU;

	t42 = (x297+((x298*x299)-x300));

	if (t42 != 18446744071562100863LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x309 = UINT16_MAX;
	static uint32_t x311 = 21369586U;
	uint8_t x312 = 110U;
	volatile uint32_t t43 = 144U;

	t43 = (x309+((x310*x311)-x312));

	if (t43 != 21435011U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x321 = INT8_MIN;
	int16_t x322 = -7;
	int32_t x323 = 20;
	uint16_t x324 = 25U;
	int32_t t44 = -11;

	t44 = (x321+((x322*x323)-x324));

	if (t44 != -293) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 112U;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = 40U;

	t45 = (x329+((x330*x331)-x332));

	if (t45 != 7340135U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x333 = -1;
	volatile int64_t x334 = -272LL;
	int64_t x335 = -1LL;
	volatile int64_t t46 = 51LL;

	t46 = (x333+((x334*x335)-x336));

	if (t46 != 267LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int16_t x338 = 13;
	int32_t x340 = INT32_MIN;
	static uint64_t t47 = 1907605097LLU;

	t47 = (x337+((x338*x339)-x340));

	if (t47 != 6442450930LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x345 = 10;
	int16_t x346 = -5614;
	static uint16_t x347 = UINT16_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t48 = -1;

	t48 = (x345+((x346*x347)-x348));

	if (t48 != -367913352) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x349 = 26U;
	int8_t x350 = INT8_MAX;
	volatile int64_t x351 = -510050600536734LL;
	int16_t x352 = 503;
	static volatile int64_t t49 = -176206821LL;

	t49 = (x349+((x350*x351)-x352));

	if (t49 != -64776426268165695LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x353 = -1LL;
	int16_t x355 = 11068;
	uint16_t x356 = 1064U;
	volatile int64_t t50 = 8LL;

	t50 = (x353+((x354*x355)-x356));

	if (t50 != -1417769LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x357 = INT16_MIN;
	uint64_t x358 = 2615728082517633LLU;
	uint8_t x359 = 111U;
	uint64_t t51 = 35827170LLU;

	t51 = (x357+((x358*x359)-x360));

	if (t51 != 290345817159420805LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x361 = 196U;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 3448671U;
	int8_t x364 = -1;
	volatile uint32_t t52 = 2045061U;

	t52 = (x361+((x362*x363)-x364));

	if (t52 != 1333453158U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = -1;
	uint64_t x367 = 11814777LLU;
	uint8_t x368 = UINT8_MAX;

	t53 = (x365+((x366*x367)-x368));

	if (t53 != 18446744071550252936LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile int32_t x370 = -105237534;
	static uint64_t x371 = 22180LLU;
	static uint64_t t54 = 8850337LLU;

	t54 = (x369+((x370*x371)-x372));

	if (t54 != 18446741737393531081LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x373 = -1;
	int16_t x375 = 178;
	static int64_t x376 = INT64_MIN;

	t55 = (x373+((x374*x375)-x376));

	if (t55 != 9223372036841251723LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x381 = INT8_MAX;
	static volatile uint8_t x383 = 4U;
	static volatile int16_t x384 = INT16_MAX;
	static volatile int64_t t56 = -30622316316469631LL;

	t56 = (x381+((x382*x383)-x384));

	if (t56 != 15486003908LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x385 = -5;
	uint8_t x387 = 0U;
	int64_t x388 = -1LL;
	int64_t t57 = 1754812884689787LL;

	t57 = (x385+((x386*x387)-x388));

	if (t57 != -4LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x389 = INT32_MIN;
	uint64_t x390 = 18220447647LLU;
	volatile int8_t x391 = INT8_MAX;
	volatile uint64_t t58 = 107855702795844987LLU;

	t58 = (x389+((x390*x391)-x392));

	if (t58 != 2311849400289LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x394 = 1950053458LL;
	static volatile uint64_t x395 = 2906375598322LLU;
	uint64_t t59 = 889888702LLU;

	t59 = (x393+((x394*x395)-x396));

	if (t59 != 4437355125802685701LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 954548697555639426LLU;
	volatile uint32_t x399 = 12381U;
	int8_t x400 = INT8_MIN;

	t60 = (x397+((x398*x399)-x400));

	if (t60 != 12351217260111215546LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x401 = 109U;
	int8_t x402 = -57;
	static int8_t x404 = -1;
	int32_t t61 = -4;

	t61 = (x401+((x402*x403)-x404));

	if (t61 != 110) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x405 = -380935487LL;
	int8_t x407 = -6;
	uint32_t x408 = 11U;
	int64_t t62 = 590LL;

	t62 = (x405+((x406*x407)-x408));

	if (t62 != 3914030268LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x410 = INT8_MIN;
	volatile int16_t x411 = INT16_MIN;
	static uint32_t x412 = 1264861U;
	static volatile int64_t t63 = 396LL;

	t63 = (x409+((x410*x411)-x412));

	if (t63 != 77589107278739933LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x422 = -1031200LL;
	uint8_t x423 = 44U;
	uint8_t x424 = 0U;
	static volatile int64_t t64 = -198163996474641LL;

	t64 = (x421+((x422*x423)-x424));

	if (t64 != -45372801LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x433 = INT64_MAX;
	uint64_t x434 = UINT64_MAX;
	int32_t x435 = -825966;
	volatile int64_t x436 = INT64_MIN;
	static volatile uint64_t t65 = 191542225606LLU;

	t65 = (x433+((x434*x435)-x436));

	if (t65 != 825965LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x437 = 5;
	int16_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	static int32_t t66 = 851961548;

	t66 = (x437+((x438*x439)-x440));

	if (t66 != -32762) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x441 = 2248938404376669384LLU;
	int8_t x442 = INT8_MAX;
	volatile int64_t x443 = -1LL;
	static int16_t x444 = INT16_MIN;
	volatile uint64_t t67 = 15073703710LLU;

	t67 = (x441+((x442*x443)-x444));

	if (t67 != 2248938404376702025LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x449 = 21U;
	volatile int16_t x450 = -14;
	uint8_t x451 = UINT8_MAX;
	volatile int64_t t68 = 84140501LL;

	t68 = (x449+((x450*x451)-x452));

	if (t68 != -78775LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x453 = 8U;
	uint64_t x455 = 49697299LLU;
	static volatile uint64_t t69 = 575899687614LLU;

	t69 = (x453+((x454*x455)-x456));

	if (t69 != 63748833199644987LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x461 = INT8_MAX;
	uint32_t x462 = UINT32_MAX;
	int8_t x463 = -2;
	static volatile uint32_t t70 = 650411072U;

	t70 = (x461+((x462*x463)-x464));

	if (t70 != 2147483778U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x469 = 102U;
	uint16_t x471 = UINT16_MAX;
	volatile int32_t x472 = INT32_MIN;
	volatile int32_t t71 = 22840;

	t71 = (x469+((x470*x471)-x472));

	if (t71 != 2147418215) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x482 = -7221;
	static uint64_t x483 = 28389949572169763LLU;
	volatile int64_t x484 = INT64_MIN;
	uint64_t t72 = 157LLU;

	t72 = (x481+((x482*x483)-x484));

	if (t72 != 7133730987021984963LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x497 = 3468896666144430LL;
	int16_t x498 = -1;
	uint16_t x499 = 1245U;
	uint32_t x500 = UINT32_MAX;
	int64_t t73 = 4183239LL;

	t73 = (x497+((x498*x499)-x500));

	if (t73 != 3468900961110482LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x505 = INT32_MAX;
	int8_t x506 = INT8_MIN;
	int8_t x507 = -1;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t74 = -122;

	t74 = (x505+((x506*x507)-x508));

	if (t74 != 2147483520) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x513 = 7U;
	uint32_t x514 = 3949U;
	int64_t x515 = -2752945507LL;
	int8_t x516 = -1;
	volatile int64_t t75 = 4586LL;

	t75 = (x513+((x514*x515)-x516));

	if (t75 != -10871381807135LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x517 = 175920140363LL;
	uint64_t x519 = 20659696LLU;
	uint64_t x520 = 117884499949676331LLU;

	t76 = (x517+((x518*x519)-x520));

	if (t76 != 18328859750010570784LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x521 = 286;
	volatile int32_t x522 = -1;
	uint16_t x523 = 17U;
	int16_t x524 = INT16_MIN;
	static int32_t t77 = -98575671;

	t77 = (x521+((x522*x523)-x524));

	if (t77 != 33037) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x527 = INT8_MIN;
	static int64_t t78 = 1LL;

	t78 = (x525+((x526*x527)-x528));

	if (t78 != 384LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x529 = UINT32_MAX;
	static uint32_t x531 = 3U;
	uint64_t x532 = 852261867670279403LLU;
	uint64_t t79 = 186695809492LLU;

	t79 = (x529+((x530*x531)-x532));

	if (t79 != 17594482214629108500LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x533 = -1;
	uint16_t x534 = 439U;
	int32_t x535 = -1;
	int16_t x536 = INT16_MAX;
	int32_t t80 = -26790007;

	t80 = (x533+((x534*x535)-x536));

	if (t80 != -33207) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x541 = -1;
	volatile uint8_t x542 = UINT8_MAX;
	uint16_t x543 = 3U;
	static volatile int8_t x544 = INT8_MIN;
	volatile int32_t t81 = -6635975;

	t81 = (x541+((x542*x543)-x544));

	if (t81 != 892) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x552 = -309LL;
	volatile int64_t t82 = -175654694730388LL;

	t82 = (x549+((x550*x551)-x552));

	if (t82 != 181LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x553 = INT64_MIN;
	int16_t x554 = INT16_MIN;
	uint64_t x555 = 15265219952LLU;
	int32_t x556 = INT32_MIN;
	volatile uint64_t t83 = 79336LLU;

	t83 = (x553+((x554*x555)-x556));

	if (t83 != 9222871828274872320LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x569 = 50U;
	volatile int16_t x570 = 13;
	static uint8_t x571 = UINT8_MAX;
	int8_t x572 = 1;

	t84 = (x569+((x570*x571)-x572));

	if (t84 != 3364) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x577 = UINT32_MAX;
	int8_t x578 = -1;
	int16_t x579 = INT16_MIN;

	t85 = (x577+((x578*x579)-x580));

	if (t85 != 32756U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x589 = -1;
	volatile uint32_t x590 = 5588562U;
	volatile int16_t x591 = -1;
	uint8_t x592 = 49U;
	uint32_t t86 = 764688U;

	t86 = (x589+((x590*x591)-x592));

	if (t86 != 4289378684U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x597 = 46;
	static volatile int16_t x598 = 0;
	int64_t x599 = INT64_MIN;
	int64_t x600 = -49902075954LL;
	static int64_t t87 = 2LL;

	t87 = (x597+((x598*x599)-x600));

	if (t87 != 49902076000LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x602 = 1046346;
	int32_t x603 = 3;
	int32_t t88 = 2;

	t88 = (x601+((x602*x603)-x604));

	if (t88 != -2144377377) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x609 = 1;
	volatile int8_t x610 = INT8_MAX;
	volatile uint32_t x611 = 8606352U;
	uint32_t t89 = 5889U;

	t89 = (x609+((x610*x611)-x612));

	if (t89 != 1093005835U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x617 = UINT8_MAX;
	static int16_t x618 = INT16_MAX;
	int16_t x619 = INT16_MIN;
	int32_t t90 = -99;

	t90 = (x617+((x618*x619)-x620));

	if (t90 != -1073708928) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x621 = -587022218069LL;
	static int8_t x623 = INT8_MIN;
	volatile uint32_t x624 = 68982U;
	volatile int64_t t91 = -103328034LL;

	t91 = (x621+((x622*x623)-x624));

	if (t91 != -582731513931LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x629 = 24U;
	int8_t x632 = INT8_MIN;

	t92 = (x629+((x630*x631)-x632));

	if (t92 != 1520490) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x633 = -1LL;
	int64_t x634 = 24930262672805758LL;
	uint64_t x635 = 1LLU;
	static uint32_t x636 = 86U;
	volatile uint64_t t93 = 318589LLU;

	t93 = (x633+((x634*x635)-x636));

	if (t93 != 24930262672805671LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x637 = INT32_MIN;
	uint64_t x638 = 1378LLU;
	int32_t x640 = INT32_MAX;
	volatile uint64_t t94 = 24471175491596291LLU;

	t94 = (x637+((x638*x639)-x640));

	if (t94 != 18446703982018677503LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x641 = 25U;
	volatile int64_t t95 = 1853576079155011LL;

	t95 = (x641+((x642*x643)-x644));

	if (t95 != 45379441789249371LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x645 = INT32_MIN;
	static int8_t x647 = -1;
	uint16_t x648 = 312U;
	uint32_t t96 = 15U;

	t96 = (x645+((x646*x647)-x648));

	if (t96 != 2147483337U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x649 = INT32_MIN;
	uint64_t x650 = 9893537918981681LLU;
	int16_t x651 = -1;
	int64_t x652 = INT64_MIN;
	uint64_t t97 = 409215629578LLU;

	t97 = (x649+((x650*x651)-x652));

	if (t97 != 9213478496788310479LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x653 = 2166U;
	int16_t x654 = -1;
	uint8_t x655 = UINT8_MAX;
	int64_t x656 = 110186065041753595LL;
	int64_t t98 = 15LL;

	t98 = (x653+((x654*x655)-x656));

	if (t98 != -110186065041751684LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x657 = -1;
	int32_t x658 = -12157230;
	uint8_t x659 = 10U;
	volatile int32_t t99 = -419222;

	t99 = (x657+((x658*x659)-x660));

	if (t99 != -121637836) { NG(); } else { ; }
	
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

