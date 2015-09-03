#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 4454U;
static int64_t x7 = INT64_MAX;
int32_t x15 = -25;
uint16_t x24 = UINT16_MAX;
static volatile uint64_t t6 = 1060792887604563127LLU;
int8_t x36 = 1;
int8_t x41 = -34;
static int32_t x55 = INT32_MAX;
int64_t x62 = INT64_MIN;
static int8_t x66 = 0;
static volatile uint8_t x68 = UINT8_MAX;
int32_t x69 = INT32_MAX;
volatile int32_t t17 = -1725;
volatile int8_t x81 = INT8_MAX;
volatile int64_t t20 = 120478333821LL;
int32_t t21 = -43436563;
uint16_t x90 = 65U;
int16_t x97 = INT16_MAX;
int32_t x98 = -1;
int64_t x111 = INT64_MAX;
uint16_t x116 = 338U;
static uint8_t x119 = UINT8_MAX;
int64_t x122 = -1LL;
int32_t x124 = INT32_MAX;
volatile int64_t x126 = INT64_MIN;
int8_t x127 = INT8_MIN;
static uint64_t x131 = 1357961081538LLU;
int32_t x134 = INT32_MAX;
int64_t x136 = -139309802473992704LL;
static int8_t x137 = INT8_MIN;
volatile int32_t x139 = INT32_MAX;
int32_t t36 = -443818722;
static uint8_t x157 = 1U;
int32_t x158 = INT32_MAX;
uint32_t t39 = 6732U;
int32_t x163 = INT32_MAX;
int32_t t40 = 37579;
uint64_t x168 = UINT64_MAX;
static int64_t x170 = INT64_MAX;
int64_t x172 = INT64_MAX;
int64_t t42 = INT64_MAX;
static int32_t x177 = -53217;
int32_t t44 = -14221803;
int32_t x185 = INT32_MAX;
uint16_t x186 = UINT16_MAX;
uint64_t x192 = UINT64_MAX;
int64_t x195 = INT64_MAX;
int64_t x200 = -504086LL;
static int32_t x206 = -238015;
static uint8_t x213 = 0U;
uint16_t x215 = 1U;
uint16_t x217 = 0U;
static uint16_t x221 = 0U;
static volatile int16_t x222 = INT16_MIN;
static volatile uint8_t x238 = UINT8_MAX;
int32_t x244 = INT32_MIN;
int16_t x264 = INT16_MIN;
int8_t x266 = INT8_MIN;
int32_t x270 = -345;
int32_t t67 = 4846;
uint8_t x283 = 2U;
static volatile int64_t x284 = INT64_MIN;
int32_t x285 = INT32_MIN;
int32_t t71 = 9161771;
volatile int32_t t72 = -2104;
volatile int64_t t73 = 66946660439153LL;
int32_t x306 = -17375;
int32_t x308 = INT32_MAX;
int32_t t76 = INT32_MAX;
volatile int32_t x309 = 632;
int64_t x310 = INT64_MIN;
volatile int32_t t77 = 13477;
static int32_t t80 = INT32_MIN;
volatile uint16_t x325 = 13789U;
int32_t x333 = INT32_MIN;
int32_t x337 = INT32_MIN;
int8_t x342 = -1;
int16_t x346 = INT16_MAX;
static int32_t t87 = 1;
int16_t x353 = INT16_MIN;
volatile int16_t x355 = INT16_MAX;
volatile int32_t t88 = -12694;
volatile int32_t t90 = -4323359;
static volatile int32_t t91 = -8001;
volatile int64_t t94 = INT64_MAX;
int16_t x385 = 7;
int16_t x387 = -13094;
volatile int32_t x388 = -39;
static int64_t x390 = -427LL;
int32_t x392 = -1;
volatile int64_t t98 = -699742655LL;
static uint16_t x398 = UINT16_MAX;
static uint32_t x400 = 43125026U;


