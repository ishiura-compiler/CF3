#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x18 = INT64_MAX;
int64_t x19 = INT64_MIN;
static volatile uint16_t x21 = 1U;
uint32_t x22 = 8977U;
volatile uint32_t t3 = 68562823U;
int16_t x25 = 22;
uint16_t x34 = 27U;
int64_t x37 = INT64_MIN;
static int16_t x40 = -1;
volatile int64_t t9 = 1060678788954747375LL;
int16_t x49 = INT16_MAX;
static int8_t x52 = 1;
static int8_t x55 = -5;
volatile int32_t t11 = -154725;
uint32_t t12 = 203754U;
uint64_t x64 = 2675869854LLU;
int32_t x65 = INT32_MIN;
volatile uint64_t t14 = 24870445001LLU;
int64_t x72 = -1LL;
volatile uint64_t t15 = 197749608416416784LLU;
int64_t x78 = INT64_MIN;
int16_t x79 = INT16_MIN;
int32_t x83 = -559487;
int32_t t18 = -2256206;
int32_t t19 = INT32_MIN;
static volatile int64_t x95 = INT64_MAX;
int32_t x97 = INT32_MIN;
volatile uint8_t x98 = 10U;
volatile int32_t x99 = INT32_MIN;
volatile int32_t t22 = INT32_MIN;
int32_t x101 = -79308;
uint64_t x107 = 704017LLU;
int32_t x112 = INT32_MIN;
int32_t x115 = INT32_MAX;
static uint32_t x122 = 33U;
static int32_t x130 = INT32_MAX;
int16_t x132 = INT16_MIN;
volatile uint64_t t30 = 3579788802120858LLU;
static uint64_t x133 = UINT64_MAX;
static uint64_t x139 = 264035522884850LLU;
volatile uint64_t x141 = 55LLU;
static volatile uint64_t t33 = 1002779872379LLU;
volatile int8_t x147 = 11;
volatile int64_t t34 = -108LL;
uint64_t x150 = 21157069125059404LLU;
static volatile int8_t x153 = INT8_MIN;
volatile uint64_t x157 = 56989656888LLU;
static volatile uint64_t t37 = 1730208333153LLU;
static uint16_t x161 = UINT16_MAX;
uint64_t x164 = 11844095998LLU;
static int16_t x165 = INT16_MIN;
uint8_t x167 = 13U;
volatile int32_t t39 = -30710097;
volatile uint64_t t40 = 13445797560699363LLU;
uint64_t t42 = 9211411765675598001LLU;
uint8_t x186 = 89U;
static uint64_t x192 = UINT64_MAX;
uint8_t x195 = 21U;
volatile int32_t x198 = INT32_MIN;
volatile uint64_t t47 = 115LLU;
static volatile int32_t x204 = INT32_MIN;
int32_t x211 = INT32_MAX;
volatile uint8_t x213 = 40U;
int16_t x229 = -71;
uint64_t x235 = 4278741782718016721LLU;
uint8_t x236 = UINT8_MAX;
int8_t x238 = INT8_MIN;
int16_t x239 = -3;
uint16_t x243 = 123U;
volatile int64_t x245 = INT64_MIN;
volatile int16_t x248 = INT16_MAX;
int8_t x252 = 60;
int32_t x254 = INT32_MAX;
int64_t x255 = -717774LL;
int64_t x256 = -1016032408180254573LL;
uint64_t t62 = 3791431506708719341LLU;
int8_t x261 = 3;
volatile uint8_t x265 = 7U;
int32_t x269 = INT32_MIN;
volatile int32_t x270 = -1;
volatile int64_t t65 = -1LL;
volatile int64_t t66 = -1472925LL;
static volatile int64_t t67 = -7468753351LL;
volatile int16_t x283 = 82;
int64_t t68 = INT64_MAX;
int32_t x289 = -1692550;
int64_t x290 = INT64_MAX;
volatile uint16_t x302 = 350U;
int64_t x319 = INT64_MAX;
int16_t x321 = INT16_MAX;
static int16_t x324 = -5890;
static volatile int8_t x325 = INT8_MAX;
volatile int64_t t78 = -412917287840LL;
static int64_t x340 = INT64_MAX;
int8_t x349 = -1;
int64_t x354 = INT64_MAX;
uint16_t x357 = 5U;
int16_t x367 = -1;
static volatile uint16_t x371 = UINT16_MAX;
int16_t x374 = -1;
static uint64_t t88 = 147573749656LLU;
static volatile int8_t x382 = 5;
volatile int16_t x385 = INT16_MAX;
int64_t x388 = -228755797LL;
int64_t x389 = 280721459177380LL;
uint64_t x394 = UINT64_MAX;
int64_t x395 = 17247492095832LL;
int32_t x399 = -1;
static int8_t x400 = INT8_MAX;
volatile int32_t t94 = -7895;
int16_t x415 = INT16_MIN;
int8_t x416 = -14;
volatile int64_t t99 = 2845LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	uint8_t x3 = 14U;
	uint16_t x4 = 3U;
	int32_t t0 = -123774;

	t0 = (x1|((x2/x3)&x4));

	if (t0 != -32765) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = 22;
	int16_t x15 = INT16_MIN;
	static uint16_t x16 = 32019U;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x13|((x14/x15)&x16));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MAX;
	static int64_t x20 = -8225047576LL;
	int64_t t2 = -30662424LL;

	t2 = (x17|((x18/x19)&x20));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x23 = 4148877;
	volatile int16_t x24 = INT16_MAX;

	t3 = (x21|((x22/x23)&x24));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	static int16_t x28 = INT16_MAX;
	int32_t t4 = 1;

	t4 = (x25|((x26/x27)&x28));

	if (t4 != 32662) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 718333LLU;
	int32_t x30 = -1;
	static int8_t x31 = INT8_MIN;
	static int64_t x32 = INT64_MIN;
	static uint64_t t5 = 7284422LLU;

	t5 = (x29|((x30/x31)&x32));

	if (t5 != 718333LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	int16_t x35 = -871;
	volatile int64_t x36 = 99146473806614368LL;
	volatile int64_t t6 = 22253268483075076LL;

	t6 = (x33|((x34/x35)&x36));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = 633018332;
	static int64_t t7 = INT64_MIN;

	t7 = (x37|((x38/x39)&x40));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 0;
	int64_t x42 = -1LL;
	uint16_t x43 = 17027U;
	int16_t x44 = INT16_MAX;
	volatile int64_t t8 = -3552863108939472LL;

	t8 = (x41|((x42/x43)&x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	int8_t x46 = -1;
	volatile int64_t x47 = INT64_MIN;
	int8_t x48 = -5;

	t9 = (x45|((x46/x47)&x48));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int32_t t10 = -620848;

	t10 = (x49|((x50/x51)&x52));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = -1;
	static volatile int16_t x54 = -1;
	int32_t x56 = INT32_MIN;

	t11 = (x53|((x54/x55)&x56));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 1;
	static int32_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MAX;

	t12 = (x57|((x58/x59)&x60));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static int16_t x62 = -1752;
	uint64_t x63 = 17800562494454LLU;
	static uint64_t t13 = 63945212LLU;

	t13 = (x61|((x62/x63)&x64));

	if (t13 != 9223372036855726092LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x66 = INT64_MIN;
	uint16_t x67 = 13817U;
	uint64_t x68 = 78665801880LLU;

	t14 = (x65|((x66/x67)&x68));

	if (t14 != 18446744071844134912LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 744188054102LLU;
	uint16_t x70 = UINT16_MAX;
	static int32_t x71 = -3899;

	t15 = (x69|((x70/x71)&x72));

	if (t15 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	volatile int8_t x74 = INT8_MIN;
	uint32_t x75 = UINT32_MAX;
	static int8_t x76 = -1;
	volatile int64_t t16 = INT64_MIN;

	t16 = (x73|((x74/x75)&x76));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x80 = -23127951576530287LL;
	int64_t t17 = 941195994LL;

	t17 = (x77|((x78/x79)&x80));

	if (t17 != 281474976710911LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint8_t x82 = 105U;
	volatile int16_t x84 = -1;

	t18 = (x81|((x82/x83)&x84));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;

	t19 = (x85|((x86/x87)&x88));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = UINT32_MAX;
	int64_t x92 = INT64_MIN;
	volatile int64_t t20 = 796390693LL;

	t20 = (x89|((x90/x91)&x92));

	if (t20 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = 1;
	int64_t x94 = -2001108866LL;
	volatile int64_t x96 = INT64_MAX;
	volatile int64_t t21 = -536549767568094LL;

	t21 = (x93|((x94/x95)&x96));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x100 = INT32_MIN;

	t22 = (x97|((x98/x99)&x100));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x102 = 3432U;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	int64_t t23 = -321436838359039451LL;

	t23 = (x101|((x102/x103)&x104));

	if (t23 != -79308LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = 4U;
	int64_t x106 = INT64_MAX;
	uint16_t x108 = 32099U;
	uint64_t t24 = 536230LLU;

	t24 = (x105|((x106/x107)&x108));

	if (t24 != 16743LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = 3U;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x109|((x110/x111)&x112));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 11U;
	static int8_t x114 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t26 = -185;

	t26 = (x113|((x114/x115)&x116));

	if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 1301U;
	uint16_t x118 = 22U;
	static volatile int16_t x119 = -1;
	static uint16_t x120 = UINT16_MAX;
	int32_t t27 = -5;

	t27 = (x117|((x118/x119)&x120));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x121 = -1;
	uint64_t x123 = 31720LLU;
	int64_t x124 = -7571LL;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x121|((x122/x123)&x124));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -27;
	uint64_t x126 = 937007917611401LLU;
	int32_t x127 = INT32_MIN;
	volatile int16_t x128 = INT16_MIN;
	volatile uint64_t t29 = 33373LLU;

	t29 = (x125|((x126/x127)&x128));

	if (t29 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 1501LLU;
	int8_t x131 = 1;

	t30 = (x129|((x130/x131)&x132));

	if (t30 != 2147452381LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x134 = 9918U;
	static int64_t x135 = INT64_MIN;
	int8_t x136 = 11;
	uint64_t t31 = UINT64_MAX;

	t31 = (x133|((x134/x135)&x136));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = -1LL;
	int32_t x138 = INT32_MIN;
	static uint64_t x140 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x137|((x138/x139)&x140));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = 422U;
	uint8_t x143 = 61U;
	int64_t x144 = -1LL;

	t33 = (x141|((x142/x143)&x144));

	if (t33 != 55LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	int8_t x148 = 9;

	t34 = (x145|((x146/x147)&x148));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = -1;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 24945014U;
	static uint64_t t35 = UINT64_MAX;

	t35 = (x149|((x150/x151)&x152));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = INT64_MAX;
	volatile int32_t x155 = -7700;
	int64_t x156 = -1317397LL;
	volatile int64_t t36 = 24LL;

	t36 = (x153|((x154/x155)&x156));

	if (t36 != -118LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = -12;
	static uint64_t x160 = 7205659768099693944LLU;

	t37 = (x157|((x158/x159)&x160));

	if (t37 != 56989656888LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = UINT64_MAX;
	static int64_t x163 = -1LL;
	static volatile uint64_t t38 = 581047790413642LLU;

	t38 = (x161|((x162/x163)&x164));

	if (t38 != 65535LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x166 = 7U;
	int32_t x168 = INT32_MIN;

	t39 = (x165|((x166/x167)&x168));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 10462LLU;
	uint16_t x170 = 132U;
	volatile int16_t x171 = 1881;
	int8_t x172 = INT8_MAX;

	t40 = (x169|((x170/x171)&x172));

	if (t40 != 10462LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = UINT64_MAX;
	volatile uint32_t x174 = 10409U;
	volatile uint32_t x175 = 782573453U;
	int16_t x176 = -1;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x173|((x174/x175)&x176));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 72LLU;
	int32_t x178 = INT32_MAX;
	int8_t x179 = -1;
	int8_t x180 = INT8_MIN;

	t42 = (x177|((x178/x179)&x180));

	if (t42 != 18446744071562068040LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -77381631;
	volatile int64_t x182 = INT64_MIN;
	static int8_t x183 = INT8_MAX;
	static int8_t x184 = INT8_MIN;
	int64_t t43 = 57744441151722LL;

	t43 = (x181|((x182/x183)&x184));

	if (t43 != -255LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	int32_t x187 = -2620670;
	int32_t x188 = 5774;
	int32_t t44 = 48503;

	t44 = (x185|((x186/x187)&x188));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = 110U;
	int16_t x190 = 0;
	volatile uint32_t x191 = 4020535U;
	volatile uint64_t t45 = 1868677LLU;

	t45 = (x189|((x190/x191)&x192));

	if (t45 != 110LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	static volatile int32_t x194 = INT32_MAX;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t46 = 2049LLU;

	t46 = (x193|((x194/x195)&x196));

	if (t46 != 102301695LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	int16_t x199 = INT16_MAX;
	uint64_t x200 = 1203015559159634LLU;

	t47 = (x197|((x198/x199)&x200));

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = -7496;
	volatile int8_t x202 = -1;
	int16_t x203 = 8;
	int32_t t48 = 21794480;

	t48 = (x201|((x202/x203)&x204));

	if (t48 != -7496) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 253614777U;
	volatile uint64_t x208 = 400548LLU;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x205|((x206/x207)&x208));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = -69942557505183LL;
	uint32_t x212 = 14U;
	volatile int64_t t50 = -8511237870521360LL;

	t50 = (x209|((x210/x211)&x212));

	if (t50 != -2147483642LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 27U;
	volatile int32_t t51 = 301465031;

	t51 = (x213|((x214/x215)&x216));

	if (t51 != 40) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = 11993422U;
	int8_t x218 = INT8_MIN;
	int64_t x219 = -1LL;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t52 = 4107040LL;

	t52 = (x217|((x218/x219)&x220));

	if (t52 != 11993422LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x221 = 0LL;
	int16_t x222 = 0;
	uint8_t x223 = UINT8_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t53 = -8537345605989757LL;

	t53 = (x221|((x222/x223)&x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = 21U;
	int16_t x228 = -1;
	volatile uint32_t t54 = 1244U;

	t54 = (x225|((x226/x227)&x228));

	if (t54 != 1663U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x230 = 7884413406592235141LLU;
	int32_t x231 = 3479194;
	uint32_t x232 = 20379821U;
	uint64_t t55 = 418029994541926107LLU;

	t55 = (x229|((x230/x231)&x232));

	if (t55 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MAX;
	volatile uint16_t x234 = UINT16_MAX;
	uint64_t t56 = 3191428LLU;

	t56 = (x233|((x234/x235)&x236));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x237 = 13U;
	uint32_t x240 = UINT32_MAX;
	uint32_t t57 = 1824409U;

	t57 = (x237|((x238/x239)&x240));

	if (t57 != 47U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 30949U;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t58 = -47731;

	t58 = (x241|((x242/x243)&x244));

	if (t58 != -32640) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 155U;
	static volatile int64_t t59 = 2260023673790505972LL;

	t59 = (x245|((x246/x247)&x248));

	if (t59 != -9223372036854764392LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	int8_t x250 = 3;
	volatile int32_t x251 = INT32_MIN;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x249|((x250/x251)&x252));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x253 = 0U;
	volatile int64_t t61 = -2LL;

	t61 = (x253|((x254/x255)&x256));

	if (t61 != -1016032408180256751LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 3U;
	static volatile uint64_t x258 = 19409701608551942LLU;
	int64_t x259 = INT64_MAX;
	volatile int32_t x260 = INT32_MIN;

	t62 = (x257|((x258/x259)&x260));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = -1;
	volatile int32_t x263 = INT32_MIN;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t63 = -31911;

	t63 = (x261|((x262/x263)&x264));

	if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x266 = INT64_MIN;
	uint16_t x267 = 14U;
	int32_t x268 = INT32_MIN;
	volatile int64_t t64 = 2029570369870LL;

	t64 = (x265|((x266/x267)&x268));

	if (t64 != -658812289880686585LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x271 = INT8_MIN;
	int64_t x272 = -51133807454LL;

	t65 = (x269|((x270/x271)&x272));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = 135930560674107LL;
	uint16_t x274 = UINT16_MAX;
	volatile int8_t x275 = -1;
	static volatile uint16_t x276 = 3U;

	t66 = (x273|((x274/x275)&x276));

	if (t66 != 135930560674107LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MAX;
	uint32_t x279 = 30681681U;
	int8_t x280 = INT8_MAX;

	t67 = (x277|((x278/x279)&x280));

	if (t67 != -32727LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x281 = INT64_MAX;
	static volatile int32_t x282 = -1;
	static int8_t x284 = 0;

	t68 = (x281|((x282/x283)&x284));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 12U;
	volatile int32_t t69 = 21;

	t69 = (x285|((x286/x287)&x288));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x291 = INT32_MIN;
	volatile int16_t x292 = -1923;
	static int64_t t70 = 106229LL;

	t70 = (x289|((x290/x291)&x292));

	if (t70 != -1692549LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	volatile int16_t x294 = INT16_MAX;
	static int32_t x295 = INT32_MAX;
	volatile int16_t x296 = 125;
	static volatile int32_t t71 = INT32_MIN;

	t71 = (x293|((x294/x295)&x296));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = -2975;
	uint32_t x299 = 12459405U;
	static uint64_t x300 = 0LLU;
	volatile uint64_t t72 = 1816LLU;

	t72 = (x297|((x298/x299)&x300));

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	uint32_t x303 = 18U;
	static volatile uint16_t x304 = 262U;
	static volatile uint32_t t73 = 14U;

	t73 = (x301|((x302/x303)&x304));

	if (t73 != 4294967170U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MAX;
	volatile uint8_t x310 = 41U;
	int16_t x311 = -1;
	uint8_t x312 = 115U;
	int32_t t74 = -7646;

	t74 = (x309|((x310/x311)&x312));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 2596LLU;
	uint16_t x315 = 7U;
	uint8_t x316 = UINT8_MAX;
	static uint64_t t75 = 10LLU;

	t75 = (x313|((x314/x315)&x316));

	if (t75 != 18446744073709518962LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = 0;
	static int16_t x320 = INT16_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x317|((x318/x319)&x320));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x322 = -1;
	static int8_t x323 = INT8_MIN;
	volatile int32_t t77 = -50066;

	t77 = (x321|((x322/x323)&x324));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -1851393LL;

	t78 = (x325|((x326/x327)&x328));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x329 = 23567544239144298LLU;
	uint16_t x330 = 7267U;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -1LL;
	static uint64_t t79 = 0LLU;

	t79 = (x329|((x330/x331)&x332));

	if (t79 != 23567544239144298LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x337 = 26LLU;
	int16_t x338 = -1;
	int64_t x339 = INT64_MIN;
	volatile uint64_t t80 = 7537618295382646808LLU;

	t80 = (x337|((x338/x339)&x340));

	if (t80 != 26LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	int64_t x344 = -2398616543818471066LL;
	static int64_t t81 = 330335LL;

	t81 = (x341|((x342/x343)&x344));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x345 = UINT32_MAX;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = 7517215921845647968LLU;
	int16_t x348 = -1;
	uint64_t t82 = 51649649293796LLU;

	t82 = (x345|((x346/x347)&x348));

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x350 = 211997;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t83 = 795931;

	t83 = (x349|((x350/x351)&x352));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 30275084U;
	int16_t x355 = -2720;
	uint8_t x356 = UINT8_MAX;
	volatile int64_t t84 = 33284933401981LL;

	t84 = (x353|((x354/x355)&x356));

	if (t84 != 30275324LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MIN;
	int16_t x359 = -3096;
	int16_t x360 = INT16_MIN;
	int64_t t85 = 1103325217043111LL;

	t85 = (x357|((x358/x359)&x360));

	if (t85 != 2979125334900741LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = -1;
	int32_t x366 = -1;
	volatile uint32_t x368 = 1U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x365|((x366/x367)&x368));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MAX;
	static int8_t x372 = INT8_MAX;
	int64_t t87 = INT64_MIN;

	t87 = (x369|((x370/x371)&x372));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x373 = 10648704710LLU;
	uint16_t x375 = 675U;
	uint64_t x376 = UINT64_MAX;

	t88 = (x373|((x374/x375)&x376));

	if (t88 != 10648704710LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 4U;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -1LL;
	volatile int64_t x380 = INT64_MIN;
	int64_t t89 = -80LL;

	t89 = (x377|((x378/x379)&x380));

	if (t89 != 4LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = 2;
	uint64_t x383 = 22912650307372LLU;
	volatile int64_t x384 = 71679LL;
	volatile uint64_t t90 = 80308258970LLU;

	t90 = (x381|((x382/x383)&x384));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x386 = 7358430U;
	int16_t x387 = -3748;
	volatile int64_t t91 = -7LL;

	t91 = (x385|((x386/x387)&x388));

	if (t91 != 32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = -2;
	int8_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	static int64_t t92 = -229459722794324034LL;

	t92 = (x389|((x390/x391)&x392));

	if (t92 != 280721459177382LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	uint64_t t93 = 62281656798347LLU;

	t93 = (x393|((x394/x395)&x396));

	if (t93 != 65535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = 10;
	volatile int32_t x398 = -1;

	t94 = (x397|((x398/x399)&x400));

	if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 7U;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t95 = 17020;

	t95 = (x401|((x402/x403)&x404));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MAX;
	int32_t x406 = -1;
	static volatile int32_t x407 = INT32_MIN;
	volatile int16_t x408 = 19;
	volatile int32_t t96 = 862119708;

	t96 = (x405|((x406/x407)&x408));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = INT8_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MIN;
	volatile int16_t x412 = INT16_MIN;
	uint64_t t97 = 228418LLU;

	t97 = (x409|((x410/x411)&x412));

	if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x413 = 126037068LLU;
	uint32_t x414 = UINT32_MAX;
	volatile uint64_t t98 = 24331LLU;

	t98 = (x413|((x414/x415)&x416));

	if (t98 != 126037068LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -1;
	static int64_t x418 = INT64_MIN;
	volatile int64_t x419 = 8499133LL;
	volatile int16_t x420 = INT16_MAX;

	t99 = (x417|((x418/x419)&x420));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

