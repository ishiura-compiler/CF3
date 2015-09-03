#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t1 = 214811261LLU;
int32_t x16 = INT32_MIN;
static int32_t t2 = -4224;
int8_t x24 = 2;
volatile int32_t t3 = -1;
uint64_t t4 = 6084637884LLU;
int8_t x38 = INT8_MIN;
static uint16_t x54 = UINT16_MAX;
int64_t t6 = -286319555LL;
static volatile uint64_t t9 = 15LLU;
uint64_t x81 = 107363LLU;
uint64_t t10 = 5438969296LLU;
int64_t x93 = -9849LL;
volatile uint32_t x94 = 90006U;
int8_t x96 = INT8_MIN;
int64_t x108 = -5764LL;
volatile int8_t x110 = -2;
uint64_t t16 = 64657646236493LLU;
volatile int32_t x138 = -224;
volatile int64_t t17 = -1065347880670491LL;
int32_t x145 = INT32_MIN;
static int32_t x147 = -1;
int8_t x148 = INT8_MIN;
volatile int64_t x158 = INT64_MIN;
volatile int16_t x162 = -1;
uint16_t x165 = 53U;
int8_t x169 = -6;
static int8_t x170 = -1;
static uint16_t x181 = 1U;
int8_t x182 = -1;
int32_t x185 = INT32_MAX;
int64_t x187 = 7LL;
volatile uint64_t t28 = 95811065559493LLU;
int16_t x203 = INT16_MIN;
int64_t x205 = -1LL;
uint8_t x225 = 1U;
uint64_t x234 = 13LLU;
volatile uint64_t x235 = 40033334322765LLU;
int8_t x236 = -1;
uint32_t x259 = 10572U;
uint64_t x302 = 194156493304095339LLU;
uint16_t x309 = UINT16_MAX;
int64_t t44 = -1LL;
static uint8_t x322 = 2U;
int16_t x331 = -1;
static volatile uint64_t x335 = UINT64_MAX;
uint16_t x343 = 1829U;
uint16_t x346 = 355U;
static int64_t t51 = 64055LL;
static int8_t x349 = -26;
int16_t x352 = 223;
volatile int32_t x361 = INT32_MIN;
static uint8_t x367 = 3U;
int16_t x370 = 1058;
uint64_t x371 = UINT64_MAX;
int16_t x372 = INT16_MIN;
static int8_t x379 = -1;
uint16_t x383 = UINT16_MAX;
volatile int32_t t58 = -298156;
int8_t x418 = 27;
int64_t x422 = -1LL;
volatile int16_t x426 = 2;
uint8_t x427 = 26U;
int16_t x428 = INT16_MIN;
static volatile uint16_t x437 = 1U;
uint64_t x440 = 47256912LLU;
int32_t x448 = -122;
int8_t x460 = -1;
volatile int32_t x467 = 13859465;
int32_t t69 = -505749;
int64_t x477 = -184606736LL;
static volatile uint16_t x484 = 192U;
uint64_t x485 = UINT64_MAX;
uint64_t x486 = 8179LLU;
uint64_t t73 = 389LLU;
static int8_t x504 = INT8_MIN;
volatile uint64_t t75 = 857LLU;
static volatile int32_t t76 = 306;
volatile uint32_t t78 = 896233U;
int8_t x519 = -1;
volatile int32_t t80 = -873209799;
int16_t x526 = INT16_MIN;
int16_t x536 = INT16_MAX;
static uint16_t x560 = 558U;
volatile uint64_t x572 = 1860702LLU;
int8_t x579 = -1;
static int8_t x589 = INT8_MIN;
volatile int32_t t91 = -47;
int8_t x599 = INT8_MIN;
volatile int8_t x606 = -2;
static uint64_t x610 = 7LLU;
static int8_t x617 = INT8_MIN;
volatile uint64_t x619 = UINT64_MAX;
uint8_t x630 = 0U;
int16_t x631 = -12156;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint32_t x2 = 1684U;
	int64_t x3 = -1LL;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 11042425244LL;

	t0 = ((x1+x2)%(x3*x4));

	if (t0 != 1556LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 3478352952283838572LLU;
	static volatile uint8_t x10 = 5U;
	int64_t x11 = -3550016828692308LL;
	volatile int32_t x12 = -1;

	t1 = ((x9+x10)%(x11*x12));

	if (t1 != 2886476994069045LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 1U;
	static uint8_t x14 = 1U;
	volatile int8_t x15 = 1;

	t2 = ((x13+x14)%(x15*x16));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 15U;
	volatile int8_t x22 = -1;
	int32_t x23 = -1;

	t3 = ((x21+x22)%(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x25 = 65U;
	uint64_t x26 = 2320063134931LLU;
	volatile int16_t x27 = 1496;
	volatile int32_t x28 = -1;

	t4 = ((x25+x26)%(x27*x28));

	if (t4 != 2320063134996LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x37 = 194440902LL;
	static uint16_t x39 = 113U;
	static int8_t x40 = -1;
	int64_t t5 = 1277939503LL;

	t5 = ((x37+x38)%(x39*x40));

	if (t5 != 92LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x53 = -1;
	int64_t x55 = -1LL;
	uint16_t x56 = 286U;

	t6 = ((x53+x54)%(x55*x56));

	if (t6 != 40LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x57 = INT64_MIN;
	static uint16_t x58 = 7788U;
	static int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	int64_t t7 = 87302390857LL;

	t7 = ((x57+x58)%(x59*x60));

	if (t7 != -8596LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x69 = 20;
	int64_t x70 = INT64_MIN;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = INT8_MIN;
	volatile int64_t t8 = 29441LL;

	t8 = ((x69+x70)%(x71*x72));

	if (t8 != -108LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x77 = UINT64_MAX;
	uint8_t x78 = 4U;
	volatile uint64_t x79 = UINT64_MAX;
	static int16_t x80 = 1;

	t9 = ((x77+x78)%(x79*x80));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x82 = 5U;
	static int8_t x83 = INT8_MIN;
	int32_t x84 = -121;

	t10 = ((x81+x82)%(x83*x84));

	if (t10 != 14440LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = 0;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 60U;
	volatile uint32_t t11 = 37378218U;

	t11 = ((x85+x86)%(x87*x88));

	if (t11 != 32767U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x95 = -193;
	volatile int64_t t12 = -1160884528LL;

	t12 = ((x93+x94)%(x95*x96));

	if (t12 != 6045LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x97 = INT16_MAX;
	static int64_t x98 = INT64_MIN;
	uint32_t x99 = 49042U;
	uint16_t x100 = UINT16_MAX;
	int64_t t13 = -738272821527839LL;

	t13 = ((x97+x98)%(x99*x100));

	if (t13 != -1123925251LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x105 = INT64_MAX;
	int64_t x106 = INT64_MIN;
	int64_t x107 = 2490182LL;
	volatile int64_t t14 = -1LL;

	t14 = ((x105+x106)%(x107*x108));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x109 = 129792166U;
	static int32_t x111 = -4;
	static uint16_t x112 = 12U;
	uint32_t t15 = 28525U;

	t15 = ((x109+x110)%(x111*x112));

	if (t15 != 129792164U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x121 = 1;
	uint64_t x122 = 59416562150LLU;
	static volatile int8_t x123 = -1;
	int8_t x124 = INT8_MAX;

	t16 = ((x121+x122)%(x123*x124));

	if (t16 != 59416562151LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x137 = -1LL;
	int8_t x139 = 22;
	volatile uint16_t x140 = 15U;

	t17 = ((x137+x138)%(x139*x140));

	if (t17 != -225LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x146 = INT64_MAX;
	int64_t t18 = 2LL;

	t18 = ((x145+x146)%(x147*x148));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x153 = INT8_MIN;
	uint64_t x154 = 56643336516101985LLU;
	int8_t x155 = INT8_MIN;
	int16_t x156 = -1;
	static uint64_t t19 = 1895487789LLU;

	t19 = ((x153+x154)%(x155*x156));

	if (t19 != 97LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int16_t x159 = INT16_MAX;
	int8_t x160 = 23;
	volatile int64_t t20 = 378225086242045192LL;

	t20 = ((x157+x158)%(x159*x160));

	if (t20 != -425978LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x161 = INT32_MAX;
	static uint8_t x163 = 2U;
	int16_t x164 = -1;
	int32_t t21 = -61;

	t21 = ((x161+x162)%(x163*x164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x166 = 20171U;
	static uint32_t x167 = 532U;
	uint64_t x168 = 6LLU;
	uint64_t t22 = 18519585653850733LLU;

	t22 = ((x165+x166)%(x167*x168));

	if (t22 != 1072LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x171 = INT16_MAX;
	volatile int8_t x172 = -1;
	int32_t t23 = 411722;

	t23 = ((x169+x170)%(x171*x172));

	if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x173 = -1LL;
	volatile int16_t x174 = -1;
	int8_t x175 = -1;
	volatile int32_t x176 = -1;
	int64_t t24 = -3LL;

	t24 = ((x173+x174)%(x175*x176));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x177 = INT8_MIN;
	uint8_t x178 = UINT8_MAX;
	static int32_t x179 = -1;
	volatile int8_t x180 = 1;
	int32_t t25 = 126803404;

	t25 = ((x177+x178)%(x179*x180));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x183 = -17LL;
	static uint16_t x184 = UINT16_MAX;
	volatile int64_t t26 = -3337767617698LL;

	t26 = ((x181+x182)%(x183*x184));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x186 = -254;
	int64_t x188 = -71523254853LL;
	volatile int64_t t27 = -127655127083LL;

	t27 = ((x185+x186)%(x187*x188));

	if (t27 != 2147483393LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x197 = INT8_MIN;
	volatile int16_t x198 = INT16_MAX;
	static int32_t x199 = INT32_MIN;
	volatile uint64_t x200 = UINT64_MAX;

	t28 = ((x197+x198)%(x199*x200));

	if (t28 != 32639LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x201 = INT64_MAX;
	int8_t x202 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile int64_t t29 = -1LL;

	t29 = ((x201+x202)%(x203*x204));

	if (t29 != 4194175LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t30 = 242083580367LL;

	t30 = ((x205+x206)%(x207*x208));

	if (t30 != -32769LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x209 = -18;
	int32_t x210 = -1;
	uint16_t x211 = 5U;
	int8_t x212 = 1;
	int32_t t31 = 114818;

	t31 = ((x209+x210)%(x211*x212));

	if (t31 != -4) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x221 = 5U;
	volatile uint64_t x222 = 1863000506355784LLU;
	int64_t x223 = -1LL;
	volatile int16_t x224 = INT16_MIN;
	uint64_t t32 = 44LLU;

	t32 = ((x221+x222)%(x223*x224));

	if (t32 != 20557LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x226 = INT8_MIN;
	int64_t x227 = 91916548056LL;
	uint8_t x228 = 85U;
	int64_t t33 = -791056023013218LL;

	t33 = ((x225+x226)%(x227*x228));

	if (t33 != -127LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x233 = 888;
	volatile uint64_t t34 = 423069983LLU;

	t34 = ((x233+x234)%(x235*x236));

	if (t34 != 901LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile uint32_t x238 = 292182123U;
	int8_t x239 = INT8_MIN;
	int32_t x240 = -4055689;
	volatile uint32_t t35 = 1326U;

	t35 = ((x237+x238)%(x239*x240));

	if (t35 != 292149355U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x253 = 71U;
	int32_t x254 = 187890654;
	static int16_t x255 = 205;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t36 = -55142;

	t36 = ((x253+x254)%(x255*x256));

	if (t36 != 14375) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x257 = -1LL;
	uint16_t x258 = 0U;
	int32_t x260 = 70019933;
	volatile int64_t t37 = -1807972803519425635LL;

	t37 = ((x257+x258)%(x259*x260));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x273 = UINT32_MAX;
	uint32_t x274 = 1U;
	int16_t x275 = -1;
	static int16_t x276 = INT16_MIN;
	volatile uint32_t t38 = 582014432U;

	t38 = ((x273+x274)%(x275*x276));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x277 = -1;
	uint64_t x278 = 6784088LLU;
	volatile int8_t x279 = 1;
	int32_t x280 = -1;
	volatile uint64_t t39 = 25471LLU;

	t39 = ((x277+x278)%(x279*x280));

	if (t39 != 6784087LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x285 = 1U;
	int64_t x286 = -1LL;
	int8_t x287 = -1;
	uint16_t x288 = 53U;
	int64_t t40 = 219780292787337300LL;

	t40 = ((x285+x286)%(x287*x288));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x289 = 1907547U;
	static volatile int32_t x290 = INT32_MAX;
	int16_t x291 = -2;
	int64_t x292 = -1LL;
	static volatile int64_t t41 = 951057751242LL;

	t41 = ((x289+x290)%(x291*x292));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x301 = -1;
	uint32_t x303 = UINT32_MAX;
	volatile uint32_t x304 = 15173575U;
	volatile uint64_t t42 = 7LLU;

	t42 = ((x301+x302)%(x303*x304));

	if (t42 != 486886325LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x305 = -1;
	volatile int64_t x306 = -1LL;
	static uint8_t x307 = 8U;
	int32_t x308 = -196351;
	int64_t t43 = -288069266555LL;

	t43 = ((x305+x306)%(x307*x308));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	int64_t x312 = 57LL;

	t44 = ((x309+x310)%(x311*x312));

	if (t44 != 65790LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x313 = -1;
	int8_t x314 = 1;
	static int16_t x315 = INT16_MAX;
	int32_t x316 = -1;
	volatile int32_t t45 = -3856;

	t45 = ((x313+x314)%(x315*x316));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x321 = -1LL;
	static volatile int32_t x323 = 669200028;
	int8_t x324 = 1;
	volatile int64_t t46 = -32982237367717LL;

	t46 = ((x321+x322)%(x323*x324));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x329 = -1LL;
	int8_t x330 = -1;
	static uint64_t x332 = 5263016655707017LLU;
	uint64_t t47 = 1831903155141LLU;

	t47 = ((x329+x330)%(x331*x332));

	if (t47 != 5263016655707015LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x333 = UINT64_MAX;
	static uint16_t x334 = 49U;
	int64_t x336 = -83LL;
	static uint64_t t48 = 14962775LLU;

	t48 = ((x333+x334)%(x335*x336));

	if (t48 != 48LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x337 = -1;
	volatile int64_t x338 = -1LL;
	int64_t x339 = 23582106065956LL;
	int8_t x340 = INT8_MAX;
	int64_t t49 = 953LL;

	t49 = ((x337+x338)%(x339*x340));

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x341 = UINT16_MAX;
	int32_t x342 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	static int32_t t50 = -7031887;

	t50 = ((x341+x342)%(x343*x344));

	if (t50 != -49774593) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x347 = -83;
	static int64_t x348 = -7LL;

	t51 = ((x345+x346)%(x347*x348));

	if (t51 != 482LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x350 = -1;
	int16_t x351 = -1;
	volatile int32_t t52 = 2503;

	t52 = ((x349+x350)%(x351*x352));

	if (t52 != -27) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x362 = 0;
	uint32_t x363 = 638124U;
	int64_t x364 = 4LL;
	int64_t t53 = 484493936LL;

	t53 = ((x361+x362)%(x363*x364));

	if (t53 != -834512LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x365 = 27184U;
	static volatile int32_t x366 = -39464132;
	volatile int8_t x368 = 1;
	uint32_t t54 = 111992U;

	t54 = ((x365+x366)%(x367*x368));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x369 = 455LLU;
	volatile uint64_t t55 = 196LLU;

	t55 = ((x369+x370)%(x371*x372));

	if (t55 != 1513LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x378 = 47180348907253154LLU;
	volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t56 = 3997559174732723LLU;

	t56 = ((x377+x378)%(x379*x380));

	if (t56 != 33LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x381 = 114LLU;
	int32_t x382 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t57 = 2169786275952LLU;

	t57 = ((x381+x382)%(x383*x384));

	if (t57 != 8421361LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x393 = 666;
	int16_t x394 = -189;
	static volatile int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MAX;

	t58 = ((x393+x394)%(x395*x396));

	if (t58 != 477) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x397 = INT8_MAX;
	volatile int8_t x398 = 0;
	uint16_t x399 = 2756U;
	volatile uint32_t x400 = 976U;
	volatile uint32_t t59 = 18318947U;

	t59 = ((x397+x398)%(x399*x400));

	if (t59 != 127U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x405 = -1;
	int8_t x406 = -40;
	uint64_t x407 = UINT64_MAX;
	static int32_t x408 = INT32_MIN;
	volatile uint64_t t60 = 45002222LLU;

	t60 = ((x405+x406)%(x407*x408));

	if (t60 != 2147483607LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x413 = 6U;
	static uint32_t x414 = 27660692U;
	int8_t x415 = -1;
	uint8_t x416 = 3U;
	uint32_t t61 = 927U;

	t61 = ((x413+x414)%(x415*x416));

	if (t61 != 27660698U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x417 = 168563LL;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 1U;
	int64_t t62 = -22512687LL;

	t62 = ((x417+x418)%(x419*x420));

	if (t62 != 14LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x421 = INT64_MAX;
	static int8_t x423 = 1;
	int8_t x424 = INT8_MIN;
	volatile int64_t t63 = -1391435207LL;

	t63 = ((x421+x422)%(x423*x424));

	if (t63 != 126LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x425 = INT16_MAX;
	static volatile int32_t t64 = 204099456;

	t64 = ((x425+x426)%(x427*x428));

	if (t64 != 32769) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 8023416749299LLU;
	uint64_t t65 = 5532446504113963025LLU;

	t65 = ((x437+x438)%(x439*x440));

	if (t65 != 8219726286951679121LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x441 = 2170673608LL;
	static volatile int32_t x442 = INT32_MAX;
	uint64_t x443 = 30LLU;
	uint8_t x444 = UINT8_MAX;
	static volatile uint64_t t66 = 535159963416LLU;

	t66 = ((x441+x442)%(x443*x444));

	if (t66 != 5LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x445 = INT32_MIN;
	volatile int64_t x446 = -1LL;
	static int8_t x447 = 1;
	static int64_t t67 = -422967508238217867LL;

	t67 = ((x445+x446)%(x447*x448));

	if (t67 != -121LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x457 = -2;
	int8_t x458 = -1;
	static volatile int64_t x459 = -4262341670LL;
	int64_t t68 = 2152152423445LL;

	t68 = ((x457+x458)%(x459*x460));

	if (t68 != -3LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x465 = INT8_MAX;
	static int32_t x466 = -2;
	volatile uint8_t x468 = 7U;

	t69 = ((x465+x466)%(x467*x468));

	if (t69 != 125) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x469 = 1402852U;
	volatile uint32_t x470 = 167U;
	int8_t x471 = INT8_MAX;
	static int16_t x472 = -1;
	volatile uint32_t t70 = 7155U;

	t70 = ((x469+x470)%(x471*x472));

	if (t70 != 1403019U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x478 = -1;
	int8_t x479 = -1;
	int32_t x480 = INT32_MAX;
	int64_t t71 = 14023899614LL;

	t71 = ((x477+x478)%(x479*x480));

	if (t71 != -184606737LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x481 = 14LLU;
	static uint16_t x482 = 20U;
	volatile int8_t x483 = 11;
	volatile uint64_t t72 = 2341963127682LLU;

	t72 = ((x481+x482)%(x483*x484));

	if (t72 != 34LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x487 = UINT32_MAX;
	uint64_t x488 = UINT64_MAX;

	t73 = ((x485+x486)%(x487*x488));

	if (t73 != 8178LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x497 = -1;
	int16_t x498 = -111;
	int32_t x499 = INT32_MAX;
	volatile int64_t x500 = -1LL;
	volatile int64_t t74 = 2858798526358313293LL;

	t74 = ((x497+x498)%(x499*x500));

	if (t74 != -112LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x501 = UINT64_MAX;
	uint32_t x502 = 149180533U;
	volatile int16_t x503 = INT16_MIN;

	t75 = ((x501+x502)%(x503*x504));

	if (t75 != 2379892LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x505 = INT8_MAX;
	int8_t x506 = -1;
	static int32_t x507 = -364119;
	volatile int8_t x508 = INT8_MIN;

	t76 = ((x505+x506)%(x507*x508));

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x509 = INT32_MAX;
	static int32_t x510 = -1;
	uint16_t x511 = UINT16_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t77 = -77;

	t77 = ((x509+x510)%(x511*x512));

	if (t77 != 8421246) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x513 = INT16_MAX;
	int32_t x514 = -1287814;
	static uint32_t x515 = UINT32_MAX;
	int32_t x516 = -1;

	t78 = ((x513+x514)%(x515*x516));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x517 = 358;
	static int64_t x518 = INT64_MIN;
	volatile int64_t x520 = 20947651121235416LL;
	volatile int64_t t79 = 280774170456450652LL;

	t79 = ((x517+x518)%(x519*x520));

	if (t79 != -6405543511192410LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x521 = 16020;
	volatile uint8_t x522 = 1U;
	uint8_t x523 = 5U;
	int32_t x524 = -66;

	t80 = ((x521+x522)%(x523*x524));

	if (t80 != 181) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x525 = INT16_MIN;
	static int16_t x527 = -1;
	int16_t x528 = INT16_MAX;
	volatile int32_t t81 = 11279068;

	t81 = ((x525+x526)%(x527*x528));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x529 = -36;
	static int8_t x530 = -55;
	static int32_t x531 = -1;
	uint32_t x532 = 10U;
	static uint32_t t82 = 2U;

	t82 = ((x529+x530)%(x531*x532));

	if (t82 != 4294967205U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x533 = 101113U;
	volatile uint64_t x534 = UINT64_MAX;
	int8_t x535 = INT8_MAX;
	uint64_t t83 = 1048377165875LLU;

	t83 = ((x533+x534)%(x535*x536));

	if (t83 != 101112LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x537 = 47988400;
	int8_t x538 = INT8_MIN;
	int32_t x539 = 15794;
	uint64_t x540 = 8009855LLU;
	static uint64_t t84 = 128463941141742203LLU;

	t84 = ((x537+x538)%(x539*x540));

	if (t84 != 47988272LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x545 = UINT16_MAX;
	uint8_t x546 = 3U;
	static int16_t x547 = -5;
	int32_t x548 = -28445;
	int32_t t85 = -70296460;

	t85 = ((x545+x546)%(x547*x548));

	if (t85 != 65538) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x553 = -1;
	static uint8_t x554 = 60U;
	uint64_t x555 = 64169366LLU;
	int16_t x556 = INT16_MIN;
	uint64_t t86 = 1LLU;

	t86 = ((x553+x554)%(x555*x556));

	if (t86 != 59LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x557 = INT8_MAX;
	int8_t x558 = INT8_MIN;
	uint32_t x559 = UINT32_MAX;
	uint32_t t87 = 14702935U;

	t87 = ((x557+x558)%(x559*x560));

	if (t87 != 557U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x561 = INT8_MAX;
	uint16_t x562 = UINT16_MAX;
	static int8_t x563 = 11;
	int8_t x564 = INT8_MAX;
	int32_t t88 = -14;

	t88 = ((x561+x562)%(x563*x564));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x569 = 753;
	static int16_t x570 = INT16_MAX;
	int64_t x571 = -446409055LL;
	volatile uint64_t t89 = 3142734611606LLU;

	t89 = ((x569+x570)%(x571*x572));

	if (t89 != 33520LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x577 = UINT16_MAX;
	int32_t x578 = INT32_MIN;
	int8_t x580 = INT8_MAX;
	int32_t t90 = 2001;

	t90 = ((x577+x578)%(x579*x580));

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x590 = 123;
	volatile int16_t x591 = -1;
	int8_t x592 = 14;

	t91 = ((x589+x590)%(x591*x592));

	if (t91 != -5) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x593 = -1LL;
	int64_t x594 = 1890247244279781LL;
	int16_t x595 = 1;
	int64_t x596 = -1LL;
	static volatile int64_t t92 = -12607162189LL;

	t92 = ((x593+x594)%(x595*x596));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x597 = 31U;
	uint16_t x598 = 5U;
	static int8_t x600 = -1;
	static volatile int32_t t93 = 25;

	t93 = ((x597+x598)%(x599*x600));

	if (t93 != 36) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x601 = -1;
	static int8_t x602 = INT8_MAX;
	uint32_t x603 = 60938U;
	int32_t x604 = -55830351;
	static uint32_t t94 = 1608124U;

	t94 = ((x601+x602)%(x603*x604));

	if (t94 != 126U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x605 = INT16_MIN;
	int16_t x607 = 61;
	volatile uint8_t x608 = 80U;
	static int32_t t95 = 1571057;

	t95 = ((x605+x606)%(x607*x608));

	if (t95 != -3490) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x609 = UINT16_MAX;
	uint16_t x611 = 1U;
	static volatile uint16_t x612 = 49U;
	volatile uint64_t t96 = 9585LLU;

	t96 = ((x609+x610)%(x611*x612));

	if (t96 != 29LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x618 = 0U;
	int8_t x620 = INT8_MIN;
	static uint64_t t97 = 959070LLU;

	t97 = ((x617+x618)%(x619*x620));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x621 = 508013173U;
	static int64_t x622 = -1LL;
	volatile int16_t x623 = INT16_MIN;
	uint8_t x624 = UINT8_MAX;
	static volatile int64_t t98 = 4282963115457651LL;

	t98 = ((x621+x622)%(x623*x624));

	if (t98 != 6662772LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x629 = INT8_MAX;
	static int16_t x632 = INT16_MIN;
	int32_t t99 = 12125420;

	t99 = ((x629+x630)%(x631*x632));

	if (t99 != 127) { NG(); } else { ; }
	
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

