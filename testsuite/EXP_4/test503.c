#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x26 = INT64_MIN;
volatile int32_t t2 = 3359;
uint64_t x29 = 3272839030869497LLU;
uint64_t x32 = 3108215631056LLU;
int16_t x35 = -1;
volatile uint32_t x36 = 112481U;
int64_t x41 = INT64_MAX;
static volatile int8_t x45 = INT8_MIN;
uint64_t x47 = 278LLU;
volatile int32_t t7 = -968;
volatile int64_t x54 = 149296022LL;
volatile uint64_t x56 = UINT64_MAX;
static int16_t x63 = 20;
int32_t t9 = 119955268;
static int32_t t13 = 28;
volatile int64_t x98 = INT64_MAX;
static volatile int32_t x101 = INT32_MIN;
static uint32_t x121 = 4182446U;
static int32_t x122 = -38208;
static int16_t x123 = 5265;
uint8_t x128 = UINT8_MAX;
int64_t x144 = INT64_MIN;
uint64_t x150 = 37LLU;
int32_t t22 = 133923;
uint8_t x157 = UINT8_MAX;
uint64_t x160 = UINT64_MAX;
int32_t t23 = 120;
uint32_t x168 = 409312U;
static int16_t x173 = -1;
int64_t x174 = 130043LL;
int16_t x180 = -1;
uint32_t x184 = 468U;
int32_t t29 = -126648;
int32_t x185 = INT32_MIN;
uint8_t x186 = 4U;
uint32_t x187 = 36024552U;
static volatile int32_t t30 = -1913784;
int32_t x190 = -12223304;
volatile int32_t t31 = 31;
volatile int32_t t33 = 281340;
static uint16_t x209 = 3763U;
uint32_t x225 = 964U;
int32_t x249 = 400738;
int32_t x251 = 12258;
static volatile int64_t x257 = INT64_MIN;
int32_t x258 = 6851260;
volatile int32_t t41 = 144;
int16_t x264 = 5;
volatile int32_t t43 = 2761898;
int32_t x269 = INT32_MIN;
uint8_t x274 = UINT8_MAX;
int16_t x275 = INT16_MIN;
int8_t x280 = INT8_MAX;
int32_t x290 = INT32_MIN;
uint8_t x293 = UINT8_MAX;
static volatile int32_t t52 = -3;
int8_t x316 = -1;
volatile int64_t x325 = INT64_MAX;
uint32_t x326 = UINT32_MAX;
int32_t x328 = -1;
uint64_t x342 = 3244796587188654LLU;
volatile uint32_t x343 = 4062U;
int8_t x344 = INT8_MIN;
int32_t t59 = 192746533;
static int32_t t60 = 80;
uint8_t x357 = 0U;
volatile uint32_t x360 = 1532161U;
volatile int16_t x367 = INT16_MIN;
static int16_t x370 = -1;
int32_t t64 = 4;
int64_t x378 = 506704383682LL;
uint16_t x379 = 30373U;
uint32_t x383 = 53707U;
volatile int64_t x389 = -1LL;
static uint16_t x391 = UINT16_MAX;
volatile int32_t t70 = -82;
int16_t x399 = 1;
uint32_t x403 = UINT32_MAX;
int16_t x418 = 861;
int8_t x427 = INT8_MIN;
uint64_t x431 = 162473695572860LLU;
static uint64_t x436 = 146LLU;
static int16_t x439 = INT16_MAX;
static uint16_t x440 = UINT16_MAX;
int64_t x445 = -1LL;
uint32_t x447 = UINT32_MAX;
int32_t x460 = 1;
static int64_t x462 = 263157409444LL;
volatile int64_t x464 = 831673055169456982LL;
int16_t x466 = INT16_MIN;
uint8_t x468 = 27U;
int8_t x478 = -1;
int32_t t88 = 298570269;
int64_t x498 = -1LL;
int32_t t91 = -2;
int16_t x512 = INT16_MAX;
volatile int32_t t92 = 2;
int32_t x516 = -2;
volatile int32_t t93 = 214011;
int8_t x518 = -1;
static volatile int32_t t94 = 8;
int64_t x521 = 1514LL;
int16_t x523 = INT16_MAX;
static volatile int32_t t95 = -14161;
int64_t x526 = -1LL;
int32_t x529 = 23621689;
int16_t x531 = -5;
uint32_t x532 = UINT32_MAX;
static int32_t t97 = 3748;
int64_t x535 = -165137LL;
static int32_t x536 = -793;


