#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint32_t x2 = UINT32_MAX;
uint16_t x3 = 10932U;
uint32_t t2 = 53980U;
uint8_t x16 = UINT8_MAX;
volatile int32_t t3 = -107146975;
int8_t x18 = INT8_MAX;
volatile int16_t x23 = -7824;
int32_t t5 = -620078595;
static volatile int8_t x40 = 1;
int32_t x44 = INT32_MIN;
int8_t x45 = 6;
static uint8_t x53 = UINT8_MAX;
int64_t x58 = INT64_MIN;
uint64_t t16 = 11198901404708LLU;
int16_t x77 = INT16_MIN;
int64_t x80 = -1LL;
static uint64_t x84 = 175696703731LLU;
uint32_t x85 = 365571023U;
int16_t x86 = INT16_MIN;
int64_t x87 = INT64_MIN;
volatile int64_t t21 = 4741847669LL;
uint16_t x91 = UINT16_MAX;
uint64_t t22 = 31156805LLU;
int64_t x98 = -1LL;
volatile int64_t x111 = 297851673426LL;
int64_t x118 = 801LL;
static uint16_t x119 = 4001U;
int8_t x125 = INT8_MIN;
volatile int64_t x127 = -1LL;
uint64_t t31 = 21LLU;
volatile uint32_t x132 = UINT32_MAX;
int64_t x133 = INT64_MIN;
static int16_t x135 = INT16_MIN;
int64_t x136 = INT64_MAX;
static uint32_t t35 = 2U;
static uint32_t t38 = 421U;
volatile int64_t t39 = -67LL;
int16_t x161 = INT16_MIN;
static uint64_t x163 = 1461228944621LLU;
int64_t x166 = 585764958203LL;
volatile int64_t t43 = 15834LL;
static uint64_t x181 = UINT64_MAX;
volatile int16_t x184 = INT16_MIN;
static int32_t x189 = 732832;
int64_t x198 = 33734455693LL;
int8_t x199 = -1;
int16_t x201 = -1;
volatile int64_t t50 = -109639662887656LL;
int8_t x206 = INT8_MAX;
static int8_t x208 = INT8_MIN;
int64_t t51 = 595174734529LL;
int8_t x212 = -13;
int32_t x217 = INT32_MIN;
int16_t x223 = INT16_MIN;
uint32_t x226 = UINT32_MAX;
static uint32_t x229 = 56U;
static uint8_t x231 = UINT8_MAX;
int32_t x240 = 464428;
int64_t x254 = INT64_MAX;
int64_t x263 = -1LL;
int8_t x270 = INT8_MIN;
uint64_t x271 = 16943458634LLU;
volatile int32_t t69 = 38015;
static int8_t x282 = INT8_MAX;
int16_t x287 = INT16_MIN;
uint8_t x290 = 2U;
volatile int16_t x292 = 11333;
static int32_t x295 = -1;
static int16_t x302 = INT16_MIN;
static int16_t x306 = 3968;
int64_t x307 = -1LL;
int32_t x314 = 1466659;
int16_t x319 = -3713;
int64_t t80 = -16776LL;
uint16_t x328 = UINT16_MAX;
uint32_t x329 = 21209211U;
uint32_t t82 = 5688U;
int16_t x335 = INT16_MIN;
int16_t x336 = 18;
volatile int32_t t83 = 41190;
int64_t x338 = -7279919843360866LL;
int16_t x342 = 545;
uint16_t x343 = UINT16_MAX;
int8_t x344 = 0;
static int8_t x351 = INT8_MIN;
volatile uint64_t t87 = 3332387929827614458LLU;
static int64_t x355 = INT64_MAX;
volatile int64_t x356 = -238842183840LL;
static int16_t x361 = -13256;
uint8_t x364 = UINT8_MAX;
int32_t x367 = INT32_MAX;
volatile int16_t x369 = -1;
uint16_t x382 = 10593U;
static volatile int32_t x383 = INT32_MIN;
uint32_t t95 = 285U;
uint8_t x386 = 3U;
int16_t x388 = -1;
static int32_t x393 = -1;
int32_t x397 = INT32_MIN;


