#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 0;
volatile uint32_t x6 = 8178077U;
int8_t x7 = INT8_MIN;
static uint8_t x9 = 1U;
volatile int32_t x24 = INT32_MIN;
volatile uint32_t x27 = 16345U;
int64_t t5 = -9592LL;
static int8_t x34 = 3;
uint8_t x35 = 12U;
uint64_t x45 = 47197246942910931LLU;
int16_t x49 = -1;
int16_t x55 = -1;
volatile int32_t x58 = 3;
int64_t t13 = -42LL;
int64_t x75 = 6078779243504572LL;
int32_t x81 = INT32_MIN;
volatile int8_t x84 = INT8_MIN;
static uint16_t x85 = 22U;
uint8_t x88 = 11U;
volatile uint32_t t20 = 190001393U;
static int64_t x93 = -130759489452562174LL;
volatile int8_t x95 = INT8_MAX;
int32_t x96 = 4104826;
int16_t x98 = INT16_MIN;
volatile uint64_t x110 = UINT64_MAX;
uint64_t x112 = 1707331LLU;
volatile uint64_t t27 = 525LLU;
volatile int32_t x128 = -1;
volatile int32_t t28 = -116107243;
static uint16_t x141 = 303U;
volatile int64_t t31 = -25LL;
int8_t x146 = INT8_MIN;
int32_t x157 = INT32_MAX;
uint32_t x158 = 126117U;
int16_t x160 = -1;
volatile int64_t t35 = 23487635LL;
int8_t x163 = -1;
static uint64_t x168 = 292LLU;
int32_t x172 = -1;
volatile uint64_t t40 = 4011480490553601912LLU;
int64_t x195 = -30648805LL;
int8_t x211 = INT8_MIN;
volatile int32_t t48 = 856924587;
static int16_t x228 = INT16_MIN;
static int16_t x229 = INT16_MIN;
static int8_t x231 = 1;
int32_t x234 = INT32_MIN;
int8_t x242 = INT8_MIN;
volatile uint16_t x249 = 176U;
uint16_t x255 = UINT16_MAX;
int64_t t57 = -1LL;
int64_t x260 = 80915LL;
volatile int32_t x266 = 85;
volatile uint16_t x270 = UINT16_MAX;
uint64_t t60 = 13LLU;
int16_t x280 = INT16_MAX;
volatile uint64_t t62 = 1494791367LLU;
static int64_t x282 = -1LL;
uint16_t x283 = 1U;
static int32_t x286 = INT32_MIN;
int64_t x293 = -957748071199399746LL;
uint8_t x304 = UINT8_MAX;
volatile int16_t x307 = INT16_MIN;
volatile int16_t x315 = INT16_MAX;
int32_t x316 = 240971;
static int64_t t71 = -14471793LL;
int64_t x322 = -1LL;
int16_t x331 = INT16_MIN;
int16_t x332 = 3367;
uint16_t x345 = 1054U;
int8_t x353 = INT8_MIN;
int16_t x359 = INT16_MAX;
static uint32_t x364 = UINT32_MAX;
int32_t x368 = 0;
uint64_t t84 = 16221585187813875LLU;
uint16_t x377 = UINT16_MAX;
uint64_t x380 = 4321209821523LLU;
uint64_t t85 = 0LLU;
int16_t x386 = INT16_MIN;
volatile uint64_t t87 = 3603957LLU;
static uint16_t x391 = 1437U;
static int8_t x398 = -1;
static int32_t x401 = INT32_MIN;
uint64_t x403 = 4049850732502865LLU;
int16_t x410 = -3;
int32_t t93 = 11027;
int8_t x413 = 1;
int8_t x415 = INT8_MAX;
static volatile uint32_t t95 = 5578U;
volatile int64_t t97 = -3864081804LL;
volatile int8_t x429 = -1;
volatile uint32_t x430 = 136376260U;
static volatile int64_t t99 = 223123580LL;


