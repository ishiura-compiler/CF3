#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x31 = -1;
int8_t x32 = 1;
volatile int16_t x40 = 30;
uint16_t x41 = 7691U;
static uint8_t x44 = UINT8_MAX;
int32_t t2 = 219;
int8_t x48 = 52;
volatile int32_t t3 = -706;
uint16_t x74 = 3538U;
int8_t x109 = -16;
uint8_t x110 = UINT8_MAX;
static int32_t t8 = -23875;
int16_t x117 = -1763;
volatile int8_t x119 = INT8_MAX;
static uint32_t x134 = 39392116U;
uint64_t x135 = 7733734055998775LLU;
uint32_t x136 = 5U;
int32_t t10 = -6330;
int8_t x149 = INT8_MIN;
int8_t x152 = INT8_MIN;
uint32_t x153 = 102U;
static int16_t x198 = INT16_MIN;
uint8_t x199 = UINT8_MAX;
uint64_t t15 = 1316355241LLU;
int32_t x205 = INT32_MAX;
volatile int64_t x208 = 20891526LL;
int8_t x217 = INT8_MAX;
volatile int32_t x218 = INT32_MIN;
int32_t t18 = 131;
int32_t t19 = 17875801;
static volatile int8_t x234 = -1;
int64_t x235 = -1LL;
int32_t t22 = -9941;
uint64_t x280 = 4564651251735615078LLU;
uint16_t x299 = 11719U;
uint32_t x300 = UINT32_MAX;
uint32_t x304 = UINT32_MAX;
volatile uint32_t x324 = 6506578U;
int16_t x334 = INT16_MIN;
int16_t x346 = INT16_MAX;
static int64_t x348 = -1LL;
static uint16_t x353 = UINT16_MAX;
int64_t x382 = -3974LL;
static uint32_t x383 = 168U;
int16_t x417 = INT16_MAX;
int8_t x433 = INT8_MIN;
int64_t x438 = -249LL;
volatile uint32_t x439 = 11U;
uint16_t x440 = UINT16_MAX;
int64_t x467 = INT64_MIN;
int16_t x468 = 1;
int64_t t41 = 7204827508620LL;
static uint16_t x489 = 482U;
int32_t x492 = INT32_MAX;
int16_t x494 = -1;
static volatile int32_t t44 = 3;
int32_t x505 = 37313;
int32_t t45 = -50976053;
int16_t x510 = INT16_MIN;
int32_t x514 = 2006;
int8_t x520 = INT8_MAX;
int16_t x557 = -15;
static int16_t x558 = INT16_MIN;
int64_t x569 = 256958044634088358LL;
int64_t t52 = 19022284479493LL;
volatile int64_t x574 = INT64_MIN;
static volatile int32_t x605 = INT32_MIN;
static int32_t x619 = INT32_MAX;
static int32_t t57 = -16025;
volatile int16_t x627 = INT16_MAX;
int8_t x641 = INT8_MIN;
int64_t t63 = -1239987902LL;
int8_t x703 = INT8_MIN;
volatile uint8_t x736 = 13U;
uint64_t x767 = 749423388523617488LLU;
static volatile int32_t x776 = -1;
int32_t x798 = -2066;
static int16_t x800 = 151;
static int32_t t74 = -17;
volatile int32_t x809 = 1342799;
int32_t x810 = -1;
uint32_t x850 = 1607U;
volatile int32_t t78 = -1;
int16_t x861 = INT16_MIN;
int8_t x864 = -11;
volatile uint64_t x868 = 25933271131860LLU;
static uint32_t x873 = 3319U;
static volatile uint32_t t81 = 2832175U;
static int64_t x881 = 38012487488LL;
int64_t t82 = -3197922LL;
uint8_t x891 = 75U;
int32_t t83 = -4610990;
uint8_t x899 = UINT8_MAX;
int16_t x912 = INT16_MAX;
int8_t x926 = INT8_MAX;
volatile uint16_t x945 = UINT16_MAX;
uint8_t x946 = UINT8_MAX;
uint32_t x981 = 34144193U;
volatile uint64_t x984 = 21613140870739LLU;
int32_t x1036 = -1;
uint32_t t92 = 3U;
volatile int32_t x1043 = -1;
int64_t x1076 = 1LL;
uint64_t t95 = 849787697413LLU;
int32_t t96 = -82;
int64_t x1129 = -1LL;
int64_t x1132 = INT64_MIN;


