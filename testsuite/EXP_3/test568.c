#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x18 = 13;
volatile int32_t x19 = 5420;
int32_t x25 = -181;
int64_t x32 = INT64_MIN;
uint16_t x34 = 3356U;
uint8_t x35 = UINT8_MAX;
volatile int32_t t8 = -2177;
static int64_t x40 = INT64_MIN;
volatile int32_t t10 = -346442;
uint16_t x48 = 1063U;
int16_t x50 = -8731;
int32_t t13 = 448813463;
int32_t x57 = INT32_MAX;
int16_t x61 = INT16_MAX;
uint16_t x66 = 151U;
volatile int8_t x68 = INT8_MIN;
int8_t x69 = INT8_MIN;
volatile int32_t t18 = 1902;
int64_t x87 = INT64_MAX;
int32_t x96 = INT32_MIN;
uint32_t x98 = 9U;
static int32_t t24 = -115;
int64_t x105 = INT64_MIN;
volatile int32_t t27 = -25308237;
static int64_t x120 = -1LL;
int64_t x121 = INT64_MAX;
int32_t t29 = 1240;
int8_t x128 = INT8_MIN;
static int8_t x129 = INT8_MAX;
static volatile int64_t x133 = INT64_MAX;
static uint16_t x140 = 2U;
uint64_t x148 = 32710LLU;
static int16_t x152 = INT16_MIN;
int32_t x156 = 1488;
int32_t t37 = -23036506;
static int32_t x158 = INT32_MAX;
int64_t x160 = INT64_MAX;
uint8_t x168 = 27U;
volatile int16_t x175 = 2717;
int8_t x178 = INT8_MIN;
uint32_t x192 = 4530U;
volatile uint64_t x198 = UINT64_MAX;
volatile int32_t t46 = -172498440;
int8_t x201 = INT8_MAX;
static int32_t t47 = 829397;
volatile int16_t x207 = -1;
static int32_t t49 = -485509;
int32_t t50 = 4399;
int8_t x218 = 4;
volatile int32_t t51 = -776;
int8_t x222 = -1;
volatile int32_t x225 = 5;
int8_t x226 = INT8_MAX;
int16_t x227 = INT16_MAX;
int32_t t53 = 154;
uint32_t x233 = UINT32_MAX;
int64_t x235 = -1LL;
int8_t x245 = -1;
volatile int16_t x250 = INT16_MIN;
int64_t x251 = -1LL;
volatile int32_t t58 = -9712883;
int64_t x254 = 26906252883017LL;
int16_t x256 = -2;
static volatile int16_t x261 = 58;
int32_t t60 = -167994228;
volatile int32_t t61 = 7;
static volatile int32_t t62 = 20087;
int16_t x273 = INT16_MAX;
int16_t x274 = INT16_MAX;
volatile int32_t t63 = 911;
int16_t x278 = INT16_MIN;
volatile int16_t x279 = INT16_MIN;
int32_t t64 = 3305;
volatile int16_t x289 = INT16_MIN;
static int16_t x292 = -1;
volatile int32_t t67 = -252448736;
int32_t t68 = -100;
int16_t x297 = -1;
volatile int8_t x299 = 22;
static volatile int32_t t69 = -20062;
static int16_t x301 = -10542;
static int32_t x315 = INT32_MIN;
static int16_t x324 = INT16_MAX;
uint32_t x326 = UINT32_MAX;
int8_t x332 = -20;
int32_t t76 = 195;
static int16_t x337 = INT16_MIN;
static uint64_t x340 = 47101333090LLU;
int32_t t77 = -227064837;
volatile int16_t x343 = INT16_MIN;
uint8_t x361 = UINT8_MAX;
static int8_t x364 = INT8_MIN;
volatile int32_t t83 = -5975619;
int32_t x369 = -1;
uint64_t x372 = 13830LLU;
uint16_t x373 = UINT16_MAX;
static volatile int32_t x382 = INT32_MIN;
static uint8_t x383 = 60U;
int32_t t87 = -699338;
int32_t x385 = INT32_MIN;
int64_t x386 = INT64_MAX;
int64_t x388 = INT64_MAX;
int16_t x391 = INT16_MIN;
int8_t x394 = INT8_MIN;
static volatile int8_t x397 = 21;
volatile int16_t x401 = INT16_MIN;
uint32_t x402 = UINT32_MAX;
uint8_t x403 = 13U;
uint16_t x408 = 3U;
int32_t t93 = -201920;
volatile int32_t t94 = -4656;
int32_t x414 = 3631701;
uint64_t x415 = 203984LLU;
int32_t x432 = -7966;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int64_t x2 = 65278095322683826LL;
	int16_t x3 = -449;
	uint8_t x4 = 38U;
	volatile int32_t t0 = -246225929;

	t0 = ((x1%x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint32_t x6 = UINT32_MAX;
	volatile int16_t x7 = INT16_MIN;
	volatile int32_t x8 = -1;
	int32_t t1 = -798;

	t1 = ((x5%x6)<(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int8_t x10 = -1;
	uint32_t x11 = UINT32_MAX;
	uint64_t x12 = 19268557486760LLU;
	int32_t t2 = 402557376;

	t2 = ((x9%x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int8_t x14 = 1;
	uint8_t x15 = 87U;
	static uint16_t x16 = 3063U;
	static int32_t t3 = -14;

	t3 = ((x13%x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -2098890341LL;
	int64_t x20 = 33LL;
	static volatile int32_t t4 = -114;

	t4 = ((x17%x18)<(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 20U;
	volatile int8_t x22 = INT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 3026;

	t5 = ((x21%x22)<(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static uint32_t x27 = 5849370U;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = -4;

	t6 = ((x25%x26)<(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 13U;
	uint16_t x30 = UINT16_MAX;
	static volatile uint8_t x31 = 1U;
	int32_t t7 = 4595;

	t7 = ((x29%x30)<(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int64_t x36 = -1052239420516648LL;

	t8 = ((x33%x34)<(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 149U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -3;
	volatile int32_t t9 = -42363282;

	t9 = ((x37%x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	uint64_t x42 = 57583LLU;
	int32_t x43 = INT32_MAX;
	uint8_t x44 = 6U;

	t10 = ((x41%x42)<(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	int8_t x46 = 12;
	volatile int16_t x47 = 129;
	int32_t t11 = 468640236;

	t11 = ((x45%x46)<(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 291;
	int64_t x51 = -5112429289144028LL;
	volatile int16_t x52 = INT16_MAX;
	int32_t t12 = 445;

	t12 = ((x49%x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 1854U;
	static int16_t x54 = INT16_MIN;
	volatile uint64_t x55 = 190301571LLU;
	volatile uint8_t x56 = 75U;

	t13 = ((x53%x54)<(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = 3;
	int64_t x59 = INT64_MAX;
	volatile int8_t x60 = 1;
	int32_t t14 = -244;

	t14 = ((x57%x58)<(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -503852373290LL;
	static volatile int64_t x64 = 1LL;
	int32_t t15 = 497233;

	t15 = ((x61%x62)<(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile int64_t x67 = INT64_MIN;
	volatile int32_t t16 = -126;

	t16 = ((x65%x66)<(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 554298LLU;
	uint8_t x71 = 105U;
	uint32_t x72 = 13U;
	int32_t t17 = -2699;

	t17 = ((x69%x70)<(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -812;
	static int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MAX;

	t18 = ((x73%x74)<(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = -489066;
	static uint64_t x82 = UINT64_MAX;
	uint16_t x83 = UINT16_MAX;
	uint32_t x84 = UINT32_MAX;
	static volatile int32_t t19 = 5852748;

	t19 = ((x81%x82)<(x83/x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	uint32_t x86 = 746833531U;
	uint8_t x88 = 123U;
	int32_t t20 = -2282;

	t20 = ((x85%x86)<(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = -30761756646LL;
	int16_t x90 = -1;
	uint16_t x91 = 21U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t21 = -2;

	t21 = ((x89%x90)<(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = -1;
	int16_t x95 = INT16_MIN;
	volatile int32_t t22 = -13942076;

	t22 = ((x93%x94)<(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x97 = 2LLU;
	uint8_t x99 = 18U;
	static uint64_t x100 = 1461359982357734LLU;
	volatile int32_t t23 = -13464;

	t23 = ((x97%x98)<(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = 209171004153453LLU;

	t24 = ((x101%x102)<(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 711U;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t25 = 746752014;

	t25 = ((x105%x106)<(x107/x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	int64_t x110 = -1883154LL;
	static int64_t x111 = -15339989581683669LL;
	int16_t x112 = INT16_MIN;
	int32_t t26 = 50604182;

	t26 = ((x109%x110)<(x111/x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 634U;
	static int8_t x114 = -1;
	static int8_t x115 = 0;
	int16_t x116 = 1803;

	t27 = ((x113%x114)<(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = INT8_MIN;
	uint16_t x118 = 23524U;
	int8_t x119 = INT8_MIN;
	volatile int32_t t28 = 66289;

	t28 = ((x117%x118)<(x119/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x122 = INT64_MIN;
	volatile int64_t x123 = INT64_MIN;
	volatile int16_t x124 = INT16_MAX;

	t29 = ((x121%x122)<(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = -1LL;
	int64_t x126 = INT64_MIN;
	uint8_t x127 = 11U;
	volatile int32_t t30 = -101061;

	t30 = ((x125%x126)<(x127/x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MAX;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t31 = 21022241;

	t31 = ((x129%x130)<(x131/x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x134 = UINT8_MAX;
	int32_t x135 = 132824859;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 58615;

	t32 = ((x133%x134)<(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MIN;
	uint32_t x138 = UINT32_MAX;
	static int32_t x139 = INT32_MIN;
	static int32_t t33 = 30419780;

	t33 = ((x137%x138)<(x139/x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x141 = -1;
	static volatile uint64_t x142 = UINT64_MAX;
	static int32_t x143 = -41;
	int16_t x144 = INT16_MIN;
	static int32_t t34 = 13729969;

	t34 = ((x141%x142)<(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	volatile int64_t x146 = INT64_MAX;
	static uint64_t x147 = 2074120233332391783LLU;
	static int32_t t35 = 132048049;

	t35 = ((x145%x146)<(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	int8_t x151 = 55;
	int32_t t36 = -24;

	t36 = ((x149%x150)<(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = -3748946030737296LL;
	static int8_t x155 = INT8_MIN;

	t37 = ((x153%x154)<(x155/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x159 = 3;
	volatile int32_t t38 = -210;

	t38 = ((x157%x158)<(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 4740213LLU;
	uint16_t x164 = UINT16_MAX;
	static int32_t t39 = -1;

	t39 = ((x161%x162)<(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	uint32_t x166 = 6940U;
	volatile int64_t x167 = -23LL;
	static int32_t t40 = 1;

	t40 = ((x165%x166)<(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	static int8_t x174 = -6;
	int32_t x176 = INT32_MIN;
	int32_t t41 = 3620;

	t41 = ((x173%x174)<(x175/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 10819U;
	int64_t x179 = -51545630LL;
	int8_t x180 = 7;
	volatile int32_t t42 = 6653;

	t42 = ((x177%x178)<(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -1;
	int8_t x182 = INT8_MIN;
	uint64_t x183 = UINT64_MAX;
	static uint64_t x184 = 62LLU;
	int32_t t43 = -2222;

	t43 = ((x181%x182)<(x183/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	volatile int64_t x186 = 115626498LL;
	uint16_t x187 = 58U;
	uint16_t x188 = 100U;
	volatile int32_t t44 = 902;

	t44 = ((x185%x186)<(x187/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = UINT32_MAX;
	int8_t x190 = 16;
	static int8_t x191 = INT8_MAX;
	int32_t t45 = 14;

	t45 = ((x189%x190)<(x191/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = -24;
	volatile int32_t x199 = -165;
	int32_t x200 = -1;

	t46 = ((x197%x198)<(x199/x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = 13LL;
	static uint8_t x203 = 99U;
	static volatile uint8_t x204 = 3U;

	t47 = ((x201%x202)<(x203/x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int64_t x208 = INT64_MAX;
	int32_t t48 = -334990152;

	t48 = ((x205%x206)<(x207/x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 73;
	int16_t x210 = INT16_MIN;
	static volatile uint8_t x211 = 4U;
	int32_t x212 = INT32_MIN;

	t49 = ((x209%x210)<(x211/x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = 34LL;
	uint16_t x214 = 2284U;
	uint16_t x215 = 13508U;
	static uint16_t x216 = 7814U;

	t50 = ((x213%x214)<(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x219 = 27908367291177409LLU;
	static int64_t x220 = -1LL;

	t51 = ((x217%x218)<(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 56U;
	int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = 0;

	t52 = ((x221%x222)<(x223/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x228 = -1;

	t53 = ((x225%x226)<(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = 1867415;
	static int32_t x230 = 3883582;
	int8_t x231 = INT8_MAX;
	int16_t x232 = -88;
	volatile int32_t t54 = -497031777;

	t54 = ((x229%x230)<(x231/x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = 1;

	t55 = ((x233%x234)<(x235/x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 149343440U;
	int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	int8_t x244 = -1;
	int32_t t56 = -13303970;

	t56 = ((x241%x242)<(x243/x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x246 = 510178301687282386LLU;
	static int16_t x247 = INT16_MAX;
	int8_t x248 = INT8_MAX;
	volatile int32_t t57 = -180475755;

	t57 = ((x245%x246)<(x247/x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 61319734704LLU;
	int16_t x252 = -3;

	t58 = ((x249%x250)<(x251/x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MAX;
	static int16_t x255 = INT16_MIN;
	volatile int32_t t59 = -11071931;

	t59 = ((x253%x254)<(x255/x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x262 = -746418;
	int64_t x263 = 1367053833LL;
	static int64_t x264 = -1LL;

	t60 = ((x261%x262)<(x263/x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = UINT16_MAX;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = -1;
	int8_t x268 = INT8_MIN;

	t61 = ((x265%x266)<(x267/x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = INT64_MAX;
	int8_t x270 = INT8_MIN;
	static uint64_t x271 = 1355510LLU;
	int16_t x272 = 1354;

	t62 = ((x269%x270)<(x271/x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x275 = -1;
	int64_t x276 = INT64_MAX;

	t63 = ((x273%x274)<(x275/x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x277 = UINT8_MAX;
	int8_t x280 = -63;

	t64 = ((x277%x278)<(x279/x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MIN;
	volatile int8_t x283 = -23;
	static int16_t x284 = 62;
	volatile int32_t t65 = 7073233;

	t65 = ((x281%x282)<(x283/x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 0;
	int32_t x286 = INT32_MAX;
	int64_t x287 = -8372LL;
	uint16_t x288 = UINT16_MAX;
	int32_t t66 = 2748;

	t66 = ((x285%x286)<(x287/x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x290 = INT16_MIN;
	static volatile uint16_t x291 = 111U;

	t67 = ((x289%x290)<(x291/x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MAX;

	t68 = ((x293%x294)<(x295/x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x298 = -1LL;
	int32_t x300 = -1;

	t69 = ((x297%x298)<(x299/x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MIN;
	static int32_t t70 = 111068;

	t70 = ((x301%x302)<(x303/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 2U;
	uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = -11354743;
	uint8_t x308 = 18U;
	volatile int32_t t71 = 30614362;

	t71 = ((x305%x306)<(x307/x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x309 = 124LLU;
	static volatile int64_t x310 = 15210509LL;
	volatile int16_t x311 = INT16_MIN;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t72 = -4420728;

	t72 = ((x309%x310)<(x311/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x313 = 61U;
	int16_t x314 = 4;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t73 = -306814;

	t73 = ((x313%x314)<(x315/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x321 = INT64_MIN;
	static volatile int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MAX;
	int32_t t74 = 100580852;

	t74 = ((x321%x322)<(x323/x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x325 = UINT16_MAX;
	uint16_t x327 = 16252U;
	uint8_t x328 = 6U;
	int32_t t75 = 549668;

	t75 = ((x325%x326)<(x327/x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	int32_t x331 = INT32_MIN;

	t76 = ((x329%x330)<(x331/x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x338 = INT16_MIN;
	uint16_t x339 = UINT16_MAX;

	t77 = ((x337%x338)<(x339/x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x341 = 64158570U;
	static volatile int8_t x342 = INT8_MIN;
	uint32_t x344 = 4U;
	int32_t t78 = -389663668;

	t78 = ((x341%x342)<(x343/x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = 5;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;
	static int32_t t79 = 300;

	t79 = ((x345%x346)<(x347/x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x349 = 1115071676326391339LLU;
	int8_t x350 = INT8_MIN;
	volatile int32_t x351 = 10278;
	int8_t x352 = -2;
	volatile int32_t t80 = 645;

	t80 = ((x349%x350)<(x351/x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = 3;
	int64_t x354 = -25394LL;
	int8_t x355 = 41;
	uint8_t x356 = 28U;
	static int32_t t81 = -448010;

	t81 = ((x353%x354)<(x355/x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = 3U;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 1726007282410LLU;
	int32_t t82 = -10627;

	t82 = ((x357%x358)<(x359/x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x362 = INT64_MAX;
	int64_t x363 = -1LL;

	t83 = ((x361%x362)<(x363/x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	int32_t t84 = 1247;

	t84 = ((x369%x370)<(x371/x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x374 = INT32_MAX;
	static int32_t x375 = -1;
	volatile int32_t x376 = -114015700;
	volatile int32_t t85 = 179759566;

	t85 = ((x373%x374)<(x375/x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x377 = UINT64_MAX;
	uint64_t x378 = UINT64_MAX;
	uint16_t x379 = UINT16_MAX;
	uint32_t x380 = 602U;
	int32_t t86 = -1814;

	t86 = ((x377%x378)<(x379/x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MIN;
	int8_t x384 = INT8_MAX;

	t87 = ((x381%x382)<(x383/x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x387 = INT64_MIN;
	static int32_t t88 = -62;

	t88 = ((x385%x386)<(x387/x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = 5;
	volatile int32_t x390 = INT32_MIN;
	int16_t x392 = 6021;
	static volatile int32_t t89 = -743564352;

	t89 = ((x389%x390)<(x391/x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x393 = INT64_MIN;
	static int8_t x395 = 12;
	int64_t x396 = -14LL;
	int32_t t90 = 5;

	t90 = ((x393%x394)<(x395/x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x398 = 63U;
	int16_t x399 = 2;
	static int32_t x400 = -1;
	int32_t t91 = 166983618;

	t91 = ((x397%x398)<(x399/x400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x404 = 1U;
	int32_t t92 = -1;

	t92 = ((x401%x402)<(x403/x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 35U;
	int32_t x406 = -1;
	int16_t x407 = INT16_MIN;

	t93 = ((x405%x406)<(x407/x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x409 = 1U;
	static int64_t x410 = -1LL;
	static int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MAX;

	t94 = ((x409%x410)<(x411/x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MIN;
	int32_t x416 = -220595419;
	volatile int32_t t95 = 213983;

	t95 = ((x413%x414)<(x415/x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x421 = 1290522508326325LLU;
	uint64_t x422 = 49LLU;
	static int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x421%x422)<(x423/x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = 1;
	int8_t x426 = INT8_MIN;
	static volatile int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	static int32_t t97 = -67584;

	t97 = ((x425%x426)<(x427/x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MIN;
	static uint64_t x430 = 3582207983617866LLU;
	static int8_t x431 = INT8_MIN;
	int32_t t98 = -80;

	t98 = ((x429%x430)<(x431/x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x433 = INT64_MAX;
	uint32_t x434 = 118125246U;
	int16_t x435 = -1218;
	static int32_t x436 = 5347;
	static int32_t t99 = -12987;

	t99 = ((x433%x434)<(x435/x436));

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

