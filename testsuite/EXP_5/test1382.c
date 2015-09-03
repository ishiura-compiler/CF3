#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MAX;
uint8_t x7 = UINT8_MAX;
volatile uint32_t x20 = UINT32_MAX;
int16_t x33 = INT16_MAX;
uint16_t x36 = 16083U;
int8_t x59 = INT8_MIN;
uint16_t x68 = UINT16_MAX;
int64_t x80 = -1LL;
volatile uint32_t x82 = UINT32_MAX;
static int32_t x84 = INT32_MIN;
static int8_t x103 = INT8_MAX;
int32_t x104 = INT32_MIN;
int32_t x116 = -1;
volatile int32_t t15 = -1733;
int8_t x159 = -1;
uint32_t x183 = 16380U;
int32_t x236 = -1;
int8_t x252 = 24;
static int32_t x256 = -5;
volatile int32_t t25 = -3;
uint8_t x262 = 44U;
int8_t x269 = -1;
volatile int8_t x286 = INT8_MIN;
uint8_t x305 = 23U;
int16_t x308 = INT16_MIN;
volatile uint32_t x324 = 172947U;
uint32_t t33 = 1128U;
int16_t x345 = -1;
int64_t x350 = INT64_MIN;
static volatile uint8_t x356 = 24U;
volatile int32_t t38 = -582470;
static uint64_t t39 = 23253287444539409LLU;
volatile int32_t t40 = -133085969;
int64_t t41 = -465LL;
static int16_t x384 = INT16_MAX;
uint16_t x420 = 806U;
uint64_t x421 = 438373LLU;
static uint64_t t45 = 53789802447115LLU;
volatile int32_t x436 = INT32_MIN;
int64_t x439 = 1LL;
static uint8_t x440 = 1U;
static int64_t x458 = INT64_MIN;
int16_t x460 = 10;
int32_t x467 = -1;
volatile int8_t x478 = -1;
uint8_t x491 = 0U;
int16_t x548 = -1;
uint32_t x553 = 22U;
volatile int8_t x554 = -1;
static uint16_t x574 = 146U;
uint16_t x576 = 1U;
uint64_t x578 = 968345LLU;
int64_t x579 = INT64_MIN;
uint8_t x589 = 0U;
volatile uint16_t x629 = 9U;
int8_t x647 = -1;
volatile uint64_t t68 = 522032018748LLU;
int64_t x657 = 8080LL;
int8_t x661 = 18;
int64_t x679 = 102414438343063043LL;
int32_t x683 = INT32_MAX;
static int8_t x709 = -1;
int16_t x711 = -1;
volatile int32_t x716 = -336669477;
int8_t x718 = -2;
volatile uint32_t t75 = 15210411U;
uint32_t x761 = 445U;
int8_t x763 = -5;
uint16_t x764 = 7U;
volatile uint32_t t78 = 654471990U;
int16_t x767 = INT16_MAX;
volatile uint16_t x768 = 29541U;
uint8_t x789 = UINT8_MAX;
int32_t t80 = -10;
static int64_t x823 = 139920170LL;
int32_t x824 = INT32_MAX;
int8_t x826 = INT8_MIN;
uint64_t x834 = 868762615848662LLU;
uint32_t x840 = 25U;
static int16_t x849 = -1;
static volatile int32_t t88 = 1;
int16_t x855 = INT16_MAX;
uint16_t x867 = 2U;
volatile int64_t x868 = -7179796343330073LL;
int32_t x870 = 981358;
static int64_t x877 = 298181493193LL;
int64_t x878 = -605990740635LL;
uint16_t x951 = UINT16_MAX;
int16_t x961 = INT16_MIN;
int8_t x963 = INT8_MAX;
int32_t x970 = INT32_MIN;
uint16_t x971 = 7430U;
uint64_t t99 = 11424755767220230LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 1U;
	uint8_t x3 = UINT8_MAX;
	int64_t t0 = 9412LL;

	t0 = (x1/((x2<x3)*x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 1U;
	int32_t x6 = INT32_MIN;
	int32_t x8 = 25178;
	static volatile int32_t t1 = -381102;

	t1 = (x5/((x6<x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 0U;
	volatile int8_t x18 = -1;
	static int32_t x19 = 0;
	uint32_t t2 = 791276404U;

	t2 = (x17/((x18<x19)*x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 0U;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 7U;
	volatile uint64_t x28 = 1328400730239230823LLU;
	uint64_t t3 = 135539LLU;

	t3 = (x25/((x26<x27)*x28));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x34 = -16353355;
	uint16_t x35 = UINT16_MAX;
	static int32_t t4 = -256;

	t4 = (x33/((x34<x35)*x36));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	volatile int64_t x60 = INT64_MIN;
	int64_t t5 = 48790LL;

	t5 = (x57/((x58<x59)*x60));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 0U;
	uint8_t x67 = 12U;
	volatile int64_t t6 = 6LL;

	t6 = (x65/((x66<x67)*x68));

	if (t6 != -140739635871744LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x73 = -1LL;
	int8_t x74 = INT8_MIN;
	static volatile uint16_t x75 = 886U;
	static int32_t x76 = -1;
	int64_t t7 = -2LL;

	t7 = (x73/((x74<x75)*x76));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = 3712LL;
	static uint64_t x79 = 4356118LLU;
	volatile int64_t t8 = -35095383231611LL;

	t8 = (x77/((x78<x79)*x80));

	if (t8 != 2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x81 = -3;
	int64_t x83 = INT64_MAX;
	static volatile int32_t t9 = -113;

	t9 = (x81/((x82<x83)*x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x85 = -16341543;
	volatile uint32_t x86 = 7980U;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = 1;
	volatile int32_t t10 = -54021640;

	t10 = (x85/((x86<x87)*x88));

	if (t10 != -16341543) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = 196666008;
	int64_t x94 = -15793082324141520LL;
	volatile int32_t x95 = -3859865;
	uint64_t x96 = 22399248775827078LLU;
	uint64_t t11 = 7655830760284784913LLU;

	t11 = (x93/((x94<x95)*x96));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	int32_t t12 = -12801716;

	t12 = (x101/((x102<x103)*x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x113 = -1LL;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MAX;
	int64_t t13 = -2207790989LL;

	t13 = (x113/((x114<x115)*x116));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x133 = 1214088151U;
	int8_t x134 = 13;
	int32_t x135 = INT32_MAX;
	volatile int16_t x136 = 417;
	static volatile uint32_t t14 = 56202U;

	t14 = (x133/((x134<x135)*x136));

	if (t14 != 2911482U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = -49;
	volatile uint64_t x139 = UINT64_MAX;
	int16_t x140 = -2786;

	t15 = (x137/((x138<x139)*x140));

	if (t15 != 770812) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x157 = 2U;
	uint64_t x158 = 17296537LLU;
	static volatile uint32_t x160 = 42632008U;
	uint32_t t16 = 290199U;

	t16 = (x157/((x158<x159)*x160));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x165 = INT8_MIN;
	uint32_t x166 = 5U;
	volatile int32_t x167 = INT32_MIN;
	int16_t x168 = -12;
	int32_t t17 = 18992408;

	t17 = (x165/((x166<x167)*x168));

	if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x181 = 33U;
	uint8_t x182 = 0U;
	int16_t x184 = INT16_MAX;
	int32_t t18 = 1923169;

	t18 = (x181/((x182<x183)*x184));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x197 = 360;
	volatile int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t19 = -29479;

	t19 = (x197/((x198<x199)*x200));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x213 = INT8_MIN;
	volatile int16_t x214 = -1;
	int64_t x215 = INT64_MAX;
	static volatile int8_t x216 = INT8_MAX;
	int32_t t20 = -12108;

	t20 = (x213/((x214<x215)*x216));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x229 = 25997U;
	static volatile int16_t x230 = 407;
	static int16_t x231 = INT16_MAX;
	static int8_t x232 = INT8_MIN;
	uint32_t t21 = 59504U;

	t21 = (x229/((x230<x231)*x232));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x233 = -1;
	int64_t x234 = INT64_MIN;
	volatile int16_t x235 = INT16_MIN;
	int32_t t22 = -13676069;

	t22 = (x233/((x234<x235)*x236));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x245 = 60687836LLU;
	volatile int16_t x246 = 14;
	int8_t x247 = INT8_MAX;
	uint64_t x248 = 562LLU;
	volatile uint64_t t23 = 116797684337LLU;

	t23 = (x245/((x246<x247)*x248));

	if (t23 != 107985LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int8_t x250 = INT8_MIN;
	int32_t x251 = 44750148;
	uint64_t t24 = 10567893780LLU;

	t24 = (x249/((x250<x251)*x252));

	if (t24 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = -1LL;
	volatile int32_t x255 = INT32_MAX;

	t25 = (x253/((x254<x255)*x256));

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x261 = -1;
	uint16_t x263 = 93U;
	volatile uint8_t x264 = 15U;
	static volatile int32_t t26 = -118;

	t26 = (x261/((x262<x263)*x264));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x265 = UINT8_MAX;
	int16_t x266 = INT16_MAX;
	uint32_t x267 = UINT32_MAX;
	static int8_t x268 = INT8_MIN;
	int32_t t27 = 10444;

	t27 = (x265/((x266<x267)*x268));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	static int16_t x272 = INT16_MIN;
	int32_t t28 = -69;

	t28 = (x269/((x270<x271)*x272));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x277 = INT32_MIN;
	uint8_t x278 = UINT8_MAX;
	static volatile uint64_t x279 = 8865LLU;
	static uint64_t x280 = 20190627LLU;
	volatile uint64_t t29 = 167302438905971831LLU;

	t29 = (x277/((x278<x279)*x280));

	if (t29 != 913629084998LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x285 = INT8_MIN;
	int64_t x287 = 15938LL;
	int64_t x288 = -19619LL;
	static int64_t t30 = 1830115483129LL;

	t30 = (x285/((x286<x287)*x288));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x289 = -1;
	uint32_t x290 = 4U;
	int8_t x291 = 59;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t31 = 97573984560128308LLU;

	t31 = (x289/((x290<x291)*x292));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x306 = INT16_MIN;
	volatile int32_t x307 = -1;
	static volatile int32_t t32 = -26220161;

	t32 = (x305/((x306<x307)*x308));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x321 = 1;
	volatile uint16_t x322 = 0U;
	volatile uint32_t x323 = 111777U;

	t33 = (x321/((x322<x323)*x324));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x329 = -1;
	static uint16_t x330 = 26953U;
	uint32_t x331 = 25248156U;
	int16_t x332 = -1;
	int32_t t34 = 36;

	t34 = (x329/((x330<x331)*x332));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x341 = 323U;
	int16_t x342 = -32;
	int32_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	uint32_t t35 = 13778U;

	t35 = (x341/((x342<x343)*x344));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x346 = 46;
	uint16_t x347 = UINT16_MAX;
	volatile int16_t x348 = 1;
	volatile int32_t t36 = -359;

	t36 = (x345/((x346<x347)*x348));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x349 = 588747593284LL;
	int16_t x351 = INT16_MIN;
	int32_t x352 = 33315819;
	volatile int64_t t37 = -155328193206398LL;

	t37 = (x349/((x350<x351)*x352));

	if (t37 != 17671LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = -1;

	t38 = (x353/((x354<x355)*x356));

	if (t38 != -5) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x361 = 1U;
	volatile int8_t x362 = -2;
	volatile int8_t x363 = 0;
	uint64_t x364 = 3310080760257582LLU;

	t39 = (x361/((x362<x363)*x364));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 505907LLU;
	int64_t x371 = -1LL;
	static volatile int32_t x372 = 92;

	t40 = (x369/((x370<x371)*x372));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x377 = -1;
	static int16_t x378 = INT16_MIN;
	static uint16_t x379 = 90U;
	int64_t x380 = -22674696990LL;

	t41 = (x377/((x378<x379)*x380));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x381 = 91U;
	volatile int32_t x382 = INT32_MAX;
	int64_t x383 = 531408385150147011LL;
	int32_t t42 = -11607548;

	t42 = (x381/((x382<x383)*x384));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x409 = -1;
	uint64_t x410 = 1162675677LLU;
	int8_t x411 = -10;
	uint8_t x412 = UINT8_MAX;
	int32_t t43 = -11;

	t43 = (x409/((x410<x411)*x412));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x417 = 61;
	volatile int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	int32_t t44 = -7529571;

	t44 = (x417/((x418<x419)*x420));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x422 = -1152096768LL;
	volatile int32_t x423 = 232694;
	volatile int64_t x424 = -43866762094LL;

	t45 = (x421/((x422<x423)*x424));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x429 = 3U;
	static int16_t x430 = INT16_MIN;
	int8_t x431 = 0;
	static uint32_t x432 = 251873U;
	uint32_t t46 = 4U;

	t46 = (x429/((x430<x431)*x432));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x433 = -2;
	volatile int8_t x434 = -7;
	int16_t x435 = -1;
	volatile int32_t t47 = -1;

	t47 = (x433/((x434<x435)*x436));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x437 = 48062;
	volatile int64_t x438 = INT64_MIN;
	volatile int32_t t48 = 2105;

	t48 = (x437/((x438<x439)*x440));

	if (t48 != 48062) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x449 = INT32_MIN;
	volatile uint16_t x450 = 12U;
	uint32_t x451 = 13U;
	uint16_t x452 = 20118U;
	int32_t t49 = -28;

	t49 = (x449/((x450<x451)*x452));

	if (t49 != -106744) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x457 = INT16_MIN;
	int32_t x459 = 12701855;
	volatile int32_t t50 = -787723;

	t50 = (x457/((x458<x459)*x460));

	if (t50 != -3276) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x465 = UINT8_MAX;
	int32_t x466 = INT32_MIN;
	static volatile int32_t x468 = -1;
	volatile int32_t t51 = 0;

	t51 = (x465/((x466<x467)*x468));

	if (t51 != -255) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x477 = 56;
	static uint16_t x479 = 26U;
	volatile int8_t x480 = INT8_MIN;
	int32_t t52 = 32897936;

	t52 = (x477/((x478<x479)*x480));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x489 = INT16_MIN;
	int64_t x490 = -1LL;
	uint16_t x492 = 96U;
	int32_t t53 = 1671543;

	t53 = (x489/((x490<x491)*x492));

	if (t53 != -341) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x509 = INT64_MAX;
	uint32_t x510 = 470721U;
	int32_t x511 = -1898108;
	volatile int64_t x512 = 257191353LL;
	int64_t t54 = -128752288754844LL;

	t54 = (x509/((x510<x511)*x512));

	if (t54 != 35861905656LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x525 = -1;
	int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MAX;
	int8_t x528 = INT8_MAX;
	static int32_t t55 = -140;

	t55 = (x525/((x526<x527)*x528));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x541 = -1;
	int8_t x542 = INT8_MIN;
	int8_t x543 = 1;
	int32_t x544 = INT32_MAX;
	int32_t t56 = 126;

	t56 = (x541/((x542<x543)*x544));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x545 = 263650U;
	static int16_t x546 = INT16_MIN;
	int64_t x547 = -20LL;
	uint32_t t57 = 386663343U;

	t57 = (x545/((x546<x547)*x548));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x549 = 55439;
	static int32_t x550 = INT32_MIN;
	static int32_t x551 = 38;
	uint8_t x552 = 6U;
	static volatile int32_t t58 = 508;

	t58 = (x549/((x550<x551)*x552));

	if (t58 != 9239) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x555 = INT64_MAX;
	volatile int32_t x556 = INT32_MIN;
	volatile uint32_t t59 = 5028U;

	t59 = (x553/((x554<x555)*x556));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x573 = UINT64_MAX;
	static uint32_t x575 = 439U;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (x573/((x574<x575)*x576));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x577 = INT16_MIN;
	static int8_t x580 = -1;
	volatile int32_t t61 = -7166;

	t61 = (x577/((x578<x579)*x580));

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x590 = -48LL;
	uint8_t x591 = 1U;
	volatile int8_t x592 = INT8_MAX;
	static int32_t t62 = -7259;

	t62 = (x589/((x590<x591)*x592));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x597 = -7;
	int32_t x598 = 27;
	volatile uint32_t x599 = 99412U;
	int64_t x600 = -1LL;
	static volatile int64_t t63 = 127109244964170131LL;

	t63 = (x597/((x598<x599)*x600));

	if (t63 != 7LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x613 = 893222LLU;
	static int8_t x614 = INT8_MAX;
	uint32_t x615 = UINT32_MAX;
	uint16_t x616 = 11831U;
	uint64_t t64 = 2679138805236412LLU;

	t64 = (x613/((x614<x615)*x616));

	if (t64 != 75LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x630 = -3318650LL;
	static volatile uint64_t x631 = UINT64_MAX;
	int16_t x632 = INT16_MAX;
	int32_t t65 = -1;

	t65 = (x629/((x630<x631)*x632));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x637 = 20;
	static int64_t x638 = INT64_MIN;
	static uint16_t x639 = 507U;
	volatile int32_t x640 = -1;
	int32_t t66 = 23430;

	t66 = (x637/((x638<x639)*x640));

	if (t66 != -20) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x645 = INT8_MIN;
	static uint64_t x646 = 23754LLU;
	int64_t x648 = -1675761LL;
	int64_t t67 = -41698197LL;

	t67 = (x645/((x646<x647)*x648));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x649 = INT16_MAX;
	int8_t x650 = 0;
	int16_t x651 = INT16_MAX;
	volatile uint64_t x652 = 15914997586546LLU;

	t68 = (x649/((x650<x651)*x652));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x658 = INT8_MAX;
	int32_t x659 = 10098958;
	uint16_t x660 = UINT16_MAX;
	static volatile int64_t t69 = 0LL;

	t69 = (x657/((x658<x659)*x660));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x662 = 16911U;
	int32_t x663 = INT32_MIN;
	int8_t x664 = 20;
	int32_t t70 = -14496040;

	t70 = (x661/((x662<x663)*x664));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x677 = -2;
	int8_t x678 = INT8_MIN;
	static int32_t x680 = INT32_MAX;
	int32_t t71 = 11095;

	t71 = (x677/((x678<x679)*x680));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x681 = 5U;
	int32_t x682 = -1;
	uint32_t x684 = UINT32_MAX;
	static volatile uint32_t t72 = 176795U;

	t72 = (x681/((x682<x683)*x684));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x710 = INT8_MIN;
	static volatile uint32_t x712 = UINT32_MAX;
	volatile uint32_t t73 = 442735U;

	t73 = (x709/((x710<x711)*x712));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x713 = INT32_MIN;
	int64_t x714 = -881282059114LL;
	uint32_t x715 = 325813U;
	static int32_t t74 = 340545301;

	t74 = (x713/((x714<x715)*x716));

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x717 = INT16_MIN;
	static int32_t x719 = INT32_MAX;
	uint32_t x720 = UINT32_MAX;

	t75 = (x717/((x718<x719)*x720));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MIN;
	static int32_t x747 = -1;
	uint16_t x748 = 104U;
	volatile int32_t t76 = 0;

	t76 = (x745/((x746<x747)*x748));

	if (t76 != 630) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x749 = 2900970LL;
	uint64_t x750 = 8604601048123182815LLU;
	int16_t x751 = INT16_MIN;
	static int8_t x752 = INT8_MIN;
	volatile int64_t t77 = 14657626890851157LL;

	t77 = (x749/((x750<x751)*x752));

	if (t77 != -22663LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x762 = INT8_MIN;

	t78 = (x761/((x762<x763)*x764));

	if (t78 != 63U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x765 = INT16_MIN;
	uint16_t x766 = 121U;
	int32_t t79 = -30;

	t79 = (x765/((x766<x767)*x768));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x790 = 13028;
	volatile uint16_t x791 = UINT16_MAX;
	int16_t x792 = INT16_MIN;

	t80 = (x789/((x790<x791)*x792));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x793 = 45906990U;
	int64_t x794 = INT64_MIN;
	volatile int8_t x795 = INT8_MAX;
	int8_t x796 = 3;
	volatile uint32_t t81 = 523257U;

	t81 = (x793/((x794<x795)*x796));

	if (t81 != 15302330U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x817 = 3U;
	int8_t x818 = -1;
	uint16_t x819 = UINT16_MAX;
	int16_t x820 = INT16_MIN;
	int32_t t82 = 236;

	t82 = (x817/((x818<x819)*x820));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x821 = -283108421366290537LL;
	static int64_t x822 = INT64_MIN;
	int64_t t83 = -8LL;

	t83 = (x821/((x822<x823)*x824));

	if (t83 != -131832632LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x825 = UINT32_MAX;
	static int64_t x827 = 490260070591376858LL;
	int32_t x828 = -261;
	uint32_t t84 = 1U;

	t84 = (x825/((x826<x827)*x828));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x833 = -22;
	int32_t x835 = INT32_MIN;
	int64_t x836 = 234936LL;
	static int64_t t85 = 5408107013LL;

	t85 = (x833/((x834<x835)*x836));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x837 = -1276198072678417292LL;
	int8_t x838 = INT8_MIN;
	uint64_t x839 = UINT64_MAX;
	volatile int64_t t86 = 441LL;

	t86 = (x837/((x838<x839)*x840));

	if (t86 != -51047922907136691LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x845 = 857157852U;
	volatile int16_t x846 = -4;
	volatile int32_t x847 = 11683;
	uint8_t x848 = UINT8_MAX;
	uint32_t t87 = 369592648U;

	t87 = (x845/((x846<x847)*x848));

	if (t87 != 3361403U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x850 = INT8_MIN;
	int8_t x851 = -5;
	uint8_t x852 = 91U;

	t88 = (x849/((x850<x851)*x852));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x853 = 1616U;
	int32_t x854 = INT32_MIN;
	static int8_t x856 = -1;
	volatile uint32_t t89 = 7638U;

	t89 = (x853/((x854<x855)*x856));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x857 = 14405U;
	int8_t x858 = 1;
	static uint16_t x859 = 17U;
	uint16_t x860 = 3U;
	int32_t t90 = 2689;

	t90 = (x857/((x858<x859)*x860));

	if (t90 != 4801) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x865 = UINT64_MAX;
	int8_t x866 = INT8_MIN;
	volatile uint64_t t91 = 425299LLU;

	t91 = (x865/((x866<x867)*x868));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x869 = UINT16_MAX;
	uint32_t x871 = UINT32_MAX;
	static int8_t x872 = -19;
	volatile int32_t t92 = -128;

	t92 = (x869/((x870<x871)*x872));

	if (t92 != -3449) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x879 = INT32_MIN;
	volatile int64_t x880 = 1LL;
	static int64_t t93 = -3LL;

	t93 = (x877/((x878<x879)*x880));

	if (t93 != 298181493193LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x893 = UINT32_MAX;
	uint64_t x894 = 950103216922996LLU;
	uint64_t x895 = UINT64_MAX;
	int32_t x896 = INT32_MAX;
	uint32_t t94 = 507717U;

	t94 = (x893/((x894<x895)*x896));

	if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x901 = INT32_MIN;
	int16_t x902 = INT16_MIN;
	int64_t x903 = -1LL;
	volatile int8_t x904 = INT8_MAX;
	int32_t t95 = 1200;

	t95 = (x901/((x902<x903)*x904));

	if (t95 != -16909320) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x949 = 1;
	static volatile int8_t x950 = INT8_MIN;
	uint16_t x952 = UINT16_MAX;
	int32_t t96 = 1009;

	t96 = (x949/((x950<x951)*x952));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x957 = INT16_MAX;
	uint64_t x958 = 0LLU;
	int16_t x959 = -1;
	int8_t x960 = INT8_MIN;
	volatile int32_t t97 = -139;

	t97 = (x957/((x958<x959)*x960));

	if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x962 = 22U;
	volatile int32_t x964 = 132751668;
	int32_t t98 = -1592494;

	t98 = (x961/((x962<x963)*x964));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x969 = UINT64_MAX;
	volatile int8_t x972 = INT8_MIN;

	t99 = (x969/((x970<x971)*x972));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

