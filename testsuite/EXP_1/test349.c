#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x10 = -1;
static uint64_t x11 = 4437567051LLU;
int32_t x12 = -1;
int32_t x26 = INT32_MAX;
uint32_t x28 = UINT32_MAX;
int8_t x30 = -1;
uint32_t x32 = 1918725140U;
uint64_t x34 = 583LLU;
volatile uint64_t t7 = 4824141183090LLU;
int8_t x49 = 2;
static int8_t x52 = INT8_MAX;
static volatile uint32_t x60 = UINT32_MAX;
volatile int32_t x61 = -91;
static uint32_t x63 = 27U;
int64_t x77 = -1LL;
volatile int8_t x81 = 1;
int8_t x83 = INT8_MIN;
volatile int8_t x84 = INT8_MIN;
volatile int8_t x86 = INT8_MIN;
uint8_t x90 = 14U;
int64_t t16 = 32028LL;
volatile uint8_t x94 = 27U;
volatile int8_t x105 = INT8_MIN;
uint8_t x119 = 51U;
uint16_t x125 = 340U;
volatile int8_t x149 = -1;
int64_t x159 = -1LL;
volatile int64_t t28 = -642320958578LL;
uint64_t x165 = 497235LLU;
static int16_t x168 = INT16_MIN;
volatile uint64_t x178 = UINT64_MAX;
int8_t x184 = -1;
int32_t t33 = 217;
int32_t x194 = -4591;
int32_t x196 = INT32_MIN;
static int8_t x206 = INT8_MIN;
int32_t x215 = -1;
int16_t x217 = INT16_MIN;
int16_t x219 = INT16_MAX;
volatile uint64_t t39 = 3210655LLU;
static int64_t x226 = -1LL;
int8_t x229 = 4;
static uint16_t x230 = UINT16_MAX;
static uint8_t x236 = UINT8_MAX;
static int8_t x239 = -1;
int8_t x253 = -1;
static int16_t x255 = -1;
uint16_t x257 = 24250U;
volatile uint64_t t48 = 7082865418676021LLU;
volatile int64_t x283 = -287280376LL;
volatile int32_t x287 = INT32_MAX;
int8_t x288 = INT8_MIN;
volatile uint8_t x291 = 1U;
uint16_t x304 = 10U;
int8_t x308 = 4;
volatile uint16_t x317 = UINT16_MAX;
static volatile uint32_t x329 = 0U;
int8_t x339 = 1;
int16_t x343 = -536;
uint32_t x349 = 605536U;
uint64_t x368 = 562286736LLU;
volatile int16_t x379 = INT16_MAX;
static uint64_t t69 = 365411009LLU;
int16_t x389 = INT16_MIN;
int64_t x393 = -1LL;
uint64_t t73 = 4LLU;
int8_t x409 = 0;
volatile int64_t x412 = INT64_MAX;
volatile int64_t t74 = INT64_MAX;
int16_t x417 = 14;
int16_t x418 = -35;
int16_t x445 = -6787;
volatile int8_t x454 = -1;
uint8_t x456 = UINT8_MAX;
static int8_t x458 = 6;
int8_t x468 = INT8_MIN;
static int8_t x470 = 0;
int32_t x480 = -4620;
int16_t x495 = INT16_MAX;
static uint32_t x516 = UINT32_MAX;
static int8_t x530 = INT8_MAX;
uint64_t t97 = 3823650719478806159LLU;
static int64_t t98 = 11078LL;
int64_t x551 = -1LL;


