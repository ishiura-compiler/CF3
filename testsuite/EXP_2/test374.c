#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x15 = INT8_MAX;
uint32_t x29 = 23U;
int32_t x32 = INT32_MAX;
uint16_t x47 = 11U;
volatile int32_t t6 = -22168801;
int64_t x52 = 30502LL;
uint8_t x57 = 68U;
static volatile int8_t x63 = INT8_MIN;
static int32_t x64 = -33778377;
volatile int32_t t10 = 6;
volatile int32_t t11 = 4852735;
static volatile int32_t t12 = -73947;
volatile int32_t x112 = INT32_MAX;
static int8_t x116 = -1;
int32_t x121 = 277;
volatile int16_t x125 = INT16_MIN;
uint32_t x126 = 6U;
volatile int32_t x136 = -1;
static volatile int16_t x139 = INT16_MIN;
int32_t t24 = -318496475;
uint16_t x143 = 188U;
static int16_t x144 = -1;
int8_t x146 = INT8_MAX;
int32_t t26 = -14992348;
volatile uint16_t x155 = UINT16_MAX;
uint32_t x156 = 16687149U;
static volatile int16_t x162 = INT16_MIN;
uint32_t x166 = 123657U;
int32_t t30 = 4395;
int8_t x198 = INT8_MAX;
int16_t x210 = -2139;
static int16_t x211 = -53;
int16_t x219 = -1;
volatile int32_t t38 = 61502276;
uint8_t x249 = 13U;
static int32_t t39 = 1;
int32_t t40 = 6956823;
int16_t x257 = INT16_MIN;
int8_t x259 = INT8_MIN;
volatile int32_t t42 = 31;
int16_t x302 = -1;
int32_t x306 = -11465544;
int8_t x309 = INT8_MIN;
int64_t x317 = -1LL;
uint8_t x319 = 0U;
volatile int8_t x337 = -46;
uint64_t x343 = 1108213085370166543LLU;
volatile int16_t x344 = -357;
volatile int64_t x350 = -5375009597333157LL;
int64_t x352 = INT64_MIN;
int32_t t53 = 5512;
int32_t t54 = 0;
volatile uint64_t x357 = 73455449LLU;
static int64_t x364 = INT64_MAX;
int16_t x386 = 2;
volatile uint16_t x392 = UINT16_MAX;
volatile int32_t t60 = -109991620;
int8_t x400 = INT8_MIN;
uint64_t x409 = UINT64_MAX;
volatile uint16_t x419 = 38U;
volatile int32_t t65 = 10;
int16_t x430 = INT16_MAX;
static volatile uint32_t x431 = UINT32_MAX;
volatile uint32_t x446 = UINT32_MAX;
volatile int8_t x458 = INT8_MAX;
int16_t x460 = INT16_MAX;
int64_t x472 = -1LL;
uint64_t x473 = 4371966498039600752LLU;
static volatile uint8_t x479 = 95U;
volatile int32_t t75 = 32751;
int64_t x504 = -3536970LL;
volatile uint64_t x506 = 6551879486421875LLU;
volatile int8_t x521 = -1;
int8_t x544 = INT8_MIN;
volatile int32_t t87 = 13098634;
int8_t x561 = 0;
int32_t t88 = -48518647;
volatile int32_t t90 = -1070655;
int8_t x593 = INT8_MIN;
uint16_t x595 = 171U;
int32_t t94 = -150015024;
uint8_t x607 = 32U;
static int16_t x619 = 0;
static int16_t x621 = -198;
static int32_t t99 = -70514;