void f0(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = 328332466681778LLU;
	int32_t t0 = 3888561;

	t0 = (x29%(x30<=(x31*x32)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = -3;
	uint8_t x39 = 3U;
	static int32_t t1 = -7;

	t1 = (x37%(x38<=(x39*x40)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x42 = 0LL;
	static uint8_t x43 = 1U;

	t2 = (x41%(x42<=(x43*x44)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x45 = 5747U;
	static uint8_t x46 = UINT8_MAX;
	volatile uint64_t x47 = UINT64_MAX;

	t3 = (x45%(x46<=(x47*x48)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	static uint16_t x55 = 19611U;
	int16_t x56 = 3;
	volatile int64_t t4 = -52LL;

	t4 = (x53%(x54<=(x55*x56)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	uint16_t x60 = 3182U;
	volatile int64_t t5 = -150207LL;

	t5 = (x57%(x58<=(x59*x60)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x69 = 13U;
	int16_t x70 = 12;
	uint32_t x71 = 1766281U;
	int16_t x72 = INT16_MIN;
	int32_t t6 = -61102;

	t6 = (x69%(x70<=(x71*x72)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x75 = 11U;
	static uint32_t x76 = UINT32_MAX;
	int64_t t7 = 50427495098260415LL;

	t7 = (x73%(x74<=(x75*x76)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x111 = 1211U;
	uint8_t x112 = 7U;

	t8 = (x109%(x110<=(x111*x112)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x118 = -1;
	int8_t x120 = 56;
	int32_t t9 = -61334;

	t9 = (x117%(x118<=(x119*x120)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x133 = 14456824;

	t10 = (x133%(x134<=(x135*x136)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x150 = INT32_MIN;
	static int32_t x151 = -2;
	int32_t t11 = -3;

	t11 = (x149%(x150<=(x151*x152)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x154 = INT64_MAX;
	int8_t x155 = INT8_MAX;
	static uint64_t x156 = UINT64_MAX;
	volatile uint32_t t12 = 2298U;

	t12 = (x153%(x154<=(x155*x156)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x177 = INT16_MAX;
	static uint32_t x178 = 22379U;
	uint64_t x179 = 51833LLU;
	int8_t x180 = 5;
	volatile int32_t t13 = 20934129;

	t13 = (x177%(x178<=(x179*x180)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x181 = -1;
	int8_t x182 = 13;
	int32_t x183 = INT32_MIN;
	volatile uint64_t x184 = 1537654LLU;
	volatile int32_t t14 = 127;

	t14 = (x181%(x182<=(x183*x184)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x197 = 62120LLU;
	uint8_t x200 = 11U;

	t15 = (x197%(x198<=(x199*x200)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = UINT64_MAX;
	int32_t t16 = 95286175;

	t16 = (x205%(x206<=(x207*x208)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x209 = 0;
	int64_t x210 = INT64_MAX;
	uint32_t x211 = 1860491U;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t17 = 127150799;

	t17 = (x209%(x210<=(x211*x212)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x219 = -1LL;
	int16_t x220 = INT16_MIN;

	t18 = (x217%(x218<=(x219*x220)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x225 = -1;
	static uint16_t x226 = 22874U;
	static int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;

	t19 = (x225%(x226<=(x227*x228)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x233 = INT16_MIN;
	int16_t x236 = -1;
	int32_t t20 = -881;

	t20 = (x233%(x234<=(x235*x236)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x237 = 6U;
	uint8_t x238 = 41U;
	uint8_t x239 = UINT8_MAX;
	static volatile int64_t x240 = 4075856186774LL;
	volatile uint32_t t21 = 0U;

	t21 = (x237%(x238<=(x239*x240)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x269 = INT16_MIN;
	static volatile int8_t x270 = -1;
	int8_t x271 = 20;
	static int64_t x272 = 37675LL;

	t22 = (x269%(x270<=(x271*x272)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x273 = 5;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = 14U;
	uint32_t x276 = UINT32_MAX;
	static volatile int32_t t23 = -919;

	t23 = (x273%(x274<=(x275*x276)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x277 = 1662U;
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t t24 = -7593;

	t24 = (x277%(x278<=(x279*x280)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x281 = INT16_MIN;
	static volatile uint8_t x282 = 3U;
	static uint64_t x283 = 45709932LLU;
	static volatile int8_t x284 = -1;
	int32_t t25 = 1;

	t25 = (x281%(x282<=(x283*x284)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x297 = -1;
	int32_t x298 = -63265;
	volatile int32_t t26 = 168409177;

	t26 = (x297%(x298<=(x299*x300)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x301 = 518291532;
	int32_t x302 = INT32_MIN;
	uint16_t x303 = UINT16_MAX;
	int32_t t27 = 379944618;

	t27 = (x301%(x302<=(x303*x304)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x321 = 8U;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int32_t t28 = -192421652;

	t28 = (x321%(x322<=(x323*x324)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x333 = INT64_MAX;
	int64_t x335 = -1LL;
	volatile uint64_t x336 = 8LLU;
	int64_t t29 = 99603853LL;

	t29 = (x333%(x334<=(x335*x336)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x345 = INT16_MIN;
	int64_t x347 = -500637410769471280LL;
	volatile int32_t t30 = 307764410;

	t30 = (x345%(x346<=(x347*x348)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x354 = INT64_MIN;
	volatile int16_t x355 = -1;
	int32_t x356 = 2;
	int32_t t31 = -1;

	t31 = (x353%(x354<=(x355*x356)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x369 = INT16_MAX;
	int32_t x370 = 26925562;
	int32_t x371 = INT32_MIN;
	static uint64_t x372 = 485867662404837LLU;
	static volatile int32_t t32 = -30;

	t32 = (x369%(x370<=(x371*x372)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x377 = -2;
	int8_t x378 = -1;
	int8_t x379 = -1;
	volatile int16_t x380 = 0;
	static volatile int32_t t33 = -10;

	t33 = (x377%(x378<=(x379*x380)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x381 = -1;
	int32_t x384 = -30046;
	int32_t t34 = 15;

	t34 = (x381%(x382<=(x383*x384)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x389 = INT64_MIN;
	volatile int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	static volatile int8_t x392 = INT8_MAX;
	int64_t t35 = -3638421LL;

	t35 = (x389%(x390<=(x391*x392)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x393 = 6;
	volatile int32_t x394 = INT32_MIN;
	uint16_t x395 = 164U;
	uint16_t x396 = 25003U;
	volatile int32_t t36 = -1384;

	t36 = (x393%(x394<=(x395*x396)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x418 = -3704LL;
	int32_t x419 = -475226;
	int8_t x420 = -14;
	volatile int32_t t37 = 1;

	t37 = (x417%(x418<=(x419*x420)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x434 = 2237301334LL;
	uint16_t x435 = 21U;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t38 = -338900668;

	t38 = (x433%(x434<=(x435*x436)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x437 = -1;
	int32_t t39 = -149;

	t39 = (x437%(x438<=(x439*x440)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x457 = UINT8_MAX;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t40 = 7;

	t40 = (x457%(x458<=(x459*x460)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x465 = 28799118997275176LL;
	volatile uint64_t x466 = 25281290113992LLU;

	t41 = (x465%(x466<=(x467*x468)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x469 = -30;
	static volatile int16_t x470 = INT16_MAX;
	int64_t x471 = INT64_MAX;
	volatile uint64_t x472 = 308262LLU;
	volatile int32_t t42 = -1;

	t42 = (x469%(x470<=(x471*x472)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x490 = INT16_MIN;
	int64_t x491 = 238702LL;
	volatile int32_t t43 = 32;

	t43 = (x489%(x490<=(x491*x492)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x493 = 9;
	uint8_t x495 = 11U;
	int32_t x496 = 3659;

	t44 = (x493%(x494<=(x495*x496)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x506 = -4005;
	volatile int32_t x507 = -10;
	volatile int64_t x508 = -1LL;

	t45 = (x505%(x506<=(x507*x508)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x509 = INT16_MAX;
	int8_t x511 = -1;
	uint16_t x512 = 11U;
	int32_t t46 = -2359111;

	t46 = (x509%(x510<=(x511*x512)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x513 = 626349353143919LL;
	volatile uint64_t x515 = 13364565722812638LLU;
	static uint8_t x516 = UINT8_MAX;
	int64_t t47 = -265676321448LL;

	t47 = (x513%(x514<=(x515*x516)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x517 = -1LL;
	volatile uint64_t x518 = 35489937536851946LLU;
	static int8_t x519 = INT8_MIN;
	volatile int64_t t48 = 63816LL;

	t48 = (x517%(x518<=(x519*x520)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x533 = -1;
	uint16_t x534 = 14U;
	uint16_t x535 = UINT16_MAX;
	uint8_t x536 = 49U;
	int32_t t49 = -2211538;

	t49 = (x533%(x534<=(x535*x536)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x553 = 1U;
	int32_t x554 = INT32_MIN;
	static int32_t x555 = -1;
	int32_t x556 = -1;
	int32_t t50 = -6;

	t50 = (x553%(x554<=(x555*x556)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x559 = -1;
	int8_t x560 = -10;
	int32_t t51 = 1068;

	t51 = (x557%(x558<=(x559*x560)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x570 = 4U;
	uint32_t x571 = 17026U;
	volatile int8_t x572 = INT8_MIN;

	t52 = (x569%(x570<=(x571*x572)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x573 = -57;
	static uint8_t x575 = UINT8_MAX;
	static int16_t x576 = -1;
	volatile int32_t t53 = -522891824;

	t53 = (x573%(x574<=(x575*x576)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x577 = 0LLU;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = 5U;
	int32_t x580 = -63524;
	static volatile uint64_t t54 = 41LLU;

	t54 = (x577%(x578<=(x579*x580)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x601 = -3438;
	volatile uint32_t x602 = UINT32_MAX;
	int64_t x603 = 5220494411776LL;
	uint64_t x604 = 18981994242350430LLU;
	volatile int32_t t55 = -212;

	t55 = (x601%(x602<=(x603*x604)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x606 = INT64_MIN;
	static uint16_t x607 = 577U;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t56 = 89;

	t56 = (x605%(x606<=(x607*x608)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x617 = INT16_MIN;
	static volatile uint16_t x618 = 1U;
	volatile uint32_t x620 = 424U;

	t57 = (x617%(x618<=(x619*x620)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x625 = -1;
	static int16_t x626 = -44;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t58 = -69594;

	t58 = (x625%(x626<=(x627*x628)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x637 = INT16_MAX;
	uint32_t x638 = 0U;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = 16143382;
	volatile int32_t t59 = -19;

	t59 = (x637%(x638<=(x639*x640)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x642 = UINT16_MAX;
	volatile int64_t x643 = INT64_MIN;
	uint64_t x644 = UINT64_MAX;
	static int32_t t60 = -1;

	t60 = (x641%(x642<=(x643*x644)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x661 = INT64_MAX;
	int32_t x662 = INT32_MIN;
	int8_t x663 = -1;
	static int8_t x664 = INT8_MAX;
	volatile int64_t t61 = 65907536351687380LL;

	t61 = (x661%(x662<=(x663*x664)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x665 = INT16_MAX;
	volatile uint32_t x666 = 34389903U;
	static int8_t x667 = 1;
	int8_t x668 = INT8_MIN;
	volatile int32_t t62 = 66095;

	t62 = (x665%(x666<=(x667*x668)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x681 = INT64_MIN;
	static int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MIN;
	uint16_t x684 = 0U;

	t63 = (x681%(x682<=(x683*x684)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x685 = INT64_MIN;
	uint16_t x686 = 354U;
	volatile int16_t x687 = INT16_MIN;
	static uint64_t x688 = 6447947566LLU;
	volatile int64_t t64 = -311LL;

	t64 = (x685%(x686<=(x687*x688)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x701 = INT64_MIN;
	static volatile int32_t x702 = INT32_MIN;
	uint16_t x704 = UINT16_MAX;
	volatile int64_t t65 = 4180387505193519272LL;

	t65 = (x701%(x702<=(x703*x704)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x705 = 81U;
	volatile int8_t x706 = 3;
	uint8_t x707 = UINT8_MAX;
	uint16_t x708 = 14U;
	volatile int32_t t66 = 394904670;

	t66 = (x705%(x706<=(x707*x708)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x733 = -1682;
	uint64_t x734 = 815622282286LLU;
	static int16_t x735 = INT16_MIN;
	int32_t t67 = 197;

	t67 = (x733%(x734<=(x735*x736)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x737 = 22323682037740LLU;
	int64_t x738 = -653287422938LL;
	static int32_t x739 = 1;
	static int64_t x740 = INT64_MAX;
	static uint64_t t68 = 382LLU;

	t68 = (x737%(x738<=(x739*x740)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x745 = -1064317605;
	uint16_t x746 = 11266U;
	uint32_t x747 = 15U;
	volatile uint16_t x748 = UINT16_MAX;
	static volatile int32_t t69 = -291;

	t69 = (x745%(x746<=(x747*x748)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x757 = 8506930399939016785LLU;
	static int64_t x758 = 3154269615LL;
	static volatile int16_t x759 = 1;
	uint64_t x760 = 281844889804752192LLU;
	volatile uint64_t t70 = 75LLU;

	t70 = (x757%(x758<=(x759*x760)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x765 = 2635LLU;
	static int16_t x766 = 51;
	uint16_t x768 = UINT16_MAX;
	volatile uint64_t t71 = 2932543LLU;

	t71 = (x765%(x766<=(x767*x768)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x773 = 3U;
	uint32_t x774 = 186114U;
	static volatile uint64_t x775 = 83658760104595LLU;
	volatile int32_t t72 = -1763;

	t72 = (x773%(x774<=(x775*x776)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x785 = 32007U;
	uint8_t x786 = 3U;
	volatile uint8_t x787 = 3U;
	uint32_t x788 = 901U;
	volatile uint32_t t73 = 19U;

	t73 = (x785%(x786<=(x787*x788)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x797 = 1;
	uint16_t x799 = UINT16_MAX;

	t74 = (x797%(x798<=(x799*x800)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x811 = UINT8_MAX;
	int64_t x812 = 65780957797478LL;
	volatile int32_t t75 = 75996479;

	t75 = (x809%(x810<=(x811*x812)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x821 = INT64_MAX;
	static int32_t x822 = -1;
	static int32_t x823 = -862996;
	int8_t x824 = -15;
	volatile int64_t t76 = 24378LL;

	t76 = (x821%(x822<=(x823*x824)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x837 = UINT32_MAX;
	volatile uint64_t x838 = 878LLU;
	static uint64_t x839 = UINT64_MAX;
	uint32_t x840 = 1U;
	uint32_t t77 = 35U;

	t77 = (x837%(x838<=(x839*x840)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x849 = 684U;
	uint16_t x851 = 120U;
	int8_t x852 = 47;

	t78 = (x849%(x850<=(x851*x852)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x862 = -1;
	int8_t x863 = -13;
	volatile int32_t t79 = -311068280;

	t79 = (x861%(x862<=(x863*x864)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x865 = INT32_MIN;
	uint16_t x866 = 49U;
	volatile uint16_t x867 = 20366U;
	int32_t t80 = -1004;

	t80 = (x865%(x866<=(x867*x868)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x874 = 20814506;
	uint16_t x875 = 1457U;
	uint16_t x876 = UINT16_MAX;

	t81 = (x873%(x874<=(x875*x876)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x882 = 5U;
	volatile uint32_t x883 = UINT32_MAX;
	static volatile uint8_t x884 = UINT8_MAX;

	t82 = (x881%(x882<=(x883*x884)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x889 = 11031;
	uint8_t x890 = 1U;
	static uint16_t x892 = 1953U;

	t83 = (x889%(x890<=(x891*x892)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x897 = INT64_MAX;
	int32_t x898 = INT32_MIN;
	volatile int16_t x900 = INT16_MIN;
	int64_t t84 = -51LL;

	t84 = (x897%(x898<=(x899*x900)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x909 = 333030418;
	uint16_t x910 = 0U;
	int8_t x911 = 0;
	volatile int32_t t85 = 55;

	t85 = (x909%(x910<=(x911*x912)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x925 = 60884199402775066LLU;
	uint64_t x927 = UINT64_MAX;
	static volatile int32_t x928 = INT32_MIN;
	static volatile uint64_t t86 = 2069368035LLU;

	t86 = (x925%(x926<=(x927*x928)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x947 = 3570LLU;
	volatile int16_t x948 = 1;
	int32_t t87 = 86321;

	t87 = (x945%(x946<=(x947*x948)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x953 = -1;
	int64_t x954 = -1LL;
	int16_t x955 = INT16_MIN;
	volatile int64_t x956 = -1LL;
	volatile int32_t t88 = 16;

	t88 = (x953%(x954<=(x955*x956)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x961 = INT32_MAX;
	static int64_t x962 = -66751341749684LL;
	int32_t x963 = -1;
	uint8_t x964 = 0U;
	volatile int32_t t89 = 19041202;

	t89 = (x961%(x962<=(x963*x964)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x982 = 15060975U;
	static uint32_t x983 = 27531364U;
	volatile uint32_t t90 = 1203156357U;

	t90 = (x981%(x982<=(x983*x984)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1005 = -1;
	int64_t x1006 = -160435204786LL;
	uint8_t x1007 = 3U;
	int64_t x1008 = -1LL;
	int32_t t91 = 465;

	t91 = (x1005%(x1006<=(x1007*x1008)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1033 = 56584638U;
	uint32_t x1034 = 21861U;
	int64_t x1035 = -3165128242LL;

	t92 = (x1033%(x1034<=(x1035*x1036)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1041 = 315347U;
	uint64_t x1042 = 81201LLU;
	uint64_t x1044 = 777198197941359LLU;
	volatile uint32_t t93 = 1U;

	t93 = (x1041%(x1042<=(x1043*x1044)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1065 = INT64_MIN;
	static int16_t x1066 = INT16_MIN;
	static uint8_t x1067 = UINT8_MAX;
	volatile int64_t x1068 = -1LL;
	volatile int64_t t94 = -9848318219754387LL;

	t94 = (x1065%(x1066<=(x1067*x1068)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1073 = 1586693529LLU;
	static int16_t x1074 = INT16_MAX;
	int32_t x1075 = INT32_MAX;

	t95 = (x1073%(x1074<=(x1075*x1076)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1081 = INT32_MIN;
	uint16_t x1082 = UINT16_MAX;
	int16_t x1083 = INT16_MIN;
	volatile uint64_t x1084 = 129084840910326452LLU;

	t96 = (x1081%(x1082<=(x1083*x1084)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1117 = INT32_MIN;
	volatile int8_t x1118 = 12;
	static volatile int8_t x1119 = INT8_MAX;
	static int8_t x1120 = INT8_MAX;
	static volatile int32_t t97 = 32347;

	t97 = (x1117%(x1118<=(x1119*x1120)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x1125 = INT16_MIN;
	static volatile int32_t x1126 = INT32_MIN;
	uint16_t x1127 = 22012U;
	int16_t x1128 = -1;
	static int32_t t98 = 22;

	t98 = (x1125%(x1126<=(x1127*x1128)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1130 = 0U;
	uint64_t x1131 = 16LLU;
	int64_t t99 = -179824LL;

	t99 = (x1129%(x1130<=(x1131*x1132)));

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

