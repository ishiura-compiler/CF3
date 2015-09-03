#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -30;
int16_t x7 = INT16_MIN;
int32_t x8 = 24152;
volatile int64_t t2 = 1LL;
int64_t x24 = INT64_MAX;
int64_t t4 = 1423024LL;
int16_t x28 = INT16_MIN;
volatile int32_t t5 = -9567183;
int32_t x33 = -1;
int8_t x40 = -1;
volatile int32_t t9 = -2624860;
uint32_t x46 = UINT32_MAX;
static int64_t x50 = 1722801151LL;
static volatile int8_t x54 = -1;
uint32_t x57 = 11U;
int16_t x61 = INT16_MIN;
int8_t x71 = -1;
volatile int64_t x72 = -1706685886773496160LL;
volatile int64_t t16 = 205887644138LL;
int64_t x76 = -1LL;
int8_t x84 = 50;
static int64_t t21 = -414238038082LL;
uint64_t x106 = 150807LLU;
volatile int32_t x110 = INT32_MAX;
volatile uint64_t t27 = 331686341015LLU;
int64_t x127 = INT64_MIN;
int64_t t30 = -214417514908674295LL;
static uint64_t x134 = 155524136739208719LLU;
volatile int16_t x136 = INT16_MAX;
uint64_t t31 = 334996817LLU;
static volatile uint32_t x137 = 282767U;
int64_t t32 = 367280121267LL;
int8_t x143 = -1;
volatile int64_t t33 = 334LL;
int32_t x147 = -95490;
int32_t t34 = 42;
static uint8_t x154 = UINT8_MAX;
int32_t x155 = INT32_MAX;
uint16_t x157 = 19023U;
uint8_t x159 = UINT8_MAX;
int16_t x161 = INT16_MAX;
static int64_t x164 = -1LL;
int32_t x171 = INT32_MIN;
int32_t t39 = 2;
uint64_t x173 = 18854616568114LLU;
int8_t x188 = INT8_MIN;
int64_t t44 = -66272150409007LL;
static uint64_t x194 = UINT64_MAX;
volatile uint16_t x195 = UINT16_MAX;
int32_t x198 = 7505;
int16_t x206 = INT16_MIN;
int64_t x213 = INT64_MIN;
int16_t x217 = 640;
volatile int32_t t51 = -15333;
int16_t x222 = 495;
uint64_t x223 = 20822LLU;
uint64_t t52 = 6927041808428456768LLU;
int32_t x244 = INT32_MIN;
volatile uint32_t t56 = 895U;
static uint16_t x265 = 9736U;
int32_t x267 = -1;
int8_t x275 = -1;
static int32_t x276 = INT32_MIN;
int16_t x277 = 4117;
static int8_t x279 = INT8_MAX;
static volatile int64_t t63 = 449915255106LL;
volatile uint8_t x281 = 108U;
int64_t x282 = -1LL;
static volatile int64_t t65 = -419024063470610285LL;
static int8_t x290 = -6;
volatile int64_t x291 = -3LL;
int64_t x292 = 79LL;
int64_t t66 = -991LL;
int64_t x301 = 5450067574948092LL;
static volatile int16_t x305 = INT16_MIN;
int32_t t74 = -218175008;
int32_t t75 = -69;
volatile uint32_t t76 = 25438520U;
uint8_t x334 = 46U;
volatile int32_t t77 = 23;
int16_t x337 = INT16_MAX;
volatile uint32_t x340 = UINT32_MAX;
int16_t x344 = INT16_MIN;
int8_t x355 = -1;
volatile int32_t t82 = -43690;
volatile int64_t x375 = INT64_MAX;
int64_t t85 = -25533893661LL;
int32_t x378 = -1;
uint32_t x380 = 463047555U;
int16_t x381 = INT16_MIN;
int64_t x401 = -1LL;
volatile int16_t x402 = -40;
static int8_t x416 = INT8_MIN;
static int8_t x420 = INT8_MIN;
static uint16_t x422 = UINT16_MAX;
uint8_t x424 = UINT8_MAX;
int32_t x427 = INT32_MAX;
int32_t x428 = INT32_MIN;
int16_t x429 = INT16_MIN;
uint64_t t98 = 554802251781245285LLU;
int16_t x438 = INT16_MIN;
int32_t x440 = 59693;


