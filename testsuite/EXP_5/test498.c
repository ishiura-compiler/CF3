#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x11 = UINT32_MAX;
volatile uint64_t x14 = UINT64_MAX;
uint64_t t2 = 7423588LLU;
int8_t x18 = INT8_MIN;
static volatile int32_t t3 = 105762;
int16_t x22 = -31;
int8_t x23 = INT8_MIN;
static uint8_t x25 = 55U;
volatile int8_t x26 = INT8_MIN;
int16_t x27 = INT16_MIN;
static uint64_t x28 = 5091664615786LLU;
volatile uint64_t t5 = 590LLU;
uint8_t x47 = UINT8_MAX;
int64_t x52 = INT64_MIN;
volatile int8_t x55 = -4;
int8_t x56 = INT8_MAX;
int32_t x58 = -76;
static int16_t x70 = INT16_MIN;
static volatile uint8_t x72 = UINT8_MAX;
int8_t x90 = INT8_MIN;
int16_t x97 = -715;
int64_t x121 = INT64_MAX;
uint32_t x123 = UINT32_MAX;
static uint64_t x132 = UINT64_MAX;
uint32_t x143 = UINT32_MAX;
int32_t x145 = INT32_MAX;
volatile int32_t t21 = -110764477;
uint64_t t22 = 1111979088LLU;
volatile int8_t x174 = 0;
static int8_t x178 = INT8_MIN;
uint8_t x179 = 49U;
uint64_t t26 = 61493370LLU;
int32_t x186 = INT32_MIN;
int16_t x188 = 7621;
static int8_t x213 = -56;
uint8_t x217 = UINT8_MAX;
uint8_t x219 = UINT8_MAX;
uint32_t x236 = UINT32_MAX;
static uint32_t x257 = 11406U;
int32_t x259 = 0;
static volatile uint64_t x260 = 23LLU;
volatile uint64_t t39 = 8LLU;
uint64_t x283 = 7661553208893LLU;
int16_t x284 = INT16_MIN;
volatile uint64_t t41 = 178864296472793LLU;
int8_t x289 = INT8_MIN;
uint64_t x300 = 14754926492077LLU;
static int16_t x306 = INT16_MAX;
int16_t x315 = -14;
static volatile int64_t x323 = -2422266568053LL;
volatile uint64_t t50 = 358LLU;
static int8_t x329 = -1;
static volatile int32_t x343 = 10;
uint16_t x348 = 5270U;
int64_t t55 = 0LL;
uint64_t x362 = 161680LLU;
static int16_t x376 = -1;
int32_t x384 = -1;
int8_t x394 = -29;
uint16_t x396 = 26445U;
uint16_t x401 = 2969U;
static int32_t x405 = 0;
static uint32_t x406 = 9814322U;
uint16_t x408 = UINT16_MAX;
volatile uint32_t x420 = 486U;
int16_t x437 = -3958;
volatile int32_t x441 = 0;
int32_t x446 = INT32_MIN;
volatile int16_t x448 = INT16_MIN;
int16_t x458 = -1;
uint64_t x461 = UINT64_MAX;
int32_t x464 = -2057571;
static int16_t x470 = INT16_MAX;
int16_t x471 = -1;
int32_t t76 = -707941;
int64_t x473 = 1240106421328LL;
int8_t x474 = INT8_MAX;
static int64_t x478 = -1LL;
int64_t x485 = INT64_MIN;
volatile uint64_t x489 = 92575494797723LLU;
volatile uint8_t x495 = 4U;
int8_t x496 = -1;
volatile uint32_t t82 = 177533849U;
uint8_t x498 = 62U;
int16_t x504 = 1;
uint16_t x505 = 956U;
volatile int8_t x506 = INT8_MIN;
int8_t x514 = 2;
uint16_t x515 = 6U;
uint64_t x520 = 56269895868810LLU;
uint64_t t88 = 26374510291427592LLU;
int32_t x525 = 226843207;
int8_t x550 = INT8_MIN;
uint64_t x551 = UINT64_MAX;
uint8_t x564 = 11U;
static int64_t t93 = -39LL;
volatile int8_t x567 = INT8_MIN;
uint8_t x583 = 3U;
volatile int8_t x589 = INT8_MIN;
static volatile uint64_t t99 = 133888408447LLU;


