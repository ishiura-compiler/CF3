#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 1;
static volatile uint32_t t2 = 11686U;
int32_t x14 = INT32_MAX;
static uint32_t x16 = 9222959U;
volatile int8_t x17 = 28;
int64_t x20 = -1LL;
volatile int64_t t4 = 1022994761704LL;
uint32_t x21 = UINT32_MAX;
volatile int8_t x26 = 0;
static int64_t x27 = INT64_MAX;
uint16_t x28 = 62U;
static volatile int8_t x29 = -18;
int64_t x32 = INT64_MIN;
int64_t t7 = 2231480119366360LL;
volatile int16_t x33 = 235;
volatile uint16_t x35 = UINT16_MAX;
uint16_t x37 = 6U;
int64_t x39 = -205682LL;
static int32_t x42 = INT32_MIN;
volatile uint64_t t10 = 11456LLU;
volatile uint32_t x46 = 208348124U;
int32_t x50 = 520269;
volatile int16_t x55 = INT16_MIN;
uint32_t x60 = 2738U;
int16_t x66 = INT16_MIN;
static volatile int16_t x67 = INT16_MIN;
int16_t x68 = 2089;
volatile int16_t x70 = INT16_MAX;
int32_t t17 = 1;
int16_t x74 = INT16_MIN;
static uint8_t x80 = 2U;
volatile int32_t t20 = 3901;
int16_t x87 = -1;
volatile uint64_t t21 = 89LLU;
static volatile uint16_t x99 = 120U;
uint64_t x123 = 628262773516196LLU;
uint64_t x139 = UINT64_MAX;
static int64_t x153 = -1LL;
uint32_t x155 = 218U;
int8_t x156 = -7;
volatile int64_t t38 = 26764527LL;
int64_t x161 = INT64_MIN;
uint64_t x169 = 7LLU;
int32_t x170 = INT32_MAX;
uint8_t x175 = UINT8_MAX;
int64_t t45 = -585738469241143LL;
uint64_t x189 = UINT64_MAX;
volatile int32_t t49 = 5785060;
int8_t x204 = -1;
volatile uint16_t x208 = 59U;
int8_t x219 = -1;
volatile int16_t x223 = -95;
int32_t x227 = INT32_MIN;
volatile int32_t t58 = 2;
int64_t x242 = INT64_MIN;
uint64_t t61 = 1324776883440894752LLU;
uint8_t x251 = 1U;
static volatile int32_t x254 = INT32_MAX;
uint32_t x256 = UINT32_MAX;
static int8_t x271 = INT8_MAX;
static volatile uint32_t x276 = UINT32_MAX;
static int64_t x282 = -1LL;
volatile uint8_t x284 = 26U;
int16_t x289 = -51;
int8_t x293 = -7;
int32_t t73 = 0;
static uint64_t x297 = 14444LLU;
volatile uint16_t x298 = 2460U;
static uint16_t x303 = 668U;
static uint8_t x305 = UINT8_MAX;
static int64_t x310 = INT64_MIN;
int64_t x316 = -1LL;
int8_t x322 = INT8_MIN;
static uint16_t x325 = 301U;
volatile int8_t x330 = -38;
volatile int32_t x332 = INT32_MIN;
volatile int8_t x347 = INT8_MIN;
int32_t x351 = 4553487;
uint8_t x355 = 37U;
int16_t x363 = INT16_MIN;
int16_t x368 = 258;
uint32_t x374 = 1U;
int8_t x375 = -57;
int64_t x376 = INT64_MAX;
volatile int64_t t95 = 123504532054029LL;
uint64_t x389 = 2994837667LLU;
int16_t x392 = INT16_MIN;
static int32_t x400 = INT32_MIN;
int32_t t99 = INT32_MIN;