void f0(void) {
	int32_t x5 = -59178;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;
	static int8_t x8 = INT8_MIN;
	int32_t t0 = -23136;

	t0 = (x5<(x6^(x7*x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x21 = 6U;
	static int32_t x22 = -1;
	volatile int8_t x23 = INT8_MIN;
	uint8_t x24 = 2U;
	static int32_t t1 = -279;

	t1 = (x21<(x22^(x23*x24)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 59U;
	volatile int32_t x27 = -1;
	static int16_t x28 = INT16_MIN;

	t2 = (x25<(x26^(x27*x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x30 = 1U;
	int16_t x31 = -1;
	volatile int32_t t3 = 2604622;

	t3 = (x29<(x30^(x31*x32)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = -1;
	int16_t x34 = 2;
	volatile int32_t t4 = -172;

	t4 = (x33<(x34^(x35*x36)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x42 = 3LL;
	static int32_t x43 = 0;
	static volatile uint64_t x44 = UINT64_MAX;
	volatile int32_t t5 = -687802;

	t5 = (x41<(x42^(x43*x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x46 = 334318309;
	static uint8_t x48 = UINT8_MAX;
	int32_t t6 = 0;

	t6 = (x45<(x46^(x47*x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x49 = INT64_MAX;
	volatile int8_t x50 = -1;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -2;

	t7 = (x49<(x50^(x51*x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = 517973LL;
	int16_t x55 = -2396;
	int32_t t8 = 62782031;

	t8 = (x53<(x54^(x55*x56)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x61 = INT32_MAX;
	uint8_t x62 = 0U;
	int16_t x64 = INT16_MAX;

	t9 = (x61<(x62^(x63*x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x65 = 1U;
	int64_t x66 = INT64_MAX;
	int16_t x67 = 8179;
	int8_t x68 = INT8_MAX;
	volatile int32_t t10 = -68941792;

	t10 = (x65<(x66^(x67*x68)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 14U;
	uint8_t x70 = 29U;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = 11847013017LL;
	int32_t t11 = 0;

	t11 = (x69<(x70^(x71*x72)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	static int64_t x83 = -1033311LL;
	uint32_t x84 = UINT32_MAX;
	static volatile int32_t t12 = -1;

	t12 = (x81<(x82^(x83*x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x86 = 14459;
	volatile int16_t x87 = INT16_MIN;
	uint32_t x88 = 638491U;

	t13 = (x85<(x86^(x87*x88)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = 13675;
	uint64_t x91 = 40LLU;
	int32_t x92 = INT32_MAX;
	volatile int32_t t14 = -270835;

	t14 = (x89<(x90^(x91*x92)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x99 = 0U;
	int8_t x100 = INT8_MIN;
	volatile int32_t t15 = -1030059;

	t15 = (x97<(x98^(x99*x100)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = INT16_MAX;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = -253;
	int32_t t16 = 19;

	t16 = (x101<(x102^(x103*x104)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x124 = 56592;
	volatile int32_t t17 = 0;

	t17 = (x121<(x122^(x123*x124)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = -1;
	static int8_t x127 = INT8_MIN;
	int32_t t18 = 83;

	t18 = (x125<(x126^(x127*x128)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile uint64_t x135 = 26606992LLU;
	int16_t x136 = -7;
	int32_t t19 = 2154;

	t19 = (x133<(x134^(x135*x136)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x141 = INT16_MIN;
	static int32_t x142 = INT32_MAX;
	int8_t x143 = 1;
	volatile int32_t t20 = -373890982;

	t20 = (x141<(x142^(x143*x144)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = -1;
	int8_t x151 = INT8_MIN;
	int32_t x152 = 92;
	int32_t t21 = 5;

	t21 = (x149<(x150^(x151*x152)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x153 = INT16_MIN;
	volatile int32_t x154 = INT32_MIN;
	uint8_t x155 = 10U;
	volatile int32_t x156 = -1;

	t22 = (x153<(x154^(x155*x156)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x158 = -1;
	volatile int32_t x159 = 14486893;

	t23 = (x157<(x158^(x159*x160)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MIN;
	int32_t x163 = 23;
	static volatile int16_t x164 = INT16_MIN;
	static int32_t t24 = 13805;

	t24 = (x161<(x162^(x163*x164)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = 421;
	int8_t x167 = INT8_MAX;
	static int32_t t25 = -391530;

	t25 = (x165<(x166^(x167*x168)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x169 = INT64_MIN;
	static uint32_t x170 = UINT32_MAX;
	int8_t x171 = 62;
	int64_t x172 = -3337729LL;
	volatile int32_t t26 = -1115162;

	t26 = (x169<(x170^(x171*x172)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x175 = -575;
	int64_t x176 = -3596129716989LL;
	static int32_t t27 = -1;

	t27 = (x173<(x174^(x175*x176)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t28 = -16509033;

	t28 = (x177<(x178^(x179*x180)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x181 = INT64_MIN;
	static volatile uint64_t x182 = 2009543LLU;
	int8_t x183 = INT8_MIN;

	t29 = (x181<(x182^(x183*x184)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x188 = 11;

	t30 = (x185<(x186^(x187*x188)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x189 = 3U;
	uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 316U;

	t31 = (x189<(x190^(x191*x192)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x193 = 12813U;
	int8_t x194 = -1;
	volatile uint64_t x195 = UINT64_MAX;
	static int64_t x196 = 497854LL;
	int32_t t32 = -333415;

	t32 = (x193<(x194^(x195*x196)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = 3;
	int64_t x199 = 84403039665344LL;
	volatile uint64_t x200 = 17LLU;

	t33 = (x197<(x198^(x199*x200)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile int64_t x207 = -39660958242809LL;
	int16_t x208 = -3521;
	volatile int32_t t34 = -16500;

	t34 = (x205<(x206^(x207*x208)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x210 = 1U;
	int16_t x211 = -7881;
	uint8_t x212 = 62U;
	volatile int32_t t35 = -2;

	t35 = (x209<(x210^(x211*x212)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = 2328161274630366LLU;
	int32_t t36 = 8491893;

	t36 = (x213<(x214^(x215*x216)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = -1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t37 = -13324;

	t37 = (x221<(x222^(x223*x224)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x226 = 650U;
	int32_t x227 = 50486483;
	volatile uint32_t x228 = 884U;
	volatile int32_t t38 = -898;

	t38 = (x225<(x226^(x227*x228)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x241 = UINT32_MAX;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	static int32_t x244 = -24;
	int32_t t39 = -6;

	t39 = (x241<(x242^(x243*x244)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x250 = 861;
	static int16_t x252 = INT16_MAX;
	int32_t t40 = 4207;

	t40 = (x249<(x250^(x251*x252)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x259 = INT16_MAX;
	uint8_t x260 = 1U;

	t41 = (x257<(x258^(x259*x260)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x261 = INT64_MIN;
	static uint8_t x262 = 84U;
	volatile uint64_t x263 = 38245LLU;
	int32_t t42 = -10459905;

	t42 = (x261<(x262^(x263*x264)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x265 = 125942796;
	int16_t x266 = -10;
	static int8_t x267 = INT8_MAX;
	uint8_t x268 = 1U;

	t43 = (x265<(x266^(x267*x268)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x270 = INT16_MAX;
	static uint32_t x271 = 356179618U;
	int8_t x272 = -1;
	static volatile int32_t t44 = -1;

	t44 = (x269<(x270^(x271*x272)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = INT16_MAX;
	int8_t x276 = -1;
	int32_t t45 = -1;

	t45 = (x273<(x274^(x275*x276)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = 17931U;
	uint16_t x279 = UINT16_MAX;
	int32_t t46 = -23;

	t46 = (x277<(x278^(x279*x280)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	static int16_t x283 = -1;
	uint64_t x284 = 30445096LLU;
	static volatile int32_t t47 = 0;

	t47 = (x281<(x282^(x283*x284)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x285 = -1LL;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;
	static volatile int32_t t48 = -547;

	t48 = (x285<(x286^(x287*x288)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x289 = 17373368153035LLU;
	uint64_t x291 = 135180990231LLU;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t49 = 127720758;

	t49 = (x289<(x290^(x291*x292)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x294 = -1LL;
	static int32_t x295 = -1;
	int8_t x296 = 23;
	int32_t t50 = -25698453;

	t50 = (x293<(x294^(x295*x296)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x297 = -1;
	volatile int64_t x298 = INT64_MIN;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = -1;
	static volatile int32_t t51 = -801180;

	t51 = (x297<(x298^(x299*x300)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x301 = 458148023714557LL;
	static volatile int32_t x302 = INT32_MIN;
	static int16_t x303 = -689;
	uint8_t x304 = UINT8_MAX;

	t52 = (x301<(x302^(x303*x304)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x309 = -1;
	uint32_t x310 = 417473502U;
	uint8_t x311 = 40U;
	int8_t x312 = -57;
	int32_t t53 = -17;

	t53 = (x309<(x310^(x311*x312)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x313 = 326LL;
	uint8_t x314 = 1U;
	volatile uint16_t x315 = 39U;
	int32_t t54 = -1;

	t54 = (x313<(x314^(x315*x316)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x327 = 0;
	int32_t t55 = -236;

	t55 = (x325<(x326^(x327*x328)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x333 = INT8_MAX;
	static int16_t x334 = INT16_MIN;
	volatile uint8_t x335 = 32U;
	int64_t x336 = 1054192LL;
	volatile int32_t t56 = -89;

	t56 = (x333<(x334^(x335*x336)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x337 = 1027;
	static uint32_t x338 = 18949U;
	int32_t x339 = -1;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int32_t t57 = -42109;

	t57 = (x337<(x338^(x339*x340)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x341 = 1;
	int32_t t58 = 919;

	t58 = (x341<(x342^(x343*x344)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int64_t x346 = -48109LL;
	static uint32_t x347 = 49113360U;
	uint64_t x348 = 3372422241LLU;

	t59 = (x345<(x346^(x347*x348)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = 39;
	volatile uint8_t x350 = 100U;
	volatile uint16_t x351 = 204U;
	uint32_t x352 = 3540163U;

	t60 = (x349<(x350^(x351*x352)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x358 = INT8_MAX;
	int8_t x359 = 46;
	volatile int32_t t61 = -3;

	t61 = (x357<(x358^(x359*x360)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = INT16_MAX;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 21U;
	int64_t x364 = 383522LL;
	volatile int32_t t62 = -1980553;

	t62 = (x361<(x362^(x363*x364)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = 8;
	static int8_t x366 = INT8_MIN;
	uint64_t x368 = 1347457022745874559LLU;
	static int32_t t63 = 336966268;

	t63 = (x365<(x366^(x367*x368)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x369 = INT8_MAX;
	static int8_t x371 = INT8_MAX;
	volatile int16_t x372 = INT16_MIN;

	t64 = (x369<(x370^(x371*x372)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x373 = 24U;
	static uint64_t x374 = UINT64_MAX;
	int8_t x375 = 1;
	uint64_t x376 = 10911080569010LLU;
	int32_t t65 = -8836320;

	t65 = (x373<(x374^(x375*x376)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x377 = -1;
	uint64_t x380 = UINT64_MAX;
	static int32_t t66 = 552483;

	t66 = (x377<(x378^(x379*x380)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x381 = 45U;
	static int8_t x382 = INT8_MIN;
	int8_t x384 = -1;
	volatile int32_t t67 = -3746;

	t67 = (x381<(x382^(x383*x384)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 206781109U;
	volatile uint16_t x388 = 3U;
	volatile int32_t t68 = 95115202;

	t68 = (x385<(x386^(x387*x388)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x390 = 453U;
	int8_t x392 = -40;
	static volatile int32_t t69 = -1;

	t69 = (x389<(x390^(x391*x392)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x394 = 442LLU;
	volatile int32_t x395 = 113;
	uint32_t x396 = 2U;

	t70 = (x393<(x394^(x395*x396)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x397 = 4494;
	uint8_t x398 = 34U;
	int16_t x400 = 83;
	static volatile int32_t t71 = 13963726;

	t71 = (x397<(x398^(x399*x400)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x404 = -1;
	int32_t t72 = -3042;

	t72 = (x401<(x402^(x403*x404)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	uint64_t x407 = 3542666303898152LLU;
	volatile uint16_t x408 = 10018U;
	int32_t t73 = 77;

	t73 = (x405<(x406^(x407*x408)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x417 = 5U;
	volatile int16_t x419 = INT16_MIN;
	uint16_t x420 = UINT16_MAX;
	int32_t t74 = -14;

	t74 = (x417<(x418^(x419*x420)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x421 = 1;
	static volatile int8_t x422 = -1;
	int8_t x423 = -1;
	static uint64_t x424 = 596354LLU;
	volatile int32_t t75 = 2771969;

	t75 = (x421<(x422^(x423*x424)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x425 = INT64_MIN;
	uint64_t x426 = 703218143364595158LLU;
	static uint8_t x428 = 1U;
	static int32_t t76 = -2;

	t76 = (x425<(x426^(x427*x428)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x429 = 199504892LLU;
	uint8_t x430 = UINT8_MAX;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t77 = -203496052;

	t77 = (x429<(x430^(x431*x432)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x433 = 2038U;
	int64_t x434 = -1LL;
	uint64_t x435 = 323093967LLU;
	int32_t t78 = 1063;

	t78 = (x433<(x434^(x435*x436)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x437 = 53;
	int16_t x438 = INT16_MIN;
	volatile int32_t t79 = -116962;

	t79 = (x437<(x438^(x439*x440)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x446 = 3742;
	uint32_t x448 = 187933U;
	volatile int32_t t80 = -46259764;

	t80 = (x445<(x446^(x447*x448)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x453 = 950974228U;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t81 = 54064;

	t81 = (x453<(x454^(x455*x456)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x457 = 528479621298LLU;
	static int8_t x458 = -1;
	int16_t x459 = 20;
	static int32_t t82 = -22;

	t82 = (x457<(x458^(x459*x460)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x461 = INT16_MAX;
	static int16_t x463 = -5;
	int32_t t83 = 429;

	t83 = (x461<(x462^(x463*x464)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x465 = INT32_MIN;
	uint64_t x467 = 869334LLU;
	volatile int32_t t84 = -5;

	t84 = (x465<(x466^(x467*x468)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = -1;
	int8_t x470 = 0;
	static int8_t x471 = INT8_MAX;
	int8_t x472 = INT8_MIN;
	int32_t t85 = -1012200;

	t85 = (x469<(x470^(x471*x472)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x477 = UINT32_MAX;
	uint16_t x479 = 808U;
	int16_t x480 = INT16_MIN;
	int32_t t86 = 78717169;

	t86 = (x477<(x478^(x479*x480)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = INT8_MIN;
	volatile int16_t x482 = -1;
	uint16_t x483 = 902U;
	uint8_t x484 = 3U;
	volatile int32_t t87 = -12102;

	t87 = (x481<(x482^(x483*x484)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x489 = INT8_MAX;
	uint32_t x490 = UINT32_MAX;
	int64_t x491 = -1LL;
	int16_t x492 = 207;

	t88 = (x489<(x490^(x491*x492)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x493 = UINT64_MAX;
	volatile uint16_t x494 = UINT16_MAX;
	int8_t x495 = INT8_MIN;
	uint16_t x496 = 1688U;
	volatile int32_t t89 = -246379;

	t89 = (x493<(x494^(x495*x496)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x497 = -255770LL;
	uint64_t x499 = UINT64_MAX;
	uint16_t x500 = 19U;
	static int32_t t90 = -131007776;

	t90 = (x497<(x498^(x499*x500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x505 = 36458691876487LLU;
	static int8_t x506 = 0;
	volatile int32_t x507 = -1;
	volatile uint8_t x508 = UINT8_MAX;

	t91 = (x505<(x506^(x507*x508)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x509 = 1LLU;
	uint64_t x510 = 235127LLU;
	int16_t x511 = INT16_MIN;

	t92 = (x509<(x510^(x511*x512)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x513 = -135104724061845094LL;
	int32_t x514 = INT32_MIN;
	int32_t x515 = -13486;

	t93 = (x513<(x514^(x515*x516)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x517 = 72193936U;
	uint32_t x519 = 9U;
	uint32_t x520 = 8476U;

	t94 = (x517<(x518^(x519*x520)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x522 = -8265271LL;
	int32_t x524 = 106;

	t95 = (x521<(x522^(x523*x524)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x525 = INT16_MIN;
	uint32_t x527 = UINT32_MAX;
	static int16_t x528 = INT16_MAX;
	volatile int32_t t96 = -596;

	t96 = (x525<(x526^(x527*x528)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x530 = UINT16_MAX;

	t97 = (x529<(x530^(x531*x532)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x533 = INT64_MAX;
	static uint64_t x534 = UINT64_MAX;
	int32_t t98 = 1956;

	t98 = (x533<(x534^(x535*x536)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x537 = INT8_MIN;
	static uint8_t x538 = 8U;
	int8_t x539 = INT8_MAX;
	uint32_t x540 = UINT32_MAX;
	static int32_t t99 = -3187;

	t99 = (x537<(x538^(x539*x540)));

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

