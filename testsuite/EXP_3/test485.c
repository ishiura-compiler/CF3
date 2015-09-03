#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x15 = 283U;
int8_t x17 = -13;
int16_t x19 = -47;
volatile int16_t x32 = -716;
static int8_t x36 = INT8_MAX;
static uint16_t x43 = 26U;
volatile int16_t x47 = INT16_MAX;
uint32_t x51 = UINT32_MAX;
uint32_t x52 = UINT32_MAX;
uint16_t x76 = 5340U;
volatile uint32_t t12 = 3562270U;
static int8_t x82 = INT8_MIN;
static uint64_t t13 = 86239142154290LLU;
static int16_t x95 = 5925;
uint32_t x106 = UINT32_MAX;
volatile uint64_t x110 = 7447LLU;
static uint8_t x116 = UINT8_MAX;
int64_t t21 = 467815014240LL;
int64_t x143 = -40834931053LL;
int16_t x148 = -28;
int32_t x154 = INT32_MIN;
volatile int64_t t29 = 269327363691LL;
int64_t x169 = INT64_MIN;
volatile int32_t x178 = INT32_MAX;
uint16_t x180 = 32U;
static int32_t t33 = 2;
static int8_t x198 = INT8_MIN;
int16_t x202 = INT16_MIN;
int32_t x203 = -1;
int8_t x210 = 0;
static int8_t x218 = INT8_MIN;
uint64_t t40 = 27LLU;
static uint16_t x225 = UINT16_MAX;
static int32_t x235 = INT32_MIN;
int32_t x237 = INT32_MAX;
int8_t x241 = INT8_MAX;
int16_t x242 = -1;
uint32_t t44 = 589546U;
uint8_t x274 = UINT8_MAX;
int8_t x276 = INT8_MIN;
uint64_t x303 = UINT64_MAX;
uint32_t x305 = 33460504U;
int32_t x308 = -12;
uint64_t t54 = 1888LLU;
volatile int8_t x314 = 3;
int32_t t55 = -474234;
static int8_t x318 = -1;
static uint64_t x334 = 808887748470780LLU;
int64_t x335 = -15049223163LL;
uint8_t x339 = 27U;
uint8_t x350 = 42U;
uint32_t t62 = 3077028U;
int8_t x368 = -1;
volatile uint32_t x369 = 767420925U;
uint64_t t65 = 4495LLU;
uint32_t x419 = UINT32_MAX;
uint32_t t69 = 92634U;
volatile uint64_t x422 = 1576626461LLU;
volatile int8_t x423 = 53;
uint64_t x435 = 490LLU;
volatile uint64_t t72 = 4579LLU;
static volatile uint16_t x447 = 102U;
static int64_t x449 = 31959727936LL;
uint64_t x458 = 7575331LLU;
volatile uint64_t x460 = 51LLU;
int32_t x490 = -107759663;
volatile int64_t x497 = -8426697050266LL;
uint32_t t81 = 1062141759U;
volatile int16_t x507 = -6707;
volatile uint8_t x518 = UINT8_MAX;
volatile uint32_t t83 = 7U;
int8_t x524 = INT8_MAX;
static int8_t x532 = INT8_MIN;
int8_t x535 = 14;
volatile uint32_t t87 = 25U;
int32_t x537 = -1;
static int8_t x538 = -1;
int16_t x539 = -1;
static int32_t t88 = 268062246;
uint64_t x542 = 15526152614LLU;
int8_t x546 = INT8_MAX;
uint8_t x548 = UINT8_MAX;
int8_t x549 = INT8_MIN;
static uint64_t x551 = UINT64_MAX;
static uint64_t t91 = 105971LLU;
int64_t x553 = -1LL;
static int64_t t93 = -268639004589LL;
uint8_t x572 = 3U;
uint32_t t95 = 1106561U;
uint16_t x582 = UINT16_MAX;
uint8_t x583 = 83U;
static int32_t x594 = 5170;


