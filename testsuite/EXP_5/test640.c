#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 105;
uint8_t x5 = 1U;
uint16_t x15 = 11788U;
int32_t x23 = INT32_MAX;
volatile uint64_t x29 = UINT64_MAX;
int16_t x36 = INT16_MAX;
volatile int16_t x42 = INT16_MAX;
int16_t x43 = -3;
volatile int16_t x45 = -12;
int64_t x47 = INT64_MIN;
int16_t x51 = INT16_MAX;
int16_t x53 = INT16_MIN;
uint8_t x55 = 1U;
volatile uint8_t x57 = 0U;
int32_t x58 = INT32_MIN;
volatile int64_t x65 = INT64_MIN;
static uint16_t x66 = 4U;
static int16_t x68 = 1;
static int32_t x69 = INT32_MIN;
static int32_t x70 = INT32_MIN;
volatile int16_t x71 = INT16_MIN;
int32_t x77 = 161731;
volatile int64_t t17 = -2584484LL;
int64_t x81 = INT64_MIN;
uint32_t x85 = UINT32_MAX;
uint32_t t19 = 2U;
static uint64_t t20 = 142423467278301160LLU;
static int16_t x94 = INT16_MAX;
int8_t x96 = INT8_MIN;
volatile int64_t x98 = -4344578510LL;
static int64_t x100 = INT64_MIN;
volatile int64_t t24 = -120777LL;
uint64_t x110 = UINT64_MAX;
uint64_t t25 = 1266902526517570340LLU;
static volatile int16_t x124 = INT16_MIN;
int16_t x130 = 2268;
volatile uint64_t t29 = 14LLU;
int64_t x134 = 392385116165648382LL;
volatile uint64_t t30 = 2933635LLU;
static uint64_t t31 = 185LLU;
static int32_t x142 = INT32_MIN;
volatile int8_t x145 = 1;
uint16_t x150 = 1821U;
int16_t x151 = INT16_MIN;
uint32_t x159 = 181616U;
uint64_t t36 = 9168283182LLU;
int64_t x165 = INT64_MAX;
uint64_t x177 = UINT64_MAX;
volatile int8_t x181 = INT8_MIN;
volatile uint32_t t42 = 1U;
int64_t x185 = -21354770948599LL;
int32_t x186 = -386;
uint64_t x190 = 58LLU;
static volatile uint16_t x196 = UINT16_MAX;
int8_t x199 = 1;
int32_t x202 = -1;
int32_t x207 = INT32_MIN;
uint64_t t48 = 3041LLU;
int32_t x211 = -37440469;
static int64_t x212 = INT64_MIN;
uint8_t x213 = 6U;
volatile int64_t x214 = INT64_MIN;
volatile uint8_t x215 = UINT8_MAX;
static int64_t t50 = 13571179453LL;
volatile uint8_t x225 = 0U;
int16_t x239 = 1;
int64_t t55 = 224682LL;
static uint8_t x251 = UINT8_MAX;
int64_t t57 = 96971322LL;
uint8_t x255 = 9U;
volatile int64_t t58 = 26675853929LL;
static uint64_t x257 = UINT64_MAX;
static volatile int8_t x259 = -1;
int64_t x265 = 2LL;
int8_t x269 = INT8_MIN;
int32_t x271 = INT32_MIN;
int64_t x280 = -526335767737652820LL;
static uint64_t x281 = UINT64_MAX;
static int32_t x283 = INT32_MAX;
int32_t x288 = -3620570;
int32_t x300 = -534868328;
static uint16_t x302 = 2U;
static volatile int32_t x310 = INT32_MIN;
uint16_t x318 = UINT16_MAX;
static int32_t x325 = -1;
static int8_t x336 = INT8_MIN;
int32_t t73 = 13;
uint32_t x338 = 2732U;
volatile int8_t x339 = INT8_MIN;
int64_t t78 = -602LL;
int16_t x357 = INT16_MIN;
int32_t x360 = INT32_MAX;
int64_t x362 = -42306880231332LL;
static int64_t x365 = 188263456662LL;
int64_t t81 = -15180092973993579LL;
int16_t x370 = INT16_MIN;
int8_t x372 = 22;
volatile uint32_t t82 = 7895U;
uint8_t x373 = 104U;
int32_t x375 = -1;
uint32_t t85 = 241049643U;
uint64_t x390 = 219420LLU;
static volatile int16_t x391 = -1;
uint64_t t87 = 584LLU;
int64_t x394 = -14403529LL;
static volatile int64_t t88 = 4022548472247LL;
static volatile uint16_t x402 = 18U;
volatile uint64_t x403 = UINT64_MAX;
int32_t x413 = INT32_MIN;
int8_t x415 = INT8_MIN;
int8_t x424 = INT8_MAX;
int64_t x431 = 471818LL;
uint32_t x432 = UINT32_MAX;
int64_t t97 = 21091233498694LL;
int32_t x446 = INT32_MAX;
uint64_t x447 = 4135677821185450LLU;


