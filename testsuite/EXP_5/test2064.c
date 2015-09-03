#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -3459;
static int32_t x11 = 31;
int32_t x20 = 481;
uint32_t x21 = 1677857413U;
uint8_t x24 = 15U;
int16_t x28 = INT16_MIN;
static volatile uint64_t x47 = UINT64_MAX;
static uint64_t x50 = 1LLU;
int64_t x53 = -1LL;
uint64_t x56 = 191911685741626006LLU;
int8_t x73 = INT8_MIN;
int8_t x76 = 0;
volatile int16_t x77 = -17;
int32_t x78 = -1;
int16_t x79 = INT16_MIN;
volatile int32_t t15 = -1;
int32_t x97 = 0;
volatile int64_t x98 = -850455LL;
uint32_t x99 = 69407830U;
int32_t t17 = -26914;
int32_t x104 = INT32_MIN;
static int32_t t18 = -2;
volatile uint32_t x107 = 1U;
int16_t x108 = INT16_MIN;
volatile uint32_t x113 = 3U;
uint8_t x115 = 3U;
volatile int32_t t21 = -4336;
static int8_t x134 = INT8_MIN;
int8_t x137 = INT8_MIN;
int8_t x139 = INT8_MAX;
int16_t x140 = INT16_MAX;
static int16_t x143 = -1;
int32_t t26 = -126176;
static volatile int8_t x146 = INT8_MIN;
uint8_t x153 = 0U;
uint64_t x156 = 3594587652937799954LLU;
volatile int32_t t29 = -20019;
int32_t x157 = -1;
uint8_t x158 = 2U;
static int32_t t30 = 4841;
volatile int64_t x169 = -1548811536651LL;
int32_t t31 = -31758986;
int32_t t34 = 14;
uint64_t x213 = UINT64_MAX;
uint16_t x215 = UINT16_MAX;
volatile int32_t t37 = -7028591;
volatile int16_t x237 = -1;
int16_t x238 = -132;
int16_t x245 = INT16_MIN;
volatile int64_t x259 = INT64_MAX;
volatile int32_t x265 = INT32_MIN;
uint8_t x281 = 54U;
uint8_t x282 = UINT8_MAX;
int32_t x284 = -1;
int32_t t49 = 0;
int16_t x301 = -505;
int8_t x305 = 51;
int32_t t52 = -628;
int32_t t53 = 1;
int8_t x329 = INT8_MIN;
static uint32_t x330 = UINT32_MAX;
int8_t x331 = INT8_MIN;
uint32_t x332 = 511U;
int32_t x335 = -25;
int16_t x336 = -1;
int32_t t55 = -1698616;
int32_t x343 = 1040034;
static int32_t x346 = INT32_MAX;
volatile int16_t x347 = 1;
static volatile int64_t x353 = INT64_MIN;
static volatile int64_t x371 = INT64_MIN;
volatile int8_t x379 = 1;
uint64_t x389 = 7173804432992667595LLU;
static volatile uint32_t x405 = 382U;
volatile int8_t x413 = -7;
int64_t x415 = -10467LL;
uint64_t x416 = 4431571217755LLU;
volatile int16_t x425 = -1;
int8_t x427 = -1;
volatile uint16_t x431 = UINT16_MAX;
int32_t t70 = -1918050;
int64_t x437 = INT64_MIN;
static int32_t t72 = -40;
static int32_t x441 = INT32_MIN;
static volatile int16_t x446 = INT16_MIN;
uint64_t x448 = 112513LLU;
static int32_t t77 = 1292;
static uint32_t x463 = 876U;
uint8_t x471 = 12U;
static int16_t x472 = -1;
uint32_t x473 = UINT32_MAX;
int64_t x475 = -1LL;
volatile int32_t x478 = -19562;
int32_t x479 = -9996;
static volatile int32_t t81 = -1927924;
volatile uint32_t x490 = 13991774U;
int32_t x492 = -1;
int8_t x519 = INT8_MIN;
uint16_t x522 = UINT16_MAX;
static volatile int32_t t90 = -3326;
volatile int8_t x530 = INT8_MAX;
volatile int32_t t93 = 13;
static int16_t x543 = 1;
int8_t x545 = INT8_MAX;
int32_t t96 = -15;


