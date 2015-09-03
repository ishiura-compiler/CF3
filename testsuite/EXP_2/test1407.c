#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = INT64_MIN;
uint16_t x25 = 704U;
int32_t x26 = -1;
int32_t x27 = INT32_MAX;
static int8_t x29 = INT8_MIN;
volatile int32_t t4 = 0;
volatile uint8_t x57 = 4U;
static int64_t x60 = 6687388551332631LL;
uint16_t x61 = UINT16_MAX;
static int16_t x62 = INT16_MIN;
static int32_t t9 = -58493;
int16_t x111 = INT16_MIN;
volatile int64_t t11 = -96670571LL;
static volatile uint16_t x139 = UINT16_MAX;
uint32_t t12 = 1U;
int64_t x141 = -7513LL;
int32_t x149 = INT32_MIN;
int32_t t14 = 14665;
uint64_t x165 = 167667369315088LLU;
int8_t x174 = 36;
int32_t x176 = INT32_MAX;
volatile uint32_t t17 = 58434U;
volatile uint16_t x183 = 2U;
int16_t x184 = -1;
static int32_t x189 = 284733788;
int16_t x192 = -1;
int32_t t20 = -4;
uint64_t x202 = 15356087440955529LLU;
int32_t x203 = -1;
int16_t x213 = -1;
int64_t x214 = INT64_MIN;
uint32_t x216 = UINT32_MAX;
int16_t x222 = INT16_MIN;
int16_t x223 = -663;
int32_t x224 = INT32_MIN;
static int64_t x233 = INT64_MIN;
uint32_t x235 = UINT32_MAX;
volatile int64_t t24 = 658687LL;
volatile uint64_t x248 = 1061LLU;
uint64_t t25 = 191LLU;
int16_t x250 = -63;
static uint8_t x262 = 1U;
int16_t x266 = INT16_MIN;
volatile int8_t x267 = INT8_MIN;
int16_t x272 = 0;
volatile uint32_t t30 = 15U;
int32_t x277 = INT32_MIN;
uint16_t x279 = 20687U;
static volatile int64_t t32 = -445677LL;
int64_t x288 = 721LL;
volatile int64_t t33 = 57LL;
volatile int32_t x297 = INT32_MIN;
int32_t x318 = -1;
static int16_t x341 = INT16_MIN;
uint64_t x347 = 23745354605974LLU;
uint64_t t38 = 8833LLU;
static int8_t x353 = INT8_MAX;
int32_t x354 = -180986311;
int64_t x369 = -108584074376LL;
int32_t x371 = INT32_MAX;
int16_t x382 = -1;
uint16_t x386 = 26U;
static volatile int64_t t44 = -13LL;
int32_t t45 = -304179;
int8_t x457 = -3;
static int16_t x462 = INT16_MIN;
static int64_t x492 = INT64_MIN;
static volatile uint16_t x496 = 741U;
volatile int64_t t56 = 8089110629LL;
int64_t x553 = INT64_MIN;
int16_t x577 = INT16_MAX;
int8_t x592 = INT8_MAX;
int32_t x620 = INT32_MIN;
volatile int16_t x622 = -20;
static volatile int64_t x648 = INT64_MIN;
int64_t x652 = 3802693970359461LL;
int32_t x674 = 3;
volatile int32_t t69 = -782253;
volatile uint16_t x686 = UINT16_MAX;
volatile uint64_t t70 = 2303710LLU;
int16_t x705 = INT16_MIN;
int8_t x707 = -36;
int16_t x737 = -1;
static uint32_t x740 = 6252232U;
static int64_t t81 = 33206297822233LL;
volatile uint32_t t82 = 1608164U;
int64_t x767 = INT64_MIN;
int64_t x771 = INT64_MAX;
static volatile uint32_t t85 = 299U;
static uint32_t x782 = 760523593U;
int32_t x788 = -1;
volatile int64_t t87 = 973LL;
int8_t x791 = -1;
static int32_t x792 = INT32_MIN;
int64_t x814 = INT64_MIN;
int32_t t89 = 426918;
uint64_t x845 = 67505111031829LLU;
uint8_t x848 = 0U;
int16_t x852 = INT16_MIN;
int32_t x861 = 924366372;
int32_t x863 = -97;
volatile int32_t t95 = 865183;
volatile int64_t x868 = INT64_MAX;
int8_t x896 = INT8_MIN;
int32_t x916 = -1;