void f0(void) {
	uint8_t x1 = 10U;
	uint32_t x2 = 993836U;
	volatile uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = 1565765576LLU;

	t0 = (x1/((x2*x3)^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	int8_t x10 = -1;
	static int64_t x12 = 4LL;
	int64_t t1 = -3044269434382LL;

	t1 = (x9/((x10*x11)^x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x13 = -5;
	volatile int64_t x15 = 4494LL;
	volatile int64_t x16 = -5608411LL;

	t2 = (x13/((x14*x15)^x16));

	if (t2 != 3291753099872LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	int16_t x19 = -35;
	int16_t x20 = -1;

	t3 = (x17/((x18*x19)^x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 5U;
	uint32_t x24 = 85U;
	volatile uint32_t t4 = 52U;

	t4 = (x21/((x22*x23)^x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = (x25/((x26*x27)^x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -1;
	int8_t x38 = -1;
	int8_t x39 = 0;
	volatile int8_t x40 = INT8_MIN;
	int32_t t6 = -1;

	t6 = (x37/((x38*x39)^x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	static int16_t x46 = INT16_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t7 = -31190;

	t7 = (x45/((x46*x47)^x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 3089U;
	volatile uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MAX;
	uint64_t t8 = 173192918LLU;

	t8 = (x49/((x50*x51)^x52));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = INT32_MAX;
	uint16_t x54 = 192U;
	volatile int32_t t9 = -2;

	t9 = (x53/((x54*x55)^x56));

	if (t9 != -3350208) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int8_t x59 = INT8_MAX;
	static int8_t x60 = 1;
	int32_t t10 = -10595;

	t10 = (x57/((x58*x59)^x60));

	if (t10 != -6) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = 114;
	int8_t x71 = -1;
	int32_t t11 = -2906;

	t11 = (x69/((x70*x71)^x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 3472017525018735LLU;
	uint16_t x78 = UINT16_MAX;
	uint64_t x79 = 22117584615694LLU;
	int16_t x80 = INT16_MIN;
	uint64_t t12 = 8943043619475366LLU;

	t12 = (x77/((x78*x79)^x80));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x89 = INT16_MIN;
	int32_t x91 = -782;
	static int8_t x92 = -3;
	volatile int32_t t13 = 154375;

	t13 = (x89/((x90*x91)^x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x98 = 57983200LLU;
	int16_t x99 = INT16_MIN;
	static int16_t x100 = -7;
	volatile uint64_t t14 = 1436182LLU;

	t14 = (x97/((x98*x99)^x100));

	if (t14 != 9708845LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x113 = INT32_MAX;
	uint16_t x114 = 1284U;
	int16_t x115 = -1;
	volatile int8_t x116 = -14;
	static int32_t t15 = -9264;

	t15 = (x113/((x114*x115)^x116));

	if (t15 != 1659570) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x122 = 208543;
	volatile int64_t x124 = -1LL;
	int64_t t16 = 20723801LL;

	t16 = (x121/((x122*x123)^x124));

	if (t16 != -2147587924LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x125 = -16;
	int8_t x126 = -1;
	int64_t x127 = 3988562678525LL;
	volatile int64_t x128 = -1LL;
	int64_t t17 = -259932647515558LL;

	t17 = (x125/((x126*x127)^x128));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x129 = INT16_MIN;
	uint8_t x130 = 6U;
	static uint16_t x131 = 20883U;
	static uint64_t t18 = 2LLU;

	t18 = (x129/((x130*x131)^x132));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x137 = 2LL;
	int64_t x138 = INT64_MIN;
	static uint16_t x139 = 1U;
	static int32_t x140 = 0;
	int64_t t19 = 7308610087814022LL;

	t19 = (x137/((x138*x139)^x140));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;
	uint32_t t20 = 530545702U;

	t20 = (x141/((x142*x143)^x144));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x146 = 92U;
	int8_t x147 = INT8_MAX;
	static uint8_t x148 = 1U;

	t21 = (x145/((x146*x147)^x148));

	if (t21 != 183781) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x149 = UINT32_MAX;
	int8_t x150 = 6;
	uint64_t x151 = 10304113LLU;
	volatile uint16_t x152 = UINT16_MAX;

	t22 = (x149/((x150*x151)^x152));

	if (t22 != 69LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = 137LLU;
	uint16_t x155 = 251U;
	int8_t x156 = -1;
	uint64_t t23 = 59180488244LLU;

	t23 = (x153/((x154*x155)^x156));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = -1;
	int64_t x158 = 5436034131057908LL;
	int8_t x159 = INT8_MIN;
	int32_t x160 = 3947;
	static int64_t t24 = 4LL;

	t24 = (x157/((x158*x159)^x160));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x173 = 97U;
	uint64_t x175 = 1423615676760854627LLU;
	static int16_t x176 = -1;
	uint64_t t25 = 2101583697160574110LLU;

	t25 = (x173/((x174*x175)^x176));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x177 = 8569LLU;
	static volatile int64_t x180 = -1LL;

	t26 = (x177/((x178*x179)^x180));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x185 = INT64_MAX;
	int64_t x187 = 1LL;
	static int64_t t27 = -4272LL;

	t27 = (x185/((x186*x187)^x188));

	if (t27 != -4294982538LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x189 = 28363879U;
	static volatile uint8_t x190 = 119U;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = 5426;
	static uint32_t t28 = 322U;

	t28 = (x189/((x190*x191)^x192));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x193 = -7589;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = -2714239;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t29 = 321456508699089747LLU;

	t29 = (x193/((x194*x195)^x196));

	if (t29 != 26652101359LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = INT32_MAX;
	uint16_t x198 = 94U;
	static uint32_t x199 = UINT32_MAX;
	volatile int32_t x200 = -1;
	volatile uint32_t t30 = 1303111983U;

	t30 = (x197/((x198*x199)^x200));

	if (t30 != 23091222U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x214 = -1;
	int16_t x215 = INT16_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t31 = 201;

	t31 = (x213/((x214*x215)^x216));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x218 = INT16_MIN;
	int16_t x220 = 51;
	volatile int32_t t32 = 9043432;

	t32 = (x217/((x218*x219)^x220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	static int16_t x223 = -33;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t33 = 1304860596316LLU;

	t33 = (x221/((x222*x223)^x224));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x229 = 190U;
	int32_t x230 = INT32_MIN;
	static int64_t x231 = -54940900LL;
	int8_t x232 = INT8_MIN;
	int64_t t34 = -99LL;

	t34 = (x229/((x230*x231)^x232));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = -6;
	static uint64_t x235 = 1LLU;
	static uint64_t t35 = 490LLU;

	t35 = (x233/((x234*x235)^x236));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x237 = 84635LLU;
	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	static int8_t x240 = INT8_MIN;
	volatile uint64_t t36 = 27898623300188LLU;

	t36 = (x237/((x238*x239)^x240));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x241 = INT32_MIN;
	uint16_t x242 = 2854U;
	int32_t x243 = 430;
	int64_t x244 = INT64_MIN;
	volatile int64_t t37 = -482838LL;

	t37 = (x241/((x242*x243)^x244));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = -1;
	int8_t x247 = -1;
	uint16_t x248 = 3035U;
	int64_t t38 = -71207696LL;

	t38 = (x245/((x246*x247)^x248));

	if (t38 != -3040003967321943LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x258 = -7119;

	t39 = (x257/((x258*x259)^x260));

	if (t39 != 495LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x261 = 399;
	static int8_t x262 = -1;
	uint8_t x263 = 17U;
	volatile int64_t x264 = INT64_MAX;
	static int64_t t40 = -2081622112LL;

	t40 = (x261/((x262*x263)^x264));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -1;

	t41 = (x281/((x282*x283)^x284));

	if (t41 != 2407702LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x285 = -86297816466LL;
	int64_t x286 = INT64_MIN;
	volatile uint8_t x287 = 0U;
	int32_t x288 = 318404;
	int64_t t42 = -486178312LL;

	t42 = (x285/((x286*x287)^x288));

	if (t42 != -271032LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x290 = 114U;
	static volatile int8_t x291 = INT8_MIN;
	static uint32_t x292 = 1921565U;
	uint32_t t43 = 1929804U;

	t43 = (x289/((x290*x291)^x292));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x293 = 0U;
	uint64_t x294 = 1451819730LLU;
	uint32_t x295 = UINT32_MAX;
	volatile uint32_t x296 = 17690U;
	volatile uint64_t t44 = 30449LLU;

	t44 = (x293/((x294*x295)^x296));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x297 = UINT32_MAX;
	int32_t x298 = 4;
	uint64_t x299 = 327016LLU;
	volatile uint64_t t45 = 3969840667794LLU;

	t45 = (x297/((x298*x299)^x300));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x305 = UINT32_MAX;
	static uint8_t x307 = 1U;
	int32_t x308 = -1;
	volatile uint32_t t46 = 227388645U;

	t46 = (x305/((x306*x307)^x308));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x313 = 5553;
	volatile int64_t x314 = -1LL;
	uint32_t x316 = 14493U;
	int64_t t47 = 979905775775669856LL;

	t47 = (x313/((x314*x315)^x316));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x317 = 3U;
	static int16_t x318 = INT16_MAX;
	uint8_t x319 = 6U;
	uint16_t x320 = 924U;
	volatile int32_t t48 = 1194;

	t48 = (x317/((x318*x319)^x320));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x321 = 0U;
	uint32_t x322 = 2U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t49 = -455LL;

	t49 = (x321/((x322*x323)^x324));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x325 = 21715LLU;
	uint8_t x326 = 2U;
	static int8_t x327 = 11;
	static uint32_t x328 = 74U;

	t50 = (x325/((x326*x327)^x328));

	if (t50 != 236LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x330 = -1;
	int32_t x331 = INT32_MAX;
	volatile int16_t x332 = INT16_MAX;
	static volatile int32_t t51 = -267;

	t51 = (x329/((x330*x331)^x332));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x341 = 115U;
	int8_t x342 = INT8_MIN;
	uint8_t x344 = 1U;
	static volatile uint32_t t52 = 106210U;

	t52 = (x341/((x342*x343)^x344));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x345 = -1;
	volatile int16_t x346 = 5;
	volatile uint8_t x347 = 72U;
	volatile int32_t t53 = -508303594;

	t53 = (x345/((x346*x347)^x348));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = 126;
	int32_t x351 = -1;
	volatile int8_t x352 = INT8_MAX;
	int32_t t54 = 112352;

	t54 = (x349/((x350*x351)^x352));

	if (t54 != 715827882) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int32_t x354 = -7986;
	int16_t x355 = INT16_MAX;
	int64_t x356 = 741LL;

	t55 = (x353/((x354*x355)^x356));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x361 = -26132341;
	uint16_t x363 = 6978U;
	static int32_t x364 = INT32_MIN;
	uint64_t t56 = 6051842837LLU;

	t56 = (x361/((x362*x363)^x364));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x365 = -104;
	static volatile int8_t x366 = 1;
	uint64_t x367 = 33339LLU;
	int16_t x368 = 1353;
	volatile uint64_t t57 = 2221LLU;

	t57 = (x365/((x366*x367)^x368));

	if (t57 != 532005077975126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 116412685353LLU;
	volatile uint64_t x371 = UINT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	volatile uint64_t t58 = 13448286958101805LLU;

	t58 = (x369/((x370*x371)^x372));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x373 = -1LL;
	uint8_t x374 = 0U;
	uint32_t x375 = 1620713278U;
	volatile int64_t t59 = 44260738LL;

	t59 = (x373/((x374*x375)^x376));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MAX;
	int32_t x379 = -40;
	volatile uint16_t x380 = 61U;
	static int64_t t60 = 1722625775573460581LL;

	t60 = (x377/((x378*x379)^x380));

	if (t60 != 7036987162464LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x381 = INT16_MIN;
	volatile uint64_t x382 = 5189LLU;
	volatile int16_t x383 = -1;
	volatile uint64_t t61 = 59LLU;

	t61 = (x381/((x382*x383)^x384));

	if (t61 != 3555656143737378LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	int64_t t62 = 1777613684119228822LL;

	t62 = (x393/((x394*x395)^x396));

	if (t62 != 4921504574394LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x397 = 10U;
	int16_t x398 = -76;
	uint8_t x399 = 5U;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t63 = 382U;

	t63 = (x397/((x398*x399)^x400));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x402 = -1;
	int32_t x403 = INT32_MAX;
	static int16_t x404 = -1;
	volatile int32_t t64 = -3857678;

	t64 = (x401/((x402*x403)^x404));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x407 = UINT8_MAX;
	uint32_t t65 = 638U;

	t65 = (x405/((x406*x407)^x408));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x409 = INT64_MAX;
	volatile int16_t x410 = INT16_MIN;
	volatile int8_t x411 = INT8_MIN;
	uint64_t x412 = 1348LLU;
	volatile uint64_t t66 = 0LLU;

	t66 = (x409/((x410*x411)^x412));

	if (t66 != 2198316742393LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x417 = INT64_MIN;
	static volatile uint64_t x418 = 2205541936118LLU;
	volatile int64_t x419 = INT64_MAX;
	volatile uint64_t t67 = 4372399911541399LLU;

	t67 = (x417/((x418*x419)^x420));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = 1131;
	uint32_t x422 = 97535U;
	volatile uint32_t x423 = 1559296U;
	static volatile int8_t x424 = -1;
	uint32_t t68 = 52564U;

	t68 = (x421/((x422*x423)^x424));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 610U;
	uint64_t x440 = UINT64_MAX;
	uint64_t t69 = 2596614040LLU;

	t69 = (x437/((x438*x439)^x440));

	if (t69 != 30290220153874462LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x442 = 8342U;
	uint64_t x443 = 12605726LLU;
	volatile uint16_t x444 = UINT16_MAX;
	uint64_t t70 = 223347965LLU;

	t70 = (x441/((x442*x443)^x444));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x445 = UINT64_MAX;
	int64_t x447 = -1LL;
	static volatile uint64_t t71 = 32067703370065723LLU;

	t71 = (x445/((x446*x447)^x448));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	int32_t x451 = 59927;
	int32_t x452 = -125;
	volatile int32_t t72 = 16813;

	t72 = (x449/((x450*x451)^x452));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x457 = -1;
	uint8_t x459 = 33U;
	int32_t x460 = INT32_MIN;
	int32_t t73 = -58;

	t73 = (x457/((x458*x459)^x460));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	volatile uint64_t t74 = 76084566497LLU;

	t74 = (x461/((x462*x463)^x464));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x465 = -46806136;
	volatile uint32_t x466 = 486U;
	int32_t x467 = 94789;
	uint64_t x468 = UINT64_MAX;
	uint64_t t75 = 409LLU;

	t75 = (x465/((x466*x467)^x468));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x469 = UINT16_MAX;
	static volatile int16_t x472 = INT16_MIN;

	t76 = (x469/((x470*x471)^x472));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = -6854;
	volatile int64_t t77 = 77364281422053LL;

	t77 = (x473/((x474*x475)^x476));

	if (t77 != 298484LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x477 = INT16_MIN;
	volatile uint64_t x479 = 10210LLU;
	static uint64_t x480 = UINT64_MAX;
	uint64_t t78 = 7426111638LLU;

	t78 = (x477/((x478*x479)^x480));

	if (t78 != 1806909988609023LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x481 = UINT32_MAX;
	uint64_t x482 = 317120030982638397LLU;
	int32_t x483 = INT32_MIN;
	volatile int8_t x484 = -1;
	volatile uint64_t t79 = 360492996073945779LLU;

	t79 = (x481/((x482*x483)^x484));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x486 = INT16_MAX;
	volatile int16_t x487 = 0;
	uint64_t x488 = 5853793542783125514LLU;
	volatile uint64_t t80 = 948LLU;

	t80 = (x485/((x486*x487)^x488));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x490 = 33;
	int64_t x491 = -1LL;
	volatile int64_t x492 = INT64_MIN;
	volatile uint64_t t81 = 7958929142143880LLU;

	t81 = (x489/((x490*x491)^x492));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x493 = -7281265;
	static volatile uint32_t x494 = 1676U;

	t82 = (x493/((x494*x495)^x496));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x497 = 514740405950LL;
	int64_t x499 = -1LL;
	uint32_t x500 = 12487U;
	volatile int64_t t83 = -2330LL;

	t83 = (x497/((x498*x499)^x500));

	if (t83 != -41051152LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x501 = INT16_MIN;
	int8_t x502 = -1;
	volatile uint16_t x503 = 93U;
	int32_t t84 = -217196355;

	t84 = (x501/((x502*x503)^x504));

	if (t84 != 348) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x507 = INT16_MIN;
	volatile int16_t x508 = -1;
	static volatile int32_t t85 = 1895;

	t85 = (x505/((x506*x507)^x508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x509 = UINT16_MAX;
	uint64_t x510 = UINT64_MAX;
	static int32_t x511 = -1;
	int8_t x512 = -1;
	uint64_t t86 = 2131916761467997297LLU;

	t86 = (x509/((x510*x511)^x512));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x513 = 4U;
	int64_t x516 = 2148002403327LL;
	static int64_t t87 = -30099104356083LL;

	t87 = (x513/((x514*x515)^x516));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x517 = 947876LLU;
	volatile uint16_t x518 = 5762U;
	uint64_t x519 = UINT64_MAX;

	t88 = (x517/((x518*x519)^x520));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x526 = INT64_MIN;
	static uint64_t x527 = 1122LLU;
	int64_t x528 = INT64_MAX;
	volatile uint64_t t89 = 7916LLU;

	t89 = (x525/((x526*x527)^x528));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = INT8_MIN;
	int16_t x538 = -1;
	int16_t x539 = -1;
	uint8_t x540 = 55U;
	int32_t t90 = 1649382;

	t90 = (x537/((x538*x539)^x540));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x549 = INT8_MIN;
	int64_t x552 = INT64_MIN;
	static volatile uint64_t t91 = 14712804719740LLU;

	t91 = (x549/((x550*x551)^x552));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x553 = 2;
	static uint64_t x554 = 22LLU;
	int16_t x555 = INT16_MIN;
	volatile int8_t x556 = -2;
	volatile uint64_t t92 = 111225LLU;

	t92 = (x553/((x554*x555)^x556));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x561 = INT16_MIN;
	int64_t x562 = -1LL;
	int8_t x563 = -1;

	t93 = (x561/((x562*x563)^x564));

	if (t93 != -3276LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	static int16_t x568 = -679;
	volatile uint32_t t94 = 461U;

	t94 = (x565/((x566*x567)^x568));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x569 = -1;
	static int8_t x570 = 1;
	volatile uint16_t x571 = 4U;
	int32_t x572 = -1;
	int32_t t95 = 209;

	t95 = (x569/((x570*x571)^x572));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x581 = 84U;
	uint8_t x582 = 1U;
	uint16_t x584 = 87U;
	static volatile int32_t t96 = -950362523;

	t96 = (x581/((x582*x583)^x584));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x585 = 7993109617540475LLU;
	int16_t x586 = INT16_MIN;
	int32_t x587 = -1;
	static volatile uint8_t x588 = UINT8_MAX;
	volatile uint64_t t97 = 25390LLU;

	t97 = (x585/((x586*x587)^x588));

	if (t97 != 242046743710LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x590 = UINT8_MAX;
	int64_t x591 = -95LL;
	static uint8_t x592 = 0U;
	int64_t t98 = -29507644176LL;

	t98 = (x589/((x590*x591)^x592));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x597 = INT32_MAX;
	int16_t x598 = -769;
	uint64_t x599 = 3980408996962761930LLU;
	int8_t x600 = INT8_MIN;

	t99 = (x597/((x598*x599)^x600));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

