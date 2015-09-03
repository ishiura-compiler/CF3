#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1940;
int16_t x2 = -1;
static int16_t x7 = INT16_MIN;
static volatile uint32_t t1 = 1585U;
static volatile uint8_t x10 = 11U;
int32_t x11 = 28;
static int8_t x13 = -10;
volatile int32_t t3 = 733;
volatile uint64_t t4 = 40878036599174446LLU;
static int32_t t5 = 69798;
static int16_t x27 = -1443;
static volatile uint32_t t10 = 177709U;
int64_t x51 = 183324261411LL;
static volatile int32_t t12 = -227956;
volatile uint32_t x54 = 9U;
volatile int64_t x55 = INT64_MIN;
static int32_t t13 = -25;
int8_t x62 = INT8_MAX;
volatile int32_t t15 = -1;
int64_t x72 = -1LL;
int16_t x74 = INT16_MIN;
static int8_t x78 = INT8_MIN;
int32_t t18 = -7;
int16_t x81 = INT16_MIN;
int8_t x94 = INT8_MIN;
int64_t x96 = INT64_MIN;
int8_t x98 = -1;
uint16_t x99 = 3601U;
static volatile uint64_t x102 = 53408882926LLU;
uint8_t x103 = 5U;
volatile uint64_t t25 = 248642519410LLU;
uint16_t x115 = 84U;
volatile uint64_t x118 = 32015196837LLU;
int64_t t28 = 2012LL;
static int32_t x126 = INT32_MIN;
int64_t x130 = -1LL;
static int8_t x131 = 1;
volatile uint32_t x133 = UINT32_MAX;
static volatile uint64_t x134 = 2152684323467LLU;
static uint32_t x136 = UINT32_MAX;
static int32_t x141 = -70017359;
int32_t t34 = 1549991;
static int32_t x150 = INT32_MIN;
int8_t x156 = -1;
static int32_t t40 = -701568;
int8_t x171 = -1;
uint16_t x175 = UINT16_MAX;
static volatile uint32_t t42 = 3042U;
volatile int16_t x185 = INT16_MAX;
uint64_t x201 = 104325993592332502LLU;
uint16_t x203 = UINT16_MAX;
uint64_t t47 = 10LLU;
int32_t x205 = INT32_MIN;
volatile uint64_t t48 = 3LLU;
uint16_t x215 = 1U;
static uint32_t t50 = 4U;
int32_t x217 = -236932;
int64_t x222 = -88417095868LL;
static int32_t t52 = -2390;
static uint32_t x231 = 288U;
int32_t x234 = INT32_MIN;
int32_t x236 = INT32_MIN;
static volatile uint8_t x239 = 22U;
uint32_t t56 = 602557645U;
uint16_t x242 = UINT16_MAX;
int8_t x246 = INT8_MIN;
static int64_t x249 = INT64_MAX;
int8_t x252 = 1;
uint16_t x254 = 1717U;
volatile int32_t x272 = INT32_MAX;
static int16_t x276 = INT16_MIN;
uint8_t x279 = 26U;
uint64_t t66 = 107789607LLU;
uint16_t x287 = 18U;
uint16_t x288 = 1U;
volatile uint64_t x292 = 523423LLU;
static uint64_t x301 = 13946783969930LLU;
static int32_t x303 = INT32_MAX;
static int32_t x305 = INT32_MAX;
volatile uint64_t t74 = 97523890175701511LLU;
int16_t x319 = INT16_MAX;
volatile int32_t t75 = 3785018;
int16_t x330 = INT16_MIN;
int32_t t77 = 1759;
int16_t x334 = INT16_MAX;
int16_t x342 = -692;
static uint16_t x344 = 1212U;
int32_t x348 = -59;
volatile int32_t x354 = 38235;
int32_t t81 = 12439469;
int8_t x364 = INT8_MAX;
int8_t x370 = INT8_MIN;
int32_t x372 = 303860;
static uint8_t x374 = UINT8_MAX;
int32_t x376 = -2575;
int64_t x380 = 117587074LL;
static volatile int8_t x384 = -1;
int32_t x390 = 83085;
uint16_t x400 = 1U;
int64_t x402 = -1LL;
int32_t x403 = -117;
uint64_t x404 = UINT64_MAX;
static uint64_t t93 = 3637488768981LLU;
static uint32_t x405 = 933857U;
int64_t t95 = 98169402LL;
static int64_t x426 = -230823516063LL;
static uint8_t x427 = 14U;
uint32_t x428 = 181U;
static volatile uint64_t x431 = 11720144516LLU;


