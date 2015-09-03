#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x10 = 1188;
int16_t x19 = -458;
static uint64_t x22 = 8230600174017638LLU;
int8_t x23 = INT8_MAX;
int16_t x24 = 1;
static int16_t x29 = INT16_MAX;
static int8_t x35 = INT8_MIN;
uint64_t t7 = 1LLU;
volatile int32_t x42 = -1;
volatile int16_t x47 = -1;
uint16_t x49 = 502U;
uint32_t x52 = 13056U;
uint64_t t14 = 149LLU;
int64_t t15 = 59847094428LL;
static int8_t x78 = INT8_MIN;
static int8_t x82 = INT8_MIN;
int32_t t18 = 25;
int16_t x92 = INT16_MIN;
volatile int32_t x110 = INT32_MIN;
uint64_t x111 = 21351LLU;
static int32_t x113 = INT32_MIN;
static int64_t x116 = INT64_MAX;
volatile int64_t x118 = -1LL;
uint32_t x120 = UINT32_MAX;
uint32_t x122 = 5006U;
volatile uint32_t t26 = 25345700U;
static int16_t x127 = INT16_MIN;
volatile int32_t x128 = -14751;
static volatile int16_t x130 = INT16_MIN;
volatile int64_t x137 = INT64_MAX;
int64_t x149 = 8359980LL;
uint64_t x151 = 135256335109LLU;
static int16_t x153 = -1;
int64_t x154 = 44059121LL;
int64_t x160 = INT64_MIN;
uint32_t x170 = 51495010U;
int64_t x176 = INT64_MIN;
int64_t x178 = INT64_MIN;
int8_t x184 = 0;
int16_t x194 = 0;
int16_t x195 = -355;
static int8_t x196 = -1;
static int64_t x205 = -1LL;
volatile uint64_t x206 = 899648666660595LLU;
uint16_t x209 = UINT16_MAX;
volatile uint32_t x210 = UINT32_MAX;
volatile uint64_t x216 = 1409LLU;
volatile uint64_t t44 = 13437056LLU;
int32_t x217 = INT32_MIN;
static volatile int8_t x225 = 3;
int64_t x226 = INT64_MIN;
int32_t x227 = -1;
uint32_t t48 = 891U;
uint16_t x235 = 3251U;
uint64_t x241 = 1882450859902330885LLU;
static volatile uint64_t t50 = 99162LLU;
int64_t x246 = -1401576377129362LL;
int16_t x248 = INT16_MIN;
volatile int64_t t51 = -102570561430LL;
int8_t x257 = -5;
int8_t x258 = INT8_MIN;
int64_t x276 = -1LL;
int16_t x278 = 2;
uint16_t x285 = UINT16_MAX;
int8_t x286 = -1;
uint16_t x291 = 1892U;
volatile uint32_t t57 = 1668136U;
int64_t x297 = -1LL;
uint64_t x301 = UINT64_MAX;
uint16_t x306 = 1614U;
int64_t t62 = -3997556LL;
int16_t x326 = 14918;
int8_t x327 = 50;
int64_t x329 = INT64_MAX;
static volatile int64_t t67 = -1341912185578976408LL;
int32_t x346 = -1;
volatile int8_t x352 = INT8_MIN;
static int16_t x356 = INT16_MIN;
volatile uint64_t x359 = 1445058LLU;
static uint16_t x360 = 1U;
static volatile uint64_t x362 = 108967547LLU;
uint32_t x363 = 32U;
static int32_t x365 = INT32_MIN;
static uint16_t x379 = UINT16_MAX;
volatile uint32_t t77 = UINT32_MAX;
uint16_t x382 = 1U;
uint8_t x387 = UINT8_MAX;
volatile int32_t t80 = -2923;
volatile int64_t x400 = INT64_MIN;
uint8_t x403 = 7U;
int32_t t85 = -1;
int64_t x414 = -9214195028947LL;
int64_t x421 = -1LL;
uint32_t x424 = 0U;
uint32_t x434 = 5620U;
static volatile uint64_t x439 = 637860395814LLU;
int8_t x445 = -1;
int8_t x452 = INT8_MAX;
int16_t x455 = -4791;
static volatile uint64_t t95 = 66059288081594LLU;
int16_t x459 = INT16_MIN;
volatile int16_t x462 = INT16_MAX;
volatile int32_t t97 = 107;
int16_t x465 = INT16_MIN;
volatile int8_t x469 = INT8_MIN;
static int64_t x471 = -26179LL;
volatile int64_t t99 = -1147986167LL;


