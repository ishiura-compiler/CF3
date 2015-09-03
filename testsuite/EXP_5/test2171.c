#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
volatile int16_t x3 = INT16_MIN;
uint32_t x4 = UINT32_MAX;
int32_t x5 = INT32_MAX;
uint16_t x9 = 3U;
int8_t x12 = -1;
static int8_t x15 = INT8_MAX;
int8_t x18 = INT8_MIN;
volatile int32_t x20 = INT32_MAX;
int16_t x29 = -2;
int32_t x30 = -1;
static int32_t t7 = -24120;
int64_t x34 = -1LL;
volatile uint16_t x36 = UINT16_MAX;
int8_t x40 = INT8_MIN;
static int32_t x41 = -1;
volatile int64_t t10 = -661LL;
int16_t x46 = 0;
int32_t x50 = INT32_MIN;
volatile uint64_t x53 = 6028974LLU;
int8_t x55 = INT8_MAX;
uint16_t x56 = 4U;
int64_t t14 = 20143LL;
uint32_t x65 = 1U;
uint16_t x66 = UINT16_MAX;
int16_t x77 = INT16_MAX;
uint8_t x84 = 0U;
int8_t x85 = INT8_MAX;
static uint64_t x87 = 26990LLU;
int64_t x95 = INT64_MIN;
int64_t x102 = INT64_MIN;
static int16_t x104 = -1;
volatile uint16_t x111 = 159U;
int64_t x112 = -403133897561LL;
int32_t x115 = INT32_MIN;
uint64_t x120 = 870725LLU;
uint32_t x122 = UINT32_MAX;
int64_t x124 = -1LL;
int64_t t30 = -3529457870LL;
uint8_t x125 = 3U;
int16_t x132 = INT16_MAX;
int64_t t32 = INT64_MAX;
int16_t x135 = INT16_MIN;
volatile int16_t x144 = INT16_MIN;
static int64_t x145 = 1776498696175LL;
int8_t x147 = -1;
int32_t x151 = INT32_MIN;
volatile int32_t x152 = 146;
int8_t x156 = 14;
static volatile int32_t t39 = 61;
static volatile int64_t t40 = -8590LL;
volatile int8_t x175 = -1;
volatile uint32_t t43 = 448U;
volatile int32_t x185 = 108;
uint8_t x186 = UINT8_MAX;
volatile uint64_t x187 = 33326176730806LLU;
int64_t t48 = 47961627LL;
int64_t x197 = INT64_MAX;
int64_t x202 = INT64_MAX;
static int32_t x204 = INT32_MIN;
volatile uint16_t x206 = UINT16_MAX;
static uint64_t t52 = 15LLU;
volatile int32_t x213 = 1;
uint16_t x223 = 2105U;
volatile int16_t x233 = 27;
int32_t x237 = -1;
volatile uint32_t x244 = 297351938U;
uint64_t t60 = 1774781606787774LLU;
int64_t x245 = 1LL;
int64_t x247 = INT64_MIN;
int32_t x259 = -1;
volatile int32_t t64 = 86;
uint16_t x261 = 3U;
int8_t x263 = INT8_MIN;
uint8_t x266 = 63U;
volatile uint64_t t66 = 56LLU;
int16_t x276 = INT16_MIN;
uint64_t t69 = 1725304540LLU;
static volatile uint64_t t71 = 1LLU;
static volatile int16_t x292 = -1030;
int64_t t72 = -44LL;
uint16_t x295 = UINT16_MAX;
uint8_t x298 = UINT8_MAX;
int32_t x300 = INT32_MIN;
volatile int64_t t75 = 21837992717LL;
int32_t x306 = INT32_MAX;
int16_t x309 = INT16_MAX;
static int16_t x311 = 10206;
int16_t x314 = INT16_MAX;
uint64_t x319 = 45198657219696LLU;
uint16_t x326 = 4U;
int32_t x327 = -1;
int16_t x330 = INT16_MIN;
static uint8_t x331 = UINT8_MAX;
uint32_t x335 = 12125U;
uint64_t t84 = 10LLU;
static int64_t x347 = 35448135048LL;
static volatile uint64_t x351 = 55082963713186125LLU;
int16_t x354 = -1;
int32_t x355 = 19;
uint64_t x356 = 50517526316LLU;
volatile uint64_t t89 = 1924408419197LLU;
static int8_t x363 = -1;
uint32_t x367 = 1625482U;
uint16_t x368 = 2646U;
static int16_t x369 = -1;
uint16_t x373 = 43U;
volatile uint64_t x382 = 672429364200958173LLU;
static uint64_t t95 = 6038145588818065LLU;
static int16_t x389 = -1;
int32_t x393 = INT32_MIN;
volatile int32_t x394 = INT32_MIN;
uint32_t x399 = 11647U;
static volatile int64_t t99 = 0LL;


