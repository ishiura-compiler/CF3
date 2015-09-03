#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
volatile int32_t t1 = 0;
int32_t x18 = 363;
uint64_t x20 = UINT64_MAX;
static int32_t x31 = -1025352;
volatile int16_t x43 = -2005;
static volatile int32_t t9 = 249235;
uint8_t x58 = 45U;
volatile int32_t t10 = 1;
int64_t x62 = -2384502020521LL;
static uint16_t x63 = 5U;
volatile int8_t x80 = 1;
uint32_t x81 = UINT32_MAX;
int16_t x84 = INT16_MAX;
static uint32_t x88 = 43430669U;
int32_t x98 = -1;
static uint32_t x115 = 1U;
static int32_t x117 = -1;
static uint64_t x119 = 78020LLU;
int16_t x133 = 15047;
volatile int32_t x143 = INT32_MAX;
int16_t x144 = 0;
static uint8_t x155 = UINT8_MAX;
volatile int8_t x158 = -1;
static int8_t x160 = 1;
volatile int32_t t28 = -109105117;
static int16_t x163 = 213;
int32_t x186 = INT32_MIN;
volatile uint8_t x187 = 56U;
volatile int32_t x190 = -521244;
int16_t x192 = INT16_MAX;
int8_t x193 = -1;
static uint16_t x195 = 510U;
uint32_t x207 = 837U;
volatile int8_t x210 = INT8_MIN;
int32_t t39 = 21982;
volatile int32_t t40 = 0;
volatile int32_t x230 = -1;
static int64_t x251 = 3LL;
int64_t x259 = -1LL;
int16_t x262 = INT16_MIN;
static uint16_t x280 = 652U;
static uint16_t x286 = 0U;
static int32_t t53 = 9468;
int32_t t54 = -184;
int32_t x309 = -496;
uint32_t x310 = UINT32_MAX;
int32_t t56 = -112351626;
int32_t x315 = -44402;
uint8_t x317 = 1U;
uint64_t x323 = UINT64_MAX;
int32_t x334 = INT32_MAX;
volatile int32_t t61 = 6465169;
int32_t x358 = INT32_MAX;
uint32_t x359 = 1143U;
int32_t t67 = -94;
static uint64_t x362 = 10826LLU;
int8_t x367 = -2;
int8_t x369 = -13;
int32_t x372 = -1;
volatile int32_t t70 = 61145;
volatile uint32_t x386 = 13464U;
int16_t x388 = INT16_MIN;
int32_t t72 = -116;
int16_t x391 = 10382;
volatile int32_t x393 = -1424456;
int64_t x401 = -1LL;
uint32_t x404 = 16689401U;
int16_t x418 = INT16_MIN;
int32_t x425 = INT32_MAX;
uint64_t x426 = 660826LLU;
volatile uint32_t x429 = UINT32_MAX;
uint16_t x439 = UINT16_MAX;
uint64_t x441 = UINT64_MAX;
uint8_t x448 = UINT8_MAX;
int16_t x455 = -1;
static uint16_t x463 = 1U;
int32_t t87 = 0;
int64_t x467 = -580785915379LL;
int16_t x472 = INT16_MAX;
int64_t x473 = INT64_MIN;
int64_t x474 = INT64_MAX;
uint8_t x479 = UINT8_MAX;
int32_t x480 = -1;
static int8_t x482 = -1;
int64_t x484 = -1LL;
volatile int32_t t92 = -117716;
static int8_t x491 = -6;
static volatile uint8_t x492 = UINT8_MAX;
volatile int32_t t95 = 17767;
uint16_t x504 = UINT16_MAX;
static int32_t t97 = 7493;
volatile int32_t t98 = -1322;
uint32_t x511 = 165909496U;
int32_t t99 = -1967;


