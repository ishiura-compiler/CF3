#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1426063509LL;
static uint16_t x5 = UINT16_MAX;
int8_t x13 = INT8_MIN;
int32_t x19 = -1;
uint32_t x21 = 95160U;
static volatile int32_t x22 = -488126;
int8_t x23 = 2;
volatile int8_t x26 = -3;
uint64_t x29 = UINT64_MAX;
volatile int16_t x32 = INT16_MIN;
volatile uint64_t t7 = 2LLU;
uint8_t x35 = 117U;
uint8_t x36 = 65U;
int16_t x37 = INT16_MIN;
uint64_t x45 = 4366931360988LLU;
uint64_t t11 = UINT64_MAX;
uint32_t t12 = 0U;
static uint32_t x54 = 116776914U;
int16_t x61 = -1;
int64_t x64 = 1443982785LL;
int64_t t15 = -3934350691LL;
int8_t x65 = INT8_MAX;
int32_t x67 = -475;
uint64_t t16 = 154951949491477LLU;
int8_t x71 = -1;
int64_t x82 = INT64_MIN;
int8_t x83 = INT8_MIN;
int32_t x88 = INT32_MIN;
int8_t x89 = -1;
volatile int8_t x92 = -1;
int32_t x95 = INT32_MIN;
volatile int32_t t24 = -29;
uint64_t x101 = UINT64_MAX;
volatile int16_t x116 = INT16_MIN;
volatile int64_t x117 = INT64_MIN;
volatile int64_t t29 = -335539908LL;
uint64_t t30 = 1LLU;
volatile int8_t x128 = -1;
volatile uint64_t t32 = 3186171808614553LLU;
uint64_t x133 = UINT64_MAX;
static uint32_t t34 = 160873246U;
static uint64_t t35 = UINT64_MAX;
volatile int8_t x150 = INT8_MIN;
static int8_t x159 = INT8_MIN;
static volatile uint16_t x163 = 2U;
static int16_t x165 = INT16_MAX;
uint64_t x166 = 11LLU;
int32_t x169 = -1;
int32_t x171 = INT32_MIN;
static int64_t x181 = INT64_MAX;
int64_t t48 = INT64_MIN;
volatile int16_t x204 = -1;
int32_t x208 = INT32_MIN;
uint8_t x209 = 120U;
uint16_t x212 = 4U;
int64_t t54 = 8LL;
int32_t x221 = INT32_MIN;
int32_t x225 = -377;
int8_t x229 = 1;
static int16_t x232 = 15519;
int8_t x233 = -1;
int32_t x234 = INT32_MIN;
uint64_t x236 = UINT64_MAX;
volatile int16_t x239 = INT16_MAX;
static volatile int8_t x240 = 33;
int64_t t60 = -1679385859815731284LL;
static volatile uint64_t t61 = 576346721386890LLU;
int8_t x252 = -1;
uint8_t x258 = 11U;
volatile uint16_t x259 = UINT16_MAX;
volatile int32_t x260 = -1;
int64_t t64 = -11531375306LL;
volatile uint16_t x261 = UINT16_MAX;
volatile int16_t x269 = INT16_MAX;
int32_t t67 = -3689877;
static int16_t x275 = 729;
uint8_t x279 = 5U;
volatile uint32_t x284 = 258U;
volatile int32_t x290 = -123955;
static int8_t x291 = -1;
volatile int64_t x298 = INT64_MAX;
int64_t x302 = -1LL;
int16_t x304 = INT16_MAX;
volatile int64_t t75 = 1599607731362828034LL;
int64_t x305 = -1LL;
uint32_t x306 = 30600199U;
uint32_t x307 = 625223761U;
int16_t x314 = -1;
static int32_t x315 = INT32_MAX;
int32_t x320 = INT32_MAX;
uint64_t x328 = 1748LLU;
uint64_t x341 = 6610512LLU;
volatile int64_t x344 = INT64_MAX;
volatile uint64_t t86 = 2933286LLU;
volatile int32_t x360 = INT32_MIN;
volatile int64_t x368 = INT64_MAX;
int64_t x372 = INT64_MAX;
uint64_t x387 = UINT64_MAX;
static volatile uint64_t t95 = 8LLU;
uint64_t x390 = 15LLU;
uint8_t x392 = UINT8_MAX;
int16_t x396 = -13135;
int64_t t97 = 89721661290224LL;
static int8_t x397 = INT8_MIN;
static uint32_t t98 = 2170U;
int16_t x403 = -1;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	volatile int64_t x3 = INT64_MIN;
	int8_t x4 = -1;
	int64_t t0 = 5925402276LL;

	t0 = (((x1&x2)%x3)^x4);

	if (t0 != 1426096127LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = -357;
	static volatile uint16_t x7 = 30U;
	volatile uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 3;

	t1 = (((x5&x6)%x7)^x8);

	if (t1 != 236) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 10U;
	static int16_t x11 = INT16_MIN;
	int16_t x12 = -1;
	uint32_t t2 = 29077580U;

	t2 = (((x9&x10)%x11)^x12);

	if (t2 != 4294967285U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	volatile int32_t x15 = -3;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 1LLU;

	t3 = (((x13&x14)%x15)^x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 190LLU;
	static int16_t x18 = INT16_MAX;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t4 = 451LLU;

	t4 = (((x17&x18)%x19)^x20);

	if (t4 != 2147483457LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x24 = 15475871082485LLU;
	static volatile uint64_t t5 = 6257932513130616513LLU;

	t5 = (((x21&x22)%x23)^x24);

	if (t5 != 15475871082485LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -5195;
	int16_t x27 = 12;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -13;

	t6 = (((x25&x26)%x27)^x28);

	if (t6 != -118) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;

	t7 = (((x29&x30)%x31)^x32);

	if (t7 != 9223372036854808448LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static volatile uint64_t x34 = 4251639LLU;
	volatile uint64_t t8 = 17368386749310813LLU;

	t8 = (((x33&x34)%x35)^x36);

	if (t8 != 28LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 1353485135U;
	int16_t x39 = 237;
	static volatile int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 1420283933U;

	t9 = (((x37&x38)%x39)^x40);

	if (t9 != 4294934653U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 0;
	static int64_t x42 = -455476496396606LL;
	volatile uint16_t x43 = 19013U;
	uint8_t x44 = UINT8_MAX;
	volatile int64_t t10 = -82LL;

	t10 = (((x41&x42)%x43)^x44);

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	int16_t x48 = -1;

	t11 = (((x45&x46)%x47)^x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -4;
	volatile uint8_t x50 = 116U;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = 9740U;

	t12 = (((x49&x50)%x51)^x52);

	if (t12 != 9848U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = UINT8_MAX;
	int64_t t13 = -4642718275480LL;

	t13 = (((x53&x54)%x55)^x56);

	if (t13 != 255LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -45;
	static int64_t x58 = -17LL;
	static int32_t x59 = 4202870;
	static volatile uint8_t x60 = 0U;
	volatile int64_t t14 = -50519LL;

	t14 = (((x57&x58)%x59)^x60);

	if (t14 != -61LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = 4392;
	uint16_t x63 = 5313U;

	t15 = (((x61&x62)%x63)^x64);

	if (t15 != 1443986665LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 9676LLU;
	volatile int16_t x68 = -1;

	t16 = (((x65&x66)%x67)^x68);

	if (t16 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	int32_t x70 = INT32_MIN;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -355021877;

	t17 = (((x69&x70)%x71)^x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 815;

	t18 = (((x73&x74)%x75)^x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -13;
	int64_t x78 = INT64_MAX;
	static int32_t x79 = -1;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t19 = UINT64_MAX;

	t19 = (((x77&x78)%x79)^x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 14LLU;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (((x81&x82)%x83)^x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = 598786855;
	int8_t x87 = INT8_MAX;
	volatile int32_t t21 = -44270576;

	t21 = (((x85&x86)%x87)^x88);

	if (t21 != -2147483551) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = INT64_MIN;
	volatile int64_t t22 = 215695217785LL;

	t22 = (((x89&x90)%x91)^x92);

	if (t22 != -65536LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 38263U;
	static int64_t x94 = INT64_MIN;
	int8_t x96 = -1;
	volatile int64_t t23 = -328708224LL;

	t23 = (((x93&x94)%x95)^x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	uint8_t x98 = 0U;
	uint8_t x99 = 2U;
	int16_t x100 = -1773;

	t24 = (((x97&x98)%x99)^x100);

	if (t24 != -1773) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = INT32_MIN;
	static int16_t x103 = 1;
	int32_t x104 = -108;
	static volatile uint64_t t25 = 5055042971547629001LLU;

	t25 = (((x101&x102)%x103)^x104);

	if (t25 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -48147000LL;
	int8_t x106 = INT8_MIN;
	int8_t x107 = -1;
	static int16_t x108 = 17;
	volatile int64_t t26 = 7110604LL;

	t26 = (((x105&x106)%x107)^x108);

	if (t26 != 17LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	uint64_t x110 = 87445951LLU;
	int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t27 = 37706LLU;

	t27 = (((x109&x110)%x111)^x112);

	if (t27 != 9223372036942221759LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	int64_t t28 = 15373883896LL;

	t28 = (((x113&x114)%x115)^x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	static int64_t x119 = 968248180155LL;
	static volatile uint16_t x120 = 235U;

	t29 = (((x117&x118)%x119)^x120);

	if (t29 != -601896151323LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 0LLU;
	int8_t x122 = 6;
	int16_t x123 = 429;
	static volatile uint64_t x124 = 4302LLU;

	t30 = (((x121&x122)%x123)^x124);

	if (t30 != 4302LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -5843;
	uint16_t x126 = UINT16_MAX;
	static int16_t x127 = INT16_MIN;
	static int32_t t31 = -26;

	t31 = (((x125&x126)%x127)^x128);

	if (t31 != -26926) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -21;
	volatile uint32_t x130 = 1879730U;
	uint64_t x131 = 3858975307LLU;
	int32_t x132 = INT32_MAX;

	t32 = (((x129&x130)%x131)^x132);

	if (t32 != 2145603933LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 40U;
	int8_t x135 = 29;
	static int64_t x136 = INT64_MIN;
	volatile uint64_t t33 = 3189404497LLU;

	t33 = (((x133&x134)%x135)^x136);

	if (t33 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = -44;
	int16_t x140 = INT16_MIN;

	t34 = (((x137&x138)%x139)^x140);

	if (t34 != 2147516415U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = 0U;
	static int64_t x143 = 1764714183812509793LL;
	uint64_t x144 = UINT64_MAX;

	t35 = (((x141&x142)%x143)^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static uint64_t x146 = 1134483771555595LLU;
	volatile int32_t x147 = -1;
	static volatile uint32_t x148 = UINT32_MAX;
	static uint64_t t36 = 132308874569948316LLU;

	t36 = (((x145&x146)%x147)^x148);

	if (t36 != 1134483026444287LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 9U;
	int16_t x151 = -1;
	int32_t x152 = -1;
	volatile int32_t t37 = -37126;

	t37 = (((x149&x150)%x151)^x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 171U;
	int64_t x154 = INT64_MIN;
	volatile uint64_t x155 = 3976537857774516LLU;
	static volatile int64_t x156 = -1982288764526646LL;
	uint64_t t38 = 26172165461LLU;

	t38 = (((x153&x154)%x155)^x156);

	if (t38 != 18444761784945024970LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	static int32_t x158 = -58783;
	static volatile int64_t x160 = 22LL;
	int64_t t39 = -556048834630887953LL;

	t39 = (((x157&x158)%x159)^x160);

	if (t39 != 119LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile uint64_t t40 = 4472381447751LLU;

	t40 = (((x161&x162)%x163)^x164);

	if (t40 != 65534LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x167 = 6U;
	int64_t x168 = 283507723730240031LL;
	volatile uint64_t t41 = 7LLU;

	t41 = (((x165&x166)%x167)^x168);

	if (t41 != 283507723730240026LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = 6725566LLU;
	int32_t x172 = INT32_MAX;
	volatile uint64_t t42 = 5059616LLU;

	t42 = (((x169&x170)%x171)^x172);

	if (t42 != 2140758081LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	uint64_t x174 = 187269539207275LLU;
	uint8_t x175 = 61U;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t43 = 1703604LLU;

	t43 = (((x173&x174)%x175)^x176);

	if (t43 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -343229636058224LL;
	int64_t x178 = -1LL;
	uint32_t x179 = 678586114U;
	uint32_t x180 = 9159U;
	int64_t t44 = 1LL;

	t44 = (((x177&x178)%x179)^x180);

	if (t44 != -101019163LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 122599U;
	volatile int64_t x183 = INT64_MAX;
	int32_t x184 = 3;
	int64_t t45 = -16428562734503LL;

	t45 = (((x181&x182)%x183)^x184);

	if (t45 != 122596LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static int16_t x186 = INT16_MAX;
	uint64_t x187 = 4299711LLU;
	int8_t x188 = 0;
	volatile uint64_t t46 = 1472041688490LLU;

	t46 = (((x185&x186)%x187)^x188);

	if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	static int16_t x190 = 0;
	volatile int32_t x191 = INT32_MAX;
	uint8_t x192 = 28U;
	static volatile uint32_t t47 = 465U;

	t47 = (((x189&x190)%x191)^x192);

	if (t47 != 28U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 18U;
	int16_t x194 = 4;
	static int32_t x195 = -5;
	int64_t x196 = INT64_MIN;

	t48 = (((x193&x194)%x195)^x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 0LLU;
	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = 4442;
	volatile int16_t x200 = INT16_MIN;
	uint64_t t49 = 5447835LLU;

	t49 = (((x197&x198)%x199)^x200);

	if (t49 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	uint64_t x202 = 3996621586524139LLU;
	int32_t x203 = INT32_MIN;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (((x201&x202)%x203)^x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 1;
	int16_t x206 = 12220;
	int8_t x207 = INT8_MIN;
	int32_t t51 = INT32_MIN;

	t51 = (((x205&x206)%x207)^x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = -8051076;
	static volatile int64_t x211 = 1028869448905801113LL;
	int64_t t52 = -26289442994LL;

	t52 = (((x209&x210)%x211)^x212);

	if (t52 != 124LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 107;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	static int64_t x216 = INT64_MIN;
	static int64_t t53 = INT64_MIN;

	t53 = (((x213&x214)%x215)^x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	int8_t x218 = INT8_MIN;
	int8_t x219 = 5;
	uint8_t x220 = 5U;

	t54 = (((x217&x218)%x219)^x220);

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -16347697802LL;
	int64_t x223 = 2217057030441214LL;
	volatile uint64_t x224 = 1375189796LLU;
	volatile uint64_t t55 = 61816329296LLU;

	t55 = (((x221&x222)%x223)^x224);

	if (t55 != 18446744057904872228LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	int64_t x227 = -1LL;
	static volatile int32_t x228 = INT32_MAX;
	volatile int64_t t56 = 1381693879703233LL;

	t56 = (((x225&x226)%x227)^x228);

	if (t56 != 2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x230 = 10072LLU;
	static volatile int32_t x231 = INT32_MIN;
	volatile uint64_t t57 = 105879LLU;

	t57 = (((x229&x230)%x231)^x232);

	if (t57 != 15519LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x235 = INT16_MAX;
	volatile uint64_t t58 = 936511340111747681LLU;

	t58 = (((x233&x234)%x235)^x236);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 0;
	int64_t x238 = 89701LL;
	int64_t t59 = -445899858534756LL;

	t59 = (((x237&x238)%x239)^x240);

	if (t59 != 33LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	static volatile int8_t x243 = -2;
	int64_t x244 = 6515029472LL;

	t60 = (((x241&x242)%x243)^x244);

	if (t60 != 6515029472LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile int8_t x246 = -1;
	static int64_t x247 = INT64_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = (((x245&x246)%x247)^x248);

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = UINT8_MAX;
	static int32_t x251 = 119;
	volatile int32_t t62 = 1668113;

	t62 = (((x249&x250)%x251)^x252);

	if (t62 != -18) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MAX;
	volatile uint64_t t63 = 96158LLU;

	t63 = (((x253&x254)%x255)^x256);

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -2856517307490635128LL;

	t64 = (((x257&x258)%x259)^x260);

	if (t64 != -9LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 0;
	int8_t x263 = -4;
	int8_t x264 = -1;
	volatile int32_t t65 = 30281013;

	t65 = (((x261&x262)%x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x265&x266)%x267)^x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -31087;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = INT16_MIN;

	t67 = (((x269&x270)%x271)^x272);

	if (t67 != -31087) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -2LL;
	uint16_t x274 = UINT16_MAX;
	int32_t x276 = -384476;
	int64_t t68 = -2686LL;

	t68 = (((x273&x274)%x275)^x276);

	if (t68 != -384855LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = 8033150139692LL;
	static volatile int8_t x278 = INT8_MIN;
	static uint16_t x280 = 7829U;
	int64_t t69 = 799416978LL;

	t69 = (((x277&x278)%x279)^x280);

	if (t69 != 7830LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = 118751358637740599LLU;
	int32_t x283 = INT32_MIN;
	uint64_t t70 = 7744100004109512LLU;

	t70 = (((x281&x282)%x283)^x284);

	if (t70 != 118751358637740853LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 1;
	int64_t t71 = 2848337362288997915LL;

	t71 = (((x285&x286)%x287)^x288);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -4;

	t72 = (((x289&x290)%x291)^x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint16_t x294 = 14690U;
	int16_t x295 = -6743;
	uint8_t x296 = 4U;
	volatile int64_t t73 = 58127LL;

	t73 = (((x293&x294)%x295)^x296);

	if (t73 != 4LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static uint8_t x299 = UINT8_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile int64_t t74 = -43207123378163467LL;

	t74 = (((x297&x298)%x299)^x300);

	if (t74 != 4294967168LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = 41;
	int8_t x303 = INT8_MIN;

	t75 = (((x301&x302)%x303)^x304);

	if (t75 != 32726LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x308 = 0;
	int64_t t76 = -37011632266549LL;

	t76 = (((x305&x306)%x307)^x308);

	if (t76 != 30600199LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = 242;
	static uint64_t x311 = 87437LLU;
	int32_t x312 = INT32_MIN;
	volatile uint64_t t77 = 13LLU;

	t77 = (((x309&x310)%x311)^x312);

	if (t77 != 18446744071562068096LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = -1;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = 29;

	t78 = (((x313&x314)%x315)^x316);

	if (t78 != -65536) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	static volatile int32_t t79 = INT32_MAX;

	t79 = (((x317&x318)%x319)^x320);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int64_t x322 = -458850318553LL;
	static int64_t x323 = INT64_MAX;
	static volatile int8_t x324 = -1;
	int64_t t80 = 503173LL;

	t80 = (((x321&x322)%x323)^x324);

	if (t80 != -711182120LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 4323146139907409LLU;
	int16_t x326 = INT16_MIN;
	static volatile uint8_t x327 = 2U;
	static volatile uint64_t t81 = 22010773421399696LLU;

	t81 = (((x325&x326)%x327)^x328);

	if (t81 != 1748LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x333 = 0;
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = -1812LL;
	uint16_t x336 = 103U;
	static volatile int64_t t82 = -15752LL;

	t82 = (((x333&x334)%x335)^x336);

	if (t82 != 103LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	volatile int64_t x339 = INT64_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int64_t t83 = -84745371592822569LL;

	t83 = (((x337&x338)%x339)^x340);

	if (t83 != -32769LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x342 = INT8_MIN;
	volatile int8_t x343 = INT8_MIN;
	uint64_t t84 = 406756243586509LLU;

	t84 = (((x341&x342)%x343)^x344);

	if (t84 != 9223372036848165375LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = 158842640175LL;
	static int64_t x346 = 9567571992LL;
	int64_t x347 = INT64_MIN;
	static uint32_t x348 = UINT32_MAX;
	static volatile int64_t t85 = -89226LL;

	t85 = (((x345&x346)%x347)^x348);

	if (t85 != 3317690359LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = 1U;
	uint8_t x350 = 0U;
	static volatile uint64_t x351 = 3199915861554507379LLU;
	uint32_t x352 = 863U;

	t86 = (((x349&x350)%x351)^x352);

	if (t86 != 863LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = 24U;
	static int32_t x354 = 94471409;
	uint16_t x355 = 1618U;
	int64_t x356 = INT64_MAX;
	static int64_t t87 = -1479712753297LL;

	t87 = (((x353&x354)%x355)^x356);

	if (t87 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MIN;
	volatile int8_t x358 = INT8_MIN;
	volatile int8_t x359 = INT8_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (((x357&x358)%x359)^x360);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -3;
	static int8_t x362 = INT8_MIN;
	int64_t x363 = INT64_MIN;
	volatile int16_t x364 = INT16_MAX;
	volatile int64_t t89 = -482LL;

	t89 = (((x361&x362)%x363)^x364);

	if (t89 != -32641LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = -109629616527024391LL;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = INT64_MIN;
	volatile int64_t t90 = 655980626441LL;

	t90 = (((x365&x366)%x367)^x368);

	if (t90 != 9223372033330815238LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = -1LL;
	int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	int64_t t91 = INT64_MIN;

	t91 = (((x369&x370)%x371)^x372);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = 2U;
	uint32_t x374 = 4744290U;
	uint32_t x375 = UINT32_MAX;
	int32_t x376 = -54997;
	volatile uint32_t t92 = 871905270U;

	t92 = (((x373&x374)%x375)^x376);

	if (t92 != 4294912297U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	static int64_t x379 = -1LL;
	static int8_t x380 = 3;
	int64_t t93 = 0LL;

	t93 = (((x377&x378)%x379)^x380);

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x381 = -90613131;
	int8_t x382 = 56;
	int16_t x383 = -27;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t94 = 1;

	t94 = (((x381&x382)%x383)^x384);

	if (t94 != 234) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x385 = INT8_MAX;
	volatile uint64_t x386 = 30917729757554LLU;
	static int64_t x388 = INT64_MIN;

	t95 = (((x385&x386)%x387)^x388);

	if (t95 != 9223372036854775922LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x389 = INT32_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	static uint64_t t96 = 31291061039LLU;

	t96 = (((x389&x390)%x391)^x392);

	if (t96 != 255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = INT32_MIN;
	uint16_t x395 = UINT16_MAX;

	t97 = (((x393&x394)%x395)^x396);

	if (t97 != 19633LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 54406286U;
	volatile int32_t x400 = INT32_MAX;

	t98 = (((x397&x398)%x399)^x400);

	if (t98 != 2121845153U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = 29820U;
	int32_t x402 = INT32_MIN;
	int32_t x404 = INT32_MIN;
	int32_t t99 = INT32_MIN;

	t99 = (((x401&x402)%x403)^x404);

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