void f0(void) {
	static uint32_t x1 = 1U;
	static volatile int64_t x2 = INT64_MIN;
	uint8_t x3 = 27U;
	volatile int8_t x4 = 0;
	uint32_t t0 = 5520891U;

	t0 = ((x1&(x2<x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int8_t x7 = -2;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 1586LL;

	t1 = ((x5&(x6<x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = UINT8_MAX;
	static int32_t x11 = INT32_MIN;
	static int32_t x12 = INT32_MIN;

	t2 = ((x9&(x10<x11))*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -281;
	static int8_t x15 = INT8_MAX;
	uint32_t t3 = 1594424615U;

	t3 = ((x13&(x14<x15))*x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	int16_t x19 = -1;

	t4 = ((x17&(x18<x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = 5U;
	static uint32_t t5 = 167417U;

	t5 = ((x21&(x22<x23))*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -6;
	int32_t t6 = -411973;

	t6 = ((x25&(x26<x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 2U;
	volatile int32_t x31 = 324290979;

	t7 = ((x29&(x30<x31))*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	static volatile int64_t x36 = -913276LL;
	volatile int64_t t8 = -2039126573068826941LL;

	t8 = ((x33&(x34<x35))*x36);

	if (t8 != -913276LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 266826586219LLU;

	t9 = ((x37&(x38<x39))*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x43 = -51;
	uint64_t x44 = UINT64_MAX;

	t10 = ((x41&(x42<x43))*x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile uint8_t x47 = 3U;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 32;

	t11 = ((x45&(x46<x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1934823715655091LLU;
	volatile int64_t x51 = INT64_MIN;
	int8_t x52 = -1;
	static uint64_t t12 = 1082860342665454601LLU;

	t12 = ((x49&(x50<x51))*x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int16_t x56 = 178;
	static volatile int32_t t13 = 465283;

	t13 = ((x53&(x54<x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 559U;
	uint16_t x58 = 161U;
	uint64_t x59 = UINT64_MAX;
	volatile uint32_t t14 = 390U;

	t14 = ((x57&(x58<x59))*x60);

	if (t14 != 2738U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 0U;
	static int8_t x63 = INT8_MAX;
	int16_t x64 = 5629;
	static volatile int32_t t15 = -9;

	t15 = ((x61&(x62<x63))*x64);

	if (t15 != 5629) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static int32_t t16 = -263;

	t16 = ((x65&(x66<x67))*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	static int16_t x71 = INT16_MIN;
	volatile int16_t x72 = INT16_MIN;

	t17 = ((x69&(x70<x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 291642345494LL;
	int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	static volatile int64_t t18 = -82902LL;

	t18 = ((x73&(x74<x75))*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int64_t x78 = INT64_MIN;
	static uint32_t x79 = 873044916U;
	int32_t t19 = -115246816;

	t19 = ((x77&(x78<x79))*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 26;
	int8_t x82 = 3;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MAX;

	t20 = ((x81&(x82<x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 7525849355509487733LLU;
	volatile int64_t x86 = INT64_MAX;
	int64_t x88 = INT64_MIN;

	t21 = ((x85&(x86<x87))*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = INT64_MAX;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = -526845;

	t22 = ((x89&(x90<x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -29971LL;
	int64_t x94 = 4LL;
	volatile int16_t x95 = -1;
	uint8_t x96 = 2U;
	volatile int64_t t23 = -29633LL;

	t23 = ((x93&(x94<x95))*x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = ((x97&(x98<x99))*x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 26585U;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = 5715519345LL;
	volatile int64_t t25 = -2LL;

	t25 = ((x101&(x102<x103))*x104);

	if (t25 != 5715519345LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	int16_t x106 = -1;
	static uint16_t x107 = 3593U;
	static volatile int8_t x108 = INT8_MIN;
	int32_t t26 = 199;

	t26 = ((x105&(x106<x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	static uint8_t x110 = UINT8_MAX;
	volatile int16_t x111 = INT16_MIN;
	uint64_t x112 = 3LLU;
	uint64_t t27 = 204294613835331394LLU;

	t27 = ((x109&(x110<x111))*x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int32_t x114 = 840929269;
	static int64_t x115 = -1LL;
	uint32_t x116 = UINT32_MAX;
	volatile int64_t t28 = -15836968465749LL;

	t28 = ((x113&(x114<x115))*x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 4U;
	static int8_t x118 = -1;
	static volatile int64_t x119 = -9945619663LL;
	int16_t x120 = 0;
	static volatile uint32_t t29 = 2144346686U;

	t29 = ((x117&(x118<x119))*x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint32_t x122 = 3U;
	static int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 39;

	t30 = ((x121&(x122<x123))*x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	uint8_t x126 = 86U;
	volatile uint8_t x127 = 48U;
	int64_t x128 = INT64_MIN;
	int64_t t31 = -16179LL;

	t31 = ((x125&(x126<x127))*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 13453;
	uint8_t x130 = 1U;
	static int64_t x131 = INT64_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -1535263;

	t32 = ((x129&(x130<x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int16_t x134 = INT16_MAX;
	uint16_t x135 = 1019U;
	int16_t x136 = INT16_MIN;
	int32_t t33 = -2902448;

	t33 = ((x133&(x134<x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 56U;
	uint64_t x138 = 5759955360400LLU;
	static uint32_t x140 = 677666U;
	volatile uint32_t t34 = 49U;

	t34 = ((x137&(x138<x139))*x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 5779;
	uint32_t x142 = 3U;
	int64_t x143 = -1LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = -16576LL;

	t35 = ((x141&(x142<x143))*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MAX;
	static int8_t x147 = -12;
	int8_t x148 = -1;
	int32_t t36 = -85230;

	t36 = ((x145&(x146<x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x150 = 17U;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = 1U;
	volatile int32_t t37 = -104164098;

	t37 = ((x149&(x150<x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;

	t38 = ((x153&(x154<x155))*x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 259697881604830159LLU;
	static int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	static int64_t t39 = INT64_MIN;

	t39 = ((x157&(x158<x159))*x160);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	static int16_t x163 = INT16_MIN;
	static volatile int32_t x164 = INT32_MIN;
	int64_t t40 = -40534519962607137LL;

	t40 = ((x161&(x162<x163))*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MAX;
	static int16_t x166 = -254;
	volatile uint64_t x167 = 1574249194582021161LLU;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = 4051;

	t41 = ((x165&(x166<x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MAX;
	static volatile int64_t x172 = INT64_MIN;
	uint64_t t42 = 6233566083LLU;

	t42 = ((x169&(x170<x171))*x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	int8_t x176 = 1;
	int64_t t43 = 3320261170816198LL;

	t43 = ((x173&(x174<x175))*x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -12;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MAX;
	int16_t x180 = -1;
	static int32_t t44 = 432578;

	t44 = ((x177&(x178<x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x182 = -1;
	volatile uint8_t x183 = UINT8_MAX;
	int64_t x184 = 44972346LL;

	t45 = ((x181&(x182<x183))*x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	uint8_t x187 = 3U;
	static uint64_t x188 = 1707369991LLU;
	volatile uint64_t t46 = 14454LLU;

	t46 = ((x185&(x186<x187))*x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MAX;
	static uint64_t t47 = 131986924261552LLU;

	t47 = ((x189&(x190<x191))*x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 16;
	uint32_t x194 = 9U;
	static int16_t x195 = INT16_MAX;
	static volatile int32_t x196 = -8129947;
	volatile int32_t t48 = 69622;

	t48 = ((x193&(x194<x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	static int16_t x198 = -1;
	int64_t x199 = -631591LL;
	int16_t x200 = -1;

	t49 = ((x197&(x198<x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MAX;
	int64_t x203 = -61145090614392LL;
	int32_t t50 = 4;

	t50 = ((x201&(x202<x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 16657146242212LLU;
	uint32_t x206 = 0U;
	int64_t x207 = 12LL;
	volatile uint64_t t51 = 955935LLU;

	t51 = ((x205&(x206<x207))*x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -1137648582077LL;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -6;
	volatile int64_t t52 = -458329547142874LL;

	t52 = ((x209&(x210<x211))*x212);

	if (t52 != -6LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint32_t x214 = UINT32_MAX;
	static uint32_t x215 = 1U;
	int16_t x216 = 4126;
	int64_t t53 = 316LL;

	t53 = ((x213&(x214<x215))*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 4;
	int64_t x218 = INT64_MAX;
	volatile int16_t x220 = -1;
	int32_t t54 = -62794;

	t54 = ((x217&(x218<x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 29U;
	static int64_t x222 = INT64_MAX;
	int8_t x224 = INT8_MAX;
	static volatile int32_t t55 = -4022;

	t55 = ((x221&(x222<x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 16;
	int64_t x226 = INT64_MAX;
	volatile uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t56 = 0U;

	t56 = ((x225&(x226<x227))*x228);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = -624488;
	uint8_t x232 = UINT8_MAX;
	uint64_t t57 = 6911641241LLU;

	t57 = ((x229&(x230<x231))*x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static uint8_t x234 = UINT8_MAX;
	uint32_t x235 = 83123360U;
	uint8_t x236 = 1U;

	t58 = ((x233&(x234<x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = -1;
	int16_t x239 = 4681;
	static volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 895748;

	t59 = ((x237&(x238<x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int16_t x243 = -1;
	static volatile int32_t x244 = INT32_MIN;
	int64_t t60 = -15765426588LL;

	t60 = ((x241&(x242<x243))*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x245 = 194LLU;
	static int8_t x246 = INT8_MIN;
	static uint64_t x247 = 2928761388569991LLU;
	int8_t x248 = INT8_MIN;

	t61 = ((x245&(x246<x247))*x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 146U;
	int16_t x250 = INT16_MIN;
	volatile uint8_t x252 = 0U;
	volatile int32_t t62 = -4;

	t62 = ((x249&(x250<x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x255 = -1;
	static volatile uint32_t t63 = 5941419U;

	t63 = ((x253&(x254<x255))*x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -4;
	int16_t x258 = INT16_MIN;
	static volatile int64_t x259 = 243184791536179198LL;
	uint32_t x260 = UINT32_MAX;
	static volatile uint32_t t64 = 1839391319U;

	t64 = ((x257&(x258<x259))*x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	static volatile int8_t x263 = -4;
	volatile int32_t x264 = -1;
	int32_t t65 = 27703963;

	t65 = ((x261&(x262<x263))*x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 0;
	int8_t x266 = -1;
	int8_t x267 = -7;
	int64_t x268 = 32893528087LL;
	volatile int64_t t66 = -13482735890LL;

	t66 = ((x265&(x266<x267))*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	static volatile uint8_t x272 = 40U;
	volatile int32_t t67 = -59;

	t67 = ((x269&(x270<x271))*x272);

	if (t67 != 40) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = ((x273&(x274<x275))*x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = UINT32_MAX;
	static volatile int32_t x278 = INT32_MIN;
	int64_t x279 = 4608276135441882184LL;
	int8_t x280 = 35;
	uint32_t t69 = 11U;

	t69 = ((x277&(x278<x279))*x280);

	if (t69 != 35U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = 0U;
	uint64_t x283 = 71776353449671LLU;
	volatile int32_t t70 = -223059;

	t70 = ((x281&(x282<x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 0;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 5U;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t71 = -2481907888735324LL;

	t71 = ((x285&(x286<x287))*x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x290 = 6549U;
	static volatile uint32_t x291 = 59564346U;
	volatile int64_t x292 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = ((x289&(x290<x291))*x292);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 448;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = -15287;

	t73 = ((x293&(x294<x295))*x296);

	if (t73 != -15287) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = -1999;
	int16_t x300 = -30;
	uint64_t t74 = 498617908736LLU;

	t74 = ((x297&(x298<x299))*x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 0;
	uint16_t x302 = UINT16_MAX;
	static uint64_t x304 = 12LLU;
	uint64_t t75 = 138031542477123771LLU;

	t75 = ((x301&(x302<x303))*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MAX;
	uint16_t x308 = 23090U;
	int32_t t76 = 5;

	t76 = ((x305&(x306<x307))*x308);

	if (t76 != 23090) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	uint8_t x311 = 6U;
	int16_t x312 = -1;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x309&(x310<x311))*x312);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -1LL;
	static int8_t x314 = 1;
	static int64_t x315 = INT64_MIN;
	volatile int64_t t78 = -36222864LL;

	t78 = ((x313&(x314<x315))*x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 602643309U;
	static volatile int32_t x318 = INT32_MAX;
	static volatile int64_t x319 = INT64_MAX;
	int32_t x320 = -1569799;
	uint32_t t79 = 571846U;

	t79 = ((x317&(x318<x319))*x320);

	if (t79 != 4293397497U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 5911653LLU;
	int64_t x323 = -38068938LL;
	uint16_t x324 = 31373U;
	uint64_t t80 = 485364629516LLU;

	t80 = ((x321&(x322<x323))*x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x326 = 14475LLU;
	int32_t x327 = INT32_MIN;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = INT32_MIN;

	t81 = ((x325&(x326<x327))*x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	int8_t x331 = -1;
	static int32_t t82 = INT32_MIN;

	t82 = ((x329&(x330<x331))*x332);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	static int32_t t83 = 0;

	t83 = ((x333&(x334<x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	static uint8_t x338 = 0U;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = INT8_MIN;
	static int64_t t84 = 524630234429LL;

	t84 = ((x337&(x338<x339))*x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = 2;
	volatile int16_t x343 = INT16_MAX;
	uint32_t x344 = 95702457U;
	static uint64_t t85 = 363098906260LLU;

	t85 = ((x341&(x342<x343))*x344);

	if (t85 != 95702457LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 4687413733LL;
	uint64_t x346 = UINT64_MAX;
	static int16_t x348 = -1;
	static int64_t t86 = 276213774893LL;

	t86 = ((x345&(x346<x347))*x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 2930452U;
	uint32_t x350 = UINT32_MAX;
	static int32_t x352 = INT32_MIN;
	uint32_t t87 = 36U;

	t87 = ((x349&(x350<x351))*x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	static int64_t x354 = INT64_MAX;
	int64_t x356 = INT64_MAX;
	static volatile int64_t t88 = 2140796834671931LL;

	t88 = ((x353&(x354<x355))*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 53415;
	int64_t x358 = INT64_MAX;
	int64_t x359 = -1LL;
	uint64_t x360 = 10787097826003LLU;
	uint64_t t89 = 5719912983LLU;

	t89 = ((x357&(x358<x359))*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 2U;
	static int32_t x362 = -34963009;
	volatile uint16_t x364 = 1007U;
	static volatile int32_t t90 = 1747658;

	t90 = ((x361&(x362<x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 26430759U;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile uint32_t t91 = 6U;

	t91 = ((x365&(x366<x367))*x368);

	if (t91 != 258U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = -45;
	volatile int8_t x370 = INT8_MAX;
	static int8_t x371 = 1;
	uint32_t x372 = 37720746U;
	uint32_t t92 = 366553U;

	t92 = ((x369&(x370<x371))*x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int64_t t93 = INT64_MAX;

	t93 = ((x373&(x374<x375))*x376);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 0LLU;
	int32_t x378 = 103;
	int32_t x379 = 75433462;
	uint16_t x380 = 88U;
	volatile uint64_t t94 = 79805LLU;

	t94 = ((x377&(x378<x379))*x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	int64_t x382 = INT64_MIN;
	uint16_t x383 = 29U;
	static int64_t x384 = 0LL;

	t95 = ((x381&(x382<x383))*x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 344488;
	int16_t x386 = INT16_MAX;
	int16_t x387 = 5;
	uint16_t x388 = 20496U;
	int32_t t96 = 213849600;

	t96 = ((x385&(x386<x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = -1;
	static uint8_t x391 = UINT8_MAX;
	volatile uint64_t t97 = 275LLU;

	t97 = ((x389&(x390<x391))*x392);

	if (t97 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	static int32_t x394 = -980;
	uint8_t x395 = 13U;
	int32_t x396 = INT32_MIN;
	int32_t t98 = INT32_MIN;

	t98 = ((x393&(x394<x395))*x396);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 11U;
	volatile int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MAX;

	t99 = ((x397&(x398<x399))*x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