void f0(void) {
	int32_t x1 = -1730544;
	static uint32_t x2 = 37932U;
	uint32_t x3 = 63256U;
	uint8_t x4 = 0U;
	static uint32_t t0 = 1046697070U;

	t0 = ((x1/(x2-x3))+x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = 2050U;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = 1;
	int32_t t1 = 398832315;

	t1 = ((x5/(x6-x7))+x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 19U;
	uint8_t x11 = 61U;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9/(x10-x11))+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = 41;
	int16_t x20 = 28;
	int32_t t3 = -69561060;

	t3 = ((x17/(x18-x19))+x20);

	if (t3 != -37) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static uint64_t t4 = 4291652069702566LLU;

	t4 = ((x21/(x22-x23))+x24);

	if (t4 != 2242LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MAX;
	int8_t x26 = INT8_MIN;
	static int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	int64_t t5 = -1063909118440LL;

	t5 = ((x25/(x26-x27))+x28);

	if (t5 != 4294934784LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 1U;
	uint16_t x31 = 1074U;
	int32_t x32 = INT32_MAX;
	int32_t t6 = 174;

	t6 = ((x29/(x30-x31))+x32);

	if (t6 != 2147483617) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x33 = UINT8_MAX;
	uint64_t x34 = UINT64_MAX;
	static uint32_t x36 = UINT32_MAX;

	t7 = ((x33/(x34-x35))+x36);

	if (t7 != 4294967297LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	uint64_t x38 = 3299556007955268559LLU;
	int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	volatile uint64_t t8 = 38376085385LLU;

	t8 = ((x37/(x38-x39))+x40);

	if (t8 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 1U;
	int16_t x43 = INT16_MIN;
	static int64_t x44 = 1737560936327LL;
	volatile int64_t t9 = 6343501877869192LL;

	t9 = ((x41/(x42-x43))+x44);

	if (t9 != 1737560936327LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 461LLU;
	int8_t x46 = INT8_MAX;
	volatile int8_t x48 = -2;
	uint64_t t10 = 427246749LLU;

	t10 = ((x45/(x46-x47))+x48);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x50 = 1;
	uint16_t x51 = 520U;
	uint32_t t11 = 53U;

	t11 = ((x49/(x50-x51))+x52);

	if (t11 != 13056U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int8_t x54 = INT8_MAX;
	uint8_t x55 = 81U;
	int64_t x56 = -1LL;
	int64_t t12 = -146343LL;

	t12 = ((x53/(x54-x55))+x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -7;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = 24779;

	t13 = ((x57/(x58-x59))+x60);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1LL;
	volatile uint64_t x62 = 6150614814552563LLU;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;

	t14 = ((x61/(x62-x63))+x64);

	if (t14 != 18446744073709521847LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;

	t15 = ((x65/(x66-x67))+x68);

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x73 = 5011U;
	volatile uint8_t x74 = 51U;
	int8_t x75 = -3;
	static int8_t x76 = INT8_MIN;
	int32_t t16 = -3;

	t16 = ((x73/(x74-x75))+x76);

	if (t16 != -36) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	static uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MIN;
	static int64_t t17 = 226414262179LL;

	t17 = ((x77/(x78-x79))+x80);

	if (t17 != 140465285424765LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 23U;
	static int16_t x83 = 2723;
	int16_t x84 = INT16_MIN;

	t18 = ((x81/(x82-x83))+x84);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -1LL;
	int8_t x90 = 0;
	int32_t x91 = INT32_MAX;
	volatile int64_t t19 = -55385LL;

	t19 = ((x89/(x90-x91))+x92);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = -55548489;
	volatile uint8_t x95 = 48U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t20 = 4015058;

	t20 = ((x93/(x94-x95))+x96);

	if (t20 != 293) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MAX;
	static int64_t x100 = INT64_MAX;
	static int64_t t21 = INT64_MAX;

	t21 = ((x97/(x98-x99))+x100);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x101 = INT64_MAX;
	int16_t x102 = -3;
	int32_t x103 = 1;
	uint16_t x104 = 11130U;
	static int64_t t22 = -238975252141640LL;

	t22 = ((x101/(x102-x103))+x104);

	if (t22 != -2305843009213682821LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = INT64_MIN;
	volatile int32_t x112 = -14358843;
	volatile uint64_t t23 = 8052121793587410LLU;

	t23 = ((x109/(x110-x111))+x112);

	if (t23 != 18446744073695192773LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 26870LLU;
	volatile uint64_t t24 = 175481819603090315LLU;

	t24 = ((x113/(x114-x115))+x116);

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x117 = 20U;
	int16_t x119 = INT16_MIN;
	volatile int64_t t25 = 26527212426291LL;

	t25 = ((x117/(x118-x119))+x120);

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = 2172U;
	uint32_t x123 = 1401031775U;
	static uint16_t x124 = 5U;

	t26 = ((x121/(x122-x123))+x124);

	if (t26 != 5U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -3;
	int64_t x126 = 10LL;
	int64_t t27 = -140128302374199824LL;

	t27 = ((x125/(x126-x127))+x128);

	if (t27 != -14751LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -28886369015684955LL;
	int16_t x131 = -1;
	int16_t x132 = 0;
	int64_t t28 = -4454888073429849511LL;

	t28 = ((x129/(x130-x131))+x132);

	if (t28 != 881568926532LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = 7540149082106590LL;
	volatile int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MIN;
	volatile int64_t t29 = 838185LL;

	t29 = ((x133/(x134-x135))+x136);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = INT16_MAX;
	static int8_t x139 = INT8_MIN;
	static int64_t x140 = 651048302761097122LL;
	volatile int64_t t30 = -2566624LL;

	t30 = ((x137/(x138-x139))+x140);

	if (t30 != 651328691027911372LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	static uint8_t x142 = 20U;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	int64_t t31 = -332519107LL;

	t31 = ((x141/(x142-x143))+x144);

	if (t31 != -102293894LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x150 = 4425U;
	volatile int64_t x152 = INT64_MIN;
	volatile uint64_t t32 = 21004735609994LLU;

	t32 = ((x149/(x150-x151))+x152);

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x155 = 1258U;
	int32_t x156 = INT32_MIN;
	int64_t t33 = -30406LL;

	t33 = ((x153/(x154-x155))+x156);

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x157 = 34U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	static int64_t t34 = INT64_MIN;

	t34 = ((x157/(x158-x159))+x160);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 3U;
	static int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x161/(x162-x163))+x164);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int32_t x171 = 1;
	int32_t x172 = INT32_MAX;
	static int64_t t36 = -1351LL;

	t36 = ((x169/(x170-x171))+x172);

	if (t36 != -176964477220LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 203752488U;
	int16_t x174 = INT16_MAX;
	volatile int8_t x175 = INT8_MAX;
	static volatile int64_t t37 = 309259435911LL;

	t37 = ((x173/(x174-x175))+x176);

	if (t37 != -9223372036854769566LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x177 = 1U;
	volatile int64_t x179 = -161LL;
	static int64_t x180 = -1LL;
	volatile int64_t t38 = 21938116LL;

	t38 = ((x177/(x178-x179))+x180);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 429U;
	volatile uint32_t x182 = 3334414U;
	int16_t x183 = -1;
	uint32_t t39 = 41187U;

	t39 = ((x181/(x182-x183))+x184);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x189 = 13U;
	volatile int64_t x190 = -46LL;
	int16_t x191 = -1;
	int16_t x192 = 51;
	volatile int64_t t40 = -3795945421315507525LL;

	t40 = ((x189/(x190-x191))+x192);

	if (t40 != 51LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = -1;
	static volatile int32_t t41 = 177789;

	t41 = ((x193/(x194-x195))+x196);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x207 = -1;
	int64_t x208 = 6921136252957091LL;
	uint64_t t42 = 30282312083LLU;

	t42 = ((x205/(x206-x207))+x208);

	if (t42 != 6921136252977595LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MIN;
	static uint32_t t43 = 430579U;

	t43 = ((x209/(x210-x211))+x212);

	if (t43 != 4294967168U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = 64772151477297000LLU;
	static int8_t x214 = -1;
	int32_t x215 = INT32_MIN;

	t44 = ((x213/(x214-x215))+x216);

	if (t44 != 30163292LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x218 = 9;
	static int8_t x219 = INT8_MIN;
	uint32_t x220 = 2U;
	volatile uint32_t t45 = 2U;

	t45 = ((x217/(x218-x219))+x220);

	if (t45 != 4279292235U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = 6U;
	static int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = 4U;
	uint32_t t46 = 21111U;

	t46 = ((x221/(x222-x223))+x224);

	if (t46 != 4U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x228 = INT64_MAX;
	int64_t t47 = INT64_MAX;

	t47 = ((x225/(x226-x227))+x228);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -1;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MAX;

	t48 = ((x229/(x230-x231))+x232);

	if (t48 != 32768U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = -697LL;
	int16_t x234 = INT16_MAX;
	static int8_t x236 = INT8_MIN;
	volatile int64_t t49 = -1LL;

	t49 = ((x233/(x234-x235))+x236);

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x242 = 2U;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MAX;

	t50 = ((x241/(x242-x243))+x244);

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;

	t51 = ((x245/(x246-x247))+x248);

	if (t51 != -26188LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 1743LLU;
	static uint8_t x254 = 13U;
	int64_t x255 = -776LL;
	int64_t x256 = INT64_MIN;
	uint64_t t52 = 1754603877650LLU;

	t52 = ((x253/(x254-x255))+x256);

	if (t52 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x259 = -3;
	static int64_t x260 = -12870181198269LL;
	volatile int64_t t53 = -9389214975831LL;

	t53 = ((x257/(x258-x259))+x260);

	if (t53 != -12870181198269LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x273 = 474LLU;
	uint8_t x274 = UINT8_MAX;
	volatile int32_t x275 = 15;
	uint64_t t54 = 983557138706916636LLU;

	t54 = ((x273/(x274-x275))+x276);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x277 = UINT64_MAX;
	static int32_t x279 = -15477996;
	int64_t x280 = -15414236550117214LL;
	uint64_t t55 = 920194634LLU;

	t55 = ((x277/(x278-x279))+x280);

	if (t55 != 18431331028963702222LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x287 = 162U;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t56 = -846622566;

	t56 = ((x285/(x286-x287))+x288);

	if (t56 != -530) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x290 = 432162959U;
	uint8_t x292 = 87U;

	t57 = ((x289/(x290-x291))+x292);

	if (t57 != 91U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = 1;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = 123155LLU;
	static uint64_t t58 = 16691601134410315LLU;

	t58 = ((x293/(x294-x295))+x296);

	if (t58 != 123156LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x298 = INT16_MIN;
	static int64_t x299 = INT64_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile int64_t t59 = 6052229467170LL;

	t59 = ((x297/(x298-x299))+x300);

	if (t59 != 255LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x302 = -1;
	int8_t x303 = -4;
	static int8_t x304 = -1;
	uint64_t t60 = 3323735784428549027LLU;

	t60 = ((x301/(x302-x303))+x304);

	if (t60 != 6148914691236517204LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x305 = INT64_MIN;
	static uint16_t x307 = 2398U;
	volatile int32_t x308 = INT32_MIN;
	static int64_t t61 = 3867276LL;

	t61 = ((x305/(x306-x307))+x308);

	if (t61 != 11764503001565810LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = -1LL;
	uint16_t x310 = 8347U;
	uint8_t x311 = 4U;
	int32_t x312 = INT32_MIN;

	t62 = ((x309/(x310-x311))+x312);

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = -5052;
	uint8_t x314 = UINT8_MAX;
	uint8_t x315 = 13U;
	int32_t x316 = 2195;
	volatile int32_t t63 = 97;

	t63 = ((x313/(x314-x315))+x316);

	if (t63 != 2175) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = -1LL;
	uint64_t x319 = 15306LLU;
	int64_t x320 = -1LL;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x317/(x318-x319))+x320);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x321 = -1;
	int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = -1;
	int32_t t65 = -60780;

	t65 = ((x321/(x322-x323))+x324);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x325 = 10U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x325/(x326-x327))+x328);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	volatile int8_t x332 = -1;

	t67 = ((x329/(x330-x331))+x332);

	if (t67 != -280388266814251LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x341 = UINT8_MAX;
	int8_t x342 = -48;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = 49;
	volatile int32_t t68 = 51;

	t68 = ((x341/(x342-x343))+x344);

	if (t68 != 52) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	volatile int16_t x348 = 1;
	volatile int32_t t69 = -20;

	t69 = ((x345/(x346-x347))+x348);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = -1;
	int16_t x350 = INT16_MAX;
	volatile uint16_t x351 = 54U;
	int32_t t70 = 1398;

	t70 = ((x349/(x350-x351))+x352);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;
	int64_t t71 = -1057375529213125LL;

	t71 = ((x353/(x354-x355))+x356);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x357 = INT64_MIN;
	int64_t x358 = INT64_MAX;
	volatile uint64_t t72 = 0LLU;

	t72 = ((x357/(x358-x359))+x360);

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = -15045893618415253LL;
	volatile int32_t x364 = -5993018;
	uint64_t t73 = 177918229462571LLU;

	t73 = ((x361/(x362-x363))+x364);

	if (t73 != 169142566349LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x366 = 100257;
	int16_t x367 = -57;
	int64_t x368 = 10173758LL;
	int64_t t74 = 994LL;

	t74 = ((x365/(x366-x367))+x368);

	if (t74 != 10152351LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x369 = INT64_MIN;
	uint64_t x370 = 1904722814LLU;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 46U;
	static uint64_t t75 = 26639650655LLU;

	t75 = ((x369/(x370-x371))+x372);

	if (t75 != 4842286439LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x373 = -1LL;
	static int16_t x374 = INT16_MAX;
	static volatile uint8_t x375 = 11U;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

	t76 = ((x373/(x374-x375))+x376);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x377 = -1;
	uint8_t x378 = UINT8_MAX;
	static uint32_t x380 = UINT32_MAX;

	t77 = ((x377/(x378-x379))+x380);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = 60U;
	uint8_t x383 = UINT8_MAX;
	static int64_t x384 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = ((x381/(x382-x383))+x384);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = -351701;
	uint16_t x388 = 58U;
	static volatile int32_t t79 = 1037013;

	t79 = ((x385/(x386-x387))+x388);

	if (t79 != 58) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x389 = 4U;
	volatile uint8_t x390 = UINT8_MAX;
	volatile int16_t x391 = INT16_MAX;
	int8_t x392 = 12;

	t80 = ((x389/(x390-x391))+x392);

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = -1;
	int8_t x394 = 5;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MAX;
	int64_t t81 = INT64_MAX;

	t81 = ((x393/(x394-x395))+x396);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = -1LL;
	volatile int64_t x398 = -1LL;
	volatile uint16_t x399 = 1U;
	static int64_t t82 = INT64_MIN;

	t82 = ((x397/(x398-x399))+x400);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = UINT8_MAX;
	uint16_t x402 = UINT16_MAX;
	int16_t x404 = -99;
	int32_t t83 = -970777106;

	t83 = ((x401/(x402-x403))+x404);

	if (t83 != -99) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MAX;
	static int8_t x407 = 53;
	int32_t x408 = -1;
	int32_t t84 = 62688089;

	t84 = ((x405/(x406-x407))+x408);

	if (t84 != 441) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 5U;
	uint8_t x410 = UINT8_MAX;
	int32_t x411 = -142;
	uint16_t x412 = 375U;

	t85 = ((x409/(x410-x411))+x412);

	if (t85 != 375) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = 0;
	int32_t x415 = -329785536;
	static int8_t x416 = INT8_MAX;
	volatile int64_t t86 = 28709902842265LL;

	t86 = ((x413/(x414-x415))+x416);

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = INT8_MIN;
	uint32_t x418 = UINT32_MAX;
	int64_t x419 = INT64_MAX;
	static uint64_t x420 = UINT64_MAX;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = ((x417/(x418-x419))+x420);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x422 = INT32_MIN;
	int64_t x423 = -2814073760LL;
	static int64_t t88 = 1262287935LL;

	t88 = ((x421/(x422-x423))+x424);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x429 = 108U;
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = 159U;
	volatile int8_t x432 = INT8_MIN;
	volatile uint32_t t89 = 63322U;

	t89 = ((x429/(x430-x431))+x432);

	if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x433 = -1;
	int32_t x435 = INT32_MIN;
	static int16_t x436 = -1;
	uint32_t t90 = 17U;

	t90 = ((x433/(x434-x435))+x436);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	static volatile uint32_t x440 = UINT32_MAX;
	uint64_t t91 = 90799671LLU;

	t91 = ((x437/(x438-x439))+x440);

	if (t91 != 4294967297LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x441 = -1LL;
	int64_t x442 = -1LL;
	volatile int16_t x443 = INT16_MAX;
	static int32_t x444 = INT32_MAX;
	int64_t t92 = 349LL;

	t92 = ((x441/(x442-x443))+x444);

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x446 = 1527;
	int16_t x447 = INT16_MIN;
	volatile int16_t x448 = -86;
	static volatile int32_t t93 = 1957;

	t93 = ((x445/(x446-x447))+x448);

	if (t93 != -86) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MIN;
	static int8_t x450 = INT8_MAX;
	int32_t x451 = -648680;
	static volatile int32_t t94 = -142877;

	t94 = ((x449/(x450-x451))+x452);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MIN;
	static uint64_t x456 = 884LLU;

	t95 = ((x453/(x454-x455))+x456);

	if (t95 != 921957LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = INT32_MAX;
	volatile int64_t x458 = 146965LL;
	int16_t x460 = -91;
	static int64_t t96 = 218LL;

	t96 = ((x457/(x458-x459))+x460);

	if (t96 != 11857LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x461 = -1;
	static uint16_t x463 = 26U;
	volatile int8_t x464 = 1;

	t97 = ((x461/(x462-x463))+x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x466 = -104;
	static int8_t x467 = INT8_MAX;
	uint32_t x468 = 4332U;
	uint32_t t98 = 43012U;

	t98 = ((x465/(x466-x467))+x468);

	if (t98 != 4473U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x470 = INT64_MIN;
	uint32_t x472 = 24533774U;

	t99 = ((x469/(x470-x471))+x472);

	if (t99 != 24533774LL) { NG(); } else { ; }
	
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

