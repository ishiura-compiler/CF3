#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 43844977U;
uint8_t x2 = 17U;
volatile uint64_t x4 = 104LLU;
uint16_t x12 = UINT16_MAX;
uint16_t x14 = 24U;
static volatile int32_t t2 = -9;
int8_t x26 = -1;
int64_t x83 = INT64_MIN;
uint16_t x89 = 6U;
int32_t t6 = 0;
volatile int32_t x109 = INT32_MAX;
int16_t x110 = INT16_MIN;
uint8_t x112 = 14U;
static int16_t x114 = 178;
volatile int8_t x130 = 0;
int32_t t11 = 15;
static int16_t x145 = -1;
int8_t x146 = 0;
int32_t t12 = -1;
int64_t x154 = -4235851201LL;
int8_t x178 = 1;
int16_t x190 = INT16_MIN;
int8_t x192 = -1;
static int8_t x193 = INT8_MIN;
volatile int64_t x194 = INT64_MAX;
int64_t x195 = INT64_MIN;
volatile int64_t x210 = -6017605LL;
volatile uint16_t x216 = 2920U;
volatile int32_t t21 = 1969301;
int16_t x219 = -5752;
int32_t x220 = 10;
int16_t x226 = -2;
static int8_t x227 = INT8_MIN;
uint8_t x228 = UINT8_MAX;
int8_t x237 = INT8_MIN;
int32_t t25 = -1;
uint8_t x275 = 106U;
int32_t x276 = 894;
int32_t x278 = 282826;
int64_t x313 = INT64_MIN;
int32_t x315 = 82092;
volatile int32_t t33 = 7;
int32_t t34 = 1719019;
volatile int16_t x338 = 1336;
int32_t x358 = INT32_MIN;
volatile int32_t t36 = -7042;
uint8_t x365 = 75U;
static int32_t x385 = -1;
static uint32_t x392 = 20685779U;
uint64_t x410 = 205854327659385LLU;
uint64_t x416 = 1699683925022LLU;
int64_t x417 = 2116753618401766LL;
int64_t x418 = 3300794026346500421LL;
int8_t x426 = INT8_MIN;
uint8_t x428 = UINT8_MAX;
int16_t x432 = 48;
int8_t x437 = -1;
int64_t x453 = INT64_MAX;
int32_t x458 = 4672777;
uint64_t x459 = 3LLU;
static int32_t t52 = 0;
int32_t t54 = -242;
static int32_t t56 = 1;
int16_t x508 = INT16_MIN;
uint32_t x520 = 571U;
int8_t x523 = -23;
int8_t x541 = -1;
volatile int64_t x543 = -243622284035LL;
volatile int32_t t62 = -1788;
uint32_t x546 = 7496U;
volatile int32_t t64 = 80520163;
static int8_t x575 = -3;
uint16_t x588 = UINT16_MAX;
int16_t x605 = INT16_MIN;
static volatile int32_t t69 = 5850448;
volatile int32_t t70 = -274;
volatile int32_t t71 = -1;
uint64_t x661 = UINT64_MAX;
static int8_t x663 = -4;
int32_t t74 = 25358690;
static volatile int32_t x681 = -516379;
int32_t t75 = -4209632;
static volatile int16_t x690 = INT16_MIN;
uint8_t x697 = UINT8_MAX;
uint64_t x700 = UINT64_MAX;
static int32_t t77 = -5946994;
int64_t x703 = INT64_MIN;
uint32_t x704 = 12886U;
static int64_t x709 = INT64_MIN;
int8_t x726 = INT8_MIN;
static volatile uint8_t x727 = 0U;
static uint16_t x734 = 7U;
volatile int32_t x742 = INT32_MAX;
int32_t t82 = 30;
int16_t x751 = INT16_MAX;
static uint64_t x752 = 1893974505LLU;
static int32_t t83 = -245;
int32_t t84 = -1436374;
volatile int32_t x765 = 40803;
static volatile int16_t x766 = -29;
int64_t x767 = -1407238326525447LL;
int64_t x800 = 226228LL;
static uint64_t x804 = 5592809467LLU;
uint32_t x811 = 10617611U;
int16_t x848 = INT16_MAX;
int16_t x851 = INT16_MAX;
static int64_t x852 = INT64_MAX;
int32_t x856 = -1;
volatile int16_t x871 = -1;


