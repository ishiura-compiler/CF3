#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
static int8_t x7 = -1;
int64_t x8 = -1LL;
static int32_t x11 = -28;
volatile int8_t x19 = INT8_MIN;
int64_t x20 = -1LL;
static volatile int32_t t4 = 5918;
static int64_t x53 = -1LL;
volatile int32_t t8 = -398017;
uint32_t x61 = 754U;
static int64_t x62 = INT64_MIN;
uint16_t x94 = 65U;
volatile int16_t x101 = -1;
int32_t t13 = 0;
uint8_t x112 = 27U;
int16_t x122 = -1;
volatile uint64_t x131 = 23076205LLU;
int32_t x135 = INT32_MIN;
static uint64_t x151 = 553LLU;
volatile int32_t x192 = 28;
int16_t x195 = INT16_MIN;
uint16_t x222 = 9300U;
uint16_t x232 = 34U;
volatile int32_t t28 = -4156;
static uint16_t x241 = 27632U;
uint32_t x252 = 520259U;
volatile int32_t t30 = 6761;
int64_t x261 = INT64_MAX;
int64_t x264 = -1LL;
static int32_t x283 = -1;
int8_t x291 = -1;
static int32_t t37 = -226916560;
int16_t x304 = INT16_MAX;
int16_t x311 = INT16_MIN;
static uint16_t x312 = 3U;
int32_t x330 = 16951;
int32_t x333 = -1;
int32_t x358 = -23931437;
uint16_t x359 = 1U;
int16_t x360 = INT16_MAX;
int32_t x361 = INT32_MIN;
volatile int16_t x363 = 2;
volatile int32_t x380 = INT32_MAX;
int32_t t49 = 1937420;
static volatile int32_t x382 = INT32_MIN;
int32_t x383 = -1;
volatile int64_t x384 = 9150751242290855LL;
static int32_t x386 = -1;
volatile int64_t x389 = 315287863484361LL;
static uint64_t x396 = UINT64_MAX;
volatile int32_t t55 = -7;
static int16_t x424 = 3;
int16_t x440 = -29;
uint32_t x453 = 515308U;
uint16_t x467 = 14U;
volatile int32_t t63 = -789949;
uint16_t x508 = UINT16_MAX;
uint64_t x509 = 231645908LLU;
static int32_t x519 = -1;
int32_t t69 = -29051440;
uint8_t x535 = 2U;
int16_t x540 = INT16_MAX;
volatile int32_t t72 = -14239455;
int32_t x569 = INT32_MIN;
static volatile int16_t x571 = INT16_MIN;
volatile int32_t x583 = -1;
volatile int32_t t74 = -370791;
int32_t x590 = -22;
volatile uint64_t x603 = 2LLU;
uint8_t x614 = 6U;
volatile uint32_t x616 = UINT32_MAX;
volatile int32_t x630 = INT32_MAX;
static int8_t x638 = INT8_MIN;
volatile int32_t x653 = -1;
volatile int32_t t86 = -468598986;
uint32_t x666 = 28U;
int64_t x671 = INT64_MIN;
static volatile int32_t t88 = 1;
int8_t x680 = -1;
volatile int32_t x685 = -1;
uint64_t x688 = UINT64_MAX;
int32_t t90 = 15863;
static int64_t x719 = INT64_MIN;
volatile int32_t x739 = -1;
static int64_t x771 = -56LL;
int16_t x774 = -1;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	uint16_t x3 = 27U;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 0;

	t0 = (x1<=(x2/(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	static uint32_t x6 = 12490884U;
	int32_t t1 = -307;

	t1 = (x5<=(x6/(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = -1;
	static int16_t x12 = 118;
	int32_t t2 = 378;

	t2 = (x9<=(x10/(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = 38;
	int32_t t3 = 1;

	t3 = (x17<=(x18/(x19<=x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int64_t x35 = 0LL;
	uint8_t x36 = 7U;

	t4 = (x33<=(x34/(x35<=x36)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = 0;
	int16_t x38 = -15;
	uint32_t x39 = 47918230U;
	int8_t x40 = INT8_MIN;
	int32_t t5 = -55;

	t5 = (x37<=(x38/(x39<=x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = 28280LLU;
	uint8_t x46 = 2U;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 243321144392802022LL;
	volatile int32_t t6 = 891;

	t6 = (x45<=(x46/(x47<=x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 23803U;
	uint8_t x50 = 9U;
	static int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t7 = -2926563;

	t7 = (x49<=(x50/(x51<=x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x54 = 5875727211554LLU;
	static int32_t x55 = INT32_MIN;
	int64_t x56 = 1LL;

	t8 = (x53<=(x54/(x55<=x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x63 = -55465021855040LL;
	static uint8_t x64 = 23U;
	volatile int32_t t9 = 1826;

	t9 = (x61<=(x62/(x63<=x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 218647;
	volatile int64_t x79 = -13568597LL;
	int16_t x80 = -1;
	volatile int32_t t10 = 1004669;

	t10 = (x77<=(x78/(x79<=x80)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x93 = -1;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 1032113253807LLU;
	volatile int32_t t11 = -1502496;

	t11 = (x93<=(x94/(x95<=x96)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x97 = 19185810842LL;
	uint32_t x98 = 0U;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = 1;
	int32_t t12 = 7841374;

	t12 = (x97<=(x98/(x99<=x100)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 1U;
	int16_t x104 = -1;

	t13 = (x101<=(x102/(x103<=x104)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x105 = 0U;
	static int32_t x106 = INT32_MIN;
	int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	int32_t t14 = 1;

	t14 = (x105<=(x106/(x107<=x108)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	volatile int32_t t15 = -36;

	t15 = (x109<=(x110/(x111<=x112)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x117 = 377;
	int16_t x118 = 0;
	int8_t x119 = -1;
	uint16_t x120 = 381U;
	volatile int32_t t16 = -4;

	t16 = (x117<=(x118/(x119<=x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x121 = 120LLU;
	volatile int64_t x123 = -1LL;
	int16_t x124 = 1;
	int32_t t17 = -2996088;

	t17 = (x121<=(x122/(x123<=x124)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x129 = INT8_MIN;
	volatile int8_t x130 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t18 = 5;

	t18 = (x129<=(x130/(x131<=x132)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x133 = UINT64_MAX;
	uint16_t x134 = UINT16_MAX;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t19 = 20760986;

	t19 = (x133<=(x134/(x135<=x136)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x149 = -1;
	int16_t x150 = INT16_MIN;
	int32_t x152 = -147;
	volatile int32_t t20 = -11360370;

	t20 = (x149<=(x150/(x151<=x152)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x177 = -1;
	int8_t x178 = -1;
	volatile int16_t x179 = 7672;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t21 = 618660163;

	t21 = (x177<=(x178/(x179<=x180)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x185 = 14;
	static uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = INT8_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	int32_t t22 = -52;

	t22 = (x185<=(x186/(x187<=x188)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x189 = -97367303390LL;
	int8_t x190 = -1;
	volatile int16_t x191 = INT16_MIN;
	int32_t t23 = 144;

	t23 = (x189<=(x190/(x191<=x192)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x193 = INT32_MAX;
	int8_t x194 = INT8_MIN;
	int64_t x196 = -1LL;
	int32_t t24 = 2501;

	t24 = (x193<=(x194/(x195<=x196)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x201 = 129707268LLU;
	volatile uint64_t x202 = 6748188812728521LLU;
	volatile int8_t x203 = -1;
	static int16_t x204 = -1;
	volatile int32_t t25 = 26163559;

	t25 = (x201<=(x202/(x203<=x204)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = -1;
	volatile int16_t x224 = INT16_MAX;
	int32_t t26 = -402119;

	t26 = (x221<=(x222/(x223<=x224)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x229 = -1;
	static uint64_t x230 = UINT64_MAX;
	int16_t x231 = -52;
	volatile int32_t t27 = -506;

	t27 = (x229<=(x230/(x231<=x232)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x237 = -744812602;
	static int32_t x238 = 9412142;
	int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MAX;

	t28 = (x237<=(x238/(x239<=x240)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t29 = 5;

	t29 = (x241<=(x242/(x243<=x244)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = -1LL;
	uint16_t x251 = 7899U;

	t30 = (x249<=(x250/(x251<=x252)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x253 = 42657361U;
	int64_t x254 = INT64_MAX;
	volatile int16_t x255 = -123;
	int16_t x256 = 355;
	static int32_t t31 = 14138;

	t31 = (x253<=(x254/(x255<=x256)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x257 = UINT64_MAX;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t32 = -49928;

	t32 = (x257<=(x258/(x259<=x260)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x262 = INT8_MAX;
	int64_t x263 = INT64_MIN;
	volatile int32_t t33 = 1878809;

	t33 = (x261<=(x262/(x263<=x264)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x269 = 2U;
	int32_t x270 = INT32_MIN;
	int16_t x271 = -1;
	int64_t x272 = INT64_MAX;
	int32_t t34 = 33658;

	t34 = (x269<=(x270/(x271<=x272)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x281 = 0;
	uint16_t x282 = 871U;
	uint8_t x284 = UINT8_MAX;
	static int32_t t35 = 178575498;

	t35 = (x281<=(x282/(x283<=x284)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x285 = -80924;
	static int32_t x286 = -1;
	int16_t x287 = INT16_MAX;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t36 = 21;

	t36 = (x285<=(x286/(x287<=x288)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MAX;
	uint8_t x292 = 34U;

	t37 = (x289<=(x290/(x291<=x292)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x293 = -120813670357268LL;
	int64_t x294 = INT64_MAX;
	static volatile int32_t x295 = -1;
	static int16_t x296 = -1;
	static volatile int32_t t38 = 213365582;

	t38 = (x293<=(x294/(x295<=x296)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x297 = -160749070;
	volatile int64_t x298 = -1LL;
	static volatile int8_t x299 = INT8_MIN;
	int16_t x300 = -1;
	volatile int32_t t39 = -4917066;

	t39 = (x297<=(x298/(x299<=x300)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x301 = INT16_MIN;
	static uint64_t x302 = 208381324300LLU;
	int16_t x303 = INT16_MAX;
	volatile int32_t t40 = 330243010;

	t40 = (x301<=(x302/(x303<=x304)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x309 = -1LL;
	volatile int32_t x310 = 904820360;
	int32_t t41 = 1111603;

	t41 = (x309<=(x310/(x311<=x312)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x325 = INT8_MIN;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	uint8_t x328 = UINT8_MAX;
	int32_t t42 = 10501;

	t42 = (x325<=(x326/(x327<=x328)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x329 = INT8_MIN;
	uint16_t x331 = 17U;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t43 = -3046180;

	t43 = (x329<=(x330/(x331<=x332)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x334 = -1LL;
	int16_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	int32_t t44 = 2;

	t44 = (x333<=(x334/(x335<=x336)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = 33839419405LL;
	int32_t x343 = INT32_MIN;
	int32_t x344 = -63;
	int32_t t45 = 11357;

	t45 = (x341<=(x342/(x343<=x344)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	static int64_t x351 = INT64_MIN;
	uint8_t x352 = 63U;
	volatile int32_t t46 = 4132;

	t46 = (x349<=(x350/(x351<=x352)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x357 = -1LL;
	volatile int32_t t47 = 30;

	t47 = (x357<=(x358/(x359<=x360)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x362 = -39908LL;
	int8_t x364 = INT8_MAX;
	int32_t t48 = 246707;

	t48 = (x361<=(x362/(x363<=x364)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x377 = UINT64_MAX;
	int64_t x378 = -1084684149978LL;
	int16_t x379 = INT16_MIN;

	t49 = (x377<=(x378/(x379<=x380)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x381 = -7;
	int32_t t50 = -16470;

	t50 = (x381<=(x382/(x383<=x384)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x385 = INT32_MIN;
	static volatile int32_t x387 = -3;
	volatile uint64_t x388 = UINT64_MAX;
	volatile int32_t t51 = 48;

	t51 = (x385<=(x386/(x387<=x388)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x390 = INT16_MIN;
	int64_t x391 = -780660635488051063LL;
	int16_t x392 = INT16_MAX;
	static int32_t t52 = 1;

	t52 = (x389<=(x390/(x391<=x392)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x393 = 1U;
	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	int32_t t53 = 37;

	t53 = (x393<=(x394/(x395<=x396)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	int8_t x411 = 0;
	volatile uint8_t x412 = 11U;
	int32_t t54 = -25420074;

	t54 = (x409<=(x410/(x411<=x412)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x413 = 121LL;
	uint32_t x414 = 736276840U;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MAX;

	t55 = (x413<=(x414/(x415<=x416)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MAX;
	volatile int8_t x419 = INT8_MIN;
	int64_t x420 = 220664655LL;
	volatile int32_t t56 = 989072;

	t56 = (x417<=(x418/(x419<=x420)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x421 = -1;
	int64_t x422 = -409983392084233LL;
	static int32_t x423 = INT32_MIN;
	int32_t t57 = 69040529;

	t57 = (x421<=(x422/(x423<=x424)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x437 = 10U;
	uint16_t x438 = 181U;
	static int16_t x439 = INT16_MIN;
	int32_t t58 = -1112;

	t58 = (x437<=(x438/(x439<=x440)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x454 = -1;
	int8_t x455 = -1;
	int8_t x456 = -1;
	volatile int32_t t59 = 33079;

	t59 = (x453<=(x454/(x455<=x456)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x465 = 575210053563799LL;
	static volatile int32_t x466 = INT32_MAX;
	int32_t x468 = INT32_MAX;
	volatile int32_t t60 = -1;

	t60 = (x465<=(x466/(x467<=x468)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x469 = INT64_MIN;
	volatile int16_t x470 = INT16_MIN;
	uint64_t x471 = 31794LLU;
	volatile int64_t x472 = -478LL;
	int32_t t61 = 0;

	t61 = (x469<=(x470/(x471<=x472)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x489 = -259068678;
	int32_t x490 = INT32_MIN;
	int32_t x491 = -1;
	volatile int32_t x492 = INT32_MAX;
	volatile int32_t t62 = 39579625;

	t62 = (x489<=(x490/(x491<=x492)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x497 = INT64_MIN;
	int32_t x498 = INT32_MIN;
	static volatile int32_t x499 = 25;
	static uint8_t x500 = 68U;

	t63 = (x497<=(x498/(x499<=x500)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x505 = UINT32_MAX;
	int64_t x506 = INT64_MAX;
	static uint16_t x507 = 3736U;
	int32_t t64 = -2546786;

	t64 = (x505<=(x506/(x507<=x508)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x510 = 2017716570486179LLU;
	int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MAX;
	int32_t t65 = -3791;

	t65 = (x509<=(x510/(x511<=x512)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MAX;
	uint64_t x520 = UINT64_MAX;
	static int32_t t66 = 88402;

	t66 = (x517<=(x518/(x519<=x520)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x521 = 10;
	int16_t x522 = INT16_MIN;
	uint64_t x523 = 34391368340115610LLU;
	uint64_t x524 = UINT64_MAX;
	volatile int32_t t67 = -723907239;

	t67 = (x521<=(x522/(x523<=x524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x525 = 2U;
	volatile int16_t x526 = INT16_MIN;
	uint8_t x527 = UINT8_MAX;
	volatile uint64_t x528 = UINT64_MAX;
	volatile int32_t t68 = -162;

	t68 = (x525<=(x526/(x527<=x528)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x529 = 1762575LLU;
	uint16_t x530 = 6U;
	volatile int8_t x531 = -1;
	int16_t x532 = 7;

	t69 = (x529<=(x530/(x531<=x532)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x533 = 4U;
	int64_t x534 = INT64_MIN;
	int64_t x536 = INT64_MAX;
	static int32_t t70 = 5162;

	t70 = (x533<=(x534/(x535<=x536)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x537 = -1;
	int32_t x538 = INT32_MIN;
	int16_t x539 = -1;
	int32_t t71 = -328;

	t71 = (x537<=(x538/(x539<=x540)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x561 = UINT32_MAX;
	int32_t x562 = 52420;
	uint16_t x563 = 43U;
	uint8_t x564 = 79U;

	t72 = (x561<=(x562/(x563<=x564)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x570 = 73;
	static int32_t x572 = 0;
	volatile int32_t t73 = 3115;

	t73 = (x569<=(x570/(x571<=x572)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x581 = INT64_MIN;
	uint8_t x582 = 31U;
	static int64_t x584 = INT64_MAX;

	t74 = (x581<=(x582/(x583<=x584)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x589 = -1;
	uint32_t x591 = UINT32_MAX;
	int8_t x592 = -1;
	int32_t t75 = -7;

	t75 = (x589<=(x590/(x591<=x592)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x601 = UINT64_MAX;
	static int16_t x602 = INT16_MAX;
	int32_t x604 = INT32_MAX;
	volatile int32_t t76 = 4312;

	t76 = (x601<=(x602/(x603<=x604)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x605 = -168LL;
	int32_t x606 = INT32_MAX;
	volatile uint64_t x607 = 62348LLU;
	int16_t x608 = INT16_MIN;
	int32_t t77 = -35;

	t77 = (x605<=(x606/(x607<=x608)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x609 = -1LL;
	int32_t x610 = INT32_MIN;
	static int64_t x611 = INT64_MIN;
	int64_t x612 = -1LL;
	volatile int32_t t78 = -1;

	t78 = (x609<=(x610/(x611<=x612)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x613 = INT16_MIN;
	int32_t x615 = INT32_MAX;
	int32_t t79 = 1393870;

	t79 = (x613<=(x614/(x615<=x616)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x617 = -1;
	int32_t x618 = INT32_MIN;
	int16_t x619 = 10;
	uint8_t x620 = 15U;
	volatile int32_t t80 = 687;

	t80 = (x617<=(x618/(x619<=x620)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x625 = 173U;
	int8_t x626 = -2;
	int8_t x627 = INT8_MAX;
	int8_t x628 = INT8_MAX;
	int32_t t81 = 935;

	t81 = (x625<=(x626/(x627<=x628)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x629 = INT64_MIN;
	int16_t x631 = -1;
	volatile int32_t x632 = INT32_MAX;
	int32_t t82 = 6824;

	t82 = (x629<=(x630/(x631<=x632)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x637 = 11724;
	volatile int64_t x639 = INT64_MIN;
	uint8_t x640 = 103U;
	static int32_t t83 = -569037;

	t83 = (x637<=(x638/(x639<=x640)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x649 = 2666LL;
	int64_t x650 = INT64_MAX;
	static uint64_t x651 = 379LLU;
	int64_t x652 = INT64_MAX;
	int32_t t84 = -992;

	t84 = (x649<=(x650/(x651<=x652)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x654 = -1;
	int64_t x655 = -33391261372817623LL;
	static uint32_t x656 = UINT32_MAX;
	static volatile int32_t t85 = 2973;

	t85 = (x653<=(x654/(x655<=x656)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x661 = 6715616LLU;
	uint8_t x662 = 40U;
	static volatile int8_t x663 = INT8_MIN;
	int64_t x664 = 65830908910264159LL;

	t86 = (x661<=(x662/(x663<=x664)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x665 = UINT16_MAX;
	uint16_t x667 = 36U;
	int64_t x668 = INT64_MAX;
	volatile int32_t t87 = 1042782992;

	t87 = (x665<=(x666/(x667<=x668)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x669 = -1;
	int32_t x670 = -14063;
	int16_t x672 = INT16_MIN;

	t88 = (x669<=(x670/(x671<=x672)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x677 = UINT32_MAX;
	volatile uint8_t x678 = 3U;
	volatile uint32_t x679 = 110827U;
	static int32_t t89 = -52806747;

	t89 = (x677<=(x678/(x679<=x680)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x686 = INT16_MAX;
	int64_t x687 = INT64_MAX;

	t90 = (x685<=(x686/(x687<=x688)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x705 = 7U;
	uint8_t x706 = 12U;
	uint64_t x707 = 233LLU;
	int64_t x708 = -8825621LL;
	int32_t t91 = 190612662;

	t91 = (x705<=(x706/(x707<=x708)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x709 = 2U;
	uint32_t x710 = 1344716U;
	int32_t x711 = INT32_MIN;
	int32_t x712 = -1;
	volatile int32_t t92 = -2;

	t92 = (x709<=(x710/(x711<=x712)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x717 = INT8_MIN;
	uint64_t x718 = UINT64_MAX;
	uint8_t x720 = 5U;
	int32_t t93 = -1007;

	t93 = (x717<=(x718/(x719<=x720)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x721 = 1U;
	int32_t x722 = INT32_MIN;
	uint64_t x723 = 5788005059293375139LLU;
	volatile uint64_t x724 = UINT64_MAX;
	volatile int32_t t94 = -128928533;

	t94 = (x721<=(x722/(x723<=x724)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x725 = INT32_MIN;
	int8_t x726 = INT8_MIN;
	uint8_t x727 = 33U;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t95 = 14468191;

	t95 = (x725<=(x726/(x727<=x728)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x737 = 3914281LL;
	static int64_t x738 = INT64_MIN;
	int8_t x740 = -1;
	volatile int32_t t96 = -328552941;

	t96 = (x737<=(x738/(x739<=x740)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x765 = 3965LL;
	uint8_t x766 = 12U;
	int64_t x767 = INT64_MIN;
	static int8_t x768 = 1;
	int32_t t97 = -931604;

	t97 = (x765<=(x766/(x767<=x768)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x769 = -1LL;
	static int32_t x770 = INT32_MIN;
	static uint8_t x772 = 2U;
	int32_t t98 = 0;

	t98 = (x769<=(x770/(x771<=x772)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x773 = 30;
	int32_t x775 = -1;
	static int64_t x776 = 7924339150485LL;
	int32_t t99 = -958120;

	t99 = (x773<=(x774/(x775<=x776)));

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

