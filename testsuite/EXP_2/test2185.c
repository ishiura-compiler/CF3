#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 1367179245LLU;
uint64_t t0 = 1270558345512LLU;
uint64_t x5 = 612772LLU;
uint64_t t1 = 389826671340505413LLU;
static int32_t x12 = 106012648;
volatile uint64_t x20 = UINT64_MAX;
volatile int16_t x26 = 224;
static volatile int8_t x27 = -1;
volatile uint32_t t7 = 928749450U;
uint16_t x40 = UINT16_MAX;
int32_t t9 = 25451811;
uint32_t x45 = 47921U;
int32_t x50 = INT32_MAX;
volatile int32_t t13 = 20447;
int32_t x62 = INT32_MIN;
int32_t x65 = -1;
int32_t x67 = 4996;
uint32_t x70 = 8131503U;
uint16_t x73 = 7223U;
static int16_t x75 = INT16_MIN;
static int16_t x79 = INT16_MIN;
int16_t x84 = 24;
int32_t t20 = 14;
int32_t x85 = INT32_MIN;
int32_t t21 = 1;
uint64_t x97 = 10159693712884036LLU;
static int32_t x99 = INT32_MAX;
int64_t x100 = INT64_MIN;
volatile uint8_t x101 = 3U;
int64_t x102 = -19624970LL;
int64_t x103 = INT64_MIN;
volatile int8_t x106 = INT8_MIN;
int16_t x111 = INT16_MAX;
uint32_t x113 = 46085U;
int64_t x127 = -1229245222423417LL;
uint8_t x129 = UINT8_MAX;
volatile int16_t x132 = INT16_MAX;
int64_t x133 = 19192390LL;
volatile int32_t x134 = 1754;
int32_t x136 = -1;
int32_t x140 = 1579;
volatile int64_t t32 = -26329603878682LL;
volatile uint32_t x142 = UINT32_MAX;
volatile int64_t t35 = -3718285LL;
volatile uint64_t t36 = 1481LLU;
int8_t x157 = -11;
volatile uint32_t x159 = UINT32_MAX;
uint16_t x163 = UINT16_MAX;
int32_t x174 = INT32_MIN;
int32_t t42 = -978186;
int32_t x194 = -54281942;
int32_t x195 = INT32_MIN;
int64_t t46 = -493LL;
int32_t x201 = 127;
uint16_t x204 = 4U;
int32_t t47 = -2232;
static int64_t x210 = INT64_MIN;
uint32_t x212 = UINT32_MAX;
int64_t t48 = -577251220256254592LL;
static uint32_t x226 = 262408U;
int16_t x228 = INT16_MAX;
static volatile int64_t t52 = -95978292864535249LL;
int32_t x229 = INT32_MIN;
int16_t x251 = INT16_MIN;
int8_t x254 = -7;
int32_t x261 = 3;
uint64_t x262 = UINT64_MAX;
uint64_t t58 = 69211438631LLU;
int16_t x269 = 1;
volatile uint8_t x270 = 7U;
static int64_t t62 = 32479764088844132LL;
int16_t x289 = 84;
int64_t t65 = 296837796143LL;
static volatile int32_t t66 = -113908036;
uint8_t x297 = UINT8_MAX;
uint32_t x300 = 925U;
volatile uint64_t t67 = 17069600LLU;
uint16_t x304 = UINT16_MAX;
int8_t x308 = -1;
int32_t x312 = -32834011;
volatile int32_t x316 = INT32_MIN;
uint64_t x324 = 760787909LLU;
static uint32_t x326 = 1569U;
static int16_t x328 = INT16_MAX;
volatile int16_t x335 = -1;
static int32_t x339 = INT32_MIN;
int16_t x344 = -1;
static int8_t x348 = 4;
int64_t t80 = 102298780249LL;
int64_t x355 = 105988LL;
int64_t t81 = 16682637512951LL;
int8_t x380 = -1;
static volatile int64_t t87 = 2412LL;
uint16_t x382 = UINT16_MAX;
volatile uint64_t t89 = 26958533835556378LLU;
volatile int64_t x394 = -1LL;
int32_t x398 = INT32_MIN;
int16_t x401 = INT16_MIN;
static int16_t x403 = INT16_MAX;
uint64_t t94 = 2960LLU;
static volatile int8_t x412 = INT8_MIN;
volatile uint64_t t95 = 78015558LLU;
uint8_t x414 = 18U;
int8_t x417 = INT8_MIN;
int16_t x419 = INT16_MAX;
int8_t x420 = -1;
uint64_t x424 = UINT64_MAX;
uint64_t t98 = 339299913LLU;


