#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = INT32_MIN;
volatile uint64_t x14 = 23LLU;
int64_t x15 = 1LL;
static int16_t x24 = -97;
static volatile int32_t t4 = -289839079;
int32_t x28 = INT32_MAX;
volatile int32_t t5 = -96;
uint64_t x32 = 279883574270LLU;
int32_t x41 = -1;
int8_t x54 = INT8_MIN;
static volatile int32_t t11 = 206555;
int64_t x68 = -1LL;
int32_t t13 = 6829682;
static int16_t x72 = -26;
volatile int64_t x83 = INT64_MIN;
volatile int32_t x99 = -2689;
static int32_t x100 = -51651;
static uint8_t x105 = 1U;
uint8_t x107 = UINT8_MAX;
volatile int32_t t23 = 4827;
int32_t x119 = 626;
volatile int64_t x121 = INT64_MIN;
static uint64_t x122 = 389673764914523234LLU;
static volatile int32_t t26 = 103538982;
volatile uint64_t x147 = 16223113LLU;
int16_t x152 = INT16_MIN;
static volatile uint32_t x156 = 1U;
int16_t x160 = 0;
int64_t x162 = 573061771349048851LL;
volatile uint32_t x169 = 1U;
static uint16_t x175 = 4U;
int32_t t36 = 17629621;
volatile int64_t x200 = INT64_MAX;
int32_t t39 = -63568705;
volatile uint32_t x204 = 288U;
uint32_t x223 = 265543497U;
int32_t t44 = 38;
uint64_t x229 = 127661802LLU;
int64_t x231 = 63LL;
uint8_t x242 = 24U;
uint64_t x243 = 5509LLU;
volatile int32_t t48 = -3808;
uint8_t x270 = 7U;
uint16_t x271 = UINT16_MAX;
volatile int32_t t52 = 12;
static uint64_t x278 = 24282359705LLU;
int8_t x280 = -1;
int16_t x284 = 1003;
volatile uint64_t x309 = UINT64_MAX;
uint64_t x314 = UINT64_MAX;
volatile uint16_t x316 = 26941U;
volatile int32_t t63 = 0;
uint8_t x328 = UINT8_MAX;
int8_t x335 = INT8_MIN;
int8_t x342 = 3;
int8_t x343 = -9;
volatile int32_t x348 = INT32_MAX;
int16_t x355 = -105;
volatile int32_t t70 = 2;
static int16_t x379 = INT16_MAX;
volatile int32_t t74 = 50237;
static int32_t t75 = -12787;
uint32_t x387 = 37905925U;
int32_t t77 = -37262;
uint32_t x393 = UINT32_MAX;
int32_t t78 = 25225969;
int8_t x397 = INT8_MIN;
uint32_t x400 = UINT32_MAX;
int16_t x406 = INT16_MIN;
int8_t x410 = INT8_MIN;
uint8_t x412 = UINT8_MAX;
static uint64_t x423 = UINT64_MAX;
int32_t x433 = 25;
int8_t x436 = -26;
int32_t t85 = -1442829;
int64_t x446 = INT64_MIN;
int8_t x454 = 8;
int32_t x459 = INT32_MIN;
uint8_t x466 = UINT8_MAX;
volatile int32_t t93 = -434;
volatile int32_t x473 = INT32_MIN;
volatile int32_t t94 = -29290904;
uint32_t x484 = UINT32_MAX;
int16_t x487 = INT16_MIN;
volatile int16_t x492 = INT16_MAX;


