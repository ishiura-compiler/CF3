#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -702128857582LL;
static volatile int64_t t1 = 11987256304760977LL;
volatile int32_t x11 = 886;
volatile int8_t x15 = INT8_MAX;
int8_t x16 = INT8_MIN;
int16_t x20 = INT16_MAX;
int16_t x24 = -1;
uint64_t x28 = UINT64_MAX;
int64_t x31 = INT64_MIN;
int8_t x33 = 31;
int16_t x41 = -2;
int8_t x56 = 2;
static int64_t x57 = INT64_MIN;
int64_t x60 = INT64_MIN;
int32_t x62 = -1;
int32_t x65 = 227;
int16_t x69 = 35;
uint64_t t18 = 34810459496654918LLU;
volatile int32_t x79 = 6120;
int8_t x80 = INT8_MIN;
volatile int64_t t20 = 3LL;
static volatile int64_t x89 = -177410129376LL;
static uint8_t x93 = UINT8_MAX;
volatile int64_t t23 = -28LL;
int8_t x109 = INT8_MAX;
volatile int64_t x118 = 312525234677522LL;
int64_t x120 = INT64_MIN;
volatile int32_t x133 = 85634380;
int32_t t31 = -246969;
static uint16_t x137 = 273U;
static volatile int64_t t33 = 10431831081556297LL;
int8_t x145 = 1;
volatile uint32_t x148 = 263738233U;
uint8_t x149 = UINT8_MAX;
static int32_t x156 = INT32_MIN;
int8_t x166 = -1;
static int64_t t39 = 714892227543989110LL;
int8_t x173 = INT8_MIN;
int16_t x175 = INT16_MIN;
int32_t x190 = -1;
int8_t x191 = INT8_MAX;
int16_t x195 = -39;
static int64_t t45 = -4135704802140376LL;
int64_t t46 = -3366381063344173LL;
uint16_t x206 = 0U;
uint8_t x210 = 15U;
int32_t x211 = INT32_MAX;
volatile int16_t x212 = -2383;
int16_t x217 = INT16_MIN;
int16_t x219 = INT16_MIN;
static int8_t x224 = INT8_MIN;
int32_t x225 = INT32_MAX;
static uint64_t x228 = 236903230LLU;
uint8_t x229 = 1U;
volatile uint8_t x234 = 1U;
uint8_t x236 = 1U;
uint64_t x248 = UINT64_MAX;
static volatile int64_t x252 = INT64_MIN;
uint16_t x269 = UINT16_MAX;
static volatile uint8_t x272 = 12U;
int64_t x276 = -985165078317968LL;
static int8_t x281 = INT8_MIN;
int8_t x282 = -1;
uint64_t t66 = 190389LLU;
uint8_t x292 = 34U;
int64_t t69 = -1LL;
uint64_t t72 = 72478404046496LLU;
int64_t x314 = INT64_MIN;
int64_t t74 = -389LL;
uint32_t x317 = 10601U;
static int8_t x319 = -18;
static int16_t x331 = 916;
volatile uint32_t x333 = 1051304539U;
int64_t x335 = 4073744LL;
static volatile uint32_t t80 = 68798836U;
static volatile int32_t t81 = -86489845;
int8_t x347 = -4;
uint16_t x348 = UINT16_MAX;
uint8_t x358 = UINT8_MAX;
uint16_t x364 = 18U;
volatile int8_t x366 = INT8_MAX;
volatile uint16_t x371 = UINT16_MAX;
int16_t x382 = INT16_MIN;
int8_t x387 = -1;
int64_t x392 = INT64_MAX;
uint64_t t93 = 359LLU;
int32_t x393 = INT32_MIN;
uint32_t x399 = 51479822U;
static int8_t x405 = INT8_MIN;
int64_t x408 = INT64_MAX;
int8_t x415 = 59;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = 4;
	volatile int16_t x3 = INT16_MIN;
	static int16_t x4 = 15;

	t0 = ((x1^x2)^(x3/x4));

	if (t0 != 9223372036854773628LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint16_t x6 = 1U;
	int8_t x7 = 61;
	int16_t x8 = INT16_MIN;

	t1 = ((x5^x6)^(x7/x8));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -9;

	t2 = ((x9^x10)^(x11/x12));

	if (t2 != 32646) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	static uint16_t x14 = 12U;
	volatile int32_t t3 = -87;

	t3 = ((x13^x14)^(x15/x16));

	if (t3 != -32756) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = 25;
	int16_t x19 = INT16_MAX;
	volatile int64_t t4 = -7832211245LL;

	t4 = ((x17^x18)^(x19/x20));

	if (t4 != -25LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint64_t x22 = 7897580640LLU;
	uint8_t x23 = UINT8_MAX;
	uint64_t t5 = 333919LLU;

	t5 = ((x21^x22)^(x23/x24));

	if (t5 != 7897580702LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	uint32_t x26 = 8116U;
	int8_t x27 = INT8_MIN;
	static volatile uint64_t t6 = 7293278460486LLU;

	t6 = ((x25^x26)^(x27/x28));

	if (t6 != 4294959179LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 384471U;
	int8_t x30 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = 59297555LL;

	t7 = ((x29^x30)^(x31/x32));

	if (t7 != 8589550167LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = 3166;
	int32_t x36 = INT32_MIN;
	static volatile int64_t t8 = 25LL;

	t8 = ((x33^x34)^(x35/x36));

	if (t8 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 2070LL;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 0U;
	int32_t x40 = -1;
	volatile int64_t t9 = -50LL;

	t9 = ((x37^x38)^(x39/x40));

	if (t9 != -2154LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = INT8_MIN;
	volatile int32_t x43 = INT32_MIN;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 1;

	t10 = ((x41^x42)^(x43/x44));

	if (t10 != -32642) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x45 = INT64_MIN;
	uint8_t x46 = 15U;
	static uint64_t x47 = 592899222255LLU;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 807239LLU;

	t11 = ((x45^x46)^(x47/x48));

	if (t11 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = -442;
	int32_t x50 = -1;
	int16_t x51 = -1700;
	static int32_t x52 = INT32_MAX;
	int32_t t12 = -15091292;

	t12 = ((x49^x50)^(x51/x52));

	if (t12 != 441) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static int64_t x54 = INT64_MIN;
	static uint32_t x55 = 5U;
	volatile int64_t t13 = 374053340842783LL;

	t13 = ((x53^x54)^(x55/x56));

	if (t13 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x58 = -1LL;
	volatile int64_t x59 = 946738488579306LL;
	int64_t t14 = INT64_MAX;

	t14 = ((x57^x58)^(x59/x60));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -779811LL;
	uint32_t x63 = UINT32_MAX;
	static int32_t x64 = -1;
	int64_t t15 = 3LL;

	t15 = ((x61^x62)^(x63/x64));

	if (t15 != 779811LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = INT32_MIN;
	volatile int32_t x67 = INT32_MIN;
	int16_t x68 = 6;
	static int32_t t16 = 137;

	t16 = ((x65^x66)^(x67/x68));

	if (t16 != 1789569608) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 200033593810148159LL;
	volatile int32_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile int64_t t17 = -608539812LL;

	t17 = ((x69^x70)^(x71/x72));

	if (t17 != 200033593810148124LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	uint64_t x74 = 1485935410473198518LLU;
	uint64_t x75 = UINT64_MAX;
	volatile uint8_t x76 = 73U;

	t18 = ((x73^x74)^(x75/x76));

	if (t18 != 1666009166140276679LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	uint16_t x78 = 5419U;
	static int32_t t19 = -1;

	t19 = ((x77^x78)^(x79/x80));

	if (t19 != 5381) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 33U;
	static int32_t x82 = -1;
	volatile int32_t x83 = INT32_MIN;
	int64_t x84 = -4095428823917878096LL;

	t20 = ((x81^x82)^(x83/x84));

	if (t20 != -34LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static volatile int64_t x86 = 14LL;
	uint16_t x87 = UINT16_MAX;
	uint16_t x88 = 52U;
	volatile int64_t t21 = 11046701LL;

	t21 = ((x85^x86)^(x87/x88));

	if (t21 != 64285LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x90 = -9;
	static volatile int8_t x91 = -5;
	int32_t x92 = -118056;
	int64_t t22 = 30167093LL;

	t22 = ((x89^x90)^(x91/x92));

	if (t22 != 177410129367LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	int8_t x95 = 28;
	uint16_t x96 = 278U;

	t23 = ((x93^x94)^(x95/x96));

	if (t23 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 73U;
	static int16_t x98 = 44;
	int16_t x99 = 3;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -15804266;

	t24 = ((x97^x98)^(x99/x100));

	if (t24 != 101) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	uint32_t x106 = 1U;
	uint16_t x107 = 49U;
	uint8_t x108 = 1U;
	uint32_t t25 = 1065535305U;

	t25 = ((x105^x106)^(x107/x108));

	if (t25 != 32719U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = UINT64_MAX;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MAX;
	uint64_t t26 = 98355283810055840LLU;

	t26 = ((x109^x110)^(x111/x112));

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	uint64_t x114 = 1834960537725508754LLU;
	static volatile uint16_t x115 = 28U;
	int8_t x116 = INT8_MAX;
	uint64_t t27 = 52726311LLU;

	t27 = ((x113^x114)^(x115/x116));

	if (t27 != 7388411499129267053LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 5777LLU;
	int32_t x119 = -6304;
	uint64_t t28 = 34879970LLU;

	t28 = ((x117^x118)^(x119/x120));

	if (t28 != 312525234680195LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -263;
	static volatile int64_t x126 = -3821999543991429LL;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = -1;
	static int64_t t29 = -518373203247643550LL;

	t29 = ((x125^x126)^(x127/x128));

	if (t29 != 3821999543991554LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = 0;
	int16_t x131 = -1;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t30 = 2214059;

	t30 = ((x129^x130)^(x131/x132));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x134 = 1;
	static int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;

	t31 = ((x133^x134)^(x135/x136));

	if (t31 != 85634381) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = 7459217LL;
	int64_t t32 = -3145341952000LL;

	t32 = ((x137^x138)^(x139/x140));

	if (t32 != -367LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = INT64_MIN;
	volatile int32_t x142 = 2137;
	static int32_t x143 = -246968272;
	int32_t x144 = INT32_MIN;

	t33 = ((x141^x142)^(x143/x144));

	if (t33 != -9223372036854773671LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 43548350LLU;
	uint64_t t34 = 45639LLU;

	t34 = ((x145^x146)^(x147/x148));

	if (t34 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x150 = -1LL;
	volatile int32_t x151 = -1;
	int8_t x152 = INT8_MIN;
	static int64_t t35 = -955871926494LL;

	t35 = ((x149^x150)^(x151/x152));

	if (t35 != -256LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = INT64_MAX;
	volatile uint8_t x154 = 1U;
	uint16_t x155 = 11U;
	int64_t t36 = -8186657786992LL;

	t36 = ((x153^x154)^(x155/x156));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int8_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	static int64_t x160 = 32562LL;
	volatile int64_t t37 = 417012LL;

	t37 = ((x157^x158)^(x159/x160));

	if (t37 != -97891LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -7593319618245LL;
	int16_t x162 = 7746;
	int16_t x163 = 24;
	int32_t x164 = -1;
	int64_t t38 = 15385499485342860LL;

	t38 = ((x161^x162)^(x163/x164));

	if (t38 != 7593319614609LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = 84708431727205821LL;
	int32_t x167 = 206;
	int16_t x168 = -22;

	t39 = ((x165^x166)^(x167/x168));

	if (t39 != 84708431727205813LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x174 = 1766659350LLU;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t40 = 3952610523284503655LLU;

	t40 = ((x173^x174)^(x175/x176));

	if (t40 != 18446744071942892182LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x177 = UINT64_MAX;
	int8_t x178 = 6;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t41 = 102590487038093914LLU;

	t41 = ((x177^x178)^(x179/x180));

	if (t41 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 14U;
	int32_t x183 = INT32_MIN;
	uint64_t x184 = 613612165LLU;
	uint64_t t42 = 124048439259231919LLU;

	t42 = ((x181^x182)^(x183/x184));

	if (t42 != 30062605021LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 12;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = 5;
	volatile uint32_t t43 = 23U;

	t43 = ((x185^x186)^(x187/x188));

	if (t43 != 858993472U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x189 = 7423275563LLU;
	volatile int64_t x192 = -1LL;
	uint64_t t44 = 5852352036177785411LLU;

	t44 = ((x189^x190)^(x191/x192));

	if (t44 != 7423275605LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MIN;
	volatile uint16_t x194 = 3U;
	int16_t x196 = INT16_MIN;

	t45 = ((x193^x194)^(x195/x196));

	if (t45 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	static int32_t x198 = -5897;
	static volatile uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 359U;

	t46 = ((x197^x198)^(x199/x200));

	if (t46 != 5896LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = 5;
	int32_t x202 = 65299237;
	int16_t x203 = INT16_MAX;
	int16_t x204 = 16;
	int32_t t47 = -3;

	t47 = ((x201^x202)^(x203/x204));

	if (t47 != 65299679) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x205 = UINT32_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;
	static volatile uint32_t t48 = UINT32_MAX;

	t48 = ((x205^x206)^(x207/x208));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 55U;
	volatile int32_t t49 = 27527129;

	t49 = ((x209^x210)^(x211/x212));

	if (t49 != -901144) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = 30279074234039391LL;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = -1;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t50 = 395593440217942LL;

	t50 = ((x213^x214)^(x215/x216));

	if (t50 != -30279073433846689LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = 55137443747279786LL;
	volatile int64_t x220 = -1LL;
	static int64_t t51 = -495LL;

	t51 = ((x217^x218)^(x219/x220));

	if (t51 != -55137443747318870LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t t52 = 148404LL;

	t52 = ((x221^x222)^(x223/x224));

	if (t52 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = -1;
	int16_t x227 = 15535;
	volatile uint64_t t53 = 1717LLU;

	t53 = ((x225^x226)^(x227/x228));

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x230 = 20U;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = 59059199U;
	static uint32_t t54 = 1969155U;

	t54 = ((x229^x230)^(x231/x232));

	if (t54 != 49U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -1LL;
	int16_t x235 = INT16_MIN;
	volatile int64_t t55 = 1750946LL;

	t55 = ((x233^x234)^(x235/x236));

	if (t55 != 32766LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = 25351U;
	int32_t x238 = INT32_MIN;
	int64_t x239 = 3926527547690242002LL;
	int32_t x240 = 287966331;
	int64_t t56 = 519823513LL;

	t56 = ((x237^x238)^(x239/x240));

	if (t56 != -14281908708LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MAX;
	int8_t x243 = -1;
	int16_t x244 = INT16_MIN;
	volatile int32_t t57 = 366777721;

	t57 = ((x241^x242)^(x243/x244));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 57U;
	static volatile uint64_t t58 = 33LLU;

	t58 = ((x245^x246)^(x247/x248));

	if (t58 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MAX;
	uint8_t x250 = 3U;
	uint32_t x251 = 234U;
	static int64_t t59 = 29537LL;

	t59 = ((x249^x250)^(x251/x252));

	if (t59 != 32764LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 5U;
	uint8_t x254 = 26U;
	int64_t x255 = INT64_MAX;
	int32_t x256 = 1792;
	static volatile int64_t t60 = 3851825282504473LL;

	t60 = ((x253^x254)^(x255/x256));

	if (t60 != 5146971002709133LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = 207;
	int64_t x258 = -3162757LL;
	int16_t x259 = -14;
	volatile int64_t x260 = INT64_MIN;
	int64_t t61 = 5343526387LL;

	t61 = ((x257^x258)^(x259/x260));

	if (t61 != -3162700LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x265 = -17600440199LL;
	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;
	int64_t t62 = -6254228LL;

	t62 = ((x265^x266)^(x267/x268));

	if (t62 != 9223372017947993990LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MIN;
	static int32_t t63 = 3420;

	t63 = ((x269^x270)^(x271/x272));

	if (t63 != 178935081) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int64_t t64 = -20829741354382LL;

	t64 = ((x273^x274)^(x275/x276));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = 127U;
	int8_t x280 = -1;
	static uint32_t t65 = 466U;

	t65 = ((x277^x278)^(x279/x280));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x283 = 586LLU;
	int16_t x284 = INT16_MIN;

	t66 = ((x281^x282)^(x283/x284));

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int16_t x286 = 1540;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MIN;
	volatile uint32_t t67 = 21607U;

	t67 = ((x285^x286)^(x287/x288));

	if (t67 != 4294965754U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = 120;
	int64_t x290 = 1LL;
	volatile int64_t x291 = -1LL;
	volatile int64_t t68 = 10340LL;

	t68 = ((x289^x290)^(x291/x292));

	if (t68 != 121LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = 762842304U;
	int16_t x295 = 10611;
	int8_t x296 = INT8_MAX;

	t69 = ((x293^x294)^(x295/x296));

	if (t69 != -9223372036091933549LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MAX;
	int64_t x299 = -1181403650LL;
	int64_t x300 = -1LL;
	volatile int64_t t70 = -666022433360081LL;

	t70 = ((x297^x298)^(x299/x300));

	if (t70 != 9223372035673372034LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -671;
	static int8_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int16_t x304 = 520;
	int32_t t71 = 1;

	t71 = ((x301^x302)^(x303/x304));

	if (t71 != 4129134) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x305 = 2748U;
	static uint64_t x306 = UINT64_MAX;
	volatile int32_t x307 = INT32_MIN;
	uint32_t x308 = 67U;

	t72 = ((x305^x306)^(x307/x308));

	if (t72 != 18446744073677497945LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -1;
	uint8_t x310 = 84U;
	int8_t x311 = INT8_MIN;
	int32_t x312 = 621;
	static volatile int32_t t73 = 3;

	t73 = ((x309^x310)^(x311/x312));

	if (t73 != -85) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = UINT8_MAX;
	static uint16_t x315 = UINT16_MAX;
	static uint16_t x316 = 227U;

	t74 = ((x313^x314)^(x315/x316));

	if (t74 != -9223372036854775329LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x318 = 7;
	int8_t x320 = 17;
	static uint32_t t75 = 253278570U;

	t75 = ((x317^x318)^(x319/x320));

	if (t75 != 4294956689U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = UINT16_MAX;
	uint8_t x322 = 2U;
	int8_t x323 = INT8_MIN;
	volatile int32_t x324 = INT32_MIN;
	int32_t t76 = -346;

	t76 = ((x321^x322)^(x323/x324));

	if (t76 != 65533) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = 0U;
	uint64_t x328 = 233447756286452870LLU;
	uint64_t t77 = 9104678628LLU;

	t77 = ((x325^x326)^(x327/x328));

	if (t77 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int32_t x332 = -2;
	int32_t t78 = 5753;

	t78 = ((x329^x330)^(x331/x332));

	if (t78 != 329) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x334 = INT64_MAX;
	volatile uint16_t x336 = 14U;
	int64_t t79 = -50458268946725182LL;

	t79 = ((x333^x334)^(x335/x336));

	if (t79 != 9223372035803196673LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x337 = -55845;
	static int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	uint16_t x340 = 17U;

	t80 = ((x337^x338)^(x339/x340));

	if (t80 != 252695892U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 2093U;
	int32_t x344 = -897693;

	t81 = ((x341^x342)^(x343/x344));

	if (t81 != -32769) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = -1;
	static uint32_t x346 = UINT32_MAX;
	volatile uint32_t t82 = 59501U;

	t82 = ((x345^x346)^(x347/x348));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = INT64_MIN;
	static uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 0U;
	uint16_t x352 = 1U;
	volatile int64_t t83 = -4945396638756LL;

	t83 = ((x349^x350)^(x351/x352));

	if (t83 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x353 = 32297820U;
	int16_t x354 = 3;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t84 = 104178768877LL;

	t84 = ((x353^x354)^(x355/x356));

	if (t84 != 32297823LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = 2019333;
	volatile int8_t x359 = -15;
	int16_t x360 = -24;
	static int32_t t85 = -10;

	t85 = ((x357^x358)^(x359/x360));

	if (t85 != 2019578) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	volatile int16_t x363 = INT16_MIN;
	volatile uint64_t t86 = 227178LLU;

	t86 = ((x361^x362)^(x363/x364));

	if (t86 != 18446744073709549796LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 19;
	int32_t x367 = -1;
	static volatile uint16_t x368 = 7000U;
	volatile int32_t t87 = 1427104;

	t87 = ((x365^x366)^(x367/x368));

	if (t87 != 108) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	uint32_t x372 = 9988U;
	uint32_t t88 = 1105165483U;

	t88 = ((x369^x370)^(x371/x372));

	if (t88 != 2147483654U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -16158LL;
	volatile int16_t x374 = -115;
	int64_t x375 = -140494631362LL;
	volatile int64_t x376 = 200009531966778310LL;
	int64_t t89 = -35716383532325LL;

	t89 = ((x373^x374)^(x375/x376));

	if (t89 != 16239LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	static uint8_t x378 = UINT8_MAX;
	static volatile int16_t x379 = INT16_MAX;
	static volatile int8_t x380 = -1;
	int32_t t90 = -24340;

	t90 = ((x377^x378)^(x379/x380));

	if (t90 != -32639) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x381 = 29U;
	int32_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	volatile int32_t t91 = -218;

	t91 = ((x381^x382)^(x383/x384));

	if (t91 != -32739) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -5;
	int32_t x386 = INT32_MIN;
	static uint16_t x388 = 405U;
	volatile int32_t t92 = -61105;

	t92 = ((x385^x386)^(x387/x388));

	if (t92 != 2147483643) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 425735871085833LLU;
	volatile int16_t x390 = 195;
	int64_t x391 = INT64_MIN;

	t93 = ((x389^x390)^(x391/x392));

	if (t93 != 18446318337838465589LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x394 = 1U;
	uint64_t x395 = 3147609LLU;
	static volatile int16_t x396 = INT16_MIN;
	volatile uint64_t t94 = 4527886184669196472LLU;

	t94 = ((x393^x394)^(x395/x396));

	if (t94 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1LL;
	static int16_t x400 = -1;
	volatile int64_t t95 = 24925842552048364LL;

	t95 = ((x397^x398)^(x399/x400));

	if (t95 != -4294967296LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = 545U;
	static volatile int64_t x403 = -494548735292LL;
	uint16_t x404 = UINT16_MAX;
	int64_t t96 = -333758969599581LL;

	t96 = ((x401^x402)^(x403/x404));

	if (t96 != -4287408122LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x406 = -1;
	int64_t x407 = 979LL;
	static int64_t t97 = 66750446LL;

	t97 = ((x405^x406)^(x407/x408));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = INT8_MIN;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = -5172509;
	uint32_t t98 = 231003U;

	t98 = ((x409^x410)^(x411/x412));

	if (t98 != 2147483521U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = UINT32_MAX;
	uint64_t x414 = UINT64_MAX;
	int8_t x416 = INT8_MIN;
	uint64_t t99 = 26792092248LLU;

	t99 = ((x413^x414)^(x415/x416));

	if (t99 != 18446744069414584320LLU) { NG(); } else { ; }
	
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

