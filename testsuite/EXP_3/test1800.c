#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = 0U;
static int64_t x9 = INT64_MAX;
volatile uint8_t x10 = 6U;
int16_t x11 = INT16_MAX;
int32_t t1 = -586;
int16_t x18 = INT16_MIN;
volatile int64_t x20 = INT64_MAX;
int64_t x46 = 18554367LL;
int32_t t4 = 33308;
volatile uint32_t x50 = UINT32_MAX;
int64_t x51 = INT64_MIN;
uint16_t x70 = 552U;
int32_t t6 = -45;
int32_t t8 = -110326660;
volatile int64_t x117 = INT64_MIN;
int16_t x120 = INT16_MIN;
int8_t x131 = -5;
volatile int16_t x133 = -1;
int32_t t12 = 101922;
volatile uint32_t x139 = 14095U;
static int32_t t13 = 22;
static volatile int64_t x154 = -1LL;
int64_t x173 = 3949044045674LL;
int32_t x182 = 115226;
int32_t x202 = 63;
int16_t x203 = -1;
volatile int16_t x213 = INT16_MAX;
int32_t x216 = INT32_MIN;
volatile int8_t x226 = INT8_MIN;
int8_t x229 = 44;
uint16_t x232 = 3U;
static uint8_t x251 = 2U;
int64_t x252 = INT64_MAX;
static uint8_t x287 = 6U;
int16_t x288 = -5;
volatile int32_t t29 = -13991;
uint16_t x299 = 3U;
static volatile uint64_t x300 = 14537LLU;
static uint16_t x312 = 2U;
int64_t x328 = INT64_MIN;
static int32_t x339 = -1;
uint8_t x353 = 2U;
static int32_t x354 = INT32_MAX;
volatile int32_t t36 = -310;
int16_t x358 = 184;
int32_t x359 = 0;
uint8_t x391 = 3U;
int64_t x393 = -1LL;
int64_t x395 = INT64_MAX;
volatile uint64_t x441 = 39757067590692LLU;
int16_t x444 = INT16_MIN;
int16_t x471 = INT16_MIN;
int32_t t48 = -157187;
uint8_t x514 = 2U;
static volatile uint16_t x516 = 17U;
int16_t x517 = -751;
volatile int32_t x518 = -136;
uint64_t x520 = 15231605403789455LLU;
static int8_t x523 = INT8_MIN;
volatile int32_t t51 = 6456;
volatile uint32_t x542 = UINT32_MAX;
static int32_t x544 = INT32_MIN;
int32_t x586 = -75637;
static uint32_t x588 = 61U;
volatile int8_t x594 = -1;
int32_t t60 = 3596731;
int16_t x684 = 0;
static uint64_t x685 = 11LLU;
static uint16_t x687 = 5221U;
volatile int16_t x689 = INT16_MIN;
int32_t t63 = 315;
volatile uint8_t x695 = UINT8_MAX;
static int32_t t65 = 509;
int8_t x727 = 4;
static int32_t t67 = 34358296;
static uint8_t x771 = 59U;
int8_t x773 = 20;
int16_t x775 = INT16_MIN;
uint8_t x814 = UINT8_MAX;
int32_t t73 = 28338166;
uint32_t x843 = 63849501U;
int16_t x851 = 1933;
volatile uint8_t x854 = 1U;
int16_t x882 = INT16_MIN;
static uint8_t x884 = UINT8_MAX;
int8_t x919 = 1;
volatile int32_t x942 = -1928;
int32_t t82 = 17622;
volatile int64_t x946 = INT64_MAX;
int32_t t84 = -558902923;
int64_t x970 = -1LL;
int16_t x998 = -1;
uint64_t x999 = 260LLU;
volatile uint8_t x1000 = UINT8_MAX;
int32_t t87 = -33245;
uint32_t x1029 = 363377U;
int64_t x1035 = INT64_MIN;
static int16_t x1058 = INT16_MAX;
int16_t x1084 = INT16_MIN;
static uint32_t x1086 = 14111U;
volatile uint64_t x1101 = UINT64_MAX;


