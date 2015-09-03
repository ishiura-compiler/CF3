#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = -11059;
int32_t t0 = 8818;
static int32_t x16 = INT32_MAX;
int32_t t2 = 0;
int8_t x27 = -1;
int64_t x43 = -1LL;
int8_t x45 = -1;
int8_t x50 = INT8_MIN;
int32_t x60 = INT32_MIN;
volatile int32_t t11 = -12;
int8_t x75 = INT8_MIN;
volatile int64_t x101 = -155LL;
volatile int32_t t18 = 239923;
uint64_t x114 = UINT64_MAX;
volatile uint32_t x115 = UINT32_MAX;
volatile int32_t t20 = 504248845;
volatile uint16_t x117 = 3827U;
int32_t x120 = INT32_MIN;
static int16_t x127 = -1;
static int8_t x131 = -1;
static int64_t x137 = -1LL;
uint32_t x138 = 142053566U;
int8_t x141 = -36;
static volatile int16_t x147 = 123;
volatile int32_t t27 = -58640215;
uint16_t x155 = UINT16_MAX;
volatile int16_t x159 = INT16_MAX;
volatile uint8_t x160 = 8U;
volatile int8_t x162 = 23;
int32_t t32 = 989;
static int16_t x187 = -11227;
int16_t x195 = INT16_MIN;
volatile int32_t t36 = -167534;
int8_t x197 = -60;
int32_t t37 = -53428;
volatile int16_t x201 = INT16_MAX;
uint8_t x203 = UINT8_MAX;
static int8_t x216 = INT8_MIN;
static uint16_t x217 = UINT16_MAX;
int8_t x229 = 1;
int32_t x231 = INT32_MIN;
volatile int16_t x234 = INT16_MAX;
static uint16_t x235 = UINT16_MAX;
volatile int32_t t46 = -1;
volatile int8_t x253 = INT8_MIN;
int16_t x256 = 116;
int32_t t49 = 5065556;
static volatile int64_t x263 = INT64_MIN;
uint64_t x269 = 3607604131187LLU;
volatile int32_t x270 = INT32_MIN;
int64_t x271 = INT64_MIN;
volatile int32_t t55 = 199;
int8_t x282 = INT8_MIN;
static uint32_t x284 = 124695482U;
int8_t x285 = INT8_MAX;
uint32_t x286 = UINT32_MAX;
uint16_t x287 = 33U;
volatile int32_t t58 = -35585124;
uint16_t x296 = UINT16_MAX;
uint8_t x299 = 120U;
int8_t x300 = INT8_MIN;
volatile int32_t t60 = -462360;
int64_t x311 = INT64_MIN;
int64_t x315 = INT64_MIN;
int8_t x319 = INT8_MAX;
int16_t x321 = INT16_MAX;
volatile uint32_t x327 = 0U;
int16_t x329 = INT16_MAX;
uint64_t x331 = 154200114LLU;
static int16_t x353 = -1;
uint64_t x355 = 1142482995LLU;
volatile int32_t t71 = 39403870;
uint32_t x361 = UINT32_MAX;
uint64_t x363 = 1073220480LLU;
uint8_t x364 = 0U;
int32_t t72 = 229579090;
volatile uint32_t x374 = UINT32_MAX;
int32_t x375 = INT32_MIN;
int32_t x378 = 1;
int32_t t74 = 289621;
int16_t x382 = -1;
volatile int16_t x391 = INT16_MIN;
int32_t t79 = -1;
int16_t x441 = INT16_MAX;
int64_t x451 = 33515266398398112LL;
static volatile int8_t x452 = 1;
volatile uint8_t x459 = 8U;
uint64_t x468 = 8368243485LLU;
int16_t x478 = INT16_MIN;
volatile uint8_t x479 = UINT8_MAX;
volatile int32_t t93 = 60;
int64_t x494 = -5474705LL;
uint64_t x495 = 36820624508359LLU;
int32_t x499 = -21;
uint8_t x506 = 5U;
int32_t x508 = -76;
volatile int32_t t98 = -4;


