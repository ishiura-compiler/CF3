#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -13;
int16_t x3 = 1;
static int16_t x6 = -20;
int64_t x7 = -1LL;
int32_t t2 = 9283;
uint8_t x13 = 19U;
uint32_t x16 = 1852U;
volatile int32_t t4 = -35773;
volatile int8_t x26 = 8;
volatile int16_t x27 = -389;
volatile int32_t t6 = -8206071;
int8_t x38 = -1;
static int64_t x45 = INT64_MIN;
uint16_t x50 = 7U;
uint16_t x51 = 0U;
int8_t x54 = -26;
int16_t x57 = INT16_MIN;
static uint8_t x79 = 1U;
int16_t x81 = INT16_MIN;
int8_t x82 = 0;
static int64_t x96 = INT64_MIN;
volatile uint32_t x108 = 1130027U;
int16_t x110 = INT16_MAX;
volatile int32_t t21 = 40497275;
uint8_t x128 = 0U;
static uint32_t x131 = 21U;
static volatile int32_t t23 = -25;
int64_t x151 = INT64_MIN;
static volatile int32_t t25 = -9450;
uint16_t x177 = 22U;
int8_t x178 = INT8_MIN;
static int32_t x179 = -1;
int32_t x181 = 15893;
volatile int32_t x183 = -7260677;
int64_t x184 = -146LL;
int64_t x193 = 11LL;
volatile int8_t x194 = INT8_MIN;
volatile int32_t t32 = -346217979;
static int16_t x198 = -1;
volatile int32_t x204 = -407078507;
static int8_t x206 = INT8_MAX;
static int16_t x207 = -1;
volatile int32_t t35 = -206;
volatile int32_t t36 = 284547236;
volatile int16_t x214 = INT16_MAX;
int8_t x216 = -1;
static volatile int64_t x224 = 16047399937971LL;
int64_t x226 = -1LL;
static uint16_t x230 = 1223U;
uint32_t x231 = UINT32_MAX;
static volatile int8_t x238 = 0;
int8_t x255 = INT8_MAX;
int32_t t45 = 1;
static uint32_t x261 = 5654893U;
volatile int16_t x263 = INT16_MIN;
int32_t x265 = 0;
static volatile uint16_t x267 = 121U;
int32_t t48 = 94321114;
int32_t x273 = -8;
volatile int16_t x275 = -1;
int16_t x276 = -1;
int32_t t50 = -2084167;
volatile uint8_t x278 = UINT8_MAX;
uint32_t x279 = 7U;
volatile int16_t x281 = 1;
int16_t x284 = INT16_MAX;
static int8_t x287 = -1;
static int32_t x289 = -125;
uint64_t x298 = 79762417LLU;
int8_t x301 = -1;
volatile int32_t t57 = 925032;
static uint8_t x312 = 122U;
int8_t x318 = INT8_MIN;
int64_t x323 = -1LL;
int8_t x324 = 20;
int64_t x331 = INT64_MIN;
static uint32_t x333 = UINT32_MAX;
volatile uint32_t x338 = 5U;
uint16_t x339 = 2U;
volatile int64_t x348 = INT64_MIN;
int32_t t67 = -670449;
static uint32_t x355 = 795343U;
static int8_t x359 = -1;
int64_t x360 = 1722LL;
int64_t x377 = 613905629361784LL;
int8_t x378 = 21;
uint64_t x383 = UINT64_MAX;
uint32_t x392 = UINT32_MAX;
uint32_t x396 = 30315U;
uint8_t x398 = UINT8_MAX;
uint8_t x399 = UINT8_MAX;
volatile int16_t x406 = INT16_MIN;
int32_t x407 = 1;
volatile int32_t x417 = INT32_MAX;
uint64_t x418 = 315786235LLU;
volatile int32_t t82 = -13604;
int16_t x423 = 1;
int64_t x429 = 2598956510118009LL;
int32_t x432 = INT32_MAX;
volatile int32_t t87 = -35;
uint64_t x445 = UINT64_MAX;
int32_t t89 = -1;
int64_t x452 = INT64_MIN;
int64_t x453 = INT64_MAX;
int8_t x472 = INT8_MIN;
uint64_t x473 = UINT64_MAX;
int32_t t95 = -2217;
uint64_t x478 = UINT64_MAX;
uint16_t x479 = 6558U;
volatile int32_t t96 = 14;
int16_t x496 = -1;


