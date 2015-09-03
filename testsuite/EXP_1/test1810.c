#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int16_t x7 = INT16_MIN;
uint32_t x13 = UINT32_MAX;
uint8_t x20 = 30U;
int64_t x22 = INT64_MAX;
static int64_t t5 = -3LL;
int64_t x32 = 0LL;
int32_t x41 = INT32_MIN;
int32_t x42 = -26371707;
volatile int8_t x47 = INT8_MAX;
volatile int32_t t14 = -196513210;
int64_t x66 = 58455260911LL;
static int32_t x67 = INT32_MAX;
static volatile int32_t t16 = 4172645;
static uint32_t x72 = 97U;
static volatile int16_t x82 = INT16_MIN;
int32_t t20 = -45794;
uint64_t x85 = 34082LLU;
uint16_t x91 = 210U;
uint64_t x99 = UINT64_MAX;
int64_t t24 = INT64_MIN;
static int16_t x101 = INT16_MIN;
volatile uint64_t x102 = 484LLU;
uint16_t x115 = 440U;
int32_t t28 = 0;
int64_t x123 = INT64_MIN;
static uint64_t t31 = 86463850275LLU;
static int16_t x134 = -1793;
int16_t x142 = -49;
static uint64_t t36 = 33784LLU;
volatile int8_t x155 = INT8_MIN;
static int16_t x160 = -1;
uint8_t x164 = 77U;
int32_t t41 = 41020159;
int32_t x170 = -2;
int64_t x171 = -1LL;
uint8_t x178 = UINT8_MAX;
int64_t x182 = INT64_MIN;
int8_t x183 = -1;
int32_t t45 = 8784072;
volatile int32_t x188 = INT32_MIN;
volatile int8_t x189 = INT8_MIN;
int32_t x190 = -1;
uint64_t x192 = 56642757386LLU;
int32_t t48 = -445679976;
int32_t t49 = 510290;
uint64_t x215 = UINT64_MAX;
int16_t x216 = -1;
int16_t x219 = INT16_MAX;
static uint64_t x223 = 310LLU;
int16_t x231 = INT16_MAX;
int64_t x233 = -1964719028418427LL;
volatile int32_t x239 = INT32_MAX;
uint64_t x242 = 2415LLU;
uint16_t x248 = 6U;
int32_t x257 = INT32_MIN;
int64_t t64 = INT64_MAX;
int32_t x261 = INT32_MIN;
static int32_t t65 = -248;
int32_t x266 = -1;
static volatile int8_t x272 = -1;
uint64_t x276 = UINT64_MAX;
static int8_t x278 = -4;
volatile int64_t t70 = -4382LL;
uint8_t x292 = UINT8_MAX;
int16_t x299 = INT16_MIN;
uint32_t x310 = UINT32_MAX;
int16_t x313 = INT16_MIN;
uint32_t x315 = UINT32_MAX;
static int16_t x318 = INT16_MAX;
int32_t x324 = INT32_MAX;
volatile int32_t x325 = INT32_MIN;
static int16_t x329 = INT16_MIN;
uint16_t x332 = UINT16_MAX;
static volatile int8_t x333 = INT8_MAX;
int32_t x334 = INT32_MIN;
int32_t t83 = -4;
static uint64_t x339 = UINT64_MAX;
uint64_t x340 = 118373991405087LLU;
static volatile uint8_t x341 = 1U;
uint32_t x352 = 128440U;
static uint32_t x356 = 29U;
volatile uint32_t t88 = 25U;
volatile uint64_t x358 = UINT64_MAX;
volatile int8_t x360 = INT8_MIN;
static uint32_t x369 = UINT32_MAX;
volatile uint32_t t92 = 11U;
static int64_t t94 = -1LL;
static int8_t x381 = INT8_MAX;
volatile int8_t x385 = 14;
uint8_t x388 = 1U;
uint64_t x391 = 6LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x3 = 631U;
	int32_t x4 = -1;
	int32_t t0 = -10560;

	t0 = (((x1&x2)<=x3)*x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = INT8_MAX;
	int32_t x8 = -120;
	int32_t t1 = 1;

	t1 = (((x5&x6)<=x7)*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile uint32_t x10 = 1U;
	static int32_t x11 = INT32_MIN;
	volatile int8_t x12 = INT8_MIN;
	int32_t t2 = -51340923;

	t2 = (((x9&x10)<=x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = -6;
	volatile int8_t x15 = INT8_MAX;
	volatile int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -1098;

	t3 = (((x13&x14)<=x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MAX;
	uint8_t x19 = 1U;
	static int32_t t4 = 3432;

	t4 = (((x17&x18)<=x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = 0;
	int64_t x23 = -1LL;
	int64_t x24 = -124724817394943878LL;

	t5 = (((x21&x22)<=x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	static volatile int32_t x27 = -1;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 142512757;

	t6 = (((x25&x26)<=x27)*x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = 38;
	int64_t t7 = 505068LL;

	t7 = (((x29&x30)<=x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = 24U;
	int8_t x36 = 0;
	int32_t t8 = -106985018;

	t8 = (((x33&x34)<=x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -5648;
	uint32_t x38 = 31U;
	int64_t x39 = -1LL;
	int16_t x40 = INT16_MAX;
	static int32_t t9 = -29700;

	t9 = (((x37&x38)<=x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = INT16_MAX;
	int32_t x44 = 513536977;
	int32_t t10 = 2;

	t10 = (((x41&x42)<=x43)*x44);

	if (t10 != 513536977) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	int16_t x46 = -291;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 3936197;

	t11 = (((x45&x46)<=x47)*x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 0U;
	uint8_t x50 = 51U;
	static volatile uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;
	int64_t t12 = 15595606717085853LL;

	t12 = (((x49&x50)<=x51)*x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint16_t x54 = 6U;
	uint16_t x55 = 4351U;
	volatile int64_t x56 = 2526868LL;
	volatile int64_t t13 = 35914453635843461LL;

	t13 = (((x53&x54)<=x55)*x56);

	if (t13 != 2526868LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 70000;
	static volatile uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MIN;
	static volatile uint8_t x60 = 25U;

	t14 = (((x57&x58)<=x59)*x60);

	if (t14 != 25) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 14U;
	uint8_t x62 = 94U;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = 192958787;
	int32_t t15 = 14490191;

	t15 = (((x61&x62)<=x63)*x64);

	if (t15 != 192958787) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -2207315;
	int8_t x68 = INT8_MAX;

	t16 = (((x65&x66)<=x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static uint16_t x70 = 3429U;
	int8_t x71 = 34;
	uint32_t t17 = 4576U;

	t17 = (((x69&x70)<=x71)*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 0U;
	volatile uint16_t x74 = 11U;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (((x73&x74)<=x75)*x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = 5;
	volatile uint8_t x79 = 2U;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t19 = UINT64_MAX;

	t19 = (((x77&x78)<=x79)*x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	static uint8_t x84 = 19U;

	t20 = (((x81&x82)<=x83)*x84);

	if (t20 != 19) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = -1;
	int8_t x88 = -1;
	static volatile int32_t t21 = -2;

	t21 = (((x85&x86)<=x87)*x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint64_t x90 = 479099478413064217LLU;
	int64_t x92 = 13168423176776443LL;
	int64_t t22 = 2177941LL;

	t22 = (((x89&x90)<=x91)*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 493U;
	volatile int8_t x95 = INT8_MIN;
	volatile int64_t x96 = INT64_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (((x93&x94)<=x95)*x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	int64_t x100 = INT64_MIN;

	t24 = (((x97&x98)<=x99)*x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x101&x102)<=x103)*x104);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	int8_t x106 = -1;
	int64_t x107 = -1LL;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = (((x105&x106)<=x107)*x108);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 11U;
	int32_t x110 = 407513;
	uint32_t x111 = 4232438U;
	uint8_t x112 = 0U;
	volatile int32_t t27 = -2325683;

	t27 = (((x109&x110)<=x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x114 = 30;
	uint8_t x116 = 2U;

	t28 = (((x113&x114)<=x115)*x116);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -1;
	static int8_t x118 = 0;
	volatile int32_t x119 = 726;
	int64_t x120 = INT64_MAX;
	static int64_t t29 = INT64_MAX;

	t29 = (((x117&x118)<=x119)*x120);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = -82;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -115;

	t30 = (((x121&x122)<=x123)*x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MIN;
	int64_t x126 = -2308345146596LL;
	uint8_t x127 = 27U;
	volatile uint64_t x128 = 166711049427241630LLU;

	t31 = (((x125&x126)<=x127)*x128);

	if (t31 != 166711049427241630LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	static uint8_t x130 = 20U;
	int8_t x131 = -7;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -728;

	t32 = (((x129&x130)<=x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 14307;
	uint16_t x135 = UINT16_MAX;
	static int16_t x136 = -1;
	volatile int32_t t33 = -127420;

	t33 = (((x133&x134)<=x135)*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	static int64_t x138 = -847708234556LL;
	static int16_t x139 = INT16_MIN;
	static int64_t x140 = 142LL;
	int64_t t34 = -2473LL;

	t34 = (((x137&x138)<=x139)*x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 4;
	int32_t x143 = -85682;
	int32_t x144 = -186;
	volatile int32_t t35 = -6788832;

	t35 = (((x141&x142)<=x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 161616846273LLU;
	int8_t x146 = INT8_MAX;
	static int8_t x147 = 6;
	uint64_t x148 = 12111271457LLU;

	t36 = (((x145&x146)<=x147)*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = (((x149&x150)<=x151)*x152);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 620;
	uint8_t x154 = 2U;
	volatile uint8_t x156 = 37U;
	volatile int32_t t38 = -11579;

	t38 = (((x153&x154)<=x155)*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -29;
	uint16_t x158 = 1652U;
	int8_t x159 = -1;
	int32_t t39 = 4647;

	t39 = (((x157&x158)<=x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = 62899646915LLU;
	volatile uint8_t x162 = 66U;
	int32_t x163 = -1;
	int32_t t40 = 1056706720;

	t40 = (((x161&x162)<=x163)*x164);

	if (t40 != 77) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	uint32_t x166 = 751565U;
	int16_t x167 = -13;
	volatile int16_t x168 = -1;

	t41 = (((x165&x166)<=x167)*x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 1;

	t42 = (((x169&x170)<=x171)*x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	volatile int32_t x174 = -1276842;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t43 = 3126U;

	t43 = (((x173&x174)<=x175)*x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	int16_t x180 = -1;
	volatile int32_t t44 = -12493;

	t44 = (((x177&x178)<=x179)*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	uint16_t x184 = 2529U;

	t45 = (((x181&x182)<=x183)*x184);

	if (t45 != 2529) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int16_t x186 = 7108;
	int32_t x187 = 2604;
	volatile int32_t t46 = INT32_MIN;

	t46 = (((x185&x186)<=x187)*x188);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = INT16_MIN;
	uint64_t t47 = 15864LLU;

	t47 = (((x189&x190)<=x191)*x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MAX;
	static volatile uint64_t x195 = 3902468245481565943LLU;
	int8_t x196 = 3;

	t48 = (((x193&x194)<=x195)*x196);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MAX;
	static int64_t x198 = 17517629993892LL;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;

	t49 = (((x197&x198)<=x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -971988386LL;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x203 = 11418LLU;
	int32_t x204 = -1;
	volatile int32_t t50 = 19;

	t50 = (((x201&x202)<=x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 1352LLU;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 3723798;

	t51 = (((x205&x206)<=x207)*x208);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 114336499903LL;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 3U;
	static uint8_t x212 = 64U;
	int32_t t52 = -12985710;

	t52 = (((x209&x210)<=x211)*x212);

	if (t52 != 64) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -4;
	uint8_t x214 = UINT8_MAX;
	static volatile int32_t t53 = -875;

	t53 = (((x213&x214)<=x215)*x216);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = 9484LL;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x217&x218)<=x219)*x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 61LLU;
	static int32_t x222 = INT32_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t55 = -102131861529LL;

	t55 = (((x221&x222)<=x223)*x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -138682;
	int64_t x226 = 7468129633LL;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = 28;
	volatile int32_t t56 = 1;

	t56 = (((x225&x226)<=x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 6757202;
	int32_t x230 = -1;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -13;

	t57 = (((x229&x230)<=x231)*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -956LL;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -893;

	t58 = (((x233&x234)<=x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	static uint16_t x238 = 38U;
	static volatile int64_t x240 = -8658157336897182LL;
	volatile int64_t t59 = -99649LL;

	t59 = (((x237&x238)<=x239)*x240);

	if (t59 != -8658157336897182LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x243 = 66681149519664437LLU;
	static volatile int8_t x244 = -1;
	int32_t t60 = -4;

	t60 = (((x241&x242)<=x243)*x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	volatile uint64_t x246 = UINT64_MAX;
	volatile uint16_t x247 = 111U;
	volatile int32_t t61 = -18985;

	t61 = (((x245&x246)<=x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 12747113300197265LLU;
	int8_t x251 = INT8_MAX;
	volatile int8_t x252 = 0;
	static int32_t t62 = -23294365;

	t62 = (((x249&x250)<=x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	static uint8_t x255 = 20U;
	static uint16_t x256 = 1930U;
	static int32_t t63 = -226;

	t63 = (((x253&x254)<=x255)*x256);

	if (t63 != 1930) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 79U;
	int64_t x260 = INT64_MAX;

	t64 = (((x257&x258)<=x259)*x260);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = 22U;
	uint32_t x263 = 105U;
	static int16_t x264 = -1;

	t65 = (((x261&x262)<=x263)*x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int16_t x267 = -7;
	int8_t x268 = -1;
	int32_t t66 = 47;

	t66 = (((x265&x266)<=x267)*x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MIN;
	static uint64_t x271 = 3090406920012LLU;
	volatile int32_t t67 = 44692335;

	t67 = (((x269&x270)<=x271)*x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 86227035365763540LLU;
	static int32_t x274 = INT32_MIN;
	uint8_t x275 = UINT8_MAX;
	uint64_t t68 = 3502681940937520LLU;

	t68 = (((x273&x274)<=x275)*x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 1839428488LLU;
	static uint8_t x279 = 16U;
	static int32_t x280 = -1;
	int32_t t69 = 13;

	t69 = (((x277&x278)<=x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MAX;
	int64_t x283 = 1854684994255315LL;
	volatile int64_t x284 = 115735LL;

	t70 = (((x281&x282)<=x283)*x284);

	if (t70 != 115735LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 177765LLU;
	static int16_t x286 = -1;
	int8_t x287 = INT8_MAX;
	int8_t x288 = -21;
	int32_t t71 = 1112;

	t71 = (((x285&x286)<=x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 21134419313425685LL;
	uint32_t x290 = 222381U;
	volatile int32_t x291 = 0;
	volatile int32_t t72 = 1188;

	t72 = (((x289&x290)<=x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile uint32_t x294 = 1551U;
	static uint32_t x295 = 2531654U;
	uint64_t x296 = 490LLU;
	volatile uint64_t t73 = 1031482001630LLU;

	t73 = (((x293&x294)<=x295)*x296);

	if (t73 != 490LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 1;
	int64_t x298 = -1LL;
	volatile uint64_t x300 = 349LLU;
	volatile uint64_t t74 = 3903LLU;

	t74 = (((x297&x298)<=x299)*x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -1;
	volatile uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = -1;
	volatile int32_t t75 = 16842033;

	t75 = (((x301&x302)<=x303)*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	static volatile uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	static int64_t x308 = 667LL;
	volatile int64_t t76 = -3755980435547636290LL;

	t76 = (((x305&x306)<=x307)*x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 17LL;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = 16315771323373906LL;

	t77 = (((x309&x310)<=x311)*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x314 = 0;
	static uint64_t x316 = 2747621442407LLU;
	volatile uint64_t t78 = 17511122LLU;

	t78 = (((x313&x314)<=x315)*x316);

	if (t78 != 2747621442407LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = -1;

	t79 = (((x317&x318)<=x319)*x320);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = INT32_MAX;
	int8_t x323 = -10;
	volatile int32_t t80 = INT32_MAX;

	t80 = (((x321&x322)<=x323)*x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	static uint32_t x327 = 1U;
	int16_t x328 = -3;
	int32_t t81 = 1;

	t81 = (((x325&x326)<=x327)*x328);

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -1LL;
	volatile int32_t t82 = 1387;

	t82 = (((x329&x330)<=x331)*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x335 = INT32_MIN;
	static int16_t x336 = 1159;

	t83 = (((x333&x334)<=x335)*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -3272292;
	uint32_t x338 = UINT32_MAX;
	uint64_t t84 = 4710252114998LLU;

	t84 = (((x337&x338)<=x339)*x340);

	if (t84 != 118373991405087LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = -70903124LL;
	int8_t x344 = INT8_MAX;
	static int32_t t85 = 7126982;

	t85 = (((x341&x342)<=x343)*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static volatile uint64_t x346 = UINT64_MAX;
	volatile uint64_t x347 = 3382996802LLU;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -985350948;

	t86 = (((x345&x346)<=x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	int16_t x350 = INT16_MAX;
	volatile int8_t x351 = INT8_MAX;
	uint32_t t87 = 30U;

	t87 = (((x349&x350)<=x351)*x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int16_t x355 = -1;

	t88 = (((x353&x354)<=x355)*x356);

	if (t88 != 29U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int8_t x359 = INT8_MIN;
	static volatile int32_t t89 = -2695;

	t89 = (((x357&x358)<=x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 15;
	static int64_t x362 = -1LL;
	int32_t x363 = -31977289;
	uint32_t x364 = 378U;
	static volatile uint32_t t90 = 5999458U;

	t90 = (((x361&x362)<=x363)*x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 254;
	volatile int16_t x366 = INT16_MIN;
	static int16_t x367 = INT16_MIN;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t91 = -1505;

	t91 = (((x365&x366)<=x367)*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -2;
	uint16_t x371 = 26440U;
	static volatile uint32_t x372 = 393982256U;

	t92 = (((x369&x370)<=x371)*x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 0;
	int8_t x374 = 1;
	int8_t x375 = 3;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 6788;

	t93 = (((x373&x374)<=x375)*x376);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -55;
	static uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 26787912LLU;
	int64_t x380 = -449991519782731LL;

	t94 = (((x377&x378)<=x379)*x380);

	if (t94 != -449991519782731LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x382 = UINT16_MAX;
	volatile int8_t x383 = -23;
	uint8_t x384 = UINT8_MAX;
	int32_t t95 = -28184;

	t95 = (((x381&x382)<=x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = UINT64_MAX;
	uint8_t x387 = 6U;
	int32_t t96 = 427286;

	t96 = (((x385&x386)<=x387)*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	static int8_t x390 = -1;
	volatile uint64_t x392 = 29274623LLU;
	uint64_t t97 = 4264110338LLU;

	t97 = (((x389&x390)<=x391)*x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 6U;
	uint64_t x394 = 497955273525LLU;
	volatile int8_t x395 = -1;
	volatile uint16_t x396 = 32184U;
	int32_t t98 = -20843187;

	t98 = (((x393&x394)<=x395)*x396);

	if (t98 != 32184) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 5U;
	static int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MIN;
	uint32_t x400 = 261U;
	volatile uint32_t t99 = 13U;

	t99 = (((x397&x398)<=x399)*x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

