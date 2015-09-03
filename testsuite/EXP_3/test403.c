#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -1;
int8_t x9 = INT8_MAX;
uint64_t x19 = 9LLU;
volatile int16_t x29 = -1;
static uint64_t x37 = 2LLU;
int64_t x41 = 19563LL;
int32_t t8 = 0;
uint16_t x66 = UINT16_MAX;
static int64_t x78 = INT64_MAX;
uint32_t x85 = UINT32_MAX;
int16_t x86 = -1;
uint32_t t15 = 71474671U;
uint32_t x92 = 2936945U;
int32_t x94 = -1;
int8_t x96 = INT8_MIN;
uint8_t x101 = 27U;
int32_t x102 = INT32_MIN;
int32_t x105 = INT32_MIN;
static uint8_t x110 = 1U;
uint8_t x111 = 1U;
static int32_t x123 = INT32_MAX;
uint16_t x132 = 6U;
static uint32_t x134 = 94901U;
volatile uint32_t t26 = 214U;
uint64_t x146 = 453497453425529851LLU;
uint64_t x153 = UINT64_MAX;
int16_t x154 = 25;
volatile uint64_t t29 = 3LLU;
int8_t x163 = INT8_MIN;
int32_t t34 = 3;
int16_t x199 = INT16_MAX;
int8_t x201 = -1;
uint8_t x205 = 2U;
volatile int32_t x210 = INT32_MAX;
uint32_t x211 = 119032U;
static uint32_t x212 = 1769423443U;
static volatile uint32_t t39 = 3738801U;
static int32_t x226 = INT32_MIN;
static int8_t x230 = -1;
uint8_t x234 = 13U;
int8_t x236 = -1;
volatile int32_t t45 = 463818565;
static int64_t x241 = -58515679395LL;
int8_t x262 = -1;
uint64_t x263 = 221712979480232LLU;
int8_t x268 = INT8_MIN;
int16_t x280 = -1;
int32_t x282 = INT32_MAX;
volatile uint64_t t51 = 1512LLU;
int16_t x285 = 6161;
int32_t x286 = INT32_MAX;
int32_t x288 = INT32_MAX;
uint64_t x290 = 7435197785038487LLU;
volatile int64_t t54 = 1LL;
uint32_t t55 = 5U;
int32_t x329 = -1;
volatile uint32_t x330 = 5022U;
uint32_t t59 = 571551U;
int32_t x342 = INT32_MIN;
int8_t x347 = -1;
volatile uint64_t x353 = 12LLU;
uint64_t t65 = 49754527618LLU;
uint16_t x368 = 2513U;
static volatile int64_t t67 = 535LL;
int64_t t69 = -4140402280344LL;
int64_t x386 = 128734449248LL;
uint64_t x387 = 1280LLU;
uint16_t x388 = 979U;
volatile int32_t x391 = INT32_MIN;
uint32_t x392 = UINT32_MAX;
volatile uint8_t x405 = 0U;
volatile int16_t x407 = -1315;
static volatile uint32_t t73 = 6190U;
int32_t x409 = INT32_MAX;
int16_t x413 = -1;
int16_t x421 = INT16_MIN;
static volatile int8_t x425 = -1;
int8_t x441 = INT8_MIN;
volatile int32_t t81 = 46845;
int16_t x451 = -1;
int8_t x470 = INT8_MIN;
uint8_t x472 = 6U;
static volatile uint8_t x474 = 30U;
volatile uint64_t t87 = 124458840561LLU;
int32_t x485 = -1;
uint32_t x487 = UINT32_MAX;
volatile int64_t t91 = -3878725LL;
uint8_t x498 = 6U;
static uint32_t x505 = 1628811U;
volatile uint16_t x506 = 14U;
static int8_t x507 = INT8_MIN;
volatile uint16_t x518 = UINT16_MAX;
static uint32_t x521 = 678509236U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = 20U;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1%x2)^(x3*x4));

	if (t0 != 1310700) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int8_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	static uint32_t x8 = 21078030U;
	volatile uint32_t t1 = 167456U;

	t1 = ((x5%x6)^(x7*x8));

	if (t1 != 1079930354U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = UINT16_MAX;
	int64_t x11 = -15057680LL;
	uint32_t x12 = UINT32_MAX;
	int64_t t2 = 63195473LL;

	t2 = ((x9%x10)^(x11*x12));

	if (t2 != -64672243138575505LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MAX;
	static volatile int32_t x18 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	uint64_t t3 = 1848633LLU;

	t3 = ((x17%x18)^(x19*x20));

	if (t3 != 18446744073709550591LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = -7;
	int64_t x26 = INT64_MIN;
	volatile uint32_t x27 = 0U;
	volatile int64_t x28 = -96578726LL;
	volatile int64_t t4 = -73122134182LL;

	t4 = ((x25%x26)^(x27*x28));

	if (t4 != -7LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = 0;
	static volatile int64_t x32 = INT64_MIN;
	volatile int64_t t5 = 133313276940384LL;

	t5 = ((x29%x30)^(x31*x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = INT16_MAX;
	uint16_t x39 = 636U;
	static uint8_t x40 = 3U;
	volatile uint64_t t6 = 22LLU;

	t6 = ((x37%x38)^(x39*x40));

	if (t6 != 1910LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = INT8_MIN;
	static int16_t x43 = 0;
	uint16_t x44 = 7U;
	volatile int64_t t7 = 3LL;

	t7 = ((x41%x42)^(x43*x44));

	if (t7 != 107LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;

	t8 = ((x45%x46)^(x47*x48));

	if (t8 != -8355586) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	static int32_t x50 = -33203302;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = -1;
	int32_t t9 = -551;

	t9 = ((x49%x50)^(x51*x52));

	if (t9 != -65410) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 961U;
	volatile uint16_t x58 = UINT16_MAX;
	static int64_t x59 = INT64_MIN;
	static uint64_t x60 = 66761LLU;
	static volatile uint64_t t10 = 1427828LLU;

	t10 = ((x57%x58)^(x59*x60));

	if (t10 != 9223372036854776769LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 21181U;
	static volatile int8_t x67 = -2;
	int64_t x68 = 181423LL;
	int64_t t11 = -8131865111247744LL;

	t11 = ((x65%x66)^(x67*x68));

	if (t11 != -383969LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x69 = INT64_MIN;
	int8_t x70 = -3;
	volatile int16_t x71 = INT16_MAX;
	uint8_t x72 = 0U;
	static volatile int64_t t12 = 50456251276LL;

	t12 = ((x69%x70)^(x71*x72));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = 0;
	volatile int16_t x79 = 131;
	uint8_t x80 = 36U;
	int64_t t13 = -130LL;

	t13 = ((x77%x78)^(x79*x80));

	if (t13 != 4716LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x81 = 3U;
	static uint8_t x82 = 40U;
	uint8_t x83 = 26U;
	int16_t x84 = -1;
	int32_t t14 = 18;

	t14 = ((x81%x82)^(x83*x84));

	if (t14 != -27) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x87 = UINT16_MAX;
	volatile int16_t x88 = INT16_MAX;

	t15 = ((x85%x86)^(x87*x88));

	if (t15 != 2147385345U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -3;
	int8_t x91 = INT8_MIN;
	volatile uint32_t t16 = 72809U;

	t16 = ((x89%x90)^(x91*x92));

	if (t16 != 3919038337U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x95 = 51U;
	volatile uint64_t t17 = 33689LLU;

	t17 = ((x93%x94)^(x95*x96));

	if (t17 != 18446744073709545088LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 429008215025474738LL;
	int16_t x98 = INT16_MAX;
	int16_t x99 = 1693;
	uint16_t x100 = UINT16_MAX;
	static volatile int64_t t18 = -39331052338LL;

	t18 = ((x97%x98)^(x99*x100));

	if (t18 != 110932642LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t19 = 3413601;

	t19 = ((x101%x102)^(x103*x104));

	if (t19 != 1073741851) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x106 = 365U;
	int8_t x107 = INT8_MIN;
	int8_t x108 = 13;
	static int32_t t20 = 19402;

	t20 = ((x105%x106)^(x107*x108));

	if (t20 != 1868) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x109 = 1259051185209879400LL;
	int16_t x112 = -503;
	volatile int64_t t21 = -2905075LL;

	t21 = ((x109%x110)^(x111*x112));

	if (t21 != -503LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = 10851778LL;
	uint64_t x119 = 14LLU;
	int16_t x120 = 4;
	uint64_t t22 = 6540784LLU;

	t22 = ((x117%x118)^(x119*x120));

	if (t22 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x121 = 12904503748LLU;
	int32_t x122 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t23 = 47466788LLU;

	t23 = ((x121%x122)^(x123*x124));

	if (t23 != 18446744058696767941LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = -497315036LL;
	int8_t x126 = 5;
	static uint8_t x127 = 0U;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x125%x126)^(x127*x128));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = UINT8_MAX;
	static int16_t x130 = INT16_MIN;
	uint64_t x131 = 1917562058200LLU;
	static volatile uint64_t t25 = 6122896LLU;

	t25 = ((x129%x130)^(x131*x132));

	if (t25 != 11505372349423LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x133 = INT32_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	volatile uint16_t x136 = 5U;

	t26 = ((x133%x134)^(x135*x136));

	if (t26 != 263863U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 5U;
	uint64_t t27 = 13545130976LLU;

	t27 = ((x145%x146)^(x147*x148));

	if (t27 != 18446744073709420543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = 19LL;
	int16_t x150 = -2;
	volatile int64_t x151 = -1LL;
	int64_t x152 = INT64_MAX;
	volatile int64_t t28 = INT64_MIN;

	t28 = ((x149%x150)^(x151*x152));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x155 = -1119;
	uint64_t x156 = 563900629760699897LLU;

	t29 = ((x153%x154)^(x155*x156));

	if (t29 != 14631237877611121814LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = UINT64_MAX;
	static uint8_t x158 = 76U;
	static uint16_t x159 = UINT16_MAX;
	uint16_t x160 = 1521U;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x157%x158)^(x159*x160));

	if (t30 != 99678764LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x161 = 499976780LLU;
	int16_t x162 = -733;
	static int16_t x164 = INT16_MIN;
	uint64_t t31 = 0LLU;

	t31 = ((x161%x162)^(x163*x164));

	if (t31 != 495782476LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = -1;
	volatile int32_t x174 = 104379042;
	volatile uint64_t x175 = 3750462LLU;
	int16_t x176 = 2;
	volatile uint64_t t32 = 0LLU;

	t32 = ((x173%x174)^(x175*x176));

	if (t32 != 18446744073702050691LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 7;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t33 = 1;

	t33 = ((x181%x182)^(x183*x184));

	if (t33 != 8355839) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x189 = 6U;
	uint8_t x190 = 3U;
	static volatile uint16_t x191 = 267U;
	int8_t x192 = INT8_MIN;

	t34 = ((x189%x190)^(x191*x192));

	if (t34 != -34176) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = INT32_MIN;
	static int32_t x194 = -1;
	volatile uint64_t x195 = 16491544735960LLU;
	uint16_t x196 = UINT16_MAX;
	static uint64_t t35 = 6192864075267948616LLU;

	t35 = ((x193%x194)^(x195*x196));

	if (t35 != 1080773384271138600LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x197 = 14U;
	static int16_t x198 = -1;
	uint16_t x200 = 2770U;
	static volatile int32_t t36 = 91312;

	t36 = ((x197%x198)^(x199*x200));

	if (t36 != 90764590) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x202 = 169LLU;
	uint32_t x203 = 2349027U;
	int64_t x204 = -3751392555428LL;
	volatile uint64_t t37 = 192LLU;

	t37 = ((x201%x202)^(x203*x204));

	if (t37 != 9634621673410183113LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x206 = INT8_MIN;
	uint64_t x207 = 970026779LLU;
	static int64_t x208 = INT64_MAX;
	uint64_t t38 = 7793LLU;

	t38 = ((x205%x206)^(x207*x208));

	if (t38 != 9223372035884749031LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x209 = INT16_MIN;

	t39 = ((x209%x210)^(x211*x212));

	if (t39 != 2889953384U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x217 = 0LL;
	int64_t x218 = INT64_MAX;
	int32_t x219 = -5;
	int64_t x220 = -887280482865LL;
	int64_t t40 = 7801514720LL;

	t40 = ((x217%x218)^(x219*x220));

	if (t40 != 4436402414325LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 1LLU;
	uint64_t x223 = 427352869261LLU;
	volatile uint16_t x224 = 499U;
	uint64_t t41 = 242360LLU;

	t41 = ((x221%x222)^(x223*x224));

	if (t41 != 213249081761239LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x225 = INT8_MAX;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MAX;
	static int32_t t42 = -61;

	t42 = ((x225%x226)^(x227*x228));

	if (t42 != 8355710) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = -72190096718LL;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 0U;
	volatile int64_t t43 = 17805343041LL;

	t43 = ((x229%x230)^(x231*x232));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = INT16_MIN;
	volatile int16_t x235 = INT16_MAX;
	volatile int32_t t44 = -54;

	t44 = ((x233%x234)^(x235*x236));

	if (t44 != 32761) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = -1;
	static uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 2002U;

	t45 = ((x237%x238)^(x239*x240));

	if (t45 != 131201070) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x242 = INT8_MAX;
	volatile int16_t x243 = INT16_MIN;
	int16_t x244 = 3167;
	volatile int64_t t46 = -1451398274370344383LL;

	t46 = ((x241%x242)^(x243*x244));

	if (t46 != 103776248LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = 105032196;
	static volatile int32_t x264 = INT32_MIN;
	uint64_t t47 = 2154947992236LLU;

	t47 = ((x261%x262)^(x263*x264));

	if (t47 != 3913303359477514240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x265 = 0;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = 59;
	uint32_t t48 = 11U;

	t48 = ((x265%x266)^(x267*x268));

	if (t48 != 4294959744U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x269 = 138180629660984LLU;
	volatile int64_t x270 = INT64_MIN;
	int8_t x271 = -5;
	volatile int8_t x272 = 1;
	volatile uint64_t t49 = 929180673506955290LLU;

	t49 = ((x269%x270)^(x271*x272));

	if (t49 != 18446605893079890627LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x277 = 454;
	int16_t x278 = -1;
	volatile int32_t x279 = -1;
	int32_t t50 = -1;

	t50 = ((x277%x278)^(x279*x280));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x281 = INT64_MIN;
	static int64_t x283 = 2060122414727LL;
	uint64_t x284 = UINT64_MAX;

	t51 = ((x281%x282)^(x283*x284));

	if (t51 != 2060122414727LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x287 = UINT32_MAX;
	static volatile uint32_t t52 = 14505U;

	t52 = ((x285%x286)^(x287*x288));

	if (t52 != 2147489808U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x289 = 39;
	int32_t x291 = -1;
	static volatile uint32_t x292 = 29475412U;
	volatile uint64_t t53 = 1LLU;

	t53 = ((x289%x290)^(x291*x292));

	if (t53 != 4265491851LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = -230500629871LL;
	int8_t x299 = INT8_MIN;
	int64_t x300 = -15LL;

	t54 = ((x297%x298)^(x299*x300));

	if (t54 != 4294965375LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = 19U;
	static int8_t x308 = 57;

	t55 = ((x305%x306)^(x307*x308));

	if (t55 != 1092U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 1U;
	volatile uint64_t x315 = 140099747632315441LLU;
	volatile int16_t x316 = 547;
	static volatile uint64_t t56 = 215748LLU;

	t56 = ((x313%x314)^(x315*x316));

	if (t56 != 2847585660038339763LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x325 = 27U;
	uint16_t x326 = 1104U;
	uint8_t x327 = 19U;
	volatile int8_t x328 = -1;
	volatile int32_t t57 = 314509624;

	t57 = ((x325%x326)^(x327*x328));

	if (t57 != -10) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x331 = INT16_MIN;
	static volatile uint64_t x332 = 3859336035855461LLU;
	uint64_t t58 = 36596691732762LLU;

	t58 = ((x329%x330)^(x331*x332));

	if (t58 != 2664485293055117499LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x333 = 443935U;
	volatile uint32_t x334 = 1910869270U;
	uint16_t x335 = 12U;
	uint16_t x336 = 4460U;

	t59 = ((x333%x334)^(x335*x336));

	if (t59 != 399119U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x338 = -1;
	int64_t x339 = -1LL;
	uint16_t x340 = 63U;
	int64_t t60 = 50734LL;

	t60 = ((x337%x338)^(x339*x340));

	if (t60 != -63LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t61 = 807805186;

	t61 = ((x341%x342)^(x343*x344));

	if (t61 != -2147483394) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x345 = -4317224429449LL;
	static volatile int64_t x346 = -11030596414584399LL;
	volatile int16_t x348 = INT16_MIN;
	volatile int64_t t62 = -816953880LL;

	t62 = ((x345%x346)^(x347*x348));

	if (t62 != -4317224396681LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = 3023U;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -44;
	volatile int32_t t63 = -1136747;

	t63 = ((x349%x350)^(x351*x352));

	if (t63 != -8170) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x354 = INT32_MAX;
	uint8_t x355 = 1U;
	int16_t x356 = -1;
	static volatile uint64_t t64 = 177867893957890448LLU;

	t64 = ((x353%x354)^(x355*x356));

	if (t64 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	static int16_t x360 = INT16_MAX;

	t65 = ((x357%x358)^(x359*x360));

	if (t65 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x365 = -1LL;
	int32_t x366 = INT32_MAX;
	int8_t x367 = INT8_MAX;
	int64_t t66 = 1240707465LL;

	t66 = ((x365%x366)^(x367*x368));

	if (t66 != -319152LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x369 = INT32_MIN;
	volatile int32_t x370 = -1;
	int64_t x371 = -1LL;
	int16_t x372 = -18;

	t67 = ((x369%x370)^(x371*x372));

	if (t67 != 18LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x373 = INT16_MAX;
	static int16_t x374 = -1;
	static int16_t x375 = -204;
	int16_t x376 = INT16_MAX;
	int32_t t68 = 1344;

	t68 = ((x373%x374)^(x375*x376));

	if (t68 != -6684468) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x377 = 114737760U;
	volatile int64_t x378 = INT64_MIN;
	uint8_t x379 = 1U;
	uint16_t x380 = 1931U;

	t69 = ((x377%x378)^(x379*x380));

	if (t69 != 114738667LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x385 = 2U;
	uint64_t t70 = 1066622267LLU;

	t70 = ((x385%x386)^(x387*x388));

	if (t70 != 1253122LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x389 = -1;
	int64_t x390 = INT64_MAX;
	static int64_t t71 = -4LL;

	t71 = ((x389%x390)^(x391*x392));

	if (t71 != -2147483649LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x401 = INT8_MAX;
	int64_t x402 = -17659569LL;
	int32_t x403 = -1;
	static int16_t x404 = INT16_MAX;
	int64_t t72 = 1573210213374LL;

	t72 = ((x401%x402)^(x403*x404));

	if (t72 != -32642LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x406 = -1;
	static uint32_t x408 = UINT32_MAX;

	t73 = ((x405%x406)^(x407*x408));

	if (t73 != 1315U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x410 = INT64_MAX;
	int32_t x411 = 0;
	int64_t x412 = -14209389010LL;
	volatile int64_t t74 = 34562500835LL;

	t74 = ((x409%x410)^(x411*x412));

	if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x414 = -1;
	int16_t x415 = INT16_MIN;
	int16_t x416 = -9;
	volatile int32_t t75 = -60275674;

	t75 = ((x413%x414)^(x415*x416));

	if (t75 != 294912) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x417 = INT64_MIN;
	volatile int64_t x418 = 270123LL;
	volatile int32_t x419 = -20;
	static uint64_t x420 = UINT64_MAX;
	volatile uint64_t t76 = 174015945835186778LLU;

	t76 = ((x417%x418)^(x419*x420));

	if (t76 != 18446744073709308532LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x422 = INT64_MIN;
	int8_t x423 = -1;
	int8_t x424 = 23;
	int64_t t77 = 48094632219047322LL;

	t77 = ((x421%x422)^(x423*x424));

	if (t77 != 32745LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x426 = INT64_MIN;
	static int32_t x427 = -1;
	static uint8_t x428 = 9U;
	int64_t t78 = 1LL;

	t78 = ((x425%x426)^(x427*x428));

	if (t78 != 8LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x429 = -1;
	uint16_t x430 = 9U;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MIN;
	uint64_t t79 = 778LLU;

	t79 = ((x429%x430)^(x431*x432));

	if (t79 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x437 = 7442114LLU;
	volatile int64_t x438 = INT64_MIN;
	static volatile int16_t x439 = 15;
	int16_t x440 = 174;
	static uint64_t t80 = 40646500LLU;

	t80 = ((x437%x438)^(x439*x440));

	if (t80 != 7439600LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x442 = INT32_MAX;
	uint8_t x443 = 52U;
	int16_t x444 = INT16_MIN;

	t81 = ((x441%x442)^(x443*x444));

	if (t81 != 1703808) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x445 = INT32_MIN;
	uint32_t x446 = UINT32_MAX;
	static int32_t x447 = -1;
	int8_t x448 = 1;
	uint32_t t82 = 44538906U;

	t82 = ((x445%x446)^(x447*x448));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x449 = 16922U;
	int8_t x450 = INT8_MIN;
	uint8_t x452 = 0U;
	volatile uint32_t t83 = 7170008U;

	t83 = ((x449%x450)^(x451*x452));

	if (t83 != 16922U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = 11;
	uint16_t x458 = 30U;
	static uint16_t x459 = 1113U;
	int16_t x460 = -13;
	int32_t t84 = 18115;

	t84 = ((x457%x458)^(x459*x460));

	if (t84 != -14480) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x465 = -1;
	static uint64_t x466 = UINT64_MAX;
	uint64_t x467 = UINT64_MAX;
	static int64_t x468 = INT64_MAX;
	volatile uint64_t t85 = 117LLU;

	t85 = ((x465%x466)^(x467*x468));

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x469 = 3U;
	int16_t x471 = -1;
	volatile uint32_t t86 = 33U;

	t86 = ((x469%x470)^(x471*x472));

	if (t86 != 4294967289U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x473 = UINT16_MAX;
	uint64_t x475 = 26808453LLU;
	int64_t x476 = -1LL;

	t87 = ((x473%x474)^(x475*x476));

	if (t87 != 18446744073682743156LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x477 = INT16_MIN;
	int16_t x478 = 1446;
	int64_t x479 = -16744236LL;
	uint16_t x480 = 220U;
	int64_t t88 = 1878174535973145LL;

	t88 = ((x477%x478)^(x479*x480));

	if (t88 != 3683732084LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MIN;
	volatile uint8_t x483 = UINT8_MAX;
	uint8_t x484 = 119U;
	static volatile int64_t t89 = -1022573287940733305LL;

	t89 = ((x481%x482)^(x483*x484));

	if (t89 != -30455LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x486 = INT64_MAX;
	int32_t x488 = INT32_MAX;
	static int64_t t90 = 860817LL;

	t90 = ((x485%x486)^(x487*x488));

	if (t90 != -2147483650LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x493 = INT32_MAX;
	int64_t x494 = 801233298223LL;
	int8_t x495 = -1;
	static volatile int16_t x496 = INT16_MAX;

	t91 = ((x493%x494)^(x495*x496));

	if (t91 != -2147450882LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x497 = 1214525231LL;
	static volatile uint16_t x499 = 1U;
	static volatile int32_t x500 = 1;
	int64_t t92 = 6919707140454LL;

	t92 = ((x497%x498)^(x499*x500));

	if (t92 != 4LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x501 = INT16_MIN;
	uint16_t x502 = 1225U;
	volatile int32_t x503 = -1;
	volatile uint64_t x504 = 103993LLU;
	static volatile uint64_t t93 = 297716LLU;

	t93 = ((x501%x502)^(x503*x504));

	if (t93 != 103853LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x508 = UINT16_MAX;
	uint32_t t94 = 17758U;

	t94 = ((x505%x506)^(x507*x508));

	if (t94 != 4286578825U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x509 = 3222378;
	volatile int8_t x510 = 27;
	int16_t x511 = INT16_MAX;
	uint8_t x512 = 3U;
	volatile int32_t t95 = 74648815;

	t95 = ((x509%x510)^(x511*x512));

	if (t95 != 98292) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x513 = INT64_MAX;
	int16_t x514 = INT16_MAX;
	volatile uint64_t x515 = UINT64_MAX;
	int64_t x516 = INT64_MIN;
	volatile uint64_t t96 = 26LLU;

	t96 = ((x513%x514)^(x515*x516));

	if (t96 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x517 = UINT64_MAX;
	int8_t x519 = INT8_MAX;
	volatile uint8_t x520 = UINT8_MAX;
	uint64_t t97 = 388712LLU;

	t97 = ((x517%x518)^(x519*x520));

	if (t97 != 32385LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x522 = INT8_MIN;
	static int16_t x523 = -1;
	uint16_t x524 = 954U;
	volatile uint32_t t98 = 37061896U;

	t98 = ((x521%x522)^(x523*x524));

	if (t98 != 3616458482U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x525 = 31U;
	static uint32_t x526 = 17U;
	int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MAX;
	volatile uint32_t t99 = 104896U;

	t99 = ((x525%x526)^(x527*x528));

	if (t99 != 4290773134U) { NG(); } else { ; }
	
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

