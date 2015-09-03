#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 6577311608LL;
static uint32_t x11 = 3646U;
int16_t x19 = -1;
static volatile int64_t t4 = 2333896LL;
uint32_t x29 = 29346U;
int16_t x32 = -79;
int64_t x33 = INT64_MAX;
static int32_t x34 = -1;
int8_t x35 = INT8_MAX;
static int32_t x38 = INT32_MIN;
int8_t x42 = INT8_MAX;
int64_t x56 = -1LL;
int32_t x58 = -28;
volatile int64_t t13 = -63854LL;
uint16_t x74 = 5U;
uint8_t x75 = 4U;
static int16_t x78 = INT16_MIN;
volatile uint8_t x86 = 24U;
uint64_t x96 = 208310242373734608LLU;
int64_t t23 = 8711LL;
volatile uint64_t t24 = 807345169881686502LLU;
volatile int32_t x121 = INT32_MAX;
volatile uint64_t x123 = 414LLU;
uint16_t x127 = UINT16_MAX;
static int32_t x135 = -1;
static int64_t x137 = INT64_MIN;
int16_t x138 = -1;
static volatile uint8_t x141 = 15U;
volatile int32_t x149 = -1;
static volatile int16_t x151 = 213;
int32_t x152 = -1;
static int32_t t34 = -28;
int32_t x156 = INT32_MIN;
volatile int16_t x161 = -1;
static int64_t x165 = -126LL;
static volatile int16_t x170 = -1;
int16_t x174 = 47;
volatile uint16_t x176 = 103U;
volatile int32_t t40 = -949;
int32_t x181 = INT32_MIN;
static int64_t x198 = INT64_MIN;
int32_t x199 = 18130;
static volatile int8_t x207 = INT8_MIN;
int64_t t46 = 8250430806LL;
static int16_t x212 = INT16_MIN;
int64_t t47 = 36LL;
int64_t x214 = INT64_MIN;
int8_t x220 = 1;
uint8_t x222 = 3U;
volatile uint64_t t52 = 14LLU;
uint64_t t54 = UINT64_MAX;
int64_t x247 = INT64_MIN;
int16_t x258 = -15932;
static uint32_t x259 = 12274U;
static int16_t x261 = -645;
static int32_t x265 = 1455;
int32_t x268 = -1;
static int64_t t61 = 15491091LL;
int8_t x284 = INT8_MAX;
int16_t x285 = INT16_MIN;
uint64_t x286 = UINT64_MAX;
int32_t x289 = -1;
int8_t x290 = -1;
int8_t x291 = -1;
int64_t x292 = -1LL;
volatile int32_t x295 = INT32_MIN;
int8_t x299 = INT8_MIN;
int16_t x301 = INT16_MIN;
volatile uint32_t x302 = 14U;
volatile int32_t x308 = -13183524;
uint64_t x315 = UINT64_MAX;
volatile int32_t x317 = 6366495;
volatile int16_t x320 = 123;
volatile uint64_t t74 = 24443460LLU;
uint8_t x328 = 2U;
volatile uint64_t t76 = 90235802015086665LLU;
uint64_t x340 = 32LLU;
int8_t x342 = -1;
int16_t x347 = INT16_MIN;
volatile uint16_t x349 = 447U;
volatile int32_t t81 = -174;
volatile int8_t x358 = 3;
int64_t t82 = INT64_MIN;
static uint64_t x362 = 93LLU;
volatile int64_t t84 = -109143151298308593LL;
volatile int64_t t85 = 79585336589352LL;
static int64_t x388 = 63LL;
uint64_t t89 = 47588LLU;
static uint64_t t90 = UINT64_MAX;
volatile int16_t x404 = INT16_MIN;
int32_t t92 = 1;
int64_t x415 = -1LL;
static int8_t x418 = INT8_MIN;
uint64_t x425 = 6228978308488122232LLU;
volatile uint32_t x428 = UINT32_MAX;
int16_t x431 = INT16_MAX;
static int64_t x432 = INT64_MIN;
volatile uint32_t x435 = UINT32_MAX;
volatile int64_t t99 = 30187693120LL;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = INT32_MIN;
	uint64_t x3 = 822867909536LLU;
	int8_t x4 = -1;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1/(x2+x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 193;
	static uint8_t x6 = 52U;
	static volatile int64_t x7 = 212312250956956LL;
	int16_t x8 = -7;

	t1 = ((x5/(x6+x7))|x8);

	if (t1 != -7LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint64_t x10 = 9LLU;
	uint64_t x12 = 989945486LLU;
	static uint64_t t2 = 504719LLU;

	t2 = ((x9/(x10+x11))|x12);

	if (t2 != 2523495072489102LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int8_t x18 = 0;
	static uint16_t x20 = 1004U;
	volatile int32_t t3 = 1;

	t3 = ((x17/(x18+x19))|x20);

	if (t3 != 1004) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = UINT8_MAX;
	int64_t x22 = -1LL;
	int16_t x23 = 59;
	int64_t x24 = INT64_MIN;

	t4 = ((x21/(x22+x23))|x24);

	if (t4 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = UINT8_MAX;
	int32_t x26 = 192;
	uint8_t x27 = 7U;
	int64_t x28 = INT64_MIN;
	int64_t t5 = -4374612LL;

	t5 = ((x25/(x26+x27))|x28);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x30 = -6528;
	int16_t x31 = 97;
	static volatile uint32_t t6 = 732050459U;

	t6 = ((x29/(x30+x31))|x32);

	if (t6 != 4294967217U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -7674317408LL;

	t7 = ((x33/(x34+x35))|x36);

	if (t7 != -9150170671482912508LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 178U;
	volatile uint16_t x39 = 27U;
	int16_t x40 = 1;
	static volatile int32_t t8 = -5947966;

	t8 = ((x37/(x38+x39))|x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x43 = 54U;
	static uint32_t x44 = 9588623U;
	volatile uint32_t t9 = 0U;

	t9 = ((x41/(x42+x43))|x44);

	if (t9 != 9588623U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	static int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	volatile int64_t t10 = -22285973471449076LL;

	t10 = ((x45/(x46+x47))|x48);

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 52U;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 78U;
	uint8_t x52 = 1U;
	int64_t t11 = 1590LL;

	t11 = ((x49/(x50+x51))|x52);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = UINT32_MAX;
	uint8_t x54 = 0U;
	int16_t x55 = INT16_MIN;
	int64_t t12 = -725719LL;

	t12 = ((x53/(x54+x55))|x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x57 = UINT16_MAX;
	uint16_t x59 = 3U;
	int64_t x60 = INT64_MAX;

	t13 = ((x57/(x58+x59))|x60);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -3;
	int8_t x62 = 3;
	volatile int16_t x63 = -97;
	int64_t x64 = 794655LL;
	volatile int64_t t14 = -16351353874922336LL;

	t14 = ((x61/(x62+x63))|x64);

	if (t14 != 794655LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 5196U;
	uint64_t x66 = 22867712LLU;
	int64_t x67 = INT64_MAX;
	uint32_t x68 = UINT32_MAX;
	uint64_t t15 = 120789894LLU;

	t15 = ((x65/(x66+x67))|x68);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 3U;
	int16_t x70 = -2;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = -1;
	int32_t t16 = -12;

	t16 = ((x69/(x70+x71))|x72);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 2U;
	static int16_t x76 = INT16_MAX;
	uint32_t t17 = 71826U;

	t17 = ((x73/(x74+x75))|x76);

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	uint8_t x79 = 2U;
	int64_t x80 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = ((x77/(x78+x79))|x80);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 83U;
	int64_t x82 = 319LL;
	int8_t x83 = INT8_MIN;
	volatile uint16_t x84 = 1U;
	int64_t t19 = 18077LL;

	t19 = ((x81/(x82+x83))|x84);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	static int32_t x87 = -287;
	int8_t x88 = -1;
	int32_t t20 = -32850113;

	t20 = ((x85/(x86+x87))|x88);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	int8_t x91 = -1;
	static int32_t x92 = INT32_MAX;
	int64_t t21 = 17908LL;

	t21 = ((x89/(x90+x91))|x92);

	if (t21 != 4611686020574871551LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	static int32_t x95 = 7;
	static uint64_t t22 = 1407305524536737LLU;

	t22 = ((x93/(x94+x95))|x96);

	if (t22 != 18439706580008564475LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = 1411U;
	int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MAX;

	t23 = ((x97/(x98+x99))|x100);

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = 986LL;
	int16_t x102 = 2942;
	uint64_t x103 = UINT64_MAX;
	static volatile int32_t x104 = INT32_MIN;

	t24 = ((x101/(x102+x103))|x104);

	if (t24 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 9760;
	static int16_t x106 = 95;
	int8_t x107 = -1;
	volatile int8_t x108 = INT8_MIN;
	int32_t t25 = 0;

	t25 = ((x105/(x106+x107))|x108);

	if (t25 != -25) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 5469680U;
	uint64_t x114 = 1916LLU;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = 7U;
	uint64_t t26 = 344591875LLU;

	t26 = ((x113/(x114+x115))|x116);

	if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 1926U;
	static int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = ((x117/(x118+x119))|x120);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = UINT8_MAX;
	int64_t x124 = -1LL;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x121/(x122+x123))|x124);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 57711098343910529LLU;
	volatile int16_t x126 = INT16_MIN;
	uint8_t x128 = 2U;
	volatile uint64_t t29 = 295391991060197973LLU;

	t29 = ((x125/(x126+x127))|x128);

	if (t29 != 1761256701678LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x133 = 368506U;
	uint8_t x134 = 6U;
	uint16_t x136 = UINT16_MAX;
	uint32_t t30 = 3U;

	t30 = ((x133/(x134+x135))|x136);

	if (t30 != 131071U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile int64_t t31 = 12208211527LL;

	t31 = ((x137/(x138+x139))|x140);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = INT32_MIN;
	int64_t x143 = -796793569LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

	t32 = ((x141/(x142+x143))|x144);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 0LLU;
	volatile int64_t x146 = -1LL;
	uint32_t x147 = 111741U;
	static int16_t x148 = 0;
	uint64_t t33 = 6187184068LLU;

	t33 = ((x145/(x146+x147))|x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = 1;

	t34 = ((x149/(x150+x151))|x152);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x153 = 114U;
	uint16_t x154 = UINT16_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile uint32_t t35 = 46U;

	t35 = ((x153/(x154+x155))|x156);

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 773765134;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = -1LL;
	int64_t x160 = INT64_MAX;
	int64_t t36 = INT64_MAX;

	t36 = ((x157/(x158+x159))|x160);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x162 = -38;
	static int8_t x163 = -1;
	uint32_t x164 = 3585085U;
	uint32_t t37 = 3844U;

	t37 = ((x161/(x162+x163))|x164);

	if (t37 != 3585085U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = -1;
	volatile int32_t x167 = INT32_MAX;
	uint32_t x168 = 7271824U;
	volatile int64_t t38 = 20222LL;

	t38 = ((x165/(x166+x167))|x168);

	if (t38 != 7271824LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t39 = 6878604;

	t39 = ((x169/(x170+x171))|x172);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -1;
	uint8_t x175 = UINT8_MAX;

	t40 = ((x173/(x174+x175))|x176);

	if (t40 != 103) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MAX;
	uint64_t t41 = 940896813490125454LLU;

	t41 = ((x177/(x178+x179))|x180);

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x182 = UINT8_MAX;
	volatile uint64_t x183 = 257LLU;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t42 = 3676578779572325LLU;

	t42 = ((x181/(x182+x183))|x184);

	if (t42 != 9259400833869545472LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = UINT64_MAX;
	static volatile int16_t x194 = INT16_MAX;
	int16_t x195 = -1;
	int8_t x196 = -1;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x193/(x194+x195))|x196);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = -80;
	volatile int16_t x200 = -1;
	int64_t t44 = 57680084915LL;

	t44 = ((x197/(x198+x199))|x200);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = 21873LL;
	volatile int32_t x202 = 1;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	static volatile int64_t t45 = -1595394924886249LL;

	t45 = ((x201/(x202+x203))|x204);

	if (t45 != -172LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = -1LL;
	static volatile int32_t x208 = 12216948;

	t46 = ((x205/(x206+x207))|x208);

	if (t46 != 71499008039354356LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = 403546746274091449LL;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;

	t47 = ((x209/(x210+x211))|x212);

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = 1;
	uint32_t x215 = 1U;
	uint64_t x216 = 149769527098737LLU;
	volatile uint64_t t48 = 1979LLU;

	t48 = ((x213/(x214+x215))|x216);

	if (t48 != 149769527098737LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = INT16_MIN;
	volatile int8_t x218 = -59;
	int16_t x219 = INT16_MAX;
	int32_t t49 = 59;

	t49 = ((x217/(x218+x219))|x220);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 26U;
	int16_t x223 = INT16_MIN;
	int32_t x224 = 1;
	int32_t t50 = -5956996;

	t50 = ((x221/(x222+x223))|x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x225 = 0LLU;
	uint16_t x226 = UINT16_MAX;
	static int8_t x227 = 3;
	volatile int8_t x228 = INT8_MIN;
	volatile uint64_t t51 = 14070LLU;

	t51 = ((x225/(x226+x227))|x228);

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x229 = 25149U;
	volatile uint64_t x230 = UINT64_MAX;
	uint64_t x231 = UINT64_MAX;
	volatile int16_t x232 = INT16_MIN;

	t52 = ((x229/(x230+x231))|x232);

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x233 = 0U;
	int32_t x234 = INT32_MIN;
	uint8_t x235 = 3U;
	static uint8_t x236 = 3U;
	volatile int32_t t53 = -53;

	t53 = ((x233/(x234+x235))|x236);

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 81781776631LL;
	volatile int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = UINT64_MAX;

	t54 = ((x237/(x238+x239))|x240);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = -59904148;
	static uint16_t x246 = 2593U;
	volatile int16_t x248 = INT16_MAX;
	volatile int64_t t55 = 457LL;

	t55 = ((x245/(x246+x247))|x248);

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 17U;
	uint8_t x250 = UINT8_MAX;
	uint16_t x251 = 0U;
	int8_t x252 = -1;
	volatile int32_t t56 = 9820;

	t56 = ((x249/(x250+x251))|x252);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = 6346851450584630LL;
	uint64_t x254 = 0LLU;
	volatile uint64_t x255 = 77905802582539LLU;
	uint32_t x256 = UINT32_MAX;
	uint64_t t57 = 7335977853909806LLU;

	t57 = ((x253/(x254+x255))|x256);

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x257 = UINT8_MAX;
	static int64_t x260 = INT64_MAX;
	static volatile int64_t t58 = INT64_MAX;

	t58 = ((x257/(x258+x259))|x260);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x262 = -3991916538709LL;
	volatile int16_t x263 = 0;
	uint32_t x264 = UINT32_MAX;
	int64_t t59 = 1167724LL;

	t59 = ((x261/(x262+x263))|x264);

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x266 = 129LLU;
	static volatile int8_t x267 = -14;
	static uint64_t t60 = UINT64_MAX;

	t60 = ((x265/(x266+x267))|x268);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 125919U;
	int32_t x270 = 117059;
	int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;

	t61 = ((x269/(x270+x271))|x272);

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = INT8_MIN;
	volatile uint8_t x274 = UINT8_MAX;
	int8_t x275 = INT8_MAX;
	uint8_t x276 = 0U;
	int32_t t62 = -876;

	t62 = ((x273/(x274+x275))|x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -39;
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	static volatile int64_t t63 = -258596459LL;

	t63 = ((x277/(x278+x279))|x280);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x281 = 1;
	int16_t x282 = INT16_MIN;
	int32_t x283 = 75633;
	int32_t t64 = 43042;

	t64 = ((x281/(x282+x283))|x284);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x287 = INT8_MAX;
	uint64_t x288 = 2903LLU;
	volatile uint64_t t65 = 1864442042LLU;

	t65 = ((x285/(x286+x287))|x288);

	if (t65 != 146402730743728983LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t t66 = -16220319252890LL;

	t66 = ((x289/(x290+x291))|x292);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 2774358U;
	int8_t x294 = 0;
	static uint32_t x296 = 0U;
	static uint32_t t67 = 1753U;

	t67 = ((x293/(x294+x295))|x296);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x297 = 54496U;
	int16_t x298 = INT16_MIN;
	uint64_t x300 = 444173LLU;
	volatile uint64_t t68 = 11695972533LLU;

	t68 = ((x297/(x298+x299))|x300);

	if (t68 != 444173LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x303 = 244318813LL;
	int8_t x304 = 58;
	int64_t t69 = -8917440249141640LL;

	t69 = ((x301/(x302+x303))|x304);

	if (t69 != 58LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int8_t x306 = INT8_MIN;
	volatile int8_t x307 = -1;
	int32_t t70 = 1;

	t70 = ((x305/(x306+x307))|x308);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	static uint32_t x310 = UINT32_MAX;
	static uint8_t x311 = 0U;
	int16_t x312 = 5;
	static uint32_t t71 = 11055U;

	t71 = ((x309/(x310+x311))|x312);

	if (t71 != 5U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x313 = 126U;
	int64_t x314 = INT64_MIN;
	static int8_t x316 = 1;
	static volatile uint64_t t72 = 1032061LLU;

	t72 = ((x313/(x314+x315))|x316);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x318 = 761744;
	uint64_t x319 = 1703289269435885724LLU;
	uint64_t t73 = 43135LLU;

	t73 = ((x317/(x318+x319))|x320);

	if (t73 != 123LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x321 = 15658499247171855LLU;
	int16_t x322 = INT16_MAX;
	static uint32_t x323 = UINT32_MAX;
	uint32_t x324 = 114U;

	t74 = ((x321/(x322+x323))|x324);

	if (t74 != 477888642167LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x325 = INT32_MIN;
	uint32_t x326 = 2375401U;
	int32_t x327 = -1;
	static volatile uint32_t t75 = 19154U;

	t75 = ((x325/(x326+x327))|x328);

	if (t75 != 906U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 1897LLU;
	uint16_t x334 = 1646U;
	volatile uint64_t x335 = 3733324LLU;
	static uint32_t x336 = UINT32_MAX;

	t76 = ((x333/(x334+x335))|x336);

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = INT64_MAX;
	volatile int32_t x338 = 47;
	int16_t x339 = INT16_MIN;
	volatile uint64_t t77 = 16216596LLU;

	t77 = ((x337/(x338+x339))|x340);

	if (t77 != 18446462194426007295LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = 86;
	int64_t x343 = 784695279245391834LL;
	uint8_t x344 = 51U;
	volatile int64_t t78 = -76787928498LL;

	t78 = ((x341/(x342+x343))|x344);

	if (t78 != 51LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MAX;
	uint32_t x346 = 1864U;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x345/(x346+x347))|x348);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x350 = -26;
	int8_t x351 = INT8_MAX;
	volatile int64_t x352 = INT64_MAX;
	volatile int64_t t80 = INT64_MAX;

	t80 = ((x349/(x350+x351))|x352);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	uint8_t x354 = 90U;
	int16_t x355 = 1;
	int32_t x356 = -1;

	t81 = ((x353/(x354+x355))|x356);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 11U;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;

	t82 = ((x357/(x358+x359))|x360);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = -1;
	static uint16_t x363 = 5326U;
	volatile int8_t x364 = INT8_MIN;
	uint64_t t83 = 3729337LLU;

	t83 = ((x361/(x362+x363))|x364);

	if (t83 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MAX;
	static int32_t x366 = 3445;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = 56;

	t84 = ((x365/(x366+x367))|x368);

	if (t84 != 2678098733116990LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x369 = 232131203299466631LL;
	int64_t x370 = 42790765112332182LL;
	static int64_t x371 = 74LL;
	int16_t x372 = INT16_MAX;

	t85 = ((x369/(x370+x371))|x372);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = 10523U;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = 14LLU;
	volatile uint64_t x384 = UINT64_MAX;
	static uint64_t t86 = UINT64_MAX;

	t86 = ((x381/(x382+x383))|x384);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MAX;
	static uint8_t x386 = 3U;
	uint16_t x387 = 1U;
	volatile int64_t t87 = -650927514LL;

	t87 = ((x385/(x386+x387))|x388);

	if (t87 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = -1;
	int8_t x391 = -1;
	int32_t x392 = -1;
	static int32_t t88 = 479;

	t88 = ((x389/(x390+x391))|x392);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x393 = 197LLU;
	int32_t x394 = -311195;
	volatile int32_t x395 = -1;
	int8_t x396 = INT8_MAX;

	t89 = ((x393/(x394+x395))|x396);

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x397 = 7U;
	int32_t x398 = -1;
	static int8_t x399 = INT8_MAX;
	uint64_t x400 = UINT64_MAX;

	t90 = ((x397/(x398+x399))|x400);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x401 = INT16_MAX;
	uint8_t x402 = 3U;
	uint32_t x403 = 437333U;
	uint32_t t91 = 4U;

	t91 = ((x401/(x402+x403))|x404);

	if (t91 != 4294934528U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	int16_t x407 = 665;
	volatile int16_t x408 = -9398;

	t92 = ((x405/(x406+x407))|x408);

	if (t92 != -9398) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = UINT8_MAX;
	volatile uint8_t x410 = 2U;
	int16_t x411 = 1361;
	static uint16_t x412 = 1238U;
	int32_t t93 = -14131798;

	t93 = ((x409/(x410+x411))|x412);

	if (t93 != 1238) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = UINT32_MAX;
	int64_t x414 = INT64_MAX;
	static volatile uint8_t x416 = 9U;
	volatile int64_t t94 = -7081059284789301LL;

	t94 = ((x413/(x414+x415))|x416);

	if (t94 != 9LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	int8_t x419 = 4;
	volatile int32_t x420 = 1;
	int32_t t95 = -909;

	t95 = ((x417/(x418+x419))|x420);

	if (t95 != -17318415) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x421 = INT8_MIN;
	uint16_t x422 = 3743U;
	static int64_t x423 = INT64_MIN;
	volatile int16_t x424 = INT16_MIN;
	static volatile int64_t t96 = 33814480811077LL;

	t96 = ((x421/(x422+x423))|x424);

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x426 = 13405U;
	int64_t x427 = -1LL;
	volatile uint64_t t97 = 234LLU;

	t97 = ((x425/(x426+x427))|x428);

	if (t97 != 464711166459903LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x429 = 438U;
	volatile int8_t x430 = -1;
	static int64_t t98 = INT64_MIN;

	t98 = ((x429/(x430+x431))|x432);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	static int64_t x436 = INT64_MIN;

	t99 = ((x433/(x434+x435))|x436);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

