#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static volatile int32_t t0 = -3;
int16_t x8 = -3;
int8_t x22 = -1;
static uint16_t x37 = UINT16_MAX;
int8_t x40 = INT8_MIN;
int16_t x47 = INT16_MIN;
int32_t x49 = INT32_MIN;
uint64_t x54 = 39930012LLU;
uint8_t x55 = 30U;
static uint32_t x66 = 28U;
int32_t x68 = 51967435;
static volatile int64_t t14 = 125246150895LL;
static int32_t x69 = 33831;
int8_t x70 = INT8_MAX;
uint32_t x71 = 0U;
volatile int8_t x72 = INT8_MIN;
volatile uint16_t x82 = UINT16_MAX;
int64_t x84 = INT64_MIN;
int16_t x87 = INT16_MIN;
volatile uint64_t t20 = 10953029893339LLU;
int64_t x99 = -1LL;
int64_t t22 = -677581626710460LL;
int8_t x101 = 1;
int64_t t23 = -5833064091433742LL;
volatile int16_t x106 = -1;
volatile uint64_t t24 = UINT64_MAX;
int64_t t26 = -23301LL;
static int8_t x122 = -1;
int32_t x125 = INT32_MIN;
static volatile int16_t x129 = -353;
volatile int16_t x131 = 1;
int64_t t31 = -59401223975038410LL;
int32_t x144 = -1;
uint32_t x154 = 3535U;
volatile uint8_t x156 = 27U;
uint32_t t36 = 1U;
volatile int16_t x167 = -1;
volatile uint64_t x174 = UINT64_MAX;
static uint32_t x179 = 222840348U;
uint8_t x180 = 0U;
uint64_t x181 = 22LLU;
volatile int8_t x182 = INT8_MIN;
uint64_t x183 = 11067242239615LLU;
static int8_t x184 = -1;
int8_t x185 = INT8_MIN;
uint16_t x189 = 181U;
int8_t x196 = 59;
uint8_t x205 = 7U;
uint64_t t47 = 457663156073484LLU;
static int64_t x218 = INT64_MAX;
volatile int64_t t51 = -16180062LL;
int8_t x225 = 0;
volatile int64_t x231 = INT64_MIN;
int64_t t53 = INT64_MIN;
static int32_t x234 = -72448356;
int32_t x236 = INT32_MIN;
volatile int64_t t54 = -190907283643429542LL;
volatile int16_t x239 = -1;
volatile int16_t x245 = INT16_MAX;
static int32_t x257 = -1;
int32_t x262 = -1491279;
uint8_t x272 = 44U;
static int16_t x287 = INT16_MAX;
uint32_t x288 = 31U;
int32_t t66 = 503010531;
int16_t x293 = INT16_MIN;
uint64_t x296 = 22431628LLU;
static uint16_t x297 = UINT16_MAX;
int16_t x298 = INT16_MIN;
volatile int8_t x300 = -58;
static volatile int64_t x307 = 3LL;
uint64_t t70 = 54688160670LLU;
static uint8_t x309 = 0U;
int8_t x313 = -1;
uint8_t x314 = UINT8_MAX;
uint16_t x324 = 3U;
int32_t t73 = 355817536;
static uint32_t x328 = 73806U;
int64_t x330 = INT64_MAX;
volatile int32_t x336 = -3037852;
int64_t x345 = INT64_MAX;
volatile int32_t x347 = -144;
int32_t x349 = 4033132;
int64_t x358 = 64332037376426LL;
uint64_t x367 = 191562296912346810LLU;
int8_t x368 = INT8_MAX;
static int8_t x370 = -1;
static volatile int16_t x371 = INT16_MIN;
int8_t x379 = 1;
volatile int32_t x382 = -99;
int8_t x386 = INT8_MIN;
uint16_t x391 = UINT16_MAX;
static volatile uint16_t x392 = 10U;
int16_t x396 = INT16_MIN;
uint32_t t89 = 44752721U;
int32_t t90 = -304;
volatile int32_t x408 = INT32_MIN;
uint8_t x410 = 52U;
uint16_t x415 = 60U;
volatile uint16_t x423 = 5936U;
volatile int64_t x424 = INT64_MIN;
int64_t x429 = INT64_MAX;
static uint32_t x434 = UINT32_MAX;
uint16_t x436 = 5U;


