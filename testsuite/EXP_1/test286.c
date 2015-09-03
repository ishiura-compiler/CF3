#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int64_t t0 = 56564907118LL;
uint64_t x9 = 65284347659LLU;
static uint32_t x13 = 10U;
volatile int8_t x22 = 1;
volatile int32_t t5 = INT32_MIN;
int16_t x31 = -1;
volatile int32_t x32 = -1;
volatile int8_t x35 = INT8_MIN;
uint64_t x36 = 16839398535LLU;
volatile int16_t x40 = INT16_MIN;
uint8_t x41 = 14U;
static int32_t t9 = -3707;
static int32_t x46 = -1;
static int32_t x48 = INT32_MIN;
volatile int16_t x49 = -1123;
static int8_t x56 = INT8_MIN;
int16_t x60 = 176;
volatile int32_t x63 = -1;
int32_t x66 = -7912605;
static int16_t x69 = -6427;
int64_t x70 = 3LL;
int8_t x73 = -1;
int32_t x74 = -1;
int64_t t17 = 0LL;
int16_t x91 = INT16_MIN;
int8_t x92 = INT8_MIN;
static int64_t x98 = 86LL;
static int64_t x100 = INT64_MIN;
static volatile int16_t x104 = INT16_MIN;
uint8_t x108 = 2U;
uint8_t x112 = 50U;
int32_t t26 = -1781;
static int8_t x118 = INT8_MIN;
int16_t x127 = 1065;
int32_t t30 = 82778;
static int32_t x132 = INT32_MAX;
static int32_t x137 = -1;
uint64_t x138 = UINT64_MAX;
int32_t t33 = 103253197;
static int64_t x155 = INT64_MIN;
int8_t x166 = 1;
uint64_t x168 = 88212491643437816LLU;
static uint64_t t38 = 2677LLU;
static int16_t x169 = -1;
int8_t x171 = INT8_MIN;
volatile int32_t x173 = -1868;
uint16_t x175 = UINT16_MAX;
uint32_t x176 = 1U;
volatile int32_t t41 = INT32_MIN;
int16_t x183 = INT16_MIN;
volatile int32_t x184 = -17280;
int32_t t42 = 25994957;
int64_t x200 = -1LL;
int64_t t46 = 967713057290LL;
uint64_t x202 = 263688785757412303LLU;
volatile int8_t x203 = -1;
int32_t x205 = -54;
int16_t x211 = -1;
static int16_t x218 = -1;
volatile uint16_t x219 = 2463U;
static uint64_t x226 = 507446243406852547LLU;
volatile int32_t t51 = -80194214;
uint16_t x235 = 0U;
static uint64_t x241 = 1965167092509080LLU;
static int32_t x243 = INT32_MIN;
volatile int16_t x245 = INT16_MAX;
uint32_t x247 = UINT32_MAX;
static uint8_t x248 = 82U;
volatile int64_t x251 = INT64_MIN;
int8_t x255 = INT8_MIN;
volatile int32_t x256 = INT32_MIN;
int64_t t59 = -21LL;
volatile uint64_t x261 = UINT64_MAX;
uint16_t x273 = 11162U;
volatile int16_t x277 = -1;
int64_t t64 = 134158902LL;
int64_t x287 = INT64_MAX;
int64_t t67 = 2840033687455348691LL;
volatile int32_t x302 = INT32_MIN;
volatile int32_t x304 = INT32_MAX;
uint64_t x307 = UINT64_MAX;
volatile uint32_t t71 = 823055U;
uint8_t x317 = UINT8_MAX;
volatile int16_t x322 = -1;
static int16_t x323 = INT16_MAX;
static uint8_t x335 = 45U;
volatile int32_t x336 = -1;
int32_t x337 = INT32_MIN;
uint64_t t81 = 3494226312270LLU;
int32_t t82 = 8169311;
static int64_t x354 = -1LL;
volatile int32_t t84 = 3581314;
int8_t x361 = -3;
int8_t x368 = -2;
uint32_t x370 = 307878878U;
int8_t x372 = 1;
int16_t x378 = INT16_MIN;
volatile int8_t x380 = 6;
volatile int32_t x382 = 112;
int32_t t91 = 2;
static uint16_t x389 = 3U;
int16_t x395 = 0;
uint8_t x397 = UINT8_MAX;
int16_t x409 = INT16_MIN;
int32_t x412 = INT32_MIN;
int8_t x414 = 0;
static volatile uint32_t x415 = 105U;
int16_t x420 = 1;
static int8_t x424 = -3;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int16_t x2 = INT16_MIN;
	int64_t x4 = -110224296LL;

	t0 = (((x1-x2)<x3)^x4);

	if (t0 != -110224296LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x10 = 123U;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t1 = 494LL;

	t1 = (((x9-x10)<x11)^x12);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = UINT32_MAX;
	static uint64_t x15 = UINT64_MAX;
	uint64_t x16 = 32885515890193807LLU;
	uint64_t t2 = 284190350490718LLU;

	t2 = (((x13-x14)<x15)^x16);

	if (t2 != 32885515890193806LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = -1;
	static int8_t x19 = 2;
	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = INT32_MAX;

	t3 = (((x17-x18)<x19)^x20);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = 9;
	volatile int32_t t4 = 516657233;

	t4 = (((x21-x22)<x23)^x24);

	if (t4 != 9) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	volatile int8_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;

	t5 = (((x25-x26)<x27)^x28);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int8_t x30 = 1;
	int32_t t6 = -20;

	t6 = (((x29-x30)<x31)^x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 15U;
	int16_t x34 = INT16_MIN;
	uint64_t t7 = 3430370473LLU;

	t7 = (((x33-x34)<x35)^x36);

	if (t7 != 16839398535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	static volatile uint16_t x39 = UINT16_MAX;
	volatile int32_t t8 = -12977;

	t8 = (((x37-x38)<x39)^x40);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = -1;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = -1;

	t9 = (((x41-x42)<x43)^x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 117U;
	static uint32_t x47 = UINT32_MAX;
	volatile int32_t t10 = 3543602;

	t10 = (((x45-x46)<x47)^x48);

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MAX;
	uint64_t x51 = 1652249LLU;
	uint64_t x52 = 1281995LLU;
	static uint64_t t11 = 118754LLU;

	t11 = (((x49-x50)<x51)^x52);

	if (t11 != 1281995LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int32_t t12 = 23;

	t12 = (((x53-x54)<x55)^x56);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int16_t x58 = -1042;
	volatile uint32_t x59 = 18U;
	volatile int32_t t13 = 1011858;

	t13 = (((x57-x58)<x59)^x60);

	if (t13 != 176) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -507722816301742744LL;
	volatile uint64_t x62 = UINT64_MAX;
	static int16_t x64 = INT16_MIN;
	int32_t t14 = -193339;

	t14 = (((x61-x62)<x63)^x64);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = 7610;
	int8_t x67 = -2;
	int64_t x68 = 10673118307240541LL;
	int64_t t15 = 4325138220700063453LL;

	t15 = (((x65-x66)<x67)^x68);

	if (t15 != 10673118307240541LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 8660U;

	t16 = (((x69-x70)<x71)^x72);

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = UINT64_MAX;
	static int64_t x76 = -1LL;

	t17 = (((x73-x74)<x75)^x76);

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x77 = 5381;
	uint32_t x78 = 106960U;
	uint16_t x79 = 8928U;
	uint8_t x80 = 3U;
	volatile int32_t t18 = -5650;

	t18 = (((x77-x78)<x79)^x80);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 253;
	static uint32_t x82 = UINT32_MAX;
	static uint32_t x83 = 8533U;
	static volatile int16_t x84 = INT16_MIN;
	int32_t t19 = 0;

	t19 = (((x81-x82)<x83)^x84);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	volatile uint32_t x86 = UINT32_MAX;
	static int32_t x87 = 26842353;
	static volatile int16_t x88 = INT16_MIN;
	int32_t t20 = -14001;

	t20 = (((x85-x86)<x87)^x88);

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	volatile int32_t t21 = -58043;

	t21 = (((x89-x90)<x91)^x92);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 4;
	volatile int8_t x94 = INT8_MAX;
	volatile uint32_t x95 = 27813U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = (((x93-x94)<x95)^x96);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 1;
	volatile int16_t x99 = 6880;
	static int64_t t23 = 2638889796999LL;

	t23 = (((x97-x98)<x99)^x100);

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 47331208585323441LL;
	volatile int16_t x102 = -230;
	uint8_t x103 = 1U;
	volatile int32_t t24 = 481420276;

	t24 = (((x101-x102)<x103)^x104);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 39005978LLU;
	int32_t x106 = INT32_MAX;
	static int8_t x107 = -21;
	volatile int32_t t25 = -12188;

	t25 = (((x105-x106)<x107)^x108);

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	uint8_t x110 = 0U;
	static uint32_t x111 = UINT32_MAX;

	t26 = (((x109-x110)<x111)^x112);

	if (t26 != 51) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 100U;
	volatile int32_t x114 = INT32_MAX;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = 21097U;
	int32_t t27 = 3561657;

	t27 = (((x113-x114)<x115)^x116);

	if (t27 != 21096) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	uint16_t x119 = 61U;
	uint8_t x120 = 1U;
	volatile int32_t t28 = -1965371;

	t28 = (((x117-x118)<x119)^x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	int8_t x123 = -1;
	int8_t x124 = INT8_MIN;
	static int32_t t29 = 207399;

	t29 = (((x121-x122)<x123)^x124);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 1LLU;
	int16_t x126 = INT16_MIN;
	static uint16_t x128 = UINT16_MAX;

	t30 = (((x125-x126)<x127)^x128);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 94U;
	volatile uint64_t x130 = 28688987300373473LLU;
	int64_t x131 = INT64_MIN;
	int32_t t31 = INT32_MAX;

	t31 = (((x129-x130)<x131)^x132);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = 20U;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -241385;
	int16_t x136 = INT16_MAX;
	int32_t t32 = 16;

	t32 = (((x133-x134)<x135)^x136);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x139 = 66573367U;
	static int32_t x140 = -1;

	t33 = (((x137-x138)<x139)^x140);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 14329;

	t34 = (((x141-x142)<x143)^x144);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 5789269545363152542LLU;
	uint16_t x146 = 967U;
	int8_t x147 = 37;
	uint16_t x148 = 162U;
	volatile int32_t t35 = 126081907;

	t35 = (((x145-x146)<x147)^x148);

	if (t35 != 162) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = UINT8_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile uint16_t x156 = 0U;
	int32_t t36 = 53513;

	t36 = (((x153-x154)<x155)^x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 2029816U;
	static int16_t x158 = INT16_MAX;
	static int16_t x159 = INT16_MIN;
	volatile uint32_t x160 = 638857U;
	volatile uint32_t t37 = 723440U;

	t37 = (((x157-x158)<x159)^x160);

	if (t37 != 638856U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 1U;
	uint64_t x167 = 1418LLU;

	t38 = (((x165-x166)<x167)^x168);

	if (t38 != 88212491643437817LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x170 = 58;
	uint32_t x172 = 738620482U;
	uint32_t t39 = 39U;

	t39 = (((x169-x170)<x171)^x172);

	if (t39 != 738620482U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = 656LLU;
	volatile uint32_t t40 = 366159U;

	t40 = (((x173-x174)<x175)^x176);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x177 = -1;
	int16_t x178 = -1;
	static int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;

	t41 = (((x177-x178)<x179)^x180);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x181 = INT64_MAX;
	int8_t x182 = INT8_MAX;

	t42 = (((x181-x182)<x183)^x184);

	if (t42 != -17280) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -851495742LL;
	int64_t x186 = -11745704578626LL;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = -1;
	int32_t t43 = 6477584;

	t43 = (((x185-x186)<x187)^x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = INT16_MAX;
	static volatile uint64_t x190 = UINT64_MAX;
	int16_t x191 = -6;
	int8_t x192 = INT8_MAX;
	int32_t t44 = 1;

	t44 = (((x189-x190)<x191)^x192);

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x193 = 0U;
	int8_t x194 = -7;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t45 = 1;

	t45 = (((x193-x194)<x195)^x196);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	int8_t x199 = 1;

	t46 = (((x197-x198)<x199)^x200);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x201 = 15U;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t47 = 36;

	t47 = (((x201-x202)<x203)^x204);

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = -1;
	uint8_t x207 = 40U;
	uint16_t x208 = 1U;
	static volatile int32_t t48 = 1;

	t48 = (((x205-x206)<x207)^x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 0U;
	uint64_t x212 = 171042234745515659LLU;
	volatile uint64_t t49 = 31990LLU;

	t49 = (((x209-x210)<x211)^x212);

	if (t49 != 171042234745515659LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 1U;
	static uint32_t x220 = 1849556U;
	uint32_t t50 = 6004U;

	t50 = (((x217-x218)<x219)^x220);

	if (t50 != 1849557U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -3164;
	int16_t x227 = -1;
	int8_t x228 = INT8_MAX;

	t51 = (((x225-x226)<x227)^x228);

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x229 = -1;
	static int8_t x230 = 4;
	int16_t x231 = 208;
	uint32_t x232 = UINT32_MAX;
	volatile uint32_t t52 = 24114U;

	t52 = (((x229-x230)<x231)^x232);

	if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 9U;
	uint8_t x234 = UINT8_MAX;
	int64_t x236 = INT64_MAX;
	static volatile int64_t t53 = -67193994892821LL;

	t53 = (((x233-x234)<x235)^x236);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MAX;
	static uint8_t x238 = 4U;
	int16_t x239 = INT16_MIN;
	volatile int64_t x240 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (((x237-x238)<x239)^x240);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x242 = -829;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t55 = -4;

	t55 = (((x241-x242)<x243)^x244);

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x246 = UINT64_MAX;
	int32_t t56 = -459664156;

	t56 = (((x245-x246)<x247)^x248);

	if (t56 != 83) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	int64_t x252 = 1867877841809LL;
	static volatile int64_t t57 = -841984266358428138LL;

	t57 = (((x249-x250)<x251)^x252);

	if (t57 != 1867877841809LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = INT16_MIN;
	static uint16_t x254 = 196U;
	volatile int32_t t58 = -484456;

	t58 = (((x253-x254)<x255)^x256);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = 661063154;
	static uint8_t x258 = 40U;
	uint64_t x259 = 469847212497172LLU;
	int64_t x260 = INT64_MIN;

	t59 = (((x257-x258)<x259)^x260);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x262 = 1U;
	int32_t x263 = -1;
	int64_t x264 = -1LL;
	volatile int64_t t60 = 109446LL;

	t60 = (((x261-x262)<x263)^x264);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	volatile uint64_t x266 = 483029LLU;
	int32_t x267 = -65955517;
	int64_t x268 = 16853300466LL;
	static volatile int64_t t61 = 26725372563222LL;

	t61 = (((x265-x266)<x267)^x268);

	if (t61 != 16853300466LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	static volatile int32_t x270 = INT32_MIN;
	uint64_t x271 = 1531198953LLU;
	int64_t x272 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (((x269-x270)<x271)^x272);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = 9559;
	uint8_t x276 = 87U;
	int32_t t63 = -1;

	t63 = (((x273-x274)<x275)^x276);

	if (t63 != 87) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x278 = INT64_MAX;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;

	t64 = (((x277-x278)<x279)^x280);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = -1;
	int16_t x284 = -1;
	int32_t t65 = -92;

	t65 = (((x281-x282)<x283)^x284);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = 3686;
	int8_t x286 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;
	static int32_t t66 = 677090459;

	t66 = (((x285-x286)<x287)^x288);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 24314723LLU;
	static int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	int64_t x292 = -1LL;

	t67 = (((x289-x290)<x291)^x292);

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 733U;
	int16_t x294 = 4;
	volatile uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t68 = 448726433;

	t68 = (((x293-x294)<x295)^x296);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MIN;
	static uint64_t x299 = 5721991LLU;
	static volatile int64_t x300 = INT64_MIN;
	int64_t t69 = INT64_MIN;

	t69 = (((x297-x298)<x299)^x300);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 11LLU;
	int16_t x303 = 2284;
	volatile int32_t t70 = INT32_MAX;

	t70 = (((x301-x302)<x303)^x304);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 1249U;
	int64_t x306 = 133812169491LL;
	uint32_t x308 = 7213678U;

	t71 = (((x305-x306)<x307)^x308);

	if (t71 != 7213679U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 90056234440877LLU;
	int8_t x310 = -24;
	uint32_t x311 = 70U;
	volatile int16_t x312 = INT16_MAX;
	volatile int32_t t72 = 21525;

	t72 = (((x309-x310)<x311)^x312);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = UINT64_MAX;
	volatile int16_t x314 = -1;
	uint64_t x315 = 8518733019959LLU;
	static int8_t x316 = INT8_MAX;
	volatile int32_t t73 = 449049;

	t73 = (((x313-x314)<x315)^x316);

	if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t74 = INT32_MIN;

	t74 = (((x317-x318)<x319)^x320);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 63;
	int32_t x324 = -13;
	int32_t t75 = 28;

	t75 = (((x321-x322)<x323)^x324);

	if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x325 = 1U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -14712839;
	int16_t x328 = 5;
	volatile int32_t t76 = 865340864;

	t76 = (((x325-x326)<x327)^x328);

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t77 = 837071537;

	t77 = (((x329-x330)<x331)^x332);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MAX;
	static uint8_t x334 = 0U;
	int32_t t78 = 440;

	t78 = (((x333-x334)<x335)^x336);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x338 = INT16_MIN;
	uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t79 = 0;

	t79 = (((x337-x338)<x339)^x340);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x341 = 0U;
	static int64_t x342 = -1LL;
	volatile uint16_t x343 = 0U;
	static volatile int64_t x344 = -69831592266312LL;
	volatile int64_t t80 = -98082403445LL;

	t80 = (((x341-x342)<x343)^x344);

	if (t80 != -69831592266312LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x345 = -1LL;
	int64_t x346 = INT64_MAX;
	uint64_t x347 = UINT64_MAX;
	static uint64_t x348 = UINT64_MAX;

	t81 = (((x345-x346)<x347)^x348);

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = UINT32_MAX;
	static int64_t x351 = INT64_MAX;
	int8_t x352 = 1;

	t82 = (((x349-x350)<x351)^x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x355 = 2U;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t83 = -86292481;

	t83 = (((x353-x354)<x355)^x356);

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MAX;

	t84 = (((x357-x358)<x359)^x360);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x362 = INT64_MIN;
	uint16_t x363 = 536U;
	volatile int8_t x364 = 0;
	int32_t t85 = 471371;

	t85 = (((x361-x362)<x363)^x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 6;
	int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	static int32_t t86 = 0;

	t86 = (((x365-x366)<x367)^x368);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -12816LL;
	int32_t x371 = INT32_MIN;
	int32_t t87 = 84086208;

	t87 = (((x369-x370)<x371)^x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x373 = 2981556870LLU;
	uint64_t x374 = 3656111403520290010LLU;
	int64_t x375 = INT64_MIN;
	volatile uint16_t x376 = 6056U;
	int32_t t88 = -1044455;

	t88 = (((x373-x374)<x375)^x376);

	if (t88 != 6056) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x377 = -1;
	uint64_t x379 = UINT64_MAX;
	int32_t t89 = -1835416;

	t89 = (((x377-x378)<x379)^x380);

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = 42658;
	volatile int32_t x383 = -30245425;
	uint32_t x384 = 1237U;
	volatile uint32_t t90 = 11113U;

	t90 = (((x381-x382)<x383)^x384);

	if (t90 != 1237U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = -1;
	static uint8_t x386 = UINT8_MAX;
	int64_t x387 = -1LL;
	int8_t x388 = -1;

	t91 = (((x385-x386)<x387)^x388);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x390 = INT16_MIN;
	static volatile int16_t x391 = -1;
	int8_t x392 = INT8_MAX;
	int32_t t92 = 1718601;

	t92 = (((x389-x390)<x391)^x392);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = (((x393-x394)<x395)^x396);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x398 = 21U;
	uint8_t x399 = UINT8_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t94 = 59890U;

	t94 = (((x397-x398)<x399)^x400);

	if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -1LL;
	static volatile int64_t x402 = -15329252517540LL;
	uint8_t x403 = 18U;
	int16_t x404 = -1;
	volatile int32_t t95 = -2248810;

	t95 = (((x401-x402)<x403)^x404);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = 30LL;
	int32_t t96 = 156;

	t96 = (((x409-x410)<x411)^x412);

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = -119012100;
	int32_t x416 = INT32_MIN;
	int32_t t97 = INT32_MIN;

	t97 = (((x413-x414)<x415)^x416);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = -1;
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = 111U;
	volatile int32_t t98 = -1;

	t98 = (((x417-x418)<x419)^x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x421 = 173191LLU;
	volatile uint64_t x422 = 2767LLU;
	static uint16_t x423 = 70U;
	volatile int32_t t99 = 854;

	t99 = (((x421-x422)<x423)^x424);

	if (t99 != -3) { NG(); } else { ; }
	
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

