#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 11U;
volatile uint8_t x8 = 76U;
int32_t t2 = -67014164;
uint64_t x13 = 2155211LLU;
int32_t t3 = 1;
volatile uint32_t x19 = UINT32_MAX;
int64_t x24 = -1LL;
volatile int32_t x26 = 939061;
static uint8_t x46 = 1U;
volatile int8_t x48 = INT8_MAX;
volatile int32_t t7 = -89293;
int16_t x55 = INT16_MIN;
uint8_t x56 = 11U;
int16_t x62 = INT16_MIN;
uint32_t x63 = 1U;
volatile uint8_t x65 = 98U;
int32_t t10 = -373;
int64_t x69 = INT64_MIN;
uint32_t x71 = 45748699U;
volatile int64_t x76 = -1LL;
int32_t x79 = INT32_MIN;
volatile int32_t t13 = -294535933;
int16_t x83 = INT16_MIN;
uint8_t x84 = 0U;
static volatile int32_t t14 = 52550;
int32_t t16 = 6733;
uint64_t x96 = 857515544793186975LLU;
static int64_t x103 = -8141277LL;
int32_t x117 = -1;
int64_t x119 = INT64_MAX;
static volatile int32_t t22 = -362;
int8_t x130 = INT8_MIN;
uint32_t x131 = 45748U;
int32_t t25 = 56627;
int8_t x142 = INT8_MAX;
uint64_t x143 = UINT64_MAX;
int16_t x144 = -9;
volatile int32_t t27 = 127;
volatile int64_t x145 = INT64_MIN;
int32_t t28 = 399160654;
volatile int64_t x163 = -1LL;
volatile int32_t t30 = -69050;
static volatile int16_t x170 = INT16_MAX;
uint64_t x172 = UINT64_MAX;
int8_t x184 = INT8_MIN;
static int8_t x194 = INT8_MAX;
static int32_t t38 = -1018;
volatile int64_t x217 = INT64_MIN;
int16_t x221 = INT16_MIN;
volatile int64_t x225 = INT64_MIN;
uint16_t x227 = 0U;
int16_t x278 = INT16_MIN;
uint16_t x280 = 0U;
uint32_t x282 = 4953615U;
volatile int32_t t52 = 1;
static int16_t x300 = -1;
static int64_t x323 = -1LL;
int32_t t61 = 0;
static uint32_t x346 = 2U;
static int8_t x348 = 3;
int16_t x355 = 0;
int64_t x358 = -11LL;
int16_t x362 = INT16_MIN;
volatile int32_t t69 = -257792;
int32_t t70 = -38;
uint32_t x379 = 1U;
int32_t t71 = 1707048;
int32_t x385 = INT32_MIN;
static volatile int8_t x425 = -3;
int8_t x427 = INT8_MIN;
int16_t x432 = INT16_MAX;
uint16_t x435 = 37U;
int64_t x436 = -27513816965159562LL;
static volatile uint64_t x448 = UINT64_MAX;
static int16_t x451 = INT16_MIN;
int32_t t80 = -27036;
volatile int64_t x468 = -1LL;
volatile int64_t x473 = INT64_MAX;
uint8_t x476 = 2U;
static volatile int32_t t85 = -4385;
int64_t x508 = -1LL;
uint64_t x517 = 1905018096LLU;
int32_t t90 = 63314782;
static int8_t x527 = -1;
int32_t t91 = 588;
static uint32_t x551 = 651911889U;
uint16_t x556 = 3223U;
int16_t x557 = INT16_MAX;
volatile int8_t x566 = INT8_MIN;
volatile uint32_t x568 = 7392804U;


