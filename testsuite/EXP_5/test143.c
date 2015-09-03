#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t2 = 25018724LL;
int32_t x14 = -1;
int16_t x17 = INT16_MIN;
int32_t x19 = INT32_MIN;
uint8_t x22 = 15U;
volatile uint32_t t5 = 18285310U;
int32_t x30 = INT32_MIN;
static uint32_t x36 = UINT32_MAX;
static uint32_t t8 = 8190735U;
uint16_t x37 = UINT16_MAX;
static volatile uint64_t t9 = 230LLU;
int32_t t11 = -1438;
volatile int64_t x50 = INT64_MAX;
volatile int64_t t13 = -459496913397092LL;
static int16_t x64 = 3269;
volatile int8_t x65 = INT8_MAX;
uint16_t x67 = 127U;
uint32_t x73 = UINT32_MAX;
volatile int8_t x87 = 55;
uint32_t x91 = 23280347U;
volatile uint64_t t19 = 17948062553634193LLU;
int16_t x100 = 10432;
int8_t x102 = -5;
int16_t x107 = INT16_MIN;
volatile uint16_t x109 = 25611U;
volatile uint32_t t24 = 1291296U;
int16_t x118 = INT16_MIN;
volatile int32_t t25 = 79985408;
volatile uint64_t t26 = 2015890721389171270LLU;
uint64_t x127 = 4241156750LLU;
static int64_t x130 = INT64_MAX;
int64_t x131 = INT64_MIN;
uint64_t t34 = 503754430681375LLU;
uint64_t x177 = 10024962189LLU;
static uint64_t t39 = 29824882750756142LLU;
uint16_t x181 = 174U;
int64_t x182 = -1LL;
int64_t t40 = 13625LL;
volatile int64_t t41 = 291496255391LL;
volatile int64_t t42 = -1LL;
volatile uint8_t x199 = 10U;
static int8_t x200 = INT8_MIN;
uint64_t x206 = 405676300242LLU;
int32_t x207 = INT32_MIN;
int8_t x208 = INT8_MIN;
int8_t x210 = INT8_MIN;
int16_t x214 = -1;
static int16_t x215 = INT16_MIN;
volatile uint32_t t50 = 22992268U;
static volatile uint64_t t51 = 5621955454389645LLU;
uint64_t x244 = UINT64_MAX;
uint64_t x249 = UINT64_MAX;
uint8_t x250 = UINT8_MAX;
uint64_t x252 = 63LLU;
uint64_t t54 = 57204861LLU;
volatile int8_t x258 = 1;
uint32_t x260 = 9610U;
volatile int16_t x265 = -20;
uint32_t t57 = 6U;
int8_t x274 = INT8_MIN;
int8_t x276 = 0;
volatile int64_t x283 = INT64_MIN;
volatile int8_t x287 = -1;
volatile int32_t x289 = INT32_MAX;
volatile uint16_t x290 = 0U;
uint16_t x292 = 25892U;
int32_t t62 = -320630146;
uint8_t x302 = 2U;
volatile int32_t x305 = -1;
static int32_t x311 = INT32_MAX;
uint8_t x313 = 1U;
int16_t x316 = -1;
int64_t t71 = -243804238652957LL;
static int32_t x339 = -1;
volatile uint32_t t72 = 5U;
int8_t x345 = -3;
uint8_t x348 = UINT8_MAX;
static uint32_t x354 = 18U;
static int32_t x361 = 62311;
volatile int64_t x367 = -58138993303LL;
int64_t t78 = 16089445LL;
uint8_t x373 = 22U;
static uint8_t x387 = 3U;
uint8_t x388 = 4U;
int32_t x406 = 842983;
int32_t x413 = -1;
static uint64_t x416 = 1686503214503LLU;
int32_t x430 = 82791;
uint64_t t88 = 784534901014369901LLU;
int32_t x436 = 0;
uint64_t x440 = 141318417406954498LLU;
volatile uint64_t t90 = 4360393698753LLU;
static uint16_t x442 = UINT16_MAX;
uint64_t x449 = 109016358843536LLU;
uint16_t x451 = 87U;
int64_t t94 = 187150197804LL;
static int32_t x458 = INT32_MIN;
int64_t t95 = 3697346LL;
uint8_t x467 = UINT8_MAX;
int32_t t97 = -12541780;
uint8_t x470 = UINT8_MAX;
volatile uint8_t x479 = 1U;
volatile uint16_t x480 = UINT16_MAX;