void f0(void) {
	uint32_t x2 = 1187261U;
	int8_t x3 = -1;
	static volatile int8_t x4 = INT8_MIN;
	uint32_t t0 = 8069U;

	t0 = (((x1/x2)%x3)%x4);

	if (t0 != 3617U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	uint32_t x6 = UINT32_MAX;
	static uint32_t t1 = 15110803U;

	t1 = (((x5/x6)%x7)%x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 65LL;
	static uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = 3LL;

	t2 = (((x9/x10)%x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 1741391901U;
	uint8_t x18 = 37U;
	int64_t x19 = INT64_MAX;
	volatile int16_t x20 = INT16_MIN;
	int64_t t3 = -1LL;

	t3 = (((x17/x18)%x19)%x20);

	if (t3 != 9797LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	static int16_t x22 = -1;
	int64_t x23 = 70033290483430466LL;

	t4 = (((x21/x22)%x23)%x24);

	if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	static uint16_t x26 = 14U;
	uint16_t x27 = 10727U;

	t5 = (((x25/x26)%x27)%x28);

	if (t5 != 4681) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -2;
	int64_t x30 = -116732734205816155LL;
	int16_t x31 = INT16_MIN;
	int64_t x32 = -814LL;
	int64_t t6 = -78017121LL;

	t6 = (((x29/x30)%x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = -6;
	static int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -68321487LL;

	t7 = (((x33/x34)%x35)%x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1210U;
	int32_t x38 = -3;
	int16_t x39 = -1;
	static int32_t t8 = 19972;

	t8 = (((x37/x38)%x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	static uint8_t x42 = 42U;
	int16_t x43 = -1;
	int8_t x44 = -1;

	t9 = (((x41/x42)%x43)%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	volatile int64_t x47 = -1LL;
	static int32_t x48 = -1376933;
	int64_t t10 = -39LL;

	t10 = (((x45/x46)%x47)%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	static uint16_t x51 = UINT16_MAX;
	int32_t x52 = 3;
	int64_t t11 = 2454LL;

	t11 = (((x49/x50)%x51)%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t12 = -986704LL;

	t12 = (((x53/x54)%x55)%x56);

	if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MAX;
	static uint16_t x60 = UINT16_MAX;
	volatile uint32_t t13 = 399U;

	t13 = (((x57/x58)%x59)%x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 1670809LLU;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	uint64_t t14 = 92228705015LLU;

	t14 = (((x61/x62)%x63)%x64);

	if (t14 != 11040606121770LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 1242914533497626LL;
	int32_t x66 = INT32_MAX;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 444982195LLU;
	volatile uint64_t t15 = 991695435862294LLU;

	t15 = (((x65/x66)%x67)%x68);

	if (t15 != 89LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = UINT32_MAX;
	static volatile int64_t x70 = -3509188567919090031LL;

	t16 = (((x69/x70)%x71)%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = -4773900;
	static volatile int64_t t17 = -428LL;

	t17 = (((x73/x74)%x75)%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MAX;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t18 = -1855495444803LL;

	t18 = (((x77/x78)%x79)%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = 20323188450LL;
	static int8_t x83 = INT8_MIN;
	static int64_t t19 = 299443291LL;

	t19 = (((x81/x82)%x83)%x84);

	if (t19 != -12LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 26U;
	volatile uint32_t x88 = UINT32_MAX;
	uint32_t t20 = 1169748279U;

	t20 = (((x85/x86)%x87)%x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 3U;
	int64_t x90 = -189731LL;
	int32_t x91 = -1;
	int32_t x92 = -1;

	t21 = (((x89/x90)%x91)%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 3LL;
	static uint8_t x96 = 15U;
	static volatile int64_t t22 = 13114283736873020LL;

	t22 = (((x93/x94)%x95)%x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1305432830LL;
	uint64_t x98 = 16137079LLU;
	static uint8_t x99 = 7U;
	int32_t x100 = -1;
	volatile uint64_t t23 = 115054621884LLU;

	t23 = (((x97/x98)%x99)%x100);

	if (t23 != 4LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int64_t x102 = 279333242212719LL;
	volatile int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t24 = 20567LL;

	t24 = (((x101/x102)%x103)%x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 29168558237073542LL;
	static int32_t x107 = -6;
	int16_t x108 = -1;
	uint64_t t25 = 13616415LLU;

	t25 = (((x105/x106)%x107)%x108);

	if (t25 != 193416474282LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 415;
	uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 4U;
	volatile int32_t t26 = -79;

	t26 = (((x109/x110)%x111)%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -1LL;
	volatile uint64_t x114 = 32457790943LLU;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = -1;

	t27 = (((x113/x114)%x115)%x116);

	if (t27 != 568330238LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x121 = 119480909936714LL;
	volatile int8_t x122 = 4;
	uint16_t x123 = 11U;
	int32_t x124 = INT32_MIN;
	volatile int64_t t28 = -1LL;

	t28 = (((x121/x122)%x123)%x124);

	if (t28 != 4LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 539LLU;
	uint32_t x126 = 867U;
	uint16_t x128 = UINT16_MAX;
	volatile uint64_t t29 = 125LLU;

	t29 = (((x125/x126)%x127)%x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = INT64_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int64_t x131 = -21091LL;
	int8_t x132 = 1;

	t30 = (((x129/x130)%x131)%x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = -1;
	int32_t x135 = INT32_MIN;

	t31 = (((x133/x134)%x135)%x136);

	if (t31 != 118LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = 13U;
	static uint16_t x139 = 6U;
	int64_t x140 = INT64_MIN;

	t32 = (((x137/x138)%x139)%x140);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x141 = INT64_MAX;
	volatile int64_t x142 = INT64_MIN;
	volatile uint16_t x144 = 10U;

	t33 = (((x141/x142)%x143)%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 3410U;
	static volatile int8_t x146 = INT8_MIN;
	static int32_t x148 = -1;

	t34 = (((x145/x146)%x147)%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 27205U;
	volatile uint8_t x151 = 33U;
	int8_t x152 = INT8_MIN;
	uint32_t t35 = 1032292881U;

	t35 = (((x149/x150)%x151)%x152);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 4U;
	static uint8_t x156 = 10U;
	volatile int32_t t36 = -86128901;

	t36 = (((x153/x154)%x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x158 = INT8_MIN;
	int64_t x160 = -1LL;
	int64_t t37 = 6362132906221LL;

	t37 = (((x157/x158)%x159)%x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x162 = INT64_MAX;
	uint64_t x163 = UINT64_MAX;
	uint64_t t38 = 849LLU;

	t38 = (((x161/x162)%x163)%x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	volatile uint8_t x170 = UINT8_MAX;
	static int16_t x172 = INT16_MIN;

	t39 = (((x169/x170)%x171)%x172);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = -17;
	int64_t x175 = -17669843059LL;
	volatile uint64_t x176 = 56723942926LLU;
	volatile uint64_t t40 = 1LLU;

	t40 = (((x173/x174)%x175)%x176);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x177 = UINT32_MAX;
	static uint32_t x178 = 12301U;
	static uint64_t x179 = 110068LLU;
	int16_t x180 = INT16_MIN;
	volatile uint64_t t41 = 485256119688LLU;

	t41 = (((x177/x178)%x179)%x180);

	if (t41 != 18951LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = INT16_MAX;
	int64_t x182 = 361053681732LL;
	static uint16_t x183 = 669U;
	int8_t x184 = INT8_MIN;
	volatile int64_t t42 = 840270448LL;

	t42 = (((x181/x182)%x183)%x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = INT8_MAX;
	int64_t x186 = -1LL;
	static int16_t x187 = 12765;
	static int64_t t43 = 1899992825165195LL;

	t43 = (((x185/x186)%x187)%x188);

	if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MAX;
	static int16_t x191 = -23;
	static int64_t x192 = -1LL;

	t44 = (((x189/x190)%x191)%x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t45 = 187132247748LLU;

	t45 = (((x193/x194)%x195)%x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = 8190764962LLU;
	static volatile int32_t x199 = -3;
	volatile int64_t x200 = -1LL;
	static uint64_t t46 = 20LLU;

	t46 = (((x197/x198)%x199)%x200);

	if (t46 != 1091374LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x201 = UINT8_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	int8_t x203 = -1;
	static uint32_t x204 = UINT32_MAX;
	static uint32_t t47 = 2U;

	t47 = (((x201/x202)%x203)%x204);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	uint32_t x207 = 8516870U;
	static int16_t x208 = -1;
	uint32_t t48 = 2093184U;

	t48 = (((x205/x206)%x207)%x208);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 13U;
	volatile int64_t x211 = INT64_MIN;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t49 = 0LL;

	t49 = (((x209/x210)%x211)%x212);

	if (t49 != 5041LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x214 = -65095175321LL;
	uint64_t x215 = 11817LLU;
	uint16_t x216 = 332U;
	volatile uint64_t t50 = 25503040091392LLU;

	t50 = (((x213/x214)%x215)%x216);

	if (t50 != 84LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x218 = 1U;
	int32_t x219 = 2494;
	uint8_t x220 = UINT8_MAX;

	t51 = (((x217/x218)%x219)%x220);

	if (t51 != 130) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	static volatile int64_t x224 = INT64_MIN;

	t52 = (((x221/x222)%x223)%x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 0U;
	int16_t x226 = 12;
	static int16_t x227 = 5;
	static volatile uint64_t x228 = 51080839264165189LLU;
	volatile uint64_t t53 = 2326376055661570LLU;

	t53 = (((x225/x226)%x227)%x228);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 49505U;
	volatile uint8_t x238 = UINT8_MAX;
	static int8_t x239 = 28;
	int16_t x240 = -8234;
	static uint32_t t54 = 23U;

	t54 = (((x237/x238)%x239)%x240);

	if (t54 != 26U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 36409457LLU;
	uint32_t x242 = 1837308500U;
	static volatile uint32_t x243 = 155532U;
	volatile uint64_t t55 = 3LLU;

	t55 = (((x241/x242)%x243)%x244);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -1;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	int16_t x248 = INT16_MAX;

	t56 = (((x245/x246)%x247)%x248);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = INT64_MAX;
	int16_t x254 = INT16_MIN;
	int32_t x255 = -1;
	volatile int64_t x256 = -1LL;
	int64_t t57 = -1965254LL;

	t57 = (((x253/x254)%x255)%x256);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x257 = UINT32_MAX;
	static uint8_t x258 = UINT8_MAX;
	uint64_t x259 = UINT64_MAX;
	static volatile uint8_t x260 = 5U;
	volatile uint64_t t58 = 226007513128LLU;

	t58 = (((x257/x258)%x259)%x260);

	if (t58 != 4LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 127686U;
	uint32_t x262 = 1559U;
	volatile uint16_t x263 = 6U;
	uint16_t x264 = 1U;
	volatile uint32_t t59 = 19340987U;

	t59 = (((x261/x262)%x263)%x264);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x266 = -1;
	int64_t x268 = 876462320912LL;
	int64_t t60 = 1LL;

	t60 = (((x265/x266)%x267)%x268);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 19333280U;
	static volatile uint8_t x270 = 35U;
	static volatile uint64_t x271 = 1122892005899LLU;
	int16_t x272 = -1;
	volatile uint64_t t61 = 829499027227LLU;

	t61 = (((x269/x270)%x271)%x272);

	if (t61 != 552379LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x273 = UINT16_MAX;
	volatile uint64_t x274 = 955672920LLU;
	uint64_t t62 = 26351614LLU;

	t62 = (((x273/x274)%x275)%x276);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x278 = -1LL;
	int16_t x280 = 1254;

	t63 = (((x277/x278)%x279)%x280);

	if (t63 != -53LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t64 = 3959327767LLU;

	t64 = (((x281/x282)%x283)%x284);

	if (t64 != 148LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x285 = INT16_MAX;
	volatile int64_t x286 = INT64_MAX;
	int8_t x287 = -19;
	static volatile int64_t x288 = 6LL;

	t65 = (((x285/x286)%x287)%x288);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x289 = -1;

	t66 = (((x289/x290)%x291)%x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 3U;
	static uint32_t x294 = 38110U;
	static int64_t x295 = -428LL;
	uint32_t x296 = 11U;
	volatile int64_t t67 = 91LL;

	t67 = (((x293/x294)%x295)%x296);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 9995LLU;
	int64_t x298 = -1LL;
	volatile int8_t x299 = -1;
	uint8_t x300 = 10U;
	uint64_t t68 = 922257309514966LLU;

	t68 = (((x297/x298)%x299)%x300);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x302 = -4;
	volatile int16_t x303 = INT16_MAX;
	int8_t x304 = -1;
	int64_t t69 = 538LL;

	t69 = (((x301/x302)%x303)%x304);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x306 = -1;
	volatile int32_t x307 = 1;
	int64_t x308 = -1LL;
	int64_t t70 = -9324289915LL;

	t70 = (((x305/x306)%x307)%x308);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x309 = UINT32_MAX;
	uint32_t x310 = 49449253U;
	volatile uint8_t x311 = 88U;
	int32_t x312 = INT32_MAX;
	uint32_t t71 = 17U;

	t71 = (((x309/x310)%x311)%x312);

	if (t71 != 86U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 0;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = -15;
	int64_t x316 = 220LL;
	static volatile int64_t t72 = 817LL;

	t72 = (((x313/x314)%x315)%x316);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = -493;
	int8_t x320 = -1;
	static int64_t t73 = 12129008LL;

	t73 = (((x317/x318)%x319)%x320);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -47;
	int8_t x322 = -1;
	uint8_t x323 = 56U;
	static int16_t x324 = INT16_MIN;

	t74 = (((x321/x322)%x323)%x324);

	if (t74 != 47) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -1;
	static volatile uint16_t x326 = 105U;
	int32_t x327 = -2353;
	int32_t x328 = INT32_MAX;

	t75 = (((x325/x326)%x327)%x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	static volatile uint32_t x330 = 275893367U;
	int16_t x331 = INT16_MIN;
	int16_t x332 = 6849;

	t76 = (((x329/x330)%x331)%x332);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = INT32_MAX;
	static int32_t x335 = -1;
	uint16_t x336 = 13459U;

	t77 = (((x333/x334)%x335)%x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x338 = 1679551LLU;
	uint64_t x339 = 15298227256259LLU;
	volatile uint64_t t78 = 3156LLU;

	t78 = (((x337/x338)%x339)%x340);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MAX;
	static int32_t x342 = INT32_MIN;
	volatile int8_t x343 = INT8_MIN;
	int32_t t79 = 249562;

	t79 = (((x341/x342)%x343)%x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = -1;
	static int16_t x350 = 1426;
	uint16_t x351 = UINT16_MAX;
	static volatile uint64_t x352 = 6187LLU;
	uint64_t t80 = 93345931133522LLU;

	t80 = (((x349/x350)%x351)%x352);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = INT8_MIN;
	int16_t x354 = -12;
	int32_t x356 = INT32_MAX;
	volatile int32_t t81 = 250971;

	t81 = (((x353/x354)%x355)%x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = UINT16_MAX;
	uint8_t x358 = UINT8_MAX;
	volatile int8_t x359 = INT8_MAX;
	int32_t x360 = INT32_MAX;

	t82 = (((x357/x358)%x359)%x360);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	int64_t x362 = INT64_MIN;
	static volatile int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t83 = 66095419504533LLU;

	t83 = (((x361/x362)%x363)%x364);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = 1;
	static uint32_t x370 = 10U;
	int8_t x371 = -1;
	uint32_t x372 = 17U;
	uint32_t t84 = 8U;

	t84 = (((x369/x370)%x371)%x372);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -6;
	int64_t x374 = -1LL;
	int8_t x376 = INT8_MIN;

	t85 = (((x373/x374)%x375)%x376);

	if (t85 != 6LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x377 = INT8_MIN;
	static int16_t x379 = INT16_MIN;
	volatile uint32_t t86 = 11081721U;

	t86 = (((x377/x378)%x379)%x380);

	if (t86 != 128U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t87 = 18LL;

	t87 = (((x381/x382)%x383)%x384);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = 1743LLU;
	int64_t x386 = INT64_MAX;
	static int32_t x387 = 13;
	volatile int16_t x388 = -1;
	static uint64_t t88 = 44814898933LLU;

	t88 = (((x385/x386)%x387)%x388);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = -1LL;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	static int8_t x396 = INT8_MIN;
	int64_t t89 = -1161018260LL;

	t89 = (((x393/x394)%x395)%x396);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x403 = -21;
	uint64_t x404 = 21034275311218324LLU;
	uint64_t t90 = 7845868240903LLU;

	t90 = (((x401/x402)%x403)%x404);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = 7U;
	int64_t x406 = INT64_MIN;
	static int32_t x407 = INT32_MAX;
	volatile int64_t x408 = 47LL;
	volatile int64_t t91 = 12231660712LL;

	t91 = (((x405/x406)%x407)%x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x409 = INT16_MAX;
	int16_t x410 = 31;
	int16_t x411 = INT16_MAX;
	static int8_t x412 = 9;
	volatile int32_t t92 = 9386199;

	t92 = (((x409/x410)%x411)%x412);

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x413 = 599416U;
	static volatile uint64_t x414 = 101918755282598LLU;
	int64_t x415 = INT64_MIN;
	static volatile uint64_t t93 = 84333293413LLU;

	t93 = (((x413/x414)%x415)%x416);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = -1LL;
	int32_t x418 = -464209;
	volatile int16_t x419 = 1;
	int64_t t94 = -11LL;

	t94 = (((x417/x418)%x419)%x420);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x421 = 57U;
	volatile int64_t x423 = -1LL;
	volatile int64_t t95 = 63079165179508755LL;

	t95 = (((x421/x422)%x423)%x424);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x425 = 0;
	int8_t x426 = -1;
	volatile int32_t t96 = 372521;

	t96 = (((x425/x426)%x427)%x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x430 = INT64_MAX;
	static int16_t x431 = INT16_MAX;
	int32_t x432 = INT32_MIN;
	volatile int64_t t97 = -751855528225778220LL;

	t97 = (((x429/x430)%x431)%x432);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 7239;
	static uint64_t x434 = 16518815LLU;
	volatile uint16_t x435 = 1U;
	uint8_t x436 = 41U;

	t98 = (((x433/x434)%x435)%x436);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x439 = 134LLU;
	uint64_t t99 = 1103657351LLU;

	t99 = (((x437/x438)%x439)%x440);

	if (t99 != 62LLU) { NG(); } else { ; }
	
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

