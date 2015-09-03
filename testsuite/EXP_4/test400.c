#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
int64_t x8 = 2924710LL;
static volatile int32_t x9 = 7241398;
int32_t x13 = INT32_MIN;
int8_t x14 = 1;
int16_t x24 = 25;
volatile int32_t t4 = -9085614;
volatile uint64_t x26 = UINT64_MAX;
volatile int32_t t6 = -14;
volatile int32_t x36 = -1;
uint8_t x41 = 101U;
uint16_t x44 = 902U;
uint16_t x45 = UINT16_MAX;
int32_t t10 = -2453;
int8_t x67 = INT8_MIN;
static int16_t x78 = 698;
uint16_t x84 = UINT16_MAX;
static int32_t t14 = -916908;
volatile int64_t x93 = -68545LL;
static volatile int16_t x94 = 195;
int8_t x95 = -45;
static uint64_t x96 = 83570641255LLU;
volatile int32_t t15 = -3496052;
int32_t t16 = -278864;
uint16_t x137 = UINT16_MAX;
int8_t x143 = INT8_MIN;
int32_t x144 = -5002351;
static volatile int32_t t20 = 57;
volatile uint32_t x148 = UINT32_MAX;
uint8_t x151 = 1U;
uint8_t x175 = 7U;
static volatile int32_t t25 = -782205;
uint32_t x181 = 3619117U;
static uint32_t x183 = UINT32_MAX;
static volatile uint64_t x186 = 15LLU;
int32_t x203 = -1;
int32_t t31 = 113;
int16_t x217 = INT16_MAX;
int32_t x246 = INT32_MIN;
int16_t x248 = INT16_MAX;
int32_t t34 = 849;
int8_t x249 = -3;
volatile int8_t x265 = INT8_MIN;
uint64_t x270 = 6161462445142LLU;
int32_t t39 = -12025;
volatile int16_t x274 = INT16_MIN;
int8_t x281 = INT8_MIN;
int32_t x285 = INT32_MIN;
int32_t x286 = 11870435;
int32_t t44 = -7238;
static int32_t t45 = -5483062;
static int64_t x305 = -233LL;
int32_t x310 = -1;
int16_t x311 = INT16_MIN;
volatile int32_t t47 = 590;
uint16_t x313 = 3410U;
volatile int32_t t48 = -100113311;
uint16_t x327 = 682U;
uint32_t x331 = UINT32_MAX;
int32_t t52 = 7;
int32_t t53 = 15;
int8_t x346 = -6;
uint32_t x348 = UINT32_MAX;
int32_t t54 = 94;
static int32_t t55 = 31673648;
static volatile int16_t x356 = -1;
int16_t x357 = INT16_MIN;
volatile int16_t x359 = -1;
int16_t x360 = INT16_MAX;
uint8_t x361 = 49U;
uint8_t x363 = 1U;
static int16_t x370 = INT16_MIN;
int32_t x371 = INT32_MAX;
int32_t t59 = 26076;
int16_t x373 = INT16_MIN;
uint8_t x379 = UINT8_MAX;
uint64_t x387 = 52009903LLU;
int32_t x388 = INT32_MIN;
int8_t x411 = INT8_MIN;
volatile int32_t t65 = 5978830;
static int8_t x413 = INT8_MAX;
uint16_t x431 = 7U;
int8_t x441 = -53;
volatile uint16_t x444 = 3U;
int32_t x458 = INT32_MIN;
uint8_t x464 = UINT8_MAX;
int32_t x468 = -52629;
volatile int16_t x478 = 202;
int32_t t78 = 424770786;
static volatile uint64_t x483 = UINT64_MAX;
int64_t x484 = -259001161695244LL;
uint32_t x486 = 15773697U;
int64_t x489 = INT64_MIN;
int64_t x494 = -1LL;
static volatile int32_t t82 = 0;
int64_t x504 = 16292LL;
uint16_t x511 = 7517U;
uint64_t x520 = 7508LLU;
int32_t t85 = 8347;
int32_t x527 = 1;
volatile int32_t t86 = -7;
uint32_t x534 = UINT32_MAX;
static int32_t t87 = -5;
int32_t x546 = INT32_MIN;
int64_t x558 = -515820548155737LL;
volatile int16_t x560 = -1;
int8_t x577 = 0;
uint8_t x583 = 3U;
int32_t x584 = -31;
int8_t x586 = -1;
uint16_t x607 = UINT16_MAX;


