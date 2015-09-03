#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
volatile uint8_t x23 = 26U;
volatile int32_t t5 = 499118916;
static int64_t x30 = 7920555658LL;
int16_t x34 = INT16_MIN;
uint16_t x45 = 81U;
static int32_t t11 = 1;
volatile uint16_t x55 = 48U;
static int8_t x58 = INT8_MIN;
int32_t x62 = INT32_MAX;
static int32_t t14 = -3;
int8_t x65 = INT8_MIN;
static uint64_t x76 = 1553605LLU;
int32_t t18 = -29902617;
int8_t x93 = INT8_MAX;
int64_t x94 = INT64_MAX;
volatile uint32_t x99 = UINT32_MAX;
int32_t x100 = 0;
volatile int16_t x107 = INT16_MIN;
volatile int8_t x108 = -5;
uint32_t x114 = 12U;
int32_t x123 = 27603125;
int8_t x124 = -25;
int8_t x126 = INT8_MAX;
volatile int32_t x127 = -15;
int32_t t29 = -13268;
volatile int32_t x140 = -55;
int32_t t30 = 14035;
static uint8_t x141 = 8U;
volatile int16_t x144 = 208;
int32_t t31 = 1;
volatile uint16_t x160 = UINT16_MAX;
uint32_t x161 = 22U;
uint64_t x163 = 2084923307770LLU;
volatile uint16_t x164 = 411U;
volatile int16_t x182 = -1;
int32_t x183 = 19060;
int32_t t39 = -12342712;
static volatile int32_t x185 = 19651;
int8_t x186 = INT8_MIN;
int32_t x193 = -279674479;
static volatile int8_t x197 = INT8_MIN;
volatile int32_t x200 = -1;
int16_t x201 = 11;
int8_t x208 = INT8_MIN;
volatile uint32_t x211 = 12631U;
uint64_t x219 = 54LLU;
uint32_t x235 = 192U;
uint64_t x241 = UINT64_MAX;
static volatile int8_t x244 = INT8_MAX;
volatile uint8_t x248 = 99U;
int16_t x264 = INT16_MIN;
int32_t t56 = 64159624;
int64_t x267 = -1LL;
uint8_t x268 = 9U;
volatile int32_t t60 = -58;
int8_t x284 = INT8_MIN;
int64_t x292 = -470LL;
uint64_t x294 = 941590679LLU;
volatile uint32_t x308 = 5U;
static int32_t t66 = 534963557;
int32_t x309 = INT32_MIN;
static int32_t x311 = 344103264;
int16_t x314 = 48;
uint32_t x324 = 87712294U;
int8_t x327 = 0;
int32_t x331 = INT32_MIN;
int8_t x332 = INT8_MIN;
uint64_t x334 = 2403154668970538LLU;
uint8_t x344 = 1U;
static volatile uint8_t x352 = 4U;
uint8_t x355 = 0U;
int32_t x356 = -1;
static volatile int32_t t77 = -1;
volatile int32_t x366 = INT32_MIN;
int32_t x384 = -1;
static int16_t x386 = INT16_MIN;
static int8_t x387 = -46;
volatile uint32_t x391 = 7356U;
int64_t x400 = 0LL;
static int32_t t87 = -168825;
int32_t x405 = INT32_MIN;
int8_t x406 = 1;
static uint64_t x421 = UINT64_MAX;
static int16_t x425 = -1;
static volatile int32_t t94 = -33;
static uint8_t x435 = UINT8_MAX;
int32_t t96 = 334894429;
static volatile int16_t x455 = -2368;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint64_t x3 = 1546685LLU;
	int16_t x4 = 230;
	int32_t t0 = 55;

	t0 = ((x1<x2)<=(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 15367005LL;
	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 10U;
	int64_t x8 = -615LL;
	int32_t t1 = 1869;

	t1 = ((x5<x6)<=(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -249379LL;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 377130781;

	t2 = ((x9<x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 2932506;
	int16_t x14 = INT16_MIN;
	static volatile int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 15;

	t3 = ((x13<x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	static uint32_t x19 = 483U;
	static int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -5503532;

	t4 = ((x17<x18)<=(x19-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int32_t x22 = -496397;
	static int8_t x24 = -1;

	t5 = ((x21<x22)<=(x23-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 2U;
	static int64_t x28 = -1LL;
	static volatile int32_t t6 = -35359602;

	t6 = ((x25<x26)<=(x27-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static int64_t x31 = -1LL;
	static volatile uint16_t x32 = 26568U;
	int32_t t7 = 1440;

	t7 = ((x29<x30)<=(x31-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 176;
	uint16_t x35 = 3856U;
	static int32_t x36 = 0;
	static int32_t t8 = 405293;

	t8 = ((x33<x34)<=(x35-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = 1319U;
	static int64_t x39 = -2538103356641147LL;
	uint32_t x40 = 31885U;
	int32_t t9 = 5;

	t9 = ((x37<x38)<=(x39-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = -1;
	int8_t x43 = -1;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 112620;

	t10 = ((x41<x42)<=(x43-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 356;
	uint32_t x47 = 1983U;
	uint64_t x48 = 241752508305654442LLU;

	t11 = ((x45<x46)<=(x47-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile uint16_t x54 = UINT16_MAX;
	int8_t x56 = 7;
	volatile int32_t t12 = -58401731;

	t12 = ((x53<x54)<=(x55-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 462U;
	int8_t x59 = -1;
	static uint32_t x60 = 49572U;
	int32_t t13 = -605681;

	t13 = ((x57<x58)<=(x59-x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 3531163795017539LL;
	volatile int16_t x63 = -1;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61<x62)<=(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x66 = INT32_MIN;
	uint32_t x67 = 404U;
	int16_t x68 = INT16_MIN;
	int32_t t15 = -134860069;

	t15 = ((x65<x66)<=(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 0;
	volatile int16_t x70 = INT16_MIN;
	volatile uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 93034;

	t16 = ((x69<x70)<=(x71-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	uint64_t x74 = 1925LLU;
	volatile uint8_t x75 = 0U;
	static int32_t t17 = -39002;

	t17 = ((x73<x74)<=(x75-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x81 = 5;
	int8_t x82 = -2;
	volatile int8_t x83 = INT8_MIN;
	volatile uint32_t x84 = 278U;

	t18 = ((x81<x82)<=(x83-x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	int32_t t19 = -808203;

	t19 = ((x93<x94)<=(x95-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 2679915359114875LLU;
	uint64_t x98 = 248327593LLU;
	volatile int32_t t20 = -123050460;

	t20 = ((x97<x98)<=(x99-x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -5;
	int32_t x102 = INT32_MIN;
	volatile int8_t x103 = INT8_MIN;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t21 = 953154962;

	t21 = ((x101<x102)<=(x103-x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 0U;
	int64_t x106 = INT64_MIN;
	int32_t t22 = 19974;

	t22 = ((x105<x106)<=(x107-x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MIN;
	static int64_t x110 = -1LL;
	uint8_t x111 = UINT8_MAX;
	uint16_t x112 = 3U;
	int32_t t23 = 1;

	t23 = ((x109<x110)<=(x111-x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x113 = 20U;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	static volatile int32_t t24 = 1;

	t24 = ((x113<x114)<=(x115-x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 18U;
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 1U;
	uint32_t x120 = 14U;
	static volatile int32_t t25 = -848;

	t25 = ((x117<x118)<=(x119-x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MIN;
	int16_t x122 = -1;
	static volatile int32_t t26 = -3;

	t26 = ((x121<x122)<=(x123-x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -1;
	static int64_t x128 = INT64_MIN;
	static int32_t t27 = -76285;

	t27 = ((x125<x126)<=(x127-x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = 1;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 113294LLU;
	volatile int32_t t28 = -8141528;

	t28 = ((x129<x130)<=(x131-x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 1827U;
	static int64_t x134 = 7383612658484907LL;
	int8_t x135 = -5;
	int8_t x136 = -49;

	t29 = ((x133<x134)<=(x135-x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MAX;
	static uint16_t x139 = UINT16_MAX;

	t30 = ((x137<x138)<=(x139-x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MIN;
	int64_t x143 = 764LL;

	t31 = ((x141<x142)<=(x143-x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 0LLU;
	volatile uint64_t x146 = 15726100758LLU;
	static uint16_t x147 = UINT16_MAX;
	int16_t x148 = -1;
	int32_t t32 = 3;

	t32 = ((x145<x146)<=(x147-x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = UINT8_MAX;
	int64_t x150 = -1LL;
	uint16_t x151 = 8139U;
	int16_t x152 = -1165;
	volatile int32_t t33 = 254809;

	t33 = ((x149<x150)<=(x151-x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -1;
	int32_t x154 = -1;
	static int8_t x155 = -1;
	int8_t x156 = 18;
	volatile int32_t t34 = -1373;

	t34 = ((x153<x154)<=(x155-x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 8099LLU;
	volatile int32_t x159 = INT32_MAX;
	volatile int32_t t35 = 17440;

	t35 = ((x157<x158)<=(x159-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MAX;
	volatile int32_t t36 = -1;

	t36 = ((x161<x162)<=(x163-x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -200;
	volatile int64_t x174 = INT64_MAX;
	int16_t x175 = 2488;
	static int32_t x176 = -1216737;
	int32_t t37 = 30;

	t37 = ((x173<x174)<=(x175-x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x177 = INT16_MIN;
	int8_t x178 = -23;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = -2;
	static volatile int32_t t38 = 51;

	t38 = ((x177<x178)<=(x179-x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = -1;
	int8_t x184 = INT8_MIN;

	t39 = ((x181<x182)<=(x183-x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x187 = UINT32_MAX;
	static int16_t x188 = INT16_MIN;
	int32_t t40 = 1;

	t40 = ((x185<x186)<=(x187-x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = INT32_MAX;
	int64_t x190 = -57724024048LL;
	static int64_t x191 = -13790125518699719LL;
	int8_t x192 = -1;
	static int32_t t41 = -733351688;

	t41 = ((x189<x190)<=(x191-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	int32_t x196 = 0;
	static int32_t t42 = 983878904;

	t42 = ((x193<x194)<=(x195-x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x198 = INT8_MIN;
	volatile int16_t x199 = 1615;
	int32_t t43 = 0;

	t43 = ((x197<x198)<=(x199-x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1305620366LL;
	int64_t x204 = INT64_MIN;
	static int32_t t44 = -3844964;

	t44 = ((x201<x202)<=(x203-x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = -1LL;
	int16_t x206 = INT16_MAX;
	static volatile int8_t x207 = -11;
	int32_t t45 = -1515;

	t45 = ((x205<x206)<=(x207-x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MAX;
	static int32_t x210 = 33;
	static volatile uint32_t x212 = 11U;
	volatile int32_t t46 = 79876605;

	t46 = ((x209<x210)<=(x211-x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = 9U;
	static int32_t x214 = INT32_MAX;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = -1;
	int32_t t47 = -113;

	t47 = ((x213<x214)<=(x215-x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 3060U;
	int64_t x218 = INT64_MIN;
	uint32_t x220 = UINT32_MAX;
	int32_t t48 = -664765119;

	t48 = ((x217<x218)<=(x219-x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = INT8_MIN;
	volatile int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t49 = -1;

	t49 = ((x221<x222)<=(x223-x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	int64_t x226 = -1LL;
	uint8_t x227 = 12U;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t50 = 366;

	t50 = ((x225<x226)<=(x227-x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;
	int32_t t51 = -684;

	t51 = ((x229<x230)<=(x231-x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 4815359;
	static volatile uint64_t x234 = UINT64_MAX;
	static int8_t x236 = INT8_MAX;
	int32_t t52 = 1014;

	t52 = ((x233<x234)<=(x235-x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x237 = INT16_MAX;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -1LL;
	int16_t x240 = INT16_MIN;
	int32_t t53 = 2709076;

	t53 = ((x237<x238)<=(x239-x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x242 = INT16_MIN;
	static uint32_t x243 = UINT32_MAX;
	int32_t t54 = -26384369;

	t54 = ((x241<x242)<=(x243-x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 30867LLU;
	static int64_t x246 = -381307151657054LL;
	volatile int16_t x247 = INT16_MIN;
	volatile int32_t t55 = 3628;

	t55 = ((x245<x246)<=(x247-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = -1;
	volatile uint64_t x262 = 21955132LLU;
	uint64_t x263 = 32024184LLU;

	t56 = ((x261<x262)<=(x263-x264));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x265 = 60U;
	static volatile uint8_t x266 = UINT8_MAX;
	volatile int32_t t57 = -811593099;

	t57 = ((x265<x266)<=(x267-x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x269 = 49760376U;
	int32_t x270 = -1;
	static uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t58 = -82600420;

	t58 = ((x269<x270)<=(x271-x272));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = -63;
	uint64_t x275 = 141200LLU;
	int8_t x276 = -1;
	int32_t t59 = -105843;

	t59 = ((x273<x274)<=(x275-x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = 667151318LL;
	static uint64_t x279 = UINT64_MAX;
	static volatile int8_t x280 = -1;

	t60 = ((x277<x278)<=(x279-x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MIN;
	volatile uint32_t x282 = 8U;
	static uint16_t x283 = 10089U;
	int32_t t61 = -600882977;

	t61 = ((x281<x282)<=(x283-x284));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x285 = INT8_MIN;
	volatile int8_t x286 = INT8_MIN;
	static volatile uint16_t x287 = 31U;
	int32_t x288 = 59425;
	int32_t t62 = -133114064;

	t62 = ((x285<x286)<=(x287-x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = INT8_MAX;
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 97723955695356LLU;
	static volatile int32_t t63 = 3440;

	t63 = ((x289<x290)<=(x291-x292));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	volatile int8_t x295 = -1;
	uint8_t x296 = 81U;
	volatile int32_t t64 = 48;

	t64 = ((x293<x294)<=(x295-x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	int32_t x303 = 2195703;
	int32_t x304 = INT32_MAX;
	int32_t t65 = 0;

	t65 = ((x301<x302)<=(x303-x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = 100038836LLU;
	static int8_t x307 = -1;

	t66 = ((x305<x306)<=(x307-x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x310 = -1;
	int32_t x312 = -25;
	int32_t t67 = -17045;

	t67 = ((x309<x310)<=(x311-x312));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -57135466;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = UINT64_MAX;
	int32_t t68 = -1;

	t68 = ((x313<x314)<=(x315-x316));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = 117658LL;
	int16_t x322 = -3837;
	int32_t x323 = 22857116;
	int32_t t69 = -37874;

	t69 = ((x321<x322)<=(x323-x324));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = INT64_MIN;
	uint8_t x326 = 22U;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t70 = 8309867;

	t70 = ((x325<x326)<=(x327-x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x329 = 127U;
	int32_t x330 = -207;
	int32_t t71 = -1512277;

	t71 = ((x329<x330)<=(x331-x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x333 = INT32_MAX;
	uint8_t x335 = 125U;
	int8_t x336 = 0;
	static int32_t t72 = 3409;

	t72 = ((x333<x334)<=(x335-x336));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x337 = -1LL;
	int32_t x338 = INT32_MAX;
	static volatile int64_t x339 = INT64_MAX;
	uint64_t x340 = 624270LLU;
	int32_t t73 = -66588322;

	t73 = ((x337<x338)<=(x339-x340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x341 = 454329;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	volatile int32_t t74 = -4719025;

	t74 = ((x341<x342)<=(x343-x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = -25795650922473334LL;
	uint64_t x346 = 66384024572183199LLU;
	int8_t x347 = INT8_MAX;
	int32_t x348 = 53;
	int32_t t75 = 1944;

	t75 = ((x345<x346)<=(x347-x348));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x349 = 2U;
	volatile uint16_t x350 = UINT16_MAX;
	int32_t x351 = INT32_MAX;
	volatile int32_t t76 = 132423258;

	t76 = ((x349<x350)<=(x351-x352));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = INT16_MIN;
	int32_t x354 = 126213991;

	t77 = ((x353<x354)<=(x355-x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	volatile int32_t t78 = 749980699;

	t78 = ((x357<x358)<=(x359-x360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x361 = INT8_MAX;
	volatile int8_t x362 = 1;
	int8_t x363 = -1;
	uint8_t x364 = 2U;
	static volatile int32_t t79 = -11;

	t79 = ((x361<x362)<=(x363-x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = 2155814878050184892LLU;
	uint32_t x367 = 1735078U;
	int16_t x368 = INT16_MAX;
	volatile int32_t t80 = 5504;

	t80 = ((x365<x366)<=(x367-x368));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	int32_t x375 = -1;
	static uint16_t x376 = 293U;
	volatile int32_t t81 = 12;

	t81 = ((x373<x374)<=(x375-x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x377 = 17447U;
	int8_t x378 = -1;
	int32_t x379 = -4;
	static uint16_t x380 = UINT16_MAX;
	int32_t t82 = 72986;

	t82 = ((x377<x378)<=(x379-x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = 763;
	static volatile uint32_t x382 = 142U;
	static int16_t x383 = -243;
	static volatile int32_t t83 = 4765759;

	t83 = ((x381<x382)<=(x383-x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x385 = INT8_MAX;
	uint64_t x388 = 6623759588710801616LLU;
	volatile int32_t t84 = 4692225;

	t84 = ((x385<x386)<=(x387-x388));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 0U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t85 = 71232;

	t85 = ((x389<x390)<=(x391-x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = 0;
	volatile uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t86 = 51177123;

	t86 = ((x393<x394)<=(x395-x396));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MIN;
	static uint32_t x399 = 6245224U;

	t87 = ((x397<x398)<=(x399-x400));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MAX;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t88 = -6288;

	t88 = ((x401<x402)<=(x403-x404));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x407 = -28621610951LL;
	int64_t x408 = -4042570LL;
	int32_t t89 = 932316;

	t89 = ((x405<x406)<=(x407-x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x409 = INT64_MAX;
	volatile int8_t x410 = 1;
	int16_t x411 = 13198;
	volatile int8_t x412 = INT8_MAX;
	int32_t t90 = 3867;

	t90 = ((x409<x410)<=(x411-x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x417 = 1U;
	int8_t x418 = INT8_MAX;
	static int64_t x419 = INT64_MIN;
	static int16_t x420 = -33;
	volatile int32_t t91 = 5;

	t91 = ((x417<x418)<=(x419-x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x422 = INT32_MAX;
	volatile uint64_t x423 = 6883987830320875097LLU;
	uint32_t x424 = 1288700754U;
	volatile int32_t t92 = 5;

	t92 = ((x421<x422)<=(x423-x424));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x426 = 991318984606282LLU;
	int16_t x427 = INT16_MAX;
	volatile uint32_t x428 = 9600082U;
	int32_t t93 = 657388025;

	t93 = ((x425<x426)<=(x427-x428));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x429 = -1LL;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = 738054560124132324LLU;
	static volatile uint8_t x432 = UINT8_MAX;

	t94 = ((x429<x430)<=(x431-x432));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = 0;
	uint32_t x434 = 657516U;
	int8_t x436 = INT8_MIN;
	int32_t t95 = -359884652;

	t95 = ((x433<x434)<=(x435-x436));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = 0;
	uint8_t x438 = 3U;
	int64_t x439 = -1LL;
	int32_t x440 = 64094974;

	t96 = ((x437<x438)<=(x439-x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MIN;
	static uint64_t x446 = 471440103608LLU;
	int8_t x447 = -17;
	volatile int16_t x448 = INT16_MIN;
	volatile int32_t t97 = -1;

	t97 = ((x445<x446)<=(x447-x448));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -5;
	int32_t x450 = 91704;
	volatile int16_t x451 = INT16_MIN;
	int8_t x452 = -1;
	int32_t t98 = 455;

	t98 = ((x449<x450)<=(x451-x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = -8;
	volatile uint16_t x454 = 11391U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t99 = -15990;

	t99 = ((x453<x454)<=(x455-x456));

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