void f0(void) {
	uint64_t x1 = 460807LLU;
	uint32_t x2 = 12U;
	uint16_t x3 = 3U;
	static uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = -29816258;

	t0 = ((x1*(x2*x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 7;
	static int16_t x6 = -1;
	uint16_t x7 = 1211U;
	int8_t x8 = -1;
	int32_t t1 = -111275;

	t1 = ((x5*(x6*x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = -1;
	volatile int8_t x14 = INT8_MIN;
	uint8_t x16 = 0U;
	static int32_t t2 = 16286;

	t2 = ((x13*(x14*x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MAX;
	volatile uint32_t x22 = 131999U;
	volatile uint64_t x23 = 5006055161748120172LLU;
	int64_t x24 = 2453606LL;
	int32_t t3 = 30655;

	t3 = ((x21*(x22*x23))<=x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x30 = INT32_MAX;
	static uint8_t x31 = 0U;
	int32_t t4 = 0;

	t4 = ((x29*(x30*x31))<=x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x41 = UINT64_MAX;
	uint32_t x42 = 1U;
	static volatile int64_t x43 = -51490119315LL;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t5 = 90556863;

	t5 = ((x41*(x42*x43))<=x44);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x45 = -2;
	static int32_t x46 = -1;
	int64_t x48 = INT64_MAX;

	t6 = ((x45*(x46*x47))<=x48);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x49 = INT16_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	static uint8_t x51 = 1U;
	volatile int32_t t7 = 19394;

	t7 = ((x49*(x50*x51))<=x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = 375289807U;
	volatile int32_t x55 = INT32_MAX;
	int16_t x56 = -1;
	int32_t t8 = -2850;

	t8 = ((x53*(x54*x55))<=x56);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x58 = -7;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t x60 = 12;
	int32_t t9 = -315772;

	t9 = ((x57*(x58*x59))<=x60);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = -10;
	int16_t x62 = INT16_MIN;

	t10 = ((x61*(x62*x63))<=x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = 4;
	uint64_t x74 = 261769LLU;
	int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;

	t11 = ((x73*(x74*x75))<=x76);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x78 = 0U;
	int16_t x79 = -1;
	int8_t x80 = 0;

	t12 = ((x77*(x78*x79))<=x80);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = -1;
	static uint64_t x83 = UINT64_MAX;
	uint8_t x84 = UINT8_MAX;
	static int32_t t13 = 368469004;

	t13 = ((x81*(x82*x83))<=x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	static uint64_t x87 = 33LLU;
	int32_t x88 = INT32_MIN;
	volatile int32_t t14 = 167;

	t14 = ((x85*(x86*x87))<=x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x89 = 24U;
	int8_t x90 = -1;
	int64_t x91 = 464784710LL;
	volatile int32_t x92 = -1;
	volatile int32_t t15 = -5212074;

	t15 = ((x89*(x90*x91))<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x93 = UINT8_MAX;
	uint8_t x94 = 28U;
	uint64_t x95 = 20445173020LLU;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t16 = -7700;

	t16 = ((x93*(x94*x95))<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x97 = -11275;
	uint32_t x98 = UINT32_MAX;
	static uint32_t x99 = UINT32_MAX;
	int64_t x100 = -1034101715025LL;
	volatile int32_t t17 = 43437;

	t17 = ((x97*(x98*x99))<=x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x101 = 6479LLU;
	volatile int64_t x102 = -417879621LL;
	uint32_t x103 = UINT32_MAX;
	volatile uint16_t x104 = UINT16_MAX;
	static int32_t t18 = 107;

	t18 = ((x101*(x102*x103))<=x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x109 = INT16_MIN;
	static int64_t x110 = 382LL;
	int16_t x111 = -1;
	int32_t t19 = 14;

	t19 = ((x109*(x110*x111))<=x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int8_t x114 = -1;
	volatile int16_t x115 = -1;
	volatile int32_t t20 = -171767316;

	t20 = ((x113*(x114*x115))<=x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x122 = 74U;
	static uint64_t x123 = UINT64_MAX;
	volatile uint16_t x124 = 5561U;
	int32_t t21 = 876069;

	t21 = ((x121*(x122*x123))<=x124);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x127 = -1;
	int32_t x128 = -1;
	volatile int32_t t22 = -25453016;

	t22 = ((x125*(x126*x127))<=x128);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x133 = 4939276LLU;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = -1;
	int32_t t23 = 2301;

	t23 = ((x133*(x134*x135))<=x136);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = -1;
	static volatile int16_t x138 = INT16_MAX;
	int64_t x140 = 100052040757LL;

	t24 = ((x137*(x138*x139))<=x140);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x141 = 1245U;
	int8_t x142 = INT8_MIN;
	static int32_t t25 = 14;

	t25 = ((x141*(x142*x143))<=x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = 282;
	uint8_t x147 = 0U;
	static volatile uint8_t x148 = UINT8_MAX;

	t26 = ((x145*(x146*x147))<=x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -1LL;
	static uint64_t x154 = 32LLU;
	int32_t t27 = -1;

	t27 = ((x153*(x154*x155))<=x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x157 = 68U;
	static volatile int16_t x158 = -1;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = -120723099;
	static volatile int32_t t28 = 312965;

	t28 = ((x157*(x158*x159))<=x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = INT8_MAX;
	int64_t x163 = -1LL;
	static volatile int8_t x164 = -31;
	volatile int32_t t29 = -3364616;

	t29 = ((x161*(x162*x163))<=x164);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	volatile int32_t x167 = INT32_MIN;
	volatile int64_t x168 = -2522139LL;

	t30 = ((x165*(x166*x167))<=x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -1;
	volatile int64_t x170 = INT64_MIN;
	uint64_t x171 = 99040775304359LLU;
	uint8_t x172 = 29U;
	int32_t t31 = 3542;

	t31 = ((x169*(x170*x171))<=x172);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x177 = UINT32_MAX;
	int32_t x178 = 7;
	int16_t x179 = INT16_MAX;
	volatile int64_t x180 = 5789543614788LL;
	static volatile int32_t t32 = -500;

	t32 = ((x177*(x178*x179))<=x180);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = -1;
	static uint64_t x186 = UINT64_MAX;
	static volatile uint16_t x187 = 23U;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t33 = 11769;

	t33 = ((x185*(x186*x187))<=x188);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = INT8_MIN;
	static int32_t x194 = -1;
	volatile int8_t x195 = -1;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int32_t t34 = 2279998;

	t34 = ((x193*(x194*x195))<=x196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = -1;
	volatile int8_t x199 = 2;
	static int8_t x200 = INT8_MIN;
	static volatile int32_t t35 = 8214112;

	t35 = ((x197*(x198*x199))<=x200);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -1;
	int8_t x212 = INT8_MIN;
	volatile int32_t t36 = -41;

	t36 = ((x209*(x210*x211))<=x212);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x217 = 182U;
	static int16_t x218 = -1;
	int16_t x220 = 12737;
	int32_t t37 = 472317;

	t37 = ((x217*(x218*x219))<=x220);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x241 = -1;
	static int16_t x242 = -1;
	volatile int64_t x243 = 31946664202LL;
	int16_t x244 = -1578;

	t38 = ((x241*(x242*x243))<=x244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x250 = INT8_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;

	t39 = ((x249*(x250*x251))<=x252);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x253 = 0U;
	volatile int64_t x254 = INT64_MIN;
	uint64_t x255 = 275136503LLU;
	uint32_t x256 = 5848255U;

	t40 = ((x253*(x254*x255))<=x256);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x258 = -4837LL;
	int8_t x260 = -1;
	static volatile int32_t t41 = 223481440;

	t41 = ((x257*(x258*x259))<=x260);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x261 = -1;
	int8_t x262 = -1;
	uint64_t x263 = 63165027LLU;
	int8_t x264 = 5;

	t42 = ((x261*(x262*x263))<=x264);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x265 = INT16_MAX;
	static int32_t x266 = 2575875;
	volatile uint32_t x267 = 79U;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t43 = -6238223;

	t43 = ((x265*(x266*x267))<=x268);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	static uint32_t x271 = 29773U;
	volatile int32_t x272 = 27804218;
	volatile int32_t t44 = 14;

	t44 = ((x269*(x270*x271))<=x272);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x273 = -4700095;
	volatile int32_t x274 = 0;
	int64_t x275 = INT64_MIN;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t45 = 29678614;

	t45 = ((x273*(x274*x275))<=x276);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x281 = 3604269LLU;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = 99496163LL;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t46 = -1;

	t46 = ((x281*(x282*x283))<=x284);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x301 = 6U;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 0U;
	volatile int32_t t47 = -7;

	t47 = ((x301*(x302*x303))<=x304);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x305 = INT32_MIN;
	static volatile uint16_t x307 = 0U;
	int32_t x308 = INT32_MAX;
	static volatile int32_t t48 = -1;

	t48 = ((x305*(x306*x307))<=x308);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x310 = 264;
	uint64_t x311 = 393270529856607151LLU;
	static uint64_t x312 = 7477258LLU;
	int32_t t49 = 1323542;

	t49 = ((x309*(x310*x311))<=x312);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x318 = 107U;
	volatile int32_t x320 = INT32_MAX;
	int32_t t50 = 386838953;

	t50 = ((x317*(x318*x319))<=x320);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x338 = 85U;
	uint64_t x339 = 349397613279LLU;
	int16_t x340 = INT16_MIN;
	volatile int32_t t51 = 7014630;

	t51 = ((x337*(x338*x339))<=x340);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x341 = 7U;
	int8_t x342 = -22;
	volatile int32_t t52 = 8282964;

	t52 = ((x341*(x342*x343))<=x344);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x349 = 0U;
	int8_t x351 = INT8_MAX;

	t53 = ((x349*(x350*x351))<=x352);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x353 = 0;
	int8_t x354 = 0;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -882;

	t54 = ((x353*(x354*x355))<=x356);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x358 = -1;
	uint16_t x359 = 8U;
	uint8_t x360 = 6U;
	static volatile int32_t t55 = -1;

	t55 = ((x357*(x358*x359))<=x360);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x361 = -352LL;
	uint8_t x362 = 59U;
	int8_t x363 = -1;
	volatile int32_t t56 = -1715;

	t56 = ((x361*(x362*x363))<=x364);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x365 = INT16_MAX;
	int32_t x366 = -65187;
	volatile int8_t x367 = 0;
	volatile int8_t x368 = INT8_MIN;
	int32_t t57 = 2461;

	t57 = ((x365*(x366*x367))<=x368);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x377 = -1;
	volatile int32_t x378 = 714;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	volatile int32_t t58 = -1581;

	t58 = ((x377*(x378*x379))<=x380);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x385 = 1U;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 528845U;
	volatile int32_t t59 = -77237;

	t59 = ((x385*(x386*x387))<=x388);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x390 = -260329860472LL;
	uint64_t x391 = 197860847242202LLU;

	t60 = ((x389*(x390*x391))<=x392);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	int32_t x395 = -1;
	uint8_t x396 = 1U;
	volatile int32_t t61 = 7997699;

	t61 = ((x393*(x394*x395))<=x396);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	uint32_t x399 = 114161U;
	int32_t t62 = 198;

	t62 = ((x397*(x398*x399))<=x400);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MAX;
	int64_t x403 = -1LL;
	int16_t x404 = 7;
	static volatile int32_t t63 = -24351;

	t63 = ((x401*(x402*x403))<=x404);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x410 = -1LL;
	static int8_t x411 = 1;
	int64_t x412 = INT64_MIN;
	volatile int32_t t64 = -131331043;

	t64 = ((x409*(x410*x411))<=x412);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x417 = -6358LL;
	int8_t x418 = 0;
	uint32_t x420 = 3722U;

	t65 = ((x417*(x418*x419))<=x420);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x425 = UINT8_MAX;
	int8_t x426 = -2;
	int16_t x427 = 4319;
	volatile uint8_t x428 = 5U;
	int32_t t66 = -122552703;

	t66 = ((x425*(x426*x427))<=x428);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x429 = 3966LL;
	uint32_t x432 = UINT32_MAX;
	static volatile int32_t t67 = 1005048886;

	t67 = ((x429*(x430*x431))<=x432);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x437 = UINT8_MAX;
	int64_t x438 = INT64_MAX;
	uint64_t x439 = 2572LLU;
	int64_t x440 = -1LL;
	int32_t t68 = 133548414;

	t68 = ((x437*(x438*x439))<=x440);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x445 = INT8_MAX;
	int32_t x447 = 562750;
	int64_t x448 = INT64_MAX;
	int32_t t69 = -109799250;

	t69 = ((x445*(x446*x447))<=x448);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x449 = 9;
	static int16_t x450 = INT16_MAX;
	volatile int64_t x451 = 13337414LL;
	int16_t x452 = -1;
	volatile int32_t t70 = -211485;

	t70 = ((x449*(x450*x451))<=x452);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x457 = INT16_MIN;
	volatile int32_t x459 = -1;
	int32_t t71 = 8559235;

	t71 = ((x457*(x458*x459))<=x460);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x469 = UINT64_MAX;
	volatile uint8_t x470 = UINT8_MAX;
	int16_t x471 = 8042;
	int32_t t72 = 90176562;

	t72 = ((x469*(x470*x471))<=x472);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x474 = 28U;
	uint32_t x475 = UINT32_MAX;
	volatile int64_t x476 = -302968742LL;
	int32_t t73 = 1206;

	t73 = ((x473*(x474*x475))<=x476);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x477 = INT8_MAX;
	static uint8_t x478 = 4U;
	uint16_t x480 = 406U;
	int32_t t74 = 6;

	t74 = ((x477*(x478*x479))<=x480);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x481 = -1;
	int64_t x482 = -1LL;
	uint8_t x483 = 15U;
	int8_t x484 = 26;

	t75 = ((x481*(x482*x483))<=x484);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x489 = 4391981LLU;
	volatile int16_t x490 = -358;
	uint16_t x491 = UINT16_MAX;
	int8_t x492 = INT8_MAX;
	int32_t t76 = -267898155;

	t76 = ((x489*(x490*x491))<=x492);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x493 = INT32_MAX;
	uint32_t x494 = 1122694U;
	static int32_t x495 = 14884884;
	uint16_t x496 = 6720U;
	volatile int32_t t77 = 490436660;

	t77 = ((x493*(x494*x495))<=x496);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x497 = 1U;
	volatile int8_t x498 = INT8_MIN;
	int64_t x499 = -1LL;
	uint64_t x500 = UINT64_MAX;
	static int32_t t78 = 4475768;

	t78 = ((x497*(x498*x499))<=x500);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x501 = 1U;
	uint32_t x502 = 216U;
	volatile uint32_t x503 = 552784U;
	int32_t t79 = -1422263;

	t79 = ((x501*(x502*x503))<=x504);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x505 = -1;
	int32_t x507 = -1;
	volatile uint16_t x508 = 7U;
	static volatile int32_t t80 = 0;

	t80 = ((x505*(x506*x507))<=x508);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x517 = 63U;
	int64_t x518 = 58355066022086LL;
	static int8_t x519 = 3;
	int64_t x520 = 2418134LL;
	volatile int32_t t81 = 618;

	t81 = ((x517*(x518*x519))<=x520);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x522 = -1;
	int64_t x523 = -1LL;
	int16_t x524 = -1;
	volatile int32_t t82 = -12953955;

	t82 = ((x521*(x522*x523))<=x524);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x533 = 0;
	int8_t x534 = -1;
	int16_t x535 = INT16_MAX;
	int32_t x536 = 1;
	volatile int32_t t83 = -196;

	t83 = ((x533*(x534*x535))<=x536);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x537 = -1;
	volatile int8_t x538 = -1;
	static volatile uint64_t x539 = 128LLU;
	volatile uint64_t x540 = 9LLU;
	int32_t t84 = -197247;

	t84 = ((x537*(x538*x539))<=x540);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x541 = INT16_MAX;
	uint8_t x542 = 8U;
	uint8_t x543 = UINT8_MAX;
	volatile int32_t t85 = 265316;

	t85 = ((x541*(x542*x543))<=x544);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x545 = INT8_MIN;
	static uint32_t x546 = 49738111U;
	uint64_t x547 = 23LLU;
	int32_t x548 = INT32_MAX;
	volatile int32_t t86 = 248284;

	t86 = ((x545*(x546*x547))<=x548);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x549 = UINT8_MAX;
	uint64_t x550 = UINT64_MAX;
	int8_t x551 = 0;
	uint32_t x552 = 7810660U;

	t87 = ((x549*(x550*x551))<=x552);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x562 = INT16_MAX;
	static int64_t x563 = -2668LL;
	int16_t x564 = INT16_MAX;

	t88 = ((x561*(x562*x563))<=x564);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x569 = INT64_MIN;
	uint64_t x570 = 399450LLU;
	int32_t x571 = 42;
	static uint64_t x572 = 195210818456373LLU;
	int32_t t89 = 138;

	t89 = ((x569*(x570*x571))<=x572);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x573 = INT16_MAX;
	int32_t x574 = INT32_MAX;
	uint64_t x575 = 43033104LLU;
	uint64_t x576 = 794395767LLU;

	t90 = ((x573*(x574*x575))<=x576);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x577 = INT64_MAX;
	int32_t x578 = -1;
	int64_t x579 = 0LL;
	int64_t x580 = 9448501LL;
	int32_t t91 = -4275706;

	t91 = ((x577*(x578*x579))<=x580);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x589 = 58;
	static uint64_t x590 = 3LLU;
	static int16_t x591 = INT16_MAX;
	uint8_t x592 = 1U;
	static volatile int32_t t92 = 6058181;

	t92 = ((x589*(x590*x591))<=x592);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x594 = -24;
	volatile int8_t x596 = INT8_MIN;
	int32_t t93 = 6004490;

	t93 = ((x593*(x594*x595))<=x596);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x597 = INT8_MIN;
	uint16_t x598 = UINT16_MAX;
	volatile uint16_t x599 = 123U;
	int16_t x600 = -1;

	t94 = ((x597*(x598*x599))<=x600);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x601 = 26769681;
	int32_t x602 = 11;
	int32_t x603 = -1;
	uint32_t x604 = 14U;
	int32_t t95 = 1;

	t95 = ((x601*(x602*x603))<=x604);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x605 = 0U;
	static int64_t x606 = -1LL;
	int16_t x608 = INT16_MAX;
	volatile int32_t t96 = -14333487;

	t96 = ((x605*(x606*x607))<=x608);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x609 = 27U;
	int8_t x610 = -1;
	int32_t x611 = -1;
	int32_t x612 = INT32_MIN;
	static int32_t t97 = 51460028;

	t97 = ((x609*(x610*x611))<=x612);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x617 = 21040LLU;
	uint32_t x618 = 82U;
	volatile int16_t x620 = INT16_MIN;
	int32_t t98 = 196;

	t98 = ((x617*(x618*x619))<=x620);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x622 = -1;
	volatile uint64_t x623 = 10167139725293469LLU;
	int32_t x624 = INT32_MAX;

	t99 = ((x621*(x622*x623))<=x624);

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