void f0(void) {
	volatile uint8_t x3 = 1U;
	int32_t t0 = -4;

	t0 = ((x1<=x2)%(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 98U;
	int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	int32_t t1 = 164976;

	t1 = ((x9<=x10)%(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 5U;
	static int64_t x15 = INT64_MIN;
	uint32_t x16 = 58791U;

	t2 = ((x13<=x14)%(x15<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x25 = 7596751;
	int64_t x27 = -1LL;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t3 = 1446972;

	t3 = ((x25<=x26)%(x27<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x63 = -1;
	uint8_t x64 = 25U;
	static int32_t t4 = 24304828;

	t4 = ((x61<=x62)%(x63<x64));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x81 = INT8_MIN;
	int8_t x82 = -1;
	static volatile uint32_t x84 = UINT32_MAX;
	int32_t t5 = 317086;

	t5 = ((x81<=x82)%(x83<x84));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x90 = INT32_MAX;
	int8_t x91 = INT8_MIN;
	volatile int32_t x92 = -1;

	t6 = ((x89<=x90)%(x91<x92));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = 4;
	volatile int8_t x95 = INT8_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t7 = 1;

	t7 = ((x93<=x94)%(x95<x96));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = 1;
	int64_t x107 = -94LL;
	uint16_t x108 = 4U;
	volatile int32_t t8 = 994;

	t8 = ((x105<=x106)%(x107<x108));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x111 = INT64_MIN;
	volatile int32_t t9 = 15113;

	t9 = ((x109<=x110)%(x111<x112));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x113 = INT32_MIN;
	uint16_t x115 = 26U;
	static uint16_t x116 = 165U;
	static int32_t t10 = 91;

	t10 = ((x113<=x114)%(x115<x116));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x131 = 8894;
	static int16_t x132 = INT16_MAX;

	t11 = ((x129<=x130)%(x131<x132));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x147 = 85079LLU;
	volatile int32_t x148 = INT32_MIN;

	t12 = ((x145<=x146)%(x147<x148));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x149 = -447349076LL;
	static int64_t x150 = INT64_MIN;
	static int8_t x151 = 1;
	int64_t x152 = INT64_MAX;
	volatile int32_t t13 = -26453058;

	t13 = ((x149<=x150)%(x151<x152));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x153 = 46812444001178LLU;
	uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = INT16_MAX;
	int32_t t14 = 892;

	t14 = ((x153<=x154)%(x155<x156));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x173 = INT32_MIN;
	static int8_t x174 = 1;
	volatile int32_t x175 = -1;
	static int16_t x176 = INT16_MAX;
	int32_t t15 = 619787097;

	t15 = ((x173<=x174)%(x175<x176));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x177 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t16 = 812172092;

	t16 = ((x177<=x178)%(x179<x180));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	int32_t t17 = -123;

	t17 = ((x189<=x190)%(x191<x192));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x196 = 181U;
	static int32_t t18 = 27016;

	t18 = ((x193<=x194)%(x195<x196));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MAX;
	int64_t x207 = -664728143LL;
	int8_t x208 = -1;
	int32_t t19 = 14896685;

	t19 = ((x205<=x206)%(x207<x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x209 = -1;
	int8_t x211 = INT8_MAX;
	static uint64_t x212 = UINT64_MAX;
	int32_t t20 = 208738;

	t20 = ((x209<=x210)%(x211<x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x213 = 827898218295403LLU;
	int8_t x214 = 0;
	int8_t x215 = INT8_MIN;

	t21 = ((x213<=x214)%(x215<x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x217 = UINT16_MAX;
	int16_t x218 = -1;
	volatile int32_t t22 = -1195695;

	t22 = ((x217<=x218)%(x219<x220));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x221 = -1;
	static int16_t x222 = INT16_MIN;
	volatile int8_t x223 = 15;
	volatile uint32_t x224 = 435U;
	volatile int32_t t23 = -1388503;

	t23 = ((x221<=x222)%(x223<x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x225 = 17515801969643177LLU;
	volatile int32_t t24 = -5687;

	t24 = ((x225<=x226)%(x227<x228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x238 = 2534;
	static int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

	t25 = ((x237<=x238)%(x239<x240));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x249 = 853657170;
	uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = INT8_MIN;
	static uint8_t x252 = 122U;
	volatile int32_t t26 = 524467884;

	t26 = ((x249<=x250)%(x251<x252));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x253 = UINT64_MAX;
	static volatile int64_t x254 = 5321LL;
	static uint64_t x255 = 3326118039454324LLU;
	static int32_t x256 = -30;
	static volatile int32_t t27 = -58318;

	t27 = ((x253<=x254)%(x255<x256));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x261 = 0;
	static uint16_t x262 = UINT16_MAX;
	int64_t x263 = -1365314465LL;
	int64_t x264 = -1LL;
	int32_t t28 = -13654;

	t28 = ((x261<=x262)%(x263<x264));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x273 = 103LL;
	int16_t x274 = INT16_MIN;
	int32_t t29 = -49158;

	t29 = ((x273<=x274)%(x275<x276));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x277 = -499110629LL;
	volatile uint64_t x279 = 8571661517816012383LLU;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t30 = -51;

	t30 = ((x277<=x278)%(x279<x280));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x285 = 17;
	int16_t x286 = -200;
	volatile int16_t x287 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	static volatile int32_t t31 = 458217;

	t31 = ((x285<=x286)%(x287<x288));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x289 = 7U;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 3U;
	uint8_t x292 = 47U;
	volatile int32_t t32 = 113294188;

	t32 = ((x289<=x290)%(x291<x292));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x314 = INT64_MIN;
	uint32_t x316 = UINT32_MAX;

	t33 = ((x313<=x314)%(x315<x316));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x333 = INT64_MAX;
	volatile uint64_t x334 = 24355908523LLU;
	int64_t x335 = INT64_MIN;
	static volatile int32_t x336 = -1;

	t34 = ((x333<=x334)%(x335<x336));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = -1;
	static int32_t x340 = INT32_MAX;
	int32_t t35 = -27256605;

	t35 = ((x337<=x338)%(x339<x340));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x357 = INT8_MAX;
	int16_t x359 = INT16_MIN;
	int64_t x360 = 2029636609031052LL;

	t36 = ((x357<=x358)%(x359<x360));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x366 = -260199LL;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 7670U;
	volatile int32_t t37 = -25724;

	t37 = ((x365<=x366)%(x367<x368));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x369 = INT8_MAX;
	uint64_t x370 = 31542408013930537LLU;
	int64_t x371 = -1LL;
	static uint32_t x372 = 826618231U;
	volatile int32_t t38 = -579988056;

	t38 = ((x369<=x370)%(x371<x372));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x373 = 761U;
	volatile uint32_t x374 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t39 = -118270085;

	t39 = ((x373<=x374)%(x375<x376));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = 624937U;
	volatile int32_t t40 = -1486826;

	t40 = ((x385<=x386)%(x387<x388));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x389 = -33086445LL;
	int8_t x390 = INT8_MIN;
	static volatile uint8_t x391 = UINT8_MAX;
	volatile int32_t t41 = -455587235;

	t41 = ((x389<=x390)%(x391<x392));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x401 = -1699317989LL;
	int64_t x402 = INT64_MAX;
	uint16_t x403 = 5561U;
	int16_t x404 = INT16_MAX;
	int32_t t42 = 568764389;

	t42 = ((x401<=x402)%(x403<x404));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x409 = 432;
	int32_t x411 = -9632;
	uint8_t x412 = 1U;
	static int32_t t43 = -22;

	t43 = ((x409<=x410)%(x411<x412));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x413 = 11U;
	static volatile uint16_t x414 = 3877U;
	uint8_t x415 = 7U;
	int32_t t44 = -82;

	t44 = ((x413<=x414)%(x415<x416));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x419 = INT64_MIN;
	int16_t x420 = 8;
	volatile int32_t t45 = 1746130;

	t45 = ((x417<=x418)%(x419<x420));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x421 = INT32_MIN;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = 0U;
	volatile uint32_t x424 = 170U;
	volatile int32_t t46 = -27;

	t46 = ((x421<=x422)%(x423<x424));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x425 = UINT8_MAX;
	static volatile uint16_t x427 = 21U;
	static int32_t t47 = -90599156;

	t47 = ((x425<=x426)%(x427<x428));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x429 = 1;
	volatile uint8_t x430 = UINT8_MAX;
	int64_t x431 = -24LL;
	static int32_t t48 = 20927329;

	t48 = ((x429<=x430)%(x431<x432));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x438 = UINT64_MAX;
	static int8_t x439 = -1;
	int64_t x440 = INT64_MAX;
	int32_t t49 = -19879;

	t49 = ((x437<=x438)%(x439<x440));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	static volatile int32_t x443 = -30652069;
	int32_t x444 = INT32_MAX;
	int32_t t50 = 379003;

	t50 = ((x441<=x442)%(x443<x444));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x454 = 0U;
	uint8_t x455 = 17U;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t51 = 2;

	t51 = ((x453<=x454)%(x455<x456));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x457 = 23LLU;
	volatile int8_t x460 = INT8_MIN;

	t52 = ((x457<=x458)%(x459<x460));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x461 = 19LLU;
	static volatile uint16_t x462 = 18U;
	uint64_t x463 = 8782840014256287LLU;
	static int8_t x464 = -1;
	volatile int32_t t53 = -165;

	t53 = ((x461<=x462)%(x463<x464));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x469 = 623;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MIN;
	uint16_t x472 = UINT16_MAX;

	t54 = ((x469<=x470)%(x471<x472));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x485 = -1;
	int32_t x486 = -98893;
	int16_t x487 = INT16_MIN;
	int8_t x488 = 1;
	static int32_t t55 = -144673709;

	t55 = ((x485<=x486)%(x487<x488));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x489 = -1;
	int32_t x490 = -1;
	int8_t x491 = -1;
	volatile int16_t x492 = INT16_MAX;

	t56 = ((x489<=x490)%(x491<x492));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x505 = 0;
	uint64_t x506 = 735595001LLU;
	int32_t x507 = INT32_MIN;
	int32_t t57 = -7637592;

	t57 = ((x505<=x506)%(x507<x508));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x517 = UINT16_MAX;
	volatile uint16_t x518 = UINT16_MAX;
	int64_t x519 = -1LL;
	static int32_t t58 = 157569;

	t58 = ((x517<=x518)%(x519<x520));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x521 = INT32_MIN;
	uint8_t x522 = UINT8_MAX;
	int8_t x524 = 2;
	volatile int32_t t59 = -490;

	t59 = ((x521<=x522)%(x523<x524));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x533 = 1705U;
	volatile int16_t x534 = INT16_MIN;
	volatile int16_t x535 = INT16_MIN;
	static int32_t x536 = 668738;
	int32_t t60 = 9183604;

	t60 = ((x533<=x534)%(x535<x536));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x537 = 15127LL;
	int8_t x538 = INT8_MIN;
	volatile int32_t x539 = INT32_MIN;
	volatile int16_t x540 = 76;
	int32_t t61 = -70;

	t61 = ((x537<=x538)%(x539<x540));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x542 = 15741;
	int8_t x544 = INT8_MAX;

	t62 = ((x541<=x542)%(x543<x544));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x545 = 153U;
	int16_t x547 = 26;
	int16_t x548 = 7424;
	volatile int32_t t63 = -11600485;

	t63 = ((x545<=x546)%(x547<x548));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x553 = 2U;
	int64_t x554 = INT64_MIN;
	volatile int64_t x555 = -1LL;
	uint8_t x556 = UINT8_MAX;

	t64 = ((x553<=x554)%(x555<x556));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MIN;
	uint8_t x576 = 1U;
	volatile int32_t t65 = -4;

	t65 = ((x573<=x574)%(x575<x576));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x585 = INT64_MIN;
	static int32_t x586 = INT32_MAX;
	uint8_t x587 = 81U;
	int32_t t66 = 15;

	t66 = ((x585<=x586)%(x587<x588));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x606 = 1633;
	uint32_t x607 = 32U;
	int32_t x608 = 629775899;
	static int32_t t67 = 5;

	t67 = ((x605<=x606)%(x607<x608));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x609 = INT16_MAX;
	int64_t x610 = INT64_MIN;
	static int16_t x611 = INT16_MIN;
	int32_t x612 = INT32_MAX;
	int32_t t68 = 0;

	t68 = ((x609<=x610)%(x611<x612));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x613 = INT32_MIN;
	volatile int8_t x614 = -3;
	uint64_t x615 = 1740282535935333LLU;
	int16_t x616 = INT16_MIN;

	t69 = ((x613<=x614)%(x615<x616));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x617 = INT8_MIN;
	volatile int8_t x618 = -1;
	int16_t x619 = -20;
	static volatile int8_t x620 = -1;

	t70 = ((x617<=x618)%(x619<x620));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x633 = INT32_MIN;
	volatile int8_t x634 = 0;
	uint32_t x635 = 45U;
	uint32_t x636 = 542U;

	t71 = ((x633<=x634)%(x635<x636));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x645 = -106;
	int8_t x646 = 19;
	int16_t x647 = -128;
	uint32_t x648 = UINT32_MAX;
	volatile int32_t t72 = -16368;

	t72 = ((x645<=x646)%(x647<x648));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x662 = 2;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t73 = -27358;

	t73 = ((x661<=x662)%(x663<x664));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x673 = -4;
	static uint8_t x674 = 0U;
	int64_t x675 = INT64_MIN;
	static int8_t x676 = INT8_MIN;

	t74 = ((x673<=x674)%(x675<x676));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x682 = INT32_MIN;
	int16_t x683 = -1;
	int64_t x684 = 1664027290901211934LL;

	t75 = ((x681<=x682)%(x683<x684));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x689 = INT16_MIN;
	int64_t x691 = -2341295590735LL;
	int8_t x692 = INT8_MAX;
	int32_t t76 = 2514214;

	t76 = ((x689<=x690)%(x691<x692));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x698 = 21167U;
	uint8_t x699 = 3U;

	t77 = ((x697<=x698)%(x699<x700));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x701 = 522U;
	int32_t x702 = INT32_MAX;
	int32_t t78 = -4294;

	t78 = ((x701<=x702)%(x703<x704));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x710 = 2U;
	int32_t x711 = INT32_MIN;
	uint16_t x712 = 28U;
	int32_t t79 = -31289;

	t79 = ((x709<=x710)%(x711<x712));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x725 = 25U;
	volatile uint8_t x728 = 26U;
	int32_t t80 = 0;

	t80 = ((x725<=x726)%(x727<x728));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x733 = UINT8_MAX;
	static uint16_t x735 = 0U;
	uint16_t x736 = 29731U;
	static int32_t t81 = -2;

	t81 = ((x733<=x734)%(x735<x736));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x741 = -17;
	volatile uint64_t x743 = 11LLU;
	int32_t x744 = -1;

	t82 = ((x741<=x742)%(x743<x744));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x749 = INT8_MIN;
	volatile int16_t x750 = INT16_MIN;

	t83 = ((x749<=x750)%(x751<x752));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x757 = -1;
	static uint32_t x758 = 412820512U;
	static uint32_t x759 = 0U;
	int16_t x760 = 7778;

	t84 = ((x757<=x758)%(x759<x760));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x768 = 1U;
	int32_t t85 = -26197;

	t85 = ((x765<=x766)%(x767<x768));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x769 = INT16_MIN;
	int16_t x770 = -1;
	uint64_t x771 = 201895229LLU;
	int32_t x772 = INT32_MIN;
	volatile int32_t t86 = 9928;

	t86 = ((x769<=x770)%(x771<x772));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x773 = INT16_MIN;
	uint16_t x774 = 5U;
	static int64_t x775 = INT64_MIN;
	int32_t x776 = 15488909;
	int32_t t87 = -313950;

	t87 = ((x773<=x774)%(x775<x776));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x777 = 466907U;
	static volatile uint32_t x778 = 432U;
	int8_t x779 = -2;
	uint16_t x780 = 658U;
	static int32_t t88 = 7367;

	t88 = ((x777<=x778)%(x779<x780));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x785 = INT8_MIN;
	uint64_t x786 = 45318663325612LLU;
	int32_t x787 = INT32_MIN;
	volatile uint8_t x788 = 1U;
	volatile int32_t t89 = -12052;

	t89 = ((x785<=x786)%(x787<x788));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x789 = 60U;
	int64_t x790 = -1LL;
	uint64_t x791 = 6234101451LLU;
	int32_t x792 = -1;
	static volatile int32_t t90 = -2023;

	t90 = ((x789<=x790)%(x791<x792));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x797 = 94;
	int32_t x798 = INT32_MIN;
	uint8_t x799 = 1U;
	volatile int32_t t91 = 1;

	t91 = ((x797<=x798)%(x799<x800));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x801 = 0U;
	static volatile int32_t x802 = 2305;
	int8_t x803 = 12;
	static int32_t t92 = 46219015;

	t92 = ((x801<=x802)%(x803<x804));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x809 = -6;
	static uint16_t x810 = 298U;
	static volatile uint64_t x812 = 30119452052690163LLU;
	int32_t t93 = -6;

	t93 = ((x809<=x810)%(x811<x812));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x821 = 1;
	volatile int16_t x822 = INT16_MIN;
	static uint32_t x823 = 1032871961U;
	uint64_t x824 = UINT64_MAX;
	int32_t t94 = 1021;

	t94 = ((x821<=x822)%(x823<x824));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x841 = 1955U;
	volatile uint8_t x842 = 0U;
	uint64_t x843 = 524516320059LLU;
	volatile uint64_t x844 = UINT64_MAX;
	volatile int32_t t95 = -320;

	t95 = ((x841<=x842)%(x843<x844));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x845 = INT16_MIN;
	int64_t x846 = 1313457LL;
	int32_t x847 = INT32_MIN;
	static int32_t t96 = -1;

	t96 = ((x845<=x846)%(x847<x848));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x849 = INT64_MIN;
	uint64_t x850 = 15LLU;
	int32_t t97 = -14730637;

	t97 = ((x849<=x850)%(x851<x852));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x853 = -1;
	static int64_t x854 = -4269550801329138414LL;
	static int32_t x855 = INT32_MIN;
	int32_t t98 = -4156206;

	t98 = ((x853<=x854)%(x855<x856));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x869 = 36;
	volatile int8_t x870 = -1;
	uint16_t x872 = 333U;
	volatile int32_t t99 = -19;

	t99 = ((x869<=x870)%(x871<x872));

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