void f0(void) {
	volatile int32_t x1 = -13;
	volatile uint8_t x2 = 20U;
	uint32_t x3 = UINT32_MAX;
	uint32_t x4 = 13643U;

	t0 = (((x1==x2)<x3)^x4);

	if (t0 != 13642U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -45002156552LL;
	int8_t x6 = -1;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 26487865;

	t1 = (((x5==x6)<x7)^x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = -49132;

	t2 = (((x9==x10)<x11)^x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 23U;
	int32_t x14 = INT32_MIN;
	int32_t x16 = 9;
	volatile int32_t t3 = -951;

	t3 = (((x13==x14)<x15)^x16);

	if (t3 != 9) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x19 = -215LL;
	uint32_t x20 = 1467471U;
	uint32_t t4 = 40188U;

	t4 = (((x17==x18)<x19)^x20);

	if (t4 != 1467471U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint32_t x22 = 0U;
	int32_t x23 = INT32_MIN;
	int32_t t5 = -5;

	t5 = (((x21==x22)<x23)^x24);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 2;
	uint16_t x26 = 496U;
	static int32_t x27 = INT32_MIN;
	uint64_t x28 = 86761388LLU;

	t6 = (((x25==x26)<x27)^x28);

	if (t6 != 86761388LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	int64_t x30 = -219519279905982LL;
	static volatile int8_t x31 = INT8_MAX;
	volatile int16_t x32 = 175;
	int32_t t7 = 13;

	t7 = (((x29==x30)<x31)^x32);

	if (t7 != 174) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -1;
	int32_t t8 = 77;

	t8 = (((x33==x34)<x35)^x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 397487U;
	static int16_t x38 = INT16_MAX;
	int8_t x39 = INT8_MIN;
	volatile int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = INT32_MAX;

	t9 = (((x37==x38)<x39)^x40);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -1LL;
	uint16_t x43 = 491U;
	volatile int32_t x44 = 253;
	int32_t t10 = 98475;

	t10 = (((x41==x42)<x43)^x44);

	if (t10 != 252) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -20;
	volatile uint16_t x46 = 18149U;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;
	static volatile int64_t t11 = INT64_MAX;

	t11 = (((x45==x46)<x47)^x48);

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	volatile int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	static int32_t x52 = -822;
	static int32_t t12 = 61552;

	t12 = (((x49==x50)<x51)^x52);

	if (t12 != -821) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MIN;
	uint16_t x54 = 10039U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -4878014511368LL;

	t13 = (((x53==x54)<x55)^x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -951905908LL;
	volatile int8_t x58 = -32;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 16622466;

	t14 = (((x57==x58)<x59)^x60);

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int8_t x63 = INT8_MAX;
	volatile int8_t x64 = -1;
	volatile int32_t t15 = 787361;

	t15 = (((x61==x62)<x63)^x64);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 2886734575063LL;
	uint8_t x67 = 28U;
	int32_t t16 = 1;

	t16 = (((x65==x66)<x67)^x68);

	if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 0;
	int64_t x71 = 3298135LL;
	uint8_t x72 = 62U;

	t17 = (((x69==x70)<x71)^x72);

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	volatile int8_t x75 = -4;
	static int64_t x76 = 12159427303788LL;
	int64_t t18 = 4033392LL;

	t18 = (((x73==x74)<x75)^x76);

	if (t18 != 12159427303788LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	static volatile int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -40883973;

	t19 = (((x77==x78)<x79)^x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 236601;
	int16_t x83 = INT16_MAX;
	static int64_t x84 = INT64_MAX;

	t20 = (((x81==x82)<x83)^x84);

	if (t20 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	int16_t x88 = -1;

	t21 = (((x85==x86)<x87)^x88);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 770012850930359LLU;
	int32_t x91 = -11;
	uint32_t x92 = 24804518U;
	volatile uint32_t t22 = 1512305324U;

	t22 = (((x89==x90)<x91)^x92);

	if (t22 != 24804518U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = INT32_MIN;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -91;

	t23 = (((x93==x94)<x95)^x96);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 7669438662LLU;
	volatile int32_t x100 = INT32_MAX;
	int32_t t24 = 1850;

	t24 = (((x97==x98)<x99)^x100);

	if (t24 != 2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int8_t x102 = -4;
	int8_t x103 = INT8_MIN;
	static uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x101==x102)<x103)^x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 0U;
	int8_t x106 = INT8_MAX;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t x108 = INT32_MAX;
	static volatile int32_t t26 = -1439880;

	t26 = (((x105==x106)<x107)^x108);

	if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 13;

	t27 = (((x109==x110)<x111)^x112);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = 15U;
	int16_t x115 = INT16_MAX;
	volatile int32_t t28 = 93;

	t28 = (((x113==x114)<x115)^x116);

	if (t28 != 339) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	uint16_t x118 = 1U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 6U;

	t29 = (((x117==x118)<x119)^x120);

	if (t29 != 4294967294U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 534U;
	int16_t x123 = 345;
	int32_t t30 = 80636816;

	t30 = (((x121==x122)<x123)^x124);

	if (t30 != 2147483646) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 122352295;

	t31 = (((x125==x126)<x127)^x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int32_t x130 = INT32_MAX;
	static int16_t x132 = INT16_MAX;
	int32_t t32 = -22658;

	t32 = (((x129==x130)<x131)^x132);

	if (t32 != 32766) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MAX;
	volatile int64_t x135 = INT64_MIN;
	static int64_t t33 = 4943773LL;

	t33 = (((x133==x134)<x135)^x136);

	if (t33 != -139309802473992704LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 18LLU;
	volatile int16_t x140 = -1;
	int32_t t34 = 2;

	t34 = (((x137==x138)<x139)^x140);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int8_t x142 = 18;
	int32_t x143 = INT32_MAX;
	static volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -1;

	t35 = (((x141==x142)<x143)^x144);

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	static uint64_t x146 = 640107124LLU;
	int32_t x147 = INT32_MAX;
	volatile uint16_t x148 = 3244U;

	t36 = (((x145==x146)<x147)^x148);

	if (t36 != 3245) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 24U;
	volatile int16_t x150 = -1;
	static int8_t x151 = 11;
	int64_t x152 = INT64_MAX;
	static int64_t t37 = 338003324116LL;

	t37 = (((x149==x150)<x151)^x152);

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 1381U;
	int32_t x154 = INT32_MAX;
	int32_t x155 = 7321;
	uint64_t x156 = 15991LLU;
	uint64_t t38 = 114913LLU;

	t38 = (((x153==x154)<x155)^x156);

	if (t38 != 15990LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 4U;

	t39 = (((x157==x158)<x159)^x160);

	if (t39 != 4U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -43151679629LL;
	int64_t x162 = -1LL;
	static int8_t x164 = INT8_MIN;

	t40 = (((x161==x162)<x163)^x164);

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 69687617916327LLU;
	int64_t x166 = INT64_MAX;
	static volatile int32_t x167 = INT32_MAX;
	uint64_t t41 = 1005828LLU;

	t41 = (((x165==x166)<x167)^x168);

	if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	int16_t x171 = -1;

	t42 = (((x169==x170)<x171)^x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 36347;

	t43 = (((x173==x174)<x175)^x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x178 = -1;
	static uint16_t x179 = UINT16_MAX;
	int8_t x180 = 44;

	t44 = (((x177==x178)<x179)^x180);

	if (t44 != 45) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = 33634276431LL;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -58013670781037LL;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = 8115295;

	t45 = (((x181==x182)<x183)^x184);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x187 = -3784633612LL;
	static int32_t x188 = 1408;
	volatile int32_t t46 = -4994172;

	t46 = (((x185==x186)<x187)^x188);

	if (t46 != 1408) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static int8_t x190 = INT8_MIN;
	uint32_t x191 = 3U;
	volatile uint64_t t47 = 677231LLU;

	t47 = (((x189==x190)<x191)^x192);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	int16_t x194 = INT16_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = 1LL;

	t48 = (((x193==x194)<x195)^x196);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	uint32_t x198 = 4328U;
	int8_t x199 = INT8_MAX;
	int64_t t49 = -223525984LL;

	t49 = (((x197==x198)<x199)^x200);

	if (t49 != -504085LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	static int16_t x202 = INT16_MAX;
	static volatile int16_t x203 = 54;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -3502033;

	t50 = (((x201==x202)<x203)^x204);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 44895284U;
	int8_t x207 = -1;
	uint64_t x208 = 14LLU;
	volatile uint64_t t51 = 4189014084791747LLU;

	t51 = (((x205==x206)<x207)^x208);

	if (t51 != 14LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = 1;
	int64_t x210 = 3061033902LL;
	volatile uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 71;

	t52 = (((x209==x210)<x211)^x212);

	if (t52 != 126) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	uint32_t t53 = 79046U;

	t53 = (((x213==x214)<x215)^x216);

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	static int64_t x219 = -1LL;
	int64_t x220 = -93047LL;
	int64_t t54 = 102LL;

	t54 = (((x217==x218)<x219)^x220);

	if (t54 != -93047LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = -311014579LL;
	int64_t x224 = INT64_MIN;
	static int64_t t55 = INT64_MIN;

	t55 = (((x221==x222)<x223)^x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	volatile uint8_t x227 = 27U;
	volatile uint8_t x228 = 1U;
	volatile int32_t t56 = 3928942;

	t56 = (((x225==x226)<x227)^x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 721U;
	volatile uint64_t x231 = 1056921983LLU;
	int32_t x232 = INT32_MAX;
	static int32_t t57 = 35185;

	t57 = (((x229==x230)<x231)^x232);

	if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = 3;
	int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MAX;
	volatile int32_t t58 = -206480137;

	t58 = (((x233==x234)<x235)^x236);

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -49;
	int64_t x239 = -406215430LL;
	int64_t x240 = INT64_MAX;
	volatile int64_t t59 = INT64_MAX;

	t59 = (((x237==x238)<x239)^x240);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MIN;
	static int32_t t60 = INT32_MIN;

	t60 = (((x241==x242)<x243)^x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MAX;
	uint64_t x247 = 72049987261883LLU;
	volatile int16_t x248 = -1;
	static volatile int32_t t61 = -483290378;

	t61 = (((x245==x246)<x247)^x248);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 6312U;
	int16_t x250 = INT16_MIN;
	int16_t x251 = 12;
	int64_t x252 = INT64_MIN;
	static int64_t t62 = -2087636107842LL;

	t62 = (((x249==x250)<x251)^x252);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 57522LLU;
	int8_t x254 = 1;
	static volatile uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 7U;
	volatile int32_t t63 = -4580173;

	t63 = (((x253==x254)<x255)^x256);

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 7U;
	static volatile int32_t t64 = -875020085;

	t64 = (((x257==x258)<x259)^x260);

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 27;
	static volatile int8_t x262 = INT8_MIN;
	static volatile int8_t x263 = INT8_MIN;
	volatile int32_t t65 = -30962141;

	t65 = (((x261==x262)<x263)^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 9U;
	int32_t x267 = -2684529;
	uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x265==x266)<x267)^x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 7U;
	int64_t x271 = INT64_MAX;
	int16_t x272 = -1;

	t67 = (((x269==x270)<x271)^x272);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	uint16_t x274 = UINT16_MAX;
	static uint8_t x275 = UINT8_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 1224;

	t68 = (((x273==x274)<x275)^x276);

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	static int8_t x278 = -1;
	int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 20610170;

	t69 = (((x277==x278)<x279)^x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	int64_t t70 = 254791080LL;

	t70 = (((x281==x282)<x283)^x284);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x286 = UINT16_MAX;
	uint64_t x287 = UINT64_MAX;
	static volatile int32_t x288 = -1;

	t71 = (((x285==x286)<x287)^x288);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 106466U;
	static volatile uint8_t x291 = UINT8_MAX;
	volatile int16_t x292 = -1;

	t72 = (((x289==x290)<x291)^x292);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 13;
	int64_t x296 = INT64_MIN;

	t73 = (((x293==x294)<x295)^x296);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 4U;
	volatile uint32_t x298 = 75609590U;
	int32_t x299 = -1;
	uint8_t x300 = 1U;
	volatile int32_t t74 = -1;

	t74 = (((x297==x298)<x299)^x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 93253623LLU;
	static int8_t x302 = 5;
	volatile int16_t x303 = 7023;
	volatile int8_t x304 = INT8_MAX;
	int32_t t75 = -30259;

	t75 = (((x301==x302)<x303)^x304);

	if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 5166;
	int64_t x307 = INT64_MIN;

	t76 = (((x305==x306)<x307)^x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x311 = INT32_MIN;
	uint8_t x312 = 23U;

	t77 = (((x309==x310)<x311)^x312);

	if (t77 != 23) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	uint8_t x314 = 6U;
	int8_t x315 = 5;
	uint16_t x316 = UINT16_MAX;
	static int32_t t78 = 67107190;

	t78 = (((x313==x314)<x315)^x316);

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x317 = 0U;
	int32_t x318 = 5;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x317==x318)<x319)^x320);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = -1;
	int32_t x324 = INT32_MIN;

	t80 = (((x321==x322)<x323)^x324);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x326 = INT16_MAX;
	volatile uint32_t x327 = 717U;
	int16_t x328 = INT16_MIN;
	static int32_t t81 = -109;

	t81 = (((x325==x326)<x327)^x328);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = 3U;
	static int32_t x330 = INT32_MAX;
	static volatile int64_t x331 = -796229817594059LL;
	uint32_t x332 = 201U;
	uint32_t t82 = 8U;

	t82 = (((x329==x330)<x331)^x332);

	if (t82 != 201U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = -1;
	volatile int8_t x335 = -9;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 13;

	t83 = (((x333==x334)<x335)^x336);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	static volatile int32_t x339 = INT32_MAX;
	volatile uint8_t x340 = 1U;
	int32_t t84 = 402;

	t84 = (((x337==x338)<x339)^x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MIN;
	volatile int64_t t85 = -4118689420150LL;

	t85 = (((x341==x342)<x343)^x344);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 172;
	int16_t x347 = -1209;
	uint64_t x348 = 489060800974LLU;
	volatile uint64_t t86 = 525514422935073LLU;

	t86 = (((x345==x346)<x347)^x348);

	if (t86 != 489060800974LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	volatile int64_t x350 = INT64_MAX;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = -2;

	t87 = (((x349==x350)<x351)^x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	uint8_t x356 = 12U;

	t88 = (((x353==x354)<x355)^x356);

	if (t88 != 13) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MAX;
	static volatile int16_t x358 = INT16_MAX;
	uint64_t x359 = 3671319LLU;
	int8_t x360 = -1;
	int32_t t89 = 1;

	t89 = (((x357==x358)<x359)^x360);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	static volatile int64_t x363 = -1LL;
	uint8_t x364 = 12U;

	t90 = (((x361==x362)<x363)^x364);

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 2417805;
	uint64_t x366 = 147995LLU;
	int32_t x367 = INT32_MAX;
	int16_t x368 = INT16_MIN;

	t91 = (((x365==x366)<x367)^x368);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	volatile int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;
	static int64_t x372 = -1LL;
	volatile int64_t t92 = 1992077575LL;

	t92 = (((x369==x370)<x371)^x372);

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -15;
	int32_t x374 = -1;
	static uint64_t x375 = 30087LLU;
	volatile int32_t x376 = 0;
	int32_t t93 = 27;

	t93 = (((x373==x374)<x375)^x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 2;
	int64_t x378 = 71LL;
	volatile int8_t x379 = INT8_MIN;
	static int64_t x380 = INT64_MAX;

	t94 = (((x377==x378)<x379)^x380);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 11478637217582085LLU;
	static int32_t x382 = -1;
	uint16_t x383 = 3U;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t95 = 2371101413871034398LLU;

	t95 = (((x381==x382)<x383)^x384);

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MAX;
	int32_t t96 = 1010988480;

	t96 = (((x385==x386)<x387)^x388);

	if (t96 != -39) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 7;
	int8_t x391 = 1;
	static int32_t t97 = 8309258;

	t97 = (((x389==x390)<x391)^x392);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 266;
	int32_t x394 = 2030580;
	uint8_t x395 = 5U;
	volatile int64_t x396 = INT64_MIN;

	t98 = (((x393==x394)<x395)^x396);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint64_t x399 = 3850770738043LLU;
	static volatile uint32_t t99 = 104U;

	t99 = (((x397==x398)<x399)^x400);

	if (t99 != 43125027U) { NG(); } else { ; }
	
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