void f0(void) {
	static uint16_t x1 = 0U;
	int8_t x2 = INT8_MAX;
	volatile int64_t x3 = INT64_MIN;
	volatile int64_t t0 = -18087685LL;

	t0 = (x1*((x2/x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = 45;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 166147022;

	t1 = (x5*((x6/x7)&x8));

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	static int32_t x10 = INT32_MAX;
	volatile int8_t x11 = INT8_MIN;
	uint32_t x12 = UINT32_MAX;
	static volatile uint32_t t2 = 116536417U;

	t2 = (x9*((x10/x11)&x12));

	if (t2 != 16809983U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 18U;
	int8_t x14 = 1;
	static int16_t x16 = -6;
	uint32_t t3 = 1785U;

	t3 = (x13*((x14/x15)&x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	int32_t x22 = -974832690;
	uint8_t x24 = 1U;
	volatile int64_t t4 = 7757032413LL;

	t4 = (x21*((x22/x23)&x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -10;
	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	volatile uint32_t x28 = 1060U;
	volatile uint32_t t5 = 10U;

	t5 = (x25*((x26/x27)&x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x29*((x30/x31)&x32));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = 2;
	int32_t x34 = -11481;
	int8_t x35 = INT8_MIN;
	volatile int32_t t7 = -3151587;

	t7 = (x33*((x34/x35)&x36));

	if (t7 != 178) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -280678482952289116LL;
	static int64_t x38 = -1LL;
	volatile uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MIN;
	volatile int64_t t8 = 157LL;

	t8 = (x37*((x38/x39)&x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -7;
	int32_t x44 = -6610222;
	int32_t t9 = -1;

	t9 = (x41*((x42/x43)&x44));

	if (t9 != 46333378) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = INT64_MAX;
	static int32_t x48 = 1693465;
	volatile int64_t t10 = -5860641390887214LL;

	t10 = (x45*((x46/x47)&x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 0;
	uint16_t x50 = 60U;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 510921;

	t11 = (x49*((x50/x51)&x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = -1;
	uint16_t x56 = 28463U;
	volatile int32_t t12 = 9;

	t12 = (x53*((x54/x55)&x56));

	if (t12 != -932675584) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x59 = 219170215175LLU;
	static int64_t x60 = -30551LL;
	volatile uint64_t t13 = 1464613LLU;

	t13 = (x57*((x58/x59)&x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 9562059871621LLU;
	int32_t x62 = -4068356;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	uint64_t t14 = 930524660360422LLU;

	t14 = (x61*((x62/x63)&x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x67 = 7U;
	volatile int64_t t15 = 3210851947663096926LL;

	t15 = (x65*((x66/x67)&x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x72 = INT16_MAX;
	volatile int32_t t16 = 2;

	t16 = (x69*((x70/x71)&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MIN;
	volatile int64_t x79 = INT64_MIN;
	uint8_t x80 = 8U;

	t17 = (x77*((x78/x79)&x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = 10;
	static uint64_t x83 = 4726681901922057LLU;
	static uint16_t x84 = 0U;
	uint64_t t18 = 55528602790574919LLU;

	t18 = (x81*((x82/x83)&x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x86 = -19;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = 295166;

	t19 = (x85*((x86/x87)&x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	uint64_t x90 = 754042LLU;
	volatile int8_t x91 = 8;
	static volatile uint32_t x92 = 743314014U;

	t20 = (x89*((x90/x91)&x92));

	if (t20 != 18446744073709547506LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	static int8_t x95 = INT8_MIN;
	volatile uint32_t t21 = 278513448U;

	t21 = (x93*((x94/x95)&x96));

	if (t21 != 256U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = INT16_MIN;
	uint64_t x99 = 69358169LLU;
	uint64_t t22 = 60472759450232365LLU;

	t22 = (x97*((x98/x99)&x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	static int8_t x102 = INT8_MAX;
	uint16_t x103 = 1220U;
	static int32_t x104 = -1;
	volatile int64_t t23 = -3239LL;

	t23 = (x101*((x102/x103)&x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	volatile int64_t x106 = INT64_MAX;
	static uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 25045U;

	t24 = (x105*((x106/x107)&x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1005U;
	int64_t x111 = -41806908325644LL;
	static int8_t x112 = -1;

	t25 = (x109*((x110/x111)&x112));

	if (t25 != 1005LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	volatile int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MAX;
	volatile int32_t t26 = -1;

	t26 = (x117*((x118/x119)&x120));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int32_t x123 = 28;
	int32_t t27 = 1032298;

	t27 = (x121*((x122/x123)&x124));

	if (t27 != 76709888) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 2U;
	uint64_t x126 = 115660LLU;
	uint8_t x127 = 10U;
	int8_t x128 = INT8_MAX;
	uint64_t t28 = 745159920684LLU;

	t28 = (x125*((x126/x127)&x128));

	if (t28 != 92LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x129 = 105U;
	uint64_t x131 = UINT64_MAX;
	volatile int8_t x132 = -2;

	t29 = (x129*((x130/x131)&x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x135 = -255110770;
	volatile int8_t x136 = INT8_MIN;

	t30 = (x133*((x134/x135)&x136));

	if (t30 != 1538097024LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = -1;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = INT16_MIN;

	t31 = (x137*((x138/x139)&x140));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int64_t t32 = -50092478LL;

	t32 = (x141*((x142/x143)&x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x146 = INT64_MIN;
	volatile int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MAX;
	int64_t t33 = 1994483160LL;

	t33 = (x145*((x146/x147)&x148));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x152 = 3833802U;
	static volatile uint32_t t34 = 1078U;

	t34 = (x149*((x150/x151)&x152));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -1;
	static int8_t x154 = INT8_MIN;
	int8_t x155 = 60;
	static int16_t x156 = -1;
	static int32_t t35 = -28638;

	t35 = (x153*((x154/x155)&x156));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	volatile int64_t x160 = INT64_MIN;

	t36 = (x157*((x158/x159)&x160));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int64_t x162 = -1LL;
	uint64_t x163 = UINT64_MAX;
	static int32_t x164 = INT32_MIN;
	uint64_t t37 = 52281LLU;

	t37 = (x161*((x162/x163)&x164));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x166 = 1915;
	static volatile uint16_t x167 = 10752U;
	int8_t x168 = INT8_MAX;
	int64_t t38 = 1564063822211448LL;

	t38 = (x165*((x166/x167)&x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x169 = 589233705627LL;
	int64_t x170 = INT64_MAX;
	int8_t x171 = -1;
	int32_t x172 = INT32_MAX;
	volatile int64_t t39 = -7127603342LL;

	t39 = (x169*((x170/x171)&x172));

	if (t39 != 589233705627LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x173 = 1238318754U;
	int32_t x174 = -24023591;
	int32_t x175 = -31127;
	int64_t x176 = INT64_MIN;
	volatile int64_t t40 = -9LL;

	t40 = (x173*((x174/x175)&x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x178 = UINT32_MAX;
	uint8_t x179 = 11U;
	int8_t x180 = -1;
	static volatile uint64_t t41 = 15435265094LLU;

	t41 = (x177*((x178/x179)&x180));

	if (t41 != 18446744073319100044LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x182 = -51;
	volatile uint32_t x183 = 1809584710U;
	volatile uint16_t x184 = 1U;

	t42 = (x181*((x182/x183)&x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = INT16_MIN;
	volatile int64_t t43 = 147469889LL;

	t43 = (x185*((x186/x187)&x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 36602103U;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t44 = 790LLU;

	t44 = (x189*((x190/x191)&x192));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	static int8_t x194 = INT8_MIN;
	int32_t x195 = -3438;
	uint32_t t45 = 676U;

	t45 = (x193*((x194/x195)&x196));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x197 = 47LLU;
	static int64_t x198 = INT64_MIN;
	int64_t x200 = 32431947112057LL;
	uint64_t t46 = 793006LLU;

	t46 = (x197*((x198/x199)&x200));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	static int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MIN;
	int64_t t47 = -139LL;

	t47 = (x201*((x202/x203)&x204));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -5471272;
	uint64_t x206 = 6493698098490405LLU;
	uint16_t x208 = UINT16_MAX;

	t48 = (x205*((x206/x207)&x208));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1;
	volatile uint16_t x210 = 699U;
	volatile int64_t t49 = 226237720684868LL;

	t49 = (x209*((x210/x211)&x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x216 = 5U;

	t50 = (x213*((x214/x215)&x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 45U;
	static volatile int64_t x219 = -6136LL;
	int64_t x220 = INT64_MIN;
	volatile int64_t t51 = -85013745368770LL;

	t51 = (x217*((x218/x219)&x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	volatile uint8_t x222 = 49U;
	static uint64_t x223 = UINT64_MAX;
	uint32_t x224 = UINT32_MAX;
	uint64_t t52 = 186143296185616LLU;

	t52 = (x221*((x222/x223)&x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x226 = INT64_MIN;
	volatile int16_t x227 = -57;
	volatile int8_t x228 = 4;
	static volatile int64_t t53 = 1LL;

	t53 = (x225*((x226/x227)&x228));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -444479368263286LL;
	volatile int64_t x230 = INT64_MIN;
	volatile uint64_t x231 = 33767LLU;
	int8_t x232 = 55;
	static uint64_t t54 = 14901588827452LLU;

	t54 = (x229*((x230/x231)&x232));

	if (t54 != 18445855114973025044LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MAX;
	volatile uint8_t x238 = UINT8_MAX;
	volatile int32_t x240 = INT32_MIN;

	t55 = (x237*((x238/x239)&x240));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 24594U;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -172;
	static volatile int32_t t56 = -10579;

	t56 = (x241*((x242/x243)&x244));

	if (t56 != 6291456) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x249 = 14U;
	int64_t x250 = 413LL;
	int32_t x252 = -1;

	t57 = (x249*((x250/x251)&x252));

	if (t57 != 14LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	uint8_t x254 = 5U;
	int16_t x256 = -11856;

	t58 = (x253*((x254/x255)&x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x258 = -1;
	uint8_t x260 = 59U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x257*((x258/x259)&x260));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	static int8_t x262 = -19;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;
	int64_t t60 = 717LL;

	t60 = (x261*((x262/x263)&x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x266 = -146775232110LL;
	int32_t x267 = -1;
	static volatile uint32_t x268 = UINT32_MAX;
	int64_t t61 = 576776693LL;

	t61 = (x265*((x266/x267)&x268));

	if (t61 != 1492688092LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x270 = 40U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t62 = 4306109;

	t62 = (x269*((x270/x271)&x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x277 = -1087095;
	uint8_t x278 = UINT8_MAX;
	static int8_t x279 = INT8_MAX;
	int64_t t63 = 262977914352330905LL;

	t63 = (x277*((x278/x279)&x280));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x282 = -1;
	int32_t x284 = INT32_MAX;
	uint64_t t64 = 465401649193212235LLU;

	t64 = (x281*((x282/x283)&x284));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MAX;
	int64_t x286 = -3009959LL;
	uint16_t x287 = UINT16_MAX;
	volatile int64_t t65 = -12913428LL;

	t65 = (x285*((x286/x287)&x288));

	if (t65 != -459816962LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = 2;
	int8_t x298 = -1;
	int64_t x299 = INT64_MAX;
	int64_t t66 = 2010139922720130794LL;

	t66 = (x297*((x298/x299)&x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = -4200172705965LL;
	uint16_t x303 = 5840U;
	int8_t x304 = -1;
	volatile int64_t t67 = -368842953028984812LL;

	t67 = (x301*((x302/x303)&x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x305 = 314915028750129LLU;
	uint64_t x306 = 3508742498670482359LLU;
	uint16_t x307 = 459U;
	int32_t x308 = -1;
	volatile uint64_t t68 = 12241050559408090LLU;

	t68 = (x305*((x306/x307)&x308));

	if (t68 != 14013583061893716497LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x309 = INT16_MAX;
	static int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MAX;
	static volatile int32_t t69 = -247037;

	t69 = (x309*((x310/x311)&x312));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	uint8_t x314 = 42U;
	uint16_t x315 = UINT16_MAX;
	static int16_t x316 = -7;
	volatile int32_t t70 = 368464;

	t70 = (x313*((x314/x315)&x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x317 = 4803509U;
	static uint32_t x319 = 476286U;
	int32_t x320 = -4654;
	uint32_t t71 = 451U;

	t71 = (x317*((x318/x319)&x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x326 = INT32_MAX;
	static volatile int32_t x327 = INT32_MIN;
	uint16_t x328 = 9782U;
	volatile int32_t t72 = -6275;

	t72 = (x325*((x326/x327)&x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x333 = INT32_MIN;
	static int16_t x334 = -1;
	volatile int16_t x335 = INT16_MIN;

	t73 = (x333*((x334/x335)&x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = -1;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t74 = 16LLU;

	t74 = (x337*((x338/x339)&x340));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = 90741;
	int16_t x343 = INT16_MIN;
	static int8_t x344 = INT8_MIN;
	int32_t t75 = -23641;

	t75 = (x341*((x342/x343)&x344));

	if (t75 != 4194304) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = -1;
	int32_t x347 = INT32_MAX;
	volatile uint16_t x348 = 7682U;
	int32_t t76 = 214;

	t76 = (x345*((x346/x347)&x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 6362215U;
	uint64_t x352 = 1881698LLU;
	static volatile uint64_t t77 = 15007550728599877LLU;

	t77 = (x349*((x350/x351)&x352));

	if (t77 != 35782110LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x353 = 5U;
	int32_t x354 = INT32_MIN;
	volatile uint32_t x355 = 767U;
	int64_t x356 = 6LL;

	t78 = (x353*((x354/x355)&x356));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x358 = -3644244;
	int64_t x359 = -85LL;
	volatile int64_t t79 = -5637LL;

	t79 = (x357*((x358/x359)&x360));

	if (t79 != -1404862464LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = 12U;
	static volatile uint8_t x363 = 43U;
	int64_t x364 = -1LL;
	int64_t t80 = 8953733022723219LL;

	t80 = (x361*((x362/x363)&x364));

	if (t80 != -11806571227344LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x366 = 88U;
	uint32_t x367 = 10U;
	static int64_t x368 = -27601124293254618LL;

	t81 = (x365*((x366/x367)&x368));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x371 = 1542571U;

	t82 = (x369*((x370/x371)&x372));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x374 = 1471006;
	static int32_t x376 = -1;
	volatile int32_t t83 = 98;

	t83 = (x373*((x374/x375)&x376));

	if (t83 != -152984624) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 3U;
	int8_t x378 = -13;
	int32_t x379 = 7;
	static int8_t x380 = INT8_MIN;
	int32_t t84 = 2803829;

	t84 = (x377*((x378/x379)&x380));

	if (t84 != -384) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = INT16_MIN;
	static int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;

	t85 = (x381*((x382/x383)&x384));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x385 = 1U;
	volatile int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -1;
	int32_t t86 = -239174022;

	t86 = (x385*((x386/x387)&x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = -1;
	int32_t x392 = INT32_MIN;

	t87 = (x389*((x390/x391)&x392));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x393 = 606U;
	uint32_t x395 = UINT32_MAX;
	int16_t x396 = -1;

	t88 = (x393*((x394/x395)&x396));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x397 = 644U;
	volatile int64_t x398 = -257512132474LL;
	int64_t x399 = INT64_MAX;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t89 = 474725LLU;

	t89 = (x397*((x398/x399)&x400));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x401 = UINT16_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t90 = 70899LLU;

	t90 = (x401*((x402/x403)&x404));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = -1;
	uint32_t x410 = 630U;
	static volatile uint64_t x411 = 1452310819LLU;
	static int32_t x412 = INT32_MAX;
	volatile uint64_t t91 = 29050764898LLU;

	t91 = (x409*((x410/x411)&x412));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x414 = 44036456U;
	volatile int16_t x416 = -1;
	static volatile uint32_t t92 = 668726152U;

	t92 = (x413*((x414/x415)&x416));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x417 = -1;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -767;
	int32_t x420 = INT32_MIN;
	static volatile int32_t t93 = 6383718;

	t93 = (x417*((x418/x419)&x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	int16_t x423 = 59;
	volatile int32_t t94 = -1038356665;

	t94 = (x421*((x422/x423)&x424));

	if (t94 != -4128768) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x425 = 0U;
	int8_t x426 = -1;
	static int16_t x427 = -1;
	volatile int32_t x428 = INT32_MIN;
	int32_t t95 = 1480367;

	t95 = (x425*((x426/x427)&x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x429 = UINT16_MAX;
	uint64_t x430 = 27LLU;
	uint64_t t96 = 10651348258671LLU;

	t96 = (x429*((x430/x431)&x432));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = -1;
	volatile int64_t x438 = 95964009LL;
	static int64_t x439 = INT64_MAX;
	int32_t x440 = -1;

	t97 = (x437*((x438/x439)&x440));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MAX;
	uint32_t x443 = UINT32_MAX;
	int64_t x444 = -1LL;
	volatile int64_t t98 = 888LL;

	t98 = (x441*((x442/x443)&x444));

	if (t98 != -274877906944LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MIN;
	uint16_t x448 = UINT16_MAX;
	volatile uint64_t t99 = 262188943714466088LLU;

	t99 = (x445*((x446/x447)&x448));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