void f0(void) {
	volatile uint64_t x2 = 19509908158LLU;
	uint64_t t0 = 18778LLU;

	t0 = (x1^((x2^x3)&x4));

	if (t0 != 2330062145LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 16331U;

	t1 = (x5^((x6^x7)&x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static int8_t x11 = INT8_MAX;
	int64_t t2 = -245791824604137681LL;

	t2 = (x9^((x10^x11)&x12));

	if (t2 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 63;
	volatile uint8_t x14 = UINT8_MAX;
	uint8_t x16 = 23U;
	static int32_t t3 = 788734;

	t3 = (x13^((x14^x15)&x16));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x19 = -13LL;
	int64_t t4 = 493522449LL;

	t4 = (x17^((x18^x19)&x20));

	if (t4 != -13LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int32_t x22 = 159076433;
	volatile int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 0;

	t5 = (x21^((x22^x23)&x24));

	if (t5 != -1988395009) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = -949063538741LL;

	t6 = (x25^((x26^x27)&x28));

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x31 = 13;
	int8_t x32 = -1;

	t7 = (x29^((x30^x31)&x32));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile int64_t t8 = -47485701834LL;

	t8 = (x33^((x34^x35)&x36));

	if (t8 != 65280LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 96001426879889634LLU;
	uint16_t x38 = 6707U;
	int64_t x39 = INT64_MIN;
	uint64_t t9 = 315210532LLU;

	t9 = (x37^((x38^x39)&x40));

	if (t9 != 9319373463734672098LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -1LL;
	volatile int64_t x43 = -40886LL;
	static int64_t x44 = -1LL;

	t10 = (x41^((x42^x43)&x44));

	if (t10 != -40886LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint16_t x47 = 1U;
	int16_t x48 = INT16_MIN;
	uint32_t t11 = UINT32_MAX;

	t11 = (x45^((x46^x47)&x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	static int64_t x51 = 3531302LL;
	static uint16_t x52 = UINT16_MAX;
	static int64_t t12 = -4114287320935608LL;

	t12 = (x49^((x50^x51)&x52));

	if (t12 != -57895LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	volatile uint64_t t13 = 680LLU;

	t13 = (x53^((x54^x55)&x56));

	if (t13 != 6028974LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -225251LL;
	volatile int16_t x58 = -1153;
	int16_t x59 = -1;
	volatile uint16_t x60 = UINT16_MAX;

	t14 = (x57^((x58^x59)&x60));

	if (t14 != -224099LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 0U;
	int8_t x62 = INT8_MAX;
	volatile uint64_t x63 = 87815LLU;
	volatile int16_t x64 = -1;
	uint64_t t15 = 1206625LLU;

	t15 = (x61^((x62^x63)&x64));

	if (t15 != 87928LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x67 = 402746254166183058LL;
	int64_t x68 = 11594140763124LL;
	volatile int64_t t16 = -328LL;

	t16 = (x65^((x66^x67)&x68));

	if (t16 != 2753344570213LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MIN;
	int32_t x71 = -1;
	int8_t x72 = -1;
	uint64_t t17 = 3084LLU;

	t17 = (x69^((x70^x71)&x72));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 11;
	int32_t x74 = -36466343;
	int8_t x75 = INT8_MAX;
	static uint16_t x76 = 6U;
	volatile int32_t t18 = -3;

	t18 = (x73^((x74^x75)&x76));

	if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 22U;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int64_t t19 = -8759524336611616LL;

	t19 = (x77^((x78^x79)&x80));

	if (t19 != 32745LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 6195263;
	static uint8_t x82 = 1U;
	uint32_t x83 = 187927U;
	static volatile uint32_t t20 = 0U;

	t20 = (x81^((x82^x83)&x84));

	if (t20 != 6195263U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	int8_t x88 = INT8_MAX;
	uint64_t t21 = 114818029LLU;

	t21 = (x85^((x86^x87)&x88));

	if (t21 != 110LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 256367U;
	int32_t x90 = -1;
	volatile int32_t x91 = -1;
	static uint8_t x92 = 6U;
	static volatile uint32_t t22 = 51533U;

	t22 = (x89^((x90^x91)&x92));

	if (t22 != 256367U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 2813U;
	volatile uint8_t x94 = UINT8_MAX;
	int32_t x96 = INT32_MAX;
	static int64_t t23 = -470935693687836LL;

	t23 = (x93^((x94^x95)&x96));

	if (t23 != 2562LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint64_t x98 = 152048LLU;
	int8_t x99 = -1;
	uint32_t x100 = 8U;
	volatile uint64_t t24 = 227LLU;

	t24 = (x97^((x98^x99)&x100));

	if (t24 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int8_t x103 = INT8_MIN;
	int64_t t25 = 320271501LL;

	t25 = (x101^((x102^x103)&x104));

	if (t25 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 1337;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = 26735U;
	volatile uint16_t x108 = 9U;
	int64_t t26 = 240925884104LL;

	t26 = (x105^((x106^x107)&x108));

	if (t26 != 1328LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int16_t x110 = -252;
	static int64_t t27 = 414776917978297218LL;

	t27 = (x109^((x110^x111)&x112));

	if (t27 != -400024986756LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint16_t x114 = UINT16_MAX;
	volatile int16_t x116 = 589;
	volatile int64_t t28 = 6973572272399867LL;

	t28 = (x113^((x114^x115)&x116));

	if (t28 != 9223372036854775218LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MAX;
	int8_t x119 = INT8_MAX;
	static volatile uint64_t t29 = 36686587LLU;

	t29 = (x117^((x118^x119)&x120));

	if (t29 != 2146612991LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile uint16_t x123 = 720U;

	t30 = (x121^((x122^x123)&x124));

	if (t30 != -4294966576LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -6787;
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 3;

	t31 = (x125^((x126^x127)&x128));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MAX;
	static int16_t x130 = -1;
	int32_t x131 = -1;

	t32 = (x129^((x130^x131)&x132));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	volatile int32_t x134 = -513064;
	volatile uint8_t x136 = 2U;
	volatile int32_t t33 = -2;

	t33 = (x133^((x134^x135)&x136));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint64_t x138 = UINT64_MAX;
	uint32_t x139 = 364739U;
	static uint32_t x140 = 16257U;
	static uint64_t t34 = 10875454800122607LLU;

	t34 = (x137^((x138^x139)&x140));

	if (t34 != 12159LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	static volatile int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int32_t t35 = 13266436;

	t35 = (x141^((x142^x143)&x144));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = -26011559;
	volatile int64_t x148 = 17265520329124001LL;
	static int64_t t36 = -41073LL;

	t36 = (x145^((x146^x147)&x148));

	if (t36 != 1776498949967LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int32_t x150 = INT32_MAX;
	static int32_t t37 = 1;

	t37 = (x149^((x150^x151)&x152));

	if (t37 != -147) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 15;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t t38 = 307655065LLU;

	t38 = (x153^((x154^x155)&x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 58U;
	int8_t x158 = INT8_MAX;
	static int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;

	t39 = (x157^((x158^x159)&x160));

	if (t39 != 197) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = UINT8_MAX;
	volatile uint32_t x163 = 974538650U;
	static int64_t x164 = 341079916803LL;

	t40 = (x161^((x162^x163)&x164));

	if (t40 != -1475215103LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x166 = -1;
	int64_t x167 = -1LL;
	static int16_t x168 = -188;
	volatile int64_t t41 = 10639062LL;

	t41 = (x165^((x166^x167)&x168));

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 870045U;
	static volatile uint16_t x170 = 819U;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 18805U;
	volatile uint32_t t42 = 31U;

	t42 = (x169^((x170^x171)&x172));

	if (t42 != 870316U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 29U;
	int32_t x174 = -1;
	volatile int32_t x176 = INT32_MAX;

	t43 = (x173^((x174^x175)&x176));

	if (t43 != 29U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -49951009;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 7931894715861020823LLU;
	volatile int16_t x180 = -1;
	uint64_t t44 = 2194397787485708LLU;

	t44 = (x177^((x178^x179)&x180));

	if (t44 != 1291477321034006088LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 9U;
	uint8_t x182 = 1U;
	int64_t x183 = INT64_MIN;
	volatile uint64_t x184 = 2923LLU;
	uint64_t t45 = 1908LLU;

	t45 = (x181^((x182^x183)&x184));

	if (t45 != 8LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x188 = UINT8_MAX;
	volatile uint64_t t46 = 17054568351LLU;

	t46 = (x185^((x186^x187)&x188));

	if (t46 != 37LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MIN;
	uint16_t x191 = 99U;
	int64_t x192 = INT64_MAX;
	static int64_t t47 = -295005325122603178LL;

	t47 = (x189^((x190^x191)&x192));

	if (t47 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = 26;
	int64_t x195 = 679663584527681LL;
	uint8_t x196 = 0U;

	t48 = (x193^((x194^x195)&x196));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x198 = 15000647;
	uint8_t x199 = 115U;
	int32_t x200 = 160413;
	int64_t t49 = -597LL;

	t49 = (x197^((x198^x199)&x200));

	if (t49 != 9223372036854751211LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 1;
	int32_t x203 = -1;
	int64_t t50 = 15665366097485767LL;

	t50 = (x201^((x202^x203)&x204));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	static uint8_t x207 = UINT8_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = INT32_MAX;

	t51 = (x205^((x206^x207)&x208));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = 68U;
	volatile uint64_t x211 = 24741478890LLU;
	volatile int16_t x212 = -1471;

	t52 = (x209^((x210^x211)&x212));

	if (t52 != 18446744048968040448LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 46749;
	int32_t x215 = INT32_MIN;
	uint16_t x216 = 0U;
	volatile int32_t t53 = -62;

	t53 = (x213^((x214^x215)&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	static int32_t x218 = INT32_MAX;
	static uint64_t x219 = 28LLU;
	int16_t x220 = INT16_MIN;
	uint64_t t54 = 4LLU;

	t54 = (x217^((x218^x219)&x220));

	if (t54 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x222 = -3104LL;
	volatile int16_t x224 = 1;
	int64_t t55 = -32471430LL;

	t55 = (x221^((x222^x223)&x224));

	if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	volatile uint64_t x226 = 16955643139LLU;
	int64_t x227 = INT64_MAX;
	static volatile uint64_t x228 = 454564312050418LLU;
	volatile uint64_t t56 = 64439283510LLU;

	t56 = (x225^((x226^x227)&x228));

	if (t56 != 18446289511545017712LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -1LL;
	uint8_t x230 = 19U;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 7470U;
	static int64_t t57 = 31291729LL;

	t57 = (x229^((x230^x231)&x232));

	if (t57 != -7469LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x234 = 14U;
	volatile int32_t x235 = INT32_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 0;

	t58 = (x233^((x234^x235)&x236));

	if (t58 != 27) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = UINT8_MAX;
	volatile uint64_t x239 = 15LLU;
	int16_t x240 = INT16_MAX;
	volatile uint64_t t59 = 90875358488LLU;

	t59 = (x237^((x238^x239)&x240));

	if (t59 != 18446744073709551375LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MIN;

	t60 = (x241^((x242^x243)&x244));

	if (t60 != 18446744073412199679LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = 307717LL;
	static uint64_t x248 = 2310923699863LLU;
	volatile uint64_t t61 = 2362448295895842103LLU;

	t61 = (x245^((x246^x247)&x248));

	if (t61 != 516LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 256236632;
	volatile int32_t x250 = -9911474;
	uint64_t x251 = 27950714379176057LLU;
	int64_t x252 = -1LL;
	volatile uint64_t t62 = 21195297687197706LLU;

	t62 = (x249^((x250^x251)&x252));

	if (t62 != 18418793359123879791LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -23665;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 0U;
	uint32_t x256 = 576634931U;
	uint32_t t63 = 4951127U;

	t63 = (x253^((x254^x255)&x256));

	if (t63 != 4294943631U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;

	t64 = (x257^((x258^x259)&x260));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 2U;
	volatile uint16_t x264 = 1U;
	volatile int32_t t65 = -655;

	t65 = (x261^((x262^x263)&x264));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -120931LL;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;

	t66 = (x265^((x266^x267)&x268));

	if (t66 != 120861LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 0;
	int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MAX;
	uint32_t x272 = 207435U;
	static uint32_t t67 = 40416U;

	t67 = (x269^((x270^x271)&x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int8_t x274 = 21;
	int16_t x275 = INT16_MIN;
	volatile int32_t t68 = -495575;

	t68 = (x273^((x274^x275)&x276));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	uint64_t x278 = 930011LLU;
	int32_t x279 = INT32_MIN;
	int64_t x280 = -928879LL;

	t69 = (x277^((x278^x279)&x280));

	if (t69 != 2147479406LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 0;
	uint8_t x282 = 3U;
	int8_t x283 = 10;
	volatile uint32_t x284 = 10U;
	static uint32_t t70 = 6143U;

	t70 = (x281^((x282^x283)&x284));

	if (t70 != 8U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	uint8_t x286 = 0U;
	uint64_t x287 = 15895821250166319LLU;
	static int8_t x288 = 0;

	t71 = (x285^((x286^x287)&x288));

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 1U;
	int16_t x290 = -1;
	int64_t x291 = INT64_MIN;

	t72 = (x289^((x290^x291)&x292));

	if (t72 != 9223372036854774779LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 105U;
	int64_t x296 = INT64_MAX;
	int64_t t73 = -13629133619LL;

	t73 = (x293^((x294^x295)&x296));

	if (t73 != 4294901865LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 3;
	uint64_t x299 = 71974381854LLU;
	static uint64_t t74 = 14648LLU;

	t74 = (x297^((x298^x299)&x300));

	if (t74 != 70866960387LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	static volatile uint32_t x302 = 0U;
	volatile int32_t x303 = INT32_MAX;
	int32_t x304 = 1;

	t75 = (x301^((x302^x303)&x304));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = 191LL;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t76 = -54067166LL;

	t76 = (x305^((x306^x307)&x308));

	if (t76 != -9223372036854775617LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x310 = 3U;
	volatile int8_t x312 = INT8_MIN;
	volatile uint32_t t77 = 14913U;

	t77 = (x309^((x310^x311)&x312));

	if (t77 != 22655U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MAX;
	volatile int32_t t78 = -1260;

	t78 = (x313^((x314^x315)&x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;
	static volatile int64_t x318 = INT64_MIN;
	uint64_t x320 = 3LLU;
	uint64_t t79 = 79016LLU;

	t79 = (x317^((x318^x319)&x320));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 3;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = 397442U;
	int32_t x324 = 1386147;
	uint32_t t80 = 6U;

	t80 = (x321^((x322^x323)&x324));

	if (t80 != 1123874U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -488360;

	t81 = (x325^((x326^x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 7U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -14477985;

	t82 = (x329^((x330^x331)&x332));

	if (t82 != -32761) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MIN;
	static int16_t x336 = INT16_MIN;
	volatile uint32_t t83 = 207263U;

	t83 = (x333^((x334^x335)&x336));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 114LL;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 858134221402699758LLU;
	int16_t x340 = 12;

	t84 = (x337^((x338^x339)&x340));

	if (t84 != 126LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -3483954019536503273LL;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MAX;
	uint32_t x344 = 8349849U;
	volatile uint64_t t85 = 91244LLU;

	t85 = (x341^((x342^x343)&x344));

	if (t85 != 14962790054173638167LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	volatile uint8_t x346 = 4U;
	volatile int32_t x348 = INT32_MIN;
	static volatile int64_t t86 = 8048LL;

	t86 = (x345^((x346^x347)&x348));

	if (t86 != -36507222016LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int8_t x350 = 3;
	int16_t x352 = -1;
	uint64_t t87 = 63150482LLU;

	t87 = (x349^((x350^x351)&x352));

	if (t87 != 18391661109996365489LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 651437611923LLU;
	uint64_t t88 = 0LLU;

	t88 = (x353^((x354^x355)&x356));

	if (t88 != 671887744191LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 194U;
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = UINT64_MAX;

	t89 = (x357^((x358^x359)&x360));

	if (t89 != 9223372036854775869LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	volatile int8_t x362 = 1;
	int32_t x364 = INT32_MAX;
	int32_t t90 = 145;

	t90 = (x361^((x362^x363)&x364));

	if (t90 != -2147483522) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	uint32_t x366 = 0U;
	int64_t t91 = -18333637LL;

	t91 = (x365^((x366^x367)&x368));

	if (t91 != -2051LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x370 = UINT32_MAX;
	int8_t x371 = -3;
	int16_t x372 = INT16_MAX;
	volatile uint32_t t92 = 7U;

	t92 = (x369^((x370^x371)&x372));

	if (t92 != 4294967293U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x374 = INT8_MAX;
	static int8_t x375 = -1;
	uint32_t x376 = 4U;
	uint32_t t93 = 2131253995U;

	t93 = (x373^((x374^x375)&x376));

	if (t93 != 43U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint8_t x378 = 1U;
	int32_t x379 = INT32_MAX;
	volatile uint8_t x380 = 1U;
	int64_t t94 = INT64_MIN;

	t94 = (x377^((x378^x379)&x380));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 106825213U;
	static uint64_t x383 = 83514108705LLU;
	int8_t x384 = INT8_MIN;

	t95 = (x381^((x382^x383)&x384));

	if (t95 != 672429300522632829LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MAX;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 415U;
	uint32_t x388 = UINT32_MAX;
	int64_t t96 = 2201790LL;

	t96 = (x385^((x386^x387)&x388));

	if (t96 != 9223372034707291744LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x390 = -1;
	static uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	uint64_t t97 = UINT64_MAX;

	t97 = (x389^((x390^x391)&x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = -15;
	static uint8_t x396 = 3U;
	int32_t t98 = 649;

	t98 = (x393^((x394^x395)&x396));

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = UINT8_MAX;
	int64_t x400 = -1LL;

	t99 = (x397^((x398^x399)&x400));

	if (t99 != 11647LL) { NG(); } else { ; }
	
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