void f0(void) {
	int16_t x5 = 177;
	int16_t x7 = INT16_MAX;
	int8_t x8 = -3;
	volatile int32_t t0 = 2713;

	t0 = (x5<=((x6^x7)*x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	static uint64_t x10 = 35LLU;
	int16_t x12 = -1;
	int32_t t1 = -211295;

	t1 = (x9<=((x10^x11)*x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x17 = 3082983LLU;
	int64_t x18 = -1LL;
	volatile int16_t x19 = -13112;
	volatile int32_t t2 = -118;

	t2 = (x17<=((x18^x19)*x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = 0;
	volatile uint64_t x23 = 52199540670275LLU;
	static volatile int32_t t3 = 161;

	t3 = (x21<=((x22^x23)*x24));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 3U;
	volatile uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = 3281586;
	int32_t t4 = -86150924;

	t4 = (x25<=((x26^x27)*x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x33 = 2U;
	int32_t x34 = -92871237;
	volatile int64_t x35 = -14033184186LL;
	volatile int16_t x36 = INT16_MIN;
	int32_t t5 = 12;

	t5 = (x33<=((x34^x35)*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 8016U;
	static int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	volatile int32_t x40 = -1;
	volatile int32_t t6 = 672638;

	t6 = (x37<=((x38^x39)*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	uint64_t x43 = 318386LLU;
	int16_t x44 = -1;
	volatile int32_t t7 = 1471522;

	t7 = (x41<=((x42^x43)*x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -1;
	volatile int8_t x46 = INT8_MAX;
	volatile uint8_t x48 = 5U;
	static int32_t t8 = -121536;

	t8 = (x45<=((x46^x47)*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 352669345534LLU;
	volatile uint32_t x51 = UINT32_MAX;
	uint64_t x52 = 1675635153219490LLU;
	int32_t t9 = -358;

	t9 = (x49<=((x50^x51)*x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	volatile int32_t t10 = 2425;

	t10 = (x53<=((x54^x55)*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x57 = UINT16_MAX;
	uint32_t x58 = 318468U;
	static uint16_t x59 = 34U;
	int64_t x60 = -1LL;
	int32_t t11 = 12;

	t11 = (x57<=((x58^x59)*x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x74 = 57;
	uint8_t x75 = 0U;
	volatile int32_t t12 = 7;

	t12 = (x73<=((x74^x75)*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x80 = UINT64_MAX;
	int32_t t13 = 161064149;

	t13 = (x77<=((x78^x79)*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = -1054561759133LL;
	int16_t x86 = -6;
	static volatile uint8_t x87 = UINT8_MAX;
	int32_t x88 = -1;
	volatile int32_t t14 = -3647846;

	t14 = (x85<=((x86^x87)*x88));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -1;
	uint64_t x92 = 1739769823881822054LLU;

	t15 = (x89<=((x90^x91)*x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 868835419184398926LLU;
	uint32_t x94 = UINT32_MAX;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t16 = 57726031;

	t16 = (x93<=((x94^x95)*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x100 = 0;

	t17 = (x97<=((x98^x99)*x100));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = -1;
	uint32_t x102 = 594303U;
	int32_t x103 = INT32_MIN;

	t18 = (x101<=((x102^x103)*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = -1;
	int32_t x106 = 0;
	int32_t t19 = 231298;

	t19 = (x105<=((x106^x107)*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x109 = INT32_MIN;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = -1LL;
	static int8_t x112 = INT8_MAX;
	static int32_t t20 = 331;

	t20 = (x109<=((x110^x111)*x112));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x114 = 817817;
	uint8_t x116 = 105U;

	t21 = (x113<=((x114^x115)*x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 2255585461388LLU;
	int8_t x118 = INT8_MAX;
	int16_t x119 = 40;
	static volatile int16_t x120 = 13;
	int32_t t22 = -9449;

	t22 = (x117<=((x118^x119)*x120));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x125 = UINT16_MAX;
	uint64_t x126 = 179349821LLU;
	int64_t x127 = INT64_MIN;
	int32_t x128 = 74548;
	volatile int32_t t23 = 654;

	t23 = (x125<=((x126^x127)*x128));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = INT8_MIN;
	static uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MAX;
	int32_t t24 = -30431270;

	t24 = (x133<=((x134^x135)*x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x138 = INT16_MIN;
	static volatile int32_t t25 = 2;

	t25 = (x137<=((x138^x139)*x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = INT32_MIN;
	volatile uint16_t x142 = 1241U;
	volatile uint32_t x144 = 211161U;

	t26 = (x141<=((x142^x143)*x144));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x147 = 241U;
	uint32_t x148 = 1758U;
	int32_t t27 = -3;

	t27 = (x145<=((x146^x147)*x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = 14U;
	volatile int16_t x150 = -1;
	int16_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t28 = -240218;

	t28 = (x149<=((x150^x151)*x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x154 = 45U;
	volatile int8_t x155 = -2;

	t29 = (x153<=((x154^x155)*x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x159 = UINT16_MAX;
	static int16_t x160 = INT16_MIN;

	t30 = (x157<=((x158^x159)*x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;

	t31 = (x169<=((x170^x171)*x172));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x177 = -1;
	int32_t x178 = -50947;
	volatile int32_t x179 = -16678683;
	volatile int64_t x180 = 193766461507LL;
	int32_t t32 = 744383715;

	t32 = (x177<=((x178^x179)*x180));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = 23531872;
	int64_t x190 = INT64_MIN;
	static volatile int32_t x191 = INT32_MAX;
	static volatile uint64_t x192 = 654564872746466483LLU;
	volatile int32_t t33 = -180;

	t33 = (x189<=((x190^x191)*x192));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x201 = UINT8_MAX;
	static int64_t x202 = INT64_MIN;
	volatile int32_t x203 = 92060;
	volatile int16_t x204 = -1;

	t34 = (x201<=((x202^x203)*x204));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x205 = 3;
	static volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	int32_t t35 = 15296;

	t35 = (x205<=((x206^x207)*x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x214 = UINT32_MAX;
	int8_t x216 = -1;
	int32_t t36 = 2146065;

	t36 = (x213<=((x214^x215)*x216));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x217 = 94U;
	int64_t x218 = INT64_MIN;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = INT8_MIN;

	t37 = (x217<=((x218^x219)*x220));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x221 = -10;
	uint64_t x222 = 3293172LLU;
	static int64_t x223 = 127629340LL;
	static uint32_t x224 = 2240883U;
	volatile int32_t t38 = -13449858;

	t38 = (x221<=((x222^x223)*x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x229 = 14;
	int8_t x230 = INT8_MAX;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = UINT16_MAX;
	int32_t t39 = -33094;

	t39 = (x229<=((x230^x231)*x232));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x239 = 12;
	int16_t x240 = -1;
	volatile int32_t t40 = -350094;

	t40 = (x237<=((x238^x239)*x240));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x246 = -2242631157469837801LL;
	int32_t x247 = -1;
	int8_t x248 = -1;
	int32_t t41 = 4384;

	t41 = (x245<=((x246^x247)*x248));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile uint64_t x254 = 14276097990LLU;
	int16_t x255 = -8350;
	volatile int64_t x256 = -1LL;
	int32_t t42 = 3873;

	t42 = (x253<=((x254^x255)*x256));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x257 = 78;
	uint64_t x258 = 1007375LLU;
	uint32_t x260 = 10U;
	volatile int32_t t43 = 321765;

	t43 = (x257<=((x258^x259)*x260));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x261 = 4977907;
	static int32_t x262 = INT32_MAX;
	int16_t x263 = INT16_MIN;
	volatile uint64_t x264 = UINT64_MAX;
	volatile int32_t t44 = -59502508;

	t44 = (x261<=((x262^x263)*x264));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x266 = 42825575U;
	int16_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t45 = -1064903790;

	t45 = (x265<=((x266^x267)*x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x269 = -1;
	int16_t x270 = 3772;
	uint16_t x271 = 4U;
	uint8_t x272 = UINT8_MAX;
	int32_t t46 = 1;

	t46 = (x269<=((x270^x271)*x272));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x273 = 398696LL;
	static uint64_t x274 = 193230469671499LLU;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t47 = 21;

	t47 = (x273<=((x274^x275)*x276));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x283 = 0;
	volatile int32_t t48 = -82;

	t48 = (x281<=((x282^x283)*x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int16_t x294 = INT16_MAX;
	volatile int16_t x295 = INT16_MAX;
	uint8_t x296 = 33U;

	t49 = (x293<=((x294^x295)*x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = -14;
	int32_t x299 = INT32_MAX;
	int64_t x300 = -1LL;
	int32_t t50 = 523834;

	t50 = (x297<=((x298^x299)*x300));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x302 = UINT16_MAX;
	uint32_t x303 = 89855U;
	uint16_t x304 = 2U;
	int32_t t51 = -775304032;

	t51 = (x301<=((x302^x303)*x304));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x306 = UINT64_MAX;
	int8_t x307 = -1;
	uint64_t x308 = UINT64_MAX;

	t52 = (x305<=((x306^x307)*x308));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x321 = 22U;
	static int64_t x322 = -722278707880000LL;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 1U;

	t53 = (x321<=((x322^x323)*x324));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t t54 = -1;

	t54 = (x329<=((x330^x331)*x332));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x333 = -1;
	static uint8_t x334 = 53U;

	t55 = (x333<=((x334^x335)*x336));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x341 = 294;
	volatile uint64_t x342 = UINT64_MAX;
	static int16_t x344 = -1;
	static volatile int32_t t56 = -56301736;

	t56 = (x341<=((x342^x343)*x344));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x348 = 569LL;
	volatile int32_t t57 = 1191932;

	t57 = (x345<=((x346^x347)*x348));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = -1LL;
	uint16_t x351 = 3682U;
	int8_t x352 = INT8_MAX;
	volatile int32_t t58 = -15;

	t58 = (x349<=((x350^x351)*x352));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x354 = 1;
	static int8_t x355 = INT8_MIN;
	static volatile int8_t x356 = -1;
	volatile int32_t t59 = 14;

	t59 = (x353<=((x354^x355)*x356));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = -1LL;
	volatile int16_t x363 = 6;
	volatile uint16_t x364 = 585U;
	static volatile int32_t t60 = 2686;

	t60 = (x361<=((x362^x363)*x364));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x369 = 0;
	static uint64_t x370 = 218431LLU;
	static int32_t x372 = INT32_MAX;
	int32_t t61 = 10317107;

	t61 = (x369<=((x370^x371)*x372));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x374 = 122U;
	int64_t x375 = -213399960300241LL;
	static volatile uint8_t x376 = 77U;
	volatile int32_t t62 = -11;

	t62 = (x373<=((x374^x375)*x376));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x377 = 15296505429LLU;
	int16_t x378 = -3426;
	uint16_t x380 = UINT16_MAX;
	static volatile int32_t t63 = -168888;

	t63 = (x377<=((x378^x379)*x380));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x390 = -1;
	static int64_t x391 = -1LL;
	int16_t x392 = INT16_MIN;
	volatile int32_t t64 = 1606404;

	t64 = (x389<=((x390^x391)*x392));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x406 = INT32_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	volatile int8_t x408 = -1;
	static volatile int32_t t65 = 10453052;

	t65 = (x405<=((x406^x407)*x408));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int8_t x410 = INT8_MAX;
	static int16_t x411 = -312;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t66 = 1051057747;

	t66 = (x409<=((x410^x411)*x412));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x414 = -3549;
	static volatile int32_t t67 = 5440;

	t67 = (x413<=((x414^x415)*x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x421 = UINT64_MAX;
	volatile uint8_t x422 = 5U;
	int64_t x423 = -1LL;
	int64_t x424 = -133793213998961LL;
	volatile int32_t t68 = -5619919;

	t68 = (x421<=((x422^x423)*x424));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x426 = -1;
	int8_t x428 = 0;
	volatile int32_t t69 = 331607864;

	t69 = (x425<=((x426^x427)*x428));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x429 = 1687139378955367LLU;
	volatile int16_t x430 = INT16_MAX;
	static uint16_t x432 = 2U;

	t70 = (x429<=((x430^x431)*x432));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x433 = INT16_MIN;
	static uint64_t x434 = UINT64_MAX;
	volatile int64_t x435 = INT64_MIN;
	int16_t x436 = 3;
	int32_t t71 = 4;

	t71 = (x433<=((x434^x435)*x436));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x438 = 0;
	uint64_t x439 = 178LLU;
	static int16_t x440 = -1274;

	t72 = (x437<=((x438^x439)*x440));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x442 = INT8_MIN;
	static int32_t x443 = 7015;
	static volatile uint8_t x444 = 2U;
	int32_t t73 = 28;

	t73 = (x441<=((x442^x443)*x444));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x445 = INT16_MIN;
	volatile uint64_t x447 = UINT64_MAX;
	volatile int32_t t74 = 1;

	t74 = (x445<=((x446^x447)*x448));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x449 = -1;
	static volatile int16_t x450 = -1;
	int8_t x451 = -1;
	volatile int64_t x452 = INT64_MAX;
	int32_t t75 = 488832;

	t75 = (x449<=((x450^x451)*x452));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x453 = 2;
	volatile uint64_t x454 = 143171495958421667LLU;
	int16_t x455 = INT16_MAX;
	int64_t x456 = 24098465990850LL;
	int32_t t76 = 167963373;

	t76 = (x453<=((x454^x455)*x456));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x457 = UINT64_MAX;
	uint32_t x458 = UINT32_MAX;
	int8_t x459 = INT8_MIN;
	static int16_t x460 = 1019;

	t77 = (x457<=((x458^x459)*x460));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x461 = INT8_MAX;
	int32_t x462 = -1;
	int16_t x464 = 1;
	static int32_t t78 = -22;

	t78 = (x461<=((x462^x463)*x464));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x469 = UINT16_MAX;
	static volatile int64_t x470 = -56295292852242LL;
	int32_t t79 = -288840;

	t79 = (x469<=((x470^x471)*x472));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x474 = -551941797;
	int16_t x476 = INT16_MAX;
	volatile int32_t t80 = 2060859;

	t80 = (x473<=((x474^x475)*x476));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x477 = INT16_MIN;
	int64_t x480 = 1270831839466LL;

	t81 = (x477<=((x478^x479)*x480));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x481 = 3347U;
	int32_t x482 = INT32_MIN;
	static uint64_t x483 = 8767037403285LLU;
	volatile int64_t x484 = -3703103391692LL;
	int32_t t82 = 678082658;

	t82 = (x481<=((x482^x483)*x484));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x485 = -27;
	int8_t x486 = 35;
	volatile uint64_t x487 = 5100411920706667LLU;
	static volatile int16_t x488 = -2906;
	volatile int32_t t83 = 442;

	t83 = (x485<=((x486^x487)*x488));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x489 = -1LL;
	volatile uint8_t x491 = 69U;
	static volatile int32_t t84 = -377515338;

	t84 = (x489<=((x490^x491)*x492));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x493 = -10394029741948LL;
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = 1LL;
	volatile int64_t x496 = 3058944LL;
	int32_t t85 = 7390671;

	t85 = (x493<=((x494^x495)*x496));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x501 = 1420;
	static volatile uint32_t x502 = 144860U;
	int8_t x503 = INT8_MIN;
	int32_t x504 = 398745;
	volatile int32_t t86 = 292;

	t86 = (x501<=((x502^x503)*x504));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x505 = INT32_MAX;
	static int32_t x506 = INT32_MIN;
	int64_t x507 = -1LL;
	uint32_t x508 = UINT32_MAX;
	static int32_t t87 = 25543;

	t87 = (x505<=((x506^x507)*x508));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = INT64_MIN;
	static uint8_t x510 = 5U;
	int16_t x511 = 182;
	uint16_t x512 = 72U;
	static int32_t t88 = 36122076;

	t88 = (x509<=((x510^x511)*x512));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x517 = -48938410;
	volatile uint32_t x518 = UINT32_MAX;
	int16_t x520 = -22;
	static volatile int32_t t89 = 21;

	t89 = (x517<=((x518^x519)*x520));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x521 = UINT32_MAX;
	int8_t x523 = 46;
	uint16_t x524 = 7U;

	t90 = (x521<=((x522^x523)*x524));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x525 = UINT32_MAX;
	int16_t x526 = -1;
	int16_t x527 = INT16_MIN;
	int16_t x528 = 1;
	volatile int32_t t91 = -1044487341;

	t91 = (x525<=((x526^x527)*x528));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x529 = INT64_MAX;
	uint32_t x531 = 7575631U;
	int32_t x532 = INT32_MIN;
	volatile int32_t t92 = 472076789;

	t92 = (x529<=((x530^x531)*x532));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x537 = INT16_MIN;
	volatile uint8_t x538 = 4U;
	int64_t x539 = 231891895114LL;
	int8_t x540 = 47;

	t93 = (x537<=((x538^x539)*x540));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x541 = UINT16_MAX;
	int16_t x542 = INT16_MIN;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t94 = 383305;

	t94 = (x541<=((x542^x543)*x544));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x546 = 1;
	static int8_t x547 = INT8_MAX;
	int64_t x548 = 14071940492LL;
	volatile int32_t t95 = 304;

	t95 = (x545<=((x546^x547)*x548));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x549 = -4853941;
	static uint16_t x550 = 3U;
	volatile int16_t x551 = INT16_MAX;
	int32_t x552 = 1;

	t96 = (x549<=((x550^x551)*x552));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x553 = INT32_MIN;
	volatile uint16_t x554 = UINT16_MAX;
	int16_t x555 = INT16_MAX;
	static int16_t x556 = -403;
	int32_t t97 = 6321;

	t97 = (x553<=((x554^x555)*x556));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x569 = -1;
	static volatile uint32_t x570 = 26180U;
	int64_t x571 = INT64_MIN;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t98 = -250871;

	t98 = (x569<=((x570^x571)*x572));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x581 = -1;
	int32_t x582 = -1;
	uint64_t x583 = 2100484407924LLU;
	uint64_t x584 = UINT64_MAX;
	int32_t t99 = 414437;

	t99 = (x581<=((x582^x583)*x584));

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

