#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 77632224;
uint64_t t2 = UINT64_MAX;
static int64_t x35 = INT64_MIN;
int32_t x48 = INT32_MAX;
int32_t x55 = INT32_MIN;
uint64_t x56 = UINT64_MAX;
int16_t x58 = INT16_MAX;
int16_t x59 = INT16_MIN;
volatile int64_t t14 = 10LL;
volatile int64_t t17 = -813466958932942LL;
int64_t x90 = -1LL;
uint64_t x99 = 55736414444456195LLU;
volatile uint64_t t21 = 1018975280671246080LLU;
int64_t t22 = 62099491669866325LL;
int8_t x107 = INT8_MAX;
uint64_t x112 = UINT64_MAX;
static volatile uint64_t t24 = UINT64_MAX;
int64_t x117 = INT64_MIN;
int8_t x119 = 3;
static volatile uint64_t x132 = 375213668827LLU;
static uint64_t x134 = 56607LLU;
uint8_t x140 = UINT8_MAX;
volatile uint8_t x160 = 123U;
volatile int8_t x165 = INT8_MAX;
int16_t x167 = -7;
uint16_t x170 = 387U;
volatile int8_t x185 = INT8_MAX;
uint16_t x188 = UINT16_MAX;
static int8_t x194 = 9;
volatile int32_t t41 = 24436795;
static volatile int8_t x208 = -1;
volatile int16_t x214 = -1;
volatile uint16_t x215 = UINT16_MAX;
int64_t t45 = -120600583428216427LL;
uint16_t x229 = UINT16_MAX;
uint16_t x231 = 11U;
uint32_t x241 = UINT32_MAX;
static volatile int16_t x242 = INT16_MIN;
int16_t x246 = INT16_MIN;
int16_t x251 = -165;
uint64_t t50 = 8813834075LLU;
int32_t x264 = 95614;
int8_t x267 = INT8_MAX;
static int16_t x269 = -1;
static int32_t x276 = -11729626;
volatile uint32_t t57 = UINT32_MAX;
int32_t x285 = INT32_MAX;
volatile int32_t t61 = 0;
int8_t x299 = -1;
int32_t x303 = 1009;
static volatile int32_t x305 = -7;
int32_t x306 = INT32_MIN;
int8_t x310 = INT8_MIN;
int64_t x311 = INT64_MIN;
int64_t t65 = 7908463LL;
volatile int16_t x315 = -21;
volatile uint16_t x316 = 7U;
int32_t x320 = INT32_MIN;
int64_t x324 = 247997LL;
volatile int64_t t68 = -33585112169206653LL;
uint8_t x326 = UINT8_MAX;
int32_t x336 = 3;
static volatile uint64_t t72 = 111190059360535LLU;
volatile int16_t x342 = INT16_MIN;
static int64_t x344 = INT64_MAX;
static int8_t x351 = INT8_MIN;
volatile int16_t x353 = -4695;
uint8_t x363 = 2U;
static uint64_t x366 = 15028561LLU;
static uint64_t t80 = UINT64_MAX;
static int16_t x380 = -1;
int64_t t82 = -9226943537349LL;
static volatile int32_t x390 = -31819;
int8_t x404 = -1;
static int8_t x407 = -1;
int64_t t88 = -324LL;
volatile uint64_t x417 = UINT64_MAX;
uint8_t x420 = 10U;
int8_t x423 = INT8_MIN;
int32_t x428 = INT32_MAX;
volatile int64_t t92 = 1LL;
static uint64_t x437 = UINT64_MAX;
int16_t x444 = INT16_MAX;
int32_t x448 = INT32_MAX;
static volatile uint64_t t96 = 5142LLU;
volatile int32_t t97 = -18921350;
uint64_t x457 = UINT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x2 = -16236LL;
	int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 3803953LL;

	t0 = ((x1*(x2%x3))|x4);

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -91841782;
	int8_t x7 = 7;
	int8_t x8 = 0;
	static volatile int32_t t1 = -5961758;

	t1 = ((x5*(x6%x7))|x8);

	if (t1 != -459208910) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 3273828LLU;
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = -1;
	int16_t x12 = -1;

	t2 = ((x9*(x10%x11))|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static uint64_t x14 = 13204237LLU;
	volatile uint64_t x15 = 55317949839013459LLU;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = 477790396546LLU;

	t3 = ((x13*(x14%x15))|x16);

	if (t3 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 2324U;
	static uint32_t x22 = 23U;
	static uint8_t x23 = 2U;
	volatile uint32_t x24 = 56U;
	uint32_t t4 = 187911605U;

	t4 = ((x21*(x22%x23))|x24);

	if (t4 != 2364U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 2U;
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = ((x25*(x26%x27))|x28);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -5011;
	int16_t x30 = -6;
	int16_t x31 = 14;
	int64_t x32 = 8661703624LL;
	int64_t t6 = 509050540822860682LL;

	t6 = ((x29*(x30%x31))|x32);

	if (t6 != 8661729274LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 0;
	int16_t x34 = INT16_MIN;
	uint16_t x36 = 5U;
	int64_t t7 = 25193484206167LL;

	t7 = ((x33*(x34%x35))|x36);

	if (t7 != 5LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 111U;
	int64_t x38 = 1923323098LL;
	static volatile uint64_t x39 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;
	uint64_t t8 = 2971555137337845712LLU;

	t8 = ((x37*(x38%x39))|x40);

	if (t8 != 213488893951LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -4309609282898607655LL;
	volatile int32_t x42 = -157;
	uint64_t x43 = 28205062072616843LLU;
	volatile int64_t x44 = 11405498604LL;
	uint64_t t9 = 345702078363LLU;

	t9 = ((x41*(x42%x43))|x44);

	if (t9 != 8121033868415596781LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 0U;
	int8_t x46 = -1;
	int32_t x47 = INT32_MIN;
	int32_t t10 = INT32_MAX;

	t10 = ((x45*(x46%x47))|x48);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x53*(x54%x55))|x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 3U;
	int16_t x60 = -1;
	uint32_t t12 = UINT32_MAX;

	t12 = ((x57*(x58%x59))|x60);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -13;
	int8_t x62 = 3;
	volatile uint16_t x63 = 2U;
	uint64_t x64 = 947620277413304785LLU;
	volatile uint64_t t13 = 172963LLU;

	t13 = ((x61*(x62%x63))|x64);

	if (t13 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	static uint32_t x66 = UINT32_MAX;
	volatile int16_t x67 = 6;
	int64_t x68 = INT64_MIN;

	t14 = ((x65*(x66%x67))|x68);

	if (t14 != -9223372032559808515LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int64_t x74 = INT64_MIN;
	volatile int16_t x75 = -1;
	int8_t x76 = -27;
	int64_t t15 = 0LL;

	t15 = ((x73*(x74%x75))|x76);

	if (t15 != -27LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 1;
	static volatile int8_t x78 = 0;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x77*(x78%x79))|x80);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MIN;
	static int64_t x83 = -2484612855690205982LL;
	int32_t x84 = INT32_MIN;

	t17 = ((x81*(x82%x83))|x84);

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	int16_t x86 = 234;
	static int8_t x87 = INT8_MAX;
	uint32_t x88 = 26422416U;
	uint32_t t18 = 9U;

	t18 = ((x85*(x86%x87))|x88);

	if (t18 != 4294967189U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = INT32_MIN;
	uint16_t x91 = 45U;
	int64_t x92 = INT64_MIN;
	int64_t t19 = 5LL;

	t19 = ((x89*(x90%x91))|x92);

	if (t19 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = 3;
	int32_t x95 = -186739320;
	int64_t x96 = -1LL;
	int64_t t20 = 110588810037814LL;

	t20 = ((x93*(x94%x95))|x96);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = -1LL;
	volatile int32_t x98 = INT32_MIN;
	static int8_t x100 = INT8_MIN;

	t21 = ((x97*(x98%x99))|x100);

	if (t21 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MAX;
	static int32_t x104 = INT32_MAX;

	t22 = ((x101*(x102%x103))|x104);

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = 7278;
	int16_t x106 = -1;
	volatile int64_t x108 = -3LL;
	volatile int64_t t23 = 141067434893016635LL;

	t23 = ((x105*(x106%x107))|x108);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	uint16_t x110 = 15U;
	int64_t x111 = INT64_MIN;

	t24 = ((x109*(x110%x111))|x112);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = 25467778960LLU;
	static uint32_t x120 = 666117790U;
	static uint64_t t25 = 58287LLU;

	t25 = ((x117*(x118%x119))|x120);

	if (t25 != 9223372037520893598LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	volatile int64_t x123 = INT64_MIN;
	volatile uint16_t x124 = 6U;
	volatile int64_t t26 = 1861047LL;

	t26 = ((x121*(x122%x123))|x124);

	if (t26 != -272730423290LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int64_t x130 = 87LL;
	int16_t x131 = -1;
	volatile uint64_t t27 = 21057925528601675LLU;

	t27 = ((x129*(x130%x131))|x132);

	if (t27 != 375213668827LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -185;
	int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t28 = 140547829080561LLU;

	t28 = ((x133*(x134%x135))|x136);

	if (t28 != 18446744073699079321LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = UINT8_MAX;
	int16_t x138 = -5839;
	volatile int8_t x139 = INT8_MAX;
	volatile int32_t t29 = -47041574;

	t29 = ((x137*(x138%x139))|x140);

	if (t29 != -31489) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MIN;
	volatile uint64_t x150 = 54869367764696LLU;
	int16_t x151 = -2;
	uint8_t x152 = UINT8_MAX;
	volatile uint64_t t30 = 7LLU;

	t30 = ((x149*(x150%x151))|x152);

	if (t30 != 18439720794635670783LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = 437U;
	uint16_t x154 = 1U;
	uint8_t x155 = 1U;
	volatile int16_t x156 = 233;
	static volatile uint32_t t31 = 111U;

	t31 = ((x153*(x154%x155))|x156);

	if (t31 != 233U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 39U;
	int32_t x158 = -1;
	int8_t x159 = INT8_MAX;
	volatile int32_t t32 = 111002;

	t32 = ((x157*(x158%x159))|x160);

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = -50;
	volatile int16_t x162 = INT16_MAX;
	static int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	int64_t t33 = -52LL;

	t33 = ((x161*(x162%x163))|x164);

	if (t33 != -78LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x166 = INT16_MIN;
	int64_t x168 = 297299LL;
	int64_t t34 = 296975565LL;

	t34 = ((x165*(x166%x167))|x168);

	if (t34 != -45LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -1LL;
	uint64_t x171 = 2769879777601005LLU;
	static uint16_t x172 = UINT16_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x169*(x170%x171))|x172);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x177 = UINT16_MAX;
	int32_t x178 = INT32_MIN;
	volatile uint8_t x179 = 8U;
	int16_t x180 = INT16_MIN;
	volatile int32_t t36 = -319334798;

	t36 = ((x177*(x178%x179))|x180);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x181 = 2166018LLU;
	int8_t x182 = -1;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile uint64_t t37 = 27LLU;

	t37 = ((x181*(x182%x183))|x184);

	if (t37 != 18446744073707388927LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = -2;
	volatile int32_t t38 = 1;

	t38 = ((x185*(x186%x187))|x188);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x193 = 61;
	volatile int64_t x195 = INT64_MIN;
	uint16_t x196 = 4792U;
	volatile int64_t t39 = 358129779182279LL;

	t39 = ((x193*(x194%x195))|x196);

	if (t39 != 4797LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 7U;
	uint64_t x199 = 740855LLU;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t40 = 104536903099420LLU;

	t40 = ((x197*(x198%x199))|x200);

	if (t40 != 18446744073709550720LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = -3;
	volatile int8_t x203 = 54;
	volatile int16_t x204 = INT16_MAX;

	t41 = ((x201*(x202%x203))|x204);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -604838LL;
	uint32_t x206 = 76U;
	int8_t x207 = -1;
	static int64_t t42 = -1433539700526913893LL;

	t42 = ((x205*(x206%x207))|x208);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x209 = -1;
	int32_t x210 = INT32_MAX;
	static volatile uint16_t x211 = UINT16_MAX;
	int16_t x212 = 1406;
	int32_t t43 = -32;

	t43 = ((x209*(x210%x211))|x212);

	if (t43 != -31361) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = -1;
	int32_t x216 = 28833755;
	volatile int32_t t44 = -20072540;

	t44 = ((x213*(x214%x215))|x216);

	if (t44 != 28833755) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = INT8_MIN;
	uint8_t x218 = 36U;
	static uint8_t x219 = 39U;
	int64_t x220 = -1LL;

	t45 = ((x217*(x218%x219))|x220);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	volatile int64_t x227 = INT64_MIN;
	int8_t x228 = -1;
	volatile int64_t t46 = -45015602508LL;

	t46 = ((x225*(x226%x227))|x228);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x230 = INT32_MIN;
	int64_t x232 = INT64_MAX;
	volatile int64_t t47 = 467122690413095711LL;

	t47 = ((x229*(x230%x231))|x232);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x243 = 151543339U;
	static int16_t x244 = 417;
	static uint32_t t48 = 0U;

	t48 = ((x241*(x242%x243))|x244);

	if (t48 != 4243246517U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = 208464LL;
	volatile uint8_t x247 = 53U;
	int8_t x248 = -22;
	volatile int64_t t49 = -29LL;

	t49 = ((x245*(x246%x247))|x248);

	if (t49 != -22LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x249 = UINT8_MAX;
	uint64_t x250 = UINT64_MAX;
	volatile int64_t x252 = -57313LL;

	t50 = ((x249*(x250%x251))|x252);

	if (t50 != 18446744073709527903LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x253 = 193U;
	volatile int64_t x254 = -136LL;
	volatile int16_t x255 = INT16_MAX;
	static uint64_t x256 = UINT64_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x253*(x254%x255))|x256);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = 5U;
	int16_t x260 = -1;
	int32_t t52 = -519324;

	t52 = ((x257*(x258%x259))|x260);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x261 = 0U;
	int32_t x262 = INT32_MAX;
	static uint32_t x263 = UINT32_MAX;
	volatile uint32_t t53 = 282U;

	t53 = ((x261*(x262%x263))|x264);

	if (t53 != 95614U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MIN;
	volatile int8_t x266 = INT8_MIN;
	uint32_t x268 = 263756916U;
	volatile uint32_t t54 = 2U;

	t54 = ((x265*(x266%x267))|x268);

	if (t54 != 263757044U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = 5;
	int64_t x272 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = ((x269*(x270%x271))|x272);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = -1;
	uint64_t x274 = 465LLU;
	static int16_t x275 = INT16_MIN;
	uint64_t t56 = 406578692010522658LLU;

	t56 = ((x273*(x274%x275))|x276);

	if (t56 != 18446744073709551407LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x277 = 4;
	int16_t x278 = INT16_MIN;
	int8_t x279 = -43;
	uint32_t x280 = UINT32_MAX;

	t57 = ((x277*(x278%x279))|x280);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x281 = UINT8_MAX;
	uint8_t x282 = UINT8_MAX;
	int16_t x283 = 217;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t58 = 12;

	t58 = ((x281*(x282%x283))|x284);

	if (t58 != 9727) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x286 = 51U;
	int64_t x287 = -416798264737259538LL;
	uint16_t x288 = 1426U;
	volatile int64_t t59 = -636087578366042LL;

	t59 = ((x285*(x286%x287))|x288);

	if (t59 != 109521666015LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x289 = 3U;
	int32_t x290 = INT32_MIN;
	static int16_t x291 = 5089;
	int16_t x292 = 13;
	static volatile int32_t t60 = -64800147;

	t60 = ((x289*(x290%x291))|x292);

	if (t60 != -5937) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = -1;
	static uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MIN;
	int8_t x296 = 1;

	t61 = ((x293*(x294%x295))|x296);

	if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x297 = INT64_MIN;
	volatile int32_t x298 = INT32_MIN;
	int8_t x300 = 6;
	volatile int64_t t62 = -92272121180573613LL;

	t62 = ((x297*(x298%x299))|x300);

	if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = 2U;
	int64_t x302 = INT64_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int64_t t63 = 178LL;

	t63 = ((x301*(x302%x303))|x304);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x307 = INT8_MIN;
	volatile int8_t x308 = -1;
	int32_t t64 = -15651;

	t64 = ((x305*(x306%x307))|x308);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = INT32_MIN;
	uint32_t x312 = UINT32_MAX;

	t65 = ((x309*(x310%x311))|x312);

	if (t65 != 279172874239LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = INT8_MAX;
	static volatile int64_t x314 = 1591749440439083254LL;
	static volatile int64_t t66 = 474216LL;

	t66 = ((x313*(x314%x315))|x316);

	if (t66 != 895LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x317 = INT64_MIN;
	static uint64_t x318 = 40122340692324912LLU;
	volatile int8_t x319 = -2;
	static volatile uint64_t t67 = 12919LLU;

	t67 = ((x317*(x318%x319))|x320);

	if (t67 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 3153738523334523LL;

	t68 = ((x321*(x322%x323))|x324);

	if (t68 != -4611686016279656259LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = INT8_MIN;
	int64_t x327 = INT64_MAX;
	volatile int64_t x328 = -1LL;
	int64_t t69 = 3486946160LL;

	t69 = ((x325*(x326%x327))|x328);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x329 = -5;
	volatile int64_t x330 = 447272842607642458LL;
	volatile int16_t x331 = 505;
	int16_t x332 = INT16_MAX;
	int64_t t70 = 12LL;

	t70 = ((x329*(x330%x331))|x332);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = 21561;
	static int64_t x334 = INT64_MAX;
	int8_t x335 = 24;
	volatile int64_t t71 = -880576491914LL;

	t71 = ((x333*(x334%x335))|x336);

	if (t71 != 150927LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	static uint64_t x340 = 1212935964LLU;

	t72 = ((x337*(x338%x339))|x340);

	if (t72 != 1212935964LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 55U;
	int64_t x343 = INT64_MAX;
	int64_t t73 = -183LL;

	t73 = ((x341*(x342%x343))|x344);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 284U;
	int8_t x352 = -3;
	uint32_t t74 = 1397022627U;

	t74 = ((x349*(x350%x351))|x352);

	if (t74 != 4294967293U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x354 = -9354;
	int8_t x355 = -1;
	int64_t x356 = 254491795909LL;
	static int64_t t75 = -506707932531621LL;

	t75 = ((x353*(x354%x355))|x356);

	if (t75 != 254491795909LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = 6;
	static volatile uint16_t x358 = UINT16_MAX;
	static int32_t x359 = -37280910;
	int8_t x360 = INT8_MAX;
	static int32_t t76 = 56677695;

	t76 = ((x357*(x358%x359))|x360);

	if (t76 != 393215) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	int32_t x364 = -1;
	volatile int64_t t77 = 59063LL;

	t77 = ((x361*(x362%x363))|x364);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	static int8_t x367 = -39;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = ((x365*(x366%x367))|x368);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MAX;
	volatile int16_t x370 = INT16_MAX;
	uint64_t x371 = 290422LLU;
	static uint32_t x372 = 451623U;
	volatile uint64_t t79 = 715282667627LLU;

	t79 = ((x369*(x370%x371))|x372);

	if (t79 != 1073734695LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 14738998171LLU;
	int32_t x374 = -47009;
	uint16_t x375 = 446U;
	int8_t x376 = -8;

	t80 = ((x373*(x374%x375))|x376);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = -13841;
	uint64_t x378 = 148069920306039LLU;
	volatile int16_t x379 = -1;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x377*(x378%x379))|x380);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x381 = 1;
	int32_t x382 = INT32_MIN;
	static int64_t x383 = 883734954127500LL;
	static uint8_t x384 = 2U;

	t82 = ((x381*(x382%x383))|x384);

	if (t82 != -2147483646LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x385 = 16;
	int16_t x386 = -1;
	volatile int8_t x387 = -1;
	int64_t x388 = -1LL;
	static int64_t t83 = 10548474263LL;

	t83 = ((x385*(x386%x387))|x388);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = 1201050605LL;
	static int32_t x391 = INT32_MAX;
	uint64_t x392 = UINT64_MAX;
	static uint64_t t84 = UINT64_MAX;

	t84 = ((x389*(x390%x391))|x392);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = 23770947LL;
	uint32_t x396 = 682884U;
	volatile int64_t t85 = 30888457LL;

	t85 = ((x393*(x394%x395))|x396);

	if (t85 != 1095216660357LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 1186119947983LLU;
	volatile int8_t x403 = -23;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x401*(x402%x403))|x404);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MIN;
	volatile int16_t x408 = -34;
	volatile int32_t t87 = -4284;

	t87 = ((x405*(x406%x407))|x408);

	if (t87 != -34) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = INT32_MAX;
	int32_t x410 = INT32_MIN;
	static int64_t x411 = INT64_MIN;
	int64_t x412 = -562615264278058581LL;

	t88 = ((x409*(x410%x411))|x412);

	if (t88 != -562615264278058581LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = INT32_MIN;
	uint64_t t89 = 223294915398517076LLU;

	t89 = ((x417*(x418%x419))|x420);

	if (t89 != 18446744073709486091LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x421 = UINT8_MAX;
	int32_t x422 = -14483629;
	int8_t x424 = -1;
	static int32_t t90 = -2;

	t90 = ((x421*(x422%x423))|x424);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x425 = -1LL;
	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = 40092798LLU;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x425*(x426%x427))|x428);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x429 = UINT16_MAX;
	int8_t x430 = -4;
	static volatile int32_t x431 = INT32_MIN;
	int64_t x432 = INT64_MIN;

	t92 = ((x429*(x430%x431))|x432);

	if (t92 != -262140LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x433 = 29560523841190443LLU;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	int16_t x436 = INT16_MAX;
	static uint64_t t93 = 59049430249480988LLU;

	t93 = ((x433*(x434%x435))|x436);

	if (t93 != 5213994863756509183LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x438 = 53728U;
	uint8_t x439 = UINT8_MAX;
	uint64_t x440 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x437*(x438%x439))|x440);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = -1;
	int8_t x442 = INT8_MIN;
	int32_t x443 = INT32_MAX;
	int32_t t95 = 367192;

	t95 = ((x441*(x442%x443))|x444);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x445 = UINT32_MAX;
	static volatile int8_t x446 = INT8_MIN;
	uint64_t x447 = UINT64_MAX;

	t96 = ((x445*(x446%x447))|x448);

	if (t96 != 18446743526101221375LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x450 = -5791;
	uint16_t x451 = 22U;
	static int8_t x452 = INT8_MIN;

	t97 = ((x449*(x450%x451))|x452);

	if (t97 != -123) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x453 = 13477U;
	static uint64_t x454 = 39327502340093204LLU;
	uint8_t x455 = UINT8_MAX;
	int8_t x456 = INT8_MIN;
	volatile uint64_t t98 = 6018649697140457LLU;

	t98 = ((x453*(x454%x455))|x456);

	if (t98 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x458 = -1;
	volatile uint8_t x459 = 7U;
	static int8_t x460 = INT8_MIN;
	uint64_t t99 = 6793706019LLU;

	t99 = ((x457*(x458%x459))|x460);

	if (t99 != 18446744073709551489LLU) { NG(); } else { ; }
	
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