void f0(void) {
	static volatile int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	int32_t t0 = 30038285;

	t0 = (x5<=(x6%(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = INT8_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	int32_t x12 = 97;
	volatile int32_t t1 = -19679;

	t1 = (x9<=(x10%(x11*x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x15 = INT8_MIN;
	uint64_t x16 = 8LLU;
	int32_t t2 = 56;

	t2 = (x13<=(x14%(x15*x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 3214U;
	static uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = -1LL;
	volatile int16_t x20 = INT16_MIN;
	static volatile int32_t t3 = 26653687;

	t3 = (x17<=(x18%(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 142U;
	uint32_t x23 = UINT32_MAX;

	t4 = (x21<=(x22%(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -11615LL;
	static uint8_t x27 = 1U;
	int64_t x28 = -1LL;
	int32_t t5 = -46062578;

	t5 = (x25<=(x26%(x27*x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 3U;
	uint8_t x30 = 1U;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MAX;

	t6 = (x29<=(x30%(x31*x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x33 = 10;
	static volatile int16_t x34 = INT16_MIN;
	static volatile uint8_t x35 = 5U;
	volatile int32_t t7 = 185574933;

	t7 = (x33<=(x34%(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MAX;
	volatile uint64_t x43 = 22384LLU;
	int32_t t8 = -2194;

	t8 = (x41<=(x42%(x43*x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	int64_t x48 = -1LL;
	int32_t t9 = 11;

	t9 = (x45<=(x46%(x47*x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -2;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	int16_t x60 = -1;

	t10 = (x57<=(x58%(x59*x60)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	volatile uint8_t x68 = UINT8_MAX;
	int32_t t11 = 52;

	t11 = (x65<=(x66%(x67*x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x77 = -1;
	uint16_t x79 = 1U;
	uint16_t x80 = 3348U;
	int32_t t12 = 7839555;

	t12 = (x77<=(x78%(x79*x80)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = 1060;
	uint32_t x82 = 3052606U;
	static int16_t x83 = -55;
	int32_t t13 = 19433;

	t13 = (x81<=(x82%(x83*x84)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x85 = INT64_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	volatile int64_t x87 = 2LL;
	int32_t x88 = INT32_MIN;

	t14 = (x85<=(x86%(x87*x88)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {


	t15 = (x93<=(x94%(x95*x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x97 = 13521U;
	uint16_t x98 = UINT16_MAX;
	uint16_t x99 = 50U;
	int8_t x100 = INT8_MIN;

	t16 = (x97<=(x98%(x99*x100)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	volatile int64_t x107 = -1LL;
	uint32_t x108 = UINT32_MAX;
	int32_t t17 = 12272;

	t17 = (x105<=(x106%(x107*x108)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x121 = UINT8_MAX;
	static int16_t x122 = INT16_MIN;
	int64_t x123 = -113853657LL;
	int16_t x124 = INT16_MIN;
	volatile int32_t t18 = -276669260;

	t18 = (x121<=(x122%(x123*x124)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x138 = -84;
	volatile uint64_t x139 = 59387757854896LLU;
	uint8_t x140 = 2U;
	int32_t t19 = -369;

	t19 = (x137<=(x138%(x139*x140)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x141 = 3329LLU;
	volatile int16_t x142 = -874;

	t20 = (x141<=(x142%(x143*x144)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x145 = 32U;
	static int8_t x146 = -1;
	static uint8_t x147 = 7U;
	int32_t t21 = 44495;

	t21 = (x145<=(x146%(x147*x148)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x149 = INT8_MAX;
	static uint8_t x150 = 10U;
	static uint8_t x152 = UINT8_MAX;
	int32_t t22 = -36;

	t22 = (x149<=(x150%(x151*x152)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x153 = INT32_MAX;
	static uint16_t x154 = 823U;
	uint16_t x155 = 19935U;
	uint32_t x156 = UINT32_MAX;
	static volatile int32_t t23 = -204320075;

	t23 = (x153<=(x154%(x155*x156)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = 35U;
	static int32_t x158 = 99594453;
	int32_t x159 = -3904677;
	volatile int8_t x160 = INT8_MIN;
	int32_t t24 = -3649546;

	t24 = (x157<=(x158%(x159*x160)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x173 = -1;
	static int16_t x174 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;

	t25 = (x173<=(x174%(x175*x176)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	static uint32_t x180 = UINT32_MAX;
	int32_t t26 = -10422269;

	t26 = (x177<=(x178%(x179*x180)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x182 = INT32_MIN;
	static int32_t x184 = INT32_MIN;
	int32_t t27 = -11497627;

	t27 = (x181<=(x182%(x183*x184)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x185 = 118797LLU;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 22U;
	int32_t t28 = 4;

	t28 = (x185<=(x186%(x187*x188)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x201 = INT8_MAX;
	static int16_t x202 = -2828;
	uint64_t x204 = 182LLU;
	int32_t t29 = -13587534;

	t29 = (x201<=(x202%(x203*x204)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = INT16_MAX;
	volatile uint8_t x211 = 1U;
	static int8_t x212 = INT8_MIN;
	int32_t t30 = 27;

	t30 = (x209<=(x210%(x211*x212)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x213 = -1;
	int64_t x214 = -1LL;
	volatile int64_t x215 = -1LL;
	static int64_t x216 = -1LL;

	t31 = (x213<=(x214%(x215*x216)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MAX;
	uint16_t x220 = 1090U;
	int32_t t32 = -171324;

	t32 = (x217<=(x218%(x219*x220)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = -846582883578514955LL;
	static int16_t x239 = INT16_MIN;
	volatile int32_t x240 = -1;
	volatile int32_t t33 = 413194917;

	t33 = (x237<=(x238%(x239*x240)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x245 = 423U;
	static uint8_t x247 = 93U;

	t34 = (x245<=(x246%(x247*x248)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x250 = 272U;
	int16_t x251 = -205;
	uint16_t x252 = 1849U;
	volatile int32_t t35 = 3315672;

	t35 = (x249<=(x250%(x251*x252)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x257 = 61721903269658LL;
	volatile uint8_t x258 = 33U;
	int64_t x259 = -1LL;
	int32_t x260 = -115;
	volatile int32_t t36 = 0;

	t36 = (x257<=(x258%(x259*x260)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x261 = -1LL;
	int64_t x262 = 13225886021782215LL;
	int8_t x263 = -1;
	int64_t x264 = -1LL;
	int32_t t37 = 2941;

	t37 = (x261<=(x262%(x263*x264)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x266 = INT8_MIN;
	int16_t x267 = -14;
	int8_t x268 = INT8_MAX;
	int32_t t38 = -1523274;

	t38 = (x265<=(x266%(x267*x268)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x271 = -21;
	volatile uint8_t x272 = 2U;

	t39 = (x269<=(x270%(x271*x272)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x273 = INT32_MIN;
	int64_t x275 = -1352LL;
	static uint64_t x276 = 1661867089647105LLU;
	volatile int32_t t40 = -73001;

	t40 = (x273<=(x274%(x275*x276)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x282 = 1632U;
	int32_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t41 = 4171906;

	t41 = (x281<=(x282%(x283*x284)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = -1;
	static volatile int32_t t42 = -59677049;

	t42 = (x285<=(x286%(x287*x288)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x289 = -1;
	int64_t x290 = -135955783327LL;
	int64_t x291 = -351853679538LL;
	int32_t x292 = 23471;
	int32_t t43 = -13193577;

	t43 = (x289<=(x290%(x291*x292)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x297 = 429500424349LLU;
	uint8_t x298 = 1U;
	int8_t x299 = INT8_MIN;
	int16_t x300 = -1;

	t44 = (x297<=(x298%(x299*x300)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x301 = 7;
	uint64_t x302 = 33377923LLU;
	static uint8_t x303 = UINT8_MAX;
	static int8_t x304 = INT8_MIN;

	t45 = (x301<=(x302%(x303*x304)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x306 = 11801134LLU;
	static int32_t x307 = INT32_MIN;
	static uint64_t x308 = 2493937052824LLU;
	static int32_t t46 = 3234;

	t46 = (x305<=(x306%(x307*x308)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x312 = 162263014834LL;

	t47 = (x309<=(x310%(x311*x312)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x314 = 14U;
	uint16_t x315 = UINT16_MAX;
	volatile int16_t x316 = 13085;

	t48 = (x313<=(x314%(x315*x316)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x321 = 480096585U;
	uint16_t x322 = 29321U;
	int32_t x323 = -1;
	static volatile int8_t x324 = INT8_MAX;
	volatile int32_t t49 = 892832415;

	t49 = (x321<=(x322%(x323*x324)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x325 = 2006253U;
	uint64_t x326 = 189449305604LLU;
	int8_t x328 = 1;
	int32_t t50 = -1197387;

	t50 = (x325<=(x326%(x327*x328)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = 1;
	static volatile uint8_t x332 = 3U;
	volatile int32_t t51 = 224902;

	t51 = (x329<=(x330%(x331*x332)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x333 = 933143948U;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x335 = INT16_MAX;
	static uint8_t x336 = 6U;

	t52 = (x333<=(x334%(x335*x336)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x341 = INT8_MIN;
	int8_t x342 = -60;
	uint16_t x343 = 4U;
	static uint16_t x344 = 82U;

	t53 = (x341<=(x342%(x343*x344)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x345 = INT64_MIN;
	uint32_t x347 = 19620174U;

	t54 = (x345<=(x346%(x347*x348)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x349 = 47U;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 7865171LLU;

	t55 = (x349<=(x350%(x351*x352)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x353 = 63U;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = UINT32_MAX;
	int32_t t56 = -1077;

	t56 = (x353<=(x354%(x355*x356)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x358 = UINT8_MAX;
	int32_t t57 = 249356;

	t57 = (x357<=(x358%(x359*x360)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x362 = INT64_MIN;
	static int32_t x364 = INT32_MAX;
	volatile int32_t t58 = -315;

	t58 = (x361<=(x362%(x363*x364)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x369 = UINT64_MAX;
	static int8_t x372 = -1;

	t59 = (x369<=(x370%(x371*x372)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x374 = -1;
	int8_t x375 = -50;
	int8_t x376 = INT8_MAX;
	int32_t t60 = 42317;

	t60 = (x373<=(x374%(x375*x376)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x377 = INT32_MIN;
	int64_t x378 = -1368513550179821977LL;
	int64_t x380 = -1LL;
	volatile int32_t t61 = 3;

	t61 = (x377<=(x378%(x379*x380)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x385 = 9U;
	int32_t x386 = -1598;
	int32_t t62 = 7;

	t62 = (x385<=(x386%(x387*x388)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x393 = -1;
	uint16_t x394 = 6465U;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = -199;
	int32_t t63 = 148;

	t63 = (x393<=(x394%(x395*x396)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x405 = 1U;
	uint32_t x406 = 521U;
	uint64_t x407 = 473552LLU;
	int8_t x408 = INT8_MAX;
	volatile int32_t t64 = 36372;

	t64 = (x405<=(x406%(x407*x408)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x409 = INT16_MIN;
	static int16_t x410 = -1;
	volatile uint64_t x412 = UINT64_MAX;

	t65 = (x409<=(x410%(x411*x412)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	uint64_t x416 = 83LLU;
	volatile int32_t t66 = 1542;

	t66 = (x413<=(x414%(x415*x416)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x421 = 119691401125681LLU;
	static int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	int8_t x424 = -1;
	volatile int32_t t67 = 193169098;

	t67 = (x421<=(x422%(x423*x424)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x425 = INT32_MIN;
	static uint64_t x426 = 619667034827LLU;
	int64_t x427 = -1LL;
	int8_t x428 = -1;
	int32_t t68 = -28814826;

	t68 = (x425<=(x426%(x427*x428)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x429 = -1LL;
	uint8_t x430 = 0U;
	uint16_t x432 = 3U;
	static volatile int32_t t69 = 72634750;

	t69 = (x429<=(x430%(x431*x432)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x433 = INT16_MIN;
	int64_t x434 = 986LL;
	static int16_t x435 = -1;
	static int32_t x436 = -1;
	volatile int32_t t70 = 27;

	t70 = (x433<=(x434%(x435*x436)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x442 = UINT16_MAX;
	uint64_t x443 = 3849296697407837LLU;
	volatile int32_t t71 = 3;

	t71 = (x441<=(x442%(x443*x444)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x449 = 18U;
	uint16_t x450 = UINT16_MAX;
	uint8_t x451 = 7U;
	static uint32_t x452 = UINT32_MAX;
	volatile int32_t t72 = 3126;

	t72 = (x449<=(x450%(x451*x452)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x457 = INT32_MAX;
	static volatile uint16_t x459 = 419U;
	int64_t x460 = -3554946809280LL;
	int32_t t73 = -130972236;

	t73 = (x457<=(x458%(x459*x460)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x461 = 2U;
	volatile uint64_t x462 = UINT64_MAX;
	int8_t x463 = 63;
	static int32_t t74 = -6;

	t74 = (x461<=(x462%(x463*x464)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x465 = INT16_MIN;
	uint16_t x466 = 219U;
	int16_t x467 = -1;
	int32_t t75 = -32;

	t75 = (x465<=(x466%(x467*x468)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x469 = INT8_MAX;
	int64_t x470 = -1LL;
	uint64_t x471 = 3638364405678LLU;
	static volatile int8_t x472 = INT8_MAX;
	static volatile int32_t t76 = 7;

	t76 = (x469<=(x470%(x471*x472)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x473 = 4004U;
	int16_t x474 = 2743;
	int16_t x475 = INT16_MAX;
	int64_t x476 = -2563LL;
	static int32_t t77 = 58915;

	t77 = (x473<=(x474%(x475*x476)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x477 = INT64_MAX;
	int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MIN;

	t78 = (x477<=(x478%(x479*x480)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x481 = -1;
	volatile int32_t x482 = INT32_MIN;
	static volatile int32_t t79 = 34424912;

	t79 = (x481<=(x482%(x483*x484)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x485 = -483977;
	uint32_t x487 = 520903815U;
	int32_t x488 = -1130;
	volatile int32_t t80 = 54366950;

	t80 = (x485<=(x486%(x487*x488)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x490 = INT8_MIN;
	static int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	int32_t t81 = -147518101;

	t81 = (x489<=(x490%(x491*x492)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x493 = INT32_MAX;
	static uint16_t x495 = UINT16_MAX;
	volatile int8_t x496 = -1;

	t82 = (x493<=(x494%(x495*x496)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x501 = INT16_MIN;
	static uint64_t x502 = 23106674096LLU;
	volatile uint64_t x503 = UINT64_MAX;
	int32_t t83 = 246;

	t83 = (x501<=(x502%(x503*x504)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = INT16_MIN;
	int32_t x512 = -1;
	int32_t t84 = 3;

	t84 = (x509<=(x510%(x511*x512)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x517 = 54U;
	static int8_t x518 = 3;
	uint32_t x519 = 694483U;

	t85 = (x517<=(x518%(x519*x520)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x525 = INT32_MIN;
	static uint8_t x526 = UINT8_MAX;
	int16_t x528 = INT16_MIN;

	t86 = (x525<=(x526%(x527*x528)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x533 = 0;
	static uint32_t x535 = UINT32_MAX;
	int32_t x536 = INT32_MIN;

	t87 = (x533<=(x534%(x535*x536)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x541 = 117440U;
	volatile int8_t x542 = -1;
	int8_t x543 = INT8_MIN;
	uint8_t x544 = 19U;
	volatile int32_t t88 = 421785;

	t88 = (x541<=(x542%(x543*x544)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x545 = 1U;
	uint8_t x547 = 114U;
	static int8_t x548 = INT8_MAX;
	int32_t t89 = 222;

	t89 = (x545<=(x546%(x547*x548)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x557 = INT16_MIN;
	static volatile int16_t x559 = -6932;
	static int32_t t90 = 6177;

	t90 = (x557<=(x558%(x559*x560)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x561 = -1604;
	int32_t x562 = INT32_MAX;
	int64_t x563 = 71LL;
	volatile uint64_t x564 = 29LLU;
	volatile int32_t t91 = 15;

	t91 = (x561<=(x562%(x563*x564)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x565 = INT64_MAX;
	volatile uint64_t x566 = 70008899548846022LLU;
	volatile int8_t x567 = -1;
	int32_t x568 = -1;
	int32_t t92 = -1;

	t92 = (x565<=(x566%(x567*x568)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x569 = UINT16_MAX;
	volatile uint32_t x570 = 18183513U;
	int8_t x571 = INT8_MIN;
	int32_t x572 = -607;
	volatile int32_t t93 = -29558;

	t93 = (x569<=(x570%(x571*x572)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x578 = 1;
	uint8_t x579 = 15U;
	volatile int64_t x580 = -270105250672565LL;
	static volatile int32_t t94 = -14330;

	t94 = (x577<=(x578%(x579*x580)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x581 = INT32_MIN;
	int8_t x582 = -1;
	static volatile int32_t t95 = 205038;

	t95 = (x581<=(x582%(x583*x584)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x585 = INT32_MAX;
	uint64_t x587 = 3034488814LLU;
	uint64_t x588 = 14222LLU;
	int32_t t96 = 910;

	t96 = (x585<=(x586%(x587*x588)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x589 = 5;
	uint32_t x590 = 3U;
	static uint8_t x591 = 1U;
	int16_t x592 = 1;
	int32_t t97 = 49;

	t97 = (x589<=(x590%(x591*x592)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x593 = 243844786470174LL;
	static int32_t x594 = -65;
	uint32_t x595 = 863772U;
	int8_t x596 = INT8_MAX;
	volatile int32_t t98 = 281;

	t98 = (x593<=(x594%(x595*x596)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x605 = 145898443901159653LLU;
	int16_t x606 = -3;
	uint8_t x608 = UINT8_MAX;
	static int32_t t99 = 53536028;

	t99 = (x605<=(x606%(x607*x608)));

	if (t99 != 1) { NG(); } else { ; }
	
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