void f0(void) {
	int64_t x1 = 29LL;
	uint16_t x2 = 31U;
	int32_t x3 = INT32_MIN;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 493583251297LL;

	t0 = (x1^((x2+x3)&x4));

	if (t0 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	static uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 53743U;

	t1 = (x5^((x6+x7)&x8));

	if (t1 != 4294934783U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int32_t x10 = 82330492;
	static int16_t x11 = INT16_MAX;
	uint16_t x12 = 42U;

	t2 = (x9^((x10+x11)&x12));

	if (t2 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int16_t x15 = -1;
	static int64_t x16 = -1LL;
	int64_t t3 = 35410551LL;

	t3 = (x13^((x14+x15)&x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = 53682;
	int32_t x20 = INT32_MAX;
	int32_t t4 = -956;

	t4 = (x17^((x18+x19)&x20));

	if (t4 != -44622) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -4;
	uint32_t x23 = UINT32_MAX;
	static uint8_t x24 = UINT8_MAX;

	t5 = (x21^((x22+x23)&x24));

	if (t5 != 4294967282U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int8_t x26 = INT8_MIN;
	static volatile uint16_t x27 = 3726U;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 25815363;

	t6 = (x25^((x26+x27)&x28));

	if (t6 != 241) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 1;
	int32_t x31 = 10;
	uint32_t x32 = 1599U;
	static volatile uint32_t t7 = 4921050U;

	t7 = (x29^((x30+x31)&x32));

	if (t7 != 11U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 31U;
	int8_t x34 = -46;
	int16_t x35 = INT16_MAX;

	t8 = (x33^((x34+x35)&x36));

	if (t8 != 32718U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = 19616LL;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 992147599202440LLU;

	t9 = (x37^((x38+x39)&x40));

	if (t9 != 992147599259519LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 26;
	int16_t x42 = INT16_MIN;
	int32_t x43 = -1;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 32339255908972129LL;

	t10 = (x41^((x42+x43)&x44));

	if (t10 != 9223372036854743013LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int16_t x46 = INT16_MAX;
	volatile int32_t x47 = -1;
	int8_t x48 = INT8_MIN;

	t11 = (x45^((x46+x47)&x48));

	if (t11 != -32641) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 1U;
	int64_t x51 = INT64_MIN;
	int8_t x52 = 1;
	int64_t t12 = -7LL;

	t12 = (x49^((x50+x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = -6650171LL;
	static uint8_t x55 = 41U;
	int64_t x56 = INT64_MIN;

	t13 = (x53^((x54+x55)&x56));

	if (t13 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = 25LL;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x61^((x62+x63)&x64));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = -21;
	int64_t x68 = -5LL;
	int64_t t15 = -117254317225577275LL;

	t15 = (x65^((x66+x67)&x68));

	if (t15 != 21LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x74 = 243U;
	static int64_t x75 = INT64_MIN;
	static int8_t x76 = INT8_MIN;
	int64_t t16 = 189334963471LL;

	t16 = (x73^((x74+x75)&x76));

	if (t16 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 288LLU;
	static int64_t x78 = INT64_MIN;
	volatile uint16_t x79 = 8U;
	static uint16_t x80 = 14141U;
	static volatile uint64_t t17 = 946619945LLU;

	t17 = (x77^((x78+x79)&x80));

	if (t17 != 296LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	static int8_t x86 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t18 = 14553856;

	t18 = (x85^((x86+x87)&x88));

	if (t18 != -65464) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = INT64_MIN;
	uint64_t x90 = 2472174593139009280LLU;
	static uint16_t x92 = UINT16_MAX;

	t19 = (x89^((x90+x91)&x92));

	if (t19 != 9223372036854784475LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = 1469476;
	uint64_t x96 = 1488921LLU;
	uint64_t t20 = 1883111451LLU;

	t20 = (x93^((x94+x95)&x96));

	if (t20 != 4293515262LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	static int64_t x98 = 47LL;
	int64_t x99 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x97^((x98+x99)&x100));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = INT64_MIN;
	volatile int8_t x103 = -3;
	volatile uint64_t x104 = 247275732502383448LLU;
	static uint64_t t22 = 84560LLU;

	t22 = (x101^((x102+x103)&x104));

	if (t22 != 9470647769357159256LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 2;
	int32_t x106 = -87942;
	static int8_t x108 = -1;
	volatile int32_t t23 = 96;

	t23 = (x105^((x106+x107)&x108));

	if (t23 != -120712) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x110 = INT32_MIN;
	static uint32_t x111 = UINT32_MAX;
	static volatile uint32_t x112 = UINT32_MAX;

	t24 = (x109^((x110+x111)&x112));

	if (t24 != 2147458036U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MAX;
	uint8_t x119 = 7U;
	volatile int8_t x120 = INT8_MIN;

	t25 = (x117^((x118+x119)&x120));

	if (t25 != -2147450881) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	static uint64_t x122 = 0LLU;
	uint8_t x123 = 6U;
	uint16_t x124 = UINT16_MAX;

	t26 = (x121^((x122+x123)&x124));

	if (t26 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	volatile int8_t x126 = -5;
	volatile int64_t x128 = INT64_MIN;
	uint64_t t27 = 272LLU;

	t27 = (x125^((x126+x127)&x128));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 9U;
	volatile int16_t x132 = -1;
	volatile int64_t t28 = -1018608116998LL;

	t28 = (x129^((x130+x131)&x132));

	if (t28 != -10LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = 1;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = 8;
	int8_t x136 = INT8_MAX;
	volatile int32_t t29 = 0;

	t29 = (x133^((x134+x135)&x136));

	if (t29 != 9) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = UINT16_MAX;
	int64_t x139 = -1LL;
	int64_t x140 = 129786189297LL;
	int64_t t30 = -1569LL;

	t30 = (x137^((x138+x139)&x140));

	if (t30 != -27152LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x145 = UINT8_MAX;
	uint64_t x146 = UINT64_MAX;
	static volatile int64_t x147 = -8710466LL;
	int8_t x148 = INT8_MIN;
	uint64_t t31 = 3363934191264400LLU;

	t31 = (x145^((x146+x147)&x148));

	if (t31 != 18446744073700841087LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MIN;
	static int8_t x150 = -1;
	uint16_t x151 = 147U;
	static uint8_t x152 = 0U;
	int32_t t32 = 478581585;

	t32 = (x149^((x150+x151)&x152));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = -1LL;
	volatile uint64_t x154 = 13LLU;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 2914U;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x153^((x154+x155)&x156));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x157 = -78;
	volatile uint64_t x158 = 381171429LLU;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = -1;

	t34 = (x157^((x158+x159)&x160));

	if (t34 != 18446744073328314710LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = -1;
	static int8_t x162 = INT8_MAX;
	int16_t x163 = 1;
	int32_t x164 = -7039103;
	volatile int32_t t35 = -1564469;

	t35 = (x161^((x162+x163)&x164));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int64_t x166 = INT64_MIN;
	static int16_t x167 = 0;
	int8_t x168 = -59;
	volatile uint64_t t36 = 175887LLU;

	t36 = (x165^((x166+x167)&x168));

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = 696;
	int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;
	int64_t t37 = -508354223836806LL;

	t37 = (x169^((x170+x171)&x172));

	if (t37 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = INT32_MAX;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = -367582LL;
	volatile uint16_t x176 = 15890U;
	volatile int64_t t38 = -61762441910LL;

	t38 = (x173^((x174+x175)&x176));

	if (t38 != 2147474431LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x178 = 22;
	int16_t x179 = -3768;
	int8_t x180 = 0;

	t39 = (x177^((x178+x179)&x180));

	if (t39 != 10024962189LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x183 = INT32_MIN;
	volatile int64_t x184 = INT64_MIN;

	t40 = (x181^((x182+x183)&x184));

	if (t40 != -9223372036854775634LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	volatile int32_t x186 = INT32_MAX;
	static int8_t x187 = INT8_MIN;
	volatile int8_t x188 = INT8_MAX;

	t41 = (x185^((x186+x187)&x188));

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MAX;
	volatile int64_t x194 = 3LL;
	static int16_t x195 = 16;
	uint32_t x196 = 254U;

	t42 = (x193^((x194+x195)&x196));

	if (t42 != 109LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MIN;
	volatile uint8_t x198 = UINT8_MAX;
	static volatile int32_t t43 = 372;

	t43 = (x197^((x198+x199)&x200));

	if (t43 != -384) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = INT64_MAX;
	static volatile uint8_t x202 = 82U;
	static int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	static int64_t t44 = INT64_MAX;

	t44 = (x201^((x202+x203)&x204));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MAX;
	volatile uint64_t t45 = 5728088964783405LLU;

	t45 = (x205^((x206+x207)&x208));

	if (t45 != 9223371633325959295LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x209 = INT16_MIN;
	int64_t x211 = -11512343LL;
	int64_t x212 = INT64_MIN;
	int64_t t46 = 408LL;

	t46 = (x209^((x210+x211)&x212));

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x213 = 9;
	uint16_t x216 = 86U;
	int32_t t47 = -438;

	t47 = (x213^((x214+x215)&x216));

	if (t47 != 95) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 1769U;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 91413938418495LLU;
	int64_t x228 = 1LL;
	volatile uint64_t t48 = 8627189867710992305LLU;

	t48 = (x225^((x226+x227)&x228));

	if (t48 != 1768LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = -6;
	int16_t x231 = 1;
	int16_t x232 = -52;
	int32_t t49 = -206;

	t49 = (x229^((x230+x231)&x232));

	if (t49 != 32712) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = 185170U;
	volatile int16_t x235 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;

	t50 = (x233^((x234+x235)&x236));

	if (t50 != 4294814930U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x237 = UINT32_MAX;
	static volatile int8_t x238 = INT8_MIN;
	static uint32_t x239 = 4246U;
	uint64_t x240 = 1603478LLU;

	t51 = (x237^((x238+x239)&x240));

	if (t51 != 4294963177LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 23U;
	static uint64_t t52 = 2440436256795LLU;

	t52 = (x241^((x242+x243)&x244));

	if (t52 != 18446744073709486057LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	volatile int64_t x247 = 24176196LL;
	static int8_t x248 = 6;
	uint64_t t53 = 266LLU;

	t53 = (x245^((x246+x247)&x248));

	if (t53 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x251 = -621;

	t54 = (x249^((x250+x251)&x252));

	if (t54 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = 0;
	int32_t x259 = -6732;
	uint32_t t55 = 1363437U;

	t55 = (x257^((x258+x259)&x260));

	if (t55 != 9600U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = -1;
	volatile uint8_t x262 = 107U;
	int8_t x263 = 1;
	int64_t x264 = -3601088546894LL;
	volatile int64_t t56 = -18829220734481LL;

	t56 = (x261^((x262+x263)&x264));

	if (t56 != -33LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = -2;

	t57 = (x265^((x266+x267)&x268));

	if (t57 != 4294967058U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = UINT8_MAX;
	int32_t t58 = 3;

	t58 = (x269^((x270+x271)&x272));

	if (t58 != -2147483394) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x275 = -1;
	int64_t t59 = INT64_MIN;

	t59 = (x273^((x274+x275)&x276));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = -1;
	static int8_t x282 = 1;
	int32_t x284 = -1;
	int64_t t60 = -1858367400755LL;

	t60 = (x281^((x282+x283)&x284));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 22U;
	static int32_t x286 = INT32_MAX;
	volatile int8_t x288 = INT8_MIN;
	int32_t t61 = -452324;

	t61 = (x285^((x286+x287)&x288));

	if (t61 != 2147483542) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x291 = INT8_MIN;

	t62 = (x289^((x290+x291)&x292));

	if (t62 != 2147457791) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MAX;
	static int32_t x299 = INT32_MIN;
	uint64_t x300 = 54775725702LLU;
	volatile uint64_t t63 = 208272166217908LLU;

	t63 = (x297^((x298+x299)&x300));

	if (t63 != 9223372090541883014LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MIN;
	static volatile int8_t x303 = -1;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x301^((x302+x303)&x304));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x306 = UINT8_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	int8_t x308 = 14;
	static uint64_t t65 = 23LLU;

	t65 = (x305^((x306+x307)&x308));

	if (t65 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 91U;
	volatile int8_t x310 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t66 = 448022695;

	t66 = (x309^((x310+x311)&x312));

	if (t66 != 2147483483) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x314 = 34;
	static int32_t x315 = INT32_MIN;
	int32_t t67 = 1;

	t67 = (x313^((x314+x315)&x316));

	if (t67 != -2147483613) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = 153276122U;
	uint16_t x323 = 71U;
	uint16_t x324 = 245U;
	static uint32_t t68 = 6841060U;

	t68 = (x321^((x322+x323)&x324));

	if (t68 != 4294967201U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = 503U;
	uint64_t x326 = 117LLU;
	volatile int64_t x327 = -20LL;
	int32_t x328 = -1;
	uint64_t t69 = 0LLU;

	t69 = (x325^((x326+x327)&x328));

	if (t69 != 406LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x329 = 637574U;
	volatile int8_t x330 = 33;
	int64_t x331 = -1LL;
	static int16_t x332 = -1;
	int64_t t70 = 4988989LL;

	t70 = (x329^((x330+x331)&x332));

	if (t70 != 637606LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x333 = -1LL;
	uint32_t x334 = 334740184U;
	static uint16_t x335 = 43U;
	volatile uint8_t x336 = 30U;

	t71 = (x333^((x334+x335)&x336));

	if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = 3;
	int8_t x338 = INT8_MAX;
	static uint32_t x340 = 24715027U;

	t72 = (x337^((x338+x339)&x340));

	if (t72 != 17U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = 8334377076720981400LLU;
	volatile uint16_t x342 = 3U;
	volatile int16_t x343 = INT16_MIN;
	static int8_t x344 = -31;
	volatile uint64_t t73 = 754399964362423734LLU;

	t73 = (x341^((x342+x343)&x344));

	if (t73 != 10112366996988581273LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x346 = 3U;
	int64_t x347 = 282732389618LL;
	int64_t t74 = 971LL;

	t74 = (x345^((x346+x347)&x348));

	if (t74 != -248LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = -229438046388760LL;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = 207;
	static volatile int32_t x352 = -13603851;
	uint64_t t75 = 9956713LLU;

	t75 = (x349^((x350+x351)&x352));

	if (t75 != 18446514635663162668LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 9U;
	static int32_t x355 = 341;
	volatile int64_t x356 = INT64_MIN;
	int64_t t76 = -1314LL;

	t76 = (x353^((x354+x355)&x356));

	if (t76 != 9LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	int8_t x364 = -1;
	volatile int32_t t77 = 5121478;

	t77 = (x361^((x362+x363)&x364));

	if (t77 != -2147421288) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x365 = 264072972U;
	volatile uint16_t x366 = 12U;
	int8_t x368 = -1;

	t78 = (x365^((x366+x367)&x368));

	if (t78 != -58097913223LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x374 = -127426;
	static int16_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int64_t t79 = 55813LL;

	t79 = (x373^((x374+x375)&x376));

	if (t79 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 64203U;
	volatile uint8_t x378 = 1U;
	int64_t x379 = 3733176245095906LL;
	uint8_t x380 = 0U;
	int64_t t80 = -302650160558710LL;

	t80 = (x377^((x378+x379)&x380));

	if (t80 != 64203LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = 111;
	static uint8_t x383 = 1U;
	int32_t x384 = -1;
	int32_t t81 = -76005;

	t81 = (x381^((x382+x383)&x384));

	if (t81 != -16) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x385 = 11U;
	static uint16_t x386 = 44U;
	static volatile uint32_t t82 = 804U;

	t82 = (x385^((x386+x387)&x388));

	if (t82 != 15U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = -14081753;
	int16_t x395 = INT16_MAX;
	int8_t x396 = -1;
	volatile int64_t t83 = -7117382785LL;

	t83 = (x393^((x394+x395)&x396));

	if (t83 != 9223372036840726822LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x405 = 25;
	int8_t x407 = -1;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t84 = -111951LL;

	t84 = (x405^((x406+x407)&x408));

	if (t84 != 25LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = -1;
	volatile int16_t x410 = -1;
	volatile int64_t x411 = -8100556666LL;
	volatile int32_t x412 = INT32_MIN;
	int64_t t85 = 678278241LL;

	t85 = (x409^((x410+x411)&x412));

	if (t85 != 8589934591LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x414 = INT16_MAX;
	uint16_t x415 = 24U;
	uint64_t t86 = 2797047108610068LLU;

	t86 = (x413^((x414+x415)&x416));

	if (t86 != 18446744073709518840LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = 15641U;
	volatile uint16_t x426 = UINT16_MAX;
	static uint32_t x427 = 44379763U;
	volatile int8_t x428 = INT8_MAX;
	volatile uint32_t t87 = 12908188U;

	t87 = (x425^((x426+x427)&x428));

	if (t87 != 15723U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = INT16_MIN;
	volatile uint16_t x431 = 909U;
	uint64_t x432 = 18065641219815187LLU;

	t88 = (x429^((x430+x431)&x432));

	if (t88 != 18446744073709471248LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x433 = 15712U;
	static volatile uint16_t x434 = 11U;
	int8_t x435 = 58;
	static volatile uint32_t t89 = 514354755U;

	t89 = (x433^((x434+x435)&x436));

	if (t89 != 15712U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = 28U;
	uint8_t x438 = UINT8_MAX;
	static int8_t x439 = -9;

	t90 = (x437^((x438+x439)&x440));

	if (t90 != 30LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x441 = -3;
	int16_t x443 = 10743;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t91 = -1676297;

	t91 = (x441^((x442+x443)&x444));

	if (t91 != -76163) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x445 = 170803U;
	uint64_t x446 = 297223112300604LLU;
	int32_t x447 = 29865635;
	uint16_t x448 = 1376U;
	static uint64_t t92 = 131158509933113306LLU;

	t92 = (x445^((x446+x447)&x448));

	if (t92 != 171891LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x450 = INT16_MAX;
	int64_t x452 = -702183LL;
	volatile uint64_t t93 = 1174778LLU;

	t93 = (x449^((x450+x451)&x452));

	if (t93 != 109016358843520LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x453 = INT16_MIN;
	static int64_t x454 = 1315211LL;
	volatile int16_t x455 = 1;
	int16_t x456 = -1;

	t94 = (x453^((x454+x455)&x456));

	if (t94 != -1338996LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x457 = -1LL;
	volatile uint32_t x459 = 254U;
	volatile uint8_t x460 = 51U;

	t95 = (x457^((x458+x459)&x460));

	if (t95 != -51LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x461 = -5;
	volatile int8_t x462 = 6;
	uint16_t x463 = 178U;
	int16_t x464 = INT16_MAX;
	int32_t t96 = 106;

	t96 = (x461^((x462+x463)&x464));

	if (t96 != -189) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x465 = INT8_MIN;
	uint8_t x466 = 3U;
	static volatile int8_t x468 = -1;

	t97 = (x465^((x466+x467)&x468));

	if (t97 != -382) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x469 = INT64_MIN;
	volatile int16_t x471 = -5;
	static int64_t x472 = 0LL;
	static int64_t t98 = INT64_MIN;

	t98 = (x469^((x470+x471)&x472));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = INT32_MIN;
	int16_t x478 = -1;
	int32_t t99 = INT32_MIN;

	t99 = (x477^((x478+x479)&x480));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

