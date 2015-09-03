#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x34 = 44U;
uint32_t x46 = 7300U;
uint32_t t4 = 679771U;
int8_t x85 = INT8_MIN;
int8_t x86 = INT8_MAX;
int32_t x102 = -21581;
uint32_t x103 = UINT32_MAX;
uint8_t x123 = 0U;
int16_t x129 = -6;
int64_t x132 = INT64_MAX;
int32_t x138 = -1;
int32_t t10 = -4182;
uint64_t x147 = 1023092613186LLU;
uint64_t x148 = 243743440029222310LLU;
int64_t t12 = -1713LL;
uint64_t x162 = UINT64_MAX;
volatile int32_t x177 = INT32_MIN;
uint64_t x180 = 634960584419503470LLU;
static int32_t t15 = -16348;
uint32_t x213 = UINT32_MAX;
static uint32_t t16 = 2694U;
int8_t x218 = -1;
static int32_t x219 = INT32_MAX;
volatile int32_t t17 = -58355;
volatile int8_t x224 = -1;
int32_t t20 = 3341786;
uint64_t x275 = 6LLU;
static int8_t x276 = -18;
uint8_t x280 = UINT8_MAX;
uint16_t x288 = UINT16_MAX;
int64_t x295 = 5474LL;
uint64_t x296 = 689813801825294924LLU;
uint16_t x310 = UINT16_MAX;
int64_t x311 = 47330LL;
volatile uint64_t x329 = 6LLU;
int32_t x332 = INT32_MAX;
uint16_t x339 = 0U;
uint64_t x363 = 2760081LLU;
volatile int8_t x364 = INT8_MIN;
volatile int16_t x367 = INT16_MIN;
volatile int8_t x371 = -3;
volatile int8_t x381 = INT8_MAX;
int32_t t38 = -627560;
int32_t t41 = 24321390;
int32_t x424 = INT32_MIN;
int32_t t42 = 21970;
uint8_t x428 = 29U;
static int32_t x437 = INT32_MIN;
int32_t x451 = -773848;
static int16_t x457 = INT16_MIN;
int16_t x490 = -1;
int8_t x492 = INT8_MAX;
volatile uint8_t x505 = 70U;
uint16_t x507 = 4226U;
static int32_t x521 = INT32_MIN;
volatile int16_t x524 = INT16_MIN;
static volatile int32_t t52 = 28045229;
volatile int16_t x549 = INT16_MIN;
static int8_t x550 = INT8_MAX;
int32_t t54 = -265811;
uint64_t x557 = 7779LLU;
static volatile int8_t x568 = -47;
volatile int32_t t57 = -9;
int8_t x580 = INT8_MIN;
volatile int32_t x582 = INT32_MIN;
uint64_t x586 = UINT64_MAX;
volatile int16_t x604 = 916;
uint64_t x607 = 3314477LLU;
int16_t x614 = -125;
volatile int32_t x625 = INT32_MAX;
int64_t x637 = INT64_MAX;
static int16_t x638 = 746;
static int64_t x645 = 3050797166115LL;
static int64_t x647 = INT64_MAX;
volatile int64_t t66 = 4114820456LL;
static volatile uint8_t x685 = 1U;
static uint8_t x687 = 1U;
uint16_t x714 = UINT16_MAX;
static volatile int64_t x716 = INT64_MAX;
static int64_t x724 = INT64_MAX;
int32_t x727 = -1;
uint16_t x762 = 3U;
int64_t x765 = INT64_MIN;
static uint8_t x781 = UINT8_MAX;
int32_t t79 = 0;
int32_t x793 = 66626;
static volatile int16_t x796 = INT16_MAX;
static volatile int32_t t80 = 134;
int32_t x821 = 7883740;
uint32_t x823 = 15438230U;
int32_t x824 = -1;
volatile int16_t x830 = INT16_MIN;
uint8_t x861 = 91U;
uint32_t x881 = UINT32_MAX;
volatile uint64_t t87 = 118669308275676LLU;
int64_t x907 = 3766489LL;
int64_t t88 = 197243611652376LL;
int64_t t89 = -56678745029LL;
volatile uint8_t x941 = UINT8_MAX;
volatile int32_t t91 = -13597876;
int64_t x945 = -1611LL;
uint32_t t94 = 170488597U;
volatile int16_t x962 = -2;
volatile int8_t x967 = INT8_MAX;
static int8_t x970 = 2;
static int64_t x998 = 1532786992646521150LL;
volatile int32_t t98 = -12181211;
int64_t x1005 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	static uint8_t x2 = 2U;
	int32_t x3 = -126539;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 0;

	t0 = (x1%((x2*x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x29 = -1;
	volatile int64_t x30 = -1LL;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = 79;
	volatile int32_t t1 = 19;

	t1 = (x29%((x30*x31)<x32));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x33 = UINT64_MAX;
	volatile uint8_t x35 = 24U;
	int64_t x36 = INT64_MAX;
	uint64_t t2 = 145878512LLU;

	t2 = (x33%((x34*x35)<x36));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = INT32_MIN;
	volatile uint16_t x47 = 37U;
	volatile uint32_t x48 = UINT32_MAX;
	volatile int32_t t3 = 1;

	t3 = (x45%((x46*x47)<x48));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x49 = 4016U;
	int8_t x50 = INT8_MIN;
	int8_t x51 = -2;
	volatile int64_t x52 = 129465283271LL;

	t4 = (x49%((x50*x51)<x52));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x87 = 0;
	uint32_t x88 = 190U;
	static volatile int32_t t5 = -30;

	t5 = (x85%((x86*x87)<x88));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x93 = -1;
	volatile int8_t x94 = -1;
	int8_t x95 = INT8_MAX;
	int64_t x96 = -1LL;
	static int32_t t6 = 126;

	t6 = (x93%((x94*x95)<x96));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x101 = 15930958U;
	volatile int8_t x104 = INT8_MIN;
	volatile uint32_t t7 = 208012U;

	t7 = (x101%((x102*x103)<x104));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MAX;
	int16_t x124 = 2;
	int32_t t8 = 93;

	t8 = (x121%((x122*x123)<x124));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	volatile int32_t t9 = 159569;

	t9 = (x129%((x130*x131)<x132));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x139 = 0;
	static int16_t x140 = 6;

	t10 = (x137%((x138*x139)<x140));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x145 = -1;
	uint16_t x146 = 1920U;
	static int32_t t11 = -319;

	t11 = (x145%((x146*x147)<x148));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x153 = -1LL;
	int16_t x154 = -981;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MAX;

	t12 = (x153%((x154*x155)<x156));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x161 = 92385LLU;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = -12;
	uint64_t t13 = 9LLU;

	t13 = (x161%((x162*x163)<x164));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x178 = 3412711315047LL;
	uint16_t x179 = UINT16_MAX;
	static volatile int32_t t14 = -219;

	t14 = (x177%((x178*x179)<x180));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x193 = INT8_MAX;
	uint16_t x194 = 5U;
	static int8_t x195 = INT8_MIN;
	static int64_t x196 = 2402928LL;

	t15 = (x193%((x194*x195)<x196));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x214 = 2863537631818LLU;
	uint8_t x215 = 1U;
	static int32_t x216 = INT32_MIN;

	t16 = (x213%((x214*x215)<x216));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x217 = -1;
	int16_t x220 = INT16_MIN;

	t17 = (x217%((x218*x219)<x220));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x221 = INT64_MIN;
	int8_t x222 = -1;
	static uint16_t x223 = 6796U;
	static volatile int64_t t18 = -162974675101214LL;

	t18 = (x221%((x222*x223)<x224));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = 6;
	int8_t x227 = -51;
	int64_t x228 = INT64_MAX;
	volatile int32_t t19 = 64991;

	t19 = (x225%((x226*x227)<x228));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x229 = INT16_MIN;
	volatile int64_t x230 = -1LL;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MAX;

	t20 = (x229%((x230*x231)<x232));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x269 = -1;
	int32_t x270 = -1;
	static volatile int64_t x271 = INT64_MAX;
	int8_t x272 = INT8_MAX;
	volatile int32_t t21 = 15975;

	t21 = (x269%((x270*x271)<x272));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x274 = 1LLU;
	volatile int32_t t22 = 92097752;

	t22 = (x273%((x274*x275)<x276));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 22338U;
	static volatile uint64_t t23 = 306183943120590LLU;

	t23 = (x277%((x278*x279)<x280));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x285 = -1;
	int16_t x286 = 27;
	int32_t x287 = -1;
	volatile int32_t t24 = 12724;

	t24 = (x285%((x286*x287)<x288));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile uint64_t x294 = 14524LLU;
	static volatile uint32_t t25 = 1443012U;

	t25 = (x293%((x294*x295)<x296));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x301 = UINT16_MAX;
	int8_t x302 = 0;
	static int16_t x303 = 63;
	static uint32_t x304 = 36750U;
	static volatile int32_t t26 = 16;

	t26 = (x301%((x302*x303)<x304));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x309 = 0;
	volatile int64_t x312 = INT64_MAX;
	int32_t t27 = 5982;

	t27 = (x309%((x310*x311)<x312));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x317 = -1;
	uint64_t x318 = 45LLU;
	uint32_t x319 = 648106U;
	int64_t x320 = -1LL;
	static int32_t t28 = 5008269;

	t28 = (x317%((x318*x319)<x320));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x325 = INT32_MIN;
	volatile int8_t x326 = INT8_MIN;
	uint32_t x327 = UINT32_MAX;
	volatile uint64_t x328 = 416701153957LLU;
	int32_t t29 = 621271;

	t29 = (x325%((x326*x327)<x328));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x330 = -1;
	volatile int32_t x331 = INT32_MAX;
	uint64_t t30 = 18464508306140LLU;

	t30 = (x329%((x330*x331)<x332));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x333 = INT16_MIN;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = -61194324755LL;
	int8_t x336 = -4;
	volatile int32_t t31 = 1;

	t31 = (x333%((x334*x335)<x336));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = INT64_MIN;
	uint8_t x340 = 3U;
	int64_t t32 = 88146LL;

	t32 = (x337%((x338*x339)<x340));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	int32_t x355 = INT32_MAX;
	static int32_t x356 = 75475333;
	static int32_t t33 = -159;

	t33 = (x353%((x354*x355)<x356));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x361 = 0;
	int8_t x362 = INT8_MIN;
	static int32_t t34 = -3;

	t34 = (x361%((x362*x363)<x364));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x365 = 12LLU;
	uint8_t x366 = 3U;
	static int16_t x368 = -5;
	uint64_t t35 = 688363440813LLU;

	t35 = (x365%((x366*x367)<x368));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x369 = INT8_MAX;
	int64_t x370 = -1LL;
	static uint64_t x372 = UINT64_MAX;
	int32_t t36 = 1207;

	t36 = (x369%((x370*x371)<x372));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x382 = -1;
	uint8_t x383 = 19U;
	volatile int64_t x384 = -1LL;
	static volatile int32_t t37 = 12111252;

	t37 = (x381%((x382*x383)<x384));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x385 = 138U;
	int16_t x386 = 439;
	static int8_t x387 = INT8_MIN;
	uint32_t x388 = UINT32_MAX;

	t38 = (x385%((x386*x387)<x388));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	int8_t x395 = 0;
	int32_t x396 = 51;
	static volatile int32_t t39 = -26840366;

	t39 = (x393%((x394*x395)<x396));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = 15;
	int16_t x403 = -1;
	int16_t x404 = -1;
	int64_t t40 = -2745310LL;

	t40 = (x401%((x402*x403)<x404));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x405 = INT8_MAX;
	int32_t x406 = 547;
	int16_t x407 = INT16_MIN;
	static uint16_t x408 = UINT16_MAX;

	t41 = (x405%((x406*x407)<x408));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile uint32_t x422 = 61272U;
	uint16_t x423 = 27U;

	t42 = (x421%((x422*x423)<x424));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x425 = 1524U;
	int16_t x426 = INT16_MIN;
	uint8_t x427 = 105U;
	volatile int32_t t43 = -3;

	t43 = (x425%((x426*x427)<x428));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x438 = -10;
	uint32_t x439 = 22U;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t44 = 3;

	t44 = (x437%((x438*x439)<x440));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x441 = INT32_MAX;
	volatile uint64_t x442 = 56861984879111LLU;
	int8_t x443 = 0;
	int64_t x444 = -1LL;
	static int32_t t45 = 309;

	t45 = (x441%((x442*x443)<x444));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x445 = INT8_MIN;
	int32_t x446 = -15;
	uint8_t x447 = 2U;
	int32_t x448 = 480473;
	volatile int32_t t46 = 46134094;

	t46 = (x445%((x446*x447)<x448));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x449 = INT8_MIN;
	int32_t x450 = 2139;
	static int64_t x452 = 14797LL;
	int32_t t47 = -67689758;

	t47 = (x449%((x450*x451)<x452));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x458 = INT32_MAX;
	int64_t x459 = -847LL;
	int32_t x460 = INT32_MAX;
	int32_t t48 = -19;

	t48 = (x457%((x458*x459)<x460));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x489 = 0U;
	uint8_t x491 = UINT8_MAX;
	volatile int32_t t49 = 3263700;

	t49 = (x489%((x490*x491)<x492));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x506 = INT16_MIN;
	static volatile int32_t x508 = INT32_MAX;
	static int32_t t50 = -1446;

	t50 = (x505%((x506*x507)<x508));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x509 = UINT64_MAX;
	int32_t x510 = INT32_MAX;
	uint64_t x511 = 1729679297LLU;
	int16_t x512 = -7;
	volatile uint64_t t51 = 16441017584486LLU;

	t51 = (x509%((x510*x511)<x512));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x522 = UINT16_MAX;
	uint32_t x523 = UINT32_MAX;

	t52 = (x521%((x522*x523)<x524));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x545 = UINT16_MAX;
	uint64_t x546 = 9LLU;
	int64_t x547 = INT64_MAX;
	volatile int64_t x548 = INT64_MIN;
	int32_t t53 = -134019449;

	t53 = (x545%((x546*x547)<x548));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x551 = 7U;
	int32_t x552 = INT32_MAX;

	t54 = (x549%((x550*x551)<x552));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x553 = -1;
	static int8_t x554 = INT8_MIN;
	volatile uint64_t x555 = UINT64_MAX;
	static volatile int16_t x556 = -1;
	static int32_t t55 = 52800;

	t55 = (x553%((x554*x555)<x556));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x558 = INT16_MAX;
	int64_t x559 = -1LL;
	volatile int32_t x560 = -72;
	static uint64_t t56 = 55860928570LLU;

	t56 = (x557%((x558*x559)<x560));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MIN;
	int8_t x567 = 5;

	t57 = (x565%((x566*x567)<x568));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x577 = 1701904855LL;
	int16_t x578 = -15101;
	int8_t x579 = 39;
	static volatile int64_t t58 = 476LL;

	t58 = (x577%((x578*x579)<x580));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x581 = -120;
	static uint16_t x583 = 1U;
	int8_t x584 = INT8_MIN;
	int32_t t59 = -2;

	t59 = (x581%((x582*x583)<x584));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x585 = 115;
	int32_t x587 = -5812;
	static uint64_t x588 = UINT64_MAX;
	volatile int32_t t60 = -383297;

	t60 = (x585%((x586*x587)<x588));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x601 = -1;
	int16_t x602 = 11676;
	int64_t x603 = -1LL;
	volatile int32_t t61 = 103299366;

	t61 = (x601%((x602*x603)<x604));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x605 = 11U;
	volatile uint16_t x606 = 59U;
	uint32_t x608 = UINT32_MAX;
	static int32_t t62 = 10;

	t62 = (x605%((x606*x607)<x608));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x613 = INT32_MIN;
	static int16_t x615 = INT16_MAX;
	int8_t x616 = -16;
	int32_t t63 = -27479;

	t63 = (x613%((x614*x615)<x616));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x626 = INT64_MIN;
	static uint16_t x627 = 1U;
	volatile int16_t x628 = 1;
	int32_t t64 = 0;

	t64 = (x625%((x626*x627)<x628));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x639 = 1U;
	uint16_t x640 = 7197U;
	int64_t t65 = 1LL;

	t65 = (x637%((x638*x639)<x640));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x646 = -1;
	int8_t x648 = 1;

	t66 = (x645%((x646*x647)<x648));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x661 = -1LL;
	int32_t x662 = INT32_MIN;
	uint64_t x663 = 1648414LLU;
	int64_t x664 = -1LL;
	volatile int64_t t67 = -127597LL;

	t67 = (x661%((x662*x663)<x664));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x681 = 0LL;
	static int32_t x682 = -78207;
	uint8_t x683 = 6U;
	int8_t x684 = INT8_MIN;
	volatile int64_t t68 = -654LL;

	t68 = (x681%((x682*x683)<x684));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x686 = -25609252;
	int8_t x688 = 0;
	volatile int32_t t69 = 4755434;

	t69 = (x685%((x686*x687)<x688));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x689 = INT64_MIN;
	int32_t x690 = 6013;
	int16_t x691 = INT16_MAX;
	uint64_t x692 = 11233661433012LLU;
	int64_t t70 = -7607LL;

	t70 = (x689%((x690*x691)<x692));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x693 = INT8_MAX;
	uint16_t x694 = 1555U;
	int16_t x695 = -96;
	static volatile uint16_t x696 = UINT16_MAX;
	static volatile int32_t t71 = -62811;

	t71 = (x693%((x694*x695)<x696));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x705 = 7U;
	static int16_t x706 = 16121;
	int8_t x707 = -1;
	uint16_t x708 = 25U;
	uint32_t t72 = 1641840830U;

	t72 = (x705%((x706*x707)<x708));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x713 = INT32_MIN;
	int16_t x715 = INT16_MAX;
	volatile int32_t t73 = 1853;

	t73 = (x713%((x714*x715)<x716));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x721 = 7U;
	volatile uint8_t x722 = 0U;
	int64_t x723 = INT64_MAX;
	static int32_t t74 = -23;

	t74 = (x721%((x722*x723)<x724));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x725 = 0;
	uint64_t x726 = UINT64_MAX;
	int32_t x728 = 16040;
	volatile int32_t t75 = -7436881;

	t75 = (x725%((x726*x727)<x728));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x761 = 29155779684379LLU;
	uint8_t x763 = 5U;
	int8_t x764 = 19;
	volatile uint64_t t76 = 20150506435LLU;

	t76 = (x761%((x762*x763)<x764));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x766 = INT8_MIN;
	int32_t x767 = -1;
	static int16_t x768 = INT16_MAX;
	static volatile int64_t t77 = -6LL;

	t77 = (x765%((x766*x767)<x768));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x777 = -1;
	uint64_t x778 = UINT64_MAX;
	volatile int64_t x779 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	static volatile int32_t t78 = -41535;

	t78 = (x777%((x778*x779)<x780));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x782 = -7;
	uint64_t x783 = 32346325523582460LLU;
	int8_t x784 = -52;

	t79 = (x781%((x782*x783)<x784));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x794 = INT64_MIN;
	static uint8_t x795 = 1U;

	t80 = (x793%((x794*x795)<x796));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x822 = 0U;
	volatile int32_t t81 = 833853415;

	t81 = (x821%((x822*x823)<x824));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x829 = INT64_MAX;
	static uint64_t x831 = UINT64_MAX;
	static uint32_t x832 = UINT32_MAX;
	int64_t t82 = -18600216069465LL;

	t82 = (x829%((x830*x831)<x832));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x833 = UINT8_MAX;
	uint8_t x834 = UINT8_MAX;
	volatile int8_t x835 = -1;
	uint16_t x836 = 1617U;
	volatile int32_t t83 = 118;

	t83 = (x833%((x834*x835)<x836));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x837 = -1LL;
	int32_t x838 = 3079;
	int8_t x839 = -1;
	int8_t x840 = INT8_MIN;
	int64_t t84 = -2297062578571980570LL;

	t84 = (x837%((x838*x839)<x840));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x862 = 375;
	int16_t x863 = INT16_MAX;
	uint64_t x864 = 694629183719559LLU;
	static volatile int32_t t85 = 16005994;

	t85 = (x861%((x862*x863)<x864));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x882 = INT32_MAX;
	int32_t x883 = -1;
	uint64_t x884 = UINT64_MAX;
	uint32_t t86 = 1221325U;

	t86 = (x881%((x882*x883)<x884));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x901 = 2000329811LLU;
	static int64_t x902 = INT64_MIN;
	static volatile uint8_t x903 = 1U;
	int32_t x904 = INT32_MIN;

	t87 = (x901%((x902*x903)<x904));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x905 = -1LL;
	int32_t x906 = INT32_MIN;
	int16_t x908 = -1;

	t88 = (x905%((x906*x907)<x908));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x909 = -1LL;
	int64_t x910 = -1LL;
	int8_t x911 = 0;
	uint64_t x912 = 7LLU;

	t89 = (x909%((x910*x911)<x912));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x933 = INT16_MIN;
	int16_t x934 = -1;
	static int32_t x935 = INT32_MAX;
	int32_t x936 = -235689;
	volatile int32_t t90 = -3413;

	t90 = (x933%((x934*x935)<x936));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x942 = -1LL;
	static volatile int16_t x943 = INT16_MAX;
	int32_t x944 = -1;

	t91 = (x941%((x942*x943)<x944));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x946 = 14508LL;
	int16_t x947 = INT16_MIN;
	static int8_t x948 = INT8_MIN;
	static int64_t t92 = 192981309001LL;

	t92 = (x945%((x946*x947)<x948));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x949 = INT64_MIN;
	uint16_t x950 = 274U;
	uint64_t x951 = 733578228012342433LLU;
	int32_t x952 = -12630304;
	static volatile int64_t t93 = 854893LL;

	t93 = (x949%((x950*x951)<x952));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x953 = 1105023106U;
	int32_t x954 = -156;
	volatile int16_t x955 = INT16_MAX;
	static int16_t x956 = INT16_MIN;

	t94 = (x953%((x954*x955)<x956));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x961 = UINT64_MAX;
	int64_t x963 = -1LL;
	int64_t x964 = INT64_MAX;
	static volatile uint64_t t95 = 13262180889393LLU;

	t95 = (x961%((x962*x963)<x964));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x965 = INT8_MIN;
	volatile int16_t x966 = -1;
	int16_t x968 = 8;
	volatile int32_t t96 = -4;

	t96 = (x965%((x966*x967)<x968));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x969 = 7U;
	int8_t x971 = 3;
	static uint64_t x972 = 320257220946LLU;
	volatile uint32_t t97 = 96680U;

	t97 = (x969%((x970*x971)<x972));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x997 = INT32_MIN;
	static uint64_t x999 = UINT64_MAX;
	static uint64_t x1000 = UINT64_MAX;

	t98 = (x997%((x998*x999)<x1000));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1006 = INT8_MAX;
	int64_t x1007 = -589342552314LL;
	static int32_t x1008 = INT32_MAX;
	volatile int64_t t99 = -9493LL;

	t99 = (x1005%((x1006*x1007)<x1008));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

