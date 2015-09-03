#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 1072053U;
int64_t x16 = INT64_MIN;
int64_t x17 = -525493649LL;
int16_t x20 = INT16_MIN;
int32_t x24 = INT32_MIN;
int8_t x32 = 12;
static int32_t t5 = -602;
uint64_t x33 = 3LLU;
uint32_t x40 = 228575304U;
int64_t x41 = INT64_MAX;
int16_t x44 = -1;
int32_t t8 = -62879;
int32_t x45 = INT32_MIN;
int32_t x47 = -1;
static volatile int64_t x48 = 1925190LL;
static uint64_t x57 = UINT64_MAX;
int16_t x58 = 1442;
static int8_t x63 = -12;
volatile int16_t x79 = -1;
int64_t x91 = -2033082213283036LL;
int32_t t19 = -527;
static int32_t x98 = INT32_MAX;
static int32_t x101 = INT32_MIN;
int32_t t21 = 239714428;
int8_t x108 = INT8_MIN;
int32_t x114 = -363694514;
volatile uint32_t x116 = 198U;
int64_t x119 = INT64_MAX;
uint64_t x120 = 1024705LLU;
int32_t t25 = -180;
int64_t x122 = -1811653LL;
int32_t x123 = 1051;
uint16_t x131 = 1U;
int32_t t28 = 1806;
static int16_t x141 = -2092;
static int64_t x147 = -7921LL;
static uint16_t x155 = UINT16_MAX;
int8_t x162 = -4;
int16_t x164 = -1;
int16_t x165 = 154;
static int32_t t40 = 71830;
int16_t x191 = INT16_MIN;
uint32_t x194 = 9569380U;
int32_t x195 = INT32_MAX;
uint16_t x198 = 966U;
volatile uint64_t x200 = 129488LLU;
static volatile int32_t t43 = 28477798;
int16_t x202 = INT16_MIN;
volatile int32_t t44 = -27868;
uint8_t x206 = 54U;
volatile uint16_t x210 = 29436U;
int32_t x216 = 216122981;
static uint8_t x231 = UINT8_MAX;
static volatile int32_t t51 = 421220544;
int32_t x240 = -94315;
int8_t x244 = -1;
int32_t t53 = -393;
uint32_t x250 = UINT32_MAX;
static int8_t x252 = 1;
uint32_t x276 = 50U;
static int16_t x278 = -1;
int64_t x279 = -130031888789063799LL;
volatile int32_t t60 = 59;
int16_t x284 = INT16_MIN;
int8_t x290 = INT8_MIN;
int32_t t62 = -22;
volatile int64_t x299 = 7113LL;
int32_t x301 = -18883;
int16_t x302 = INT16_MIN;
uint32_t x304 = 14U;
volatile int32_t t64 = -366;
int8_t x308 = INT8_MIN;
uint8_t x313 = 85U;
int32_t t66 = -507;
static volatile int32_t x318 = -13;
uint16_t x329 = UINT16_MAX;
int64_t x331 = INT64_MIN;
volatile int32_t t71 = 1;
int32_t x360 = -896;
static int8_t x363 = INT8_MAX;
static int8_t x372 = INT8_MAX;
int32_t x388 = INT32_MAX;
int8_t x405 = INT8_MAX;
static int64_t x406 = -4395502486194LL;
static volatile int8_t x407 = 1;
int16_t x415 = -1;
volatile int32_t t81 = -676433880;
int32_t x420 = INT32_MAX;
volatile int8_t x425 = 25;
uint32_t x426 = 828U;
uint64_t x427 = 1943210029LLU;
static uint8_t x431 = 0U;
volatile int32_t t88 = 25057;
volatile int32_t x450 = INT32_MIN;
int32_t x462 = 200027;
static int32_t x467 = 604;
uint16_t x470 = UINT16_MAX;
int64_t x481 = INT64_MIN;
static int32_t x484 = 5499;
static volatile uint64_t x487 = 20819049LLU;
static int32_t x489 = -884692389;
int16_t x490 = INT16_MIN;