void f0(void) {
	uint64_t x5 = 3119LLU;
	uint32_t x7 = 1U;
	uint32_t x8 = 28U;
	static int32_t t0 = -88;

	t0 = ((x5<x6)<<(x7&x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x12 = INT32_MIN;

	t1 = ((x9<x10)<<(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x17 = UINT32_MAX;
	uint32_t x19 = 6U;
	volatile int32_t t2 = 4072991;

	t2 = ((x17<x18)<<(x19&x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = -1;
	static int32_t x42 = 509191116;
	volatile uint8_t x43 = 47U;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t3 = -9849138;

	t3 = ((x41<x42)<<(x43&x44));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x45 = INT32_MIN;
	static uint8_t x47 = 10U;
	int64_t x48 = -1LL;

	t4 = ((x45<x46)<<(x47&x48));

	if (t4 != 1024) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x49 = 1U;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t5 = 57592999;

	t5 = ((x49<x50)<<(x51&x52));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x69 = -4;
	uint8_t x71 = 1U;
	int8_t x72 = INT8_MIN;

	t6 = ((x69<x70)<<(x71&x72));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 2U;
	int64_t x84 = INT64_MIN;
	static volatile int32_t t7 = -234275187;

	t7 = ((x81<x82)<<(x83&x84));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x93 = 11U;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = INT32_MIN;
	static volatile uint8_t x96 = 16U;

	t8 = ((x93<x94)<<(x95&x96));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = 47024LLU;
	int32_t x100 = INT32_MIN;
	int32_t t9 = 3;

	t9 = ((x97<x98)<<(x99&x100));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x118 = UINT32_MAX;
	static uint8_t x119 = 12U;
	int32_t t10 = 83789;

	t10 = ((x117<x118)<<(x119&x120));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x129 = 1286532874996LLU;
	int8_t x130 = INT8_MIN;
	static volatile int8_t x132 = 31;
	static int32_t t11 = -374965870;

	t11 = ((x129<x130)<<(x131&x132));

	if (t11 != 134217728) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x134 = 94646617LLU;
	static volatile int64_t x135 = 109LL;
	volatile int32_t x136 = INT32_MIN;

	t12 = ((x133<x134)<<(x135&x136));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x137 = 54729U;
	volatile int64_t x138 = INT64_MIN;
	uint16_t x140 = 124U;

	t13 = ((x137<x138)<<(x139&x140));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x153 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t14 = 3007796;

	t14 = ((x153<x154)<<(x155&x156));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x157 = 360U;
	static int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 3988648U;
	int32_t t15 = 24868;

	t15 = ((x157<x158)<<(x159&x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x174 = 3U;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 0U;
	static volatile int32_t t16 = -4;

	t16 = ((x173<x174)<<(x175&x176));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x181 = 0;
	int8_t x183 = 14;
	int32_t x184 = INT32_MAX;
	int32_t t17 = -7561091;

	t17 = ((x181<x182)<<(x183&x184));

	if (t17 != 16384) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x197 = 801;
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = INT16_MAX;
	static volatile int32_t x200 = INT32_MIN;
	int32_t t18 = -29261614;

	t18 = ((x197<x198)<<(x199&x200));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x201 = 1624036801834077LL;
	int8_t x204 = 2;
	volatile int32_t t19 = 5;

	t19 = ((x201<x202)<<(x203&x204));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x205 = 81214107LLU;
	uint16_t x206 = 1U;
	int64_t x207 = INT64_MIN;
	static uint16_t x208 = 14858U;
	volatile int32_t t20 = -237308471;

	t20 = ((x205<x206)<<(x207&x208));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x214 = -9;
	uint8_t x215 = UINT8_MAX;
	int32_t t21 = 11;

	t21 = ((x213<x214)<<(x215&x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x221 = INT16_MAX;
	uint32_t x222 = UINT32_MAX;
	static uint64_t x223 = 1LLU;
	int64_t x224 = -1LL;
	volatile int32_t t22 = -284;

	t22 = ((x221<x222)<<(x223&x224));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x225 = 992;
	static int32_t x227 = -1;
	int16_t x228 = 1;
	static int32_t t23 = 121;

	t23 = ((x225<x226)<<(x227&x228));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x230 = INT64_MIN;
	int16_t x231 = 0;
	volatile int32_t t24 = 37785629;

	t24 = ((x229<x230)<<(x231&x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x245 = 11U;
	uint8_t x246 = 5U;
	uint64_t x247 = 6LLU;
	int16_t x248 = 2646;
	static int32_t t25 = -15537;

	t25 = ((x245<x246)<<(x247&x248));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = 7U;
	int32_t t26 = 4625;

	t26 = ((x249<x250)<<(x251&x252));

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x265 = 418U;
	int32_t x266 = -1;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = 3LLU;
	int32_t t27 = 19;

	t27 = ((x265<x266)<<(x267&x268));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x285 = 909624635LLU;
	int64_t x286 = 41815452029953256LL;
	int32_t t28 = -292653;

	t28 = ((x285<x286)<<(x287&x288));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x289 = 1U;
	int64_t x290 = 6221846298LL;
	uint8_t x291 = UINT8_MAX;
	volatile int16_t x292 = INT16_MIN;

	t29 = ((x289<x290)<<(x291&x292));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	volatile int32_t t30 = -5;

	t30 = ((x297<x298)<<(x299&x300));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x309 = 412841856U;
	int16_t x310 = INT16_MIN;
	volatile int64_t x311 = -1LL;
	volatile int32_t t31 = 0;

	t31 = ((x309<x310)<<(x311&x312));

	if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x325 = INT8_MAX;
	volatile int16_t x326 = INT16_MIN;
	static int32_t x327 = INT32_MAX;
	int32_t t32 = -33442034;

	t32 = ((x325<x326)<<(x327&x328));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x337 = 20564LLU;
	uint16_t x338 = UINT16_MAX;
	int8_t x340 = 16;
	int32_t t33 = 0;

	t33 = ((x337<x338)<<(x339&x340));

	if (t33 != 65536) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x341 = 237U;
	volatile uint8_t x342 = UINT8_MAX;
	volatile uint8_t x343 = 22U;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t34 = -61041564;

	t34 = ((x341<x342)<<(x343&x344));

	if (t34 != 4194304) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x349 = -1;
	int8_t x350 = 49;
	volatile int8_t x351 = 60;
	volatile int64_t x352 = INT64_MIN;
	static volatile int32_t t35 = 1;

	t35 = ((x349<x350)<<(x351&x352));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x355 = -818598191;
	int16_t x356 = 29;

	t36 = ((x353<x354)<<(x355&x356));

	if (t36 != 131072) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x357 = INT32_MIN;
	int16_t x360 = -1310;
	volatile int32_t t37 = 520;

	t37 = ((x357<x358)<<(x359&x360));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int64_t x366 = INT64_MIN;
	static uint8_t x367 = 26U;
	int64_t x368 = -1599992469168208LL;
	volatile int32_t t38 = 1686300;

	t38 = ((x365<x366)<<(x367&x368));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x389 = 53U;
	volatile int16_t x390 = INT16_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t39 = 1;

	t39 = ((x389<x390)<<(x391&x392));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x394 = 2LLU;
	static uint8_t x396 = 0U;
	volatile int32_t t40 = 1;

	t40 = ((x393<x394)<<(x395&x396));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x421 = INT8_MIN;
	static int64_t x422 = -206585841LL;
	static volatile int64_t x423 = 0LL;
	static int32_t x424 = -1;
	int32_t t41 = -650460;

	t41 = ((x421<x422)<<(x423&x424));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x425 = UINT8_MAX;
	static uint16_t x426 = 1U;
	uint16_t x427 = 29U;
	int32_t x428 = 103;
	volatile int32_t t42 = -7204394;

	t42 = ((x425<x426)<<(x427&x428));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x442 = INT16_MIN;
	static uint8_t x443 = UINT8_MAX;
	int32_t t43 = -120;

	t43 = ((x441<x442)<<(x443&x444));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x465 = INT64_MIN;
	volatile int8_t x466 = 0;
	uint32_t x467 = 179717650U;
	int8_t x468 = INT8_MAX;
	int32_t t44 = 1;

	t44 = ((x465<x466)<<(x467&x468));

	if (t44 != 262144) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x469 = INT8_MIN;
	static uint64_t x470 = 34760208LLU;
	int8_t x472 = 1;
	volatile int32_t t45 = 0;

	t45 = ((x469<x470)<<(x471&x472));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x477 = INT64_MAX;
	int16_t x478 = 233;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MAX;
	int32_t t46 = 1;

	t46 = ((x477<x478)<<(x479&x480));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x485 = UINT8_MAX;
	int8_t x486 = 2;
	volatile uint8_t x487 = UINT8_MAX;
	volatile int16_t x488 = INT16_MIN;
	int32_t t47 = 306;

	t47 = ((x485<x486)<<(x487&x488));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x509 = INT8_MIN;
	static int16_t x510 = INT16_MIN;
	int32_t x511 = INT32_MIN;
	uint8_t x512 = 3U;

	t48 = ((x509<x510)<<(x511&x512));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x513 = 16121U;
	int16_t x515 = INT16_MIN;
	volatile int32_t t49 = 0;

	t49 = ((x513<x514)<<(x515&x516));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x519 = 1620LL;
	volatile int32_t t50 = -1287;

	t50 = ((x517<x518)<<(x519&x520));

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x521 = -9337140;
	static int32_t x522 = -41188;
	volatile int8_t x524 = INT8_MAX;

	t51 = ((x521<x522)<<(x523&x524));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x533 = 60U;
	uint16_t x534 = 396U;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 1346U;
	int32_t t52 = 0;

	t52 = ((x533<x534)<<(x535&x536));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x541 = INT8_MIN;
	uint32_t x543 = 1U;
	static volatile int32_t t53 = 0;

	t53 = ((x541<x542)<<(x543&x544));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x581 = -1;
	int16_t x582 = INT16_MIN;
	int32_t x583 = -1;
	static volatile uint8_t x584 = 23U;
	int32_t t54 = 3;

	t54 = ((x581<x582)<<(x583&x584));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x585 = UINT64_MAX;
	int16_t x587 = 11551;
	int32_t t55 = 114603816;

	t55 = ((x585<x586)<<(x587&x588));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x589 = 0U;
	volatile int32_t x590 = INT32_MAX;
	volatile uint8_t x591 = 31U;
	static uint32_t x592 = 1U;
	int32_t t56 = 29675298;

	t56 = ((x589<x590)<<(x591&x592));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x593 = -1;
	volatile int32_t x595 = INT32_MIN;
	static uint8_t x596 = 105U;
	volatile int32_t t57 = 1;

	t57 = ((x593<x594)<<(x595&x596));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x601 = INT32_MIN;
	int64_t x602 = 1347074LL;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = 5U;
	int32_t t58 = 1140333;

	t58 = ((x601<x602)<<(x603&x604));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x613 = 5U;
	volatile uint16_t x614 = UINT16_MAX;
	static uint8_t x615 = UINT8_MAX;
	uint8_t x616 = 1U;
	static volatile int32_t t59 = -729;

	t59 = ((x613<x614)<<(x615&x616));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x665 = 81236510451245084LLU;
	volatile uint8_t x666 = 62U;
	uint8_t x667 = 1U;
	volatile int8_t x668 = INT8_MIN;

	t60 = ((x665<x666)<<(x667&x668));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x681 = 2054;
	static volatile uint16_t x682 = 54U;
	int32_t x683 = -81;
	int32_t t61 = -8353635;

	t61 = ((x681<x682)<<(x683&x684));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x686 = INT8_MIN;
	static int32_t x688 = INT32_MIN;
	int32_t t62 = -1;

	t62 = ((x685<x686)<<(x687&x688));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x690 = -1;
	int8_t x691 = 0;
	int64_t x692 = 223329716324668LL;

	t63 = ((x689<x690)<<(x691&x692));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x693 = INT64_MIN;
	int8_t x694 = -3;
	static uint8_t x696 = 8U;
	volatile int32_t t64 = 1130;

	t64 = ((x693<x694)<<(x695&x696));

	if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x709 = UINT64_MAX;
	int8_t x710 = -3;
	uint32_t x711 = 86116U;
	int64_t x712 = INT64_MIN;

	t65 = ((x709<x710)<<(x711&x712));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x717 = 2371179LLU;
	static int8_t x718 = INT8_MAX;
	int32_t x719 = -1;
	int64_t x720 = 3LL;
	volatile int32_t t66 = 26838793;

	t66 = ((x717<x718)<<(x719&x720));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x725 = UINT64_MAX;
	uint32_t x726 = UINT32_MAX;
	static int64_t x728 = INT64_MAX;

	t67 = ((x725<x726)<<(x727&x728));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x769 = 14U;
	int16_t x770 = -1;
	int16_t x772 = INT16_MIN;
	static volatile int32_t t68 = 13462207;

	t68 = ((x769<x770)<<(x771&x772));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x774 = 38529992206LLU;
	static uint8_t x776 = 0U;
	volatile int32_t t69 = 3;

	t69 = ((x773<x774)<<(x775&x776));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x785 = INT64_MAX;
	uint32_t x786 = UINT32_MAX;
	int64_t x787 = INT64_MIN;
	int16_t x788 = INT16_MAX;
	int32_t t70 = -35;

	t70 = ((x785<x786)<<(x787&x788));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x797 = 9U;
	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	uint8_t x800 = 28U;
	int32_t t71 = -900;

	t71 = ((x797<x798)<<(x799&x800));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x813 = 49U;
	int8_t x815 = INT8_MAX;
	int32_t x816 = -114;
	int32_t t72 = -3;

	t72 = ((x813<x814)<<(x815&x816));

	if (t72 != 16384) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x817 = -1;
	int8_t x818 = INT8_MIN;
	uint64_t x819 = UINT64_MAX;
	int8_t x820 = 3;

	t73 = ((x817<x818)<<(x819&x820));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x841 = UINT64_MAX;
	static volatile int32_t x842 = INT32_MIN;
	int8_t x844 = INT8_MAX;
	int32_t t74 = -95085;

	t74 = ((x841<x842)<<(x843&x844));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x849 = UINT32_MAX;
	uint32_t x850 = 2775158U;
	static uint8_t x852 = 40U;
	int32_t t75 = 6670584;

	t75 = ((x849<x850)<<(x851&x852));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x853 = INT64_MAX;
	volatile int64_t x855 = INT64_MIN;
	int16_t x856 = INT16_MAX;
	int32_t t76 = -2174;

	t76 = ((x853<x854)<<(x855&x856));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x881 = -1;
	volatile int16_t x883 = INT16_MIN;
	volatile int32_t t77 = 14;

	t77 = ((x881<x882)<<(x883&x884));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x885 = -16179;
	static volatile int32_t x886 = INT32_MAX;
	volatile int64_t x887 = INT64_MIN;
	static uint8_t x888 = 68U;
	int32_t t78 = 844088581;

	t78 = ((x885<x886)<<(x887&x888));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x901 = 562U;
	volatile int64_t x902 = 4LL;
	uint32_t x903 = 1U;
	uint16_t x904 = 17584U;
	int32_t t79 = 2;

	t79 = ((x901<x902)<<(x903&x904));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x917 = -3073LL;
	int16_t x918 = INT16_MIN;
	uint16_t x920 = 570U;
	static volatile int32_t t80 = -41824478;

	t80 = ((x917<x918)<<(x919&x920));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x921 = 1214U;
	int64_t x922 = -1LL;
	uint64_t x923 = 981107LLU;
	uint8_t x924 = 8U;
	static int32_t t81 = 194;

	t81 = ((x921<x922)<<(x923&x924));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x941 = INT16_MAX;
	int32_t x943 = INT32_MAX;
	static uint16_t x944 = 0U;

	t82 = ((x941<x942)<<(x943&x944));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x945 = INT64_MIN;
	uint64_t x947 = UINT64_MAX;
	static uint16_t x948 = 2U;
	int32_t t83 = 11;

	t83 = ((x945<x946)<<(x947&x948));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x953 = -1;
	uint8_t x954 = 97U;
	uint16_t x955 = 1U;
	int32_t x956 = -1;

	t84 = ((x953<x954)<<(x955&x956));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x961 = 6658653362984LLU;
	static volatile uint16_t x962 = 1860U;
	static volatile uint64_t x963 = UINT64_MAX;
	static int16_t x964 = 0;
	static volatile int32_t t85 = 39;

	t85 = ((x961<x962)<<(x963&x964));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x969 = -11954;
	volatile int8_t x971 = 0;
	volatile int64_t x972 = INT64_MIN;
	int32_t t86 = -45357;

	t86 = ((x969<x970)<<(x971&x972));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x997 = INT16_MAX;

	t87 = ((x997<x998)<<(x999&x1000));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1021 = -1LL;
	volatile int16_t x1022 = -113;
	int64_t x1023 = INT64_MIN;
	static uint16_t x1024 = UINT16_MAX;
	int32_t t88 = -41299786;

	t88 = ((x1021<x1022)<<(x1023&x1024));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1030 = 58;
	static uint64_t x1031 = 8148LLU;
	static int64_t x1032 = INT64_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x1029<x1030)<<(x1031&x1032));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1033 = INT64_MAX;
	uint8_t x1034 = UINT8_MAX;
	uint64_t x1036 = 116112041305994LLU;
	volatile int32_t t90 = -10394;

	t90 = ((x1033<x1034)<<(x1035&x1036));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x1041 = INT64_MIN;
	uint64_t x1042 = 134826694LLU;
	uint16_t x1043 = 1U;
	volatile int16_t x1044 = INT16_MIN;
	static int32_t t91 = 0;

	t91 = ((x1041<x1042)<<(x1043&x1044));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1053 = INT16_MIN;
	int8_t x1054 = -7;
	int8_t x1055 = INT8_MAX;
	int16_t x1056 = 1431;
	int32_t t92 = 126747;

	t92 = ((x1053<x1054)<<(x1055&x1056));

	if (t92 != 8388608) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1057 = INT64_MIN;
	volatile int16_t x1059 = INT16_MAX;
	uint16_t x1060 = 14U;
	int32_t t93 = 17785229;

	t93 = ((x1057<x1058)<<(x1059&x1060));

	if (t93 != 16384) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1081 = -1;
	volatile uint64_t x1082 = 483671LLU;
	uint8_t x1083 = 114U;
	static int32_t t94 = 10297;

	t94 = ((x1081<x1082)<<(x1083&x1084));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x1085 = 3U;
	static volatile int8_t x1087 = INT8_MAX;
	int8_t x1088 = INT8_MIN;
	int32_t t95 = 0;

	t95 = ((x1085<x1086)<<(x1087&x1088));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1089 = INT64_MIN;
	uint8_t x1090 = 4U;
	int16_t x1091 = -1;
	static uint16_t x1092 = 1U;
	int32_t t96 = 114045908;

	t96 = ((x1089<x1090)<<(x1091&x1092));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1102 = 3;
	int8_t x1103 = INT8_MIN;
	uint32_t x1104 = 50U;
	int32_t t97 = -89;

	t97 = ((x1101<x1102)<<(x1103&x1104));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1105 = 126U;
	int32_t x1106 = INT32_MAX;
	int32_t x1107 = 1;
	static uint16_t x1108 = 20595U;
	static volatile int32_t t98 = 11406;

	t98 = ((x1105<x1106)<<(x1107&x1108));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1109 = UINT64_MAX;
	uint8_t x1110 = 96U;
	uint8_t x1111 = 0U;
	int64_t x1112 = INT64_MIN;
	volatile int32_t t99 = 74216;

	t99 = ((x1109<x1110)<<(x1111&x1112));

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