void f0(void) {
	uint64_t x1 = 26114907117LLU;
	uint32_t x2 = UINT32_MAX;
	int32_t x3 = -1;
	volatile int16_t x4 = -1;
	volatile uint64_t t0 = 62LLU;

	t0 = ((x1|x2)/(x3*x4));

	if (t0 != 30064771071LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 0U;
	static volatile uint32_t x14 = 923179U;
	volatile int8_t x16 = 10;
	static volatile uint32_t t1 = 8704U;

	t1 = ((x13|x14)/(x15*x16));

	if (t1 != 326U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x18 = INT64_MIN;
	int64_t x20 = -433670813LL;
	int64_t t2 = -134895LL;

	t2 = ((x17|x18)/(x19*x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x25 = 184125373172LL;
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	static uint8_t x28 = 3U;
	volatile int64_t t3 = -391801733931590LL;

	t3 = ((x25|x26)/(x27*x28));

	if (t3 != -93827853762722LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MIN;
	static int16_t x31 = 3061;
	static int64_t t4 = 594LL;

	t4 = ((x29|x30)/(x31*x32));

	if (t4 != 4208364756859LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -472674;
	static volatile int64_t t5 = 43977021024643330LL;

	t5 = ((x33|x34)/(x35*x36));

	if (t5 != 35LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = UINT16_MAX;
	static volatile int32_t x39 = -78108037;
	static volatile int16_t x40 = -4;
	int32_t t6 = -8660904;

	t6 = ((x37|x38)/(x39*x40));

	if (t6 != -6) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 1;
	int8_t x42 = 3;
	int64_t x44 = -1LL;
	int64_t t7 = 57799488LL;

	t7 = ((x41|x42)/(x43*x44));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x48 = 7;
	int64_t t8 = -1011906LL;

	t8 = ((x45|x46)/(x47*x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = INT64_MIN;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x49|x50)/(x51*x52));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	static volatile int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	int16_t x60 = INT16_MIN;
	volatile int64_t t10 = -51LL;

	t10 = ((x57|x58)/(x59*x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = 158220U;
	int64_t x70 = 3974LL;
	int8_t x71 = -31;
	volatile int8_t x72 = -1;
	static int64_t t11 = 1616425136419LL;

	t11 = ((x69|x70)/(x71*x72));

	if (t11 != 5149LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = UINT16_MAX;
	static volatile uint32_t x74 = 284U;
	uint8_t x75 = 40U;

	t12 = ((x73|x74)/(x75*x76));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x81 = 1U;
	static uint64_t x83 = 123718200LLU;
	int32_t x84 = 8436314;

	t13 = ((x81|x82)/(x83*x84));

	if (t13 != 17673LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x85 = INT32_MIN;
	int32_t x86 = -61;
	int16_t x87 = INT16_MIN;
	int16_t x88 = -1;
	int32_t t14 = 1771791;

	t14 = ((x85|x86)/(x87*x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = -1;
	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = -9532;
	int64_t x92 = -176807998LL;
	int64_t t15 = 7261201860812073LL;

	t15 = ((x89|x90)/(x91*x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = INT8_MIN;
	volatile int32_t x94 = -1;
	static volatile int32_t x96 = -3589;
	int32_t t16 = -1064458495;

	t16 = ((x93|x94)/(x95*x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x97 = 6U;
	static volatile int8_t x98 = INT8_MIN;
	int64_t x99 = -126580781018LL;
	static int32_t x100 = -1;
	static volatile int64_t t17 = 3446491180790LL;

	t17 = ((x97|x98)/(x99*x100));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 15U;
	volatile int8_t x107 = 12;
	volatile int16_t x108 = INT16_MAX;
	static volatile uint32_t t18 = 1974934589U;

	t18 = ((x105|x106)/(x107*x108));

	if (t18 != 10923U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x109 = 1U;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	volatile uint64_t t19 = 144405766LLU;

	t19 = ((x109|x110)/(x111*x112));

	if (t19 != 58LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x114 = 500949;
	volatile int16_t x115 = -854;
	volatile int32_t t20 = -493;

	t20 = ((x113|x114)/(x115*x116));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = 21584966U;
	int64_t x118 = INT64_MIN;
	static uint16_t x119 = UINT16_MAX;
	static volatile int16_t x120 = INT16_MIN;

	t21 = ((x117|x118)/(x119*x120));

	if (t21 != 4295032832LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x121 = 1936067445LLU;
	volatile int64_t x122 = INT64_MIN;
	uint16_t x123 = 12774U;
	int16_t x124 = -1;
	volatile uint64_t t22 = 41LLU;

	t22 = ((x121|x122)/(x123*x124));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	int64_t x131 = 396955081037LL;
	volatile uint8_t x132 = 3U;
	int64_t t23 = -5715LL;

	t23 = ((x129|x130)/(x131*x132));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MAX;
	int64_t t24 = 7LL;

	t24 = ((x137|x138)/(x139*x140));

	if (t24 != -2147483711LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x141 = INT8_MAX;
	uint8_t x142 = UINT8_MAX;
	uint16_t x144 = 34U;
	static volatile int64_t t25 = 5LL;

	t25 = ((x141|x142)/(x143*x144));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x145 = 940;
	static volatile int64_t x146 = INT64_MAX;
	int64_t x147 = 322482570LL;
	int64_t t26 = -1703934226234955LL;

	t26 = ((x145|x146)/(x147*x148));

	if (t26 != -1021469607LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x149 = -245LL;
	int64_t x150 = INT64_MIN;
	static uint16_t x151 = 2649U;
	int32_t x152 = -1;
	volatile int64_t t27 = -21LL;

	t27 = ((x149|x150)/(x151*x152));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -1;
	static uint64_t x155 = 41692309990593619LLU;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t28 = 9LLU;

	t28 = ((x153|x154)/(x155*x156));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x157 = -1LL;
	int16_t x158 = -1;
	int8_t x159 = 36;
	static int32_t x160 = -1478604;

	t29 = ((x157|x158)/(x159*x160));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -1;
	int32_t x166 = 7349;
	int8_t x167 = INT8_MAX;
	int8_t x168 = -1;
	volatile int32_t t30 = 605996;

	t30 = ((x165|x166)/(x167*x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x170 = 0U;
	int16_t x171 = -1;
	static int8_t x172 = -27;
	int64_t t31 = -40009258LL;

	t31 = ((x169|x170)/(x171*x172));

	if (t31 != -341606371735362066LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x173 = 1U;
	int8_t x174 = INT8_MAX;
	static int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 32022364763LLU;
	uint64_t t32 = 83LLU;

	t32 = ((x173|x174)/(x175*x176));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x177 = 26U;
	volatile int32_t x179 = -1;

	t33 = ((x177|x178)/(x179*x180));

	if (t33 != -67108863) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x181 = INT32_MIN;
	int32_t x182 = -1;
	uint64_t x183 = 639912797025LLU;
	volatile int32_t x184 = INT32_MAX;
	volatile uint64_t t34 = 176947LLU;

	t34 = ((x181|x182)/(x183*x184));

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 1165U;
	uint32_t x190 = 31821746U;
	uint32_t x191 = UINT32_MAX;
	uint64_t x192 = 83LLU;
	uint64_t t35 = 173836963956259865LLU;

	t35 = ((x189|x190)/(x191*x192));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x197 = 95U;
	volatile uint32_t x199 = 196558U;
	int32_t x200 = INT32_MAX;
	static volatile uint32_t t36 = 6891680U;

	t36 = ((x197|x198)/(x199*x200));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint16_t x204 = 27541U;
	volatile int32_t t37 = 185;

	t37 = ((x201|x202)/(x203*x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x205 = INT8_MIN;
	static int8_t x206 = INT8_MAX;
	uint64_t x207 = UINT64_MAX;
	uint16_t x208 = 62U;
	uint64_t t38 = 194532193926358301LLU;

	t38 = ((x205|x206)/(x207*x208));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x211 = 33305037284LLU;
	volatile int32_t x212 = INT32_MAX;
	uint64_t t39 = 932754481LLU;

	t39 = ((x209|x210)/(x211*x212));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	static uint64_t x220 = 116923921LLU;

	t40 = ((x217|x218)/(x219*x220));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x226 = -1;
	static int16_t x227 = 12;
	uint16_t x228 = UINT16_MAX;
	int32_t t41 = 12096;

	t41 = ((x225|x226)/(x227*x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 1U;
	static uint64_t x236 = 1085645639515LLU;
	uint64_t t42 = 1471181373981LLU;

	t42 = ((x233|x234)/(x235*x236));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x238 = INT8_MIN;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = INT16_MAX;
	int32_t t43 = 95096;

	t43 = ((x237|x238)/(x239*x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 1U;

	t44 = ((x241|x242)/(x243*x244));

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 1009527167U;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t45 = 40145U;

	t45 = ((x257|x258)/(x259*x260));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x265 = INT8_MIN;
	uint32_t x266 = 71298U;
	static int8_t x267 = 3;
	int32_t x268 = -71717440;
	uint32_t t46 = 155U;

	t46 = ((x265|x266)/(x267*x268));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x269 = 39005615182885LLU;
	volatile uint32_t x270 = UINT32_MAX;
	volatile int32_t x271 = -1;
	static int64_t x272 = 115188LL;
	uint64_t t47 = 755523947LLU;

	t47 = ((x269|x270)/(x271*x272));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x275 = 838460;
	volatile int32_t t48 = -1;

	t48 = ((x273|x274)/(x275*x276));

	if (t48 != 20) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x277 = INT8_MIN;
	int32_t x278 = 72;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t49 = 17354;

	t49 = ((x277|x278)/(x279*x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x285 = -1;
	volatile uint32_t x286 = 5296U;
	volatile int16_t x287 = -7045;
	volatile int16_t x288 = -1;
	static volatile uint32_t t50 = 2432121U;

	t50 = ((x285|x286)/(x287*x288));

	if (t50 != 609647U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = -19387LL;
	int64_t x295 = INT64_MAX;
	volatile uint64_t x296 = 29235241415491LLU;
	static uint64_t t51 = 12LLU;

	t51 = ((x293|x294)/(x295*x296));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x301 = INT32_MIN;
	volatile int64_t x302 = INT64_MAX;
	int16_t x304 = -116;
	uint64_t t52 = 7576382470287995300LLU;

	t52 = ((x301|x302)/(x303*x304));

	if (t52 != 159023655807840962LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x306 = 4U;
	int16_t x307 = 7;
	volatile uint32_t t53 = 14908U;

	t53 = ((x305|x306)/(x307*x308));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x309 = 0;
	volatile uint64_t x310 = 1956022LLU;
	static volatile uint16_t x311 = 40U;
	static int16_t x312 = 4591;

	t54 = ((x309|x310)/(x311*x312));

	if (t54 != 10LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = -1;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 14U;

	t55 = ((x313|x314)/(x315*x316));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x317 = -1;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	volatile int32_t t56 = -2962833;

	t56 = ((x317|x318)/(x319*x320));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x325 = 6LLU;
	int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	volatile int16_t x328 = 1105;
	volatile uint64_t t57 = 94012010951688LLU;

	t57 = ((x325|x326)/(x327*x328));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -1;
	uint8_t x336 = 22U;
	volatile uint64_t t58 = 7814LLU;

	t58 = ((x333|x334)/(x335*x336));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x337 = 215LL;
	volatile uint64_t x338 = UINT64_MAX;
	uint32_t x340 = 1U;
	static volatile uint64_t t59 = 36LLU;

	t59 = ((x337|x338)/(x339*x340));

	if (t59 != 683212743470724133LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x341 = 119U;
	int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MAX;
	static int64_t x344 = -1LL;
	volatile int64_t t60 = -17523497LL;

	t60 = ((x341|x342)/(x343*x344));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x345 = INT16_MIN;
	volatile int32_t x346 = 22379642;
	static volatile int8_t x347 = INT8_MIN;
	volatile int8_t x348 = 10;
	volatile int32_t t61 = -37841555;

	t61 = ((x345|x346)/(x347*x348));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x349 = INT8_MAX;
	uint32_t x351 = UINT32_MAX;
	volatile uint16_t x352 = UINT16_MAX;

	t62 = ((x349|x350)/(x351*x352));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	static uint32_t x363 = 253769788U;
	int32_t x364 = -1;
	int64_t t63 = 11014975094325LL;

	t63 = ((x361|x362)/(x363*x364));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 41U;
	int32_t x366 = INT32_MAX;
	int8_t x367 = -1;
	static volatile int32_t t64 = INT32_MAX;

	t64 = ((x365|x366)/(x367*x368));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x370 = -21;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = -3;

	t65 = ((x369|x370)/(x371*x372));

	if (t65 != 1431655765LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = -14;
	uint8_t x387 = 97U;
	int16_t x388 = INT16_MIN;
	static uint64_t t66 = 13LLU;

	t66 = ((x385|x386)/(x387*x388));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x405 = -1162;
	int32_t x406 = -1;
	volatile uint64_t x407 = 104LLU;
	volatile int16_t x408 = INT16_MIN;
	static volatile uint64_t t67 = 31LLU;

	t67 = ((x405|x406)/(x407*x408));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x409 = 7914216026983178LLU;
	uint64_t x410 = 1754859169LLU;
	static int8_t x411 = 30;
	int16_t x412 = 1757;
	volatile uint64_t t68 = 59583382934LLU;

	t68 = ((x409|x410)/(x411*x412));

	if (t68 != 150146419510LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x417 = -1;
	int32_t x418 = INT32_MAX;
	int32_t x420 = INT32_MIN;

	t69 = ((x417|x418)/(x419*x420));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x421 = INT16_MIN;
	static int8_t x424 = INT8_MIN;
	volatile uint64_t t70 = 14606361646573LLU;

	t70 = ((x421|x422)/(x423*x424));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x425 = 8U;
	int16_t x426 = INT16_MIN;
	int64_t x427 = 182740476LL;
	int8_t x428 = -57;
	int64_t t71 = 58LL;

	t71 = ((x425|x426)/(x427*x428));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x433 = INT32_MIN;
	static int64_t x434 = INT64_MIN;
	int64_t x436 = -16253923468LL;

	t72 = ((x433|x434)/(x435*x436));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x445 = INT16_MAX;
	static uint8_t x446 = 63U;
	uint8_t x448 = 1U;
	static volatile int32_t t73 = 115045176;

	t73 = ((x445|x446)/(x447*x448));

	if (t73 != 321) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x450 = INT64_MAX;
	static volatile uint16_t x451 = UINT16_MAX;
	int16_t x452 = INT16_MAX;
	volatile int64_t t74 = -2899682545107LL;

	t74 = ((x449|x450)/(x451*x452));

	if (t74 != 4295163911LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x453 = -1;
	volatile int32_t x454 = -59743;
	volatile int64_t x455 = -1LL;
	int16_t x456 = -1;
	int64_t t75 = -103LL;

	t75 = ((x453|x454)/(x455*x456));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x457 = INT8_MAX;
	static int16_t x459 = -179;
	uint64_t t76 = 394220746LLU;

	t76 = ((x457|x458)/(x459*x460));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MIN;
	volatile int16_t x471 = -1;
	int32_t x472 = INT32_MAX;
	volatile int32_t t77 = -789646;

	t77 = ((x469|x470)/(x471*x472));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x477 = INT64_MAX;
	int32_t x478 = 18608;
	volatile int64_t x479 = -1LL;
	volatile int32_t x480 = -1817;
	volatile int64_t t78 = 2110502319104LL;

	t78 = ((x477|x478)/(x479*x480));

	if (t78 != 5076154120448418LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x489 = 10U;
	int8_t x491 = 1;
	int16_t x492 = -96;
	volatile int32_t t79 = -4594563;

	t79 = ((x489|x490)/(x491*x492));

	if (t79 != 1122496) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x498 = INT8_MAX;
	volatile uint16_t x499 = UINT16_MAX;
	static volatile uint32_t x500 = 3794U;
	volatile int64_t t80 = 184851LL;

	t80 = ((x497|x498)/(x499*x500));

	if (t80 != -33891LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x501 = UINT32_MAX;
	uint8_t x502 = UINT8_MAX;
	int16_t x503 = INT16_MAX;
	int16_t x504 = -9785;

	t81 = ((x501|x502)/(x503*x504));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x505 = 0U;
	int8_t x506 = INT8_MIN;
	static int16_t x508 = INT16_MAX;
	static int32_t t82 = -41679448;

	t82 = ((x505|x506)/(x507*x508));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x517 = 22246405;
	uint32_t x519 = UINT32_MAX;
	uint16_t x520 = UINT16_MAX;

	t83 = ((x517|x518)/(x519*x520));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x521 = INT16_MIN;
	uint16_t x522 = 453U;
	static int64_t x523 = -3979226928176LL;
	int64_t t84 = -709302002660LL;

	t84 = ((x521|x522)/(x523*x524));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x525 = 390U;
	int8_t x526 = -1;
	int8_t x527 = -1;
	static int16_t x528 = -1;
	static volatile int32_t t85 = -1;

	t85 = ((x525|x526)/(x527*x528));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x529 = UINT16_MAX;
	int8_t x530 = -12;
	uint32_t x531 = 3U;
	static volatile uint32_t t86 = 2490748U;

	t86 = ((x529|x530)/(x531*x532));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x533 = -8554;
	uint32_t x534 = 780U;
	int8_t x536 = INT8_MAX;

	t87 = ((x533|x534)/(x535*x536));

	if (t87 != 2415612U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x540 = -230376237;

	t88 = ((x537|x538)/(x539*x540));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x541 = UINT32_MAX;
	uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = -1LL;
	uint64_t t89 = 3134825688LLU;

	t89 = ((x541|x542)/(x543*x544));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x545 = INT32_MIN;
	volatile int8_t x547 = INT8_MAX;
	volatile int32_t t90 = -124934180;

	t90 = ((x545|x546)/(x547*x548));

	if (t90 != -66311) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x550 = 17572138U;
	uint16_t x552 = 1206U;

	t91 = ((x549|x550)/(x551*x552));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x554 = INT32_MIN;
	volatile uint8_t x555 = 1U;
	static int16_t x556 = INT16_MAX;
	int64_t t92 = 7LL;

	t92 = ((x553|x554)/(x555*x556));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x561 = -1LL;
	int32_t x562 = INT32_MAX;
	int64_t x563 = 355826469743LL;
	uint16_t x564 = UINT16_MAX;

	t93 = ((x561|x562)/(x563*x564));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x565 = INT16_MIN;
	int16_t x566 = 24;
	uint64_t x567 = 44386954LLU;
	volatile int64_t x568 = -1LL;
	volatile uint64_t t94 = 923308LLU;

	t94 = ((x565|x566)/(x567*x568));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x569 = INT16_MAX;
	int32_t x570 = INT32_MIN;
	static volatile uint32_t x571 = 1955U;

	t95 = ((x569|x570)/(x571*x572));

	if (t95 != 366157U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x573 = 0U;
	static uint8_t x574 = UINT8_MAX;
	volatile int16_t x575 = -2;
	uint32_t x576 = UINT32_MAX;
	volatile uint32_t t96 = 506U;

	t96 = ((x573|x574)/(x575*x576));

	if (t96 != 127U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x577 = UINT8_MAX;
	int64_t x578 = INT64_MIN;
	static int8_t x579 = INT8_MIN;
	int16_t x580 = INT16_MIN;
	int64_t t97 = -67208416LL;

	t97 = ((x577|x578)/(x579*x580));

	if (t97 != -2199023255551LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x581 = UINT8_MAX;
	int16_t x584 = INT16_MIN;
	static int32_t t98 = 3801;

	t98 = ((x581|x582)/(x583*x584));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x593 = INT32_MIN;
	volatile uint64_t x595 = 1068530691365LLU;
	int32_t x596 = -1;
	static volatile uint64_t t99 = 12432744155871369LLU;

	t99 = ((x593|x594)/(x595*x596));

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

