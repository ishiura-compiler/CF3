#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MAX;
int16_t x8 = INT16_MAX;
int8_t x19 = 1;
static volatile int32_t t3 = -28453;
volatile int32_t x21 = -1;
int32_t t6 = -253958;
uint8_t x44 = 6U;
int32_t t8 = 9911;
int8_t x61 = -16;
int32_t x63 = 28014881;
int64_t x64 = 1LL;
uint16_t x65 = UINT16_MAX;
uint16_t x67 = UINT16_MAX;
volatile uint8_t x83 = UINT8_MAX;
volatile uint8_t x93 = UINT8_MAX;
uint8_t x96 = 2U;
int8_t x103 = INT8_MAX;
int8_t x105 = 1;
int64_t x107 = 304383727LL;
int32_t t19 = -25;
int8_t x112 = INT8_MIN;
static int32_t x114 = 25;
uint32_t t22 = 1U;
int32_t t24 = 20;
static int8_t x150 = INT8_MIN;
volatile int16_t x155 = INT16_MAX;
int8_t x157 = -14;
int32_t x158 = INT32_MAX;
static uint64_t x159 = UINT64_MAX;
int16_t x160 = -3;
volatile int64_t t28 = -1120579292191080565LL;
int64_t x170 = 1LL;
volatile int32_t t30 = 34;
volatile int32_t t32 = -63;
uint16_t x227 = 15U;
static int32_t x229 = 1;
volatile int8_t x232 = INT8_MAX;
int32_t t38 = 2840;
int8_t x257 = -1;
volatile int64_t x258 = -1LL;
volatile int64_t x278 = INT64_MAX;
uint16_t x283 = 6664U;
int64_t x284 = 1241436LL;
static volatile int16_t x291 = INT16_MIN;
static int8_t x296 = 1;
int32_t x300 = 354;
volatile int32_t t49 = INT32_MIN;
volatile uint16_t x302 = 10867U;
int32_t x304 = -1;
static int64_t x306 = -756502854280126LL;
static uint8_t x310 = 33U;
int16_t x316 = -12;
int8_t x318 = INT8_MIN;
int32_t x322 = -1;
uint16_t x325 = 405U;
int32_t t56 = -10180;
int8_t x335 = 0;
int32_t t57 = -222385292;
static uint16_t x343 = 2551U;
int32_t t59 = INT32_MIN;
uint64_t x347 = UINT64_MAX;
static uint32_t x348 = 87U;
volatile int32_t t60 = 15421;
volatile int32_t t61 = 9;
uint64_t x354 = 2885015214835417162LLU;
uint8_t x364 = UINT8_MAX;
int32_t t64 = INT32_MIN;
volatile uint16_t x367 = UINT16_MAX;
int32_t x394 = 31182;
int16_t x402 = -941;
int32_t x406 = INT32_MIN;
int8_t x409 = INT8_MIN;
uint8_t x410 = 3U;
uint8_t x414 = UINT8_MAX;
volatile int16_t x415 = 20;
volatile uint8_t x419 = 50U;
volatile int32_t t75 = -6585;
uint16_t x429 = UINT16_MAX;
uint8_t x430 = UINT8_MAX;
uint16_t x433 = 10U;
volatile int32_t x437 = INT32_MIN;
int32_t x440 = 475521655;
int32_t t78 = INT32_MIN;
static volatile int64_t t79 = 270265402973791LL;
int8_t x449 = -24;
int64_t x450 = INT64_MAX;
int16_t x451 = INT16_MAX;
volatile int32_t t81 = -906888196;
int16_t x460 = INT16_MIN;
static int32_t x470 = INT32_MIN;
int32_t t84 = 4063932;
static int64_t x477 = INT64_MIN;
int8_t x483 = -5;
int32_t x493 = INT32_MIN;
volatile uint32_t x496 = 469U;
volatile int32_t t88 = -34775;
int8_t x506 = 8;
int64_t x516 = -1LL;
static int8_t x523 = -1;
int16_t x526 = INT16_MAX;
volatile int16_t x527 = -1;
uint16_t x531 = 16U;
volatile int8_t x534 = INT8_MIN;
uint64_t t95 = 14093707906261LLU;
volatile uint64_t t96 = 519903936LLU;
volatile int32_t t97 = -777852;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	static uint16_t x2 = 64U;
	int16_t x3 = 14;
	volatile int16_t x4 = INT16_MIN;
	int64_t t0 = -44LL;

	t0 = (x1*(x2<(x3*x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 10;
	uint64_t x7 = 3780986803205828961LLU;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x5*(x6<(x7*x8)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -4239;
	volatile int32_t x14 = -1;
	int64_t x15 = 247507704LL;
	uint16_t x16 = 91U;
	static volatile int32_t t2 = 3;

	t2 = (x13*(x14<(x15*x16)));

	if (t2 != -4239) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile uint32_t x18 = UINT32_MAX;
	int32_t x20 = INT32_MIN;

	t3 = (x17*(x18<(x19*x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 8732LLU;
	int32_t x23 = 3819;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -23987894;

	t4 = (x21*(x22<(x23*x24)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int64_t x27 = -1LL;
	volatile uint16_t x28 = 1962U;
	volatile int32_t t5 = 0;

	t5 = (x25*(x26<(x27*x28)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = -76277928;
	int32_t x38 = INT32_MIN;
	static int16_t x39 = INT16_MIN;
	int16_t x40 = -1;

	t6 = (x37*(x38<(x39*x40)));

	if (t6 != -76277928) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 21U;
	volatile int64_t x42 = INT64_MAX;
	int64_t x43 = -1000751392998LL;
	volatile int32_t t7 = -3;

	t7 = (x41*(x42<(x43*x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	volatile uint32_t x46 = 0U;
	static uint16_t x47 = 2802U;
	static int16_t x48 = INT16_MAX;

	t8 = (x45*(x46<(x47*x48)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = 164;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -242;
	volatile uint16_t x60 = 3028U;
	volatile int32_t t9 = -366031691;

	t9 = (x57*(x58<(x59*x60)));

	if (t9 != 164) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x62 = INT8_MAX;
	static volatile int32_t t10 = 509029703;

	t10 = (x61*(x62<(x63*x64)));

	if (t10 != -16) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x66 = 2518458219020452LL;
	int16_t x68 = -1;
	int32_t t11 = 0;

	t11 = (x65*(x66<(x67*x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = INT32_MAX;
	volatile int8_t x70 = -1;
	uint8_t x71 = 3U;
	int32_t x72 = 2;
	int32_t t12 = INT32_MAX;

	t12 = (x69*(x70<(x71*x72)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = UINT32_MAX;
	volatile uint16_t x80 = 53U;
	int32_t t13 = 1342;

	t13 = (x77*(x78<(x79*x80)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x81 = -1;
	volatile int32_t x82 = 751088;
	int32_t x84 = 81;
	int32_t t14 = -4;

	t14 = (x81*(x82<(x83*x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x89 = 1U;
	int16_t x90 = 503;
	int32_t x91 = INT32_MIN;
	volatile int64_t x92 = 6361LL;
	volatile uint32_t t15 = 38257U;

	t15 = (x89*(x90<(x91*x92)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x94 = 104U;
	uint8_t x95 = 36U;
	static int32_t t16 = -649162137;

	t16 = (x93*(x94<(x95*x96)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = -1;
	int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = -7005LL;
	int32_t t17 = 4;

	t17 = (x97*(x98<(x99*x100)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = -1;
	static int16_t x102 = 1397;
	uint8_t x104 = UINT8_MAX;
	static int32_t t18 = -82;

	t18 = (x101*(x102<(x103*x104)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x106 = 113U;
	static uint8_t x108 = 47U;

	t19 = (x105*(x106<(x107*x108)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x109 = 70436191191LLU;
	uint8_t x110 = 26U;
	volatile int64_t x111 = 0LL;
	volatile uint64_t t20 = 1LLU;

	t20 = (x109*(x110<(x111*x112)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 1035521296LLU;
	static int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile uint64_t t21 = 690LLU;

	t21 = (x113*(x114<(x115*x116)));

	if (t21 != 1035521296LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 4863U;
	static uint32_t x126 = 336U;
	volatile uint16_t x127 = UINT16_MAX;
	volatile uint16_t x128 = 4195U;

	t22 = (x125*(x126<(x127*x128)));

	if (t22 != 4863U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x137 = 3U;
	uint8_t x138 = 7U;
	static uint32_t x139 = UINT32_MAX;
	static uint16_t x140 = 4551U;
	volatile int32_t t23 = 9;

	t23 = (x137*(x138<(x139*x140)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MAX;
	uint32_t x147 = 174U;
	volatile int32_t x148 = INT32_MIN;

	t24 = (x145*(x146<(x147*x148)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile int64_t t25 = -77LL;

	t25 = (x149*(x150<(x151*x152)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = INT8_MAX;
	int8_t x154 = -1;
	static volatile int16_t x156 = INT16_MAX;
	static volatile int32_t t26 = -1;

	t26 = (x153*(x154<(x155*x156)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t t27 = -1092;

	t27 = (x157*(x158<(x159*x160)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x165 = INT64_MAX;
	int16_t x166 = 136;
	volatile int64_t x167 = -666475697LL;
	volatile int32_t x168 = INT32_MAX;

	t28 = (x165*(x166<(x167*x168)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x169 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	static int64_t x172 = 49193174LL;
	volatile int32_t t29 = -43915;

	t29 = (x169*(x170<(x171*x172)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x177 = 2U;
	int64_t x178 = INT64_MAX;
	uint16_t x179 = 70U;
	volatile int8_t x180 = 0;

	t30 = (x177*(x178<(x179*x180)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x181 = UINT8_MAX;
	static int64_t x182 = 4266465103681LL;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t31 = 12;

	t31 = (x181*(x182<(x183*x184)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x185 = -23064;
	int16_t x186 = 594;
	int8_t x187 = -1;
	uint16_t x188 = 883U;

	t32 = (x185*(x186<(x187*x188)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x193 = 2983531590893655403LL;
	int32_t x194 = INT32_MIN;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = -399384LL;
	int64_t t33 = -21224LL;

	t33 = (x193*(x194<(x195*x196)));

	if (t33 != 2983531590893655403LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = -1;
	int16_t x198 = -7;
	int64_t x199 = -1LL;
	int32_t x200 = 348561457;
	static int32_t t34 = -327;

	t34 = (x197*(x198<(x199*x200)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = 3U;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 799695906384LLU;
	int32_t x216 = -6788;
	volatile int32_t t35 = -30;

	t35 = (x213*(x214<(x215*x216)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x225 = 1U;
	static uint8_t x226 = 75U;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t36 = -444;

	t36 = (x225*(x226<(x227*x228)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x230 = 101U;
	static uint8_t x231 = 95U;
	int32_t t37 = 33591;

	t37 = (x229*(x230<(x231*x232)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = 91200861;
	int64_t x243 = -1LL;
	static uint32_t x244 = 44890U;

	t38 = (x241*(x242<(x243*x244)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x253 = UINT16_MAX;
	static volatile int32_t x254 = INT32_MIN;
	static uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MAX;
	static volatile int32_t t39 = 0;

	t39 = (x253*(x254<(x255*x256)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x259 = INT16_MAX;
	static int8_t x260 = INT8_MIN;
	int32_t t40 = 317662670;

	t40 = (x257*(x258<(x259*x260)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x261 = INT8_MAX;
	uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 10139U;
	uint64_t x264 = UINT64_MAX;
	int32_t t41 = -131968184;

	t41 = (x261*(x262<(x263*x264)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x265 = INT16_MAX;
	static uint64_t x266 = 2355521LLU;
	volatile int8_t x267 = -13;
	uint64_t x268 = 1713269936029LLU;
	static int32_t t42 = -315637;

	t42 = (x265*(x266<(x267*x268)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = -1LL;
	static uint32_t x271 = 126292U;
	int32_t x272 = INT32_MAX;
	int32_t t43 = -5;

	t43 = (x269*(x270<(x271*x272)));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x273 = -1LL;
	int32_t x274 = 4;
	uint32_t x275 = UINT32_MAX;
	static volatile uint8_t x276 = UINT8_MAX;
	int64_t t44 = -3LL;

	t44 = (x273*(x274<(x275*x276)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x277 = 270606022U;
	int8_t x279 = 8;
	static uint16_t x280 = 0U;
	static uint32_t t45 = 151100480U;

	t45 = (x277*(x278<(x279*x280)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x281 = 1U;
	volatile int16_t x282 = INT16_MAX;
	volatile uint32_t t46 = 110830U;

	t46 = (x281*(x282<(x283*x284)));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = -89;
	int16_t x292 = 38;
	int64_t t47 = -2760LL;

	t47 = (x289*(x290<(x291*x292)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x293 = -245100831192582LL;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MAX;
	static int64_t t48 = -879LL;

	t48 = (x293*(x294<(x295*x296)));

	if (t48 != -245100831192582LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	static volatile uint8_t x299 = UINT8_MAX;

	t49 = (x297*(x298<(x299*x300)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x301 = 373828656LLU;
	static uint64_t x303 = 43938LLU;
	uint64_t t50 = 284118905LLU;

	t50 = (x301*(x302<(x303*x304)));

	if (t50 != 373828656LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = INT8_MIN;
	volatile int32_t x307 = 3908647;
	int8_t x308 = 0;
	static volatile int32_t t51 = -404310225;

	t51 = (x305*(x306<(x307*x308)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = -1;
	uint32_t x311 = 276U;
	volatile int16_t x312 = -1;
	int32_t t52 = -14617;

	t52 = (x309*(x310<(x311*x312)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x313 = INT16_MIN;
	uint32_t x314 = 34497632U;
	volatile int16_t x315 = 84;
	volatile int32_t t53 = 10614;

	t53 = (x313*(x314<(x315*x316)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x317 = 1U;
	static uint64_t x319 = 4642477562656501877LLU;
	int16_t x320 = 267;
	volatile uint32_t t54 = 197713234U;

	t54 = (x317*(x318<(x319*x320)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x321 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	static uint32_t x324 = UINT32_MAX;
	int32_t t55 = 0;

	t55 = (x321*(x322<(x323*x324)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x326 = 27;
	uint8_t x327 = 1U;
	uint64_t x328 = UINT64_MAX;

	t56 = (x325*(x326<(x327*x328)));

	if (t56 != 405) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x334 = 26U;
	uint32_t x336 = UINT32_MAX;

	t57 = (x333*(x334<(x335*x336)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x337 = 94;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	uint64_t x340 = 13148476208LLU;
	volatile int32_t t58 = -6724;

	t58 = (x337*(x338<(x339*x340)));

	if (t58 != 94) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x341 = INT32_MIN;
	volatile uint8_t x342 = 121U;
	static uint64_t x344 = 2416298576LLU;

	t59 = (x341*(x342<(x343*x344)));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x345 = -353694;
	int8_t x346 = INT8_MAX;

	t60 = (x345*(x346<(x347*x348)));

	if (t60 != -353694) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	int32_t x351 = -1;
	uint64_t x352 = UINT64_MAX;

	t61 = (x349*(x350<(x351*x352)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x355 = 6057360422307072LLU;
	int16_t x356 = 192;
	int32_t t62 = 96;

	t62 = (x353*(x354<(x355*x356)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	uint64_t x359 = 2787LLU;
	uint64_t x360 = 909447062LLU;
	volatile int32_t t63 = -268;

	t63 = (x357*(x358<(x359*x360)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 12682U;

	t64 = (x361*(x362<(x363*x364)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = -36;
	int32_t x366 = INT32_MIN;
	int32_t x368 = 1;
	volatile int32_t t65 = -392;

	t65 = (x365*(x366<(x367*x368)));

	if (t65 != -36) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x369 = -1;
	uint32_t x370 = 477U;
	int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	int32_t t66 = 463448;

	t66 = (x369*(x370<(x371*x372)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x381 = 2427344LL;
	static uint64_t x382 = 15934LLU;
	int32_t x383 = INT32_MIN;
	int8_t x384 = 0;
	static volatile int64_t t67 = 8883531222721252LL;

	t67 = (x381*(x382<(x383*x384)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x389 = INT64_MIN;
	uint16_t x390 = 47U;
	int64_t x391 = 1LL;
	uint8_t x392 = 30U;
	int64_t t68 = 139671698833LL;

	t68 = (x389*(x390<(x391*x392)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x393 = INT64_MIN;
	int8_t x395 = INT8_MIN;
	static int32_t x396 = -1;
	int64_t t69 = 112118LL;

	t69 = (x393*(x394<(x395*x396)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x401 = -1LL;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	static int64_t t70 = -45191LL;

	t70 = (x401*(x402<(x403*x404)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x405 = 1U;
	int64_t x407 = 18737380573LL;
	int16_t x408 = INT16_MIN;
	static int32_t t71 = 1244;

	t71 = (x405*(x406<(x407*x408)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x411 = 1U;
	int32_t x412 = 476;
	int32_t t72 = -1174243;

	t72 = (x409*(x410<(x411*x412)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static uint8_t x416 = 0U;
	uint32_t t73 = 260748169U;

	t73 = (x413*(x414<(x415*x416)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MIN;
	int16_t x420 = 1468;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x417*(x418<(x419*x420)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = 34839880720966LL;
	int16_t x423 = INT16_MAX;
	uint8_t x424 = 88U;

	t75 = (x421*(x422<(x423*x424)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = 2;
	int32_t t76 = 424;

	t76 = (x429*(x430<(x431*x432)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x434 = UINT32_MAX;
	static int32_t x435 = INT32_MAX;
	uint32_t x436 = 10525U;
	volatile int32_t t77 = 30;

	t77 = (x433*(x434<(x435*x436)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x438 = INT64_MIN;
	uint32_t x439 = UINT32_MAX;

	t78 = (x437*(x438<(x439*x440)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x441 = INT64_MIN;
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = 4;
	static int64_t x444 = -1LL;

	t79 = (x441*(x442<(x443*x444)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x445 = 1504U;
	volatile int8_t x446 = INT8_MIN;
	uint8_t x447 = UINT8_MAX;
	uint32_t x448 = 25U;
	volatile int32_t t80 = -66;

	t80 = (x445*(x446<(x447*x448)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x452 = -82;

	t81 = (x449*(x450<(x451*x452)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x453 = 1677LLU;
	static volatile int8_t x454 = INT8_MIN;
	int8_t x455 = -8;
	int8_t x456 = -4;
	uint64_t t82 = 75LLU;

	t82 = (x453*(x454<(x455*x456)));

	if (t82 != 1677LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = 1957000;
	uint8_t x459 = 90U;
	volatile int64_t t83 = -31323LL;

	t83 = (x457*(x458<(x459*x460)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x469 = UINT8_MAX;
	static int16_t x471 = -1;
	int32_t x472 = INT32_MAX;

	t84 = (x469*(x470<(x471*x472)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 262018481099730782LLU;
	int32_t x475 = 37319736;
	int64_t x476 = -61095LL;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x473*(x474<(x475*x476)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x478 = INT32_MIN;
	int8_t x479 = -19;
	int16_t x480 = -763;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x477*(x478<(x479*x480)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = INT8_MIN;
	static int64_t x482 = -1LL;
	int32_t x484 = 840817;
	int32_t t87 = 4;

	t87 = (x481*(x482<(x483*x484)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x494 = -1;
	uint32_t x495 = UINT32_MAX;

	t88 = (x493*(x494<(x495*x496)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x501 = -3;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = -1;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t89 = 0;

	t89 = (x501*(x502<(x503*x504)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x505 = -23519186;
	volatile uint64_t x507 = 5705815407274946LLU;
	volatile int64_t x508 = -2567519LL;
	volatile int32_t t90 = -3;

	t90 = (x505*(x506<(x507*x508)));

	if (t90 != -23519186) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x513 = INT32_MAX;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = -540897764509LL;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x513*(x514<(x515*x516)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x521 = UINT64_MAX;
	static int8_t x522 = 1;
	static int16_t x524 = INT16_MIN;
	uint64_t t92 = UINT64_MAX;

	t92 = (x521*(x522<(x523*x524)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x525 = -1;
	int32_t x528 = -1;
	volatile int32_t t93 = 12;

	t93 = (x525*(x526<(x527*x528)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x529 = INT8_MIN;
	uint64_t x530 = UINT64_MAX;
	uint64_t x532 = UINT64_MAX;
	int32_t t94 = -46;

	t94 = (x529*(x530<(x531*x532)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x533 = 19LLU;
	int32_t x535 = INT32_MAX;
	uint64_t x536 = 4446777775094LLU;

	t95 = (x533*(x534<(x535*x536)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x537 = UINT64_MAX;
	uint16_t x538 = 0U;
	static int32_t x539 = -78257;
	uint8_t x540 = 0U;

	t96 = (x537*(x538<(x539*x540)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x541 = -1;
	uint16_t x542 = 546U;
	volatile uint16_t x543 = 1U;
	int16_t x544 = -266;

	t97 = (x541*(x542<(x543*x544)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x545 = INT8_MIN;
	uint8_t x546 = UINT8_MAX;
	uint32_t x547 = UINT32_MAX;
	static int64_t x548 = -1LL;
	int32_t t98 = -7;

	t98 = (x545*(x546<(x547*x548)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x553 = INT16_MIN;
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = INT32_MAX;
	uint64_t x556 = 2948991310164LLU;
	volatile int32_t t99 = 16220;

	t99 = (x553*(x554<(x555*x556)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

