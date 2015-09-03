#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
volatile uint16_t x9 = 11U;
volatile int32_t t5 = 2524633;
int32_t x30 = INT32_MIN;
volatile int64_t x31 = INT64_MIN;
uint64_t t7 = 30931998LLU;
static uint8_t x38 = 17U;
int64_t x46 = INT64_MAX;
volatile int8_t x51 = -16;
uint16_t x54 = UINT16_MAX;
int32_t t13 = -221337;
uint64_t x63 = 25775LLU;
volatile uint64_t t15 = 1923167LLU;
static volatile uint16_t x65 = UINT16_MAX;
uint32_t x68 = 294U;
int32_t x80 = 1733;
int64_t t19 = -1128532228777LL;
int64_t x81 = INT64_MAX;
volatile uint64_t x82 = 28107837562274LLU;
volatile uint64_t t22 = 48853068234LLU;
int8_t x93 = 1;
volatile uint16_t x101 = 258U;
volatile uint64_t x103 = 1629941225349LLU;
uint8_t x104 = 57U;
int8_t x107 = -4;
int8_t x108 = INT8_MAX;
int8_t x112 = 1;
volatile int32_t t27 = 79;
uint32_t x113 = 0U;
uint32_t x114 = 56881U;
uint16_t x127 = UINT16_MAX;
volatile int16_t x132 = 0;
volatile int32_t t31 = 823;
int64_t x140 = INT64_MAX;
int32_t x141 = -242837711;
volatile int64_t x142 = 7804667096578LL;
int64_t x145 = -3656166723LL;
int64_t x146 = INT64_MAX;
static uint32_t x152 = UINT32_MAX;
volatile uint32_t t37 = 177U;
int64_t x157 = -1LL;
static uint32_t x159 = 23958177U;
uint32_t x160 = UINT32_MAX;
uint32_t t41 = 3U;
volatile int64_t x173 = INT64_MIN;
int32_t x174 = INT32_MAX;
int32_t t42 = -18;
volatile int8_t x178 = INT8_MIN;
int16_t x195 = -3779;
volatile uint8_t x196 = UINT8_MAX;
int32_t t47 = -28557993;
int16_t x197 = -1;
int16_t x205 = -1;
int16_t x206 = 1;
volatile int32_t x207 = -1;
int16_t x211 = INT16_MAX;
volatile int32_t t51 = 0;
int64_t x226 = INT64_MIN;
int16_t x243 = -1;
static int64_t x245 = -1LL;
static uint8_t x248 = UINT8_MAX;
int8_t x250 = INT8_MIN;
int32_t t61 = 85859;
uint32_t x254 = 37901589U;
int64_t x255 = INT64_MIN;
int32_t x258 = -31832118;
int8_t x262 = INT8_MAX;
int8_t x263 = -1;
volatile int32_t t64 = -2;
int32_t x275 = -8;
int32_t x277 = INT32_MIN;
volatile int64_t x278 = INT64_MIN;
int32_t x285 = 3118029;
volatile uint64_t t70 = 62LLU;
volatile uint32_t t71 = 8U;
static int64_t x293 = INT64_MIN;
int64_t x294 = -508351615881857LL;
int64_t t73 = 1043519874LL;
int8_t x301 = -3;
volatile int32_t t75 = 18;
volatile int16_t x316 = INT16_MIN;
uint64_t x320 = UINT64_MAX;
int64_t x324 = -1313227506051192269LL;
volatile int32_t x331 = INT32_MIN;
int64_t t81 = -11064005LL;
int8_t x334 = INT8_MIN;
static volatile uint16_t x338 = UINT16_MAX;
volatile uint16_t x339 = UINT16_MAX;
int64_t x340 = -19502973756856811LL;
volatile uint16_t x342 = 0U;
static volatile int32_t t85 = -19318922;
static int16_t x351 = INT16_MIN;
uint8_t x352 = 20U;
int64_t t88 = 90936370748282573LL;
uint32_t t89 = 372110U;
volatile int32_t t92 = -17116616;
int64_t t94 = -194LL;
static uint16_t x386 = UINT16_MAX;
volatile int32_t x393 = 321115719;
int64_t x394 = -24871370464087661LL;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	static uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;
	static int32_t t0 = -1191;

	t0 = ((x1==x2)-(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 3;
	int16_t x6 = INT16_MAX;
	int8_t x7 = -1;
	int8_t x8 = -7;
	static int32_t t1 = -930298;

	t1 = ((x5==x6)-(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = -1;
	uint8_t x12 = 93U;
	static volatile int32_t t2 = -4850;

	t2 = ((x9==x10)-(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int32_t x15 = 1631;
	static int8_t x16 = -1;
	int32_t t3 = -17;

	t3 = ((x13==x14)-(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int32_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -69015630924595908LL;

	t4 = ((x17==x18)-(x19|x20));

	if (t4 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 19;
	int64_t x22 = INT64_MAX;
	int32_t x23 = -1;
	uint16_t x24 = 18183U;

	t5 = ((x21==x22)-(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = 3849216751828LLU;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 1923506767324LLU;

	t6 = ((x25==x26)-(x27|x28));

	if (t6 != 44LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = 16261748941LL;
	uint64_t x32 = 2376416LLU;

	t7 = ((x29==x30)-(x31|x32));

	if (t7 != 9223372036852399392LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	static int16_t x35 = INT16_MIN;
	int32_t x36 = 1;
	volatile int32_t t8 = 55123912;

	t8 = ((x33==x34)-(x35|x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 0U;
	static int32_t x39 = INT32_MIN;
	uint16_t x40 = 7U;
	volatile int32_t t9 = 6637704;

	t9 = ((x37==x38)-(x39|x40));

	if (t9 != 2147483641) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	volatile uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 1U;
	int32_t x44 = -1;
	uint32_t t10 = 1U;

	t10 = ((x41==x42)-(x43|x44));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -14940222;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -134728430;

	t11 = ((x45==x46)-(x47|x48));

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 103U;
	int8_t x50 = INT8_MIN;
	int64_t x52 = 12932726276821351LL;
	int64_t t12 = 1438380615449740LL;

	t12 = ((x49==x50)-(x51|x52));

	if (t12 != 9LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	uint8_t x55 = 5U;
	int16_t x56 = INT16_MIN;

	t13 = ((x53==x54)-(x55|x56));

	if (t13 != 32763) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static volatile int8_t x58 = -10;
	int64_t x59 = -1LL;
	volatile uint16_t x60 = UINT16_MAX;
	static volatile int64_t t14 = 17891398994LL;

	t14 = ((x57==x58)-(x59|x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -418048430845LL;
	uint64_t x62 = 47LLU;
	static int8_t x64 = 31;

	t15 = ((x61==x62)-(x63|x64));

	if (t15 != 18446744073709525825LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 0U;
	uint32_t t16 = 1933466302U;

	t16 = ((x65==x66)-(x67|x68));

	if (t16 != 4294967002U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = -867872;

	t17 = ((x69==x70)-(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 242LLU;
	volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	uint16_t x76 = 1994U;
	volatile int64_t t18 = 5133LL;

	t18 = ((x73==x74)-(x75|x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 1U;
	uint8_t x78 = 0U;
	int64_t x79 = INT64_MIN;

	t19 = ((x77==x78)-(x79|x80));

	if (t19 != 9223372036854774075LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x83 = 7;
	static int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 1627976378287198200LL;

	t20 = ((x81==x82)-(x83|x84));

	if (t20 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int64_t x86 = 34763326399229051LL;
	static int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -21887;

	t21 = ((x85==x86)-(x87|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = -1LL;
	volatile uint64_t x92 = UINT64_MAX;

	t22 = ((x89==x90)-(x91|x92));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 2694;
	volatile int32_t x95 = -1;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -563767850;

	t23 = ((x93==x94)-(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 22;
	static int16_t x98 = INT16_MIN;
	int8_t x99 = -32;
	int64_t x100 = -1LL;
	volatile int64_t t24 = 45994047100LL;

	t24 = ((x97==x98)-(x99|x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = UINT32_MAX;
	uint64_t t25 = 0LLU;

	t25 = ((x101==x102)-(x103|x104));

	if (t25 != 18446742443768326211LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -1;
	static volatile int64_t x106 = INT64_MIN;
	static volatile int32_t t26 = -116;

	t26 = ((x105==x106)-(x107|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = -1;
	int8_t x111 = INT8_MIN;

	t27 = ((x109==x110)-(x111|x112));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 82;

	t28 = ((x113==x114)-(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 4482LL;
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	static uint64_t x120 = 8090820935484881LLU;
	volatile uint64_t t29 = 28LLU;

	t29 = ((x117==x118)-(x119|x120));

	if (t29 != 9215281215919290927LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -891LL;
	int32_t x126 = 0;
	static int64_t x128 = -1LL;
	int64_t t30 = 11142684909506LL;

	t30 = ((x125==x126)-(x127|x128));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = 13689U;
	volatile int16_t x131 = -1;

	t31 = ((x129==x130)-(x131|x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 1096527695LLU;
	volatile int32_t x134 = INT32_MAX;
	uint32_t x135 = 416243589U;
	int16_t x136 = 0;
	volatile uint32_t t32 = 10U;

	t32 = ((x133==x134)-(x135|x136));

	if (t32 != 3878723707U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MIN;
	static volatile int64_t t33 = 3LL;

	t33 = ((x137==x138)-(x139|x140));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x143 = 6U;
	int32_t x144 = INT32_MAX;
	int32_t t34 = 424185264;

	t34 = ((x141==x142)-(x143|x144));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x147 = 11U;
	uint32_t x148 = 1U;
	static volatile uint32_t t35 = 1112U;

	t35 = ((x145==x146)-(x147|x148));

	if (t35 != 4294967285U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x149 = 3U;
	static uint8_t x150 = 23U;
	int16_t x151 = 10;
	volatile uint32_t t36 = 2U;

	t36 = ((x149==x150)-(x151|x152));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	static volatile int16_t x154 = -1;
	uint32_t x155 = 85910298U;
	volatile uint16_t x156 = UINT16_MAX;

	t37 = ((x153==x154)-(x155|x156));

	if (t37 != 4209049601U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x158 = 600;
	volatile uint32_t t38 = 2055228U;

	t38 = ((x157==x158)-(x159|x160));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static int16_t x162 = INT16_MIN;
	volatile uint8_t x163 = 14U;
	static volatile int32_t x164 = INT32_MAX;
	static volatile int32_t t39 = -2;

	t39 = ((x161==x162)-(x163|x164));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -231660422143LL;
	int32_t x166 = -1;
	uint64_t x167 = 3426440LLU;
	int8_t x168 = -1;
	volatile uint64_t t40 = 12757424LLU;

	t40 = ((x165==x166)-(x167|x168));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	static int32_t x170 = INT32_MIN;
	int16_t x171 = 37;
	uint32_t x172 = 22U;

	t41 = ((x169==x170)-(x171|x172));

	if (t41 != 4294967241U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x175 = INT32_MIN;
	int8_t x176 = -52;

	t42 = ((x173==x174)-(x175|x176));

	if (t42 != 52) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint32_t x179 = 16187U;
	int32_t x180 = 122437;
	uint32_t t43 = 107043U;

	t43 = ((x177==x178)-(x179|x180));

	if (t43 != 4294836353U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 5U;
	volatile int64_t x184 = -1LL;
	static volatile int64_t t44 = -26059222882360LL;

	t44 = ((x181==x182)-(x183|x184));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 30;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	int8_t x188 = -1;
	volatile int32_t t45 = 101720;

	t45 = ((x185==x186)-(x187|x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = 28;
	static uint32_t x190 = UINT32_MAX;
	int64_t x191 = -1LL;
	int32_t x192 = -1;
	int64_t t46 = -918478283230198LL;

	t46 = ((x189==x190)-(x191|x192));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = 0;
	uint32_t x194 = 922143744U;

	t47 = ((x193==x194)-(x195|x196));

	if (t47 != 3585) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x198 = 1U;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = -1;
	volatile int32_t t48 = 126529;

	t48 = ((x197==x198)-(x199|x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -33132624318LL;
	static int32_t x202 = -20;
	volatile int32_t x203 = -1;
	int32_t x204 = INT32_MAX;
	volatile int32_t t49 = 90536;

	t49 = ((x201==x202)-(x203|x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x208 = 15764136759351LL;
	int64_t t50 = 6187LL;

	t50 = ((x205==x206)-(x207|x208));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 1043;
	static volatile int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;

	t51 = ((x209==x210)-(x211|x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -2;
	int16_t x214 = -7;
	static int16_t x215 = -1;
	volatile int64_t x216 = -1LL;
	volatile int64_t t52 = 1LL;

	t52 = ((x213==x214)-(x215|x216));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	uint32_t x218 = 41U;
	static int16_t x219 = 3;
	uint16_t x220 = UINT16_MAX;
	int32_t t53 = 1966;

	t53 = ((x217==x218)-(x219|x220));

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -16613473;
	static int32_t x224 = 1056475066;
	int32_t t54 = 3;

	t54 = ((x221==x222)-(x223|x224));

	if (t54 != 327746) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	static int16_t x227 = INT16_MIN;
	uint64_t x228 = 88LLU;
	volatile uint64_t t55 = 86314137329979181LLU;

	t55 = ((x225==x226)-(x227|x228));

	if (t55 != 32680LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int64_t x230 = 97341410509221561LL;
	uint16_t x231 = 10U;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t56 = 1833095;

	t56 = ((x229==x230)-(x231|x232));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	volatile int16_t x234 = -6801;
	volatile uint64_t x235 = 341428517486LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t57 = 467974729824091491LLU;

	t57 = ((x233==x234)-(x235|x236));

	if (t57 != 21382546LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -244;
	int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	int32_t t58 = 46762703;

	t58 = ((x237==x238)-(x239|x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MIN;
	volatile uint16_t x242 = 3557U;
	static int8_t x244 = -1;
	int32_t t59 = 35443;

	t59 = ((x241==x242)-(x243|x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x246 = 1U;
	int8_t x247 = 2;
	volatile int32_t t60 = -150;

	t60 = ((x245==x246)-(x247|x248));

	if (t60 != -255) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = INT16_MAX;
	static int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MIN;

	t61 = ((x249==x250)-(x251|x252));

	if (t61 != 2147450881) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	int32_t x256 = INT32_MIN;
	int64_t t62 = -1LL;

	t62 = ((x253==x254)-(x255|x256));

	if (t62 != 2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	static volatile int16_t x259 = -1;
	int16_t x260 = -1454;
	int32_t t63 = 793175;

	t63 = ((x257==x258)-(x259|x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = 6581;
	volatile int32_t x264 = -1;

	t64 = ((x261==x262)-(x263|x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -1;
	static int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	static uint32_t t65 = 2137133U;

	t65 = ((x265==x266)-(x267|x268));

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = UINT32_MAX;
	uint8_t x270 = 98U;
	int8_t x271 = -29;
	static volatile uint8_t x272 = UINT8_MAX;
	static volatile int32_t t66 = -1261893;

	t66 = ((x269==x270)-(x271|x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 31;
	int32_t x274 = INT32_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t67 = 209618726;

	t67 = ((x273==x274)-(x275|x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t68 = 87;

	t68 = ((x277==x278)-(x279|x280));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = 82U;
	uint16_t x282 = 1U;
	int64_t x283 = 1711413LL;
	static uint8_t x284 = 120U;
	volatile int64_t t69 = 90293140670LL;

	t69 = ((x281==x282)-(x283|x284));

	if (t69 != -1711485LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x286 = -31494;
	uint16_t x287 = 215U;
	uint64_t x288 = UINT64_MAX;

	t70 = ((x285==x286)-(x287|x288));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -9872684LL;
	int16_t x290 = 2;
	int8_t x291 = -11;
	volatile uint32_t x292 = UINT32_MAX;

	t71 = ((x289==x290)-(x291|x292));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x295 = 1U;
	volatile int8_t x296 = -1;
	volatile int32_t t72 = 61167;

	t72 = ((x293==x294)-(x295|x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 9149U;
	volatile int16_t x298 = 4111;
	int64_t x299 = -1LL;
	static uint32_t x300 = UINT32_MAX;

	t73 = ((x297==x298)-(x299|x300));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x302 = 119U;
	uint64_t x303 = 0LLU;
	volatile int8_t x304 = 3;
	static uint64_t t74 = 5LLU;

	t74 = ((x301==x302)-(x303|x304));

	if (t74 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = 12;
	int32_t x306 = -1;
	int32_t x307 = INT32_MIN;
	int32_t x308 = -1;

	t75 = ((x305==x306)-(x307|x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x309 = 14U;
	static uint16_t x310 = UINT16_MAX;
	volatile uint64_t x311 = 184151681987923259LLU;
	uint32_t x312 = 13860563U;
	volatile uint64_t t76 = 24347812429445852LLU;

	t76 = ((x309==x310)-(x311|x312));

	if (t76 != 18262592391716306949LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x313 = 1;
	int16_t x314 = INT16_MAX;
	static volatile uint16_t x315 = 3U;
	volatile int32_t t77 = 2077120;

	t77 = ((x313==x314)-(x315|x316));

	if (t77 != 32765) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = 1183U;
	uint64_t t78 = 362LLU;

	t78 = ((x317==x318)-(x319|x320));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = -5093550422053272LL;
	int64_t x322 = 1973478472991LL;
	int32_t x323 = INT32_MIN;
	int64_t t79 = 508249LL;

	t79 = ((x321==x322)-(x323|x324));

	if (t79 != 2138314189LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MAX;
	int16_t x326 = 1;
	int16_t x327 = -72;
	uint16_t x328 = 692U;
	static int32_t t80 = -11740589;

	t80 = ((x325==x326)-(x327|x328));

	if (t80 != 68) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = -1;
	int8_t x330 = -1;
	volatile int64_t x332 = INT64_MAX;

	t81 = ((x329==x330)-(x331|x332));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = INT16_MIN;
	int32_t x335 = -32451023;
	int8_t x336 = INT8_MIN;
	volatile int32_t t82 = -59593;

	t82 = ((x333==x334)-(x335|x336));

	if (t82 != 79) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MAX;
	volatile int64_t t83 = 738980165LL;

	t83 = ((x337==x338)-(x339|x340));

	if (t83 != 19502973756833793LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x341 = INT64_MIN;
	volatile int32_t x343 = INT32_MIN;
	static int16_t x344 = 1817;
	int32_t t84 = 814186;

	t84 = ((x341==x342)-(x343|x344));

	if (t84 != 2147481831) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	uint16_t x346 = 4673U;
	static int32_t x347 = INT32_MAX;
	int8_t x348 = -1;

	t85 = ((x345==x346)-(x347|x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -39094528577LL;
	int32_t x350 = INT32_MIN;
	int32_t t86 = -516296;

	t86 = ((x349==x350)-(x351|x352));

	if (t86 != 32748) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = -1464;
	int8_t x354 = 1;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	int32_t t87 = 2089071;

	t87 = ((x353==x354)-(x355|x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	volatile uint32_t x358 = 324115146U;
	static int8_t x359 = -41;
	volatile int64_t x360 = INT64_MIN;

	t88 = ((x357==x358)-(x359|x360));

	if (t88 != 41LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MAX;
	uint32_t x363 = 1246161961U;
	static int16_t x364 = INT16_MAX;

	t89 = ((x361==x362)-(x363|x364));

	if (t89 != 3048800257U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x365 = 0;
	uint16_t x366 = 724U;
	static volatile uint16_t x367 = 2006U;
	static int64_t x368 = INT64_MAX;
	static int64_t t90 = 2101867305668644565LL;

	t90 = ((x365==x366)-(x367|x368));

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -43;
	static uint64_t x370 = 1LLU;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t91 = -129142776216671153LL;

	t91 = ((x369==x370)-(x371|x372));

	if (t91 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	volatile uint8_t x374 = 33U;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = -40544;

	t92 = ((x373==x374)-(x375|x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = -14;
	uint16_t x378 = 2942U;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 22232309LLU;
	uint64_t t93 = 1542528661058807965LLU;

	t93 = ((x377==x378)-(x379|x380));

	if (t93 != 2125251339LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -2;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = 47;
	int64_t x384 = -1LL;

	t94 = ((x381==x382)-(x383|x384));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = INT32_MAX;
	uint8_t x387 = UINT8_MAX;
	static int64_t x388 = -1LL;
	int64_t t95 = 11767LL;

	t95 = ((x385==x386)-(x387|x388));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x389 = 0U;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 63312U;
	uint8_t x392 = UINT8_MAX;
	uint32_t t96 = 0U;

	t96 = ((x389==x390)-(x391|x392));

	if (t96 != 4294903809U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x395 = INT16_MAX;
	int32_t x396 = -346856555;
	int32_t t97 = 1;

	t97 = ((x393==x394)-(x395|x396));

	if (t97 != 346849281) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = -1;
	int8_t x398 = 3;
	int8_t x399 = 0;
	int8_t x400 = -1;
	volatile int32_t t98 = -459536827;

	t98 = ((x397==x398)-(x399|x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = 20;
	volatile uint64_t x402 = 110164795725LLU;
	uint64_t x403 = 52873194436369LLU;
	int64_t x404 = INT64_MAX;
	uint64_t t99 = 241542367876465LLU;

	t99 = ((x401==x402)-(x403|x404));

	if (t99 != 9223372036854775809LLU) { NG(); } else { ; }
	
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