void f0(void) {
	volatile uint8_t x1 = 2U;
	volatile int16_t x2 = -7;
	int8_t x3 = 1;

	t0 = ((x1&(x2-x3))|x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	static uint8_t x7 = 9U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5&(x6-x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	static int64_t x14 = 105112984003863659LL;
	int8_t x15 = -1;
	int8_t x16 = 49;
	volatile int64_t t2 = -28943LL;

	t2 = ((x13&(x14-x15))|x16);

	if (t2 != 3100959869LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	uint16_t x23 = 90U;
	int8_t x24 = 26;
	int64_t t3 = 71475LL;

	t3 = ((x21&(x22-x23))|x24);

	if (t3 != -65LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 8127U;
	uint64_t x26 = 24940LLU;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -62;
	uint64_t t4 = 980968303345611348LLU;

	t4 = ((x25&(x26-x27))|x28);

	if (t4 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 26U;
	volatile uint8_t x30 = 16U;
	int16_t x31 = INT16_MIN;
	volatile int32_t x32 = INT32_MIN;
	static volatile int32_t t5 = -63;

	t5 = ((x29&(x30-x31))|x32);

	if (t5 != -2147483632) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MAX;
	volatile uint8_t x35 = 0U;
	static int64_t x36 = 131814844180961LL;
	static uint64_t t6 = 218645086577LLU;

	t6 = ((x33&(x34-x35))|x36);

	if (t6 != 131814844180991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x38 = UINT64_MAX;
	volatile int16_t x39 = INT16_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x37&(x38-x39))|x40);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x42 = INT16_MAX;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t8 = -974536959;

	t8 = ((x41&(x42-x43))|x44);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	uint32_t t9 = UINT32_MAX;

	t9 = ((x45&(x46-x47))|x48);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile uint64_t x52 = 152691370LLU;
	volatile uint64_t t10 = 11715574LLU;

	t10 = ((x49&(x50-x51))|x52);

	if (t10 != 152691370LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	int32_t x56 = -248;
	volatile uint64_t t11 = 382864734502472063LLU;

	t11 = ((x53&(x54-x55))|x56);

	if (t11 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	static int64_t x60 = INT64_MAX;
	volatile int64_t t12 = 5LL;

	t12 = ((x57&(x58-x59))|x60);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 70479U;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = 810685946692565LL;

	t13 = ((x61&(x62-x63))|x64);

	if (t13 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 25U;
	static int64_t x67 = -15LL;

	t14 = ((x65&(x66-x67))|x68);

	if (t14 != 51967435LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t t15 = 28799536U;

	t15 = ((x69&(x70-x71))|x72);

	if (t15 != 4294967207U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	volatile int32_t x74 = INT32_MIN;
	volatile int8_t x75 = INT8_MIN;
	volatile int64_t x76 = 4883238630LL;
	volatile int64_t t16 = 830037465LL;

	t16 = ((x73&(x74-x75))|x76);

	if (t16 != -1559212314LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = INT16_MAX;
	int64_t x78 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x77&(x78-x79))|x80);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int32_t x83 = 1357652;
	volatile int64_t t18 = -3042283697080593LL;

	t18 = ((x81&(x82-x83))|x84);

	if (t18 != -9223372032561100629LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = -288714332763LL;
	uint8_t x88 = 92U;
	volatile int64_t t19 = 567896413LL;

	t19 = ((x85&(x86-x87))|x88);

	if (t19 != -288714325924LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	uint64_t x90 = 805823532692845LLU;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;

	t20 = ((x89&(x90-x91))|x92);

	if (t20 != 18446744073330685293LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = 0U;
	int64_t x94 = 3804248644LL;
	volatile int32_t x95 = -251316;
	uint16_t x96 = UINT16_MAX;
	volatile int64_t t21 = -233623328335568LL;

	t21 = ((x93&(x94-x95))|x96);

	if (t21 != 65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 115U;
	int16_t x98 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;

	t22 = ((x97&(x98-x99))|x100);

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x102 = -1LL;
	volatile uint16_t x103 = 87U;
	uint8_t x104 = UINT8_MAX;

	t23 = ((x101&(x102-x103))|x104);

	if (t23 != 255LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 2U;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = UINT64_MAX;

	t24 = ((x105&(x106-x107))|x108);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 1623LLU;
	int32_t x110 = INT32_MIN;
	static uint32_t x111 = 2484069U;
	int64_t x112 = INT64_MIN;
	static uint64_t t25 = 1610266653891LLU;

	t25 = ((x109&(x110-x111))|x112);

	if (t25 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -2995;
	int32_t x118 = 21315;
	int64_t x119 = -1LL;
	static uint16_t x120 = 14082U;

	t26 = ((x117&(x118-x119))|x120);

	if (t26 != 30534LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	uint32_t x123 = 38U;
	int32_t x124 = INT32_MIN;
	volatile uint32_t t27 = 7438U;

	t27 = ((x121&(x122-x123))|x124);

	if (t27 != 4294967257U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -1;
	volatile int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

	t28 = ((x125&(x126-x127))|x128);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = -1;
	static int16_t x132 = -1;
	int32_t t29 = 391;

	t29 = ((x129&(x130-x131))|x132);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 628403967LLU;
	uint16_t x135 = UINT16_MAX;
	static uint64_t x136 = 12525190413852645LLU;
	uint64_t t30 = 3083360330LLU;

	t30 = ((x133&(x134-x135))|x136);

	if (t30 != 12525190416154597LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 0;
	uint32_t x138 = 86807373U;
	volatile int8_t x139 = INT8_MIN;
	static int64_t x140 = -365920421235173296LL;

	t31 = ((x137&(x138-x139))|x140);

	if (t31 != -365920421235173296LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = INT32_MAX;
	uint32_t x142 = UINT32_MAX;
	static int8_t x143 = -1;
	static volatile uint32_t t32 = UINT32_MAX;

	t32 = ((x141&(x142-x143))|x144);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 2707U;
	volatile int8_t x146 = INT8_MAX;
	volatile uint8_t x147 = UINT8_MAX;
	uint16_t x148 = 1047U;
	int32_t t33 = -53;

	t33 = ((x145&(x146-x147))|x148);

	if (t33 != 3735) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x149 = 3151U;
	static uint64_t x150 = 3163LLU;
	uint64_t x151 = 2102706573316LLU;
	volatile int32_t x152 = INT32_MIN;
	static uint64_t t34 = 2LLU;

	t34 = ((x149&(x150-x151))|x152);

	if (t34 != 18446744071562071111LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	int16_t x155 = -104;
	static volatile uint32_t t35 = 12597U;

	t35 = ((x153&(x154-x155))|x156);

	if (t35 != 63U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MAX;
	uint32_t x158 = 965680U;
	uint32_t x159 = UINT32_MAX;
	static int8_t x160 = INT8_MAX;

	t36 = ((x157&(x158-x159))|x160);

	if (t36 != 965759U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = 1624U;
	static int16_t x163 = -57;
	int32_t x164 = INT32_MAX;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x161&(x162-x163))|x164);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int16_t x166 = 1;
	uint32_t x168 = 381540U;
	volatile uint32_t t38 = 2106238U;

	t38 = ((x165&(x166-x167))|x168);

	if (t38 != 381542U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = -1;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -797484151894310844LL;
	static uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x169&(x170-x171))|x172);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x173 = 2105343252868LLU;
	uint8_t x175 = 33U;
	int64_t x176 = -253825920565LL;
	uint64_t t40 = 234667825LLU;

	t40 = ((x173&(x174-x175))|x176);

	if (t40 != 18446744000544102863LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 2U;
	static uint64_t x178 = 55468303994150976LLU;
	uint64_t t41 = 1128661548536731LLU;

	t41 = ((x177&(x178-x179))|x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x181&(x182-x183))|x184);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x186 = INT8_MIN;
	int8_t x187 = 49;
	int32_t x188 = INT32_MIN;
	int32_t t43 = -26;

	t43 = ((x185&(x186-x187))|x188);

	if (t43 != -256) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x190 = -1;
	volatile int8_t x191 = INT8_MIN;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t44 = -7332;

	t44 = ((x189&(x190-x191))|x192);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	volatile int32_t t45 = -859469166;

	t45 = ((x193&(x194-x195))|x196);

	if (t45 != 187) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = 1;
	uint64_t x203 = 37LLU;
	uint64_t x204 = 38397LLU;
	uint64_t t46 = 65627015417341LLU;

	t46 = ((x201&(x202-x203))|x204);

	if (t46 != 4294967293LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x206 = 1012LLU;
	int16_t x207 = 1564;
	uint64_t x208 = 253057499414LLU;

	t47 = ((x205&(x206-x207))|x208);

	if (t47 != 253057499414LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = INT32_MAX;
	int64_t x210 = INT64_MAX;
	int32_t x211 = INT32_MAX;
	uint8_t x212 = UINT8_MAX;
	int64_t t48 = -2121564658161LL;

	t48 = ((x209&(x210-x211))|x212);

	if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = 8;
	volatile uint32_t x214 = 168900U;
	int16_t x215 = -1;
	uint16_t x216 = 0U;
	volatile uint32_t t49 = 386321823U;

	t49 = ((x213&(x214-x215))|x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x217 = INT64_MIN;
	volatile uint8_t x219 = 0U;
	uint64_t x220 = 5150569044752LLU;
	uint64_t t50 = 365265LLU;

	t50 = ((x217&(x218-x219))|x220);

	if (t50 != 5150569044752LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = 10;
	int64_t x222 = -137517167520798088LL;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;

	t51 = ((x221&(x222-x223))|x224);

	if (t51 != -32760LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x226 = 270430U;
	static uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MIN;
	static volatile uint32_t t52 = 86634U;

	t52 = ((x225&(x226-x227))|x228);

	if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 17;
	int64_t x230 = -156250974LL;
	int64_t x232 = INT64_MIN;

	t53 = ((x229&(x230-x231))|x232);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = -2103900770290LL;
	volatile int8_t x235 = 8;

	t54 = ((x233&(x234-x235))|x236);

	if (t54 != -1582530556LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = 40;
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x240 = 237986986404147LL;
	volatile int64_t t55 = -487528887LL;

	t55 = ((x237&(x238-x239))|x240);

	if (t55 != 237986986404147LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	static volatile int8_t x248 = INT8_MIN;
	int32_t t56 = -37;

	t56 = ((x245&(x246-x247))|x248);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x253 = INT8_MAX;
	uint32_t x254 = 64928661U;
	uint16_t x255 = UINT16_MAX;
	volatile int16_t x256 = -1;
	uint32_t t57 = UINT32_MAX;

	t57 = ((x253&(x254-x255))|x256);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x258 = 8U;
	uint8_t x259 = 8U;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x257&(x258-x259))|x260);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = -1LL;
	uint32_t x263 = UINT32_MAX;
	static int16_t x264 = 366;
	volatile int64_t t59 = 6LL;

	t59 = ((x261&(x262-x263))|x264);

	if (t59 != 4293476350LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = 1LLU;
	volatile int8_t x266 = 1;
	static int8_t x267 = 2;
	uint8_t x268 = 3U;
	uint64_t t60 = 4250233956032LLU;

	t60 = ((x265&(x266-x267))|x268);

	if (t60 != 3LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = 8387204037444LLU;
	volatile uint64_t t61 = 2266833266518LLU;

	t61 = ((x269&(x270-x271))|x272);

	if (t61 != 9223363647503254716LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x273 = 2592018340747LL;
	uint16_t x274 = UINT16_MAX;
	static volatile int64_t x275 = INT64_MAX;
	int8_t x276 = -1;
	static int64_t t62 = -1LL;

	t62 = ((x273&(x274-x275))|x276);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = -171560LL;
	static uint8_t x278 = 3U;
	int64_t x279 = -1LL;
	uint32_t x280 = 2233U;
	int64_t t63 = 15340118146198LL;

	t63 = ((x277&(x278-x279))|x280);

	if (t63 != 2233LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x281 = 209058885;
	static uint8_t x282 = 10U;
	uint64_t x283 = UINT64_MAX;
	volatile int16_t x284 = -2;
	static uint64_t t64 = UINT64_MAX;

	t64 = ((x281&(x282-x283))|x284);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -1;
	static uint16_t x286 = UINT16_MAX;
	volatile uint32_t t65 = 746624976U;

	t65 = ((x285&(x286-x287))|x288);

	if (t65 != 32799U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = UINT16_MAX;
	volatile uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	static uint8_t x292 = 0U;

	t66 = ((x289&(x290-x291))|x292);

	if (t66 != 383) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x294 = INT8_MIN;
	uint16_t x295 = 628U;
	uint64_t t67 = 1047679255559LLU;

	t67 = ((x293&(x294-x295))|x296);

	if (t67 != 18446744073709537164LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x299 = INT64_MIN;
	static volatile int64_t t68 = 15940603023281842LL;

	t68 = ((x297&(x298-x299))|x300);

	if (t68 != -58LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x301 = -102108592LL;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MAX;
	uint32_t x304 = 1931U;
	int64_t t69 = 3LL;

	t69 = ((x301&(x302-x303))|x304);

	if (t69 != 63371LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MAX;
	uint64_t x306 = UINT64_MAX;
	static uint64_t x308 = 6364053LLU;

	t70 = ((x305&(x306-x307))|x308);

	if (t70 != 6389757LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x310 = 33721;
	int64_t x311 = 19136579010LL;
	int32_t x312 = INT32_MIN;
	static int64_t t71 = -473147944283239LL;

	t71 = ((x309&(x310-x311))|x312);

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x315 = 351515U;
	static uint16_t x316 = UINT16_MAX;
	static uint32_t t72 = 575236U;

	t72 = ((x313&(x314-x315))|x316);

	if (t72 != 4294639615U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -2385;
	int16_t x322 = -10;
	uint8_t x323 = 101U;

	t73 = ((x321&(x322-x323))|x324);

	if (t73 != -2429) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 0U;
	int64_t t74 = 128519916401LL;

	t74 = ((x325&(x326-x327))|x328);

	if (t74 != 73806LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = -1;
	volatile uint16_t x331 = UINT16_MAX;
	static uint64_t x332 = 136906720182683146LLU;
	static uint64_t t75 = 3606093510LLU;

	t75 = ((x329&(x330-x331))|x332);

	if (t75 != 9223372036854728202LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = 6;
	volatile int32_t x334 = -1;
	int8_t x335 = INT8_MAX;
	volatile int32_t t76 = -924;

	t76 = ((x333&(x334-x335))|x336);

	if (t76 != -3037852) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = INT8_MIN;
	uint8_t x338 = 3U;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 11675147U;
	uint32_t t77 = 361193801U;

	t77 = ((x337&(x338-x339))|x340);

	if (t77 != 11675147U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x346 = -8051;
	volatile uint16_t x348 = 19U;
	volatile int64_t t78 = 26944977991206835LL;

	t78 = ((x345&(x346-x347))|x348);

	if (t78 != 9223372036854767903LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x350 = INT32_MAX;
	static int16_t x351 = INT16_MAX;
	static volatile uint8_t x352 = 95U;
	volatile int32_t t79 = -12;

	t79 = ((x349&(x350-x351))|x352);

	if (t79 != 4030559) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MAX;
	static uint8_t x355 = UINT8_MAX;
	static int16_t x356 = INT16_MIN;
	int32_t t80 = -331;

	t80 = ((x353&(x354-x355))|x356);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = 40891U;
	uint64_t t81 = 15LLU;

	t81 = ((x357&(x358-x359))|x360);

	if (t81 != 64332037349307LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = INT64_MAX;
	uint32_t x366 = UINT32_MAX;
	volatile uint64_t t82 = 1383929821375LLU;

	t82 = ((x365&(x366-x367))|x368);

	if (t82 != 9031809744237396351LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x369 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	volatile int64_t t83 = INT64_MAX;

	t83 = ((x369&(x370-x371))|x372);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x373 = 12U;
	int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t84 = 1;

	t84 = ((x373&(x374-x375))|x376);

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x377 = 14;
	int16_t x378 = -1;
	uint8_t x380 = 1U;
	static volatile int32_t t85 = 23423196;

	t85 = ((x377&(x378-x379))|x380);

	if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint16_t x383 = 15U;
	int64_t x384 = INT64_MIN;
	uint64_t t86 = 6244854623968143494LLU;

	t86 = ((x381&(x382-x383))|x384);

	if (t86 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t87 = 1084707865LL;

	t87 = ((x385&(x386-x387))|x388);

	if (t87 != -9223372036854710400LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 101822469946784725LLU;
	uint8_t x390 = 31U;
	uint64_t t88 = 47652088199880LLU;

	t88 = ((x389&(x390-x391))|x392);

	if (t88 != 101822469946736650LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MAX;
	static volatile uint32_t x394 = UINT32_MAX;
	volatile int32_t x395 = INT32_MIN;

	t89 = ((x393&(x394-x395))|x396);

	if (t89 != 4294934655U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MAX;
	int8_t x400 = 3;

	t90 = ((x397&(x398-x399))|x400);

	if (t90 != 65411) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = -1;
	volatile int64_t x402 = -1LL;
	int16_t x403 = 70;
	volatile int32_t x404 = INT32_MIN;
	volatile int64_t t91 = 29003446LL;

	t91 = ((x401&(x402-x403))|x404);

	if (t91 != -71LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x405 = UINT32_MAX;
	int8_t x406 = -26;
	int32_t x407 = -245;
	volatile uint32_t t92 = 47697U;

	t92 = ((x405&(x406-x407))|x408);

	if (t92 != 2147483867U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = INT32_MIN;
	uint32_t x411 = 1U;
	int8_t x412 = INT8_MIN;
	uint32_t t93 = 1757U;

	t93 = ((x409&(x410-x411))|x412);

	if (t93 != 4294967168U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x413 = 8;
	volatile uint8_t x414 = 55U;
	volatile int32_t x416 = 1342;
	static int32_t t94 = 1622;

	t94 = ((x413&(x414-x415))|x416);

	if (t94 != 1342) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x418 = INT64_MAX;
	volatile uint16_t x419 = 4U;
	static int32_t x420 = -1;
	int64_t t95 = 1LL;

	t95 = ((x417&(x418-x419))|x420);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	static int16_t x422 = INT16_MIN;
	volatile int64_t t96 = -556845LL;

	t96 = ((x421&(x422-x423))|x424);

	if (t96 != -65536LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x430 = INT16_MAX;
	int32_t x431 = 36;
	uint8_t x432 = UINT8_MAX;
	volatile int64_t t97 = -1181171308916399770LL;

	t97 = ((x429&(x430-x431))|x432);

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	int8_t x435 = INT8_MAX;
	volatile uint32_t t98 = 109751392U;

	t98 = ((x433&(x434-x435))|x436);

	if (t98 != 4294967173U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x437 = 0LLU;
	static uint16_t x438 = 54U;
	static uint8_t x439 = UINT8_MAX;
	uint32_t x440 = 55739238U;
	uint64_t t99 = 58933321LLU;

	t99 = ((x437&(x438-x439))|x440);

	if (t99 != 55739238LLU) { NG(); } else { ; }
	
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