void f0(void) {
	volatile uint16_t x2 = 7826U;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -138;

	t0 = (x1<=((x2*x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -12463320308473LL;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -2994;

	t1 = (x5<=((x6*x7)&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int8_t x10 = -2;
	static volatile uint32_t x11 = 1U;
	int16_t x12 = INT16_MIN;

	t2 = (x9<=((x10*x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int8_t x15 = 0;
	int32_t t3 = -24235;

	t3 = (x13<=((x14*x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 21U;
	volatile int32_t x18 = -10539;
	int16_t x19 = -1;
	static uint8_t x20 = 14U;

	t4 = (x17<=((x18*x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 3U;
	static int32_t x24 = -1;
	int32_t t5 = -1936395;

	t5 = (x21<=((x22*x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 7338;
	int64_t x28 = INT64_MIN;

	t6 = (x25<=((x26*x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 49U;
	uint16_t x30 = 751U;
	uint16_t x31 = 11561U;
	volatile int64_t x32 = 2378501526199491LL;
	int32_t t7 = 0;

	t7 = (x29<=((x30*x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint32_t x34 = 4633U;
	uint32_t x35 = 6700U;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -63394;

	t8 = (x33<=((x34*x35)&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 1U;
	int64_t x39 = -1154LL;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 0;

	t9 = (x37<=((x38*x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 7;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -523;

	t10 = (x45<=((x46*x47)&x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int32_t x52 = 253134043;
	static volatile int32_t t11 = 600715431;

	t11 = (x49<=((x50*x51)&x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MAX;
	static int16_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -911;

	t12 = (x53<=((x54*x55)&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x58 = 4267455U;
	uint32_t x59 = 44U;
	volatile uint8_t x60 = 3U;
	static volatile int32_t t13 = -2480;

	t13 = (x57<=((x58*x59)&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 1598LLU;
	uint64_t x66 = 29609LLU;
	static uint16_t x67 = 197U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 61;

	t14 = (x65<=((x66*x67)&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int16_t x70 = -1;
	static volatile int16_t x71 = INT16_MAX;
	static int16_t x72 = INT16_MIN;
	volatile int32_t t15 = 3541;

	t15 = (x69<=((x70*x71)&x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x77 = 6608U;
	uint8_t x78 = 66U;
	volatile uint8_t x80 = 19U;
	volatile int32_t t16 = 14727815;

	t16 = (x77<=((x78*x79)&x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x83 = -1;
	static uint16_t x84 = 141U;
	int32_t t17 = 350562792;

	t17 = (x81<=((x82*x83)&x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -2;
	int8_t x94 = INT8_MAX;
	static int16_t x95 = INT16_MIN;
	int32_t t18 = -862;

	t18 = (x93<=((x94*x95)&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -1;
	uint64_t x98 = 2LLU;
	volatile int64_t x99 = INT64_MIN;
	static uint32_t x100 = 6658U;
	volatile int32_t t19 = 30;

	t19 = (x97<=((x98*x99)&x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x105 = INT64_MIN;
	int16_t x106 = -1;
	uint8_t x107 = 40U;
	int32_t t20 = 1213072;

	t20 = (x105<=((x106*x107)&x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x109 = INT16_MIN;
	int64_t x111 = -8543938406LL;
	uint8_t x112 = 2U;

	t21 = (x109<=((x110*x111)&x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int32_t t22 = -96239;

	t22 = (x125<=((x126*x127)&x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	static int16_t x132 = INT16_MAX;

	t23 = (x129<=((x130*x131)&x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 21646LLU;
	uint8_t x139 = UINT8_MAX;
	static int8_t x140 = 3;
	int32_t t24 = 9072088;

	t24 = (x137<=((x138*x139)&x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x149 = INT64_MAX;
	uint64_t x150 = 366049667LLU;
	volatile int16_t x152 = 822;

	t25 = (x149<=((x150*x151)&x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = 2;
	int8_t x154 = -1;
	int16_t x155 = 0;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t26 = 196824452;

	t26 = (x153<=((x154*x155)&x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x165 = INT16_MIN;
	static uint8_t x166 = 1U;
	volatile uint8_t x167 = 5U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t27 = -1;

	t27 = (x165<=((x166*x167)&x168));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x169 = INT8_MAX;
	int64_t x170 = 11321333317LL;
	int32_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	int32_t t28 = -17687798;

	t28 = (x169<=((x170*x171)&x172));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x173 = -1;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = 4U;
	int32_t x176 = INT32_MAX;
	static int32_t t29 = -9;

	t29 = (x173<=((x174*x175)&x176));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x180 = -149;
	int32_t t30 = 37236066;

	t30 = (x177<=((x178*x179)&x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x182 = INT8_MAX;
	volatile int32_t t31 = -20;

	t31 = (x181<=((x182*x183)&x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x195 = 11;
	volatile int8_t x196 = -1;

	t32 = (x193<=((x194*x195)&x196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = INT16_MIN;
	volatile uint16_t x199 = 4U;
	uint8_t x200 = 9U;
	volatile int32_t t33 = 22894617;

	t33 = (x197<=((x198*x199)&x200));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x201 = -1374;
	uint16_t x202 = 2362U;
	uint32_t x203 = 1136759402U;
	int32_t t34 = -159601873;

	t34 = (x201<=((x202*x203)&x204));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x205 = 7388226979872119LLU;
	int32_t x208 = 68;

	t35 = (x205<=((x206*x207)&x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x209 = 130U;
	uint32_t x210 = UINT32_MAX;
	int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MAX;

	t36 = (x209<=((x210*x211)&x212));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x213 = -24;
	int64_t x215 = 2393681104LL;
	volatile int32_t t37 = 4;

	t37 = (x213<=((x214*x215)&x216));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x217 = INT64_MAX;
	static int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MAX;
	volatile int32_t t38 = 7593389;

	t38 = (x217<=((x218*x219)&x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x221 = 19U;
	volatile int32_t x222 = -1;
	int32_t x223 = INT32_MAX;
	volatile int32_t t39 = 25929128;

	t39 = (x221<=((x222*x223)&x224));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = -1;
	uint32_t x227 = UINT32_MAX;
	static int8_t x228 = -1;
	volatile int32_t t40 = 1005860989;

	t40 = (x225<=((x226*x227)&x228));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x229 = 0U;
	volatile uint8_t x232 = 1U;
	static volatile int32_t t41 = -112025;

	t41 = (x229<=((x230*x231)&x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 0U;
	uint8_t x235 = 0U;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t42 = 767574785;

	t42 = (x233<=((x234*x235)&x236));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t43 = 1;

	t43 = (x237<=((x238*x239)&x240));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = 2U;
	uint64_t x247 = 0LLU;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t44 = -508;

	t44 = (x245<=((x246*x247)&x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x253 = 11U;
	static volatile uint32_t x254 = UINT32_MAX;
	int64_t x256 = INT64_MIN;

	t45 = (x253<=((x254*x255)&x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = 10270885LL;
	static uint64_t x258 = 5819154653715168LLU;
	static int16_t x259 = INT16_MIN;
	static int32_t x260 = INT32_MAX;
	int32_t t46 = 22696;

	t46 = (x257<=((x258*x259)&x260));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x262 = UINT16_MAX;
	volatile int8_t x264 = INT8_MAX;
	int32_t t47 = 11;

	t47 = (x261<=((x262*x263)&x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x266 = 1;
	volatile uint32_t x268 = 2U;

	t48 = (x265<=((x266*x267)&x268));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = 2542439874799LL;
	int8_t x270 = -1;
	int64_t x271 = 1LL;
	int32_t x272 = 30;
	static volatile int32_t t49 = 35813;

	t49 = (x269<=((x270*x271)&x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x274 = 93308903718542846LLU;

	t50 = (x273<=((x274*x275)&x276));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = 8;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t51 = -1;

	t51 = (x277<=((x278*x279)&x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x282 = INT16_MAX;
	volatile int8_t x283 = 26;
	static int32_t t52 = -44745313;

	t52 = (x281<=((x282*x283)&x284));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x285 = INT32_MIN;
	static int64_t x286 = 212992677186468494LL;
	int32_t x288 = 2;
	volatile int32_t t53 = 0;

	t53 = (x285<=((x286*x287)&x288));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x290 = INT32_MIN;
	int64_t x291 = -2887LL;
	uint64_t x292 = 124959454LLU;
	int32_t t54 = -488;

	t54 = (x289<=((x290*x291)&x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x293 = 39U;
	static uint16_t x294 = UINT16_MAX;
	static int32_t x295 = 43;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t55 = -130642;

	t55 = (x293<=((x294*x295)&x296));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x297 = 7656U;
	uint16_t x299 = 30U;
	int64_t x300 = INT64_MIN;
	int32_t t56 = -44;

	t56 = (x297<=((x298*x299)&x300));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x302 = INT16_MIN;
	int64_t x303 = -1LL;
	int8_t x304 = -2;

	t57 = (x301<=((x302*x303)&x304));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = INT32_MAX;
	uint64_t x307 = 184077LLU;
	int16_t x308 = -30;
	int32_t t58 = 24018;

	t58 = (x305<=((x306*x307)&x308));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x309 = INT16_MAX;
	static uint32_t x310 = 3674802U;
	volatile int16_t x311 = -11;
	volatile int32_t t59 = -6930667;

	t59 = (x309<=((x310*x311)&x312));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x313 = 354973U;
	int8_t x314 = INT8_MAX;
	int64_t x315 = 10047925085LL;
	volatile uint64_t x316 = 6229162LLU;
	int32_t t60 = 1;

	t60 = (x313<=((x314*x315)&x316));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x317 = 3220462790814996LLU;
	int8_t x319 = INT8_MIN;
	volatile int8_t x320 = 13;
	volatile int32_t t61 = 50;

	t61 = (x317<=((x318*x319)&x320));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x321 = -1;
	int64_t x322 = -1LL;
	int32_t t62 = 434;

	t62 = (x321<=((x322*x323)&x324));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x329 = INT64_MAX;
	static volatile int8_t x330 = 0;
	uint8_t x332 = 32U;
	volatile int32_t t63 = 8407758;

	t63 = (x329<=((x330*x331)&x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x334 = 15U;
	int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t64 = 126132;

	t64 = (x333<=((x334*x335)&x336));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = -7;
	int8_t x340 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (x337<=((x338*x339)&x340));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x345 = 53;
	uint16_t x346 = 1265U;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t66 = -370861904;

	t66 = (x345<=((x346*x347)&x348));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x349 = INT8_MAX;
	static uint32_t x350 = 688U;
	volatile uint32_t x351 = 21U;
	volatile int64_t x352 = INT64_MIN;

	t67 = (x349<=((x350*x351)&x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = -716;
	static uint16_t x354 = UINT16_MAX;
	uint8_t x356 = 102U;
	int32_t t68 = -44;

	t68 = (x353<=((x354*x355)&x356));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x357 = -1;
	int8_t x358 = -1;
	int32_t t69 = 123765;

	t69 = (x357<=((x358*x359)&x360));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x361 = 160209356750531LLU;
	static int16_t x362 = 5;
	uint64_t x363 = 4610209125013LLU;
	int8_t x364 = 22;
	volatile int32_t t70 = 2961;

	t70 = (x361<=((x362*x363)&x364));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x365 = -1;
	static int16_t x366 = 9;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	volatile int32_t t71 = 12475;

	t71 = (x365<=((x366*x367)&x368));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x369 = -1;
	int16_t x370 = 1;
	static uint64_t x371 = 76LLU;
	volatile int64_t x372 = INT64_MAX;
	volatile int32_t t72 = 328041;

	t72 = (x369<=((x370*x371)&x372));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x379 = UINT8_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t73 = -1765;

	t73 = (x377<=((x378*x379)&x380));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x381 = -1;
	uint32_t x382 = 11393U;
	uint8_t x384 = UINT8_MAX;
	int32_t t74 = 161876;

	t74 = (x381<=((x382*x383)&x384));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = -15;
	static volatile int16_t x386 = INT16_MAX;
	uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MAX;
	volatile int32_t t75 = 3031;

	t75 = (x385<=((x386*x387)&x388));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = -470;
	uint8_t x391 = 41U;
	int32_t t76 = 2256907;

	t76 = (x389<=((x390*x391)&x392));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x393 = -1LL;
	static int32_t x394 = -1;
	volatile uint16_t x395 = 268U;
	volatile int32_t t77 = 48;

	t77 = (x393<=((x394*x395)&x396));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x397 = 0;
	uint32_t x400 = UINT32_MAX;
	static int32_t t78 = -882600;

	t78 = (x397<=((x398*x399)&x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x401 = -1LL;
	static uint16_t x402 = 1U;
	static uint8_t x403 = 1U;
	int16_t x404 = INT16_MIN;
	static int32_t t79 = 14;

	t79 = (x401<=((x402*x403)&x404));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x408 = -1LL;
	volatile int32_t t80 = 3;

	t80 = (x405<=((x406*x407)&x408));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x413 = 1;
	volatile int8_t x414 = INT8_MIN;
	int16_t x415 = -1;
	int16_t x416 = -1;
	volatile int32_t t81 = 41131;

	t81 = (x413<=((x414*x415)&x416));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x419 = 1193437;
	int32_t x420 = -1;

	t82 = (x417<=((x418*x419)&x420));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x421 = INT64_MIN;
	volatile uint16_t x422 = 675U;
	uint32_t x424 = 47934629U;
	volatile int32_t t83 = -665857796;

	t83 = (x421<=((x422*x423)&x424));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MIN;
	volatile int16_t x427 = INT16_MIN;
	int8_t x428 = -39;
	int32_t t84 = -3770465;

	t84 = (x425<=((x426*x427)&x428));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x430 = 4342LLU;
	int16_t x431 = INT16_MAX;
	volatile int32_t t85 = -1;

	t85 = (x429<=((x430*x431)&x432));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = UINT32_MAX;
	volatile int16_t x435 = INT16_MAX;
	volatile int8_t x436 = -2;
	int32_t t86 = -288816809;

	t86 = (x433<=((x434*x435)&x436));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x437 = 7;
	int64_t x438 = 202LL;
	uint16_t x439 = 3U;
	int8_t x440 = INT8_MAX;

	t87 = (x437<=((x438*x439)&x440));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = UINT32_MAX;
	uint32_t x444 = 706U;
	static volatile int32_t t88 = 32275465;

	t88 = (x441<=((x442*x443)&x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x446 = INT8_MIN;
	int16_t x447 = 13158;
	volatile int64_t x448 = INT64_MAX;

	t89 = (x445<=((x446*x447)&x448));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x449 = 27442420727620LLU;
	int32_t x450 = 61;
	int8_t x451 = INT8_MIN;
	int32_t t90 = 82739;

	t90 = (x449<=((x450*x451)&x452));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x454 = INT64_MAX;
	volatile uint64_t x455 = 80063551724LLU;
	int16_t x456 = 1022;
	static int32_t t91 = 3024800;

	t91 = (x453<=((x454*x455)&x456));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x457 = INT64_MAX;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	int64_t x460 = 2299775692358549764LL;
	static int32_t t92 = -1844304;

	t92 = (x457<=((x458*x459)&x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = INT64_MIN;
	uint16_t x462 = 160U;
	int16_t x463 = -11748;
	uint8_t x464 = 1U;
	int32_t t93 = -43728790;

	t93 = (x461<=((x462*x463)&x464));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x469 = 102;
	uint16_t x470 = 4U;
	static int8_t x471 = -1;
	volatile int32_t t94 = 30397523;

	t94 = (x469<=((x470*x471)&x472));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x474 = 0U;
	static int8_t x475 = INT8_MIN;
	int64_t x476 = 1858991LL;

	t95 = (x473<=((x474*x475)&x476));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x477 = INT32_MIN;
	int8_t x480 = INT8_MIN;

	t96 = (x477<=((x478*x479)&x480));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x485 = INT8_MAX;
	int8_t x486 = 4;
	volatile int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MIN;
	volatile int32_t t97 = -5;

	t97 = (x485<=((x486*x487)&x488));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x489 = 50U;
	volatile int32_t x490 = -80;
	uint64_t x491 = UINT64_MAX;
	int16_t x492 = -1;
	int32_t t98 = -98;

	t98 = (x489<=((x490*x491)&x492));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x493 = INT64_MIN;
	uint32_t x494 = UINT32_MAX;
	uint8_t x495 = 0U;
	int32_t t99 = 173014439;

	t99 = (x493<=((x494*x495)&x496));

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