void f0(void) {
	static int8_t x3 = -14;
	volatile int8_t x4 = 35;
	volatile int32_t t0 = 239697538;

	t0 = ((x1|(x2<=x3))-x4);

	if (t0 != -1975) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -141471634;
	int64_t x6 = -1LL;
	uint32_t x8 = 2U;

	t1 = ((x5|(x6<=x7))-x8);

	if (t1 != 4153495660U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x12 = -1;
	volatile int64_t t2 = -1LL;

	t2 = ((x9|(x10<=x11))-x12);

	if (t2 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 53U;
	int16_t x15 = INT16_MAX;
	static volatile int32_t x16 = 30892;

	t3 = ((x13|(x14<=x15))-x16);

	if (t3 != -30901) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile int8_t x18 = -1;
	volatile uint32_t x19 = UINT32_MAX;
	int16_t x20 = 116;

	t4 = ((x17|(x18<=x19))-x20);

	if (t4 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint32_t x22 = 54076729U;
	int16_t x23 = INT16_MIN;
	static volatile int16_t x24 = INT16_MIN;

	t5 = ((x21|(x22<=x23))-x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = INT8_MAX;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 54188208543368246LL;

	t6 = ((x25|(x26<=x27))-x28);

	if (t6 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static uint32_t x30 = 60253U;
	int16_t x31 = -37;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -13877;

	t7 = ((x29|(x30<=x31))-x32);

	if (t7 != 65663) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 52085808309639537LL;
	int64_t x34 = INT64_MAX;
	int8_t x35 = 0;
	int16_t x36 = INT16_MAX;
	int64_t t8 = -10158730962397965LL;

	t8 = ((x33|(x34<=x35))-x36);

	if (t8 != 52085808309606770LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 130583126LLU;
	static uint64_t x38 = 184653721372LLU;
	static int16_t x39 = 15018;
	uint8_t x40 = UINT8_MAX;
	volatile uint64_t t9 = 123327857030LLU;

	t9 = ((x37|(x38<=x39))-x40);

	if (t9 != 130582871LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	static int8_t x42 = -21;
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;

	t10 = ((x41|(x42<=x43))-x44);

	if (t10 != 4294967170U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint16_t x46 = 900U;
	volatile uint32_t x47 = 1973U;
	volatile int8_t x48 = -1;
	volatile int64_t t11 = 10580LL;

	t11 = ((x45|(x46<=x47))-x48);

	if (t11 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	int16_t x50 = 1;
	uint8_t x52 = 29U;

	t12 = ((x49|(x50<=x51))-x52);

	if (t12 != -32796) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3U;
	int8_t x56 = INT8_MIN;

	t13 = ((x53|(x54<=x55))-x56);

	if (t13 != 131) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int64_t x58 = 2433683762LL;
	int8_t x59 = 43;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 0;

	t14 = ((x57|(x58<=x59))-x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 5496U;
	int8_t x63 = INT8_MIN;
	static int8_t x64 = 1;

	t15 = ((x61|(x62<=x63))-x64);

	if (t15 != 5495) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 2U;
	int64_t x70 = INT64_MAX;
	uint8_t x71 = 14U;
	int64_t t16 = -71809460785272356LL;

	t16 = ((x69|(x70<=x71))-x72);

	if (t16 != 3LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int16_t x75 = INT16_MIN;
	static uint8_t x76 = 104U;
	int32_t t17 = -20044;

	t17 = ((x73|(x74<=x75))-x76);

	if (t17 != 32663) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -10;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;

	t18 = ((x77|(x78<=x79))-x80);

	if (t18 != 2147483638) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = -29;
	static uint8_t x83 = UINT8_MAX;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t19 = -87909606927LL;

	t19 = ((x81|(x82<=x83))-x84);

	if (t19 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	static uint8_t x86 = 39U;
	int64_t x87 = -279071472756LL;
	static volatile int8_t x88 = 1;
	volatile int32_t t20 = -52;

	t20 = ((x85|(x86<=x87))-x88);

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	static int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t21 = -571468978868893714LL;

	t21 = ((x89|(x90<=x91))-x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	static int16_t x95 = INT16_MIN;
	int64_t t22 = INT64_MAX;

	t22 = ((x93|(x94<=x95))-x96);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = UINT32_MAX;
	static uint16_t x100 = UINT16_MAX;
	volatile uint32_t t23 = 9693U;

	t23 = ((x97|(x98<=x99))-x100);

	if (t23 != 4294901760U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 28011792LLU;
	uint16_t x104 = 6208U;
	uint64_t t24 = 26065LLU;

	t24 = ((x101|(x102<=x103))-x104);

	if (t24 != 28005584LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = 28;
	uint8_t x106 = 0U;
	int64_t x107 = INT64_MAX;
	volatile uint64_t x108 = UINT64_MAX;

	t25 = ((x105|(x106<=x107))-x108);

	if (t25 != 30LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = -1;
	static uint16_t x111 = 23U;
	int8_t x112 = INT8_MAX;
	volatile int32_t t26 = -628923582;

	t26 = ((x109|(x110<=x111))-x112);

	if (t26 != -254) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 245824256LLU;
	volatile int32_t x114 = -1;
	static volatile int8_t x116 = INT8_MIN;
	volatile uint64_t t27 = 1019817036818293LLU;

	t27 = ((x113|(x114<=x115))-x116);

	if (t27 != 245824385LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -1LL;
	uint8_t x119 = UINT8_MAX;
	uint16_t x120 = 933U;

	t28 = ((x117|(x118<=x119))-x120);

	if (t28 != -934LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = 4488;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = 0;
	volatile int64_t t29 = INT64_MIN;

	t29 = ((x121|(x122<=x123))-x124);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MAX;
	volatile int32_t t30 = -458782;

	t30 = ((x125|(x126<=x127))-x128);

	if (t30 != -32894) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -588;
	static int16_t x132 = INT16_MAX;
	volatile int32_t t31 = -952734770;

	t31 = ((x129|(x130<=x131))-x132);

	if (t31 != -33354) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x135 = 900259442;
	volatile uint32_t t32 = 68U;

	t32 = ((x133|(x134<=x135))-x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = -1;
	static uint8_t x138 = 0U;
	uint32_t x139 = 49U;
	static int32_t x140 = 1963796;
	int32_t t33 = -24940927;

	t33 = ((x137|(x138<=x139))-x140);

	if (t33 != -1963797) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = INT64_MIN;
	uint8_t x143 = 2U;
	int16_t x144 = 76;

	t34 = ((x141|(x142<=x143))-x144);

	if (t34 != -70017435) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = UINT8_MAX;
	uint32_t t35 = 45837U;

	t35 = ((x145|(x146<=x147))-x148);

	if (t35 != 4294967040U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MAX;
	int64_t x151 = -1LL;
	volatile int16_t x152 = INT16_MIN;
	static volatile int32_t t36 = 21544;

	t36 = ((x149|(x150<=x151))-x152);

	if (t36 != 32895) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 7553U;
	int32_t x154 = -1;
	volatile int32_t x155 = -5285702;
	uint32_t t37 = 44745U;

	t37 = ((x153|(x154<=x155))-x156);

	if (t37 != 7554U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	uint32_t x158 = UINT32_MAX;
	volatile uint16_t x159 = 10622U;
	volatile int16_t x160 = INT16_MAX;
	volatile int64_t t38 = -1LL;

	t38 = ((x157|(x158<=x159))-x160);

	if (t38 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 530340U;
	uint32_t t39 = 2388029U;

	t39 = ((x161|(x162<=x163))-x164);

	if (t39 != 4294437083U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -26;
	volatile int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;

	t40 = ((x165|(x166<=x167))-x168);

	if (t40 != 32742) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = 52;
	int16_t x170 = -57;
	int8_t x172 = -1;
	int32_t t41 = -7939974;

	t41 = ((x169|(x170<=x171))-x172);

	if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x173 = INT8_MIN;
	uint16_t x174 = 713U;
	uint32_t x176 = 340904442U;

	t42 = ((x173|(x174<=x175))-x176);

	if (t42 != 3954062727U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t43 = -46546;

	t43 = ((x177|(x178<=x179))-x180);

	if (t43 != -2147483519) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MAX;
	int32_t x184 = -10640;
	int32_t t44 = -12;

	t44 = ((x181|(x182<=x183))-x184);

	if (t44 != 10512) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 1U;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t45 = 6118;

	t45 = ((x185|(x186<=x187))-x188);

	if (t45 != 32895) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MAX;
	uint32_t x198 = 13678U;
	volatile int64_t x199 = INT64_MIN;
	uint64_t x200 = 52156LLU;
	static volatile uint64_t t46 = 17550445178948LLU;

	t46 = ((x197|(x198<=x199))-x200);

	if (t46 != 2147431491LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x202 = -1;
	int8_t x204 = -1;

	t47 = ((x201|(x202<=x203))-x204);

	if (t47 != 104325993592332504LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x206 = 0;
	uint8_t x207 = 10U;
	uint64_t x208 = 35228567677159647LLU;

	t48 = ((x205|(x206<=x207))-x208);

	if (t48 != 18411515503884908322LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = 0U;
	volatile int64_t t49 = INT64_MIN;

	t49 = ((x209|(x210<=x211))-x212);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	volatile int64_t x214 = -1LL;
	uint32_t x216 = 251671464U;

	t50 = ((x213|(x214<=x215))-x216);

	if (t50 != 4043295831U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x218 = -1;
	volatile int32_t x219 = INT32_MAX;
	int16_t x220 = 8563;
	int32_t t51 = -1581777;

	t51 = ((x217|(x218<=x219))-x220);

	if (t51 != -245494) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x221 = UINT16_MAX;
	static volatile uint16_t x223 = UINT16_MAX;
	int16_t x224 = -1;

	t52 = ((x221|(x222<=x223))-x224);

	if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = -17;
	int64_t x226 = -76272LL;
	volatile uint64_t x227 = 8LLU;
	uint64_t x228 = UINT64_MAX;
	static volatile uint64_t t53 = 907LLU;

	t53 = ((x225|(x226<=x227))-x228);

	if (t53 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x229 = UINT8_MAX;
	static volatile uint8_t x230 = 22U;
	int32_t x232 = 21398;
	volatile int32_t t54 = 562865243;

	t54 = ((x229|(x230<=x231))-x232);

	if (t54 != -21143) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x233 = INT32_MIN;
	uint16_t x235 = 41U;
	static int32_t t55 = 129394797;

	t55 = ((x233|(x234<=x235))-x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = 1678150U;
	int64_t x238 = 254377699156824LL;
	volatile uint8_t x240 = UINT8_MAX;

	t56 = ((x237|(x238<=x239))-x240);

	if (t56 != 1677895U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	volatile int32_t x244 = -487259;
	volatile int32_t t57 = -3;

	t57 = ((x241|(x242<=x243))-x244);

	if (t57 != 454491) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 421649U;
	uint8_t x247 = 1U;
	static volatile int32_t x248 = 26;
	volatile uint32_t t58 = 1604471338U;

	t58 = ((x245|(x246<=x247))-x248);

	if (t58 != 421623U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x250 = 1;
	volatile int32_t x251 = 41947;
	volatile int64_t t59 = 186LL;

	t59 = ((x249|(x250<=x251))-x252);

	if (t59 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = INT64_MIN;
	static volatile uint16_t x255 = UINT16_MAX;
	uint64_t x256 = 88393LLU;
	volatile uint64_t t60 = 17940609297695067LLU;

	t60 = ((x253|(x254<=x255))-x256);

	if (t60 != 9223372036854687416LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = UINT16_MAX;
	int64_t x258 = -1LL;
	int16_t x259 = INT16_MIN;
	int64_t x260 = -1LL;
	static int64_t t61 = -508204641456214LL;

	t61 = ((x257|(x258<=x259))-x260);

	if (t61 != 65536LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	static uint8_t x262 = 12U;
	int16_t x263 = INT16_MAX;
	int32_t x264 = -1929822;
	int64_t t62 = -320623262386571LL;

	t62 = ((x261|(x262<=x263))-x264);

	if (t62 != 1929821LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -11713;
	int8_t x266 = 3;
	uint64_t x267 = 1966323LLU;
	int64_t x268 = -1LL;
	volatile int64_t t63 = -67666749959179153LL;

	t63 = ((x265|(x266<=x267))-x268);

	if (t63 != -11712LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MAX;
	volatile int64_t x270 = -4354LL;
	uint8_t x271 = 0U;
	volatile int32_t t64 = -480783;

	t64 = ((x269|(x270<=x271))-x272);

	if (t64 != -2147450880) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = 24;
	static int32_t x274 = INT32_MIN;
	int8_t x275 = -11;
	int32_t t65 = -46;

	t65 = ((x273|(x274<=x275))-x276);

	if (t65 != 32793) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = -1;
	static volatile int8_t x278 = INT8_MIN;
	volatile uint64_t x280 = 8883672558350LLU;

	t66 = ((x277|(x278<=x279))-x280);

	if (t66 != 18446735190036993265LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x281 = 1797058;
	int8_t x282 = -1;
	int8_t x283 = -1;
	uint8_t x284 = 1U;
	int32_t t67 = 302;

	t67 = ((x281|(x282<=x283))-x284);

	if (t67 != 1797058) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -91;
	static int16_t x286 = 7620;
	volatile int32_t t68 = 33;

	t68 = ((x285|(x286<=x287))-x288);

	if (t68 != -92) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -6255;
	static volatile uint8_t x291 = 42U;
	volatile uint64_t t69 = 125943303462LLU;

	t69 = ((x289|(x290<=x291))-x292);

	if (t69 != 18446744073709028066LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x293 = 6;
	static int8_t x294 = INT8_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	uint32_t x296 = 586U;
	volatile uint32_t t70 = 6U;

	t70 = ((x293|(x294<=x295))-x296);

	if (t70 != 4294966717U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MAX;
	uint32_t x298 = 30U;
	int32_t x299 = INT32_MIN;
	static uint32_t x300 = UINT32_MAX;
	volatile uint32_t t71 = 32560292U;

	t71 = ((x297|(x298<=x299))-x300);

	if (t71 != 128U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x302 = -1;
	int64_t x304 = -1LL;
	static uint64_t t72 = 14601733099281081LLU;

	t72 = ((x301|(x302<=x303))-x304);

	if (t72 != 13946783969932LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 17U;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t73 = 12LLU;

	t73 = ((x305|(x306<=x307))-x308);

	if (t73 != 2147483648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 26687130357812LLU;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;

	t74 = ((x309|(x310<=x311))-x312);

	if (t74 != 26687130357557LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	int32_t x320 = -1;

	t75 = ((x317|(x318<=x319))-x320);

	if (t75 != -126) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = -57500723;
	uint16_t x322 = 3U;
	int16_t x323 = 7704;
	static int8_t x324 = -1;
	int32_t t76 = -102;

	t76 = ((x321|(x322<=x323))-x324);

	if (t76 != -57500722) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x329 = UINT8_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	volatile uint8_t x332 = 54U;

	t77 = ((x329|(x330<=x331))-x332);

	if (t77 != 201) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -2822567080825009LL;
	volatile uint16_t x335 = 34U;
	volatile int32_t x336 = INT32_MAX;
	int64_t t78 = -265LL;

	t78 = ((x333|(x334<=x335))-x336);

	if (t78 != -2822569228308656LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 232U;
	int16_t x343 = 373;
	volatile uint32_t t79 = 20U;

	t79 = ((x341|(x342<=x343))-x344);

	if (t79 != 4294966317U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = -408;
	uint16_t x346 = 188U;
	uint64_t x347 = 146801521965274LLU;
	static int32_t t80 = -278429;

	t80 = ((x345|(x346<=x347))-x348);

	if (t80 != -348) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x353 = -14897;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MIN;

	t81 = ((x353|(x354<=x355))-x356);

	if (t81 != -14769) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	int32_t x358 = 142105167;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 13566144LLU;
	uint64_t t82 = 36LLU;

	t82 = ((x357|(x358<=x359))-x360);

	if (t82 != 9223372036841209663LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x361 = INT8_MAX;
	volatile int32_t x362 = INT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	static volatile int32_t t83 = 316491835;

	t83 = ((x361|(x362<=x363))-x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = -1LL;
	int8_t x366 = -42;
	int8_t x367 = INT8_MIN;
	static uint16_t x368 = 787U;
	volatile int64_t t84 = 576694994260LL;

	t84 = ((x365|(x366<=x367))-x368);

	if (t84 != -788LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = 1736058604294345283LLU;
	int8_t x371 = INT8_MIN;
	uint64_t t85 = 437LLU;

	t85 = ((x369|(x370<=x371))-x372);

	if (t85 != 1736058604294041423LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x373 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	int64_t t86 = 949718735394274LL;

	t86 = ((x373|(x374<=x375))-x376);

	if (t86 != -9223372036854773232LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = -1;
	int32_t x378 = -20;
	int32_t x379 = -69164;
	int64_t t87 = 14LL;

	t87 = ((x377|(x378<=x379))-x380);

	if (t87 != -117587075LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x381 = 2375045LLU;
	int32_t x382 = INT32_MIN;
	static volatile int64_t x383 = INT64_MIN;
	static volatile uint64_t t88 = 4596534226127413789LLU;

	t88 = ((x381|(x382<=x383))-x384);

	if (t88 != 2375046LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x385 = 0U;
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MAX;
	int64_t t89 = -300036672439473810LL;

	t89 = ((x385|(x386<=x387))-x388);

	if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = INT16_MAX;
	int32_t t90 = 275697632;

	t90 = ((x389|(x390<=x391))-x392);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = 56U;
	uint32_t x394 = 1016U;
	uint32_t x395 = 283U;
	int8_t x396 = 1;
	int32_t t91 = -5569;

	t91 = ((x393|(x394<=x395))-x396);

	if (t91 != 55) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile int8_t x398 = INT8_MIN;
	int64_t x399 = 407LL;
	static int32_t t92 = INT32_MIN;

	t92 = ((x397|(x398<=x399))-x400);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x401 = -1;

	t93 = ((x401|(x402<=x403))-x404);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x406 = INT32_MIN;
	static int64_t x407 = 383297LL;
	int32_t x408 = INT32_MAX;
	volatile uint32_t t94 = 0U;

	t94 = ((x405|(x406<=x407))-x408);

	if (t94 != 2148417506U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -42466;
	static int16_t x414 = -1;
	int16_t x415 = -3;
	int64_t x416 = -1LL;

	t95 = ((x413|(x414<=x415))-x416);

	if (t95 != -42465LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = 9;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int64_t x420 = -130026501340867LL;
	volatile int64_t t96 = -1225568158911893LL;

	t96 = ((x417|(x418<=x419))-x420);

	if (t96 != 130026501340876LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x421 = INT32_MAX;
	uint32_t x422 = 8324489U;
	int8_t x423 = INT8_MIN;
	int16_t x424 = 1;
	int32_t t97 = -1364;

	t97 = ((x421|(x422<=x423))-x424);

	if (t97 != 2147483646) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = -525;
	uint32_t t98 = 819U;

	t98 = ((x425|(x426<=x427))-x428);

	if (t98 != 4294966590U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = 474;
	uint32_t x430 = UINT32_MAX;
	static int8_t x432 = -1;
	int32_t t99 = -32203066;

	t99 = ((x429|(x430<=x431))-x432);

	if (t99 != 476) { NG(); } else { ; }
	
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