void f0(void) {
	uint32_t x5 = 1990U;
	uint8_t x6 = 3U;
	int8_t x7 = INT8_MIN;
	static volatile uint8_t x8 = 15U;
	volatile uint32_t t0 = 36390494U;

	t0 = (((x5*x6)+x7)&x8);

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint64_t t1 = 215242LLU;

	t1 = (((x9*x10)+x11)&x12);

	if (t1 != 4437567052LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = (((x17*x18)+x19)&x20);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x21 = INT16_MIN;
	static int16_t x22 = INT16_MIN;
	uint32_t x23 = 66U;
	volatile int64_t x24 = INT64_MIN;
	static volatile int64_t t3 = -3LL;

	t3 = (((x21*x22)+x23)&x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	uint16_t x27 = 12216U;
	int64_t t4 = -534332016523134LL;

	t4 = (((x25*x26)+x27)&x28);

	if (t4 != 2147495865LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -6183;
	volatile int16_t x31 = INT16_MIN;
	volatile uint32_t t5 = 2349446U;

	t5 = (((x29*x30)+x31)&x32);

	if (t5 != 1918699524U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 2U;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	uint64_t t6 = 655LLU;

	t6 = (((x33*x34)+x35)&x36);

	if (t6 != 9223372036854776960LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -1;
	uint64_t x46 = 6470LLU;
	int32_t x47 = INT32_MAX;
	uint32_t x48 = UINT32_MAX;

	t7 = (((x45*x46)+x47)&x48);

	if (t7 != 2147477177LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x50 = 0U;
	int8_t x51 = INT8_MIN;
	int32_t t8 = -1;

	t8 = (((x49*x50)+x51)&x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = 2;
	static volatile int32_t x54 = 18;
	static int16_t x55 = -392;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t9 = 5220849617229075LLU;

	t9 = (((x53*x54)+x55)&x56);

	if (t9 != 18446744073709551260LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -5;
	static int64_t x58 = -47503189199LL;
	volatile uint32_t x59 = 3U;
	int64_t t10 = 1LL;

	t10 = (((x57*x58)+x59)&x60);

	if (t10 != 1292744718LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x62 = -1;
	int16_t x64 = -1;
	uint32_t t11 = 1U;

	t11 = (((x61*x62)+x63)&x64);

	if (t11 != 118U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x69 = 1U;
	volatile uint8_t x70 = 45U;
	uint64_t x71 = UINT64_MAX;
	int8_t x72 = -1;
	volatile uint64_t t12 = 73296403253LLU;

	t12 = (((x69*x70)+x71)&x72);

	if (t12 != 44LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x78 = 31;
	uint32_t x79 = 1088U;
	uint8_t x80 = 15U;
	static volatile int64_t t13 = -8440550LL;

	t13 = (((x77*x78)+x79)&x80);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x82 = INT8_MIN;
	volatile int32_t t14 = 0;

	t14 = (((x81*x82)+x83)&x84);

	if (t14 != -256) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x85 = 2034;
	static volatile int64_t x87 = INT64_MAX;
	int8_t x88 = -48;
	int64_t t15 = 0LL;

	t15 = (((x85*x86)+x87)&x88);

	if (t15 != 9223372036854515408LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = -1560643;
	int64_t x91 = -1LL;
	int16_t x92 = INT16_MAX;

	t16 = (((x89*x90)+x91)&x92);

	if (t16 != 7253LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x95 = -1LL;
	int32_t x96 = -784687997;
	volatile int64_t t17 = 46513018408885LL;

	t17 = (((x93*x94)+x95)&x96);

	if (t17 != 3510279296LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = UINT16_MAX;
	uint64_t x102 = 1368772394493170742LLU;
	int32_t x103 = -1;
	int32_t x104 = -455;
	volatile uint64_t t18 = 2501060735LLU;

	t18 = (((x101*x102)+x103)&x104);

	if (t18 != 14429186734104619529LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x106 = 1U;
	static uint16_t x107 = 146U;
	int64_t x108 = INT64_MAX;
	volatile int64_t t19 = 4LL;

	t19 = (((x105*x106)+x107)&x108);

	if (t19 != 18LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	int8_t x110 = INT8_MIN;
	static int8_t x111 = -1;
	int16_t x112 = -120;
	static volatile int32_t t20 = 41;

	t20 = (((x109*x110)+x111)&x112);

	if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x117 = UINT32_MAX;
	int8_t x118 = -1;
	int64_t x120 = INT64_MIN;
	int64_t t21 = 21296LL;

	t21 = (((x117*x118)+x119)&x120);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x121 = 58349341625LL;
	uint64_t x122 = UINT64_MAX;
	volatile int8_t x123 = INT8_MIN;
	static int32_t x124 = -1;
	volatile uint64_t t22 = 4LLU;

	t22 = (((x121*x122)+x123)&x124);

	if (t22 != 18446744015360209863LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MIN;
	volatile uint8_t x128 = 7U;
	volatile int64_t t23 = 978226001766345LL;

	t23 = (((x125*x126)+x127)&x128);

	if (t23 != 4LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 1U;
	volatile int64_t x138 = -5309350LL;
	int64_t x139 = -1LL;
	volatile uint8_t x140 = 75U;
	int64_t t24 = -5003822411LL;

	t24 = (((x137*x138)+x139)&x140);

	if (t24 != 73LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;
	static int64_t x152 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = (((x149*x150)+x151)&x152);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = 22107867400978082LLU;
	volatile int16_t x155 = -10986;
	uint64_t x156 = 19716732LLU;
	volatile uint64_t t26 = 13583053180201LLU;

	t26 = (((x153*x154)+x155)&x156);

	if (t26 != 19174004LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x157 = UINT8_MAX;
	int16_t x158 = INT16_MIN;
	volatile uint16_t x160 = 2U;
	static int64_t t27 = -945969789LL;

	t27 = (((x157*x158)+x159)&x160);

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = 12U;
	int64_t x162 = -1LL;
	volatile int8_t x163 = -1;
	uint16_t x164 = UINT16_MAX;

	t28 = (((x161*x162)+x163)&x164);

	if (t28 != 65523LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x166 = -1LL;
	uint64_t x167 = UINT64_MAX;
	static uint64_t t29 = 352675739LLU;

	t29 = (((x165*x166)+x167)&x168);

	if (t29 != 18446744073709027328LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x169 = -1LL;
	volatile int16_t x170 = 0;
	int16_t x171 = -1;
	int8_t x172 = -7;
	static int64_t t30 = 25813296LL;

	t30 = (((x169*x170)+x171)&x172);

	if (t30 != -7LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	uint16_t x175 = 114U;
	static int64_t x176 = 1LL;
	int64_t t31 = 14514040062436LL;

	t31 = (((x173*x174)+x175)&x176);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x177 = INT16_MIN;
	static int16_t x179 = 1096;
	volatile int8_t x180 = 0;
	uint64_t t32 = 621744061748035453LLU;

	t32 = (((x177*x178)+x179)&x180);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x181 = 57U;
	static int16_t x182 = 0;
	int8_t x183 = 7;

	t33 = (((x181*x182)+x183)&x184);

	if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x193 = 1U;
	int8_t x195 = INT8_MIN;
	int32_t t34 = INT32_MIN;

	t34 = (((x193*x194)+x195)&x196);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 12384639388LLU;
	int8_t x202 = INT8_MAX;
	int16_t x203 = 179;
	volatile int64_t x204 = -3578LL;
	volatile uint64_t t35 = 178999034LLU;

	t35 = (((x201*x202)+x203)&x204);

	if (t35 != 1572849201158LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = -1;
	uint16_t x207 = 4109U;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t36 = 65630258685440LL;

	t36 = (((x205*x206)+x207)&x208);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x213 = -1;
	volatile uint64_t x214 = 32838697540495815LLU;
	uint32_t x216 = 16046U;
	static uint64_t t37 = 4652267723LLU;

	t37 = (((x213*x214)+x215)&x216);

	if (t37 != 5672LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x218 = 4969LL;
	uint16_t x220 = 11U;
	volatile int64_t t38 = 16LL;

	t38 = (((x217*x218)+x219)&x220);

	if (t38 != 11LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = 0;
	uint32_t x222 = 2681U;
	uint64_t x223 = 1331956449698LLU;
	int32_t x224 = -717;

	t39 = (((x221*x222)+x223)&x224);

	if (t39 != 1331956449570LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x225 = 692921241U;
	int16_t x227 = -736;
	static int64_t x228 = INT64_MAX;
	volatile int64_t t40 = 2879107017LL;

	t40 = (((x225*x226)+x227)&x228);

	if (t40 != 9223372036161853831LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x231 = INT32_MIN;
	volatile int8_t x232 = INT8_MIN;
	int32_t t41 = 0;

	t41 = (((x229*x230)+x231)&x232);

	if (t41 != -2147221632) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = 9;
	int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	int32_t t42 = 0;

	t42 = (((x233*x234)+x235)&x236);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = -1;
	static volatile int32_t x238 = -1;
	int8_t x240 = INT8_MIN;
	static int32_t t43 = 69984;

	t43 = (((x237*x238)+x239)&x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x245 = 2U;
	uint64_t x246 = 213850885056LLU;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	volatile uint64_t t44 = 197849359307LLU;

	t44 = (((x245*x246)+x247)&x248);

	if (t44 != 427701769984LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x254 = INT8_MIN;
	int64_t x256 = -1LL;
	int64_t t45 = 742704417079678580LL;

	t45 = (((x253*x254)+x255)&x256);

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	static volatile int32_t t46 = -1810861;

	t46 = (((x257*x258)+x259)&x260);

	if (t46 != -794624128) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x265 = -1LL;
	uint32_t x266 = UINT32_MAX;
	uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (((x265*x266)+x267)&x268);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x274 = 5780460866764LLU;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;

	t48 = (((x273*x274)+x275)&x276);

	if (t48 != 22836LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = -1LL;
	int16_t x278 = -468;
	static int16_t x279 = -1;
	static int16_t x280 = INT16_MAX;
	int64_t t49 = -436782329193271LL;

	t49 = (((x277*x278)+x279)&x280);

	if (t49 != 467LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x281 = 92015U;
	volatile int32_t x282 = INT32_MAX;
	int8_t x284 = INT8_MAX;
	int64_t t50 = 7905314766LL;

	t50 = (((x281*x282)+x283)&x284);

	if (t50 != 25LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x285 = INT8_MIN;
	static uint16_t x286 = 35U;
	int32_t t51 = -182;

	t51 = (((x285*x286)+x287)&x288);

	if (t51 != 2147479040) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x289 = -1;
	int16_t x290 = -1;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int32_t t52 = -273605062;

	t52 = (((x289*x290)+x291)&x292);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = -1043;
	static uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t53 = 5U;

	t53 = (((x297*x298)+x299)&x300);

	if (t53 != 33810U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x301 = 13U;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = -1;
	uint32_t t54 = 354600U;

	t54 = (((x301*x302)+x303)&x304);

	if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x305 = 20U;
	int8_t x306 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	static volatile uint32_t t55 = 3U;

	t55 = (((x305*x306)+x307)&x308);

	if (t55 != 4U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 4U;
	volatile uint32_t t56 = 50533U;

	t56 = (((x309*x310)+x311)&x312);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = -6780;
	uint8_t x314 = UINT8_MAX;
	uint8_t x315 = 93U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t57 = INT32_MIN;

	t57 = (((x313*x314)+x315)&x316);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x318 = 1593;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 1U;
	volatile int32_t t58 = 445;

	t58 = (((x317*x318)+x319)&x320);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	volatile int8_t x332 = 1;
	volatile uint32_t t59 = 8452213U;

	t59 = (((x329*x330)+x331)&x332);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 1LLU;
	volatile int64_t x340 = INT64_MIN;
	uint64_t t60 = 1LLU;

	t60 = (((x337*x338)+x339)&x340);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 57U;
	volatile int16_t x344 = -1;
	volatile int32_t t61 = -10;

	t61 = (((x341*x342)+x343)&x344);

	if (t61 != -7832) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 0U;
	int32_t x352 = INT32_MIN;
	volatile uint32_t t62 = 19840789U;

	t62 = (((x349*x350)+x351)&x352);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x353 = -6464;
	uint32_t x354 = UINT32_MAX;
	int64_t x355 = INT64_MIN;
	static uint64_t x356 = 4979680475126LLU;
	uint64_t t63 = 3256830956558LLU;

	t63 = (((x353*x354)+x355)&x356);

	if (t63 != 4416LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x357 = INT16_MAX;
	int8_t x358 = 1;
	volatile uint64_t x359 = 64585LLU;
	int64_t x360 = -8LL;
	volatile uint64_t t64 = 6217LLU;

	t64 = (((x357*x358)+x359)&x360);

	if (t64 != 97352LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x361 = 7U;
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MAX;
	static uint8_t x364 = UINT8_MAX;
	uint32_t t65 = 1062001U;

	t65 = (((x361*x362)+x363)&x364);

	if (t65 != 127U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile int64_t x366 = -169549LL;
	int8_t x367 = -1;
	static volatile uint64_t t66 = 4915643399056019LLU;

	t66 = (((x365*x366)+x367)&x368);

	if (t66 != 553664512LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = 9U;
	static int8_t x370 = INT8_MIN;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t x372 = 38541273;
	volatile uint64_t t67 = 105291067962LLU;

	t67 = (((x369*x370)+x371)&x372);

	if (t67 != 38540121LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x373 = 14819327011573710LLU;
	int32_t x374 = INT32_MAX;
	static int64_t x375 = -315771443253LL;
	int16_t x376 = 6;
	uint64_t t68 = 539382513049LLU;

	t68 = (((x373*x374)+x375)&x376);

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x378 = 314705347LLU;
	static int8_t x380 = -1;

	t69 = (((x377*x378)+x379)&x380);

	if (t69 != 675824586305993276LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x381 = 668U;
	uint16_t x382 = UINT16_MAX;
	uint64_t x383 = 315102981LLU;
	uint32_t x384 = 636721U;
	volatile uint64_t t70 = 90446852617912327LLU;

	t70 = (((x381*x382)+x383)&x384);

	if (t70 != 5153LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x390 = 135774U;
	uint8_t x391 = 27U;
	int32_t x392 = INT32_MAX;
	volatile uint32_t t71 = 443U;

	t71 = (((x389*x390)+x391)&x392);

	if (t71 != 1993408539U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x394 = 6LLU;
	int32_t x395 = 1;
	uint32_t x396 = 165894U;
	uint64_t t72 = 3386808708800473560LLU;

	t72 = (((x393*x394)+x395)&x396);

	if (t72 != 165890LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x405 = 117326900565674LLU;
	int8_t x406 = INT8_MIN;
	int64_t x407 = 1050996839442180893LL;
	uint32_t x408 = 35531U;

	t73 = (((x405*x406)+x407)&x408);

	if (t73 != 521LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x410 = 30;
	int8_t x411 = -1;

	t74 = (((x409*x410)+x411)&x412);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = 1934878LL;
	static uint8_t x414 = 0U;
	int16_t x415 = -1;
	uint64_t x416 = 0LLU;
	uint64_t t75 = 265LLU;

	t75 = (((x413*x414)+x415)&x416);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x419 = 5U;
	int8_t x420 = INT8_MIN;
	static int32_t t76 = 238188845;

	t76 = (((x417*x418)+x419)&x420);

	if (t76 != -512) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x421 = -2LL;
	uint8_t x422 = 1U;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = 460U;
	volatile int64_t t77 = -736145LL;

	t77 = (((x421*x422)+x423)&x424);

	if (t77 != 460LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x425 = 3641U;
	volatile uint64_t x426 = 43720293681142624LLU;
	volatile int8_t x427 = -12;
	uint16_t x428 = UINT16_MAX;
	volatile uint64_t t78 = 330976538809LLU;

	t78 = (((x425*x426)+x427)&x428);

	if (t78 != 22612LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = 223;
	int8_t x430 = 3;
	uint8_t x431 = UINT8_MAX;
	volatile uint32_t x432 = UINT32_MAX;
	volatile uint32_t t79 = 979392934U;

	t79 = (((x429*x430)+x431)&x432);

	if (t79 != 924U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x433 = 21942U;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = 8;
	int16_t x436 = INT16_MIN;
	int32_t t80 = 1600;

	t80 = (((x433*x434)+x435)&x436);

	if (t80 != 1437958144) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x437 = -1;
	static int8_t x438 = INT8_MIN;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = 404U;
	int64_t t81 = -61158805840LL;

	t81 = (((x437*x438)+x439)&x440);

	if (t81 != 128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MIN;
	static int64_t x442 = -1LL;
	int8_t x443 = INT8_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int64_t t82 = 109830647042350424LL;

	t82 = (((x441*x442)+x443)&x444);

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x446 = 3401467U;
	uint8_t x447 = 1U;
	int64_t x448 = INT64_MIN;
	int64_t t83 = -696LL;

	t83 = (((x445*x446)+x447)&x448);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x453 = -1LL;
	int64_t x455 = -254026LL;
	static int64_t t84 = 1LL;

	t84 = (((x453*x454)+x455)&x456);

	if (t84 != 183LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x457 = 110U;
	volatile int16_t x459 = INT16_MIN;
	int64_t x460 = 2LL;
	static volatile int64_t t85 = -12329LL;

	t85 = (((x457*x458)+x459)&x460);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x461 = INT16_MAX;
	static uint16_t x462 = UINT16_MAX;
	int32_t x463 = -24267909;
	uint8_t x464 = UINT8_MAX;
	int32_t t86 = 23406;

	t86 = (((x461*x462)+x463)&x464);

	if (t86 != 124) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = 369;
	uint16_t x466 = UINT16_MAX;
	uint32_t x467 = UINT32_MAX;
	static volatile uint32_t t87 = 43136280U;

	t87 = (((x465*x466)+x467)&x468);

	if (t87 != 24182400U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x469 = INT8_MAX;
	static volatile uint8_t x471 = UINT8_MAX;
	volatile uint64_t x472 = 51438484LLU;
	volatile uint64_t t88 = 140232018879LLU;

	t88 = (((x469*x470)+x471)&x472);

	if (t88 != 148LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x477 = 265498026U;
	static volatile int32_t x478 = -2082283;
	int32_t x479 = INT32_MIN;
	uint32_t t89 = 110451474U;

	t89 = (((x477*x478)+x479)&x480);

	if (t89 != 4016783600U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x489 = 65931177U;
	static volatile uint32_t x490 = UINT32_MAX;
	volatile int16_t x491 = INT16_MIN;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t90 = 45LLU;

	t90 = (((x489*x490)+x491)&x492);

	if (t90 != 4229003351LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = 1U;
	uint32_t x494 = UINT32_MAX;
	volatile int16_t x496 = -1;
	uint32_t t91 = 1U;

	t91 = (((x493*x494)+x495)&x496);

	if (t91 != 32766U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x497 = UINT64_MAX;
	static int8_t x498 = INT8_MAX;
	volatile int32_t x499 = -5;
	volatile int8_t x500 = 0;
	volatile uint64_t t92 = 102677960LLU;

	t92 = (((x497*x498)+x499)&x500);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x501 = UINT64_MAX;
	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MAX;
	int16_t x504 = -6;
	uint64_t t93 = 7915995070560LLU;

	t93 = (((x501*x502)+x503)&x504);

	if (t93 != 9223372036854808570LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x513 = 3938;
	int32_t x514 = -1;
	int16_t x515 = -1;
	uint32_t t94 = 16686810U;

	t94 = (((x513*x514)+x515)&x516);

	if (t94 != 4294963357U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x525 = 139U;
	int16_t x526 = INT16_MAX;
	int32_t x527 = INT32_MIN;
	int16_t x528 = -1;
	volatile uint32_t t95 = 14947206U;

	t95 = (((x525*x526)+x527)&x528);

	if (t95 != 2152038261U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x529 = 475U;
	volatile int32_t x531 = -6680;
	uint64_t x532 = UINT64_MAX;
	static volatile uint64_t t96 = 61352992857LLU;

	t96 = (((x529*x530)+x531)&x532);

	if (t96 != 53645LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x533 = -7;
	int32_t x534 = -12602726;
	volatile int32_t x535 = 11686245;
	uint64_t x536 = UINT64_MAX;

	t97 = (((x533*x534)+x535)&x536);

	if (t97 != 99905327LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x541 = -1975;
	int8_t x542 = -1;
	int64_t x543 = -32LL;
	int32_t x544 = 0;

	t98 = (((x541*x542)+x543)&x544);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x549 = UINT32_MAX;
	int16_t x550 = INT16_MAX;
	volatile int64_t x552 = 1LL;
	volatile int64_t t99 = -5754340LL;

	t99 = (((x549*x550)+x551)&x552);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

