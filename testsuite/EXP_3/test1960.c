#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x3 = 5;
uint32_t x6 = 144U;
static volatile int64_t x8 = INT64_MIN;
static int32_t t2 = 51599152;
uint8_t x14 = UINT8_MAX;
uint8_t x15 = UINT8_MAX;
int16_t x16 = -1;
uint32_t x19 = 97138U;
volatile uint32_t x23 = UINT32_MAX;
int32_t t5 = 644;
int32_t x29 = INT32_MIN;
volatile int16_t x31 = INT16_MIN;
uint64_t x33 = UINT64_MAX;
volatile uint32_t x38 = UINT32_MAX;
uint64_t x49 = 115LLU;
int8_t x58 = -1;
int8_t x59 = -1;
int64_t x61 = INT64_MAX;
int64_t x64 = INT64_MAX;
int8_t x65 = -1;
uint64_t x86 = 101853468098LLU;
static int8_t x95 = -1;
volatile uint16_t x99 = 9644U;
int16_t x101 = 56;
int64_t x104 = INT64_MIN;
int32_t t25 = -352;
volatile uint16_t x107 = 828U;
int16_t x111 = 0;
int32_t t27 = -1;
static volatile int16_t x113 = -1;
int8_t x121 = INT8_MIN;
int16_t x125 = INT16_MAX;
int64_t x130 = -1LL;
uint64_t x131 = 518073LLU;
uint16_t x134 = 443U;
uint32_t x139 = 7727U;
volatile int32_t t34 = 29006;
int16_t x141 = -6;
int8_t x148 = INT8_MIN;
int32_t x150 = 24850799;
volatile int32_t t37 = -5176704;
int16_t x156 = INT16_MIN;
static volatile int16_t x158 = -1;
int8_t x166 = INT8_MIN;
uint16_t x168 = UINT16_MAX;
volatile int32_t t42 = 235;
static volatile int32_t t43 = -131058;
int16_t x177 = INT16_MIN;
uint64_t x188 = UINT64_MAX;
uint8_t x191 = 89U;
int16_t x193 = INT16_MAX;
volatile int8_t x194 = INT8_MIN;
volatile int64_t x195 = INT64_MIN;
static int32_t t49 = 28516;
uint8_t x205 = 11U;
int32_t x207 = -1;
uint64_t x209 = 30061513666640693LLU;
static uint64_t x210 = 7247332576923LLU;
volatile int32_t t52 = -1;
uint16_t x222 = 0U;
static int16_t x223 = INT16_MAX;
uint32_t x225 = UINT32_MAX;
volatile int32_t t56 = -9;
volatile int8_t x238 = -1;
int32_t x242 = INT32_MIN;
int8_t x256 = INT8_MIN;
static uint16_t x262 = 5U;
int16_t x264 = -598;
uint64_t x265 = 1901LLU;
int32_t x266 = INT32_MAX;
int64_t x274 = INT64_MAX;
int64_t x275 = INT64_MIN;
uint8_t x281 = UINT8_MAX;
static int64_t x288 = INT64_MIN;
volatile int32_t t72 = -9378;
static uint32_t x299 = 3421U;
volatile int64_t x301 = INT64_MIN;
static int32_t t76 = -11558786;
volatile int16_t x316 = -1;
volatile int32_t x323 = -1;
volatile int64_t x326 = 903056592543796LL;
int32_t t83 = 23991105;
volatile uint8_t x339 = 49U;
int8_t x342 = 0;
static int64_t x343 = 561914059982881656LL;
uint16_t x345 = 5806U;
uint8_t x347 = 15U;
static uint64_t x353 = 59116272LLU;
int8_t x355 = -1;
int32_t x356 = -251741;
int32_t t89 = 146315990;
static int32_t x363 = INT32_MIN;
int32_t t90 = 14;
int32_t x374 = 126715;
volatile int8_t x378 = -7;
int32_t x385 = INT32_MIN;
int32_t x388 = -1;
int64_t x389 = -1LL;
int16_t x392 = 213;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MAX;
	static uint16_t x4 = 1U;
	volatile int32_t t0 = -37;

	t0 = ((x1==x2)<=(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	uint64_t x7 = UINT64_MAX;
	int32_t t1 = 10313943;

	t1 = ((x5==x6)<=(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 265U;
	static int32_t x10 = -197751998;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -1;

	t2 = ((x9==x10)<=(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int32_t t3 = -921346;

	t3 = ((x13==x14)<=(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -36LL;
	volatile int16_t x18 = 1;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -501183499;

	t4 = ((x17==x18)<=(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -219;
	int32_t x22 = INT32_MAX;
	static int16_t x24 = -1;

	t5 = ((x21==x22)<=(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 130338870LLU;
	int8_t x26 = INT8_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	uint16_t x28 = 12U;
	static int32_t t6 = -6;

	t6 = ((x25==x26)<=(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x30 = UINT16_MAX;
	volatile int8_t x32 = -52;
	int32_t t7 = 174514;

	t7 = ((x29==x30)<=(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = 1988405LLU;
	static uint16_t x35 = 20400U;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 4075442;

	t8 = ((x33==x34)<=(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 58;
	static uint8_t x39 = 3U;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = -32503122;

	t9 = ((x37==x38)<=(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int16_t x42 = INT16_MAX;
	static int8_t x43 = INT8_MAX;
	int16_t x44 = 2492;
	volatile int32_t t10 = -227878910;

	t10 = ((x41==x42)<=(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = 638453929986LLU;
	static int16_t x47 = INT16_MIN;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = 2368;

	t11 = ((x45==x46)<=(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 23U;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	int32_t t12 = 3475;

	t12 = ((x49==x50)<=(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 2089288545859002628LL;
	int16_t x54 = INT16_MAX;
	volatile uint32_t x55 = UINT32_MAX;
	uint64_t x56 = 262701886667LLU;
	volatile int32_t t13 = 25034;

	t13 = ((x53==x54)<=(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 3120442;

	t14 = ((x57==x58)<=(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x62 = 24;
	volatile int8_t x63 = -59;
	int32_t t15 = 62;

	t15 = ((x61==x62)<=(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -293234731889LL;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = 0;
	int32_t t16 = -2451;

	t16 = ((x65==x66)<=(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = -1;
	int16_t x70 = 6898;
	volatile uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;
	static int32_t t17 = 1121;

	t17 = ((x69==x70)<=(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 2204LLU;
	int32_t x75 = -1;
	int64_t x76 = 186LL;
	int32_t t18 = -823557111;

	t18 = ((x73==x74)<=(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 6U;
	int32_t t19 = 1;

	t19 = ((x77==x78)<=(x79|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	int64_t x82 = INT64_MAX;
	volatile int16_t x83 = INT16_MIN;
	uint32_t x84 = 54760U;
	volatile int32_t t20 = -89301;

	t20 = ((x81==x82)<=(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -14136;
	volatile int32_t x87 = -1;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -84;

	t21 = ((x85==x86)<=(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = INT32_MAX;
	volatile int32_t x92 = -1;
	static volatile int32_t t22 = -1;

	t22 = ((x89==x90)<=(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int64_t x94 = INT64_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 1398000;

	t23 = ((x93==x94)<=(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x98 = -1;
	volatile int64_t x100 = -1056308488858680LL;
	int32_t t24 = 54506;

	t24 = ((x97==x98)<=(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 102U;
	int64_t x103 = 3LL;

	t25 = ((x101==x102)<=(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	int32_t x108 = 0;
	volatile int32_t t26 = 1;

	t26 = ((x105==x106)<=(x107|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1467;
	uint16_t x110 = 12022U;
	uint8_t x112 = UINT8_MAX;

	t27 = ((x109==x110)<=(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -1;
	int64_t x115 = 57634845134029248LL;
	volatile uint64_t x116 = 97117485192947194LLU;
	int32_t t28 = -5452;

	t28 = ((x113==x114)<=(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile uint64_t x118 = 45682679892LLU;
	int64_t x119 = 6830211638LL;
	volatile int64_t x120 = 30410944136576LL;
	volatile int32_t t29 = -11349;

	t29 = ((x117==x118)<=(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 10194004248662LL;
	int64_t x123 = -1LL;
	int32_t x124 = 3;
	int32_t t30 = -2310503;

	t30 = ((x121==x122)<=(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	int8_t x127 = 0;
	int16_t x128 = -1;
	volatile int32_t t31 = -155;

	t31 = ((x125==x126)<=(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x132 = 2189458649161706317LL;
	int32_t t32 = 1;

	t32 = ((x129==x130)<=(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	volatile int16_t x135 = 1009;
	int8_t x136 = INT8_MIN;
	int32_t t33 = 34895;

	t33 = ((x133==x134)<=(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 2U;
	static int8_t x140 = INT8_MIN;

	t34 = ((x137==x138)<=(x139|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MIN;
	uint8_t x143 = UINT8_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t35 = -23;

	t35 = ((x141==x142)<=(x143|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -64896138041227LL;
	uint16_t x146 = 2185U;
	int32_t x147 = -1;
	int32_t t36 = 793736;

	t36 = ((x145==x146)<=(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 0LL;
	static uint64_t x151 = 131LLU;
	int8_t x152 = -1;

	t37 = ((x149==x150)<=(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x154 = 553U;
	int32_t x155 = -1;
	int32_t t38 = 1416;

	t38 = ((x153==x154)<=(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 6U;
	int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 12;

	t39 = ((x157==x158)<=(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 2LLU;
	int16_t x162 = -430;
	static int16_t x163 = -578;
	static int8_t x164 = -34;
	volatile int32_t t40 = 0;

	t40 = ((x161==x162)<=(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	volatile int64_t x167 = INT64_MAX;
	int32_t t41 = 3;

	t41 = ((x165==x166)<=(x167|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MAX;

	t42 = ((x169==x170)<=(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MAX;
	volatile uint64_t x174 = 172255197LLU;
	int64_t x175 = -1LL;
	int32_t x176 = -138411;

	t43 = ((x173==x174)<=(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -127;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -828466;

	t44 = ((x177==x178)<=(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 65;
	int32_t x182 = -6;
	int32_t x183 = 119418;
	uint64_t x184 = 432592922037043LLU;
	int32_t t45 = -20452;

	t45 = ((x181==x182)<=(x183|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int32_t t46 = -1027;

	t46 = ((x185==x186)<=(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -72LL;
	static int64_t x190 = INT64_MIN;
	static int32_t x192 = -1;
	int32_t t47 = 6;

	t47 = ((x189==x190)<=(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = 29029;

	t48 = ((x193==x194)<=(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 157082472LLU;
	static int8_t x198 = INT8_MIN;
	static int32_t x199 = INT32_MAX;
	static int32_t x200 = -1;

	t49 = ((x197==x198)<=(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 8647U;
	uint64_t x202 = 3672546509LLU;
	int16_t x203 = INT16_MAX;
	static int64_t x204 = INT64_MIN;
	int32_t t50 = -34117;

	t50 = ((x201==x202)<=(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	int64_t x208 = -274591110652LL;
	int32_t t51 = 2300207;

	t51 = ((x205==x206)<=(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x211 = 2818U;
	static int64_t x212 = INT64_MAX;

	t52 = ((x209==x210)<=(x211|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	static int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = 11368;

	t53 = ((x213==x214)<=(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = INT8_MAX;
	volatile int64_t x218 = 11LL;
	int16_t x219 = 3642;
	uint8_t x220 = 25U;
	volatile int32_t t54 = -192;

	t54 = ((x217==x218)<=(x219|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int16_t x224 = -1;
	int32_t t55 = -15;

	t55 = ((x221==x222)<=(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x226 = 69U;
	int16_t x227 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;

	t56 = ((x225==x226)<=(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	volatile int32_t x230 = -1;
	uint32_t x231 = 57678276U;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t57 = 15;

	t57 = ((x229==x230)<=(x231|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 172U;
	uint8_t x235 = 7U;
	static int64_t x236 = INT64_MIN;
	int32_t t58 = 2132457;

	t58 = ((x233==x234)<=(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 61U;
	int16_t x239 = INT16_MIN;
	static uint8_t x240 = 6U;
	volatile int32_t t59 = -25888165;

	t59 = ((x237==x238)<=(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	uint16_t x244 = 673U;
	int32_t t60 = 15325775;

	t60 = ((x241==x242)<=(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int8_t x246 = INT8_MAX;
	static uint16_t x247 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;
	int32_t t61 = -1;

	t61 = ((x245==x246)<=(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -1;
	int32_t x251 = 3;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 356043;

	t62 = ((x249==x250)<=(x251|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	volatile uint16_t x254 = 3540U;
	static int32_t x255 = 5990;
	int32_t t63 = 739476236;

	t63 = ((x253==x254)<=(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int16_t x258 = -1;
	uint8_t x259 = 32U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = -5;

	t64 = ((x257==x258)<=(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 1999U;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t t65 = 6967392;

	t65 = ((x261==x262)<=(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x267 = -1LL;
	static uint32_t x268 = 440000U;
	int32_t t66 = -3061;

	t66 = ((x265==x266)<=(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1908;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = 102220U;
	volatile int32_t t67 = -1930;

	t67 = ((x269==x270)<=(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 15U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 7;

	t68 = ((x273==x274)<=(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x277 = 62U;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -3720528;

	t69 = ((x277==x278)<=(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = -1;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = INT8_MIN;
	static int32_t t70 = 7;

	t70 = ((x281==x282)<=(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint64_t x286 = 673176909192526LLU;
	uint8_t x287 = 1U;
	int32_t t71 = 10458;

	t71 = ((x285==x286)<=(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 126U;
	uint8_t x290 = 8U;
	int64_t x291 = -65756398421741LL;
	volatile int64_t x292 = INT64_MIN;

	t72 = ((x289==x290)<=(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -4168;
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = 3558813;

	t73 = ((x293==x294)<=(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = 1990U;
	static int32_t x298 = -53;
	uint8_t x300 = 36U;
	static volatile int32_t t74 = -264398;

	t74 = ((x297==x298)<=(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = -1;
	static int8_t x303 = -1;
	volatile int8_t x304 = INT8_MAX;
	int32_t t75 = 393181;

	t75 = ((x301==x302)<=(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	static int64_t x307 = INT64_MIN;
	static int64_t x308 = -1LL;

	t76 = ((x305==x306)<=(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int8_t x311 = -18;
	uint64_t x312 = 106956569LLU;
	int32_t t77 = 2;

	t77 = ((x309==x310)<=(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 1313835U;
	int8_t x314 = -1;
	volatile int8_t x315 = INT8_MIN;
	volatile int32_t t78 = -19;

	t78 = ((x313==x314)<=(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 6U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = -1;
	uint16_t x320 = 1077U;
	volatile int32_t t79 = 2;

	t79 = ((x317==x318)<=(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 132961113909163LL;
	int32_t x324 = INT32_MAX;
	int32_t t80 = 201799818;

	t80 = ((x321==x322)<=(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int16_t x327 = -1;
	int32_t x328 = -1;
	int32_t t81 = 3657;

	t81 = ((x325==x326)<=(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 52U;
	static int8_t x330 = INT8_MIN;
	volatile int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t82 = 157433973;

	t82 = ((x329==x330)<=(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 271957137LLU;
	int8_t x334 = INT8_MIN;
	static int16_t x335 = -233;
	int32_t x336 = INT32_MAX;

	t83 = ((x333==x334)<=(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	int16_t x340 = -2147;
	static int32_t t84 = 102412;

	t84 = ((x337==x338)<=(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 378U;
	int64_t x344 = INT64_MAX;
	int32_t t85 = -20;

	t85 = ((x341==x342)<=(x343|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = 187U;
	int8_t x348 = -15;
	volatile int32_t t86 = -951;

	t86 = ((x345==x346)<=(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	volatile int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MAX;
	int32_t t87 = 232887134;

	t87 = ((x349==x350)<=(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -268;
	volatile int32_t t88 = -43;

	t88 = ((x353==x354)<=(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	int32_t x358 = -1752;
	static volatile int32_t x359 = 0;
	int16_t x360 = INT16_MAX;

	t89 = ((x357==x358)<=(x359|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 0U;
	volatile int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MIN;

	t90 = ((x361==x362)<=(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 473045574U;
	int32_t x366 = 251668330;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 15814109U;
	int32_t t91 = 1157;

	t91 = ((x365==x366)<=(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	int64_t x372 = -1LL;
	volatile int32_t t92 = -32907199;

	t92 = ((x369==x370)<=(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	int32_t t93 = 77444604;

	t93 = ((x373==x374)<=(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	static int16_t x380 = 58;
	int32_t t94 = -60;

	t94 = ((x377==x378)<=(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -3065812256689762711LL;
	int64_t x382 = INT64_MIN;
	int64_t x383 = 441462LL;
	int8_t x384 = INT8_MIN;
	static int32_t t95 = -4110;

	t95 = ((x381==x382)<=(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MAX;
	int32_t t96 = -48071221;

	t96 = ((x385==x386)<=(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x390 = -1LL;
	volatile uint16_t x391 = 55U;
	int32_t t97 = 36;

	t97 = ((x389==x390)<=(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	volatile int64_t x394 = INT64_MAX;
	static int32_t x395 = INT32_MIN;
	static int8_t x396 = INT8_MAX;
	int32_t t98 = 1298;

	t98 = ((x393==x394)<=(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = -55;
	int64_t x399 = INT64_MIN;
	uint64_t x400 = 342478528192LLU;
	int32_t t99 = 5;

	t99 = ((x397==x398)<=(x399|x400));

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

