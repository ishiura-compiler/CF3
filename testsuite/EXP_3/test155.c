#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 14;
volatile int16_t x3 = 23;
static volatile int8_t x5 = INT8_MIN;
int16_t x8 = -8222;
int8_t x13 = INT8_MIN;
int64_t t3 = 425027LL;
volatile int64_t t4 = 559628159711082LL;
uint64_t x37 = UINT64_MAX;
int16_t x41 = -9487;
int64_t x42 = -1LL;
int8_t x46 = INT8_MIN;
static volatile uint64_t x51 = 52527LLU;
static int8_t x53 = INT8_MIN;
static uint16_t x63 = UINT16_MAX;
volatile int32_t t14 = INT32_MAX;
static uint16_t x68 = 105U;
int16_t x70 = -129;
int64_t x77 = 27862249611675LL;
volatile int8_t x78 = -1;
int64_t x81 = -22890LL;
int16_t x82 = INT16_MIN;
int64_t x89 = INT64_MIN;
uint64_t x93 = UINT64_MAX;
uint32_t x96 = 6905496U;
volatile uint64_t t22 = UINT64_MAX;
int32_t x100 = 160;
uint16_t x103 = 1U;
uint32_t x106 = UINT32_MAX;
static volatile int8_t x110 = INT8_MIN;
int64_t x116 = 10LL;
volatile int8_t x125 = INT8_MAX;
uint32_t x132 = 925398950U;
int8_t x133 = 1;
volatile int16_t x139 = -1;
int16_t x147 = 1;
int64_t x148 = -1LL;
uint8_t x156 = UINT8_MAX;
static int16_t x157 = 136;
uint32_t x166 = UINT32_MAX;
int16_t x174 = INT16_MAX;
static uint64_t x177 = 69582002633436387LLU;
int8_t x181 = INT8_MAX;
int64_t x185 = INT64_MIN;
static volatile int64_t t44 = 15214997311255966LL;
int8_t x189 = INT8_MIN;
int64_t x199 = INT64_MIN;
static int16_t x203 = 0;
volatile int32_t t48 = 8376126;
volatile int32_t x207 = INT32_MAX;
int32_t x214 = INT32_MIN;
int64_t t52 = -14153058LL;
static int8_t x223 = 0;
int32_t x231 = -1;
uint64_t x232 = 11796011021820040LLU;
volatile uint64_t t55 = 2585349LLU;
uint64_t t56 = 112336139822062LLU;
int32_t x241 = INT32_MIN;
uint32_t x252 = 74599119U;
static int8_t x259 = -37;
int64_t t61 = -51LL;
uint16_t x271 = 28U;
static uint32_t x272 = 791U;
volatile uint64_t t64 = UINT64_MAX;
volatile int64_t t65 = -7510916841132560LL;
static int64_t x286 = -4502221393LL;
uint64_t x287 = 125LLU;
volatile int32_t x288 = INT32_MIN;
uint32_t x296 = UINT32_MAX;
uint64_t x300 = 4019025075LLU;
static volatile int64_t t71 = -197684153173803705LL;
uint32_t x307 = 17020813U;
int64_t x315 = -15292LL;
uint8_t x316 = UINT8_MAX;
static int32_t x318 = 0;
uint32_t x321 = UINT32_MAX;
volatile int8_t x340 = INT8_MIN;
int8_t x342 = INT8_MIN;
static int64_t x349 = INT64_MIN;
volatile int8_t x351 = INT8_MIN;
int8_t x362 = -1;
static volatile int64_t t86 = 2LL;
uint8_t x366 = UINT8_MAX;
int64_t t87 = 2179734419LL;
volatile int8_t x374 = INT8_MIN;
int16_t x378 = INT16_MAX;
uint64_t x387 = 8275273285LLU;
int32_t x388 = 93596967;
int32_t x395 = -15125;
volatile int64_t x398 = 257695LL;
uint64_t t94 = 3650LLU;
volatile int8_t x403 = INT8_MIN;
uint32_t t98 = UINT32_MAX;


