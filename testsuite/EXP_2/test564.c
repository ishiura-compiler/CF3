#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x13 = INT64_MIN;
static volatile int8_t x36 = 15;
int8_t x51 = 1;
int64_t t5 = -58400238570LL;
int64_t t6 = 461LL;
uint16_t x73 = UINT16_MAX;
int32_t x79 = INT32_MAX;
int8_t x81 = -62;
uint32_t x83 = 16U;
volatile int64_t x96 = -1LL;
static int32_t x116 = -1;
volatile int64_t t14 = -657LL;
static int32_t x130 = -1;
int16_t x131 = -1;
int32_t t15 = -591;
static volatile uint64_t t17 = 53451751413399LLU;
uint64_t x157 = 2188651162327708683LLU;
int16_t x160 = INT16_MAX;
uint16_t x162 = 4254U;
static volatile int32_t t19 = -14213434;
int64_t x165 = -1LL;
static int32_t x166 = INT32_MIN;
int64_t x172 = INT64_MIN;
uint32_t t22 = 10U;
uint8_t x179 = 1U;
uint32_t x186 = UINT32_MAX;
int64_t x194 = INT64_MAX;
static int64_t t25 = 577132400481870371LL;
uint64_t x213 = 427LLU;
int16_t x231 = 1;
int64_t t29 = 21255951205549LL;
int64_t x240 = INT64_MAX;
volatile int32_t x263 = -1;
uint8_t x307 = UINT8_MAX;
static uint64_t t36 = 1948157LLU;
int16_t x310 = INT16_MAX;
int16_t x328 = -1;
int64_t t38 = 2358378LL;
int32_t x339 = -1;
uint64_t t39 = 747733456695LLU;
int64_t x351 = -1LL;
uint16_t x352 = 16127U;
static int64_t x353 = INT64_MIN;
int32_t x355 = 1197111;
int8_t x366 = INT8_MIN;
uint32_t x368 = UINT32_MAX;
int32_t t44 = 5108948;
uint64_t x466 = UINT64_MAX;
volatile uint64_t t50 = 3135948606662LLU;
int8_t x474 = INT8_MIN;
int8_t x480 = INT8_MIN;
int8_t x488 = 61;
int64_t t54 = -8529636980LL;
volatile int16_t x509 = INT16_MIN;
int16_t x518 = -109;
int32_t x532 = INT32_MAX;
int32_t x536 = -3;
volatile int8_t x537 = -5;
static int64_t x559 = -1LL;
int16_t x573 = -1;
volatile int32_t t63 = 56592100;
int32_t x591 = -1;
uint16_t x598 = UINT16_MAX;
uint8_t x609 = UINT8_MAX;
int8_t x611 = INT8_MAX;
int64_t t66 = -328365LL;
int64_t x642 = -2095069084168603967LL;
int32_t x643 = INT32_MAX;
int16_t x644 = INT16_MIN;
volatile uint64_t t70 = 174427038260826LLU;
static int64_t t71 = -981612969699LL;
uint8_t x670 = 6U;
int32_t x676 = INT32_MIN;
int16_t x679 = INT16_MAX;
int32_t x681 = INT32_MAX;
static int64_t x690 = 530487518572LL;
volatile uint8_t x703 = 3U;
int64_t x725 = 30LL;
int16_t x749 = INT16_MAX;
int8_t x752 = INT8_MIN;
int8_t x777 = 24;
uint32_t x779 = 801848U;
uint16_t x794 = 21060U;
static int16_t x796 = INT16_MIN;
static int32_t t88 = -174439;
int8_t x802 = -1;
int32_t x806 = 843895076;
int32_t t90 = -3;
volatile uint32_t x809 = UINT32_MAX;
int64_t x810 = INT64_MIN;
static int64_t x815 = -16466178560073LL;
uint64_t t92 = 256190402481383LLU;
uint32_t x822 = UINT32_MAX;
int32_t x823 = -343714;
int8_t x829 = 0;
volatile uint64_t t95 = 1035132858LLU;
static uint8_t x839 = 1U;
int32_t x842 = INT32_MIN;
int64_t x843 = -1LL;
static int64_t x846 = INT64_MAX;
volatile uint8_t x847 = 30U;
static int64_t x848 = INT64_MIN;