void f0(void) {
	int16_t x1 = 21;
	uint64_t x3 = 202130975157LLU;
	int32_t x4 = -238;
	int32_t t0 = -1;

	t0 = (x1<(x2+(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int64_t x6 = INT64_MAX;
	static int16_t x7 = -6;
	int32_t t1 = 17582;

	t1 = (x5<(x6+(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -12623015;
	uint16_t x10 = 12686U;
	uint8_t x11 = UINT8_MAX;
	volatile uint8_t x12 = 7U;

	t2 = (x9<(x10+(x11*x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x14 = 0;
	int64_t x15 = -2557933929LL;
	uint64_t x16 = 8728311205512LLU;

	t3 = (x13<(x14+(x15*x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	uint64_t x18 = 913343334LLU;
	static uint32_t x20 = 5229865U;
	int32_t t4 = -263419008;

	t4 = (x17<(x18+(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 0LLU;
	int8_t x22 = -1;
	static int16_t x23 = -1;
	int32_t t5 = -45442;

	t5 = (x21<(x22+(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = INT64_MIN;
	int16_t x27 = -1;
	int32_t x28 = -1;
	static volatile int32_t t6 = -510764;

	t6 = (x25<(x26+(x27*x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x45 = -1;
	uint32_t x47 = 55U;

	t7 = (x45<(x46+(x47*x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x53 = 7628LLU;
	int64_t x54 = 1133139431443483LL;
	int32_t t8 = -5701;

	t8 = (x53<(x54+(x55*x56)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = 30U;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t9 = -5;

	t9 = (x61<(x62+(x63*x64)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x66 = -1;
	static uint32_t x67 = 8U;
	volatile uint8_t x68 = 58U;

	t10 = (x65<(x66+(x67*x68)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x70 = 143819U;
	static volatile int16_t x72 = -1;
	volatile int32_t t11 = 8041222;

	t11 = (x69<(x70+(x71*x72)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	uint32_t x75 = 57U;
	static int32_t t12 = -1;

	t12 = (x73<(x74+(x75*x76)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x77 = 2;
	uint64_t x78 = 95449944654423821LLU;
	uint64_t x80 = 12287530413157LLU;

	t13 = (x77<(x78+(x79*x80)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 1U;
	volatile int64_t x82 = INT64_MIN;

	t14 = (x81<(x82+(x83*x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x85 = 6U;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = 0;
	int32_t x88 = -28949155;
	static volatile int32_t t15 = 1196;

	t15 = (x85<(x86+(x87*x88)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = 19638U;
	static uint16_t x92 = 10065U;

	t16 = (x89<(x90+(x91*x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x93 = 1607814U;
	static uint32_t x94 = UINT32_MAX;
	uint8_t x95 = 1U;
	int32_t t17 = -97396404;

	t17 = (x93<(x94+(x95*x96)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x101 = INT32_MIN;
	static int32_t x102 = -1;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t18 = 289958;

	t18 = (x101<(x102+(x103*x104)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 374009800367949269LLU;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 64U;
	uint16_t x108 = 194U;
	volatile int32_t t19 = 0;

	t19 = (x105<(x106+(x107*x108)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = UINT32_MAX;
	volatile int8_t x116 = 44;
	int32_t t20 = -7929;

	t20 = (x113<(x114+(x115*x116)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x118 = INT64_MIN;
	uint64_t x120 = 540240493182555299LLU;
	volatile int32_t t21 = -78;

	t21 = (x117<(x118+(x119*x120)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x121 = INT8_MIN;
	static uint8_t x122 = UINT8_MAX;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;

	t22 = (x121<(x122+(x123*x124)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = 1U;
	int8_t x127 = 0;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t23 = 1;

	t23 = (x125<(x126+(x127*x128)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x129 = 71;
	uint32_t x132 = 52891801U;
	int32_t t24 = -16585995;

	t24 = (x129<(x130+(x131*x132)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x133 = 94498532873614771LL;
	int64_t x134 = 2607549581111LL;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -1LL;

	t25 = (x133<(x134+(x135*x136)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x137 = 81743210368LLU;
	static int16_t x138 = INT16_MAX;
	static int16_t x139 = INT16_MIN;
	static volatile int16_t x140 = INT16_MIN;
	static int32_t t26 = -434495800;

	t26 = (x137<(x138+(x139*x140)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = INT32_MAX;

	t27 = (x141<(x142+(x143*x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 7U;

	t28 = (x145<(x146+(x147*x148)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 15549U;
	int16_t x158 = 22;
	int8_t x159 = 0;
	static int32_t x160 = -1;
	int32_t t29 = -1385982;

	t29 = (x157<(x158+(x159*x160)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = -41214;
	int64_t x162 = -317981525468LL;
	int8_t x164 = INT8_MIN;

	t30 = (x161<(x162+(x163*x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = 1824;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t t31 = -15491659;

	t31 = (x169<(x170+(x171*x172)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = -99LL;
	int8_t x174 = 1;
	int8_t x175 = INT8_MIN;
	volatile uint16_t x176 = 1U;
	volatile int32_t t32 = -80;

	t32 = (x173<(x174+(x175*x176)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x177 = -1;
	static int8_t x178 = -1;
	static uint8_t x179 = 38U;
	int32_t x180 = -1;
	static int32_t t33 = 7996917;

	t33 = (x177<(x178+(x179*x180)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MAX;
	uint8_t x183 = UINT8_MAX;
	static volatile int32_t t34 = -7;

	t34 = (x181<(x182+(x183*x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x185 = -1;
	int64_t x186 = -496163378006LL;
	static uint8_t x187 = 47U;
	uint32_t x188 = UINT32_MAX;
	static int32_t t35 = -383993;

	t35 = (x185<(x186+(x187*x188)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MAX;
	volatile uint8_t x191 = 5U;
	int16_t x192 = -1;
	int32_t t36 = 0;

	t36 = (x189<(x190+(x191*x192)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MIN;
	int32_t x195 = 15;
	int32_t x196 = -1;
	static volatile int32_t t37 = -89897;

	t37 = (x193<(x194+(x195*x196)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x205 = 24448U;
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 393U;
	int16_t x208 = -1;

	t38 = (x205<(x206+(x207*x208)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x218 = INT8_MAX;
	static volatile uint16_t x219 = 12U;
	int64_t x220 = -5146634LL;
	volatile int32_t t39 = -2448010;

	t39 = (x217<(x218+(x219*x220)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x222 = -1LL;
	uint64_t x223 = 1055046914928LLU;
	volatile int16_t x224 = -1;
	int32_t t40 = -198769138;

	t40 = (x221<(x222+(x223*x224)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x226 = INT32_MIN;
	int32_t x228 = -1;
	volatile int32_t t41 = 63;

	t41 = (x225<(x226+(x227*x228)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = 17;
	uint64_t x230 = UINT64_MAX;
	static int16_t x231 = INT16_MIN;
	uint8_t x232 = 15U;
	static int32_t t42 = 1;

	t42 = (x229<(x230+(x231*x232)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = -2;
	int8_t x234 = -6;
	volatile uint64_t x235 = 24LLU;
	uint64_t x236 = 3327963690LLU;
	static int32_t t43 = 219534;

	t43 = (x233<(x234+(x235*x236)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x241 = -1;
	static int64_t x242 = -1LL;
	int32_t x243 = -1;
	int64_t x244 = -26897081LL;
	static int32_t t44 = -154724;

	t44 = (x241<(x242+(x243*x244)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = -1LL;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile uint16_t x260 = 62U;
	int32_t t45 = -224264539;

	t45 = (x257<(x258+(x259*x260)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = 23;
	uint64_t x263 = 147LLU;
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t46 = -497;

	t46 = (x261<(x262+(x263*x264)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	uint8_t x267 = 1U;
	int64_t x268 = -1LL;
	static int32_t t47 = 53695891;

	t47 = (x265<(x266+(x267*x268)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x269 = 3;
	static volatile int8_t x270 = INT8_MIN;
	uint64_t x271 = 7LLU;
	int64_t x272 = INT64_MAX;
	volatile int32_t t48 = 1181;

	t48 = (x269<(x270+(x271*x272)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x273 = 32LL;
	uint8_t x274 = 4U;
	static volatile uint8_t x275 = 15U;
	static uint64_t x276 = 15752LLU;
	int32_t t49 = 1024;

	t49 = (x273<(x274+(x275*x276)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x277 = 232LL;
	int8_t x279 = INT8_MIN;
	volatile int32_t t50 = 19123904;

	t50 = (x277<(x278+(x279*x280)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x281 = -3;
	uint16_t x283 = 14969U;
	int64_t x284 = -1LL;
	int32_t t51 = 6261;

	t51 = (x281<(x282+(x283*x284)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x285 = INT32_MAX;
	volatile int16_t x286 = 1;
	volatile uint16_t x287 = 19U;
	uint32_t x288 = UINT32_MAX;

	t52 = (x285<(x286+(x287*x288)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MAX;
	int16_t x294 = -1;
	int16_t x295 = -1;
	uint32_t x296 = 1750844606U;
	static int32_t t53 = 18;

	t53 = (x293<(x294+(x295*x296)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x297 = INT8_MAX;
	int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	int32_t t54 = -15504;

	t54 = (x297<(x298+(x299*x300)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x301 = 0U;
	int64_t x302 = -1LL;
	int8_t x303 = -20;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t55 = -506;

	t55 = (x301<(x302+(x303*x304)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = -1LL;
	static int16_t x306 = INT16_MAX;
	int64_t x307 = 2334198911484861LL;
	uint16_t x308 = 12U;
	volatile int32_t t56 = 0;

	t56 = (x305<(x306+(x307*x308)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x309 = 1742892324U;
	uint64_t x310 = UINT64_MAX;
	uint64_t x311 = 211608407984LLU;
	int64_t x312 = INT64_MIN;
	static int32_t t57 = -28359;

	t57 = (x309<(x310+(x311*x312)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x313 = INT16_MIN;
	int32_t x314 = INT32_MIN;
	int8_t x315 = -9;
	int16_t x316 = INT16_MIN;
	static int32_t t58 = -87074360;

	t58 = (x313<(x314+(x315*x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x317 = 126588257201902510LLU;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t59 = -3237992;

	t59 = (x317<(x318+(x319*x320)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = INT64_MIN;
	static int32_t x322 = INT32_MIN;
	uint64_t x324 = UINT64_MAX;
	static volatile int32_t t60 = 20581690;

	t60 = (x321<(x322+(x323*x324)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = 3;
	uint8_t x326 = 24U;
	volatile int16_t x327 = INT16_MAX;
	uint8_t x328 = 15U;

	t61 = (x325<(x326+(x327*x328)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	volatile uint16_t x331 = 850U;
	static int32_t x332 = -1;
	static volatile int32_t t62 = 1259;

	t62 = (x329<(x330+(x331*x332)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x337 = 0;
	volatile uint8_t x338 = UINT8_MAX;
	volatile int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t63 = -4938;

	t63 = (x337<(x338+(x339*x340)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x345 = UINT8_MAX;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t64 = 1536452;

	t64 = (x345<(x346+(x347*x348)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x349 = -3;
	int32_t x350 = 1;
	int16_t x351 = INT16_MAX;
	uint16_t x352 = 2U;
	int32_t t65 = 28;

	t65 = (x349<(x350+(x351*x352)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x353 = 0;
	volatile int32_t x354 = INT32_MAX;
	int16_t x356 = -1;
	volatile int32_t t66 = 3;

	t66 = (x353<(x354+(x355*x356)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x357 = INT8_MAX;
	int16_t x359 = 234;
	uint32_t x360 = 251272824U;
	int32_t t67 = -112481;

	t67 = (x357<(x358+(x359*x360)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x361 = 46U;
	uint16_t x363 = UINT16_MAX;
	uint8_t x364 = 6U;
	int32_t t68 = -5300;

	t68 = (x361<(x362+(x363*x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MIN;
	volatile uint64_t x366 = UINT64_MAX;
	static int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;

	t69 = (x365<(x366+(x367*x368)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x373 = 1545756585637030LLU;
	static int8_t x374 = -1;
	volatile int8_t x375 = -5;
	int8_t x376 = 43;

	t70 = (x373<(x374+(x375*x376)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = 102;
	int8_t x380 = 25;

	t71 = (x377<(x378+(x379*x380)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x386 = INT64_MAX;
	static volatile int16_t x387 = INT16_MIN;
	uint64_t x388 = 5460562026LLU;
	int32_t t72 = 1;

	t72 = (x385<(x386+(x387*x388)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x389 = UINT8_MAX;
	uint32_t x390 = UINT32_MAX;
	volatile int16_t x391 = -1;
	int32_t x392 = -1538;
	int32_t t73 = 110;

	t73 = (x389<(x390+(x391*x392)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = -3804;
	int16_t x402 = -17;
	int8_t x403 = -42;
	static uint64_t x404 = 111276416LLU;
	volatile int32_t t74 = -618673;

	t74 = (x401<(x402+(x403*x404)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x426 = INT64_MAX;
	uint8_t x428 = 57U;
	static int32_t t75 = -3928;

	t75 = (x425<(x426+(x427*x428)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x429 = 3LL;
	int64_t x430 = -1LL;
	int8_t x431 = -1;
	int32_t t76 = 1;

	t76 = (x429<(x430+(x431*x432)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x433 = 10086995U;
	int64_t x434 = -351450495LL;
	volatile int32_t t77 = -257976;

	t77 = (x433<(x434+(x435*x436)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x445 = 1U;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	int32_t t78 = -113515310;

	t78 = (x445<(x446+(x447*x448)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x449 = 11;
	volatile uint16_t x450 = UINT16_MAX;
	int16_t x452 = INT16_MIN;
	static int32_t t79 = -1;

	t79 = (x449<(x450+(x451*x452)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x457 = 4365301U;
	uint64_t x458 = 47110421LLU;
	int64_t x459 = INT64_MAX;
	int16_t x460 = -1;

	t80 = (x457<(x458+(x459*x460)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x461 = 11677U;
	int16_t x462 = INT16_MIN;
	uint64_t x463 = UINT64_MAX;
	volatile uint32_t x464 = UINT32_MAX;
	static int32_t t81 = 87;

	t81 = (x461<(x462+(x463*x464)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = 3;
	int32_t x466 = INT32_MIN;
	int32_t x467 = INT32_MIN;
	int32_t t82 = -1649;

	t82 = (x465<(x466+(x467*x468)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -1;
	int64_t x470 = -1LL;
	int16_t x471 = 6;
	static uint32_t x472 = 12U;
	static volatile int32_t t83 = 19;

	t83 = (x469<(x470+(x471*x472)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x474 = INT16_MAX;
	int16_t x475 = -1;
	volatile int32_t t84 = -9139566;

	t84 = (x473<(x474+(x475*x476)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x477 = -6;
	int16_t x478 = INT16_MIN;
	volatile int8_t x479 = -29;
	uint8_t x480 = UINT8_MAX;

	t85 = (x477<(x478+(x479*x480)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x505 = 5690290U;
	int16_t x506 = -1;
	int8_t x507 = INT8_MIN;
	static int32_t t86 = -22;

	t86 = (x505<(x506+(x507*x508)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x509 = INT32_MIN;
	int64_t x510 = -2499975379454937745LL;
	uint32_t x511 = 207907554U;
	uint8_t x512 = UINT8_MAX;
	int32_t t87 = -896851;

	t87 = (x509<(x510+(x511*x512)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x513 = INT8_MIN;
	int16_t x514 = INT16_MIN;
	static int16_t x515 = 56;
	int8_t x516 = INT8_MIN;
	int32_t t88 = -436368367;

	t88 = (x513<(x514+(x515*x516)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x518 = INT64_MIN;
	uint64_t x519 = 361566LLU;
	uint8_t x520 = UINT8_MAX;
	int32_t t89 = -5791;

	t89 = (x517<(x518+(x519*x520)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x521 = INT64_MIN;
	int16_t x522 = INT16_MIN;
	uint8_t x523 = 14U;
	static volatile uint16_t x524 = 430U;

	t90 = (x521<(x522+(x523*x524)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x525 = UINT8_MAX;
	uint16_t x526 = 7981U;
	volatile int8_t x528 = INT8_MIN;

	t91 = (x525<(x526+(x527*x528)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x529 = INT16_MIN;
	static int16_t x530 = INT16_MAX;
	volatile int16_t x531 = INT16_MIN;
	uint8_t x532 = 9U;
	volatile int32_t t92 = -5682165;

	t92 = (x529<(x530+(x531*x532)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x537 = 4U;
	int8_t x538 = 1;
	static uint8_t x539 = UINT8_MAX;
	uint64_t x540 = UINT64_MAX;
	static int32_t t93 = 5243019;

	t93 = (x537<(x538+(x539*x540)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = INT64_MAX;
	static int8_t x542 = INT8_MIN;
	volatile int32_t x543 = -1;
	uint64_t x544 = 54672785268204972LLU;
	int32_t t94 = -6776389;

	t94 = (x541<(x542+(x543*x544)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x549 = INT16_MIN;
	static uint16_t x550 = 6U;
	uint8_t x552 = 5U;
	int32_t t95 = 692404;

	t95 = (x549<(x550+(x551*x552)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x553 = INT8_MAX;
	int16_t x554 = INT16_MIN;
	volatile int64_t x555 = -1LL;
	int32_t t96 = -12095274;

	t96 = (x553<(x554+(x555*x556)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x558 = 1180136LL;
	static volatile int8_t x559 = INT8_MIN;
	uint64_t x560 = 15156987773680LLU;
	int32_t t97 = -158572339;

	t97 = (x557<(x558+(x559*x560)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x561 = 0U;
	volatile int32_t x562 = -91;
	int8_t x563 = 3;
	volatile uint32_t x564 = 554U;
	static int32_t t98 = 1;

	t98 = (x561<(x562+(x563*x564)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x565 = INT64_MAX;
	int32_t x567 = 18462972;
	int32_t t99 = -1;

	t99 = (x565<(x566+(x567*x568)));

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