void f0(void) {
	int8_t x5 = INT8_MIN;
	volatile uint8_t x6 = 0U;
	volatile int16_t x8 = INT16_MIN;
	int32_t t0 = 27816050;

	t0 = (x5<(x6-(x7+x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = UINT16_MAX;
	static int64_t x10 = 12874811LL;
	volatile int64_t x11 = -4LL;
	static int8_t x12 = 12;
	int32_t t1 = -1673650;

	t1 = (x9<(x10-(x11+x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 585833861724LLU;
	int64_t x15 = 2066817203544532830LL;
	int32_t t2 = -529203289;

	t2 = (x13<(x14-(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x18 = INT8_MIN;
	static int64_t x19 = -1LL;
	static int32_t t3 = -36918164;

	t3 = (x17<(x18-(x19+x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = -1;
	static volatile int16_t x22 = -5;
	uint8_t x23 = 3U;
	volatile int32_t t4 = 110;

	t4 = (x21<(x22-(x23+x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = 0U;
	int64_t x31 = 362844LL;

	t5 = (x29<(x30-(x31+x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x34 = -53;
	uint64_t x35 = 126527306LLU;
	static int8_t x36 = INT8_MIN;
	int32_t t6 = 1;

	t6 = (x33<(x34-(x35+x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -1;
	static int8_t x38 = -3;
	uint16_t x39 = 20U;
	int32_t t7 = 1;

	t7 = (x37<(x38-(x39+x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = -1;

	t8 = (x41<(x42-(x43+x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = 24;
	static int32_t t9 = -29;

	t9 = (x45<(x46-(x47+x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MAX;
	int64_t x51 = -1LL;
	volatile int8_t x52 = 19;
	int32_t t10 = -14275982;

	t10 = (x49<(x50-(x51+x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = 1;
	uint8_t x55 = 10U;
	uint32_t x56 = 20198U;
	volatile int32_t t11 = -3274732;

	t11 = (x53<(x54-(x55+x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x59 = 1732U;
	int8_t x60 = INT8_MIN;
	int32_t t12 = 19334;

	t12 = (x57<(x58-(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint8_t x64 = 1U;
	volatile int32_t t13 = -1;

	t13 = (x61<(x62-(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 13U;
	int32_t x66 = -1;
	uint32_t x67 = 412U;
	int64_t x68 = INT64_MIN;
	volatile int32_t t14 = 191342;

	t14 = (x65<(x66-(x67+x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x77 = INT32_MAX;
	volatile int64_t x78 = -1LL;
	int32_t x80 = -1;
	volatile int32_t t15 = -711116;

	t15 = (x77<(x78-(x79+x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 22U;
	int32_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	uint32_t x84 = 966U;
	static int32_t t16 = 50;

	t16 = (x81<(x82-(x83+x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	volatile int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	static volatile int32_t t17 = 9114;

	t17 = (x85<(x86-(x87+x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = INT32_MIN;
	uint64_t x92 = 369LLU;
	int32_t t18 = -10164904;

	t18 = (x89<(x90-(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x93 = -1LL;
	static uint32_t x94 = UINT32_MAX;
	static volatile int16_t x95 = 23;
	int32_t x96 = INT32_MIN;

	t19 = (x93<(x94-(x95+x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 4901U;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 1494509807602LLU;
	static int32_t t20 = -589511;

	t20 = (x97<(x98-(x99+x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = -62;
	int8_t x103 = INT8_MIN;
	uint32_t x104 = UINT32_MAX;

	t21 = (x101<(x102-(x103+x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 985520U;
	volatile int16_t x106 = -30;
	volatile int32_t x107 = -1;
	volatile int32_t t22 = 418647760;

	t22 = (x105<(x106-(x107+x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = -387;
	static int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	static volatile uint16_t x112 = 3U;
	volatile int32_t t23 = 395898;

	t23 = (x109<(x110-(x111+x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MAX;
	int8_t x115 = -1;
	int32_t t24 = -403510755;

	t24 = (x113<(x114-(x115+x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = -1;
	uint8_t x118 = UINT8_MAX;

	t25 = (x117<(x118-(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t26 = -1;

	t26 = (x121<(x122-(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = -464811;
	int16_t x126 = -1;
	uint32_t x127 = 49935U;
	volatile int64_t x128 = -1LL;
	volatile int32_t t27 = -418;

	t27 = (x125<(x126-(x127+x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	static int16_t x130 = INT16_MIN;
	uint8_t x132 = 39U;

	t28 = (x129<(x130-(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = -1;
	static int16_t x135 = INT16_MIN;
	volatile uint64_t x136 = 119354811LLU;
	int32_t t29 = -10059626;

	t29 = (x133<(x134-(x135+x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 15293U;
	int64_t x138 = 179989203536LL;
	int32_t x139 = INT32_MIN;
	static uint8_t x140 = UINT8_MAX;
	int32_t t30 = 1155761;

	t30 = (x137<(x138-(x139+x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x142 = INT64_MAX;
	uint8_t x143 = 15U;
	int16_t x144 = 6463;
	volatile int32_t t31 = -28;

	t31 = (x141<(x142-(x143+x144)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MAX;
	static uint8_t x146 = 2U;
	uint16_t x148 = 43U;
	int32_t t32 = -63801883;

	t32 = (x145<(x146-(x147+x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -1;
	int8_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	static uint8_t x152 = 3U;
	int32_t t33 = -15;

	t33 = (x149<(x150-(x151+x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x154 = 0U;
	volatile int64_t x156 = INT64_MIN;
	int32_t t34 = -421420;

	t34 = (x153<(x154-(x155+x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = 11;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MAX;
	int64_t x160 = -1LL;
	static volatile int32_t t35 = 154389;

	t35 = (x157<(x158-(x159+x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x161 = 0U;
	uint8_t x163 = 117U;
	volatile int32_t t36 = 54;

	t36 = (x161<(x162-(x163+x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	uint32_t x168 = 12442935U;
	int32_t t37 = 329;

	t37 = (x165<(x166-(x167+x168)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	static volatile int64_t x170 = -1548953256783760LL;
	int8_t x171 = -1;
	static int64_t x172 = -411539430050013261LL;
	volatile int32_t t38 = -1313;

	t38 = (x169<(x170-(x171+x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x173 = UINT16_MAX;
	static int8_t x174 = -1;
	volatile int64_t x175 = INT64_MIN;
	volatile uint16_t x176 = 554U;
	static volatile int32_t t39 = -926;

	t39 = (x173<(x174-(x175+x176)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 44U;
	uint8_t x182 = 0U;
	volatile int16_t x183 = -62;
	uint8_t x184 = UINT8_MAX;

	t40 = (x181<(x182-(x183+x184)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -1;
	int16_t x190 = 0;
	int16_t x192 = INT16_MIN;
	int32_t t41 = 6320;

	t41 = (x189<(x190-(x191+x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x193 = INT32_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t42 = -675298916;

	t42 = (x193<(x194-(x195+x196)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = 1757;
	static int64_t x199 = INT64_MAX;

	t43 = (x197<(x198-(x199+x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 7U;
	volatile uint16_t x203 = 778U;
	static int32_t x204 = 0;

	t44 = (x201<(x202-(x203+x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MIN;
	static volatile int8_t x207 = -3;
	int16_t x208 = -501;
	volatile int32_t t45 = 67255085;

	t45 = (x205<(x206-(x207+x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	int64_t x211 = 465LL;
	static int16_t x212 = -1;
	static int32_t t46 = 88912161;

	t46 = (x209<(x210-(x211+x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = -1;
	uint64_t x214 = 886252LLU;
	int8_t x215 = INT8_MIN;
	volatile int32_t t47 = 1434;

	t47 = (x213<(x214-(x215+x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 33U;
	volatile int32_t t48 = 450187;

	t48 = (x221<(x222-(x223+x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MAX;
	volatile int32_t x226 = INT32_MIN;
	volatile int16_t x227 = INT16_MIN;
	uint16_t x228 = 20U;
	static int32_t t49 = 21;

	t49 = (x225<(x226-(x227+x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x229 = 0U;
	uint32_t x230 = 4U;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t50 = -101039616;

	t50 = (x229<(x230-(x231+x232)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	int16_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	uint32_t x236 = 6139719U;

	t51 = (x233<(x234-(x235+x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -4432;
	static uint64_t x238 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	static int32_t t52 = -996075230;

	t52 = (x237<(x238-(x239+x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 64376029253872LLU;
	volatile int16_t x242 = -1;
	int8_t x243 = -21;

	t53 = (x241<(x242-(x243+x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = 1;
	int16_t x246 = -1;
	static volatile int32_t x247 = INT32_MIN;
	volatile int64_t x248 = 3218956535654419LL;
	int32_t t54 = 450233;

	t54 = (x245<(x246-(x247+x248)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = UINT8_MAX;
	uint8_t x251 = 3U;
	int32_t t55 = -427967564;

	t55 = (x249<(x250-(x251+x252)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 0U;
	int8_t x254 = INT8_MIN;
	int32_t x255 = 3805655;
	static int8_t x256 = INT8_MIN;
	int32_t t56 = -7537706;

	t56 = (x253<(x254-(x255+x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MIN;
	static volatile uint16_t x259 = UINT16_MAX;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t57 = 23189159;

	t57 = (x257<(x258-(x259+x260)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -1064155271950857LL;
	uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 124U;
	int32_t x264 = INT32_MIN;
	int32_t t58 = 6845;

	t58 = (x261<(x262-(x263+x264)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x273 = 1U;
	uint64_t x274 = 9LLU;
	int16_t x275 = INT16_MIN;
	volatile int32_t t59 = 4777653;

	t59 = (x273<(x274-(x275+x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x277 = 7U;
	static int16_t x280 = INT16_MIN;

	t60 = (x277<(x278-(x279+x280)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	static int32_t t61 = -178295489;

	t61 = (x281<(x282-(x283+x284)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -1LL;
	int16_t x291 = -4150;
	int16_t x292 = -162;

	t62 = (x289<(x290-(x291+x292)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 156984022LLU;
	static uint32_t x298 = 7U;
	int16_t x300 = INT16_MAX;
	static volatile int32_t t63 = 589;

	t63 = (x297<(x298-(x299+x300)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x303 = -187;

	t64 = (x301<(x302-(x303+x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 14U;
	volatile uint32_t x306 = 3462U;
	int16_t x307 = 1;
	int32_t t65 = -5487524;

	t65 = (x305<(x306-(x307+x308)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x314 = 3891592483554748LLU;
	volatile int16_t x315 = 0;
	int8_t x316 = INT8_MAX;

	t66 = (x313<(x314-(x315+x316)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = INT8_MIN;
	static volatile int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t67 = 3258516;

	t67 = (x317<(x318-(x319+x320)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x325 = -16;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -941143LL;
	static int32_t t68 = 3;

	t68 = (x325<(x326-(x327+x328)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x330 = UINT64_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	int32_t t69 = -157;

	t69 = (x329<(x330-(x331+x332)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x337 = INT16_MIN;
	uint16_t x338 = 43U;
	static volatile uint16_t x339 = 7996U;
	int64_t x340 = INT64_MIN;
	volatile int32_t t70 = -51952;

	t70 = (x337<(x338-(x339+x340)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x349 = 8U;
	int8_t x350 = 25;
	uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;

	t71 = (x349<(x350-(x351+x352)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x357 = 18U;
	int16_t x358 = INT16_MAX;
	static int32_t x359 = 23;
	volatile int32_t t72 = -1075215;

	t72 = (x357<(x358-(x359+x360)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MAX;
	int8_t x364 = -1;
	int32_t t73 = -15;

	t73 = (x361<(x362-(x363+x364)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x369 = -1;
	int8_t x370 = -1;
	volatile int64_t x371 = 45007420080LL;
	volatile int32_t t74 = 4330;

	t74 = (x369<(x370-(x371+x372)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x373 = -2029725650LL;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -7;
	int16_t x376 = INT16_MIN;
	volatile int32_t t75 = -147;

	t75 = (x373<(x374-(x375+x376)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x385 = 1U;
	int16_t x386 = -633;
	uint64_t x387 = 7869597654523LLU;
	volatile int32_t t76 = 60433214;

	t76 = (x385<(x386-(x387+x388)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = 1U;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	int64_t x396 = -74485198989949LL;
	volatile int32_t t77 = -519657594;

	t77 = (x393<(x394-(x395+x396)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x401 = 1549411698LL;
	static int64_t x402 = 124756435LL;
	uint16_t x403 = UINT16_MAX;
	static uint32_t x404 = 13U;
	volatile int32_t t78 = 16;

	t78 = (x401<(x402-(x403+x404)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x408 = 402254700U;
	volatile int32_t t79 = 6;

	t79 = (x405<(x406-(x407+x408)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	volatile uint32_t x411 = 117275453U;
	static int32_t x412 = 372241;
	volatile int32_t t80 = -157;

	t80 = (x409<(x410-(x411+x412)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x413 = 25;
	static uint64_t x414 = 162447451925718LLU;
	uint16_t x416 = UINT16_MAX;

	t81 = (x413<(x414-(x415+x416)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x417 = UINT16_MAX;
	static int16_t x418 = -1;
	volatile int64_t x419 = 23656993LL;
	volatile int32_t t82 = 47044731;

	t82 = (x417<(x418-(x419+x420)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x421 = -1;
	volatile int16_t x422 = -1;
	volatile uint8_t x423 = 7U;
	static uint64_t x424 = 11803652LLU;
	int32_t t83 = 227841001;

	t83 = (x421<(x422-(x423+x424)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t84 = 90;

	t84 = (x425<(x426-(x427+x428)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = INT16_MIN;
	uint32_t x430 = UINT32_MAX;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t85 = 873986;

	t85 = (x429<(x430-(x431+x432)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x433 = 16941U;
	uint32_t x434 = 39U;
	int16_t x435 = 313;
	int16_t x436 = INT16_MAX;
	volatile int32_t t86 = 17641746;

	t86 = (x433<(x434-(x435+x436)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x437 = INT64_MIN;
	static volatile int64_t x438 = -1LL;
	int32_t x439 = INT32_MAX;
	uint32_t x440 = UINT32_MAX;
	int32_t t87 = 2753;

	t87 = (x437<(x438-(x439+x440)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x441 = 23502U;
	uint16_t x442 = 878U;
	uint8_t x443 = 0U;
	int32_t x444 = 4;

	t88 = (x441<(x442-(x443+x444)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = -3;
	uint16_t x446 = UINT16_MAX;
	static int64_t x447 = INT64_MAX;
	int16_t x448 = -155;
	int32_t t89 = -7507;

	t89 = (x445<(x446-(x447+x448)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x449 = INT64_MAX;
	volatile int8_t x451 = -1;
	static int64_t x452 = 416446351232810912LL;
	int32_t t90 = -217591892;

	t90 = (x449<(x450-(x451+x452)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x453 = 5U;
	static int16_t x454 = 5328;
	uint8_t x455 = 1U;
	int16_t x456 = -4466;
	int32_t t91 = 2;

	t91 = (x453<(x454-(x455+x456)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x461 = INT64_MIN;
	static uint8_t x463 = 10U;
	int8_t x464 = INT8_MIN;
	int32_t t92 = 125;

	t92 = (x461<(x462-(x463+x464)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x465 = 862127085U;
	int16_t x466 = 653;
	static int16_t x468 = -5;
	volatile int32_t t93 = 0;

	t93 = (x465<(x466-(x467+x468)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x469 = 396U;
	uint16_t x471 = UINT16_MAX;
	static int8_t x472 = -1;
	static volatile int32_t t94 = 669710;

	t94 = (x469<(x470-(x471+x472)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x473 = 1U;
	int16_t x474 = -1;
	static uint64_t x475 = 2078111700594LLU;
	uint8_t x476 = 62U;
	static int32_t t95 = -374;

	t95 = (x473<(x474-(x475+x476)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x477 = -16517793215200LL;
	volatile int64_t x478 = INT64_MIN;
	int8_t x479 = 1;
	int8_t x480 = INT8_MIN;
	int32_t t96 = -108142;

	t96 = (x477<(x478-(x479+x480)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x482 = -144761;
	uint32_t x483 = UINT32_MAX;
	int32_t t97 = 20133212;

	t97 = (x481<(x482-(x483+x484)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x485 = -2930;
	int64_t x486 = 343648LL;
	int8_t x488 = INT8_MIN;
	int32_t t98 = 2162;

	t98 = (x485<(x486-(x487+x488)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x491 = UINT16_MAX;
	static volatile int16_t x492 = INT16_MIN;
	static int32_t t99 = 2554;

	t99 = (x489<(x490-(x491+x492)));

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