void f0(void) {
	static volatile uint16_t x2 = 21187U;
	volatile int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -93;

	t0 = ((x1^(x2/x3))+x4);

	if (t0 != -53955) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 4521473;
	int16_t x8 = 5;
	uint32_t t1 = 1433563U;

	t1 = ((x5^(x6/x7))+x8);

	if (t1 != 4521478U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 563226257579LLU;
	uint16_t x11 = 120U;
	int64_t x12 = -1LL;
	static uint64_t t2 = 2978088976938LLU;

	t2 = ((x9^(x10/x11))+x12);

	if (t2 != 4693552146LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 0;
	int64_t x18 = -1LL;
	static volatile int8_t x19 = -2;
	uint8_t x20 = 53U;
	int64_t t3 = -326LL;

	t3 = ((x17^(x18/x19))+x20);

	if (t3 != 53LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	volatile uint16_t x22 = UINT16_MAX;
	static int64_t x23 = -16704816919LL;
	static volatile int64_t t4 = -41190464970065433LL;

	t4 = ((x21^(x22/x23))+x24);

	if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	int64_t x26 = -1LL;
	uint32_t x28 = UINT32_MAX;

	t5 = ((x25^(x26/x27))+x28);

	if (t5 != 4294967294LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 955434598645LLU;
	uint32_t x30 = 220U;
	static int64_t x31 = INT64_MIN;
	int32_t x32 = 10841;
	volatile uint64_t t6 = 62689048926350LLU;

	t6 = ((x29^(x30/x31))+x32);

	if (t6 != 955434609486LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 2;
	int16_t x36 = INT16_MIN;
	static int32_t t7 = -26682;

	t7 = ((x33^(x34/x35))+x36);

	if (t7 != -32766) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = 33U;
	static int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	volatile int32_t t8 = -69340059;

	t8 = ((x37^(x38/x39))+x40);

	if (t8 != 32) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 1011432LLU;
	int64_t x42 = INT64_MAX;
	int64_t x43 = 31949LL;
	int32_t x44 = INT32_MAX;
	uint64_t t9 = 2155453932935459231LLU;

	t9 = ((x41^(x42/x43))+x44);

	if (t9 != 288692623223022LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = 1728161922756158249LL;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t10 = 5754598934958371LLU;

	t10 = ((x45^(x46/x47))+x48);

	if (t10 != 47149615551713559LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = 63789215326548LL;
	int16_t x51 = INT16_MAX;
	int16_t x52 = -1;
	int64_t t11 = 301232143216551550LL;

	t11 = ((x49^(x50/x51))+x52);

	if (t11 != -1946751774LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = -22;
	static uint8_t x54 = 10U;
	uint64_t x56 = 121664LLU;
	uint64_t t12 = 7LLU;

	t12 = ((x53^(x54/x55))+x56);

	if (t12 != 121692LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int64_t x59 = INT64_MAX;
	int8_t x60 = INT8_MAX;

	t13 = ((x57^(x58/x59))+x60);

	if (t13 != -32641LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -6;
	volatile int16_t x68 = -1629;
	int32_t t14 = -1987759;

	t14 = ((x65^(x66/x67))+x68);

	if (t14 != -2147479816) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 9LLU;
	int64_t x70 = INT64_MIN;
	int16_t x71 = -2;
	uint16_t x72 = 15U;
	volatile uint64_t t15 = 568948918262277LLU;

	t15 = ((x69^(x70/x71))+x72);

	if (t15 != 4611686018427387928LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -8;
	int8_t x76 = INT8_MAX;
	int64_t t16 = 4LL;

	t16 = ((x73^(x74/x75))+x76);

	if (t16 != 254LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = -1LL;
	volatile uint32_t x80 = 0U;
	static volatile int64_t t17 = 269500311426389452LL;

	t17 = ((x77^(x78/x79))+x80);

	if (t17 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x82 = UINT32_MAX;
	static volatile int16_t x83 = INT16_MIN;
	uint32_t t18 = 2400730U;

	t18 = ((x81^(x82/x83))+x84);

	if (t18 != 2147483521U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = -14999722;
	static volatile uint64_t t19 = 230LLU;

	t19 = ((x85^(x86/x87))+x88);

	if (t19 != 34LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 17381839U;
	uint8_t x90 = 1U;
	static int32_t x91 = -1000;
	int16_t x92 = -914;

	t20 = ((x89^(x90/x91))+x92);

	if (t20 != 17380925U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = 1066878932331904325LLU;
	volatile uint64_t t21 = 153544LLU;

	t21 = ((x93^(x94/x95))+x96);

	if (t21 != 18316890367316216819LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	int64_t x99 = 2162LL;
	static int64_t x100 = INT64_MIN;
	int64_t t22 = -872LL;

	t22 = ((x97^(x98/x99))+x100);

	if (t22 != -9223372036854775695LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	volatile uint64_t x106 = UINT64_MAX;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -1;
	uint64_t t23 = 131908LLU;

	t23 = ((x105^(x106/x107))+x108);

	if (t23 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	int64_t x111 = -1LL;
	volatile uint64_t t24 = 74LLU;

	t24 = ((x109^(x110/x111))+x112);

	if (t24 != 1707204LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x114 = -128;
	static uint16_t x115 = UINT16_MAX;
	static int16_t x116 = -1111;
	int32_t t25 = -2652817;

	t25 = ((x113^(x114/x115))+x116);

	if (t25 != -1239) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = -1015;
	volatile int16_t x118 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t26 = -17LL;

	t26 = ((x117^(x118/x119))+x120);

	if (t26 != 4294966280LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x121 = 1821LLU;
	int64_t x122 = -1LL;
	static int16_t x123 = INT16_MIN;
	volatile uint16_t x124 = 1111U;

	t27 = ((x121^(x122/x123))+x124);

	if (t27 != 2932LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x125 = UINT8_MAX;
	volatile int32_t x126 = 27998;
	uint16_t x127 = UINT16_MAX;

	t28 = ((x125^(x126/x127))+x128);

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 14419U;
	volatile uint8_t x134 = 1U;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MIN;
	uint32_t t29 = 1U;

	t29 = ((x133^(x134/x135))+x136);

	if (t29 != 4294948947U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MAX;
	volatile int64_t x138 = INT64_MAX;
	uint32_t x139 = 3U;
	static uint8_t x140 = 1U;
	static int64_t t30 = -112100604368521700LL;

	t30 = ((x137^(x138/x139))+x140);

	if (t30 != 3074457345618258646LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = 111U;
	static int64_t x143 = 179355276883LL;
	static volatile int64_t x144 = INT64_MIN;

	t31 = ((x141^(x142/x143))+x144);

	if (t31 != -9223372036854775505LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 1854208184LLU;
	int64_t x147 = INT64_MIN;
	volatile uint8_t x148 = 27U;
	uint64_t t32 = 1578575385494094LLU;

	t32 = ((x145^(x146/x147))+x148);

	if (t32 != 1854208211LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = -1;
	static volatile int16_t x150 = INT16_MIN;
	static int64_t x151 = INT64_MIN;
	static int8_t x152 = 0;
	int64_t t33 = -443LL;

	t33 = ((x149^(x150/x151))+x152);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 2115125894U;
	int8_t x154 = -1;
	int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MAX;
	static volatile uint32_t t34 = 1500046876U;

	t34 = ((x153^(x154/x155))+x156);

	if (t34 != 2115158661U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x159 = INT64_MIN;

	t35 = ((x157^(x158/x159))+x160);

	if (t35 != 2147483646LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	uint32_t t36 = 72067U;

	t36 = ((x161^(x162/x163))+x164);

	if (t36 != 32638U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 3;
	uint8_t x166 = 0U;
	volatile int16_t x167 = INT16_MAX;
	uint64_t t37 = 176544887117LLU;

	t37 = ((x165^(x166/x167))+x168);

	if (t37 != 295LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 1U;
	int8_t x170 = -1;
	int32_t x171 = -1;
	static int32_t t38 = 102856;

	t38 = ((x169^(x170/x171))+x172);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MAX;
	static int8_t x176 = INT8_MIN;
	static int32_t t39 = 5844;

	t39 = ((x173^(x174/x175))+x176);

	if (t39 != 2147483518) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	static int16_t x179 = INT16_MAX;
	static volatile uint32_t x180 = 60318U;

	t40 = ((x177^(x178/x179))+x180);

	if (t40 != 9223935003988650926LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = -27;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = 1U;
	uint64_t x188 = 115214178LLU;
	uint64_t t41 = 438337528LLU;

	t41 = ((x185^(x186/x187))+x188);

	if (t41 != 115246919LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x189 = 66800655228LLU;
	static int16_t x190 = -1;
	static volatile int64_t x191 = INT64_MIN;
	int16_t x192 = 117;
	volatile uint64_t t42 = 67649606463854LLU;

	t42 = ((x189^(x190/x191))+x192);

	if (t42 != 66800655345LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x193 = -1;
	int16_t x194 = 14;
	volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t43 = 72435994758412LLU;

	t43 = ((x193^(x194/x195))+x196);

	if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	uint64_t x198 = 1035477482892248828LLU;
	static int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MAX;
	uint64_t t44 = 16603387895701LLU;

	t44 = ((x197^(x198/x199))+x200);

	if (t44 != 126LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = 0;
	volatile int64_t x202 = -962447759225583686LL;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t45 = INT64_MIN;

	t45 = ((x201^(x202/x203))+x204);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MIN;
	static volatile uint64_t x206 = 32077917125193LLU;
	uint32_t x207 = UINT32_MAX;
	uint16_t x208 = 136U;
	volatile uint64_t t46 = 12651863761725222LLU;

	t46 = ((x205^(x206/x207))+x208);

	if (t46 != 18446744071562075572LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MAX;
	volatile int8_t x210 = INT8_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t47 = 3468;

	t47 = ((x209^(x210/x211))+x212);

	if (t47 != 33021) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = 884;
	static int32_t x216 = 6;

	t48 = ((x213^(x214/x215))+x216);

	if (t48 != -32688) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	uint8_t x222 = 10U;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = 3452U;
	uint32_t t49 = 1472U;

	t49 = ((x221^(x222/x223))+x224);

	if (t49 != 3451U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	volatile int8_t x226 = 60;
	int8_t x227 = INT8_MAX;
	volatile int32_t t50 = -9926;

	t50 = ((x225^(x226/x227))+x228);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x230 = 298;
	int16_t x232 = INT16_MIN;
	volatile int32_t t51 = 796;

	t51 = ((x229^(x230/x231))+x232);

	if (t51 != -65238) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MAX;
	int64_t x235 = 56LL;
	int16_t x236 = INT16_MIN;
	static int64_t t52 = -469780802LL;

	t52 = ((x233^(x234/x235))+x236);

	if (t52 != -38394735LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int32_t x238 = INT32_MIN;
	static volatile uint64_t x239 = 34LLU;
	int64_t x240 = -11160268LL;
	volatile uint64_t t53 = 286LLU;

	t53 = ((x237^(x238/x239))+x240);

	if (t53 != 542551296211218800LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x241 = 0U;
	volatile int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = ((x241^(x242/x243))+x244);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -1;
	volatile int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	int8_t x248 = 1;
	volatile int64_t t55 = 2147LL;

	t55 = ((x245^(x246/x247))+x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x250 = UINT64_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile uint32_t x252 = 1010U;
	volatile uint64_t t56 = 39638478193LLU;

	t56 = ((x249^(x250/x251))+x252);

	if (t56 != 72340172838077859LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x253 = 4;
	static int64_t x254 = INT64_MIN;
	static int32_t x256 = 0;

	t57 = ((x253^(x254/x255))+x256);

	if (t57 != -140739635871740LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile int64_t t58 = 0LL;

	t58 = ((x257^(x258/x259))+x260);

	if (t58 != 146450LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = 14U;
	uint16_t x267 = 2U;
	int8_t x268 = 2;
	volatile uint32_t t59 = 10U;

	t59 = ((x265^(x266/x267))+x268);

	if (t59 != 38U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = -4;
	int64_t x271 = -415779699482788504LL;
	static uint64_t x272 = 38046797875392LLU;

	t60 = ((x269^(x270/x271))+x272);

	if (t60 != 38046797875388LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 6288U;
	static uint8_t x274 = UINT8_MAX;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = 7LLU;
	volatile uint64_t t61 = 73980228043213LLU;

	t61 = ((x273^(x274/x275))+x276);

	if (t61 != 6295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	uint64_t x278 = UINT64_MAX;
	static int8_t x279 = -11;

	t62 = ((x277^(x278/x279))+x280);

	if (t62 != 32893LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = 1168;
	volatile int8_t x284 = 13;
	volatile int64_t t63 = 1647LL;

	t63 = ((x281^(x282/x283))+x284);

	if (t63 != -1156LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x285 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	int32_t x288 = -10;
	int64_t t64 = -89266274LL;

	t64 = ((x285^(x286/x287))+x288);

	if (t64 != 65525LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = 1U;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 110U;
	volatile int32_t t65 = -6;

	t65 = ((x289^(x290/x291))+x292);

	if (t65 != 110) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	int32_t x296 = -1;
	static volatile int64_t t66 = -3927357LL;

	t66 = ((x293^(x294/x295))+x296);

	if (t66 != -957748071199399747LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = -1;
	static int64_t x298 = 1878270768683449569LL;
	int8_t x299 = INT8_MIN;
	static uint16_t x300 = 2U;
	int64_t t67 = 0LL;

	t67 = ((x297^(x298/x299))+x300);

	if (t67 != 14673990380339450LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MAX;
	uint16_t x302 = 1831U;
	static volatile int32_t x303 = 3585;
	volatile int32_t t68 = -949228089;

	t68 = ((x301^(x302/x303))+x304);

	if (t68 != 382) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = 264394722LLU;
	int16_t x306 = 205;
	int64_t x308 = -118620553015700655LL;
	static volatile uint64_t t69 = 225966957074688177LLU;

	t69 = ((x305^(x306/x307))+x308);

	if (t69 != 18328123520958245683LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = 118555251401LL;
	static uint64_t x310 = UINT64_MAX;
	static volatile int64_t x311 = INT64_MIN;
	static int64_t x312 = INT64_MAX;
	uint64_t t70 = 4408770000313383LLU;

	t70 = ((x309^(x310/x311))+x312);

	if (t70 != 9223372155410027207LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = 1;

	t71 = ((x313^(x314/x315))+x316);

	if (t71 != -9223372036854534837LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = -25;
	int8_t x318 = -1;
	int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t72 = -672;

	t72 = ((x317^(x318/x319))+x320);

	if (t72 != -153) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = -2;
	int32_t x323 = INT32_MAX;
	int64_t x324 = -1LL;
	int64_t t73 = -96729605842LL;

	t73 = ((x321^(x322/x323))+x324);

	if (t73 != -3LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MAX;
	int32_t x327 = INT32_MIN;
	int32_t x328 = -4;
	volatile int64_t t74 = 6748LL;

	t74 = ((x325^(x326/x327))+x328);

	if (t74 != -4294967046LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = -899;
	int16_t x330 = INT16_MAX;
	volatile int32_t t75 = -890631019;

	t75 = ((x329^(x330/x331))+x332);

	if (t75 != 2468) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	int64_t x335 = 2013036LL;
	static int8_t x336 = INT8_MAX;
	static int64_t t76 = -2503844LL;

	t76 = ((x333^(x334/x335))+x336);

	if (t76 != 1192LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	static int8_t x338 = -27;
	uint8_t x339 = 25U;
	uint16_t x340 = 26639U;
	uint32_t t77 = 3074U;

	t77 = ((x337^(x338/x339))+x340);

	if (t77 != 26639U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int32_t x343 = -1;
	uint8_t x344 = 5U;
	int32_t t78 = -210518186;

	t78 = ((x341^(x342/x343))+x344);

	if (t78 != -124) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x346 = INT64_MIN;
	volatile uint8_t x347 = 103U;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t79 = 2422745027444LL;

	t79 = ((x345^(x346/x347))+x348);

	if (t79 != -89547297033720890LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x354 = INT8_MAX;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t80 = -836937735LL;

	t80 = ((x353^(x354/x355))+x356);

	if (t80 != -32896LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x357 = -1LL;
	uint8_t x358 = UINT8_MAX;
	int8_t x360 = -9;
	volatile int64_t t81 = -197332120437LL;

	t81 = ((x357^(x358/x359))+x360);

	if (t81 != -10LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = -38;
	int8_t x362 = 0;
	int8_t x363 = INT8_MIN;
	uint32_t t82 = 364426U;

	t82 = ((x361^(x362/x363))+x364);

	if (t82 != 4294967257U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = INT32_MAX;
	static int64_t x366 = -372884317094595473LL;
	static uint8_t x367 = 5U;
	static int64_t t83 = -39LL;

	t83 = ((x365^(x366/x367))+x368);

	if (t83 != -74576864608507723LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = UINT64_MAX;
	static int8_t x370 = -1;
	volatile int8_t x371 = -1;
	static int16_t x372 = INT16_MAX;

	t84 = ((x369^(x370/x371))+x372);

	if (t84 != 32765LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x378 = -1LL;
	uint32_t x379 = 15056490U;

	t85 = ((x377^(x378/x379))+x380);

	if (t85 != 4321209887058LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x381 = -64825LL;
	int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t86 = 12LL;

	t86 = ((x381^(x382/x383))+x384);

	if (t86 != -64570LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x385 = 208086015U;
	volatile uint64_t x387 = 120018175060190LLU;
	int8_t x388 = -3;

	t87 = ((x385^(x386/x387))+x388);

	if (t87 != 207977369LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x390 = INT32_MIN;
	static int64_t x392 = -2912220464LL;
	int64_t t88 = -80478LL;

	t88 = ((x389^(x390/x391))+x392);

	if (t88 != -2910725957LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = -38;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t89 = -4245133LL;

	t89 = ((x393^(x394/x395))+x396);

	if (t89 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = -322753;
	int64_t x399 = 2249683508823468LL;
	int32_t x400 = 585557;
	int64_t t90 = 3942673672LL;

	t90 = ((x397^(x398/x399))+x400);

	if (t90 != 262804LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x402 = INT16_MIN;
	uint16_t x404 = 3412U;
	volatile uint64_t t91 = 12467LLU;

	t91 = ((x401^(x402/x403))+x404);

	if (t91 != 18446744071562075934LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = INT16_MIN;
	static int64_t x406 = 14820114LL;
	int64_t x407 = -1LL;
	static uint64_t x408 = UINT64_MAX;
	volatile uint64_t t92 = 32332305202LLU;

	t92 = ((x405^(x406/x407))+x408);

	if (t92 != 14834925LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x409 = INT8_MIN;
	uint16_t x411 = 3U;
	static int8_t x412 = -1;

	t93 = ((x409^(x410/x411))+x412);

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x414 = INT64_MIN;
	int32_t x416 = -641;
	int64_t t94 = 463637688333823LL;

	t94 = ((x413^(x414/x415))+x416);

	if (t94 != -72624976668148483LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -1;
	static volatile uint16_t x418 = UINT16_MAX;
	static int16_t x419 = INT16_MIN;
	volatile uint32_t x420 = 20602U;

	t95 = ((x417^(x418/x419))+x420);

	if (t95 != 20602U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = -1LL;
	volatile uint32_t x422 = 3900U;
	int16_t x423 = -950;
	int16_t x424 = INT16_MAX;
	static int64_t t96 = 2023523490621521127LL;

	t96 = ((x421^(x422/x423))+x424);

	if (t96 != 32766LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = -1LL;
	uint16_t x426 = 32U;
	int64_t x427 = INT64_MIN;
	volatile uint8_t x428 = 101U;

	t97 = ((x425^(x426/x427))+x428);

	if (t97 != 100LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x431 = INT64_MIN;
	static int64_t x432 = 60LL;
	volatile int64_t t98 = 9014297LL;

	t98 = ((x429^(x430/x431))+x432);

	if (t98 != 59LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x433 = INT64_MIN;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = -4788;
	uint8_t x436 = 0U;

	t99 = ((x433^(x434/x435))+x436);

	if (t99 != 9223372036854775795LL) { NG(); } else { ; }
	
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

