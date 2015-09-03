#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1579704U;
volatile int32_t x3 = INT32_MIN;
static volatile uint32_t x5 = UINT32_MAX;
int64_t x6 = -1LL;
int64_t x15 = -1152332597LL;
int16_t x21 = INT16_MIN;
uint16_t x23 = 634U;
static int8_t x27 = -1;
int32_t x30 = -1;
int32_t x32 = -10854;
uint16_t x34 = 57U;
static uint32_t x36 = UINT32_MAX;
int32_t t9 = -1776;
volatile int32_t x41 = -1;
static uint64_t t10 = 24526348559LLU;
int16_t x49 = INT16_MIN;
volatile int64_t x60 = INT64_MAX;
static uint64_t t14 = 13262LLU;
static uint8_t x72 = 4U;
int32_t x78 = -1;
static volatile int64_t t18 = 1711028634LL;
volatile int64_t x81 = INT64_MAX;
int16_t x86 = INT16_MAX;
int64_t t20 = -9722478143884537LL;
static uint64_t x92 = 9014410409260199277LLU;
int32_t x93 = INT32_MAX;
volatile int64_t x94 = -1LL;
uint64_t x96 = UINT64_MAX;
uint64_t t23 = 4517597692587049LLU;
uint64_t x106 = 2459492526828910016LLU;
static int8_t x108 = 0;
uint64_t t25 = 1429572971923LLU;
uint32_t x117 = UINT32_MAX;
static volatile int8_t x118 = 12;
static volatile int32_t x121 = -1;
int16_t x123 = INT16_MIN;
volatile int16_t x124 = INT16_MAX;
static volatile int32_t x125 = -1;
static volatile uint64_t t29 = UINT64_MAX;
volatile uint32_t x129 = 0U;
int8_t x132 = INT8_MIN;
volatile int64_t t30 = 1700LL;
int8_t x133 = 31;
int32_t x144 = 7;
volatile int32_t t35 = -56;
uint64_t t36 = 76747754466LLU;
int32_t x158 = -1;
volatile int64_t x159 = INT64_MAX;
volatile int32_t x178 = -9;
int16_t x182 = INT16_MIN;
volatile int64_t x184 = 343480034047782LL;
volatile int64_t t43 = 510229601055LL;
int32_t x191 = INT32_MIN;
volatile int32_t x195 = INT32_MAX;
static uint32_t x199 = 1100U;
static volatile int64_t t47 = 2836986806LL;
int16_t x201 = 0;
static int16_t x202 = -3;
volatile int32_t x214 = INT32_MAX;
int16_t x216 = INT16_MIN;
uint32_t x220 = 57925536U;
uint16_t x221 = 3057U;
int64_t x224 = INT64_MIN;
int64_t t53 = -30880LL;
uint16_t x231 = 1U;
int32_t x235 = INT32_MIN;
volatile int64_t x236 = INT64_MIN;
int32_t x243 = INT32_MAX;
volatile int16_t x246 = 9;
int64_t x247 = 14678931112468LL;
volatile int64_t x250 = INT64_MIN;
int64_t x254 = -2795968398848LL;
int32_t x255 = INT32_MIN;
uint8_t x260 = UINT8_MAX;
static int8_t x272 = -1;
uint32_t t65 = 81U;
uint32_t x273 = UINT32_MAX;
uint32_t x278 = 47468U;
volatile int32_t t70 = 42;
int32_t t71 = -15459581;
int64_t t72 = -1LL;
volatile int64_t t74 = -16408719517023160LL;
static volatile int64_t x314 = INT64_MAX;
static int8_t x320 = 1;
volatile uint32_t t77 = 182U;
int32_t x328 = 0;
static uint16_t x332 = 5676U;
uint32_t x340 = 866999710U;
int64_t x342 = INT64_MAX;
uint8_t x345 = 7U;
static volatile int64_t t82 = 1319LL;
int16_t x362 = INT16_MIN;
int32_t x364 = INT32_MAX;
uint64_t t86 = 179683114740347644LLU;
uint16_t x372 = 1004U;
static volatile uint32_t x376 = 12826010U;
int64_t t89 = -2351478743060LL;
uint8_t x377 = 58U;
static int8_t x381 = -15;
static volatile int32_t x383 = INT32_MIN;
volatile int64_t t91 = -1606877618LL;
uint64_t x385 = 129868761633263174LLU;
uint16_t x388 = 31U;
uint64_t t92 = 1575159464184701387LLU;
int64_t x389 = -97LL;
static volatile int64_t x390 = -1LL;
static volatile uint32_t t94 = 1697U;
static volatile int16_t x399 = -1;
static volatile uint16_t x400 = 9023U;
volatile int32_t x403 = INT32_MIN;
volatile int32_t x407 = INT32_MAX;
int32_t x408 = INT32_MAX;
int16_t x411 = INT16_MIN;
static int16_t x414 = INT16_MAX;
int64_t x415 = INT64_MIN;
volatile int64_t t99 = 1LL;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	int8_t x4 = -5;
	volatile uint32_t t0 = 7590838U;

	t0 = (x1+((x2^x3)&x4));

	if (t0 != 1579704U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x7 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 2611232229488LLU;

	t1 = (x5+((x6^x7)&x8));

	if (t1 != 6442450942LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile uint8_t x10 = UINT8_MAX;
	static volatile int16_t x11 = -1;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x9+((x10^x11)&x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MIN;
	int64_t x16 = 1747027385862996065LL;
	int64_t t3 = -213LL;

	t3 = (x13+((x14^x15)&x16));

	if (t3 != 3031232LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int8_t x18 = -29;
	volatile int32_t x19 = -1;
	int16_t x20 = 42;
	volatile int32_t t4 = 0;

	t4 = (x17+((x18^x19)&x20));

	if (t4 != 32775) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = INT32_MAX;
	static uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = 71611151U;

	t5 = (x21+((x22^x23)&x24));

	if (t5 != 2147450245U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	volatile int64_t x28 = -1LL;
	int64_t t6 = 3804153381LL;

	t6 = (x25+((x26^x27)&x28));

	if (t6 != 2147483774LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 109463295637344LLU;
	int64_t x31 = -1LL;
	volatile uint64_t t7 = 2LLU;

	t7 = (x29+((x30^x31)&x32));

	if (t7 != 109463295637344LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	uint32_t x35 = 47U;
	uint32_t t8 = 15760626U;

	t8 = (x33+((x34^x35)&x36));

	if (t8 != 20U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int16_t x38 = 11415;
	int16_t x39 = -15259;
	static uint16_t x40 = 18084U;

	t9 = (x37+((x38^x39)&x40));

	if (t9 != -16224) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = 97207194733LLU;
	uint16_t x43 = UINT16_MAX;
	uint32_t x44 = 51533U;

	t10 = (x41+((x42^x43)&x44));

	if (t10 != 51455LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = 24LLU;
	int64_t x46 = -1LL;
	volatile int8_t x47 = INT8_MIN;
	volatile int16_t x48 = 53;
	static volatile uint64_t t11 = 86272576451916099LLU;

	t11 = (x45+((x46^x47)&x48));

	if (t11 != 77LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x50 = -5471;
	int16_t x51 = 84;
	volatile uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 1079505216408541LLU;

	t12 = (x49+((x50^x51)&x52));

	if (t12 != 18446744073709513461LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int8_t x54 = INT8_MIN;
	volatile int64_t x55 = -11624509523228418LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t13 = -4823LL;

	t13 = (x53+((x54^x55)&x56));

	if (t13 != 11624509523195648LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = 518312;
	volatile int8_t x59 = -12;

	t14 = (x57+((x58^x59)&x60));

	if (t14 != 9223372036854257499LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint64_t x62 = 801128037LLU;
	static volatile int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MAX;
	static uint64_t t15 = 1514999002653LLU;

	t15 = (x61+((x62^x63)&x64));

	if (t15 != 1346355609LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x69 = -1LL;
	int32_t x70 = INT32_MAX;
	volatile uint64_t x71 = 389147499243LLU;
	uint64_t t16 = 223LLU;

	t16 = (x69+((x70^x71)&x72));

	if (t16 != 3LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 0U;
	static int16_t x74 = INT16_MAX;
	uint64_t x75 = 4357LLU;
	int64_t x76 = INT64_MAX;
	uint64_t t17 = 58640126196LLU;

	t17 = (x73+((x74^x75)&x76));

	if (t17 != 28410LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -1;

	t18 = (x77+((x78^x79)&x80));

	if (t18 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = 8656547714508LL;
	int64_t x83 = -1LL;
	uint64_t x84 = UINT64_MAX;
	static uint64_t t19 = 0LLU;

	t19 = (x81+((x82^x83)&x84));

	if (t19 != 9223363380307061298LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x85 = UINT8_MAX;
	int32_t x87 = -1;
	int64_t x88 = -796LL;

	t20 = (x85+((x86^x87)&x88));

	if (t20 != -32513LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 29U;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile uint64_t t21 = 0LLU;

	t21 = (x89+((x90^x91)&x92));

	if (t21 != 9014410408194256266LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x95 = -329476;
	volatile uint64_t t22 = 6LLU;

	t22 = (x93+((x94^x95)&x96));

	if (t22 != 2147813122LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x97 = 86534204LLU;
	volatile uint8_t x98 = 0U;
	int64_t x99 = INT64_MIN;
	volatile int32_t x100 = INT32_MAX;

	t23 = (x97+((x98^x99)&x100));

	if (t23 != 86534204LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = -3;
	uint32_t x102 = UINT32_MAX;
	uint8_t x103 = 0U;
	int16_t x104 = 49;
	volatile uint32_t t24 = 545U;

	t24 = (x101+((x102^x103)&x104));

	if (t24 != 46U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x105 = 3;
	static int32_t x107 = 672190;

	t25 = (x105+((x106^x107)&x108));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 5U;
	int64_t x111 = -274746LL;
	volatile uint32_t x112 = 148U;
	volatile uint64_t t26 = 45962LLU;

	t26 = (x109+((x110^x111)&x112));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x119 = 0U;
	volatile uint8_t x120 = 3U;
	uint32_t t27 = UINT32_MAX;

	t27 = (x117+((x118^x119)&x120));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = -1LL;
	static int64_t t28 = 3341021LL;

	t28 = (x121+((x122^x123)&x124));

	if (t28 != 32766LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 3241321960768885LLU;
	uint32_t x127 = 51041521U;
	uint8_t x128 = 96U;

	t29 = (x125+((x126^x127)&x128));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = 681207639009300LL;
	static int32_t x131 = -102416;

	t30 = (x129+((x130^x131)&x132));

	if (t30 != -681207638980736LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = -1LL;
	int8_t x135 = -1;
	int64_t x136 = -1LL;
	volatile int64_t t31 = -3367LL;

	t31 = (x133+((x134^x135)&x136));

	if (t31 != 31LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = 1;
	static uint64_t x140 = UINT64_MAX;
	volatile uint64_t t32 = 66045361944860LLU;

	t32 = (x137+((x138^x139)&x140));

	if (t32 != 18446744071562133502LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x141 = INT8_MIN;
	static uint8_t x142 = UINT8_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	volatile int32_t t33 = -296699;

	t33 = (x141+((x142^x143)&x144));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	volatile int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	int16_t x148 = 122;
	volatile int32_t t34 = 2568;

	t34 = (x145+((x146^x147)&x148));

	if (t34 != -2147483526) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 13738;
	static int32_t x150 = 1088663;
	uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = INT8_MIN;

	t35 = (x149+((x150^x151)&x152));

	if (t35 != 1087658) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MIN;

	t36 = (x153+((x154^x155)&x156));

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MAX;
	uint32_t x160 = 10757U;
	int64_t t37 = 455005297689LL;

	t37 = (x157+((x158^x159)&x160));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -1;
	static int64_t x162 = INT64_MAX;
	static int16_t x163 = -3;
	uint8_t x164 = 2U;
	int64_t t38 = -14LL;

	t38 = (x161+((x162^x163)&x164));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	uint64_t x166 = 183314178850604469LLU;
	int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MIN;
	uint64_t t39 = 996520975LLU;

	t39 = (x165+((x166^x167)&x168));

	if (t39 != 18263429893796691967LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	volatile uint32_t x170 = 982U;
	volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	static int64_t t40 = 122074952061310920LL;

	t40 = (x169+((x170^x171)&x172));

	if (t40 != 1109LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = 146269U;
	int16_t x174 = -1;
	uint16_t x175 = 29601U;
	uint8_t x176 = 11U;
	uint32_t t41 = 2603U;

	t41 = (x173+((x174^x175)&x176));

	if (t41 != 146279U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x177 = 14594503145LLU;
	int32_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;
	volatile uint64_t t42 = 4348614897756LLU;

	t42 = (x177+((x178^x179)&x180));

	if (t42 != 14594503145LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile uint16_t x183 = 7342U;

	t43 = (x181+((x182^x183)&x184));

	if (t43 != 343480034006054LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = UINT8_MAX;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = 469U;
	uint8_t x188 = UINT8_MAX;
	int32_t t44 = -26798241;

	t44 = (x185+((x186^x187)&x188));

	if (t44 != 340) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	uint16_t x190 = 1U;
	uint32_t x192 = 99U;
	volatile uint32_t t45 = 3186826U;

	t45 = (x189+((x190^x191)&x192));

	if (t45 != 4294967169U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -1794;
	int64_t x194 = 364LL;
	uint16_t x196 = 1U;
	int64_t t46 = 229955LL;

	t46 = (x193+((x194^x195)&x196));

	if (t46 != -1793LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 2319351U;
	int8_t x198 = INT8_MIN;
	int64_t x200 = INT64_MIN;

	t47 = (x197+((x198^x199)&x200));

	if (t47 != 2319351LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x203 = 1U;
	static int64_t x204 = -1LL;
	volatile int64_t t48 = -163067513179675950LL;

	t48 = (x201+((x202^x203)&x204));

	if (t48 != -4LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = 230;
	int64_t x208 = INT64_MIN;
	volatile int64_t t49 = -22LL;

	t49 = (x205+((x206^x207)&x208));

	if (t49 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x209 = 8587U;
	int32_t x210 = -1;
	volatile int32_t x211 = -388333586;
	uint64_t x212 = 59784544LLU;
	uint64_t t50 = 285727978709875586LLU;

	t50 = (x209+((x210^x211)&x212));

	if (t50 != 50340235LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MAX;
	int32_t x215 = INT32_MAX;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x213+((x214^x215)&x216));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = -8;
	int64_t x219 = 8322975LL;
	volatile int64_t t52 = 4258876288389937LL;

	t52 = (x217+((x218^x219)&x220));

	if (t52 != 50364448LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x222 = INT32_MIN;
	static int64_t x223 = INT64_MIN;

	t53 = (x221+((x222^x223)&x224));

	if (t53 != 3057LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = -1;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	volatile int64_t t54 = 146LL;

	t54 = (x225+((x226^x227)&x228));

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	int16_t x230 = -3;
	int32_t x232 = 1711;
	int32_t t55 = -207;

	t55 = (x229+((x230^x231)&x232));

	if (t55 != 1580) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 0U;
	volatile int64_t t56 = 941343876156LL;

	t56 = (x233+((x234^x235)&x236));

	if (t56 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = INT64_MAX;
	volatile int64_t x240 = INT64_MAX;
	int64_t t57 = -224188329005040044LL;

	t57 = (x237+((x238^x239)&x240));

	if (t57 != 98302LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = INT64_MIN;
	static volatile int8_t x242 = INT8_MIN;
	static int64_t x244 = 264637639684827826LL;
	int64_t t58 = 6LL;

	t58 = (x241+((x242^x243)&x244));

	if (t58 != -8958734399243812814LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x245 = INT64_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t59 = 125474LLU;

	t59 = (x245+((x246^x247)&x248));

	if (t59 != 9223386715785888284LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = 182U;
	volatile int16_t x251 = INT16_MIN;
	static int8_t x252 = INT8_MIN;
	int64_t t60 = 48582289LL;

	t60 = (x249+((x250^x251)&x252));

	if (t60 != 9223372036854743222LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 311666LLU;
	volatile uint8_t x256 = 1U;
	volatile uint64_t t61 = 698691LLU;

	t61 = (x253+((x254^x255)&x256));

	if (t61 != 311666LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 15941069LLU;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = INT64_MAX;
	volatile uint64_t t62 = 39647157149114662LLU;

	t62 = (x257+((x258^x259)&x260));

	if (t62 != 15941196LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -22;
	int16_t x262 = -4;
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = INT8_MIN;
	volatile int64_t t63 = 4249525LL;

	t63 = (x261+((x262^x263)&x264));

	if (t63 != 9223372036854775658LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x265 = -1;
	uint64_t x266 = 86740626782LLU;
	volatile int32_t x267 = INT32_MAX;
	static int64_t x268 = INT64_MIN;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x265+((x266^x267)&x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int32_t x270 = INT32_MAX;
	volatile uint32_t x271 = 19U;

	t65 = (x269+((x270^x271)&x272));

	if (t65 != 2147483883U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x274 = 25543LLU;
	volatile int8_t x275 = -1;
	volatile int64_t x276 = INT64_MIN;
	uint64_t t66 = 12282270566LLU;

	t66 = (x273+((x274^x275)&x276));

	if (t66 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = -1LL;
	int64_t x279 = -1LL;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t67 = -24346348078287LL;

	t67 = (x277+((x278^x279)&x280));

	if (t67 != 146LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MIN;
	static uint64_t x282 = 382175LLU;
	int64_t x283 = -7902603315691630LL;
	volatile int16_t x284 = INT16_MAX;
	uint64_t t68 = 9LLU;

	t68 = (x281+((x282^x283)&x284));

	if (t68 != 18446744073709546317LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x285 = 2127491485LLU;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t69 = 1018LLU;

	t69 = (x285+((x286^x287)&x288));

	if (t69 != 9223372038982267165LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	volatile int16_t x290 = INT16_MAX;
	int16_t x291 = INT16_MIN;
	volatile int32_t x292 = INT32_MIN;

	t70 = (x289+((x290^x291)&x292));

	if (t70 != -2147450881) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -3938;
	static int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;

	t71 = (x297+((x298^x299)&x300));

	if (t71 != -3938) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 854896857U;
	int64_t x302 = -1283LL;
	uint8_t x303 = 0U;
	int16_t x304 = INT16_MAX;

	t72 = (x301+((x302^x303)&x304));

	if (t72 != 854928342LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x305 = INT64_MIN;
	static uint64_t x306 = 5970728755832LLU;
	int64_t x307 = -1LL;
	static volatile int64_t x308 = INT64_MAX;
	volatile uint64_t t73 = 319632317938509LLU;

	t73 = (x305+((x306^x307)&x308));

	if (t73 != 18446738102980795783LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = 3;
	static uint32_t x310 = 100U;
	int64_t x311 = -1LL;
	int8_t x312 = -18;

	t74 = (x309+((x310^x311)&x312));

	if (t74 != -115LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -16;
	static volatile uint16_t x315 = UINT16_MAX;
	uint64_t x316 = 190353LLU;
	volatile uint64_t t75 = 1015507287749902LLU;

	t75 = (x313+((x314^x315)&x316));

	if (t75 != 131056LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -4570;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = 2;
	volatile int32_t t76 = 1014485530;

	t76 = (x317+((x318^x319)&x320));

	if (t76 != -4570) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = 382776U;
	int32_t x322 = 464;
	static int32_t x323 = -1;
	int32_t x324 = INT32_MAX;

	t77 = (x321+((x322^x323)&x324));

	if (t77 != 2147865959U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x325 = -1;
	int32_t x326 = -180;
	volatile uint16_t x327 = 78U;
	static volatile int32_t t78 = 103088;

	t78 = (x325+((x326^x327)&x328));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 4U;
	int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	static volatile int64_t t79 = 28369827074LL;

	t79 = (x329+((x330^x331)&x332));

	if (t79 != 5680LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = INT16_MIN;
	static int8_t x338 = 0;
	volatile int8_t x339 = INT8_MAX;
	uint32_t t80 = 300305978U;

	t80 = (x337+((x338^x339)&x340));

	if (t80 != 4294934558U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 0U;
	int32_t x343 = -116;
	int16_t x344 = -2;
	int64_t t81 = 14799061LL;

	t81 = (x341+((x342^x343)&x344));

	if (t81 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x346 = 12U;
	int64_t x347 = 15914991756898719LL;
	int16_t x348 = -1996;

	t82 = (x345+((x346^x347)&x348));

	if (t82 != 15914991756898327LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x349 = 17U;
	uint64_t x350 = 2914245789587870770LLU;
	uint8_t x351 = 2U;
	int8_t x352 = -6;
	uint64_t t83 = 17307782849LLU;

	t83 = (x349+((x350^x351)&x352));

	if (t83 != 2914245789587870785LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x353 = INT16_MAX;
	int64_t x354 = INT64_MIN;
	volatile int32_t x355 = -6197943;
	static uint8_t x356 = 3U;
	static volatile int64_t t84 = -140LL;

	t84 = (x353+((x354^x355)&x356));

	if (t84 != 32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	static int64_t x359 = -483834302140LL;
	uint8_t x360 = 0U;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x357+((x358^x359)&x360));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x361 = 3383594383LLU;
	int64_t x363 = INT64_MAX;

	t86 = (x361+((x362^x363)&x364));

	if (t86 != 3383627150LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -1273;
	int32_t x366 = INT32_MAX;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;
	static int32_t t87 = -767319;

	t87 = (x365+((x366^x367)&x368));

	if (t87 != 2147449607) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = UINT8_MAX;
	uint32_t x371 = 916950011U;
	uint32_t t88 = 56534U;

	t88 = (x369+((x370^x371)&x372));

	if (t88 != 2147484420U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	static int64_t x374 = INT64_MAX;
	int32_t x375 = INT32_MAX;

	t89 = (x373+((x374^x375)&x376));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t x380 = INT32_MIN;
	int32_t t90 = 206625276;

	t90 = (x377+((x378^x379)&x380));

	if (t90 != 58) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x382 = -33844LL;
	int32_t x384 = 2047174;

	t91 = (x381+((x382^x383)&x384));

	if (t91 != 2046133LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = INT16_MAX;
	static uint16_t x387 = 6U;

	t92 = (x385+((x386^x387)&x388));

	if (t92 != 129868761633263199LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x391 = 309U;
	static uint8_t x392 = UINT8_MAX;
	int64_t t93 = -15395128500289LL;

	t93 = (x389+((x390^x391)&x392));

	if (t93 != 105LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 0U;
	int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = 2U;

	t94 = (x393+((x394^x395)&x396));

	if (t94 != 2U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = INT64_MIN;
	uint16_t x398 = 1269U;
	volatile int64_t t95 = 4416670LL;

	t95 = (x397+((x398^x399)&x400));

	if (t95 != -9223372036854766838LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x401 = INT64_MIN;
	static int8_t x402 = INT8_MIN;
	uint64_t x404 = 905011LLU;
	uint64_t t96 = 1464337LLU;

	t96 = (x401+((x402^x403)&x404));

	if (t96 != 9223372036855680768LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 2U;
	static uint64_t x406 = 26037167200999774LLU;
	uint64_t t97 = 14790270438LLU;

	t97 = (x405+((x406^x407)&x408));

	if (t97 != 436659875LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x409 = INT16_MIN;
	static int32_t x410 = -89093707;
	volatile int16_t x412 = INT16_MIN;
	int32_t t98 = 275;

	t98 = (x409+((x410^x411)&x412));

	if (t98 != 89030656) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	uint32_t x416 = UINT32_MAX;

	t99 = (x413+((x414^x415)&x416));

	if (t99 != -9223372036854743041LL) { NG(); } else { ; }
	
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