void f0(void) {
	volatile int64_t x5 = -1LL;
	int32_t x7 = 112;
	volatile uint16_t x8 = 10947U;
	static int64_t t0 = -88074695409741796LL;

	t0 = ((x5%(x6<x7))*x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -1LL;
	uint64_t x10 = 97152178606107897LLU;
	int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int64_t t1 = 3LL;

	t1 = ((x9%(x10<x11))*x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 369314906042374297LLU;
	int64_t x18 = -2632989750453398424LL;
	static int32_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	uint64_t t2 = 12839987LLU;

	t2 = ((x17%(x18<x19))*x20);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x28 = 110808342LLU;
	static volatile uint64_t t3 = 1772235831LLU;

	t3 = ((x25%(x26<x27))*x28);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	int32_t x32 = -573;

	t4 = ((x29%(x30<x31))*x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x58 = 30882LL;
	static int64_t x59 = INT64_MAX;
	static volatile int64_t t5 = 137444331984470LL;

	t5 = ((x57%(x58<x59))*x60);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x63 = 35;
	volatile int64_t x64 = -256469339931LL;
	volatile int64_t t6 = 100060874485200140LL;

	t6 = ((x61%(x62<x63))*x64);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x93 = -1;
	volatile uint16_t x94 = UINT16_MAX;
	volatile uint32_t x95 = 1708445944U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t7 = 454348;

	t7 = ((x93%(x94<x95))*x96);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x101 = 30756040915570LLU;
	int32_t x102 = INT32_MIN;
	volatile int8_t x103 = INT8_MAX;
	int16_t x104 = 46;
	static volatile uint64_t t8 = 2LLU;

	t8 = ((x101%(x102<x103))*x104);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x105 = -1;
	int32_t x106 = -501996506;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;

	t9 = ((x105%(x106<x107))*x108);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x109 = 1879U;
	uint32_t x110 = 2485333U;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t10 = 13933;

	t10 = ((x109%(x110<x111))*x112);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x121 = 113304199U;
	int64_t x122 = -1LL;
	volatile uint32_t x123 = 623792819U;
	volatile int64_t x124 = INT64_MIN;

	t11 = ((x121%(x122<x123))*x124);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x137 = 57U;
	int8_t x138 = -1;
	uint32_t x140 = 17055044U;

	t12 = ((x137%(x138<x139))*x140);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x142 = 0U;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -1;
	int64_t t13 = -426681555LL;

	t13 = ((x141%(x142<x143))*x144);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x150 = INT16_MIN;
	static uint16_t x151 = 69U;
	static volatile int8_t x152 = INT8_MIN;

	t14 = ((x149%(x150<x151))*x152);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x157 = 49490454LL;
	int8_t x158 = INT8_MAX;
	uint64_t x159 = 11765LLU;
	uint32_t x160 = 9U;
	volatile int64_t t15 = 122324843LL;

	t15 = ((x157%(x158<x159))*x160);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x166 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	static uint32_t x168 = 115U;
	volatile uint64_t t16 = 30919349676423LLU;

	t16 = ((x165%(x166<x167))*x168);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x173 = 16364375U;
	uint64_t x175 = 954LLU;

	t17 = ((x173%(x174<x175))*x176);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x178 = 3U;
	uint16_t x179 = 656U;
	static volatile int32_t x180 = -1;
	int64_t t18 = 742111603LL;

	t18 = ((x177%(x178<x179))*x180);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	int32_t t19 = 6101075;

	t19 = ((x181%(x182<x183))*x184);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x190 = 364262U;
	int32_t x191 = 162221429;

	t20 = ((x189%(x190<x191))*x192);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x201 = INT16_MIN;
	int32_t x204 = INT32_MAX;
	volatile int32_t t21 = 12250;

	t21 = ((x201%(x202<x203))*x204);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x215 = UINT16_MAX;
	volatile uint32_t t22 = 0U;

	t22 = ((x213%(x214<x215))*x216);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x221 = -2LL;
	int64_t t23 = -7346549206271002LL;

	t23 = ((x221%(x222<x223))*x224);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x234 = INT8_MAX;
	static volatile int16_t x236 = INT16_MIN;

	t24 = ((x233%(x234<x235))*x236);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x245 = 923569U;
	volatile int8_t x246 = -1;
	static uint16_t x247 = 35U;

	t25 = ((x245%(x246<x247))*x248);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x249 = 93U;
	static int16_t x251 = INT16_MAX;
	static int32_t x252 = INT32_MIN;
	int32_t t26 = -26275;

	t26 = ((x249%(x250<x251))*x252);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x257 = 1066501804;
	static uint8_t x258 = 6U;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t27 = 3775617;

	t27 = ((x257%(x258<x259))*x260);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x261 = 905U;
	volatile uint32_t x263 = 10374578U;
	volatile uint8_t x264 = UINT8_MAX;
	static int32_t t28 = 9;

	t28 = ((x261%(x262<x263))*x264);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x265 = INT32_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t29 = 1;

	t29 = ((x265%(x266<x267))*x268);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x269 = 724U;
	int64_t x270 = INT64_MIN;
	static int16_t x271 = 9364;

	t30 = ((x269%(x270<x271))*x272);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x273 = INT32_MIN;
	static int8_t x274 = INT8_MIN;
	int16_t x275 = -14;
	uint8_t x276 = 28U;
	static int32_t t31 = -1202742;

	t31 = ((x273%(x274<x275))*x276);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x278 = -1;
	int64_t x280 = INT64_MIN;

	t32 = ((x277%(x278<x279))*x280);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = 66064351U;

	t33 = ((x285%(x286<x287))*x288);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	static volatile int8_t x295 = INT8_MIN;
	int16_t x296 = 9653;
	volatile int32_t t34 = 12346951;

	t34 = ((x293%(x294<x295))*x296);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x298 = INT8_MIN;
	volatile uint64_t x299 = UINT64_MAX;
	int8_t x300 = -23;
	int32_t t35 = -1575;

	t35 = ((x297%(x298<x299))*x300);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x319 = 3LL;
	volatile uint64_t x320 = 21562482709LLU;
	volatile uint64_t t36 = 409381LLU;

	t36 = ((x317%(x318<x319))*x320);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	volatile uint64_t x344 = 15694301LLU;
	uint64_t t37 = 178193611147495883LLU;

	t37 = ((x341%(x342<x343))*x344);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MAX;
	uint64_t x348 = 26353356296694057LLU;

	t38 = ((x345%(x346<x347))*x348);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	int32_t t39 = 45041819;

	t39 = ((x353%(x354<x355))*x356);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x370 = 2U;
	volatile int8_t x372 = INT8_MAX;
	static int64_t t40 = 2151058415941542535LL;

	t40 = ((x369%(x370<x371))*x372);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x381 = 9539U;
	static volatile int16_t x383 = INT16_MAX;
	int16_t x384 = 2;
	volatile int32_t t41 = 125755076;

	t41 = ((x381%(x382<x383))*x384);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x385 = 1U;
	static uint32_t x387 = 10085667U;
	volatile uint16_t x388 = 2U;
	int32_t t42 = -5;

	t42 = ((x385%(x386<x387))*x388);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t43 = 2929LLU;

	t43 = ((x421%(x422<x423))*x424);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x430 = UINT16_MAX;
	int64_t x431 = 5422311078LL;
	static int64_t x432 = INT64_MIN;

	t44 = ((x429%(x430<x431))*x432);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x437 = UINT16_MAX;
	int16_t x438 = 0;
	int16_t x439 = INT16_MAX;
	int16_t x440 = 188;

	t45 = ((x437%(x438<x439))*x440);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x458 = -1LL;
	uint16_t x459 = UINT16_MAX;
	static uint64_t x460 = 6073728405605LLU;
	uint64_t t46 = 998317LLU;

	t46 = ((x457%(x458<x459))*x460);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x461 = -14114LL;
	int32_t x463 = -1;
	uint64_t x464 = 6807871672241889842LLU;
	static uint64_t t47 = 12LLU;

	t47 = ((x461%(x462<x463))*x464);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x477 = -1LL;
	int64_t x478 = INT64_MIN;
	volatile int32_t x479 = INT32_MIN;
	static volatile int64_t x480 = -1627029745LL;
	volatile int64_t t48 = -991356425123254LL;

	t48 = ((x477%(x478<x479))*x480);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x485 = UINT8_MAX;
	int16_t x486 = 69;
	volatile int64_t x487 = 956LL;
	int8_t x488 = -1;
	int32_t t49 = 2;

	t49 = ((x485%(x486<x487))*x488);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x489 = 1602949854U;
	int32_t x490 = -2;
	int8_t x491 = -1;
	int64_t t50 = 119LL;

	t50 = ((x489%(x490<x491))*x492);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x493 = UINT16_MAX;
	volatile int16_t x494 = INT16_MIN;
	int16_t x495 = -5325;
	int32_t t51 = -1233217;

	t51 = ((x493%(x494<x495))*x496);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x505 = -1;
	int8_t x506 = INT8_MIN;
	uint16_t x507 = 8804U;
	int64_t x508 = 3295LL;
	int64_t t52 = 280603193521348LL;

	t52 = ((x505%(x506<x507))*x508);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x521 = 28;
	static volatile int16_t x522 = -884;
	volatile uint8_t x523 = 12U;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t53 = 2343885LLU;

	t53 = ((x521%(x522<x523))*x524);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x525 = 2077U;
	int64_t x526 = INT64_MIN;
	volatile int32_t x527 = 1456;
	int32_t x528 = INT32_MIN;
	volatile int32_t t54 = -623971;

	t54 = ((x525%(x526<x527))*x528);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x529 = 8U;
	int64_t x530 = INT64_MIN;
	volatile int16_t x531 = -1;
	static volatile uint64_t x532 = 8181480824200LLU;
	uint64_t t55 = 8794605679637536730LLU;

	t55 = ((x529%(x530<x531))*x532);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x533 = -175;
	int16_t x534 = -5138;
	int64_t x535 = 15LL;
	int64_t x536 = -434504745660321973LL;

	t56 = ((x533%(x534<x535))*x536);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x541 = 1LL;
	uint16_t x542 = UINT16_MAX;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = INT32_MIN;
	static int64_t t57 = -135157980087689LL;

	t57 = ((x541%(x542<x543))*x544);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x554 = INT16_MIN;
	int16_t x555 = 4385;
	int64_t x556 = INT64_MIN;
	int64_t t58 = -2194347LL;

	t58 = ((x553%(x554<x555))*x556);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x561 = 9U;
	volatile uint8_t x562 = UINT8_MAX;
	uint16_t x563 = 959U;
	int16_t x564 = INT16_MAX;
	volatile int32_t t59 = -1126;

	t59 = ((x561%(x562<x563))*x564);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x578 = 129324LLU;
	uint32_t x579 = UINT32_MAX;
	volatile int64_t x580 = 293LL;
	int64_t t60 = -124603LL;

	t60 = ((x577%(x578<x579))*x580);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x589 = UINT64_MAX;
	static uint32_t x590 = 366U;
	volatile int64_t x591 = 65561268375081135LL;
	volatile uint64_t t61 = 34114209866LLU;

	t61 = ((x589%(x590<x591))*x592);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x593 = INT32_MIN;
	int64_t x594 = 2LL;
	uint32_t x595 = 412403U;
	static uint16_t x596 = 0U;
	volatile int32_t t62 = -233;

	t62 = ((x593%(x594<x595))*x596);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MAX;
	static int64_t x619 = 5078250787057LL;
	static int32_t t63 = -10201695;

	t63 = ((x617%(x618<x619))*x620);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x621 = UINT16_MAX;
	int16_t x623 = -1;
	int64_t x624 = 8194491LL;
	volatile int64_t t64 = -9298588LL;

	t64 = ((x621%(x622<x623))*x624);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x629 = 1;
	uint8_t x630 = 12U;
	uint32_t x631 = 109509U;
	int32_t x632 = INT32_MAX;
	volatile int32_t t65 = 1431806;

	t65 = ((x629%(x630<x631))*x632);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x637 = INT8_MIN;
	int64_t x638 = -129865870248LL;
	int32_t x639 = INT32_MAX;
	static volatile int16_t x640 = INT16_MIN;
	int32_t t66 = -1;

	t66 = ((x637%(x638<x639))*x640);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x645 = INT32_MAX;
	uint16_t x646 = 6553U;
	uint64_t x647 = 1060671LLU;
	int64_t t67 = 2844431130LL;

	t67 = ((x645%(x646<x647))*x648);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x649 = -1;
	uint16_t x650 = 414U;
	static uint32_t x651 = UINT32_MAX;
	int64_t t68 = -1846458924846954LL;

	t68 = ((x649%(x650<x651))*x652);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x673 = 12229U;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = INT16_MIN;

	t69 = ((x673%(x674<x675))*x676);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x685 = UINT64_MAX;
	static int64_t x687 = 442659356009923LL;
	uint32_t x688 = 1U;

	t70 = ((x685%(x686<x687))*x688);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x689 = INT32_MAX;
	volatile int16_t x690 = -199;
	int8_t x691 = INT8_MIN;
	int16_t x692 = INT16_MAX;
	int32_t t71 = 60494;

	t71 = ((x689%(x690<x691))*x692);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x693 = INT16_MIN;
	volatile uint32_t x694 = 2U;
	int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MAX;
	volatile int32_t t72 = 268;

	t72 = ((x693%(x694<x695))*x696);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x697 = INT64_MIN;
	volatile int64_t x698 = -1LL;
	uint8_t x699 = UINT8_MAX;
	int32_t x700 = -101397696;
	int64_t t73 = 0LL;

	t73 = ((x697%(x698<x699))*x700);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x706 = 7675739U;
	int16_t x708 = -99;
	volatile int32_t t74 = 3201;

	t74 = ((x705%(x706<x707))*x708);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x713 = INT8_MIN;
	volatile int16_t x714 = -336;
	int32_t x715 = INT32_MAX;
	int32_t x716 = -1;
	int32_t t75 = -302663;

	t75 = ((x713%(x714<x715))*x716);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MIN;
	uint8_t x723 = 1U;
	int8_t x724 = INT8_MIN;
	static volatile int32_t t76 = 3444;

	t76 = ((x721%(x722<x723))*x724);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x725 = 0U;
	int32_t x726 = INT32_MIN;
	uint16_t x727 = 1U;
	static volatile uint8_t x728 = 31U;
	volatile int32_t t77 = -3;

	t77 = ((x725%(x726<x727))*x728);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x738 = 697577LLU;
	uint64_t x739 = UINT64_MAX;
	uint32_t t78 = 24U;

	t78 = ((x737%(x738<x739))*x740);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x741 = 24U;
	volatile int8_t x742 = INT8_MIN;
	static volatile int64_t x743 = INT64_MAX;
	int64_t x744 = 58469756934LL;
	volatile int64_t t79 = -573891LL;

	t79 = ((x741%(x742<x743))*x744);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x745 = 40;
	uint32_t x746 = 29U;
	static int8_t x747 = INT8_MIN;
	int64_t x748 = INT64_MIN;
	int64_t t80 = -537LL;

	t80 = ((x745%(x746<x747))*x748);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x749 = -1LL;
	static volatile uint64_t x750 = 3241834958215LLU;
	int8_t x751 = INT8_MIN;
	int16_t x752 = -21;

	t81 = ((x749%(x750<x751))*x752);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x757 = 7827402U;
	int32_t x758 = INT32_MIN;
	static volatile int8_t x759 = INT8_MAX;
	uint8_t x760 = 0U;

	t82 = ((x757%(x758<x759))*x760);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x765 = -1LL;
	uint64_t x766 = 7135485637739895092LLU;
	volatile int8_t x768 = INT8_MIN;
	volatile int64_t t83 = 0LL;

	t83 = ((x765%(x766<x767))*x768);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x769 = 14772873711644LLU;
	static volatile int32_t x770 = INT32_MIN;
	volatile int32_t x772 = INT32_MIN;
	volatile uint64_t t84 = 166085LLU;

	t84 = ((x769%(x770<x771))*x772);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x777 = UINT32_MAX;
	int32_t x778 = INT32_MIN;
	volatile int16_t x779 = -1;
	static uint8_t x780 = UINT8_MAX;

	t85 = ((x777%(x778<x779))*x780);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x781 = 11U;
	uint64_t x783 = 1580796291851870340LLU;
	static volatile int32_t x784 = -61936;
	static volatile uint32_t t86 = 36U;

	t86 = ((x781%(x782<x783))*x784);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x785 = 1124764081503LL;
	static uint32_t x786 = 30740872U;
	uint64_t x787 = 281946870LLU;

	t87 = ((x785%(x786<x787))*x788);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x789 = -1;
	int32_t x790 = -1652;
	int32_t t88 = 1897;

	t88 = ((x789%(x790<x791))*x792);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x813 = -27652997;
	int16_t x815 = 7771;
	uint8_t x816 = 48U;

	t89 = ((x813%(x814<x815))*x816);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x829 = 6596LLU;
	volatile uint32_t x830 = UINT32_MAX;
	uint64_t x831 = 8340753373273900044LLU;
	static uint32_t x832 = 66762858U;
	volatile uint64_t t90 = 514179321974LLU;

	t90 = ((x829%(x830<x831))*x832);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x833 = 2197691978279310LLU;
	static int64_t x834 = INT64_MIN;
	uint8_t x835 = UINT8_MAX;
	int64_t x836 = INT64_MIN;
	uint64_t t91 = 23387332179947441LLU;

	t91 = ((x833%(x834<x835))*x836);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x846 = 17U;
	int64_t x847 = INT64_MAX;
	volatile uint64_t t92 = 43LLU;

	t92 = ((x845%(x846<x847))*x848);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x849 = UINT16_MAX;
	int16_t x850 = 4043;
	int32_t x851 = INT32_MAX;
	int32_t t93 = -1598;

	t93 = ((x849%(x850<x851))*x852);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x857 = 36391180;
	int32_t x858 = INT32_MIN;
	static uint32_t x859 = UINT32_MAX;
	static int64_t x860 = INT64_MAX;
	int64_t t94 = -938822701LL;

	t94 = ((x857%(x858<x859))*x860);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x862 = INT16_MIN;
	int16_t x864 = INT16_MIN;

	t95 = ((x861%(x862<x863))*x864);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x865 = -1;
	int32_t x866 = INT32_MIN;
	uint16_t x867 = 29U;
	static volatile int64_t t96 = -178LL;

	t96 = ((x865%(x866<x867))*x868);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x893 = -1;
	static uint32_t x894 = 7626306U;
	volatile int32_t x895 = -12648;
	volatile int32_t t97 = 62326;

	t97 = ((x893%(x894<x895))*x896);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x909 = INT64_MIN;
	uint16_t x910 = 2740U;
	volatile uint32_t x911 = UINT32_MAX;
	int8_t x912 = -2;
	volatile int64_t t98 = 2780297376LL;

	t98 = ((x909%(x910<x911))*x912);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x913 = INT32_MIN;
	volatile uint32_t x914 = 232925148U;
	int64_t x915 = INT64_MAX;
	volatile int32_t t99 = 60887471;

	t99 = ((x913%(x914<x915))*x916);

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