void f0(void) {
	static volatile uint64_t x1 = 39LLU;
	static int8_t x4 = -1;
	static volatile uint64_t t0 = 69540240LLU;

	t0 = ((x1|x2)|(x3+x4));

	if (t0 != 63LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	static int16_t x7 = -1;
	volatile int32_t t1 = 460145;

	t1 = ((x5|x6)|(x7+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -10;
	uint8_t x10 = 83U;
	uint64_t x11 = 256LLU;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 970666542421053LLU;

	t2 = ((x9|x10)|(x11+x12));

	if (t2 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = 2;
	uint32_t x15 = 11U;
	int64_t x16 = -8953723427LL;

	t3 = ((x13|x14)|(x15+x16));

	if (t3 != -22LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 7115U;
	int64_t x18 = INT64_MIN;
	int32_t x19 = -1;
	int8_t x20 = -1;

	t4 = ((x17|x18)|(x19+x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -3;
	int8_t x22 = -1;
	int32_t x23 = -1;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = -60929;

	t5 = ((x21|x22)|(x23+x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 0U;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = 6482852283560789212LLU;
	static volatile uint32_t x28 = UINT32_MAX;
	volatile uint64_t t6 = 16LLU;

	t6 = ((x25|x26)|(x27+x28));

	if (t6 != 15706224324710532315LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 4;
	int8_t x34 = INT8_MIN;
	uint8_t x35 = 2U;
	uint64_t x36 = 116576141250LLU;
	volatile uint64_t t7 = 12LLU;

	t7 = ((x33|x34)|(x35+x36));

	if (t7 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 196LLU;
	int64_t x39 = -1LL;
	uint16_t x40 = 15776U;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x37|x38)|(x39+x40));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x43 = INT8_MIN;
	int16_t x44 = -1;
	static volatile int64_t t9 = 21255313LL;

	t9 = ((x41|x42)|(x43+x44));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t10 = -4574732108LL;

	t10 = ((x45|x46)|(x47+x48));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -46913188LL;
	static uint64_t x50 = 518188004013320952LLU;
	volatile uint8_t x52 = 1U;
	uint64_t t11 = 22822231247006LLU;

	t11 = ((x49|x50)|(x51+x52));

	if (t11 != 18446744073696309244LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = 1794373086133501264LLU;
	volatile uint32_t x55 = 50U;
	volatile int16_t x56 = INT16_MIN;
	uint64_t t12 = 5LLU;

	t12 = ((x53|x54)|(x55+x56));

	if (t12 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	uint64_t x58 = 25262121926476LLU;
	uint32_t x59 = 8765U;
	uint8_t x60 = UINT8_MAX;
	volatile uint64_t t13 = 1404980032303048795LLU;

	t13 = ((x57|x58)|(x59+x60));

	if (t13 != 25262121926655LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MAX;
	uint8_t x62 = 7U;
	int16_t x64 = INT16_MIN;

	t14 = ((x61|x62)|(x63+x64));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -528;
	int16_t x66 = -14;
	int32_t x67 = 6;
	int32_t t15 = 594464;

	t15 = ((x65|x66)|(x67+x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	int64_t x71 = -1LL;
	int64_t x72 = 62606252LL;
	int64_t t16 = 1904209793LL;

	t16 = ((x69|x70)|(x71+x72));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 7337U;
	int16_t x74 = INT16_MAX;
	int64_t x75 = -6931132LL;
	int64_t x76 = 18317484580449877LL;
	int64_t t17 = -44908470390071LL;

	t17 = ((x73|x74)|(x75+x76));

	if (t17 != 18317484573523967LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x79 = 34411444589259645LLU;
	static int32_t x80 = INT32_MIN;
	static uint64_t t18 = UINT64_MAX;

	t18 = ((x77|x78)|(x79+x80));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x83 = INT64_MAX;
	uint64_t x84 = 115720983776500619LLU;
	static uint64_t t19 = 846965946187LLU;

	t19 = ((x81|x82)|(x83+x84));

	if (t19 != 18446744073709535134LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MIN;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = ((x85|x86)|(x87+x88));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 1U;
	static volatile int64_t t21 = 416LL;

	t21 = ((x89|x90)|(x91+x92));

	if (t21 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;

	t22 = ((x93|x94)|(x95+x96));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	int32_t x98 = INT32_MIN;
	static int32_t x99 = 59622757;
	volatile int32_t t23 = 3055303;

	t23 = ((x97|x98)|(x99+x100));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	uint32_t x102 = 110423U;
	uint8_t x104 = UINT8_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x101|x102)|(x103+x104));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 15387463260943957LL;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = UINT16_MAX;
	int64_t t25 = 7831685970078784LL;

	t25 = ((x105|x106)|(x107+x108));

	if (t25 != 15387463367262207LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = INT16_MAX;
	static int16_t x111 = INT16_MIN;
	volatile uint16_t x112 = UINT16_MAX;
	static int32_t t26 = -7861082;

	t26 = ((x109|x110)|(x111+x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = 88;
	static volatile int8_t x114 = 1;
	int8_t x115 = INT8_MIN;
	int64_t t27 = -8991310LL;

	t27 = ((x113|x114)|(x115+x116));

	if (t27 != -37LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 1708U;
	int16_t x118 = -1;
	int64_t x119 = -128926634068439LL;
	int32_t x120 = -25436;
	int64_t t28 = -209LL;

	t28 = ((x117|x118)|(x119+x120));

	if (t28 != -128926328291329LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = UINT16_MAX;
	int16_t x122 = -126;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MAX;
	volatile int32_t t29 = 7757443;

	t29 = ((x121|x122)|(x123+x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x126 = 14;
	static uint16_t x127 = UINT16_MAX;
	int8_t x128 = -1;
	int32_t t30 = -310;

	t30 = ((x125|x126)|(x127+x128));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = 3;
	int16_t x130 = -9;
	volatile int32_t x131 = -3310;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x129|x130)|(x131+x132));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = 0;
	static int32_t t32 = 3;

	t32 = ((x133|x134)|(x135+x136));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 95U;
	int32_t x138 = -13;
	volatile int16_t x140 = INT16_MIN;
	static volatile int32_t t33 = 2637;

	t33 = ((x137|x138)|(x139+x140));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	static volatile uint32_t t34 = UINT32_MAX;

	t34 = ((x141|x142)|(x143+x144));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 0U;
	int64_t x146 = INT64_MIN;
	int64_t t35 = INT64_MIN;

	t35 = ((x145|x146)|(x147+x148));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 0;
	uint64_t x150 = 635425138382LLU;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;
	static uint64_t t36 = 812857793876169LLU;

	t36 = ((x149|x150)|(x151+x152));

	if (t36 != 635655159807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -42;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	volatile int32_t t37 = 250;

	t37 = ((x153|x154)|(x155+x156));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x158 = 15U;
	static int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	uint32_t t38 = 1654968181U;

	t38 = ((x157|x158)|(x159+x160));

	if (t38 != 4294934783U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = -51276343427072LL;
	int8_t x163 = INT8_MAX;
	int32_t x164 = 1465679;
	volatile int64_t t39 = -442947233297386LL;

	t39 = ((x161|x162)|(x163+x164));

	if (t39 != -875045426LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 268132LL;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = -1;
	volatile int64_t t40 = -2LL;

	t40 = ((x165|x166)|(x167+x168));

	if (t40 != 4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	int8_t x175 = INT8_MAX;
	int16_t x176 = -1;
	static int32_t t41 = INT32_MAX;

	t41 = ((x173|x174)|(x175+x176));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MIN;
	static uint8_t x179 = 5U;
	static int32_t x180 = INT32_MIN;
	static uint64_t t42 = 116811516LLU;

	t42 = ((x177|x178)|(x179+x180));

	if (t42 != 18446744073537187047LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x182 = 26930245497106LL;
	uint16_t x183 = 234U;
	volatile int16_t x184 = -1;
	int64_t t43 = -2997443069LL;

	t43 = ((x181|x182)|(x183+x184));

	if (t43 != 26930245497343LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x186 = INT32_MAX;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;

	t44 = ((x185|x186)|(x187+x188));

	if (t44 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = INT32_MIN;
	static int32_t x191 = INT32_MIN;
	int32_t x192 = 61;
	volatile int32_t t45 = 549833845;

	t45 = ((x189|x190)|(x191+x192));

	if (t45 != -67) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = INT16_MIN;
	static int8_t x194 = 5;
	int8_t x195 = INT8_MIN;
	static volatile int8_t x196 = 5;
	volatile int32_t t46 = 261;

	t46 = ((x193|x194)|(x195+x196));

	if (t46 != -123) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = 1934605;
	uint64_t x198 = UINT64_MAX;
	int16_t x200 = INT16_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x197|x198)|(x199+x200));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MIN;
	int8_t x204 = INT8_MAX;

	t48 = ((x201|x202)|(x203+x204));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = 276U;
	static uint32_t x208 = 179540620U;
	static uint32_t t49 = 26515624U;

	t49 = ((x205|x206)|(x207+x208));

	if (t49 != 4294939551U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	static volatile int32_t x210 = -23963;
	uint16_t x211 = 109U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t50 = -123;

	t50 = ((x209|x210)|(x211+x212));

	if (t50 != -23955) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x213 = 205997874028489557LLU;
	int64_t x215 = -130656LL;
	static int64_t x216 = -250661466138603952LL;
	static uint64_t t51 = 186535693LLU;

	t51 = ((x213|x214)|(x215+x216));

	if (t51 != 18446744073709301749LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	int64_t x219 = INT64_MIN;
	int32_t x220 = 3930841;

	t52 = ((x217|x218)|(x219+x220));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	uint8_t x222 = 50U;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t53 = -816445;

	t53 = ((x221|x222)|(x223+x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = 7992503450570240942LLU;
	static int16_t x227 = -1;
	static int16_t x228 = 12495;
	volatile uint64_t t54 = 3607086708LLU;

	t54 = ((x225|x226)|(x227+x228));

	if (t54 != 7992503450570241023LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 2U;
	volatile int32_t x230 = -345;

	t55 = ((x229|x230)|(x231+x232));

	if (t55 != 18446744073709551271LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -56;
	uint64_t x234 = 908156375590034LLU;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;

	t56 = ((x233|x234)|(x235+x236));

	if (t56 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x242 = 13;
	int16_t x243 = INT16_MAX;
	volatile int16_t x244 = INT16_MIN;
	int32_t t57 = -3;

	t57 = ((x241|x242)|(x243+x244));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = -1;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = 384;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x245|x246)|(x247+x248));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 67U;
	int8_t x250 = -1;
	volatile int64_t x251 = INT64_MIN;
	volatile int64_t t59 = 453177725493990LL;

	t59 = ((x249|x250)|(x251+x252));

	if (t59 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = INT16_MAX;
	uint16_t x258 = 8882U;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x257|x258)|(x259+x260));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x261 = 8U;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = 53U;
	int64_t x264 = -1935029LL;

	t61 = ((x261|x262)|(x263+x264));

	if (t61 != -1900545LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x265 = 48542U;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = 149LLU;
	int16_t x268 = -175;
	static volatile uint64_t t62 = 2546676124677231792LLU;

	t62 = ((x265|x266)|(x267+x268));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MAX;
	uint64_t x270 = 530798558LLU;
	static uint64_t t63 = 13910455844549LLU;

	t63 = ((x269|x270)|(x271+x272));

	if (t63 != 530808831LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	static uint32_t x276 = 684805247U;

	t64 = ((x273|x274)|(x275+x276));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x277 = INT16_MIN;
	int64_t x278 = -1LL;
	volatile int32_t x279 = 1;
	uint32_t x280 = 559324472U;

	t65 = ((x277|x278)|(x279+x280));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x281 = UINT8_MAX;
	uint32_t x282 = 16368558U;
	uint32_t x283 = 10U;
	int64_t x284 = -1LL;
	static volatile int64_t t66 = 148124819440LL;

	t66 = ((x281|x282)|(x283+x284));

	if (t66 != 16368639LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 6U;
	uint64_t t67 = 478359LLU;

	t67 = ((x285|x286)|(x287+x288));

	if (t67 != 18446744073502297599LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x290 = 1U;
	volatile uint16_t x291 = 25663U;
	int32_t x292 = INT32_MIN;
	int32_t t68 = 4;

	t68 = ((x289|x290)|(x291+x292));

	if (t68 != -7105) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = 21U;
	uint16_t x294 = 0U;
	uint16_t x295 = 44U;
	uint32_t t69 = 520638319U;

	t69 = ((x293|x294)|(x295+x296));

	if (t69 != 63U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = UINT8_MAX;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	volatile uint64_t t70 = 61733970715LLU;

	t70 = ((x297|x298)|(x299+x300));

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = -11;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int16_t x304 = -2971;

	t71 = ((x301|x302)|(x303+x304));

	if (t71 != -11LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x305 = INT16_MAX;
	volatile int16_t x306 = -1;
	static uint64_t x308 = UINT64_MAX;
	static uint64_t t72 = UINT64_MAX;

	t72 = ((x305|x306)|(x307+x308));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x309 = -1;
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MIN;
	static int64_t t73 = 264135LL;

	t73 = ((x309|x310)|(x311+x312));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = -34478178187648468LL;
	static int16_t x314 = -1;
	volatile int64_t t74 = 3532066107372LL;

	t74 = ((x313|x314)|(x315+x316));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 0;
	uint64_t x319 = UINT64_MAX;
	volatile int16_t x320 = INT16_MIN;
	volatile uint64_t t75 = 7837442646617712LLU;

	t75 = ((x317|x318)|(x319+x320));

	if (t75 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int64_t x324 = INT64_MIN;
	int64_t t76 = 1727792071146029LL;

	t76 = ((x321|x322)|(x323+x324));

	if (t76 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 2686994U;
	int64_t x326 = INT64_MIN;
	volatile int32_t x327 = -27;
	uint64_t x328 = 457LLU;
	volatile uint64_t t77 = 546769983929770135LLU;

	t77 = ((x325|x326)|(x327+x328));

	if (t77 != 9223372036857463230LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	static int32_t x330 = INT32_MAX;
	uint64_t x331 = 3137162LLU;
	int32_t x332 = -1;
	uint64_t t78 = 51014669LLU;

	t78 = ((x329|x330)|(x331+x332));

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 18U;
	volatile int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -20;
	static int32_t x336 = 4926;
	volatile int32_t t79 = 25980067;

	t79 = ((x333|x334)|(x335+x336));

	if (t79 != -70) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 16U;
	int32_t x338 = INT32_MIN;
	uint32_t x339 = 22937015U;
	volatile uint32_t t80 = 6818U;

	t80 = ((x337|x338)|(x339+x340));

	if (t80 != 2170420535U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 7LLU;
	static volatile int16_t x343 = -1;
	uint16_t x344 = UINT16_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x341|x342)|(x343+x344));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MAX;
	uint32_t x346 = 12657818U;
	uint16_t x347 = 1U;
	uint32_t x348 = 481U;
	static volatile int64_t t82 = INT64_MAX;

	t82 = ((x345|x346)|(x347+x348));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x350 = 5U;
	volatile uint16_t x352 = UINT16_MAX;
	volatile int64_t t83 = -1450759431976LL;

	t83 = ((x349|x350)|(x351+x352));

	if (t83 != -9223372036854710401LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	static volatile uint8_t x354 = 0U;
	int64_t x355 = INT64_MAX;
	int8_t x356 = -1;
	static volatile int64_t t84 = -41781305664231608LL;

	t84 = ((x353|x354)|(x355+x356));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x357 = -1;
	int16_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	volatile int32_t x360 = INT32_MAX;
	static volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x357|x358)|(x359+x360));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	volatile int64_t x363 = -1087993427263053556LL;
	static uint16_t x364 = UINT16_MAX;

	t86 = ((x361|x362)|(x363+x364));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 36U;
	int32_t x367 = 10;
	int64_t x368 = 41948420874LL;

	t87 = ((x365|x366)|(x367+x368));

	if (t87 != 41948421119LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x369 = 120760260U;
	int16_t x370 = -1847;
	static uint8_t x371 = 26U;
	static uint8_t x372 = 1U;
	uint32_t t88 = 40343293U;

	t88 = ((x369|x370)|(x371+x372));

	if (t88 != 4294967263U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile uint16_t x375 = 1U;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t89 = -7;

	t89 = ((x373|x374)|(x375+x376));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x377 = 0U;
	uint16_t x379 = 447U;
	int32_t x380 = INT32_MIN;
	uint32_t t90 = 62752U;

	t90 = ((x377|x378)|(x379+x380));

	if (t90 != 2147516415U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = 1;
	static int32_t x382 = 70;
	int64_t x383 = -1LL;
	int64_t x384 = 176780523829269LL;
	volatile int64_t t91 = 216034572LL;

	t91 = ((x381|x382)|(x383+x384));

	if (t91 != 176780523829335LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 35201U;
	int64_t x386 = -49513956713LL;
	volatile uint64_t t92 = 839551924851363LLU;

	t92 = ((x385|x386)|(x387+x388));

	if (t92 != 18446744030675926015LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = -1;
	volatile int32_t x394 = 872;
	int64_t x396 = -1LL;
	int64_t t93 = 18996970822LL;

	t93 = ((x393|x394)|(x395+x396));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x397 = 2360LLU;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 50LLU;

	t94 = ((x397|x398)|(x399+x400));

	if (t94 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 572U;
	uint16_t x404 = 1713U;
	int32_t t95 = -1232;

	t95 = ((x401|x402)|(x403+x404));

	if (t95 != -67) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = INT8_MAX;
	volatile int8_t x406 = 2;
	uint8_t x407 = 86U;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t96 = 165558083951710LLU;

	t96 = ((x405|x406)|(x407+x408));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	static volatile int64_t t97 = -62528350LL;

	t97 = ((x409|x410)|(x411+x412));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	static volatile int32_t x415 = 14;
	int8_t x416 = 62;

	t98 = ((x413|x414)|(x415+x416));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MAX;
	int16_t x419 = -2;
	volatile uint8_t x420 = UINT8_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x417|x418)|(x419+x420));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