void f0(void) {
	uint16_t x4 = 16679U;
	uint32_t t0 = 25611U;

	t0 = (((x1|x2)&x3)^x4);

	if (t0 != 27539U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int32_t x6 = -1;
	int32_t x7 = 262;
	static uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -1;

	t1 = (((x5|x6)&x7)^x8);

	if (t1 != 505) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 12U;
	int32_t x10 = INT32_MAX;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = INT8_MIN;

	t2 = (((x9|x10)&x11)^x12);

	if (t2 != 2147483775U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static int16_t x14 = 4;
	int16_t x15 = -951;

	t3 = (((x13|x14)&x15)^x16);

	if (t3 != 2147482806) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 2324LLU;
	uint32_t x19 = 54U;
	int64_t x20 = 131733476479019612LL;
	volatile uint64_t t4 = 2084309416342LLU;

	t4 = (((x17|x18)&x19)^x20);

	if (t4 != 131733476479019626LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	uint16_t x22 = UINT16_MAX;
	uint16_t x24 = 2U;

	t5 = (((x21|x22)&x23)^x24);

	if (t5 != 57714) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 72U;
	int16_t x26 = INT16_MAX;
	int8_t x27 = 1;
	volatile int16_t x28 = 3;
	int32_t t6 = 1942;

	t6 = (((x25|x26)&x27)^x28);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = 37;
	uint32_t x32 = UINT32_MAX;
	int64_t t7 = -12091LL;

	t7 = (((x29|x30)&x31)^x32);

	if (t7 != 4294967258LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = INT16_MIN;
	uint64_t x34 = 165251035360967811LLU;
	int16_t x35 = INT16_MAX;
	uint8_t x36 = 1U;
	volatile uint64_t t8 = 5791513618LLU;

	t8 = (((x33|x34)&x35)^x36);

	if (t8 != 15490LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = 12755929347LL;
	static uint64_t x39 = UINT64_MAX;
	uint64_t t9 = 766098LLU;

	t9 = (((x37|x38)&x39)^x40);

	if (t9 != 9223372049610705154LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 18U;
	static int8_t x42 = -1;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int32_t t10 = 165663;

	t10 = (((x41|x42)&x43)^x44);

	if (t10 != -2147418113) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x46 = 1596U;
	static int16_t x47 = INT16_MAX;
	int32_t x48 = -120837;
	volatile uint32_t t11 = 2U;

	t11 = (((x45|x46)&x47)^x48);

	if (t11 != 4294844869U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = INT64_MIN;
	int16_t x52 = -602;
	static int64_t t12 = 17LL;

	t12 = (((x49|x50)&x51)^x52);

	if (t12 != -602LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MAX;
	static int16_t x55 = INT16_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = -24973;

	t13 = (((x53|x54)&x55)^x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 2U;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = 3U;
	volatile int64_t t14 = -74LL;

	t14 = (((x57|x58)&x59)^x60);

	if (t14 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	static volatile uint64_t x62 = 138934830LLU;
	volatile int16_t x63 = 3;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t15 = 852410559564LLU;

	t15 = (((x61|x62)&x63)^x64);

	if (t15 != 253LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 5715940112641846LLU;
	uint16_t x66 = 3613U;
	uint64_t x67 = UINT64_MAX;
	volatile int8_t x68 = INT8_MIN;

	t16 = (((x65|x66)&x67)^x68);

	if (t16 != 18441028133596909759LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static volatile int32_t x70 = INT32_MAX;
	volatile int32_t x71 = 162268906;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 1215068;

	t17 = (((x69|x70)&x71)^x72);

	if (t17 != 162330901) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = INT64_MAX;
	int32_t x74 = INT32_MAX;
	static int32_t x75 = INT32_MIN;
	volatile int16_t x76 = 1680;
	static int64_t t18 = 78081047657985LL;

	t18 = (((x73|x74)&x75)^x76);

	if (t18 != 9223372034707293840LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MAX;
	int64_t t19 = INT64_MIN;

	t19 = (((x77|x78)&x79)^x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int32_t x82 = -11420019;
	static volatile int16_t x83 = INT16_MAX;
	uint64_t t20 = 1029375316034289272LLU;

	t20 = (((x81|x82)&x83)^x84);

	if (t20 != 175696694910LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x88 = INT32_MIN;

	t21 = (((x85|x86)&x87)^x88);

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	int16_t x92 = INT16_MAX;

	t22 = (((x89|x90)&x91)^x92);

	if (t22 != 32768LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 166939123089705851LL;
	int64_t x94 = -5414LL;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = INT16_MAX;
	uint64_t t23 = 606093307LLU;

	t23 = (((x93|x94)&x95)^x96);

	if (t23 != 18446744073709523972LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	uint64_t x99 = 129187700LLU;
	static uint8_t x100 = 32U;
	volatile uint64_t t24 = 7408414LLU;

	t24 = (((x97|x98)&x99)^x100);

	if (t24 != 129187668LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = UINT64_MAX;
	uint64_t x102 = 1430274401LLU;
	static uint64_t x103 = UINT64_MAX;
	uint32_t x104 = 715U;
	static volatile uint64_t t25 = 1215LLU;

	t25 = (((x101|x102)&x103)^x104);

	if (t25 != 18446744073709550900LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1125199U;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = 4021;
	int32_t x108 = INT32_MIN;
	uint32_t t26 = 95882U;

	t26 = (((x105|x106)&x107)^x108);

	if (t26 != 2147486645U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -7289;
	int64_t x110 = -1LL;
	volatile int8_t x112 = -3;
	volatile int64_t t27 = -45418145458384922LL;

	t27 = (((x109|x110)&x111)^x112);

	if (t27 != -297851673425LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = 12U;
	int8_t x115 = INT8_MAX;
	static int8_t x116 = 23;
	uint32_t t28 = 161975U;

	t28 = (((x113|x114)&x115)^x116);

	if (t28 != 27U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	uint16_t x120 = 61U;
	static volatile int64_t t29 = 497345426LL;

	t29 = (((x117|x118)&x119)^x120);

	if (t29 != 3996LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	int16_t x122 = INT16_MAX;
	volatile int64_t x123 = 24LL;
	int8_t x124 = -1;
	volatile int64_t t30 = -266202541600905LL;

	t30 = (((x121|x122)&x123)^x124);

	if (t30 != -25LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	uint64_t x128 = UINT64_MAX;

	t31 = (((x125|x126)&x127)^x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	uint8_t x131 = 0U;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x129|x130)&x131)^x132);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -15539569430LL;
	int64_t t33 = 104204173262072LL;

	t33 = (((x133|x134)&x135)^x136);

	if (t33 != -9223372021315174401LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 3347U;
	uint16_t x138 = 2607U;
	uint64_t x139 = 2533357151506861780LLU;
	uint32_t x140 = 189310U;
	uint64_t t34 = 58LLU;

	t34 = (((x137|x138)&x139)^x140);

	if (t34 != 191850LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = INT32_MAX;
	uint32_t x143 = 349U;
	uint32_t x144 = 71U;

	t35 = (((x141|x142)&x143)^x144);

	if (t35 != 282U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -25;
	uint64_t x146 = 126463345964618555LLU;
	int8_t x147 = -28;
	static uint16_t x148 = 31869U;
	volatile uint64_t t36 = 6LLU;

	t36 = (((x145|x146)&x147)^x148);

	if (t36 != 18446744073709519769LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	static int16_t x150 = 11;
	int8_t x151 = INT8_MAX;
	static volatile uint16_t x152 = 45U;
	volatile int32_t t37 = 111250837;

	t37 = (((x149|x150)&x151)^x152);

	if (t37 != 82) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	static uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MIN;
	static int16_t x156 = 0;

	t38 = (((x153|x154)&x155)^x156);

	if (t38 != 4294934528U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	int32_t x158 = INT32_MAX;
	static int64_t x159 = 594674968617284LL;
	volatile int8_t x160 = -11;

	t39 = (((x157|x158)&x159)^x160);

	if (t39 != -239264079LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = UINT64_MAX;
	static int16_t x164 = INT16_MIN;
	static volatile uint64_t t40 = 46567195639LLU;

	t40 = (((x161|x162)&x163)^x164);

	if (t40 != 18446742612480605421LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 0U;
	static volatile int8_t x167 = INT8_MAX;
	int64_t x168 = -1LL;
	int64_t t41 = 27075269690LL;

	t41 = (((x165|x166)&x167)^x168);

	if (t41 != -124LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	volatile uint8_t x170 = 14U;
	int16_t x171 = INT16_MAX;
	int32_t x172 = 805789385;
	int32_t t42 = -6032;

	t42 = (((x169|x170)&x171)^x172);

	if (t42 != 805789366) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 12U;
	int64_t x174 = INT64_MAX;
	volatile int16_t x175 = 1;
	static volatile int32_t x176 = INT32_MAX;

	t43 = (((x173|x174)&x175)^x176);

	if (t43 != 2147483646LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1660235399300LLU;
	int16_t x178 = -1009;
	int16_t x179 = -3;
	int32_t x180 = -201824;
	static uint64_t t44 = 540469494825132LLU;

	t44 = (((x177|x178)&x179)^x180);

	if (t44 != 202541LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -1;
	volatile int64_t x183 = INT64_MIN;
	volatile uint64_t t45 = 524881422734144782LLU;

	t45 = (((x181|x182)&x183)^x184);

	if (t45 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	int16_t x186 = -1;
	int8_t x187 = -1;
	volatile int32_t x188 = INT32_MIN;
	int32_t t46 = INT32_MAX;

	t46 = (((x185|x186)&x187)^x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MIN;
	int32_t x191 = -1;
	int8_t x192 = INT8_MAX;
	volatile int64_t t47 = 413921684327619LL;

	t47 = (((x189|x190)&x191)^x192);

	if (t47 != -9223372036854042913LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -851;
	int64_t x195 = 2742350968685LL;
	int8_t x196 = -1;
	volatile int64_t t48 = 61682740008LL;

	t48 = (((x193|x194)&x195)^x196);

	if (t48 != -2742350968622LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 8;
	int32_t x200 = 4682584;
	volatile int64_t t49 = -3LL;

	t49 = (((x197|x198)&x199)^x200);

	if (t49 != 33738818261LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	int64_t x203 = INT64_MAX;
	static int64_t x204 = INT64_MIN;

	t50 = (((x201|x202)&x203)^x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x207 = -1LL;

	t51 = (((x205|x206)&x207)^x208);

	if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = -1;
	static volatile int32_t x210 = 233553;
	uint64_t x211 = UINT64_MAX;
	uint64_t t52 = 2999206395071LLU;

	t52 = (((x209|x210)&x211)^x212);

	if (t52 != 12LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 907LL;
	uint64_t x214 = UINT64_MAX;
	static int16_t x215 = 252;
	static int32_t x216 = INT32_MIN;
	volatile uint64_t t53 = 3966903LLU;

	t53 = (((x213|x214)&x215)^x216);

	if (t53 != 18446744071562068220LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = UINT16_MAX;
	static volatile int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	int32_t t54 = 30;

	t54 = (((x217|x218)&x219)^x220);

	if (t54 != -65536) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -2;
	int64_t x222 = INT64_MAX;
	int64_t x224 = 6876005602582940LL;
	int64_t t55 = 355531LL;

	t55 = (((x221|x222)&x223)^x224);

	if (t55 != -6876005602565732LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int32_t x227 = -3192554;
	int32_t x228 = INT32_MAX;
	volatile uint32_t t56 = 168472695U;

	t56 = (((x225|x226)&x227)^x228);

	if (t56 != 2150676201U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MAX;
	int8_t x232 = -1;
	uint32_t t57 = 4060792U;

	t57 = (((x229|x230)&x231)^x232);

	if (t57 != 4294967040U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	static int16_t x234 = -35;
	int32_t x235 = INT32_MIN;
	volatile int16_t x236 = -1;
	volatile int32_t t58 = INT32_MAX;

	t58 = (((x233|x234)&x235)^x236);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 444047;
	volatile int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MAX;
	int64_t t59 = -24370LL;

	t59 = (((x237|x238)&x239)^x240);

	if (t59 != 9223372034707411107LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	uint8_t x242 = 1U;
	static volatile int32_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int64_t t60 = -1230624345021LL;

	t60 = (((x241|x242)&x243)^x244);

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -565LL;
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t61 = 2114557694611610915LL;

	t61 = (((x245|x246)&x247)^x248);

	if (t61 != 32640LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	static int8_t x250 = INT8_MIN;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t62 = 108642258490740968LLU;

	t62 = (((x249|x250)&x251)^x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -4;
	int64_t t63 = -75098LL;

	t63 = (((x253|x254)&x255)^x256);

	if (t63 != 2147483644LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	static int64_t x258 = INT64_MAX;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = -1;
	static int64_t t64 = 4LL;

	t64 = (((x257|x258)&x259)^x260);

	if (t64 != -4294967296LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -3377694LL;
	static volatile uint16_t x262 = 14536U;
	int32_t x264 = 975206;
	int64_t t65 = 6916758970817LL;

	t65 = (((x261|x262)&x263)^x264);

	if (t65 != -4023156LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 9U;
	volatile uint8_t x266 = 5U;
	uint32_t x267 = 1628785U;
	int8_t x268 = INT8_MAX;
	static volatile uint32_t t66 = 0U;

	t66 = (((x265|x266)&x267)^x268);

	if (t66 != 126U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 91163066;
	volatile int32_t x272 = -1;
	volatile uint64_t t67 = 2862LLU;

	t67 = (((x269|x270)&x271)^x272);

	if (t67 != 18446744056766093045LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	volatile int8_t x274 = INT8_MIN;
	uint32_t x275 = 496U;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t68 = 10LLU;

	t68 = (((x273|x274)&x275)^x276);

	if (t68 != 18446744073709551119LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -294498;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	volatile int16_t x280 = INT16_MAX;

	t69 = (((x277|x278)&x279)^x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -245312307751079LL;
	static int16_t x283 = 500;
	uint64_t x284 = UINT64_MAX;
	uint64_t t70 = 5210661698LLU;

	t70 = (((x281|x282)&x283)^x284);

	if (t70 != 18446744073709551243LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = UINT16_MAX;
	uint64_t x286 = UINT64_MAX;
	int8_t x288 = INT8_MAX;
	static volatile uint64_t t71 = 41914LLU;

	t71 = (((x285|x286)&x287)^x288);

	if (t71 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 4096267571213064LL;
	uint8_t x291 = UINT8_MAX;
	int64_t t72 = 19043719707253010LL;

	t72 = (((x289|x290)&x291)^x292);

	if (t72 != 11343LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 19U;
	volatile uint16_t x294 = 57U;
	uint16_t x296 = 19U;
	int32_t t73 = 195878517;

	t73 = (((x293|x294)&x295)^x296);

	if (t73 != 40) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	uint16_t x298 = UINT16_MAX;
	static int32_t x299 = -1;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t74 = -685313659552696LL;

	t74 = (((x297|x298)&x299)^x300);

	if (t74 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	volatile int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	static int32_t t75 = -749635;

	t75 = (((x301|x302)&x303)^x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -1LL;
	uint64_t x308 = 914783668340052LLU;
	volatile uint64_t t76 = 602952856113509LLU;

	t76 = (((x305|x306)&x307)^x308);

	if (t76 != 18445829290041211563LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 11U;
	int32_t x310 = 55561229;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t77 = -211319LL;

	t77 = (((x309|x310)&x311)^x312);

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x315 = 5U;
	int16_t x316 = 605;
	volatile int64_t t78 = -103636845LL;

	t78 = (((x313|x314)&x315)^x316);

	if (t78 != 604LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	int64_t x320 = -666361526LL;
	int64_t t79 = 132197371436821419LL;

	t79 = (((x317|x318)&x319)^x320);

	if (t79 != 666357813LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	static int32_t x323 = INT32_MAX;
	uint8_t x324 = UINT8_MAX;

	t80 = (((x321|x322)&x323)^x324);

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MIN;
	int64_t t81 = 257493243826222LL;

	t81 = (((x325|x326)&x327)^x328);

	if (t81 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MAX;
	static volatile int8_t x331 = INT8_MIN;
	uint32_t x332 = 91493U;

	t82 = (((x329|x330)&x331)^x332);

	if (t82 != 2147392229U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x334 = -2796;

	t83 = (((x333|x334)&x335)^x336);

	if (t83 != -32750) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x339 = INT16_MAX;
	static int8_t x340 = INT8_MAX;
	int64_t t84 = -157667966706516323LL;

	t84 = (((x337|x338)&x339)^x340);

	if (t84 != 32640LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 107U;
	volatile int32_t t85 = -65065598;

	t85 = (((x341|x342)&x343)^x344);

	if (t85 != 619) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -1;
	volatile int16_t x346 = 988;
	uint16_t x347 = 20U;
	volatile uint8_t x348 = 26U;
	volatile int32_t t86 = 95333;

	t86 = (((x345|x346)&x347)^x348);

	if (t86 != 14) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint64_t x350 = UINT64_MAX;
	uint8_t x352 = UINT8_MAX;

	t87 = (((x349|x350)&x351)^x352);

	if (t87 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	volatile uint8_t x354 = 0U;
	volatile int64_t t88 = 2224469344626546683LL;

	t88 = (((x353|x354)&x355)^x356);

	if (t88 != -238842183840LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int64_t t89 = 3LL;

	t89 = (((x357|x358)&x359)^x360);

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	int32_t t90 = 184634;

	t90 = (((x361|x362)&x363)^x364);

	if (t90 != -185) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = 3;
	int64_t x366 = INT64_MAX;
	int16_t x368 = -1;
	volatile int64_t t91 = 7LL;

	t91 = (((x365|x366)&x367)^x368);

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = 16879803LLU;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	static uint64_t t92 = 421594156830LLU;

	t92 = (((x369|x370)&x371)^x372);

	if (t92 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 1360U;
	uint8_t x375 = UINT8_MAX;
	static int32_t x376 = -1;
	static int32_t t93 = -3190;

	t93 = (((x373|x374)&x375)^x376);

	if (t93 != -81) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 1LL;
	static int32_t x378 = 0;
	int32_t x379 = 18587;
	static int8_t x380 = -1;
	volatile int64_t t94 = 1815LL;

	t94 = (((x377|x378)&x379)^x380);

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint32_t x384 = UINT32_MAX;

	t95 = (((x381|x382)&x383)^x384);

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 168785U;
	uint64_t x387 = 16082018LLU;
	volatile uint64_t t96 = 735462620123LLU;

	t96 = (((x385|x386)&x387)^x388);

	if (t96 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 62;
	int8_t x390 = INT8_MIN;
	static uint32_t x391 = 20761U;
	static volatile int64_t x392 = INT64_MIN;
	int64_t t97 = -321443152889LL;

	t97 = (((x389|x390)&x391)^x392);

	if (t97 != -9223372036854755048LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x394 = INT8_MIN;
	static int32_t x395 = INT32_MIN;
	static uint32_t x396 = 384434U;
	static uint32_t t98 = 158369U;

	t98 = (((x393|x394)&x395)^x396);

	if (t98 != 2147868082U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = -20;
	volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = 961;

	t99 = (((x397|x398)&x399)^x400);

	if (t99 != -2147450900) { NG(); } else { ; }
	
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