void f0(void) {
	uint32_t x5 = 4393U;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 1U;
	int16_t x8 = INT16_MIN;
	int32_t t0 = -11873971;

	t0 = ((x5*x6)<=(x7|x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 12400U;
	volatile int8_t x10 = INT8_MIN;
	volatile int32_t x11 = -1;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = -206;

	t1 = ((x9*x10)<=(x11|x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x16 = -3073;
	volatile int32_t t2 = -1;

	t2 = ((x13*x14)<=(x15|x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 20914LLU;
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	static volatile int16_t x20 = -2165;
	static int32_t t3 = 328449880;

	t3 = ((x17*x18)<=(x19|x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 24823LLU;
	int16_t x22 = 1770;
	static uint16_t x23 = 1869U;

	t4 = ((x21*x22)<=(x23|x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static volatile int16_t x26 = -810;
	int8_t x27 = INT8_MAX;

	t5 = ((x25*x26)<=(x27|x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -25;
	int8_t x30 = -1;
	static int32_t x31 = -44164;
	volatile int32_t t6 = 18751;

	t6 = ((x29*x30)<=(x31|x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = -1;
	static uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	volatile uint64_t x36 = 7814216659LLU;
	static volatile int32_t t7 = -38276;

	t7 = ((x33*x34)<=(x35|x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 160U;
	volatile int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	int64_t x40 = -1LL;
	int32_t t8 = 51985350;

	t8 = ((x37*x38)<=(x39|x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MIN;
	volatile uint64_t x44 = 237683LLU;
	int32_t t9 = -1100438;

	t9 = ((x41*x42)<=(x43|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -376;
	int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t10 = 897;

	t10 = ((x45*x46)<=(x47|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = UINT8_MAX;
	static int32_t x55 = INT32_MIN;
	static volatile int64_t x56 = -1LL;

	t11 = ((x53*x54)<=(x55|x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x57 = INT8_MAX;
	static int32_t x58 = -1;
	int16_t x59 = -1;
	int32_t x60 = INT32_MAX;
	volatile int32_t t12 = 1520768;

	t12 = ((x57*x58)<=(x59|x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = 1186U;
	static int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;

	t13 = ((x65*x66)<=(x67|x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = 0U;
	uint16_t x71 = 20469U;
	static int32_t t14 = 22;

	t14 = ((x69*x70)<=(x71|x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x77 = 296U;
	int64_t x78 = -156506993LL;
	int8_t x79 = -1;
	volatile int8_t x80 = INT8_MIN;
	static volatile int32_t t15 = 76786996;

	t15 = ((x77*x78)<=(x79|x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 1U;
	static int64_t x82 = 535004893824660LL;
	uint64_t x84 = 2946353049LLU;
	volatile int32_t t16 = 2548;

	t16 = ((x81*x82)<=(x83|x84));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -1;
	int64_t x86 = -2051062102091038LL;
	volatile int16_t x87 = INT16_MAX;
	uint16_t x88 = 96U;
	int32_t t17 = 1559;

	t17 = ((x85*x86)<=(x87|x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = -1;
	volatile int8_t x90 = 14;
	uint64_t x91 = 8157886503LLU;
	static int16_t x92 = 955;
	volatile int32_t t18 = 80574461;

	t18 = ((x89*x90)<=(x91|x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = -1;
	uint16_t x94 = 193U;
	int8_t x95 = -1;
	int64_t x96 = INT64_MAX;
	volatile int32_t t19 = -849431315;

	t19 = ((x93*x94)<=(x95|x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x97 = 8U;
	static uint8_t x98 = UINT8_MAX;
	int32_t t20 = -424533058;

	t20 = ((x97*x98)<=(x99|x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	int16_t x102 = INT16_MAX;
	int8_t x103 = -10;
	int8_t x104 = INT8_MIN;
	int32_t t21 = -1602069;

	t21 = ((x101*x102)<=(x103|x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = UINT8_MAX;
	int64_t x108 = INT64_MAX;
	volatile int32_t t22 = 0;

	t22 = ((x105*x106)<=(x107|x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	static int8_t x110 = -1;
	int16_t x111 = -1;
	uint32_t x112 = 18451600U;

	t23 = ((x109*x110)<=(x111|x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 3U;
	uint8_t x114 = 34U;
	int16_t x115 = INT16_MIN;
	static volatile uint64_t x116 = 20LLU;
	int32_t t24 = 799064194;

	t24 = ((x113*x114)<=(x115|x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x117 = -1;
	static volatile int16_t x118 = INT16_MIN;
	volatile int32_t x120 = INT32_MAX;
	static int32_t t25 = 1072652;

	t25 = ((x117*x118)<=(x119|x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x123 = 0U;
	volatile uint16_t x124 = 10U;

	t26 = ((x121*x122)<=(x123|x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 15U;
	static uint16_t x126 = 3U;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t27 = 38404;

	t27 = ((x125*x126)<=(x127|x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -1LL;
	static int64_t x130 = INT64_MAX;
	volatile int32_t x131 = 13505;
	int8_t x132 = INT8_MIN;
	int32_t t28 = 54646;

	t28 = ((x129*x130)<=(x131|x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -112374;
	uint32_t x146 = 10197U;
	static int32_t x148 = -1;
	static volatile int32_t t29 = -21;

	t29 = ((x145*x146)<=(x147|x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = -13422;
	volatile int16_t x150 = INT16_MAX;
	volatile uint32_t x151 = 1096U;
	volatile int32_t t30 = 3468523;

	t30 = ((x149*x150)<=(x151|x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 129U;
	int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	int32_t t31 = 51978;

	t31 = ((x153*x154)<=(x155|x156));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MAX;
	int16_t x158 = -1;
	static uint8_t x159 = 7U;
	static int32_t t32 = 13742;

	t32 = ((x157*x158)<=(x159|x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -1;
	int8_t x163 = -1;
	volatile int32_t x164 = INT32_MAX;
	volatile int32_t t33 = -67081;

	t33 = ((x161*x162)<=(x163|x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x170 = INT8_MIN;
	volatile int32_t x171 = INT32_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t34 = -6239;

	t34 = ((x169*x170)<=(x171|x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	int32_t x176 = -1;
	volatile int32_t t35 = -9;

	t35 = ((x173*x174)<=(x175|x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = -1LL;
	int64_t x178 = -1LL;
	uint32_t x179 = 20560596U;
	int32_t x180 = INT32_MIN;

	t36 = ((x177*x178)<=(x179|x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -1;
	int32_t x190 = -1;
	static volatile int8_t x191 = -1;
	static int64_t x192 = -8274276LL;
	static volatile int32_t t37 = -223713675;

	t37 = ((x189*x190)<=(x191|x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = 3;
	int32_t x194 = -11;
	volatile uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t38 = -126217;

	t38 = ((x193*x194)<=(x195|x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x197 = 29;
	int16_t x198 = INT16_MAX;
	int16_t x199 = INT16_MAX;

	t39 = ((x197*x198)<=(x199|x200));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = 0LL;
	int32_t x202 = -103;
	uint32_t x203 = 0U;
	volatile int32_t t40 = -8;

	t40 = ((x201*x202)<=(x203|x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -135;
	uint64_t x206 = 2187245170071901980LLU;
	volatile int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t41 = 1;

	t41 = ((x205*x206)<=(x207|x208));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = -1;
	int8_t x214 = -1;
	static volatile int64_t x215 = INT64_MIN;
	int64_t x216 = 2657847099LL;
	int32_t t42 = -818;

	t42 = ((x213*x214)<=(x215|x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = -1LL;
	int8_t x218 = INT8_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = 99;
	int32_t t43 = 61498106;

	t43 = ((x217*x218)<=(x219|x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x221 = 3U;
	int32_t x222 = -133029;
	int16_t x224 = INT16_MIN;

	t44 = ((x221*x222)<=(x223|x224));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x225 = -8;
	int32_t x226 = -781545;
	int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t45 = 444745;

	t45 = ((x225*x226)<=(x227|x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x230 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;
	int32_t t46 = 375;

	t46 = ((x229*x230)<=(x231|x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x233 = 22LL;
	volatile int64_t x234 = 2156210328LL;
	int16_t x235 = 1275;
	int16_t x236 = INT16_MAX;
	volatile int32_t t47 = 886867;

	t47 = ((x233*x234)<=(x235|x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = -1;
	volatile int16_t x244 = INT16_MIN;

	t48 = ((x241*x242)<=(x243|x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x245 = 1U;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MAX;
	volatile int16_t x248 = 11807;
	int32_t t49 = -6;

	t49 = ((x245*x246)<=(x247|x248));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 1U;
	uint64_t x254 = UINT64_MAX;
	static int16_t x255 = -3;
	uint8_t x256 = 0U;
	int32_t t50 = 553320964;

	t50 = ((x253*x254)<=(x255|x256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 254U;
	int64_t x267 = 966319LL;
	int8_t x268 = INT8_MIN;
	volatile int32_t t51 = 320396;

	t51 = ((x265*x266)<=(x267|x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x269 = 2460U;
	uint8_t x272 = 2U;

	t52 = ((x269*x270)<=(x271|x272));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x277 = 25377724U;
	volatile uint32_t x279 = 23765U;
	int32_t t53 = -529369279;

	t53 = ((x277*x278)<=(x279|x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x281 = -1LL;
	int8_t x282 = -41;
	volatile int8_t x283 = INT8_MAX;
	volatile int32_t t54 = -59;

	t54 = ((x281*x282)<=(x283|x284));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int8_t x287 = -1;
	volatile int32_t x288 = 11;
	static volatile int32_t t55 = -46282712;

	t55 = ((x285*x286)<=(x287|x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x289 = 1299557LLU;
	static int8_t x290 = INT8_MIN;
	int32_t x291 = -38509;
	static int8_t x292 = INT8_MIN;
	int32_t t56 = 36007029;

	t56 = ((x289*x290)<=(x291|x292));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x297 = -1;
	int8_t x298 = -1;
	volatile int8_t x299 = -1;
	int32_t x300 = INT32_MIN;
	volatile int32_t t57 = 89;

	t57 = ((x297*x298)<=(x299|x300));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x301 = UINT64_MAX;
	static uint32_t x302 = 20U;
	int64_t x303 = INT64_MAX;
	uint16_t x304 = 41U;
	int32_t t58 = -561769;

	t58 = ((x301*x302)<=(x303|x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = -1;
	int64_t x307 = INT64_MIN;
	static int32_t x308 = INT32_MIN;
	int32_t t59 = 7;

	t59 = ((x305*x306)<=(x307|x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t60 = 5;

	t60 = ((x309*x310)<=(x311|x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x313 = 2030230U;
	static uint8_t x315 = UINT8_MAX;
	int32_t t61 = 3744022;

	t61 = ((x313*x314)<=(x315|x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x317 = 4976248LLU;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MIN;
	int8_t x320 = -1;
	volatile int32_t t62 = 67;

	t62 = ((x317*x318)<=(x319|x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x321 = 28683541221546LLU;
	int32_t x322 = 225;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;

	t63 = ((x321*x322)<=(x323|x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 10814;
	int64_t x327 = -645079960107641199LL;
	static volatile int32_t t64 = -14804;

	t64 = ((x325*x326)<=(x327|x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	volatile int16_t x332 = -1;
	int32_t t65 = -66877604;

	t65 = ((x329*x330)<=(x331|x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = 2;
	static uint32_t x336 = UINT32_MAX;
	volatile int32_t t66 = -12592;

	t66 = ((x333*x334)<=(x335|x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x337 = 28643191U;
	static int32_t x338 = INT32_MIN;
	uint32_t x339 = 70077387U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t67 = 50;

	t67 = ((x337*x338)<=(x339|x340));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x341 = 23U;
	int32_t x344 = INT32_MAX;
	int32_t t68 = 39394;

	t68 = ((x341*x342)<=(x343|x344));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MAX;
	volatile uint64_t x346 = UINT64_MAX;
	static volatile int64_t x347 = -1LL;
	int32_t t69 = -399194813;

	t69 = ((x345*x346)<=(x347|x348));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x353 = 380422467LLU;
	uint8_t x354 = 2U;
	uint16_t x356 = UINT16_MAX;

	t70 = ((x353*x354)<=(x355|x356));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x357 = 167837U;
	int8_t x358 = INT8_MIN;
	static volatile int8_t x359 = INT8_MIN;
	volatile uint32_t x360 = 55988341U;
	volatile int32_t t71 = 53607;

	t71 = ((x357*x358)<=(x359|x360));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x361 = -21;
	int64_t x362 = -1LL;
	uint32_t x363 = UINT32_MAX;
	uint16_t x364 = 10836U;
	int32_t t72 = 33714;

	t72 = ((x361*x362)<=(x363|x364));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x365 = 10;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = 259U;
	static int64_t x368 = -1LL;
	int32_t t73 = 1331;

	t73 = ((x365*x366)<=(x367|x368));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x377 = INT8_MIN;
	volatile uint8_t x378 = 3U;
	uint16_t x380 = 1U;

	t74 = ((x377*x378)<=(x379|x380));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = 162674877367LL;
	uint32_t x382 = 2834077U;
	int32_t x383 = INT32_MIN;
	int64_t x384 = 4333320457599464LL;

	t75 = ((x381*x382)<=(x383|x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = 471;
	int8_t x386 = 29;
	int32_t x388 = -1;
	volatile int32_t t76 = 10641601;

	t76 = ((x385*x386)<=(x387|x388));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = 20989LLU;
	int16_t x390 = INT16_MIN;
	static int64_t x391 = -1LL;
	volatile uint32_t x392 = 22U;

	t77 = ((x389*x390)<=(x391|x392));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x394 = -1;
	volatile uint16_t x395 = 8U;
	int8_t x396 = -1;

	t78 = ((x393*x394)<=(x395|x396));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x398 = 61730585LL;
	uint8_t x399 = UINT8_MAX;
	int32_t t79 = 81345588;

	t79 = ((x397*x398)<=(x399|x400));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x405 = INT8_MAX;
	int16_t x407 = 641;
	volatile uint8_t x408 = 21U;
	static int32_t t80 = 31;

	t80 = ((x405*x406)<=(x407|x408));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = INT8_MIN;
	int16_t x411 = -1;
	int32_t t81 = 128;

	t81 = ((x409*x410)<=(x411|x412));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x421 = 4U;
	static uint64_t x422 = 343017782672LLU;
	uint8_t x424 = 0U;
	volatile int32_t t82 = 12976;

	t82 = ((x421*x422)<=(x423|x424));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = 1;
	static int16_t x426 = INT16_MAX;
	uint64_t x427 = UINT64_MAX;
	uint8_t x428 = 71U;
	volatile int32_t t83 = -228;

	t83 = ((x425*x426)<=(x427|x428));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x429 = INT16_MAX;
	uint16_t x430 = 137U;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 114U;
	int32_t t84 = 50;

	t84 = ((x429*x430)<=(x431|x432));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x434 = 2;
	static int16_t x435 = INT16_MIN;

	t85 = ((x433*x434)<=(x435|x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x437 = 57U;
	static uint64_t x438 = 361364371LLU;
	static int8_t x439 = INT8_MAX;
	int8_t x440 = 0;
	static volatile int32_t t86 = -1;

	t86 = ((x437*x438)<=(x439|x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = 5;
	static uint8_t x442 = UINT8_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t87 = 13270743;

	t87 = ((x441*x442)<=(x443|x444));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x445 = 429490928305LLU;
	static uint16_t x447 = UINT16_MAX;
	volatile int16_t x448 = INT16_MIN;
	volatile int32_t t88 = -249598532;

	t88 = ((x445*x446)<=(x447|x448));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x449 = -1;
	static int32_t x450 = -1;
	uint8_t x451 = 31U;
	uint16_t x452 = 92U;
	volatile int32_t t89 = 7;

	t89 = ((x449*x450)<=(x451|x452));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x453 = INT8_MIN;
	volatile int64_t x455 = 254LL;
	int32_t x456 = INT32_MAX;
	volatile int32_t t90 = -2354074;

	t90 = ((x453*x454)<=(x455|x456));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x457 = INT64_MAX;
	int8_t x458 = 1;
	int8_t x460 = -1;
	int32_t t91 = -1;

	t91 = ((x457*x458)<=(x459|x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = 2;
	int8_t x462 = INT8_MIN;
	static volatile uint64_t x463 = UINT64_MAX;
	volatile int32_t x464 = INT32_MIN;
	volatile int32_t t92 = 9;

	t92 = ((x461*x462)<=(x463|x464));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x465 = INT8_MAX;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = -1;

	t93 = ((x465*x466)<=(x467|x468));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x474 = UINT64_MAX;
	int64_t x475 = INT64_MIN;
	uint32_t x476 = UINT32_MAX;

	t94 = ((x473*x474)<=(x475|x476));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x477 = UINT16_MAX;
	int16_t x478 = 7082;
	static int8_t x479 = INT8_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t95 = 1560201;

	t95 = ((x477*x478)<=(x479|x480));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x481 = -1;
	int8_t x482 = INT8_MIN;
	uint16_t x483 = UINT16_MAX;
	volatile int32_t t96 = 165300550;

	t96 = ((x481*x482)<=(x483|x484));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x485 = 2U;
	int16_t x486 = INT16_MIN;
	static uint8_t x488 = UINT8_MAX;
	volatile int32_t t97 = -1770949;

	t97 = ((x485*x486)<=(x487|x488));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x489 = 0;
	int8_t x490 = INT8_MAX;
	uint8_t x491 = UINT8_MAX;
	static int32_t t98 = 188913307;

	t98 = ((x489*x490)<=(x491|x492));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x493 = 31;
	uint8_t x494 = 52U;
	volatile int8_t x495 = INT8_MAX;
	uint8_t x496 = 3U;
	static volatile int32_t t99 = 24114620;

	t99 = ((x493*x494)<=(x495|x496));

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