void f0(void) {
	static int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	static uint16_t x8 = 46U;

	t0 = ((x5*x6)<=(x7^x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x9 = INT8_MIN;
	uint64_t x10 = 16338650941326793LLU;
	static uint64_t x11 = 1347456294LLU;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t1 = 12273;

	t1 = ((x9*x10)<=(x11^x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = 21435336LL;
	uint8_t x14 = 0U;
	int32_t x15 = -1;

	t2 = ((x13*x14)<=(x15^x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 501;
	uint16_t x18 = 6U;
	volatile int16_t x19 = 9615;
	uint64_t x20 = 26723LLU;
	volatile int32_t t3 = 651441;

	t3 = ((x17*x18)<=(x19^x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 14U;
	static volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	volatile int32_t x24 = INT32_MIN;
	static volatile int32_t t4 = 3865;

	t4 = ((x21*x22)<=(x23^x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MAX;
	int64_t x28 = -2033091897LL;
	int32_t t5 = 10;

	t5 = ((x25*x26)<=(x27^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -314532LL;
	int64_t x30 = 1LL;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 26U;
	volatile int32_t t6 = 416420;

	t6 = ((x29*x30)<=(x31^x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 113U;
	int32_t x42 = INT32_MIN;
	int16_t x44 = INT16_MAX;
	volatile int32_t t7 = -3;

	t7 = ((x41*x42)<=(x43^x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x46 = 70389422590678066LLU;
	int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	volatile int32_t t8 = -25731422;

	t8 = ((x45*x46)<=(x47^x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 346U;
	uint8_t x51 = 2U;
	uint16_t x52 = 3819U;
	volatile int32_t t9 = -1239444;

	t9 = ((x49*x50)<=(x51^x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = 165;
	volatile uint32_t x54 = UINT32_MAX;
	volatile int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t10 = -524278;

	t10 = ((x53*x54)<=(x55^x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -5536;
	int8_t x58 = -2;
	int16_t x59 = INT16_MIN;

	t11 = ((x57*x58)<=(x59^x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = -2968;
	uint16_t x70 = UINT16_MAX;
	static int64_t x71 = INT64_MIN;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t12 = -2097;

	t12 = ((x69*x70)<=(x71^x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x73 = -92;
	int16_t x74 = -934;
	int32_t x76 = INT32_MIN;
	volatile int32_t t13 = 7917821;

	t13 = ((x73*x74)<=(x75^x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = 13410467586085497LLU;
	uint64_t x82 = 6194983882600194LLU;
	uint8_t x83 = 60U;
	static int16_t x84 = -1;
	volatile int32_t t14 = 246;

	t14 = ((x81*x82)<=(x83^x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -1;
	volatile uint64_t x86 = 61510LLU;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t15 = -126181364;

	t15 = ((x85*x86)<=(x87^x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 210979040024740LLU;
	static int16_t x90 = INT16_MAX;
	volatile int32_t x91 = -1;
	int8_t x92 = -1;
	int32_t t16 = 715496011;

	t16 = ((x89*x90)<=(x91^x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = 0;
	int32_t x98 = INT32_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MAX;
	int32_t t17 = -207886471;

	t17 = ((x97*x98)<=(x99^x100));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -1LL;
	volatile int8_t x103 = -7;
	static uint32_t x104 = UINT32_MAX;

	t18 = ((x101*x102)<=(x103^x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = UINT8_MAX;
	int8_t x106 = 1;
	static int8_t x107 = -1;
	volatile uint8_t x108 = 59U;
	volatile int32_t t19 = -3;

	t19 = ((x105*x106)<=(x107^x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MIN;
	int64_t x116 = 8778LL;

	t20 = ((x113*x114)<=(x115^x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	volatile int32_t t21 = 434325558;

	t21 = ((x117*x118)<=(x119^x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = UINT32_MAX;
	static int8_t x126 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t22 = -47060;

	t22 = ((x125*x126)<=(x127^x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x129 = 1629U;
	uint16_t x130 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t23 = -3;

	t23 = ((x129*x130)<=(x131^x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x133 = 3;
	int32_t x134 = 1695;
	static uint32_t x135 = UINT32_MAX;
	static int16_t x136 = -11;
	volatile int32_t t24 = -60536;

	t24 = ((x133*x134)<=(x135^x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x139 = 8298747LLU;
	int16_t x140 = INT16_MAX;
	static volatile int32_t t25 = -6089169;

	t25 = ((x137*x138)<=(x139^x140));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x142 = -1LL;
	uint8_t x143 = 0U;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t26 = -136461;

	t26 = ((x141*x142)<=(x143^x144));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = 2;
	uint16_t x146 = UINT16_MAX;
	uint16_t x148 = 100U;

	t27 = ((x145*x146)<=(x147^x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 0U;
	static int64_t x154 = -1LL;
	volatile int8_t x156 = 1;
	int32_t t28 = 2041;

	t28 = ((x153*x154)<=(x155^x156));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x157 = UINT8_MAX;
	volatile uint32_t x158 = UINT32_MAX;
	volatile int32_t t29 = 133160672;

	t29 = ((x157*x158)<=(x159^x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x161 = INT8_MIN;
	uint8_t x163 = 4U;
	static int16_t x164 = INT16_MAX;
	int32_t t30 = 46652;

	t30 = ((x161*x162)<=(x163^x164));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = 3;
	int64_t x166 = 16137LL;
	int16_t x167 = -1;
	static volatile int32_t x168 = INT32_MIN;
	int32_t t31 = 48548112;

	t31 = ((x165*x166)<=(x167^x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 1540985267930816LLU;
	static int64_t x170 = 563666042LL;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = -3861;

	t32 = ((x169*x170)<=(x171^x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = 5360U;
	volatile uint64_t x174 = 27455338798LLU;
	int32_t x175 = INT32_MIN;
	volatile int16_t x176 = INT16_MIN;
	int32_t t33 = -799;

	t33 = ((x173*x174)<=(x175^x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x185 = -58;
	int32_t x186 = 32049;
	int64_t x188 = -1LL;
	volatile int32_t t34 = 2611;

	t34 = ((x185*x186)<=(x187^x188));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = -101;
	static volatile int8_t x190 = -29;
	volatile uint32_t x191 = 1U;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t35 = 21522;

	t35 = ((x189*x190)<=(x191^x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x193 = -1;
	uint32_t x194 = 60626483U;
	static volatile int8_t x196 = INT8_MIN;

	t36 = ((x193*x194)<=(x195^x196));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x198 = 3;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 2951U;

	t37 = ((x197*x198)<=(x199^x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x202 = UINT32_MAX;
	int16_t x204 = 13576;
	volatile int32_t t38 = -36;

	t38 = ((x201*x202)<=(x203^x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = -1LL;
	int64_t x210 = -1LL;
	static int8_t x211 = INT8_MIN;
	volatile uint8_t x212 = 90U;
	static volatile int32_t t39 = 1;

	t39 = ((x209*x210)<=(x211^x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x213 = INT16_MIN;
	uint64_t x214 = 147611815897LLU;
	uint16_t x215 = 3U;
	volatile int32_t t40 = 148690516;

	t40 = ((x213*x214)<=(x215^x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t41 = 536495;

	t41 = ((x217*x218)<=(x219^x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = -1;
	volatile int16_t x222 = -114;
	int32_t x223 = INT32_MIN;
	static int32_t x224 = INT32_MIN;
	int32_t t42 = 115300111;

	t42 = ((x221*x222)<=(x223^x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x225 = -1;
	static int8_t x226 = 0;
	volatile int8_t x227 = 1;
	int16_t x228 = INT16_MIN;
	int32_t t43 = 3940153;

	t43 = ((x225*x226)<=(x227^x228));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x230 = 11509471;
	volatile uint64_t x232 = UINT64_MAX;
	int32_t t44 = -234;

	t44 = ((x229*x230)<=(x231^x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x233 = UINT16_MAX;
	uint16_t x236 = 1314U;
	int32_t t45 = 2527;

	t45 = ((x233*x234)<=(x235^x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x242 = 51928U;
	uint64_t x243 = 2315LLU;
	volatile int64_t x244 = 7590475299018LL;

	t46 = ((x241*x242)<=(x243^x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x245 = 367365432221496LLU;
	int16_t x246 = -1;
	uint32_t x247 = 67630500U;
	int16_t x248 = INT16_MIN;
	int32_t t47 = 0;

	t47 = ((x245*x246)<=(x247^x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = 52;
	int64_t x251 = -285168897358177823LL;
	volatile int16_t x252 = INT16_MAX;
	int32_t t48 = -33;

	t48 = ((x249*x250)<=(x251^x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x254 = -8228;
	volatile int16_t x255 = 11;

	t49 = ((x253*x254)<=(x255^x256));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = 48U;
	uint32_t x258 = 55625U;
	static int64_t x259 = INT64_MAX;
	uint32_t x260 = UINT32_MAX;
	int32_t t50 = 14672453;

	t50 = ((x257*x258)<=(x259^x260));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = 80U;
	static volatile int8_t x262 = INT8_MIN;
	volatile uint16_t x264 = 705U;
	int32_t t51 = -1977;

	t51 = ((x261*x262)<=(x263^x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = -1;
	volatile int16_t x266 = INT16_MIN;
	static volatile int32_t x267 = -1;
	int8_t x268 = 3;
	int32_t t52 = -61818;

	t52 = ((x265*x266)<=(x267^x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x272 = 1U;
	static volatile int32_t t53 = -554934;

	t53 = ((x269*x270)<=(x271^x272));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x274 = -1;
	uint8_t x275 = 73U;
	uint16_t x276 = 142U;
	volatile int32_t t54 = -334;

	t54 = ((x273*x274)<=(x275^x276));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x277 = 3751204LLU;
	uint8_t x278 = UINT8_MAX;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;

	t55 = ((x277*x278)<=(x279^x280));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = INT8_MAX;
	volatile uint16_t x283 = UINT16_MAX;
	volatile int32_t t56 = 6881528;

	t56 = ((x281*x282)<=(x283^x284));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x288 = -1;
	volatile int32_t t57 = -741673587;

	t57 = ((x285*x286)<=(x287^x288));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 122U;
	int32_t x291 = 61;
	static uint8_t x292 = 109U;

	t58 = ((x289*x290)<=(x291^x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x293 = 23U;
	uint8_t x294 = 3U;
	int64_t x295 = INT64_MIN;
	int32_t t59 = -3;

	t59 = ((x293*x294)<=(x295^x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x297 = -36;
	static int16_t x298 = INT16_MIN;

	t60 = ((x297*x298)<=(x299^x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = 0;
	static int32_t x302 = INT32_MIN;
	int32_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t61 = 1;

	t61 = ((x301*x302)<=(x303^x304));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x305 = INT16_MAX;
	static volatile int8_t x306 = 0;
	volatile uint64_t x307 = 55100666829LLU;
	uint32_t x308 = 926784928U;
	int32_t t62 = 65;

	t62 = ((x305*x306)<=(x307^x308));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x309 = INT8_MAX;
	static volatile int8_t x310 = -1;
	int32_t x312 = -1;
	volatile int32_t t63 = 12964344;

	t63 = ((x309*x310)<=(x311^x312));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x313 = 14729852843477705LLU;
	volatile int8_t x314 = INT8_MAX;
	volatile uint16_t x316 = 0U;
	volatile int32_t t64 = -124524650;

	t64 = ((x313*x314)<=(x315^x316));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x317 = 106797936U;
	volatile int8_t x318 = INT8_MIN;
	uint32_t x320 = 141221697U;
	volatile int32_t t65 = 621137594;

	t65 = ((x317*x318)<=(x319^x320));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x322 = UINT8_MAX;
	static uint64_t x323 = 545131LLU;
	volatile uint16_t x324 = 488U;
	int32_t t66 = 124;

	t66 = ((x321*x322)<=(x323^x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	uint8_t x328 = 26U;
	static int32_t t67 = 248;

	t67 = ((x325*x326)<=(x327^x328));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x330 = UINT16_MAX;
	static uint64_t x332 = 716217412687LLU;
	volatile int32_t t68 = -110499739;

	t68 = ((x329*x330)<=(x331^x332));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -1;
	int32_t x334 = -1;
	volatile uint32_t x335 = UINT32_MAX;
	int8_t x336 = 11;
	volatile int32_t t69 = 2812798;

	t69 = ((x333*x334)<=(x335^x336));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x354 = 76U;
	int8_t x356 = INT8_MAX;
	volatile int32_t t70 = -81676982;

	t70 = ((x353*x354)<=(x355^x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	uint64_t x360 = UINT64_MAX;

	t71 = ((x357*x358)<=(x359^x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x362 = 1U;

	t72 = ((x361*x362)<=(x363^x364));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 4308643U;
	uint64_t x376 = 524146092197LLU;
	volatile int32_t t73 = -769449;

	t73 = ((x373*x374)<=(x375^x376));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;

	t74 = ((x377*x378)<=(x379^x380));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x383 = UINT8_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t75 = 6;

	t75 = ((x381*x382)<=(x383^x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	volatile int32_t t76 = 1;

	t76 = ((x389*x390)<=(x391^x392));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x397 = -16219654380292LL;
	uint8_t x398 = 1U;
	static int16_t x399 = INT16_MIN;
	int8_t x400 = 10;
	int32_t t77 = -350;

	t77 = ((x397*x398)<=(x399^x400));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x409 = -1;
	int16_t x410 = INT16_MIN;
	static uint32_t x411 = 4U;
	uint16_t x412 = 59U;
	volatile int32_t t78 = -1;

	t78 = ((x409*x410)<=(x411^x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x417 = 10818954509445LLU;
	uint8_t x418 = 0U;
	int16_t x419 = -1;
	volatile int64_t x420 = -43144531712219492LL;

	t79 = ((x417*x418)<=(x419^x420));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x421 = 104U;
	uint32_t x422 = 35671U;
	uint16_t x423 = 2U;
	volatile uint16_t x424 = 764U;
	int32_t t80 = 0;

	t80 = ((x421*x422)<=(x423^x424));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = -1728237089224LL;
	int32_t t81 = -81;

	t81 = ((x425*x426)<=(x427^x428));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x429 = 48039263378LL;
	uint64_t x430 = 11180LLU;
	int64_t x431 = 6923813LL;
	int64_t x432 = INT64_MAX;
	int32_t t82 = 71;

	t82 = ((x429*x430)<=(x431^x432));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x433 = -1;
	volatile int8_t x434 = INT8_MAX;
	uint8_t x435 = 1U;
	int8_t x436 = INT8_MIN;
	static int32_t t83 = -2211622;

	t83 = ((x433*x434)<=(x435^x436));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x437 = INT8_MAX;
	volatile int32_t x438 = 224954;
	uint8_t x439 = 79U;
	volatile int64_t x440 = -485826281826494LL;
	static int32_t t84 = 241062;

	t84 = ((x437*x438)<=(x439^x440));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x442 = 15620699LL;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = 138897U;
	int32_t t85 = 4479081;

	t85 = ((x441*x442)<=(x443^x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MIN;
	static volatile int64_t x448 = INT64_MAX;
	int32_t t86 = -32932;

	t86 = ((x445*x446)<=(x447^x448));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x449 = INT8_MIN;
	uint8_t x450 = UINT8_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x449*x450)<=(x451^x452));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x453 = 115U;
	int16_t x454 = 6;
	volatile int8_t x455 = 1;
	int8_t x456 = INT8_MAX;
	volatile int32_t t88 = 237;

	t88 = ((x453*x454)<=(x455^x456));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x457 = -534005140LL;
	uint8_t x458 = 6U;
	int32_t x460 = -1029353;
	static volatile int32_t t89 = 25771;

	t89 = ((x457*x458)<=(x459^x460));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x465 = INT64_MIN;
	volatile uint64_t x466 = 81183292LLU;
	static int64_t x467 = INT64_MIN;
	int32_t t90 = 2;

	t90 = ((x465*x466)<=(x467^x468));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x469 = INT8_MIN;
	volatile uint8_t x470 = UINT8_MAX;
	int8_t x471 = -8;
	volatile int8_t x472 = INT8_MIN;
	int32_t t91 = 9;

	t91 = ((x469*x470)<=(x471^x472));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x473 = -1;
	static int64_t x474 = -2034209LL;
	volatile int32_t x475 = INT32_MIN;
	volatile uint64_t x476 = 215332787LLU;
	int32_t t92 = -62;

	t92 = ((x473*x474)<=(x475^x476));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x477 = -1;
	volatile uint32_t x480 = 2602568U;

	t93 = ((x477*x478)<=(x479^x480));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x481 = 10127482U;
	static int64_t x482 = -1LL;
	int32_t x483 = -266955118;
	int32_t x484 = INT32_MAX;
	volatile int32_t t94 = -7;

	t94 = ((x481*x482)<=(x483^x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x493 = -1;
	volatile int32_t x496 = -193374;
	int32_t t95 = 27238327;

	t95 = ((x493*x494)<=(x495^x496));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x497 = -1;
	uint32_t x498 = 159255421U;
	int32_t x500 = -59;
	volatile int32_t t96 = -523525637;

	t96 = ((x497*x498)<=(x499^x500));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x505 = 115U;
	volatile int8_t x507 = -1;
	int32_t t97 = 4856333;

	t97 = ((x505*x506)<=(x507^x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	volatile int64_t x511 = 1LL;
	uint16_t x512 = UINT16_MAX;

	t98 = ((x509*x510)<=(x511^x512));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x517 = 15U;
	volatile int64_t x518 = 88979LL;
	uint64_t x519 = 92984LLU;
	static int8_t x520 = -1;
	int32_t t99 = -7;

	t99 = ((x517*x518)<=(x519^x520));

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