void f0(void) {
	uint16_t x1 = 89U;
	volatile int64_t x2 = -2161848744784648036LL;
	static uint8_t x3 = 7U;
	static int32_t x4 = -1;
	int64_t t0 = -151371308467632LL;

	t0 = ((x1%(x2/x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = -1LL;
	int64_t x10 = -11986317473LL;
	uint8_t x11 = 2U;
	uint8_t x12 = 1U;
	static volatile int64_t t1 = -370LL;

	t1 = ((x9%(x10/x11))%x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x14 = INT32_MIN;
	volatile uint64_t x15 = 27194LLU;
	int32_t x16 = INT32_MAX;
	volatile uint64_t t2 = 2833192515680887795LLU;

	t2 = ((x13%(x14/x15))%x16);

	if (t2 != 1073747773LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = INT64_MIN;
	static uint64_t x34 = 87881748427238LLU;
	int64_t x35 = 7653507545158LL;
	volatile uint64_t t3 = 487LLU;

	t3 = ((x33%(x34/x35))%x36);

	if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x49 = 0U;
	int32_t x50 = INT32_MIN;
	int32_t x52 = -99;
	volatile int32_t t4 = 5871;

	t4 = ((x49%(x50/x51))%x52);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = -1LL;

	t5 = ((x53%(x54/x55))%x56);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x61 = 0;
	static volatile int32_t x62 = INT32_MIN;
	volatile int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MAX;

	t6 = ((x61%(x62/x63))%x64);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x74 = INT8_MIN;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = -170;
	int32_t t7 = 0;

	t7 = ((x73%(x74/x75))%x76);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x77 = 66U;
	int64_t x78 = -138634964063293LL;
	int64_t x80 = -163LL;
	volatile int64_t t8 = -13LL;

	t8 = ((x77%(x78/x79))%x80);

	if (t8 != 66LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x82 = -1;
	int8_t x84 = -3;
	volatile uint32_t t9 = 2264U;

	t9 = ((x81%(x82/x83))%x84);

	if (t9 != 268435409U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x93 = INT16_MAX;
	static int32_t x94 = INT32_MAX;
	int32_t x95 = -14060;
	int64_t t10 = 345807LL;

	t10 = ((x93%(x94/x95))%x96);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t11 = 165516788LL;

	t11 = ((x101%(x102/x103))%x104);

	if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = 7LLU;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MIN;
	int8_t x108 = 19;
	uint64_t t12 = 16624681692LLU;

	t12 = ((x105%(x106/x107))%x108);

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x113 = INT8_MAX;
	uint32_t x114 = 102763820U;
	uint16_t x115 = 32U;
	uint32_t t13 = 138U;

	t13 = ((x113%(x114/x115))%x116);

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = 465962735608LL;
	volatile uint32_t x119 = UINT32_MAX;
	int8_t x120 = 11;

	t14 = ((x117%(x118/x119))%x120);

	if (t14 != -9LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x129 = -100;
	int8_t x132 = INT8_MAX;

	t15 = ((x129%(x130/x131))%x132);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x145 = -57;
	static int8_t x146 = INT8_MIN;
	uint32_t x147 = 441314U;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t16 = 1072739335538427LLU;

	t16 = ((x145%(x146/x147))%x148);

	if (t16 != 2071LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	static uint64_t x155 = 2654LLU;
	volatile int32_t x156 = -40805786;

	t17 = ((x153%(x154/x155))%x156);

	if (t17 != 2437LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x158 = 244296;
	static uint8_t x159 = 1U;
	uint64_t t18 = 73015338906LLU;

	t18 = ((x157%(x158/x159))%x160);

	if (t18 != 2409LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x161 = 1043045987;
	static volatile uint8_t x163 = 6U;
	static int16_t x164 = -1;

	t19 = ((x161%(x162/x163))%x164);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x167 = INT16_MAX;
	int16_t x168 = -1;
	volatile int64_t t20 = -4585701200475587449LL;

	t20 = ((x165%(x166/x167))%x168);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x169 = 1;
	uint64_t x170 = 8323380LLU;
	static uint8_t x171 = UINT8_MAX;
	uint64_t t21 = 244073838404023LLU;

	t21 = ((x169%(x170/x171))%x172);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x174 = UINT32_MAX;
	static int32_t x175 = INT32_MIN;
	int8_t x176 = -1;

	t22 = ((x173%(x174/x175))%x176);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x177 = -1424;
	int8_t x178 = INT8_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t23 = 0LL;

	t23 = ((x177%(x178/x179))%x180);

	if (t23 != -27LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x185 = INT8_MAX;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 1;
	uint32_t t24 = 26971U;

	t24 = ((x185%(x186/x187))%x188);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x193 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	int64_t x196 = 20LL;

	t25 = ((x193%(x194/x195))%x196);

	if (t25 != -8LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x214 = 117652LLU;
	int32_t x215 = 127;
	static uint64_t x216 = 19399LLU;
	volatile uint64_t t26 = 106958135168952957LLU;

	t26 = ((x213%(x214/x215))%x216);

	if (t26 != 427LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x217 = 325738561260610169LLU;
	int32_t x218 = -1;
	volatile uint32_t x219 = 120U;
	uint32_t x220 = 15U;
	uint64_t t27 = 3393323358771943742LLU;

	t27 = ((x217%(x218/x219))%x220);

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x221 = -4554;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	volatile int8_t x224 = -3;
	uint32_t t28 = 365U;

	t28 = ((x221%(x222/x223))%x224);

	if (t28 != 126526U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x229 = -3LL;
	int64_t x230 = -1LL;
	int8_t x232 = INT8_MAX;

	t29 = ((x229%(x230/x231))%x232);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x237 = -1LL;
	static uint64_t x238 = 14LLU;
	uint8_t x239 = 2U;
	volatile uint64_t t30 = 455032LLU;

	t30 = ((x237%(x238/x239))%x240);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x241 = 33247917987074LLU;
	int32_t x242 = INT32_MIN;
	volatile int16_t x243 = -3;
	static volatile int32_t x244 = -1;
	uint64_t t31 = 419820451870270LLU;

	t31 = ((x241%(x242/x243))%x244);

	if (t31 != 576179702LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x257 = 4435698775462758642LL;
	int64_t x258 = -547LL;
	static int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	volatile int64_t t32 = 740877273198606LL;

	t32 = ((x257%(x258/x259))%x260);

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x261 = INT32_MAX;
	static int8_t x262 = -2;
	volatile uint32_t x264 = 6U;
	volatile uint32_t t33 = 39792U;

	t33 = ((x261%(x262/x263))%x264);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x269 = INT32_MIN;
	volatile int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	uint32_t t34 = 479410U;

	t34 = ((x269%(x270/x271))%x272);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x281 = 153U;
	int32_t x282 = -9224;
	volatile int16_t x283 = -1;
	static int64_t x284 = INT64_MIN;
	int64_t t35 = 16580236864106032LL;

	t35 = ((x281%(x282/x283))%x284);

	if (t35 != 153LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	uint64_t x308 = 19078272806029LLU;

	t36 = ((x305%(x306/x307))%x308);

	if (t36 != 254105723445LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x309 = -1274;
	uint8_t x311 = 6U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x309%(x310/x311))%x312);

	if (t37 != -1274) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	int32_t x327 = 14;

	t38 = ((x325%(x326/x327))%x328);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x337 = 85LLU;
	static int8_t x338 = INT8_MAX;
	static int32_t x340 = INT32_MIN;

	t39 = ((x337%(x338/x339))%x340);

	if (t39 != 85LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	volatile int64_t t40 = 4169136LL;

	t40 = ((x349%(x350/x351))%x352);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x354 = 869690126;
	volatile uint32_t x356 = 3672281U;
	static volatile int64_t t41 = -5117520672941217LL;

	t41 = ((x353%(x354/x355))%x356);

	if (t41 != -470LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x365 = 34104U;
	static uint8_t x367 = 1U;
	volatile uint32_t t42 = 652926U;

	t42 = ((x365%(x366/x367))%x368);

	if (t42 != 34104U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = -1;
	uint32_t x379 = 18U;
	int8_t x380 = INT8_MIN;
	volatile int64_t t43 = 7501473263LL;

	t43 = ((x377%(x378/x379))%x380);

	if (t43 != -8LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x389 = INT32_MIN;
	static volatile int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = UINT8_MAX;

	t44 = ((x389%(x390/x391))%x392);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	uint16_t x395 = 76U;
	int16_t x396 = -1;
	int32_t t45 = -3;

	t45 = ((x393%(x394/x395))%x396);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x433 = UINT8_MAX;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MIN;
	int8_t x436 = 6;
	volatile int32_t t46 = -2911;

	t46 = ((x433%(x434/x435))%x436);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x441 = INT32_MIN;
	volatile uint16_t x442 = UINT16_MAX;
	int8_t x443 = -4;
	uint16_t x444 = 166U;
	static int32_t t47 = -19;

	t47 = ((x441%(x442/x443))%x444);

	if (t47 != -8) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x449 = 10972U;
	uint16_t x450 = UINT16_MAX;
	int16_t x451 = INT16_MIN;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t48 = -14;

	t48 = ((x449%(x450/x451))%x452);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x461 = 27U;
	int16_t x462 = 3879;
	uint64_t x463 = 3509LLU;
	uint16_t x464 = UINT16_MAX;
	uint64_t t49 = 140961267868LLU;

	t49 = ((x461%(x462/x463))%x464);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x465 = 2261U;
	int16_t x467 = INT16_MIN;
	volatile uint64_t x468 = 98368376619736937LLU;

	t50 = ((x465%(x466/x467))%x468);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x469 = INT64_MIN;
	int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MAX;
	volatile uint16_t x472 = 10U;
	static volatile int64_t t51 = 833894918LL;

	t51 = ((x469%(x470/x471))%x472);

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x473 = 4;
	int32_t x475 = -2;
	int16_t x476 = -8466;
	int32_t t52 = -91968;

	t52 = ((x473%(x474/x475))%x476);

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x477 = 5U;
	int64_t x478 = INT64_MAX;
	uint32_t x479 = 318099851U;
	static int64_t t53 = 49LL;

	t53 = ((x477%(x478/x479))%x480);

	if (t53 != 5LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x485 = -1LL;
	int16_t x486 = -1;
	uint32_t x487 = 7942U;

	t54 = ((x485%(x486/x487))%x488);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x493 = INT64_MIN;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = UINT32_MAX;
	static int64_t x496 = INT64_MAX;
	volatile int64_t t55 = 1130LL;

	t55 = ((x493%(x494/x495))%x496);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x501 = INT64_MAX;
	int64_t x502 = INT64_MIN;
	int32_t x503 = 1;
	uint64_t x504 = 763LLU;
	volatile uint64_t t56 = 21290LLU;

	t56 = ((x501%(x502/x503))%x504);

	if (t56 != 686LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x510 = UINT32_MAX;
	int64_t x511 = -1LL;
	static int16_t x512 = INT16_MIN;
	int64_t t57 = 5771901LL;

	t57 = ((x509%(x510/x511))%x512);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x517 = INT16_MIN;
	volatile uint64_t x519 = 64365251LLU;
	int64_t x520 = INT64_MAX;
	volatile uint64_t t58 = 27731234437347972LLU;

	t58 = ((x517%(x518/x519))%x520);

	if (t58 != 52631213LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x529 = 173986938267569LL;
	int16_t x530 = INT16_MAX;
	int16_t x531 = -1;
	volatile int64_t t59 = 3419836187148059386LL;

	t59 = ((x529%(x530/x531))%x532);

	if (t59 != 7161LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x533 = INT8_MAX;
	int8_t x534 = INT8_MAX;
	int32_t x535 = -1;
	volatile int32_t t60 = 15237970;

	t60 = ((x533%(x534/x535))%x536);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x538 = UINT32_MAX;
	static int16_t x539 = -1;
	int32_t x540 = -994475;
	uint32_t t61 = 3168005U;

	t61 = ((x537%(x538/x539))%x540);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	static volatile int32_t x560 = INT32_MIN;
	uint64_t t62 = 77018911155861LLU;

	t62 = ((x557%(x558/x559))%x560);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x574 = UINT16_MAX;
	int16_t x575 = -8303;
	volatile uint8_t x576 = 2U;

	t63 = ((x573%(x574/x575))%x576);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x589 = -1LL;
	int8_t x590 = -53;
	volatile int8_t x592 = 47;
	static int64_t t64 = 29785659220426792LL;

	t64 = ((x589%(x590/x591))%x592);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x597 = INT32_MIN;
	int16_t x599 = INT16_MIN;
	int8_t x600 = INT8_MAX;
	volatile int32_t t65 = -43;

	t65 = ((x597%(x598/x599))%x600);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x610 = INT64_MIN;
	int32_t x612 = -3850638;

	t66 = ((x609%(x610/x611))%x612);

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x621 = INT8_MAX;
	int64_t x622 = -12948534588607985LL;
	int8_t x623 = INT8_MAX;
	int8_t x624 = -1;
	int64_t t67 = 4317265207742453508LL;

	t67 = ((x621%(x622/x623))%x624);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x629 = INT64_MIN;
	int32_t x630 = -345817;
	static volatile int16_t x631 = INT16_MAX;
	volatile int32_t x632 = 171038;
	volatile int64_t t68 = -63973031LL;

	t68 = ((x629%(x630/x631))%x632);

	if (t68 != -8LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x641 = 2512793498688771933LLU;
	uint64_t t69 = 3LLU;

	t69 = ((x641%(x642/x643))%x644);

	if (t69 != 2512793498688771933LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x645 = INT32_MIN;
	uint64_t x646 = UINT64_MAX;
	uint64_t x647 = 345666536001946587LLU;
	static int16_t x648 = INT16_MIN;

	t70 = ((x645%(x646/x647))%x648);

	if (t70 != 47LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x661 = INT8_MAX;
	static int32_t x662 = 26;
	int64_t x663 = -1LL;
	int16_t x664 = INT16_MAX;

	t71 = ((x661%(x662/x663))%x664);

	if (t71 != 23LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x669 = 0U;
	int8_t x671 = -1;
	volatile int32_t x672 = 10;
	volatile int32_t t72 = -1;

	t72 = ((x669%(x670/x671))%x672);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x673 = 207836653059310890LLU;
	uint16_t x674 = 24114U;
	int16_t x675 = -1;
	uint64_t t73 = 1851610974LLU;

	t73 = ((x673%(x674/x675))%x676);

	if (t73 != 207836653059310890LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x677 = -1079;
	int16_t x678 = INT16_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t74 = -1124;

	t74 = ((x677%(x678/x679))%x680);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x682 = -1;
	static int8_t x683 = -1;
	int32_t x684 = INT32_MIN;
	int32_t t75 = -18;

	t75 = ((x681%(x682/x683))%x684);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x689 = -856862;
	int32_t x691 = -1;
	static int32_t x692 = INT32_MAX;
	static volatile int64_t t76 = 234043719397631335LL;

	t76 = ((x689%(x690/x691))%x692);

	if (t76 != -856862LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x693 = 1771337481724361633LLU;
	volatile int8_t x694 = -1;
	uint32_t x695 = 12U;
	volatile uint32_t x696 = UINT32_MAX;
	uint64_t t77 = 200918520LLU;

	t77 = ((x693%(x694/x695))%x696);

	if (t77 != 209903237LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x701 = 118LLU;
	int8_t x702 = -63;
	int32_t x704 = -4;
	static uint64_t t78 = 9218834LLU;

	t78 = ((x701%(x702/x703))%x704);

	if (t78 != 118LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x705 = -1;
	int32_t x706 = INT32_MAX;
	uint8_t x707 = UINT8_MAX;
	uint16_t x708 = UINT16_MAX;
	static volatile int32_t t79 = 29946;

	t79 = ((x705%(x706/x707))%x708);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x709 = 24;
	uint64_t x710 = UINT64_MAX;
	uint16_t x711 = 44U;
	int64_t x712 = INT64_MIN;
	volatile uint64_t t80 = 48LLU;

	t80 = ((x709%(x710/x711))%x712);

	if (t80 != 24LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x726 = 29536261LLU;
	int16_t x727 = 78;
	int32_t x728 = INT32_MAX;
	uint64_t t81 = 7467006377563639656LLU;

	t81 = ((x725%(x726/x727))%x728);

	if (t81 != 30LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x729 = 40418129466LLU;
	volatile int8_t x730 = 55;
	int16_t x731 = -1;
	volatile int32_t x732 = -77;
	uint64_t t82 = 10215021727895368LLU;

	t82 = ((x729%(x730/x731))%x732);

	if (t82 != 40418129466LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x733 = INT16_MIN;
	volatile int32_t x734 = INT32_MIN;
	uint32_t x735 = 3U;
	int8_t x736 = 3;
	volatile uint32_t t83 = 2094326U;

	t83 = ((x733%(x734/x735))%x736);

	if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x750 = -3032;
	volatile uint32_t x751 = 323671214U;
	uint32_t t84 = 15U;

	t84 = ((x749%(x750/x751))%x752);

	if (t84 != 7U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x757 = 31LLU;
	static int64_t x758 = -120885LL;
	static int8_t x759 = INT8_MIN;
	int64_t x760 = 3LL;
	static volatile uint64_t t85 = 32560379777LLU;

	t85 = ((x757%(x758/x759))%x760);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x778 = UINT32_MAX;
	int16_t x780 = -1;
	uint32_t t86 = 11602U;

	t86 = ((x777%(x778/x779))%x780);

	if (t86 != 24U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x781 = INT8_MIN;
	int32_t x782 = -3;
	int16_t x783 = -1;
	static volatile int32_t x784 = INT32_MIN;
	int32_t t87 = 6123;

	t87 = ((x781%(x782/x783))%x784);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x793 = INT8_MIN;
	static int8_t x795 = -8;

	t88 = ((x793%(x794/x795))%x796);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x801 = UINT64_MAX;
	volatile int32_t x803 = -1;
	static int8_t x804 = 6;
	volatile uint64_t t89 = 17675748842845517LLU;

	t89 = ((x801%(x802/x803))%x804);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x805 = INT16_MAX;
	int32_t x807 = -3;
	static volatile int16_t x808 = INT16_MAX;

	t90 = ((x805%(x806/x807))%x808);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x811 = INT32_MIN;
	int64_t x812 = INT64_MIN;
	volatile int64_t t91 = -49LL;

	t91 = ((x809%(x810/x811))%x812);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x813 = 1261852604242402042LLU;
	int64_t x814 = INT64_MAX;
	int16_t x816 = -1;

	t92 = ((x813%(x814/x815))%x816);

	if (t92 != 1261852604242402042LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x817 = INT16_MIN;
	uint64_t x818 = UINT64_MAX;
	int8_t x819 = -5;
	int32_t x820 = 87738377;
	volatile uint64_t t93 = 24164930460685014LLU;

	t93 = ((x817%(x818/x819))%x820);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x821 = INT16_MIN;
	volatile int32_t x824 = -1686;
	volatile uint32_t t94 = 19U;

	t94 = ((x821%(x822/x823))%x824);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MAX;
	int64_t x832 = INT64_MIN;

	t95 = ((x829%(x830/x831))%x832);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x833 = UINT16_MAX;
	int16_t x834 = INT16_MAX;
	static int16_t x835 = -9902;
	int8_t x836 = INT8_MIN;
	volatile int32_t t96 = 260281;

	t96 = ((x833%(x834/x835))%x836);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x837 = UINT16_MAX;
	int16_t x838 = INT16_MIN;
	int64_t x840 = -2993643187LL;
	static volatile int64_t t97 = 1LL;

	t97 = ((x837%(x838/x839))%x840);

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x841 = INT64_MAX;
	uint8_t x844 = 12U;
	int64_t t98 = -52381LL;

	t98 = ((x841%(x842/x843))%x844);

	if (t98 != 7LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x845 = UINT32_MAX;
	int64_t t99 = 357LL;

	t99 = ((x845%(x846/x847))%x848);

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