void f0(void) {
	uint8_t x1 = 32U;
	static int32_t x2 = 14869;
	int16_t x3 = INT16_MIN;
	uint8_t x4 = 7U;
	int32_t t0 = -900;

	t0 = (x1<(x2-(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 5360278679372122LLU;
	volatile uint16_t x6 = UINT16_MAX;
	uint32_t x8 = 71117842U;

	t1 = (x5<(x6-(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 9397242133837LLU;
	static int8_t x10 = -1;
	int8_t x11 = INT8_MIN;
	static volatile int8_t x12 = -1;
	static int32_t t2 = 9809;

	t2 = (x9<(x10-(x11*x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int16_t x19 = INT16_MIN;
	int32_t t3 = 68008164;

	t3 = (x17<(x18-(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MAX;
	volatile int32_t x30 = INT32_MAX;
	static int32_t x32 = -948;
	volatile int32_t t4 = -11;

	t4 = (x29<(x30-(x31*x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t5 = 896218924;

	t5 = (x33<(x34-(x35*x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x37 = 3U;
	uint64_t x38 = 1511LLU;
	int8_t x39 = 1;
	static int32_t x40 = 0;
	static volatile int32_t t6 = 6506;

	t6 = (x37<(x38-(x39*x40)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = -16;
	volatile int16_t x44 = INT16_MIN;
	int32_t t7 = -4215331;

	t7 = (x41<(x42-(x43*x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 1225U;
	volatile uint16_t x51 = 1352U;
	int8_t x52 = INT8_MIN;
	int32_t t8 = 0;

	t8 = (x49<(x50-(x51*x52)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = 14;
	int8_t x54 = -6;
	static uint64_t x55 = 948LLU;
	int8_t x56 = INT8_MIN;

	t9 = (x53<(x54-(x55*x56)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x57 = -1;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 5U;

	t10 = (x57<(x58-(x59*x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 1;
	int16_t x64 = INT16_MAX;
	volatile int32_t t11 = 0;

	t11 = (x61<(x62-(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -17061014078LL;
	static volatile uint32_t x78 = 493177U;
	volatile int32_t x79 = INT32_MAX;
	int32_t t12 = -3114187;

	t12 = (x77<(x78-(x79*x80)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x82 = 30797032759LLU;
	static volatile int8_t x83 = 1;
	static volatile int32_t t13 = -4;

	t13 = (x81<(x82-(x83*x84)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x85 = 28U;
	static uint64_t x86 = UINT64_MAX;
	volatile uint64_t x87 = 12367630590LLU;
	static volatile int32_t t14 = 29;

	t14 = (x85<(x86-(x87*x88)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = -33630;
	volatile int8_t x90 = INT8_MIN;
	static int8_t x91 = 5;
	int16_t x92 = INT16_MIN;
	int32_t t15 = 4721278;

	t15 = (x89<(x90-(x91*x92)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = 9;
	int16_t x94 = INT16_MAX;
	static volatile uint64_t x95 = 632242772800LLU;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t16 = -19698944;

	t16 = (x93<(x94-(x95*x96)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	static int16_t x99 = -1;
	int8_t x100 = -6;
	volatile int32_t t17 = -6174896;

	t17 = (x97<(x98-(x99*x100)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = -1391107501419647LL;
	int16_t x102 = -1;
	int16_t x103 = -995;
	int16_t x104 = -5490;
	volatile int32_t t18 = 4;

	t18 = (x101<(x102-(x103*x104)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -10923LL;
	int64_t x110 = 35272LL;
	volatile int32_t x111 = -1;
	int32_t x112 = 761305;
	volatile int32_t t19 = 2707;

	t19 = (x109<(x110-(x111*x112)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x113 = 1LLU;
	uint16_t x114 = 16U;
	int8_t x116 = 0;
	int32_t t20 = -3715152;

	t20 = (x113<(x114-(x115*x116)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x118 = UINT16_MAX;
	int8_t x120 = 13;
	int32_t t21 = -51;

	t21 = (x117<(x118-(x119*x120)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = -1LL;
	volatile uint16_t x126 = 389U;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 44U;
	int32_t t22 = -140;

	t22 = (x125<(x126-(x127*x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = -50082629LL;
	static int64_t x131 = 3477942368LL;
	static int16_t x132 = -34;
	volatile int32_t t23 = 28363;

	t23 = (x129<(x130-(x131*x132)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = 733U;
	int32_t t24 = 52;

	t24 = (x133<(x134-(x135*x136)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MAX;
	volatile int32_t x138 = INT32_MAX;
	static volatile uint16_t x139 = UINT16_MAX;
	uint32_t x140 = 259772U;
	int32_t t25 = 70331393;

	t25 = (x137<(x138-(x139*x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = 11403654;
	volatile int32_t t26 = 14;

	t26 = (x141<(x142-(x143*x144)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	static int32_t t27 = -903986;

	t27 = (x153<(x154-(x155*x156)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = INT32_MIN;
	int64_t x159 = INT64_MIN;

	t28 = (x157<(x158-(x159*x160)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = UINT64_MAX;
	uint8_t x162 = 0U;
	uint64_t x164 = 652LLU;
	volatile int32_t t29 = -2664081;

	t29 = (x161<(x162-(x163*x164)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = -1LL;
	int64_t x172 = 89LL;
	int32_t t30 = -18288208;

	t30 = (x169<(x170-(x171*x172)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x173 = INT64_MIN;
	volatile int16_t x174 = INT16_MIN;
	uint64_t x175 = UINT64_MAX;
	static int64_t x176 = -1LL;
	int32_t t31 = 0;

	t31 = (x173<(x174-(x175*x176)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = INT8_MIN;
	uint16_t x178 = 308U;
	int64_t x179 = 17219516758389LL;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t32 = 35;

	t32 = (x177<(x178-(x179*x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x185 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t33 = -58184845;

	t33 = (x185<(x186-(x187*x188)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x189 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t t34 = -205441;

	t34 = (x189<(x190-(x191*x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x194 = INT8_MAX;
	static uint8_t x196 = UINT8_MAX;
	int32_t t35 = -4396;

	t35 = (x193<(x194-(x195*x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x201 = INT16_MIN;
	static int16_t x202 = INT16_MIN;
	static int32_t x203 = -1;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t36 = -6;

	t36 = (x201<(x202-(x203*x204)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x205 = -1;
	int64_t x206 = INT64_MAX;
	uint16_t x208 = 0U;
	volatile int32_t t37 = -243683;

	t37 = (x205<(x206-(x207*x208)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	int32_t t38 = 885;

	t38 = (x209<(x210-(x211*x212)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = -1;
	int8_t x215 = INT8_MAX;
	int8_t x216 = 6;

	t39 = (x213<(x214-(x215*x216)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = 22;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = 23591U;
	volatile int32_t x224 = INT32_MIN;

	t40 = (x221<(x222-(x223*x224)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int64_t x226 = INT64_MIN;
	uint16_t x227 = 116U;
	int64_t x228 = -1LL;
	int32_t t41 = -151;

	t41 = (x225<(x226-(x227*x228)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x229 = -1;
	int16_t x231 = -16144;
	int16_t x232 = INT16_MIN;
	int32_t t42 = -138;

	t42 = (x229<(x230-(x231*x232)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x241 = 13U;
	int8_t x242 = INT8_MIN;
	volatile int8_t x243 = INT8_MIN;
	int16_t x244 = 227;
	volatile int32_t t43 = 24013612;

	t43 = (x241<(x242-(x243*x244)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x245 = -254668LL;
	volatile int8_t x246 = -2;
	static uint32_t x247 = 1610557467U;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t44 = 256390;

	t44 = (x245<(x246-(x247*x248)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x249 = UINT32_MAX;
	static int8_t x250 = 28;
	uint8_t x252 = 23U;
	volatile int32_t t45 = -954324;

	t45 = (x249<(x250-(x251*x252)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x257 = 265169162749LLU;
	uint16_t x258 = 0U;
	volatile uint16_t x260 = UINT16_MAX;
	static volatile int32_t t46 = -65403;

	t46 = (x257<(x258-(x259*x260)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x261 = 1U;
	static uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;
	static int32_t t47 = -65;

	t47 = (x261<(x262-(x263*x264)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x269 = INT64_MAX;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 372683190U;
	int32_t x272 = INT32_MIN;
	volatile int32_t t48 = 4;

	t48 = (x269<(x270-(x271*x272)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int8_t x274 = 6;
	uint64_t x275 = 956321411900483059LLU;
	static int16_t x276 = -1;
	static int32_t t49 = 1606;

	t49 = (x273<(x274-(x275*x276)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MAX;
	uint32_t x279 = 108911493U;
	volatile int32_t t50 = -5476;

	t50 = (x277<(x278-(x279*x280)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x281 = -1LL;
	int32_t x282 = INT32_MIN;
	int64_t x283 = 2885LL;
	volatile int64_t x284 = -40302316449LL;
	int32_t t51 = -12;

	t51 = (x281<(x282-(x283*x284)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 234LLU;
	volatile int32_t x287 = -1;
	int16_t x288 = -1;
	int32_t t52 = 487163345;

	t52 = (x285<(x286-(x287*x288)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x289 = UINT16_MAX;
	static uint64_t x290 = 940954LLU;
	uint16_t x291 = 3U;
	int8_t x292 = INT8_MIN;

	t53 = (x289<(x290-(x291*x292)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 311U;
	uint8_t x303 = UINT8_MAX;
	uint32_t x304 = UINT32_MAX;

	t54 = (x301<(x302-(x303*x304)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = -385344361722LL;
	int32_t x306 = 4;
	volatile int8_t x307 = INT8_MAX;
	static uint16_t x308 = 5705U;
	static volatile int32_t t55 = -18884600;

	t55 = (x305<(x306-(x307*x308)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x311 = 4159430903LLU;
	volatile uint64_t x312 = UINT64_MAX;

	t56 = (x309<(x310-(x311*x312)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	volatile int16_t x316 = INT16_MIN;
	int32_t t57 = -920762;

	t57 = (x313<(x314-(x315*x316)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x318 = INT32_MAX;
	static int8_t x319 = 0;
	int16_t x320 = -1;
	static volatile int32_t t58 = -927716892;

	t58 = (x317<(x318-(x319*x320)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x321 = INT16_MAX;
	int32_t x322 = INT32_MAX;
	static int32_t x324 = -118686591;
	int32_t t59 = 467;

	t59 = (x321<(x322-(x323*x324)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = -874;
	static int32_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t60 = 10882155;

	t60 = (x329<(x330-(x331*x332)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x333 = INT64_MAX;
	static uint8_t x335 = 1U;
	uint64_t x336 = 119576LLU;

	t61 = (x333<(x334-(x335*x336)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x337 = 0;
	static int32_t x338 = INT32_MIN;
	uint16_t x339 = 0U;
	volatile uint8_t x340 = 79U;
	int32_t t62 = 14227971;

	t62 = (x337<(x338-(x339*x340)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -338579131;
	uint64_t x344 = 1358414190237LLU;
	int32_t t63 = -8945410;

	t63 = (x341<(x342-(x343*x344)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x345 = INT64_MIN;
	int8_t x346 = 14;
	static int16_t x347 = INT16_MAX;
	int16_t x348 = 7603;
	volatile int32_t t64 = 4377;

	t64 = (x345<(x346-(x347*x348)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x349 = -1;
	uint32_t x350 = 11U;
	static int8_t x351 = -1;
	uint8_t x352 = 49U;
	int32_t t65 = -1548626;

	t65 = (x349<(x350-(x351*x352)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = -15323520375517LL;
	int16_t x355 = -6;
	int64_t x356 = -1LL;
	volatile int32_t t66 = 26084;

	t66 = (x353<(x354-(x355*x356)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x357 = -57457213;
	volatile int8_t x360 = INT8_MIN;

	t67 = (x357<(x358-(x359*x360)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x361 = UINT8_MAX;
	static int16_t x363 = 0;
	uint8_t x364 = UINT8_MAX;
	int32_t t68 = 19391;

	t68 = (x361<(x362-(x363*x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x365 = 13;
	volatile int8_t x366 = -1;
	static int16_t x368 = -3883;
	int32_t t69 = -170;

	t69 = (x365<(x366-(x367*x368)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x370 = INT8_MAX;
	uint8_t x371 = UINT8_MAX;

	t70 = (x369<(x370-(x371*x372)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t71 = -504;

	t71 = (x373<(x374-(x375*x376)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x385 = -1LL;
	int16_t x387 = -8114;

	t72 = (x385<(x386-(x387*x388)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = 5064;
	int64_t x390 = 505282LL;
	int8_t x392 = INT8_MIN;
	volatile int32_t t73 = -3;

	t73 = (x389<(x390-(x391*x392)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x394 = 2154929740677573253LLU;
	int64_t x395 = 1844886639135424311LL;
	uint64_t x396 = UINT64_MAX;
	static volatile int32_t t74 = 3203;

	t74 = (x393<(x394-(x395*x396)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = INT16_MIN;
	volatile int32_t t75 = -11955;

	t75 = (x401<(x402-(x403*x404)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x405 = 6U;
	int8_t x406 = 40;
	int16_t x407 = -159;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t76 = -33161479;

	t76 = (x405<(x406-(x407*x408)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 3443481144347LLU;
	static int16_t x411 = 0;
	static int32_t x412 = -1;
	volatile int32_t t77 = -13;

	t77 = (x409<(x410-(x411*x412)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x413 = UINT64_MAX;
	static uint16_t x414 = 63U;
	static volatile uint8_t x415 = 40U;
	uint8_t x416 = 1U;
	volatile int32_t t78 = -288600848;

	t78 = (x413<(x414-(x415*x416)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x417 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	static int8_t x420 = -3;
	int32_t t79 = -2359292;

	t79 = (x417<(x418-(x419*x420)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = -1879;
	volatile int32_t t80 = -31156388;

	t80 = (x425<(x426-(x427*x428)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x430 = 1202U;
	static uint8_t x431 = 19U;
	static uint64_t x432 = 19068560LLU;
	int32_t t81 = 209583;

	t81 = (x429<(x430-(x431*x432)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x433 = UINT32_MAX;
	static int8_t x434 = -1;
	int16_t x435 = INT16_MAX;
	static int16_t x436 = INT16_MIN;
	static int32_t t82 = -5;

	t82 = (x433<(x434-(x435*x436)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	static int16_t x440 = -2;
	static int32_t t83 = 4571603;

	t83 = (x437<(x438-(x439*x440)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x442 = INT8_MIN;
	int32_t x443 = 0;
	uint64_t x444 = 1927280745519LLU;
	static int32_t t84 = 58;

	t84 = (x441<(x442-(x443*x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x445 = -13413055;
	static int16_t x446 = -1;
	int64_t x447 = -1LL;
	int32_t t85 = 0;

	t85 = (x445<(x446-(x447*x448)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x453 = INT32_MAX;
	int64_t x454 = 6872716576297LL;
	int64_t x456 = -1LL;
	volatile int32_t t86 = -39922197;

	t86 = (x453<(x454-(x455*x456)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x461 = 1U;
	uint64_t x462 = 25941LLU;
	volatile uint64_t x464 = UINT64_MAX;

	t87 = (x461<(x462-(x463*x464)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x465 = 0U;
	int64_t x466 = INT64_MIN;
	volatile uint8_t x468 = 3U;
	int32_t t88 = 8;

	t88 = (x465<(x466-(x467*x468)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x469 = INT32_MIN;
	volatile int8_t x470 = -1;
	int16_t x471 = INT16_MAX;
	static volatile int32_t t89 = -1182;

	t89 = (x469<(x470-(x471*x472)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x475 = 3307337U;
	int32_t x476 = INT32_MIN;
	int32_t t90 = 499;

	t90 = (x473<(x474-(x475*x476)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x477 = 35229U;
	volatile int64_t x478 = -1LL;
	volatile int32_t t91 = -227;

	t91 = (x477<(x478-(x479*x480)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = INT32_MAX;
	int8_t x483 = 1;

	t92 = (x481<(x482-(x483*x484)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MAX;
	uint8_t x486 = UINT8_MAX;
	uint8_t x487 = UINT8_MAX;
	volatile int8_t x488 = INT8_MIN;
	int32_t t93 = -578950;

	t93 = (x485<(x486-(x487*x488)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x489 = 92655359;
	int32_t x490 = INT32_MIN;
	int32_t t94 = -1232;

	t94 = (x489<(x490-(x491*x492)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = -15436;
	static int8_t x495 = INT8_MAX;
	static int32_t x496 = -2093277;

	t95 = (x493<(x494-(x495*x496)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x497 = 10U;
	static int8_t x498 = -1;
	int8_t x499 = -1;
	int8_t x500 = -1;
	volatile int32_t t96 = 83439;

	t96 = (x497<(x498-(x499*x500)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MIN;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;

	t97 = (x501<(x502-(x503*x504)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = INT32_MIN;
	static uint16_t x506 = 384U;
	static int8_t x507 = INT8_MIN;
	int64_t x508 = 35283093790621394LL;

	t98 = (x505<(x506-(x507*x508)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x509 = 0U;
	int32_t x510 = INT32_MIN;
	volatile int32_t x512 = 246267;

	t99 = (x509<(x510-(x511*x512)));

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