void f0(void) {
	int64_t x1 = 8291400LL;
	static uint32_t x2 = UINT32_MAX;
	uint8_t x4 = 18U;

	t0 = ((x1^(x2^x3))+x4);

	if (t0 != 2935751788LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MAX;
	volatile int32_t x7 = 40565;
	static volatile int64_t x8 = INT64_MAX;

	t1 = ((x5^(x6^x7))+x8);

	if (t1 != 9223372039001618477LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MIN;
	static volatile int16_t x11 = INT16_MIN;
	static volatile int32_t t2 = -680213;

	t2 = ((x9^(x10^x11))+x12);

	if (t2 != -2041438360) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 23U;
	static uint32_t x14 = 569U;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = UINT32_MAX;
	uint64_t t3 = 597807070LLU;

	t3 = ((x13^(x14^x15))+x16);

	if (t3 != 4294966736LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint16_t x18 = 21U;
	uint64_t x19 = 4823LLU;
	volatile uint64_t t4 = 83533497805LLU;

	t4 = ((x17^(x18^x19))+x20);

	if (t4 != 18446744073709523649LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -40;
	static int32_t x22 = INT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;
	static int64_t t5 = 502LL;

	t5 = ((x21^(x22^x23))+x24);

	if (t5 != -9223372034707292249LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 2506727;
	uint8_t x28 = 1U;
	volatile int32_t t6 = -3789931;

	t6 = ((x25^(x26^x27))+x28);

	if (t6 != -2506503) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = 18;

	t7 = ((x29^(x30^x31))+x32);

	if (t7 != 4294934673U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int16_t x34 = INT16_MIN;
	static uint8_t x35 = 3U;
	int16_t x36 = 5;
	volatile int32_t t8 = 7827;

	t8 = ((x33^(x34^x35))+x36);

	if (t8 != 2147450888) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -1;

	t9 = ((x37^(x38^x39))+x40);

	if (t9 != 32894) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int8_t x42 = INT8_MAX;
	static int16_t x43 = INT16_MAX;
	uint64_t x44 = 268052761539LLU;
	uint64_t t10 = 110739442LLU;

	t10 = ((x41^(x42^x43))+x44);

	if (t10 != 268052728898LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = 2LL;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 1U;
	volatile int64_t t11 = 1998LL;

	t11 = ((x45^(x46^x47))+x48);

	if (t11 != 4294919373LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x51 = -5290;
	int8_t x52 = -3;
	volatile int32_t t12 = -5207956;

	t12 = ((x49^(x50^x51))+x52);

	if (t12 != 2147478310) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 115U;
	volatile int8_t x54 = INT8_MAX;
	int8_t x55 = 1;
	int8_t x56 = -1;

	t13 = ((x53^(x54^x55))+x56);

	if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -2852505839LL;
	int32_t x58 = INT32_MIN;
	int64_t x59 = 10354LL;
	uint64_t x60 = 409301923689482688LLU;
	uint64_t t14 = 8353025268LLU;

	t14 = ((x57^(x58^x59))+x60);

	if (t14 != 409301927279421731LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = 11333;
	int16_t x63 = INT16_MIN;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = -404;

	t15 = ((x61^(x62^x63))+x64);

	if (t15 != 2147462085) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = UINT16_MAX;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 9;

	t16 = ((x65^(x66^x67))+x68);

	if (t16 != -60285) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int8_t x71 = -1;
	int16_t x72 = INT16_MAX;
	uint32_t t17 = 31461U;

	t17 = ((x69^(x70^x71))+x72);

	if (t17 != 2155647918U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 3022;
	int32_t x76 = 16276;
	static int32_t t18 = 57201;

	t18 = ((x73^(x74^x75))+x76);

	if (t18 != -10355) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	uint64_t x78 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	static uint64_t t19 = 245689LLU;

	t19 = ((x77^(x78^x79))+x80);

	if (t19 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = -52583;
	uint16_t x83 = 35U;

	t20 = ((x81^(x82^x83))+x84);

	if (t20 != 2147431122) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	int32_t x88 = 6724;

	t21 = ((x85^(x86^x87))+x88);

	if (t21 != 6596) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MAX;
	volatile int16_t x90 = 3906;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MAX;
	volatile int32_t t22 = -120;

	t22 = ((x89^(x90^x91))+x92);

	if (t22 != -3780) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 40813U;
	int16_t x94 = INT16_MIN;
	volatile uint32_t x95 = 11902062U;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 361182837844LL;

	t23 = ((x93^(x94^x95))+x96);

	if (t23 != -9223372032571702525LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -420262LL;
	volatile uint64_t t24 = 273895945961LLU;

	t24 = ((x97^(x98^x99))+x100);

	if (t24 != 9213212341222435041LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = -2605762245LL;

	t25 = ((x101^(x102^x103))+x104);

	if (t25 != -19624971LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint8_t x107 = 4U;
	int8_t x108 = -3;
	volatile int64_t t26 = -207656539294747200LL;

	t26 = ((x105^(x106^x107))+x108);

	if (t26 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 1905U;
	volatile int64_t x110 = INT64_MIN;
	int8_t x112 = 31;
	int64_t t27 = 14881794638777942LL;

	t27 = ((x109^(x110^x111))+x112);

	if (t27 != -9223372036854744915LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = 29;
	int16_t x116 = 13855;
	volatile uint32_t t28 = 17U;

	t28 = ((x113^(x114^x115))+x116);

	if (t28 != 4294935046U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	volatile uint8_t x128 = 7U;
	volatile int64_t t29 = 0LL;

	t29 = ((x125^(x126^x127))+x128);

	if (t29 != 1229243449871231LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = -220629501023573981LL;
	uint64_t x131 = UINT64_MAX;
	uint64_t t30 = 10856777953LLU;

	t30 = ((x129^(x130^x131))+x132);

	if (t30 != 220629501023606562LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x135 = -13;
	int64_t t31 = -1043337491848LL;

	t31 = ((x133^(x134^x135))+x136);

	if (t31 != -19192978LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -75665652583LL;
	uint32_t x138 = 717148866U;
	int16_t x139 = -1;

	t32 = ((x137^(x138^x139))+x140);

	if (t32 != -74277392433LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 9491U;
	static uint64_t x143 = 57LLU;
	volatile int32_t x144 = 263;
	uint64_t t33 = 4434159335LLU;

	t33 = ((x141^(x142^x143))+x144);

	if (t33 != 4294958044LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MAX;
	static uint8_t x148 = 10U;
	uint64_t t34 = 45228LLU;

	t34 = ((x145^(x146^x147))+x148);

	if (t34 != 2147483530LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 668484714U;
	static int64_t x150 = -1LL;
	int8_t x151 = -13;
	uint32_t x152 = 13U;

	t35 = ((x149^(x150^x151))+x152);

	if (t35 != 668484723LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	int16_t x155 = INT16_MIN;
	int16_t x156 = 12308;

	t36 = ((x153^(x154^x155))+x156);

	if (t36 != 18446744073709531156LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MIN;
	int16_t x160 = 64;
	static uint32_t t37 = 1339027948U;

	t37 = ((x157^(x158^x159))+x160);

	if (t37 != 4294934602U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x161 = 7U;
	int8_t x162 = -19;
	int8_t x164 = -8;
	int32_t t38 = -228357;

	t38 = ((x161^(x162^x163))+x164);

	if (t38 != -65523) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 27155LLU;
	volatile int64_t x166 = INT64_MIN;
	uint64_t x167 = 56LLU;
	uint16_t x168 = UINT16_MAX;
	uint64_t t39 = 689179959014144384LLU;

	t39 = ((x165^(x166^x167))+x168);

	if (t39 != 9223372036854868522LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 1U;
	int8_t x170 = INT8_MAX;
	uint64_t x171 = 1541LLU;
	uint8_t x172 = UINT8_MAX;
	volatile uint64_t t40 = 6948737LLU;

	t40 = ((x169^(x170^x171))+x172);

	if (t40 != 1914LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x175 = INT16_MAX;
	int64_t x176 = -1LL;
	int64_t t41 = -81LL;

	t41 = ((x173^(x174^x175))+x176);

	if (t41 != -2147450881LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 2U;
	int16_t x178 = -11;
	int8_t x179 = 1;
	volatile uint8_t x180 = 3U;

	t42 = ((x177^(x178^x179))+x180);

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = 11700LLU;
	uint8_t x186 = 1U;
	int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	uint64_t t43 = 15LLU;

	t43 = ((x185^(x186^x187))+x188);

	if (t43 != 18446744073709539786LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x189 = 157482U;
	static uint8_t x190 = 2U;
	uint32_t x191 = 8042839U;
	int16_t x192 = -1;
	uint32_t t44 = 145U;

	t44 = ((x189^(x190^x191))+x192);

	if (t44 != 7921278U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t45 = 72051106;

	t45 = ((x193^(x194^x195))+x196);

	if (t45 != -2093201878) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -1LL;
	volatile uint16_t x198 = UINT16_MAX;
	int32_t x199 = 61;
	int16_t x200 = 1;

	t46 = ((x197^(x198^x199))+x200);

	if (t46 != -65474LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x202 = INT32_MAX;
	static int32_t x203 = -1038072576;

	t47 = ((x201^(x202^x203))+x204);

	if (t47 != -1109411196) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = -1;
	int64_t x211 = -1LL;

	t48 = ((x209^(x210^x211))+x212);

	if (t48 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = 1;
	uint8_t x214 = 5U;
	static uint64_t x215 = 15LLU;
	static volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t49 = 54LLU;

	t49 = ((x213^(x214^x215))+x216);

	if (t49 != 10LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x217 = 6239193775963053LLU;
	uint64_t x218 = UINT64_MAX;
	static int16_t x219 = INT16_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 138LLU;

	t50 = ((x217^(x218^x219))+x220);

	if (t50 != 18440504879933619116LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x221 = 855393725678LLU;
	uint64_t x222 = 58298872164LLU;
	int8_t x223 = 23;
	uint64_t x224 = UINT64_MAX;
	static uint64_t t51 = 98678574667LLU;

	t51 = ((x221^(x222^x223))+x224);

	if (t51 != 870730325404LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	static volatile int64_t x227 = INT64_MIN;

	t52 = ((x225^(x226^x227))+x228);

	if (t52 != 295175LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x230 = -1;
	volatile int16_t x231 = INT16_MIN;
	int8_t x232 = -34;
	int32_t t53 = -155373193;

	t53 = ((x229^(x230^x231))+x232);

	if (t53 != -2147450915) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MAX;
	static int64_t x238 = INT64_MIN;
	static uint64_t x239 = UINT64_MAX;
	volatile int8_t x240 = INT8_MIN;
	volatile uint64_t t54 = 223LLU;

	t54 = ((x237^(x238^x239))+x240);

	if (t54 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x245 = -1;
	uint16_t x246 = 15068U;
	volatile int16_t x247 = INT16_MAX;
	int32_t x248 = -108;
	volatile int32_t t55 = 68662128;

	t55 = ((x245^(x246^x247))+x248);

	if (t55 != -17808) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x249 = 256931U;
	static uint64_t x250 = 10459574LLU;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t56 = 6LLU;

	t56 = ((x249^(x250^x251))+x252);

	if (t56 != 18446744073699324309LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -1;
	uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 12U;
	static volatile uint32_t t57 = 24U;

	t57 = ((x253^(x254^x255))+x256);

	if (t57 != 5U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x263 = 44U;
	static int16_t x264 = INT16_MAX;

	t58 = ((x261^(x262^x263))+x264);

	if (t58 != 32719LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = 6U;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 4970719U;
	volatile int32_t x268 = 2128;
	uint32_t t59 = 62699982U;

	t59 = ((x265^(x266^x267))+x268);

	if (t59 != 4289998761U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x271 = -1;
	int8_t x272 = -1;
	int32_t t60 = -7561618;

	t60 = ((x269^(x270^x271))+x272);

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = 3;
	static int8_t x275 = INT8_MIN;
	volatile int8_t x276 = -1;
	static int64_t t61 = 1863073816408102086LL;

	t61 = ((x273^(x274^x275))+x276);

	if (t61 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = -1LL;
	int64_t x279 = 2491LL;
	int32_t x280 = INT32_MAX;

	t62 = ((x277^(x278^x279))+x280);

	if (t62 != 4294964803LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = INT8_MIN;
	volatile uint64_t x282 = 8LLU;
	int8_t x283 = 56;
	static volatile int32_t x284 = INT32_MAX;
	uint64_t t63 = 2869283LLU;

	t63 = ((x281^(x282^x283))+x284);

	if (t63 != 2147483567LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	volatile uint32_t x286 = UINT32_MAX;
	int32_t x287 = -167480901;
	int8_t x288 = -1;
	uint32_t t64 = 3270038U;

	t64 = ((x285^(x286^x287))+x288);

	if (t64 != 2314964547U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x290 = INT64_MIN;
	uint16_t x291 = 3U;
	volatile int32_t x292 = INT32_MAX;

	t65 = ((x289^(x290^x291))+x292);

	if (t65 != -9223372034707292074LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile int8_t x296 = 0;

	t66 = ((x293^(x294^x295))+x296);

	if (t66 != -2147483521) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x298 = -1;
	volatile uint64_t x299 = 82LLU;

	t67 = ((x297^(x298^x299))+x300);

	if (t67 != 751LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x301 = 72U;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -6;
	static int64_t t68 = -1LL;

	t68 = ((x301^(x302^x303))+x304);

	if (t68 != -9223372036854710196LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = -1;
	int32_t x306 = 9970728;
	int64_t x307 = INT64_MIN;
	volatile int64_t t69 = -7029433301846546LL;

	t69 = ((x305^(x306^x307))+x308);

	if (t69 != 9223372036844805078LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = UINT64_MAX;
	static int32_t x310 = -93;
	static int32_t x311 = 1067287914;
	volatile uint64_t t70 = 220738040433594121LLU;

	t70 = ((x309^(x310^x311))+x312);

	if (t70 != 1034453851LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = -1;
	uint32_t x314 = 8986U;
	static uint8_t x315 = UINT8_MAX;
	volatile uint32_t t71 = 15268U;

	t71 = ((x313^(x314^x315))+x316);

	if (t71 != 2147474458U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = 263832505;
	volatile int8_t x318 = INT8_MIN;
	uint8_t x319 = UINT8_MAX;
	volatile int64_t x320 = -1LL;
	static int64_t t72 = 2063551492432LL;

	t72 = ((x317^(x318^x319))+x320);

	if (t72 != -263832379LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = 37;
	volatile int8_t x322 = -1;
	int8_t x323 = INT8_MIN;
	uint64_t t73 = 15LLU;

	t73 = ((x321^(x322^x323))+x324);

	if (t73 != 760787999LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x325 = 726948893279535787LLU;
	int8_t x327 = INT8_MIN;
	uint64_t t74 = 1LLU;

	t74 = ((x325^(x326^x327))+x328);

	if (t74 != 726948891340454665LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int8_t x330 = -1;
	static volatile uint8_t x331 = 106U;
	uint8_t x332 = 14U;
	volatile int32_t t75 = -808507;

	t75 = ((x329^(x330^x331))+x332);

	if (t75 != 2147483555) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MAX;
	volatile int64_t x334 = -28LL;
	int8_t x336 = INT8_MIN;
	static volatile int64_t t76 = 89154380188LL;

	t76 = ((x333^(x334^x335))+x336);

	if (t76 != 2147483492LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -107LL;
	static int64_t x338 = -1LL;
	int16_t x340 = -3;
	volatile int64_t t77 = 104817866798045LL;

	t77 = ((x337^(x338^x339))+x340);

	if (t77 != -2147483545LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 11311LLU;
	int32_t x343 = INT32_MAX;
	uint64_t t78 = 2186862LLU;

	t78 = ((x341^(x342^x343))+x344);

	if (t78 != 18446744071562089423LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x345 = -1LL;
	static uint16_t x346 = UINT16_MAX;
	int8_t x347 = -1;
	static int64_t t79 = 92LL;

	t79 = ((x345^(x346^x347))+x348);

	if (t79 != 65539LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	volatile int16_t x351 = 133;
	static int64_t x352 = INT64_MIN;

	t80 = ((x349^(x350^x351))+x352);

	if (t80 != -9223372036854775675LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -1;
	int16_t x354 = -1;
	static int16_t x356 = INT16_MAX;

	t81 = ((x353^(x354^x355))+x356);

	if (t81 != 138755LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x357 = -1;
	int8_t x358 = -50;
	static uint16_t x359 = 120U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t82 = -196889;

	t82 = ((x357^(x358^x359))+x360);

	if (t82 != -55) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = 7;
	int8_t x363 = INT8_MIN;
	int32_t x364 = 102;
	static volatile int32_t t83 = -2240;

	t83 = ((x361^(x362^x363))+x364);

	if (t83 != 94) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = 29U;
	int32_t x366 = -1;
	uint8_t x367 = 2U;
	uint8_t x368 = UINT8_MAX;
	static int32_t t84 = 31117844;

	t84 = ((x365^(x366^x367))+x368);

	if (t84 != 223) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = -1LL;
	int64_t x370 = INT64_MIN;
	int8_t x371 = 56;
	volatile int8_t x372 = 0;
	int64_t t85 = -1754422LL;

	t85 = ((x369^(x370^x371))+x372);

	if (t85 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x373 = -1;
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	int64_t t86 = 174414754LL;

	t86 = ((x373^(x374^x375))+x376);

	if (t86 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = 20560;
	int64_t x378 = INT64_MAX;
	int16_t x379 = INT16_MIN;

	t87 = ((x377^(x378^x379))+x380);

	if (t87 != -9223372036854763602LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	static int64_t x384 = INT64_MIN;
	volatile uint64_t t88 = 16229401561507044LLU;

	t88 = ((x381^(x382^x383))+x384);

	if (t88 != 9223372036854841216LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x385 = INT16_MAX;
	uint8_t x386 = 8U;
	volatile int16_t x387 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;

	t89 = ((x385^(x386^x387))+x388);

	if (t89 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x389 = 321554;
	volatile int32_t x390 = INT32_MAX;
	volatile int32_t x391 = 182199;
	volatile int16_t x392 = -1;
	int32_t t90 = -982;

	t90 = ((x389^(x390^x391))+x392);

	if (t90 != 2147078233) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = INT16_MAX;
	int32_t x395 = 1;
	int32_t x396 = -1;
	static int64_t t91 = 8551002517365361LL;

	t91 = ((x393^(x394^x395))+x396);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x397 = 3;
	int16_t x399 = 766;
	int8_t x400 = 4;
	int32_t t92 = -343595713;

	t92 = ((x397^(x398^x399))+x400);

	if (t92 != -2147482879) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x402 = UINT64_MAX;
	static int32_t x404 = -414;
	volatile uint64_t t93 = 20LLU;

	t93 = ((x401^(x402^x403))+x404);

	if (t93 != 18446744073709551202LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x405 = 36805931621042220LLU;
	uint64_t x406 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	static uint64_t x408 = 33LLU;

	t94 = ((x405^(x406^x407))+x408);

	if (t94 != 18409938144232622157LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = 450LLU;
	int64_t x410 = INT64_MIN;
	int16_t x411 = -1;

	t95 = ((x409^(x410^x411))+x412);

	if (t95 != 9223372036854775229LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -1LL;
	uint8_t x415 = UINT8_MAX;
	static uint16_t x416 = 17274U;
	int64_t t96 = -165605623905166LL;

	t96 = ((x413^(x414^x415))+x416);

	if (t96 != 17036LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x418 = INT32_MAX;
	volatile int32_t t97 = -525425;

	t97 = ((x417^(x418^x419))+x420);

	if (t97 != -2147451009) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	volatile int8_t x422 = -1;
	static int8_t x423 = -1;

	t98 = ((x421^(x422^x423))+x424);

	if (t98 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MAX;
	static uint32_t x426 = 388037436U;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -1;
	static volatile int64_t t99 = -123401744902LL;

	t99 = ((x425^(x426^x427))+x428);

	if (t99 != -9223372036466738366LL) { NG(); } else { ; }
	
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

