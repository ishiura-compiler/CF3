#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 0;
uint8_t x3 = UINT8_MAX;
uint32_t x6 = UINT32_MAX;
volatile int16_t x22 = -2;
static int16_t x26 = -1;
uint64_t x35 = 38LLU;
int16_t x44 = -1;
volatile int64_t t9 = -1LL;
volatile int32_t t10 = 235729110;
int64_t x70 = INT64_MIN;
int32_t x72 = INT32_MIN;
int8_t x73 = INT8_MIN;
volatile int8_t x74 = INT8_MIN;
int32_t x76 = INT32_MIN;
static uint64_t t16 = 183353697LLU;
uint64_t x90 = 60010808837371LLU;
uint32_t x100 = 250364218U;
int16_t x118 = INT16_MAX;
static uint32_t t23 = 33280U;
int8_t x130 = -1;
static int32_t t26 = -7772962;
int16_t x141 = INT16_MIN;
int8_t x143 = 52;
int8_t x169 = 13;
uint8_t x170 = 8U;
int64_t x171 = INT64_MIN;
int64_t x181 = 14865415394796LL;
int32_t x182 = -1;
static int32_t x183 = -91;
static int8_t x186 = -48;
uint32_t x192 = UINT32_MAX;
uint16_t x203 = 3119U;
static volatile uint32_t x204 = UINT32_MAX;
uint64_t x206 = 5873LLU;
int64_t t45 = -31LL;
uint32_t x241 = UINT32_MAX;
volatile uint32_t t46 = 283U;
static volatile int16_t x245 = INT16_MAX;
volatile int64_t t47 = -29LL;
int64_t x253 = INT64_MAX;
uint32_t x258 = 334U;
int64_t x266 = -1LL;
static int64_t t52 = -6121455790555465LL;
volatile uint16_t x272 = 1U;
static int64_t t54 = -1LL;
uint64_t t55 = 1209LLU;
uint8_t x281 = 101U;
uint8_t x282 = 83U;
uint16_t x283 = 0U;
static uint8_t x284 = 67U;
uint16_t x293 = 4287U;
static int64_t t60 = 23872LL;
uint16_t x304 = 522U;
volatile int64_t x308 = 29209242201230LL;
int64_t x318 = INT64_MIN;
int8_t x331 = -1;
static uint32_t x332 = 61484205U;
volatile int32_t t65 = 1;
int32_t x337 = 4006;
volatile int32_t x338 = INT32_MAX;
static int64_t x342 = 713276401LL;
uint32_t x343 = UINT32_MAX;
uint64_t x357 = 489940LLU;
static volatile int8_t x360 = INT8_MIN;
int32_t x368 = INT32_MIN;
static int16_t x389 = INT16_MIN;
int32_t x392 = INT32_MIN;
volatile uint64_t t74 = 316347081000504730LLU;
volatile int32_t t76 = -778592158;
static volatile uint32_t x422 = UINT32_MAX;
volatile int16_t x423 = -1;
volatile int16_t x431 = INT16_MIN;
int64_t x436 = INT64_MAX;
volatile uint32_t t84 = 773919U;
int32_t x448 = INT32_MAX;
uint16_t x452 = UINT16_MAX;
int8_t x453 = INT8_MAX;
int64_t x456 = INT64_MAX;
volatile uint8_t x459 = 88U;
volatile int32_t x461 = -1;
volatile uint64_t t89 = 7610398LLU;
int8_t x466 = -1;
uint32_t x467 = 705452U;
static int16_t x476 = INT16_MIN;
static int32_t x477 = INT32_MIN;
uint16_t x482 = UINT16_MAX;
int64_t x483 = -206LL;
int32_t t94 = 421;
volatile int32_t t96 = 86;
volatile int64_t x494 = -3LL;
uint32_t x503 = 2763528U;
static uint32_t t98 = 680U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint64_t x4 = 8773840LLU;
	static volatile int64_t t0 = -1915373664LL;

	t0 = ((x1%x2)>>(x3<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	volatile int32_t x8 = INT32_MAX;
	volatile uint32_t t1 = 3U;

	t1 = ((x5%x6)>>(x7<x8));

	if (t1 != 1073741824U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	uint32_t x14 = 360933012U;
	uint8_t x15 = 6U;
	int8_t x16 = -1;
	static volatile uint32_t t2 = 39265104U;

	t2 = ((x13%x14)>>(x15<x16));

	if (t2 != 324704163U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MIN;
	static int64_t x19 = INT64_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t3 = 53410;

	t3 = ((x17%x18)>>(x19<x20));

	if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	int16_t x23 = 3;
	uint32_t x24 = 294549762U;
	int32_t t4 = -123029417;

	t4 = ((x21%x22)>>(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 18981749U;
	static int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	uint32_t t5 = 80U;

	t5 = ((x25%x26)>>(x27<x28));

	if (t5 != 18981749U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MIN;
	static uint64_t x32 = 1889027424738628LLU;
	int64_t t6 = 179995LL;

	t6 = ((x29%x30)>>(x31<x32));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 395U;
	static int8_t x34 = 9;
	uint32_t x36 = UINT32_MAX;
	static volatile uint32_t t7 = 247U;

	t7 = ((x33%x34)>>(x35<x36));

	if (t7 != 4U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 25019038246831335LLU;
	int32_t x38 = -1;
	int8_t x39 = -1;
	uint8_t x40 = 3U;
	static uint64_t t8 = 21712LLU;

	t8 = ((x37%x38)>>(x39<x40));

	if (t8 != 12509519123415667LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	volatile int64_t x43 = -1LL;

	t9 = ((x41%x42)>>(x43<x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 778;
	static int16_t x46 = 5337;
	uint16_t x47 = UINT16_MAX;
	static volatile uint32_t x48 = UINT32_MAX;

	t10 = ((x45%x46)>>(x47<x48));

	if (t10 != 389) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = 1376;
	int8_t x58 = -1;
	static volatile int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t11 = -2245;

	t11 = ((x57%x58)>>(x59<x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = 88LL;
	static uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MAX;
	int16_t x68 = 1;
	uint64_t t12 = 31525LLU;

	t12 = ((x65%x66)>>(x67<x68));

	if (t12 != 88LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x69 = INT64_MIN;
	static int32_t x71 = INT32_MIN;
	volatile int64_t t13 = 49416652587LL;

	t13 = ((x69%x70)>>(x71<x72));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x75 = 38249101LL;
	int32_t t14 = -31;

	t14 = ((x73%x74)>>(x75<x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	volatile uint8_t x78 = 1U;
	int16_t x79 = 13013;
	volatile uint32_t x80 = UINT32_MAX;
	int32_t t15 = -122391977;

	t15 = ((x77%x78)>>(x79<x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = 98LLU;
	static volatile int8_t x82 = -22;
	int32_t x83 = -27;
	volatile int16_t x84 = INT16_MIN;

	t16 = ((x81%x82)>>(x83<x84));

	if (t16 != 98LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = 49;
	int16_t x86 = -1;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = 16255;

	t17 = ((x85%x86)>>(x87<x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x89 = INT16_MIN;
	int16_t x91 = -6504;
	int16_t x92 = INT16_MAX;
	uint64_t t18 = 196026067157LLU;

	t18 = ((x89%x90)>>(x91<x92));

	if (t18 != 10772595023579LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 41164474022049LL;
	int8_t x98 = -1;
	int8_t x99 = -1;
	static int64_t t19 = 2600LL;

	t19 = ((x97%x98)>>(x99<x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x105 = 3849LL;
	uint64_t x106 = UINT64_MAX;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	uint64_t t20 = 2510450LLU;

	t20 = ((x105%x106)>>(x107<x108));

	if (t20 != 3849LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = 1;
	int64_t x110 = INT64_MAX;
	static int8_t x111 = 0;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t21 = -176251633973154LL;

	t21 = ((x109%x110)>>(x111<x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = 489LL;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t22 = 5986660545LL;

	t22 = ((x117%x118)>>(x119<x120));

	if (t22 != 244LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile int8_t x122 = -1;
	uint16_t x123 = 25212U;
	volatile int32_t x124 = -215;

	t23 = ((x121%x122)>>(x123<x124));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	volatile int64_t t24 = -25755313924117301LL;

	t24 = ((x125%x126)>>(x127<x128));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x129 = -3836652131724808LL;
	uint8_t x131 = 13U;
	volatile int64_t x132 = -288433507550691107LL;
	static int64_t t25 = -2LL;

	t25 = ((x129%x130)>>(x131<x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 11712U;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = -418;

	t26 = ((x133%x134)>>(x135<x136));

	if (t26 != 237) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x142 = 1U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t27 = 0;

	t27 = ((x141%x142)>>(x143<x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x145 = 0;
	volatile uint32_t x146 = 11464U;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	volatile uint32_t t28 = 4279207U;

	t28 = ((x145%x146)>>(x147<x148));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = INT8_MIN;
	volatile int8_t x158 = INT8_MIN;
	int32_t x159 = -10;
	int32_t x160 = INT32_MIN;
	volatile int32_t t29 = 15426751;

	t29 = ((x157%x158)>>(x159<x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = UINT64_MAX;
	int8_t x166 = 13;
	int64_t x167 = INT64_MIN;
	static int64_t x168 = -5406090486LL;
	static uint64_t t30 = 34710857613058630LLU;

	t30 = ((x165%x166)>>(x167<x168));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x172 = -2;
	static int32_t t31 = -42437201;

	t31 = ((x169%x170)>>(x171<x172));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = -26707LL;
	int16_t x174 = -1;
	int32_t x175 = INT32_MIN;
	static int16_t x176 = 13;
	static int64_t t32 = -1544581LL;

	t32 = ((x173%x174)>>(x175<x176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x178 = -12;
	static int8_t x179 = -6;
	static uint8_t x180 = UINT8_MAX;
	uint32_t t33 = 14U;

	t33 = ((x177%x178)>>(x179<x180));

	if (t33 != 5U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x184 = UINT16_MAX;
	int64_t t34 = 2766089762348565LL;

	t34 = ((x181%x182)>>(x183<x184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x185 = INT16_MAX;
	static int8_t x187 = INT8_MIN;
	uint8_t x188 = 9U;
	volatile int32_t t35 = -1046747166;

	t35 = ((x185%x186)>>(x187<x188));

	if (t35 != 15) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile int16_t x190 = -1;
	int8_t x191 = INT8_MIN;
	volatile int32_t t36 = -5;

	t36 = ((x189%x190)>>(x191<x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	uint32_t x196 = 25837U;
	int64_t t37 = -9077557744LL;

	t37 = ((x193%x194)>>(x195<x196));

	if (t37 != 2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MAX;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t38 = 234234;

	t38 = ((x197%x198)>>(x199<x200));

	if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 183888LLU;
	uint8_t x202 = UINT8_MAX;
	volatile uint64_t t39 = 2958083077940LLU;

	t39 = ((x201%x202)>>(x203<x204));

	if (t39 != 16LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x205 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t40 = 2077735527LLU;

	t40 = ((x205%x206)>>(x207<x208));

	if (t40 != 911LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	static uint16_t x211 = 115U;
	int8_t x212 = INT8_MIN;
	int64_t t41 = -1LL;

	t41 = ((x209%x210)>>(x211<x212));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x213 = INT32_MAX;
	int64_t x214 = -1LL;
	static int8_t x215 = 0;
	int64_t x216 = INT64_MAX;
	volatile int64_t t42 = -174256351007604210LL;

	t42 = ((x213%x214)>>(x215<x216));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t43 = 1;

	t43 = ((x221%x222)>>(x223<x224));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x225 = INT64_MIN;
	static int8_t x226 = 1;
	int64_t x227 = 2186282033006LL;
	volatile int16_t x228 = 13580;
	int64_t t44 = -476991094591LL;

	t44 = ((x225%x226)>>(x227<x228));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = INT16_MAX;
	static volatile int64_t x234 = 20841281689LL;
	int32_t x235 = INT32_MIN;
	int16_t x236 = 0;

	t45 = ((x233%x234)>>(x235<x236));

	if (t45 != 16383LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x242 = -26644;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;

	t46 = ((x241%x242)>>(x243<x244));

	if (t46 != 26643U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x246 = INT64_MAX;
	uint64_t x247 = 19623705064699541LLU;
	static int32_t x248 = -11038988;

	t47 = ((x245%x246)>>(x247<x248));

	if (t47 != 16383LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int8_t x250 = INT8_MIN;
	volatile uint8_t x251 = UINT8_MAX;
	static int8_t x252 = -51;
	static volatile uint64_t t48 = 4232315142917310LLU;

	t48 = ((x249%x250)>>(x251<x252));

	if (t48 != 127LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x254 = 75895537101987LL;
	uint32_t x255 = 18U;
	int8_t x256 = 0;
	volatile int64_t t49 = 42768311171LL;

	t49 = ((x253%x254)>>(x255<x256));

	if (t49 != 15099461601658LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x257 = 1876274LLU;
	int8_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	uint64_t t50 = 3220702384096LLU;

	t50 = ((x257%x258)>>(x259<x260));

	if (t50 != 196LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x261 = INT32_MIN;
	volatile uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 436U;
	int64_t x264 = INT64_MIN;
	static uint32_t t51 = 3U;

	t51 = ((x261%x262)>>(x263<x264));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x265 = -1;
	uint64_t x267 = 41LLU;
	static uint16_t x268 = 129U;

	t52 = ((x265%x266)>>(x267<x268));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MAX;
	static uint8_t x270 = 60U;
	uint64_t x271 = 8083878679LLU;
	int32_t t53 = 127569;

	t53 = ((x269%x270)>>(x271<x272));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	int64_t x276 = -674844825LL;

	t54 = ((x273%x274)>>(x275<x276));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x277 = 369770494420909LLU;
	int64_t x278 = -65270747194411142LL;
	volatile int16_t x279 = INT16_MIN;
	static uint8_t x280 = UINT8_MAX;

	t55 = ((x277%x278)>>(x279<x280));

	if (t55 != 184885247210454LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t t56 = 1;

	t56 = ((x281%x282)>>(x283<x284));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 7237U;
	int16_t x288 = INT16_MIN;
	static int32_t t57 = 61854;

	t57 = ((x285%x286)>>(x287<x288));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = 2U;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = 1U;
	int16_t x292 = INT16_MAX;
	uint32_t t58 = 209881U;

	t58 = ((x289%x290)>>(x291<x292));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x294 = 28;
	static int16_t x295 = -1;
	uint8_t x296 = 2U;
	static int32_t t59 = 15411582;

	t59 = ((x293%x294)>>(x295<x296));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x297 = 396112U;
	int64_t x298 = INT64_MIN;
	static uint32_t x299 = 354002U;
	uint16_t x300 = 6U;

	t60 = ((x297%x298)>>(x299<x300));

	if (t60 != 396112LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x301 = INT8_MAX;
	static volatile int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile int32_t t61 = -29;

	t61 = ((x301%x302)>>(x303<x304));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = 0U;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = -1;
	volatile uint32_t t62 = 2U;

	t62 = ((x305%x306)>>(x307<x308));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = 29;
	static int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MIN;
	volatile int64_t t63 = -3364579LL;

	t63 = ((x317%x318)>>(x319<x320));

	if (t63 != 29LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x321 = UINT8_MAX;
	volatile int8_t x322 = INT8_MIN;
	volatile int64_t x323 = -329079107237935994LL;
	int8_t x324 = -10;
	volatile int32_t t64 = -29738;

	t64 = ((x321%x322)>>(x323<x324));

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = -1;

	t65 = ((x329%x330)>>(x331<x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x339 = INT16_MIN;
	static int16_t x340 = INT16_MIN;
	static volatile int32_t t66 = 6066;

	t66 = ((x337%x338)>>(x339<x340));

	if (t66 != 4006) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int64_t t67 = 3374LL;

	t67 = ((x341%x342)>>(x343<x344));

	if (t67 != 15308889LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	static int32_t x351 = 8191384;
	uint16_t x352 = 2442U;
	volatile int32_t t68 = -16066291;

	t68 = ((x349%x350)>>(x351<x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x353 = INT8_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -1LL;
	static int16_t x356 = -4033;
	volatile int32_t t69 = 23348953;

	t69 = ((x353%x354)>>(x355<x356));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MIN;
	uint64_t t70 = 404160855566898LLU;

	t70 = ((x357%x358)>>(x359<x360));

	if (t70 != 244970LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x365 = INT16_MAX;
	static uint16_t x366 = 7U;
	int32_t x367 = -2067129;
	int32_t t71 = 196547;

	t71 = ((x365%x366)>>(x367<x368));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x381 = -36;
	int8_t x382 = -1;
	int16_t x383 = INT16_MIN;
	static uint8_t x384 = UINT8_MAX;
	int32_t t72 = -5421;

	t72 = ((x381%x382)>>(x383<x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x385 = 23U;
	uint16_t x386 = 14U;
	int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	static int32_t t73 = 416;

	t73 = ((x385%x386)>>(x387<x388));

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x390 = UINT64_MAX;
	static volatile int32_t x391 = -1;

	t74 = ((x389%x390)>>(x391<x392));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x393 = 46U;
	int8_t x394 = INT8_MIN;
	int64_t x395 = -7114LL;
	uint16_t x396 = UINT16_MAX;
	int32_t t75 = -109;

	t75 = ((x393%x394)>>(x395<x396));

	if (t75 != 23) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = 4U;
	int64_t x399 = INT64_MAX;
	int8_t x400 = -1;

	t76 = ((x397%x398)>>(x399<x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	static uint32_t x403 = 4130199U;
	uint64_t x404 = 10LLU;
	volatile int32_t t77 = -9540;

	t77 = ((x401%x402)>>(x403<x404));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x413 = UINT16_MAX;
	static uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MIN;
	int64_t x416 = 173279611764069LL;
	volatile uint32_t t78 = 41550U;

	t78 = ((x413%x414)>>(x415<x416));

	if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	int32_t x419 = 452917;
	static int32_t x420 = -1;
	volatile uint64_t t79 = 6397826469631726LLU;

	t79 = ((x417%x418)>>(x419<x420));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x421 = 41819946818421LL;
	int64_t x424 = INT64_MAX;
	int64_t t80 = 96LL;

	t80 = ((x421%x422)>>(x423<x424));

	if (t80 != 2072617150LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x429 = INT16_MAX;
	static int32_t x430 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t81 = -66;

	t81 = ((x429%x430)>>(x431<x432));

	if (t81 != 16383) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x433 = INT16_MIN;
	static volatile uint64_t x434 = 99LLU;
	static uint32_t x435 = 388428U;
	uint64_t t82 = 0LLU;

	t82 = ((x433%x434)>>(x435<x436));

	if (t82 != 8LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x437 = INT32_MAX;
	uint64_t x438 = 4LLU;
	int8_t x439 = 0;
	int64_t x440 = -2625007951941LL;
	volatile uint64_t t83 = 5LLU;

	t83 = ((x437%x438)>>(x439<x440));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x441 = 86U;
	int8_t x442 = -2;
	int64_t x443 = INT64_MAX;
	uint8_t x444 = 3U;

	t84 = ((x441%x442)>>(x443<x444));

	if (t84 != 86U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = -1;
	volatile uint16_t x447 = UINT16_MAX;
	int32_t t85 = 1007329;

	t85 = ((x445%x446)>>(x447<x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x449 = INT64_MIN;
	uint64_t x450 = 3904028451647037771LLU;
	volatile int8_t x451 = INT8_MAX;
	volatile uint64_t t86 = 2466LLU;

	t86 = ((x449%x450)>>(x451<x452));

	if (t86 != 707657566780350133LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x454 = -1643244562081LL;
	int16_t x455 = -282;
	static volatile int64_t t87 = 64549790655LL;

	t87 = ((x453%x454)>>(x455<x456));

	if (t87 != 63LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x457 = INT64_MAX;
	int64_t x458 = 181LL;
	static int16_t x460 = INT16_MIN;
	volatile int64_t t88 = -878174770LL;

	t88 = ((x457%x458)>>(x459<x460));

	if (t88 != 21LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x462 = UINT64_MAX;
	uint8_t x463 = 71U;
	int16_t x464 = -1;

	t89 = ((x461%x462)>>(x463<x464));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x465 = -1;
	volatile uint16_t x468 = UINT16_MAX;
	volatile int32_t t90 = -194747;

	t90 = ((x465%x466)>>(x467<x468));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x469 = -7;
	volatile uint64_t x470 = UINT64_MAX;
	volatile int16_t x471 = INT16_MIN;
	volatile uint8_t x472 = UINT8_MAX;
	static uint64_t t91 = 23LLU;

	t91 = ((x469%x470)>>(x471<x472));

	if (t91 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x473 = 28261U;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = UINT8_MAX;
	uint32_t t92 = 26455510U;

	t92 = ((x473%x474)>>(x475<x476));

	if (t92 != 28261U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x478 = 1;
	static int8_t x479 = INT8_MAX;
	uint32_t x480 = 19862U;
	int32_t t93 = -57723;

	t93 = ((x477%x478)>>(x479<x480));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x481 = UINT8_MAX;
	int32_t x484 = -1054116414;

	t94 = ((x481%x482)>>(x483<x484));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x485 = 0U;
	static int64_t x486 = -2228439663LL;
	int16_t x487 = 0;
	uint32_t x488 = 30U;
	static int64_t t95 = -2499370135426750LL;

	t95 = ((x485%x486)>>(x487<x488));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x489 = 12;
	int32_t x490 = -1;
	static int16_t x491 = -1;
	int64_t x492 = INT64_MIN;

	t96 = ((x489%x490)>>(x491<x492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x493 = 2405865879LLU;
	volatile int32_t x495 = -1;
	int8_t x496 = INT8_MIN;
	uint64_t t97 = 221297447322580384LLU;

	t97 = ((x493%x494)>>(x495<x496));

	if (t97 != 2405865879LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x501 = 1495U;
	volatile uint32_t x502 = 848629451U;
	static volatile int64_t x504 = -1LL;

	t98 = ((x501%x502)>>(x503<x504));

	if (t98 != 1495U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x505 = 65U;
	volatile int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	int32_t x508 = -1;
	int32_t t99 = 2530594;

	t99 = ((x505%x506)>>(x507<x508));

	if (t99 != 32) { NG(); } else { ; }
	
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

