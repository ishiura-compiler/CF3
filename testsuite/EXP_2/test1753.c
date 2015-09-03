#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 4898U;
uint32_t x7 = 121819U;
int32_t x14 = -1;
int8_t x17 = 9;
uint32_t t3 = 125U;
int16_t x27 = INT16_MIN;
int8_t x30 = INT8_MAX;
int32_t x31 = -932176905;
static volatile int64_t t6 = 25506598975548LL;
static int64_t x46 = 247935711585850LL;
int8_t x66 = INT8_MIN;
uint16_t x67 = UINT16_MAX;
volatile uint32_t t10 = 15049U;
int32_t x71 = -1;
uint32_t x78 = 407682832U;
int64_t t13 = -30460LL;
int32_t x93 = INT32_MAX;
static int32_t x94 = -2856321;
uint32_t t15 = 27U;
volatile uint32_t t16 = 981U;
int16_t x117 = INT16_MIN;
uint64_t t19 = 6003586597LLU;
int64_t t20 = -3600072214278645LL;
int32_t x126 = INT32_MAX;
uint32_t x128 = 36U;
static uint64_t x130 = UINT64_MAX;
int8_t x137 = -2;
volatile int32_t t24 = -8838;
static int8_t x145 = 1;
int16_t x146 = INT16_MAX;
uint16_t x148 = 13U;
volatile int32_t x172 = 44430063;
int16_t x184 = INT16_MIN;
int64_t t31 = -25657707647LL;
volatile int32_t t32 = 253643;
uint32_t x191 = UINT32_MAX;
volatile int32_t t34 = 2;
int8_t x204 = INT8_MIN;
static uint8_t x205 = 30U;
int8_t x207 = -1;
static int32_t x216 = 330710829;
uint8_t x218 = UINT8_MAX;
volatile int16_t x222 = -1;
volatile int8_t x235 = INT8_MAX;
int8_t x238 = -11;
volatile uint8_t x249 = 0U;
int8_t x261 = 23;
int8_t x262 = -1;
uint16_t x263 = 8U;
int16_t x265 = INT16_MIN;
volatile int16_t x266 = -2737;
int8_t x268 = INT8_MIN;
uint32_t x273 = UINT32_MAX;
uint64_t x276 = 3555LLU;
uint8_t x280 = 90U;
uint32_t x282 = 9022350U;
volatile int64_t t51 = -5LL;
static volatile int32_t x292 = INT32_MIN;
int64_t x302 = -1LL;
uint64_t x307 = UINT64_MAX;
volatile int32_t t60 = 4023559;
int8_t x342 = INT8_MIN;
uint64_t x343 = 110485LLU;
int64_t x349 = INT64_MIN;
volatile int16_t x351 = INT16_MAX;
volatile int32_t x355 = -1;
volatile int64_t t63 = 129785LL;
uint8_t x361 = UINT8_MAX;
int64_t x373 = -1LL;
uint8_t x375 = UINT8_MAX;
static uint16_t x376 = 21456U;
int64_t t67 = -34LL;
int32_t x384 = INT32_MIN;
static int32_t t69 = 1;
volatile int32_t x393 = INT32_MIN;
int16_t x395 = -1;
uint32_t x401 = UINT32_MAX;
int32_t x408 = -18;
int64_t t73 = 3122216LL;
uint8_t x414 = 24U;
uint64_t x416 = 127LLU;
static uint64_t x419 = 4377609662404562688LLU;
uint8_t x428 = 14U;
int32_t t79 = -381;
static int64_t x436 = INT64_MIN;
int64_t x439 = INT64_MIN;
volatile int64_t t81 = 51611376401002LL;
int32_t x450 = -1;
int16_t x454 = INT16_MAX;
int32_t x455 = -1;
static volatile int64_t x465 = INT64_MAX;
uint16_t x470 = 108U;
volatile uint32_t t89 = 6U;
uint32_t x495 = 1432U;
int16_t x496 = -194;
static uint64_t x499 = 203168398LLU;
static int16_t x501 = 0;
static int16_t x502 = -1;
static volatile int8_t x520 = INT8_MAX;
static uint16_t x533 = 1U;
int8_t x534 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	volatile int16_t x3 = -1;
	int8_t x4 = -1;
	int64_t t0 = 14854609013LL;

	t0 = ((x1%(x2&x3))&x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 22410803U;
	uint8_t x8 = UINT8_MAX;
	static volatile uint32_t t1 = 7553282U;

	t1 = ((x5%(x6&x7))&x8);

	if (t1 != 57U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int8_t x15 = 39;
	static uint32_t x16 = 2044973136U;
	uint32_t t2 = 2726962U;

	t2 = ((x13%(x14&x15))&x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = 498;
	int16_t x19 = 11195;
	uint32_t x20 = 66941616U;

	t3 = ((x17%(x18&x19))&x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MIN;
	static volatile int64_t x23 = INT64_MIN;
	volatile int8_t x24 = INT8_MIN;
	volatile int64_t t4 = -1926679594536260788LL;

	t4 = ((x21%(x22&x23))&x24);

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -27756LL;
	int16_t x26 = INT16_MIN;
	static volatile int64_t x28 = -1LL;
	int64_t t5 = -3176934914922699LL;

	t5 = ((x25%(x26&x27))&x28);

	if (t5 != -27756LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 69195810U;
	volatile int64_t x32 = -21454125642709176LL;

	t6 = ((x29%(x30&x31))&x32);

	if (t6 != 8LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MAX;
	uint8_t x47 = 3U;
	static volatile int8_t x48 = INT8_MAX;
	volatile int64_t t7 = 1404412LL;

	t7 = ((x45%(x46&x47))&x48);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = 2;
	int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = -305;
	static volatile int64_t t8 = 32891626993LL;

	t8 = ((x53%(x54&x55))&x56);

	if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 59LLU;
	int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = 1196LLU;
	uint64_t t9 = 13LLU;

	t9 = ((x57%(x58&x59))&x60);

	if (t9 != 40LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x68 = 79U;

	t10 = ((x65%(x66&x67))&x68);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MAX;
	static int8_t x72 = -1;
	static int64_t t11 = -7442569758350LL;

	t11 = ((x69%(x70&x71))&x72);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = -1;
	int16_t x79 = -1;
	int32_t x80 = -1;
	volatile uint32_t t12 = 44679U;

	t12 = ((x77%(x78&x79))&x80);

	if (t12 != 218138975U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = -1;
	int64_t x86 = -1LL;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;

	t13 = ((x85%(x86&x87))&x88);

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x89 = 0LL;
	static volatile uint8_t x90 = UINT8_MAX;
	uint64_t x91 = UINT64_MAX;
	uint64_t x92 = 2004LLU;
	uint64_t t14 = 240318LLU;

	t14 = ((x89%(x90&x91))&x92);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x95 = 27U;
	uint16_t x96 = 118U;

	t15 = ((x93%(x94&x95))&x96);

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MIN;
	volatile uint16_t x98 = 8287U;
	volatile int32_t x99 = INT32_MAX;
	uint32_t x100 = UINT32_MAX;

	t16 = ((x97%(x98&x99))&x100);

	if (t16 != 4294967168U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = 606U;
	int64_t x104 = -1LL;
	volatile int64_t t17 = -83546952978LL;

	t17 = ((x101%(x102&x103))&x104);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x113 = -1LL;
	static volatile int64_t x114 = -1LL;
	static uint8_t x115 = 5U;
	static int16_t x116 = -1863;
	volatile int64_t t18 = 168391274941078722LL;

	t18 = ((x113%(x114&x115))&x116);

	if (t18 != -1863LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x118 = 49203997LLU;
	static int8_t x119 = INT8_MAX;
	static volatile int8_t x120 = INT8_MAX;

	t19 = ((x117%(x118&x119))&x120);

	if (t19 != 26LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x121 = 4;
	uint16_t x122 = 264U;
	int64_t x123 = -80LL;
	volatile int16_t x124 = -1;

	t20 = ((x121%(x122&x123))&x124);

	if (t20 != 4LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x125 = 0U;
	int16_t x127 = 405;
	volatile uint32_t t21 = 4841U;

	t21 = ((x125%(x126&x127))&x128);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x129 = 0LL;
	volatile int64_t x131 = 381515493589972489LL;
	static int8_t x132 = 42;
	uint64_t t22 = 32541793413025LLU;

	t22 = ((x129%(x130&x131))&x132);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 4189949352430156LL;
	int8_t x136 = INT8_MIN;
	static int64_t t23 = -1224LL;

	t23 = ((x133%(x134&x135))&x136);

	if (t23 != 2147483520LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x138 = 97;
	volatile uint16_t x139 = 1257U;
	static int8_t x140 = -1;

	t24 = ((x137%(x138&x139))&x140);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = 2920424434LL;
	int32_t x142 = 94;
	int16_t x143 = INT16_MAX;
	static volatile uint8_t x144 = UINT8_MAX;
	int64_t t25 = 14LL;

	t25 = ((x141%(x142&x143))&x144);

	if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x147 = 262547938424176750LLU;
	volatile uint64_t t26 = 101077LLU;

	t26 = ((x145%(x146&x147))&x148);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = -1LL;
	static volatile int8_t x150 = -1;
	int64_t x151 = -1LL;
	static uint8_t x152 = UINT8_MAX;
	volatile int64_t t27 = 32LL;

	t27 = ((x149%(x150&x151))&x152);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = -1LL;
	volatile int8_t x158 = -1;
	int16_t x159 = -1;
	uint32_t x160 = 310671161U;
	int64_t t28 = -63LL;

	t28 = ((x157%(x158&x159))&x160);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x169 = 91U;
	volatile uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MIN;
	uint32_t t29 = 245980U;

	t29 = ((x169%(x170&x171))&x172);

	if (t29 != 75U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x177 = -212092424LL;
	int64_t x178 = -1LL;
	static uint64_t x179 = UINT64_MAX;
	static volatile int32_t x180 = INT32_MIN;
	static volatile uint64_t t30 = 256LLU;

	t30 = ((x177%(x178&x179))&x180);

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x181 = -1;
	int64_t x182 = 166054530536LL;
	volatile int32_t x183 = INT32_MIN;

	t31 = ((x181%(x182&x183))&x184);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	volatile int32_t x187 = INT32_MIN;
	int32_t x188 = 561463281;

	t32 = ((x185%(x186&x187))&x188);

	if (t32 != 113) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int64_t x192 = 2913861977916LL;
	static int64_t t33 = -3833283727984LL;

	t33 = ((x189%(x190&x191))&x192);

	if (t33 != 1874132992LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x193 = INT8_MIN;
	static int32_t x194 = INT32_MIN;
	static volatile int16_t x195 = -1412;
	int8_t x196 = 25;

	t34 = ((x193%(x194&x195))&x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x197 = INT32_MAX;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	uint64_t t35 = 1LLU;

	t35 = ((x197%(x198&x199))&x200);

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = -1;
	static int64_t x202 = INT64_MAX;
	static uint8_t x203 = 5U;
	static int64_t t36 = 52674085895869LL;

	t36 = ((x201%(x202&x203))&x204);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x206 = -1;
	int16_t x208 = INT16_MAX;
	volatile int32_t t37 = -6595151;

	t37 = ((x205%(x206&x207))&x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x213 = INT16_MIN;
	volatile uint64_t x214 = 15558326116LLU;
	uint32_t x215 = 30231913U;
	volatile uint64_t t38 = 8777343699299228609LLU;

	t38 = ((x213%(x214&x215))&x216);

	if (t38 != 1054208LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MIN;
	int64_t x219 = -1LL;
	int16_t x220 = -12525;
	int64_t t39 = -791602025143334LL;

	t39 = ((x217%(x218&x219))&x220);

	if (t39 != -12544LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x221 = -1;
	int64_t x223 = -45527072506LL;
	int64_t x224 = -5410833563LL;
	static int64_t t40 = -49LL;

	t40 = ((x221%(x222&x223))&x224);

	if (t40 != -5410833563LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 219278332733LLU;
	int32_t x227 = -1989;
	volatile uint16_t x228 = 30U;
	volatile uint64_t t41 = 5234LLU;

	t41 = ((x225%(x226&x227))&x228);

	if (t41 != 30LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x233 = 286U;
	uint8_t x234 = UINT8_MAX;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t42 = 29U;

	t42 = ((x233%(x234&x235))&x236);

	if (t42 != 32U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	static int64_t x240 = 5625977876LL;
	int64_t t43 = 272419248307082321LL;

	t43 = ((x237%(x238&x239))&x240);

	if (t43 != 39956LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 109U;
	uint64_t x247 = UINT64_MAX;
	static volatile int64_t x248 = INT64_MAX;
	volatile uint64_t t44 = 1054820478662529264LLU;

	t44 = ((x245%(x246&x247))&x248);

	if (t44 != 65LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MIN;
	uint32_t x252 = 58415U;
	int64_t t45 = -556488LL;

	t45 = ((x249%(x250&x251))&x252);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x253 = -13693;
	int16_t x254 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 124U;
	static uint32_t t46 = 50U;

	t46 = ((x253%(x254&x255))&x256);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x264 = INT64_MIN;
	static int64_t t47 = 765438997931897LL;

	t47 = ((x261%(x262&x263))&x264);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x267 = -531;
	volatile int32_t t48 = 121;

	t48 = ((x265%(x266&x267))&x268);

	if (t48 != -2688) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x274 = 17048102413095202LLU;
	int16_t x275 = -11;
	uint64_t t49 = 7481620686442720158LLU;

	t49 = ((x273%(x274&x275))&x276);

	if (t49 != 3555LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x277 = -1;
	static volatile int64_t x278 = -1LL;
	int64_t x279 = -1LL;
	volatile int64_t t50 = -194811039LL;

	t50 = ((x277%(x278&x279))&x280);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x281 = INT8_MIN;
	int32_t x283 = -1;
	int64_t x284 = 3808442LL;

	t51 = ((x281%(x282&x283))&x284);

	if (t51 != 56LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = -321;
	volatile int32_t x287 = -1;
	volatile uint32_t x288 = UINT32_MAX;
	volatile uint32_t t52 = 1U;

	t52 = ((x285%(x286&x287))&x288);

	if (t52 != 4294967270U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = -1;
	uint8_t x290 = 14U;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t53 = INT32_MIN;

	t53 = ((x289%(x290&x291))&x292);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x297 = INT8_MAX;
	static volatile int64_t x298 = INT64_MAX;
	uint16_t x299 = 1141U;
	uint16_t x300 = UINT16_MAX;
	int64_t t54 = 120LL;

	t54 = ((x297%(x298&x299))&x300);

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x301 = 1U;
	volatile uint8_t x303 = UINT8_MAX;
	int16_t x304 = 34;
	volatile int64_t t55 = 13633LL;

	t55 = ((x301%(x302&x303))&x304);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = -1;
	uint16_t x308 = 23U;
	uint64_t t56 = 1142350157LLU;

	t56 = ((x305%(x306&x307))&x308);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x309 = -1LL;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 473900598LLU;
	static int64_t x312 = 1329276775LL;
	uint64_t t57 = 505LLU;

	t57 = ((x309%(x310&x311))&x312);

	if (t57 != 84092229LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x325 = 97469LLU;
	int64_t x326 = 486LL;
	volatile int8_t x327 = -1;
	volatile int16_t x328 = -10302;
	static volatile uint64_t t58 = 0LLU;

	t58 = ((x325%(x326&x327))&x328);

	if (t58 != 256LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 809419U;
	volatile int32_t x335 = 23491;
	static int16_t x336 = -9845;
	static volatile uint32_t t59 = 66U;

	t59 = ((x333%(x334&x335))&x336);

	if (t59 != 8U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x337 = 498U;
	int8_t x338 = 58;
	int8_t x339 = 6;
	int32_t x340 = -37780;

	t60 = ((x337%(x338&x339))&x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x341 = 32640;
	static int64_t x344 = -39LL;
	static volatile uint64_t t61 = 26289LLU;

	t61 = ((x341%(x342&x343))&x344);

	if (t61 != 32640LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x350 = -1LL;
	static int32_t x352 = INT32_MIN;
	volatile int64_t t62 = -51784776247766606LL;

	t62 = ((x349%(x350&x351))&x352);

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int8_t x356 = INT8_MAX;

	t63 = ((x353%(x354&x355))&x356);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x362 = 5248896LL;
	int64_t x363 = -1LL;
	uint8_t x364 = 25U;
	static int64_t t64 = -36LL;

	t64 = ((x361%(x362&x363))&x364);

	if (t64 != 25LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x365 = INT32_MIN;
	static int32_t x366 = -582432068;
	int8_t x367 = INT8_MAX;
	int16_t x368 = -4612;
	int32_t t65 = -257;

	t65 = ((x365%(x366&x367))&x368);

	if (t65 != -4616) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x369 = 2LLU;
	uint32_t x370 = 91463U;
	int16_t x371 = INT16_MAX;
	int32_t x372 = -1;
	volatile uint64_t t66 = 346983772587599LLU;

	t66 = ((x369%(x370&x371))&x372);

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x374 = -2882;

	t67 = ((x373%(x374&x375))&x376);

	if (t67 != 21456LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = -129927;
	int16_t x379 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	volatile int64_t t68 = -7006342LL;

	t68 = ((x377%(x378&x379))&x380);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x381 = 2U;
	int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MIN;

	t69 = ((x381%(x382&x383))&x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x389 = 360288974U;
	int16_t x390 = INT16_MAX;
	static int32_t x391 = -397752014;
	int16_t x392 = INT16_MIN;
	uint32_t t70 = 7494890U;

	t70 = ((x389%(x390&x391))&x392);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x394 = -1LL;
	volatile int64_t x396 = INT64_MAX;
	volatile int64_t t71 = 2302LL;

	t71 = ((x393%(x394&x395))&x396);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x402 = 3U;
	uint8_t x403 = 25U;
	int32_t x404 = INT32_MIN;
	volatile uint32_t t72 = 1161139331U;

	t72 = ((x401%(x402&x403))&x404);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x405 = 4U;
	int64_t x406 = 48225182951LL;
	volatile int32_t x407 = INT32_MIN;

	t73 = ((x405%(x406&x407))&x408);

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x409 = UINT16_MAX;
	uint64_t x410 = 58791LLU;
	uint8_t x411 = 15U;
	int64_t x412 = -6819069718902491LL;
	volatile uint64_t t74 = 5603509373627LLU;

	t74 = ((x409%(x410&x411))&x412);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x413 = 517150268890355LLU;
	static uint64_t x415 = 65359701139597LLU;
	uint64_t t75 = 519725849LLU;

	t75 = ((x413%(x414&x415))&x416);

	if (t75 != 3LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x417 = 4093597693474LLU;
	uint32_t x418 = 601778U;
	volatile int32_t x420 = -23494094;
	uint64_t t76 = 11035LLU;

	t76 = ((x417%(x418&x419))&x420);

	if (t76 != 32802LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x421 = -1LL;
	int8_t x422 = -5;
	static int16_t x423 = -348;
	int32_t x424 = INT32_MIN;
	int64_t t77 = -989740685766LL;

	t77 = ((x421%(x422&x423))&x424);

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x425 = 31878U;
	uint16_t x426 = UINT16_MAX;
	static int8_t x427 = INT8_MIN;
	volatile int32_t t78 = 118;

	t78 = ((x425%(x426&x427))&x428);

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x429 = INT32_MAX;
	volatile int32_t x430 = -1;
	volatile uint16_t x431 = 4U;
	int32_t x432 = INT32_MIN;

	t79 = ((x429%(x430&x431))&x432);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x433 = 0U;
	int64_t x434 = INT64_MAX;
	uint16_t x435 = 5U;
	volatile int64_t t80 = 3572795890085912618LL;

	t80 = ((x433%(x434&x435))&x436);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = -1;
	int32_t x440 = 1818868;

	t81 = ((x437%(x438&x439))&x440);

	if (t81 != 49396LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x441 = INT8_MIN;
	volatile int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MIN;
	volatile int8_t x444 = INT8_MAX;
	int64_t t82 = -14901964971225LL;

	t82 = ((x441%(x442&x443))&x444);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x449 = -1;
	volatile int8_t x451 = -1;
	volatile int16_t x452 = -7;
	int32_t t83 = -182;

	t83 = ((x449%(x450&x451))&x452);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x453 = -1;
	int8_t x456 = -1;
	int32_t t84 = -35472;

	t84 = ((x453%(x454&x455))&x456);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = 71U;
	int8_t x458 = INT8_MIN;
	volatile int64_t x459 = -15407341192459LL;
	uint64_t x460 = 425LLU;
	volatile uint64_t t85 = 255958715337944LLU;

	t85 = ((x457%(x458&x459))&x460);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x461 = -1LL;
	uint32_t x462 = 5U;
	volatile int64_t x463 = 652107547LL;
	int64_t x464 = INT64_MAX;
	volatile int64_t t86 = -10607352276951795LL;

	t86 = ((x461%(x462&x463))&x464);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x466 = 1U;
	int8_t x467 = 1;
	static int32_t x468 = INT32_MIN;
	static volatile int64_t t87 = -5700035608277846LL;

	t87 = ((x465%(x466&x467))&x468);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x469 = 58;
	static uint32_t x471 = 693U;
	static uint8_t x472 = 14U;
	static uint32_t t88 = 344290023U;

	t88 = ((x469%(x470&x471))&x472);

	if (t88 != 6U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x477 = INT16_MAX;
	int8_t x478 = -15;
	uint32_t x479 = 27109181U;
	static int16_t x480 = INT16_MAX;

	t89 = ((x477%(x478&x479))&x480);

	if (t89 != 32767U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x481 = 2248280LLU;
	int64_t x482 = -1LL;
	int16_t x483 = -101;
	uint8_t x484 = 2U;
	volatile uint64_t t90 = 307475075743LLU;

	t90 = ((x481%(x482&x483))&x484);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x485 = INT16_MIN;
	static uint64_t x486 = 8682932LLU;
	int32_t x487 = -1;
	volatile int8_t x488 = INT8_MIN;
	uint64_t t91 = 2038140346312507LLU;

	t91 = ((x485%(x486&x487))&x488);

	if (t91 != 233600LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	volatile uint32_t t92 = 1799224989U;

	t92 = ((x493%(x494&x495))&x496);

	if (t92 != 1304U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x497 = UINT32_MAX;
	static int32_t x498 = -21518353;
	int8_t x500 = INT8_MIN;
	uint64_t t93 = 5424188LLU;

	t93 = ((x497%(x498&x499))&x500);

	if (t93 != 39569920LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MAX;
	int64_t t94 = -1165176642298835LL;

	t94 = ((x501%(x502&x503))&x504);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x505 = 5;
	static uint32_t x506 = 3U;
	int8_t x507 = -49;
	uint8_t x508 = 0U;
	static uint32_t t95 = 13U;

	t95 = ((x505%(x506&x507))&x508);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x509 = -1;
	volatile uint32_t x510 = 46036446U;
	int8_t x511 = INT8_MIN;
	volatile int64_t x512 = INT64_MIN;
	static volatile int64_t t96 = 582383425628LL;

	t96 = ((x509%(x510&x511))&x512);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x517 = 2;
	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	int32_t t97 = 408203816;

	t97 = ((x517%(x518&x519))&x520);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x521 = 1U;
	uint32_t x522 = 63U;
	uint32_t x523 = 41826356U;
	int16_t x524 = -1;
	volatile uint32_t t98 = 24U;

	t98 = ((x521%(x522&x523))&x524);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x535 = -1;
	int32_t x536 = INT32_MIN;
	volatile int32_t t99 = -3743440;

	t99 = ((x533%(x534&x535))&x536);

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

