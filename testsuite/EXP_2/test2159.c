#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
volatile uint32_t t0 = 45U;
int8_t x10 = INT8_MIN;
int32_t x12 = INT32_MIN;
static uint64_t x13 = 12000LLU;
int16_t x14 = 1;
uint16_t x15 = 0U;
volatile int64_t t5 = 2184812548LL;
int8_t x25 = INT8_MIN;
uint64_t x29 = 273231594786172LLU;
int64_t x30 = INT64_MAX;
int32_t x31 = 1874100;
int32_t x33 = INT32_MIN;
volatile uint64_t t8 = 285LLU;
static int16_t x47 = INT16_MAX;
static volatile uint64_t t11 = 1LLU;
static int16_t x49 = INT16_MIN;
int32_t x51 = INT32_MIN;
static int32_t x54 = INT32_MIN;
static uint32_t t13 = 25U;
int32_t x61 = -1;
int16_t x63 = INT16_MIN;
int64_t x64 = INT64_MAX;
int64_t t15 = 1609035313LL;
static int8_t x67 = INT8_MIN;
static volatile int64_t x70 = -264152558459130288LL;
uint16_t x83 = UINT16_MAX;
int64_t t21 = 784LL;
volatile int32_t x90 = -2963;
static int8_t x91 = INT8_MIN;
int8_t x103 = INT8_MIN;
volatile int8_t x109 = INT8_MIN;
int16_t x111 = -55;
int64_t x124 = INT64_MIN;
static volatile uint32_t t32 = 3162U;
static int64_t x139 = INT64_MIN;
int64_t x140 = 2088490603LL;
static uint64_t x143 = UINT64_MAX;
static int8_t x149 = INT8_MIN;
uint8_t x150 = 1U;
int32_t x153 = INT32_MAX;
static volatile int32_t t37 = 2040;
int64_t x158 = INT64_MIN;
int32_t t39 = -80;
static int16_t x166 = INT16_MIN;
int32_t x175 = 113286;
uint32_t x177 = UINT32_MAX;
volatile uint64_t x178 = 103106410LLU;
int8_t x186 = -1;
static int32_t x191 = -214;
static int32_t x195 = -687324879;
int64_t t48 = -1762LL;
uint32_t x208 = 27286419U;
uint8_t x212 = 33U;
int64_t x213 = INT64_MIN;
int16_t x214 = INT16_MAX;
int16_t x215 = 1;
uint16_t x216 = 295U;
int32_t x220 = INT32_MIN;
uint32_t x229 = 23U;
static uint32_t t56 = 2993U;
static volatile uint8_t x234 = 2U;
int32_t x242 = INT32_MIN;
volatile int64_t t60 = 375408273780053LL;
uint16_t x250 = 42U;
static volatile int16_t x253 = 2;
int8_t x254 = INT8_MIN;
int16_t x256 = INT16_MIN;
int64_t x261 = -1LL;
int16_t x262 = INT16_MIN;
volatile int16_t x272 = -1;
static uint16_t x278 = 892U;
uint32_t x280 = UINT32_MAX;
volatile uint8_t x290 = 10U;
int8_t x298 = 2;
volatile int32_t t73 = 72309868;
int8_t x303 = 34;
volatile uint64_t t75 = 4LLU;
volatile uint64_t t76 = 60990646LLU;
static int64_t t78 = 7339747423658375LL;
int16_t x321 = -1;
static volatile uint16_t x323 = 3047U;
volatile uint32_t x325 = 596773U;
uint16_t x331 = 22739U;
static int64_t t84 = 66591021624378LL;
volatile int64_t t85 = 234841832800LL;
volatile uint64_t x352 = 199LLU;
volatile int16_t x354 = -300;
volatile uint64_t t87 = 4289LLU;
volatile int64_t x358 = -773983983LL;
static int16_t x361 = INT16_MIN;
int64_t t89 = -3221782583442019400LL;
uint16_t x365 = UINT16_MAX;
uint32_t x374 = UINT32_MAX;
static uint8_t x379 = UINT8_MAX;
int32_t x381 = INT32_MIN;
int32_t x386 = INT32_MIN;
uint64_t x388 = UINT64_MAX;
int32_t x391 = -1;
uint8_t x398 = UINT8_MAX;
int32_t x408 = INT32_MIN;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;

	t0 = ((x1&(x2^x3))+x4);

	if (t0 != 2147483391U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int8_t x6 = INT8_MIN;
	static uint16_t x7 = 28U;
	uint16_t x8 = 369U;
	static int32_t t1 = -11911095;

	t1 = ((x5&(x6^x7))+x8);

	if (t1 != 269) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2LL;
	uint16_t x11 = UINT16_MAX;
	volatile int64_t t2 = -2205LL;

	t2 = ((x9&(x10^x11))+x12);

	if (t2 != -2147483646LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x16 = -1;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13&(x14^x15))+x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1683659516320218888LL;
	uint32_t x18 = 50U;
	volatile uint64_t x19 = 136651909736130749LLU;
	static int16_t x20 = -5;
	uint64_t t4 = 10082880835517LLU;

	t4 = ((x17&(x18^x19))+x20);

	if (t4 != 91492699021010947LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int8_t x22 = 24;
	static volatile int64_t x23 = INT64_MAX;
	int8_t x24 = 6;

	t5 = ((x21&(x22^x23))+x24);

	if (t5 != 4294967277LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 5U;
	int64_t x27 = INT64_MAX;
	static uint64_t x28 = 57928292LLU;
	volatile uint64_t t6 = 6163645504LLU;

	t6 = ((x25&(x26^x27))+x28);

	if (t6 != 9223372036912703972LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x32 = INT16_MIN;
	uint64_t t7 = 128919736746006653LLU;

	t7 = ((x29&(x30^x31))+x32);

	if (t7 != 273231594489160LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -5LL;
	static uint64_t x35 = UINT64_MAX;
	static uint16_t x36 = 18U;

	t8 = ((x33&(x34^x35))+x36);

	if (t8 != 18LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	volatile uint16_t x39 = UINT16_MAX;
	int32_t x40 = 995363763;
	volatile int32_t t9 = 469354;

	t9 = ((x37&(x38^x39))+x40);

	if (t9 != 995298227) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	uint32_t x43 = 82125948U;
	volatile int8_t x44 = 0;
	volatile uint32_t t10 = 218U;

	t10 = ((x41&(x42^x43))+x44);

	if (t10 != 82172803U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = -3116;
	volatile uint64_t x48 = 4583171758553LLU;

	t11 = ((x45&(x46^x47))+x48);

	if (t11 != 4583171725785LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -10;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 1;

	t12 = ((x49&(x50^x51))+x52);

	if (t12 != 2147418112) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x55 = 2017U;
	uint16_t x56 = UINT16_MAX;

	t13 = ((x53&(x54^x55))+x56);

	if (t13 != 2147549183U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 98005148U;
	int8_t x58 = 7;
	int64_t x59 = 61LL;
	volatile uint16_t x60 = 0U;
	int64_t t14 = 1367LL;

	t14 = ((x57&(x58^x59))+x60);

	if (t14 != 24LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MAX;

	t15 = ((x61&(x62^x63))+x64);

	if (t15 != 32766LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -7564889;
	int64_t x66 = INT64_MIN;
	static int16_t x68 = 3;
	volatile int64_t t16 = -462121005LL;

	t16 = ((x65&(x66^x67))+x68);

	if (t16 != 9223372036847210883LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static int16_t x71 = -14176;
	int64_t x72 = 8661192767554LL;
	uint64_t t17 = 5097693175439915448LLU;

	t17 = ((x69&(x70^x71))+x72);

	if (t17 != 264161219651903282LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	uint8_t x75 = 0U;
	static int32_t x76 = -1;
	uint64_t t18 = 5662LLU;

	t18 = ((x73&(x74^x75))+x76);

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 50U;
	volatile int8_t x78 = INT8_MIN;
	int32_t x79 = -1;
	int32_t x80 = -380235;
	static uint32_t t19 = 168439U;

	t19 = ((x77&(x78^x79))+x80);

	if (t19 != 4294587111U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -113938;
	volatile uint8_t x82 = 83U;
	int64_t x84 = INT64_MIN;
	int64_t t20 = 686324356335066LL;

	t20 = ((x81&(x82^x83))+x84);

	if (t20 != -9223372036854758740LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	volatile int32_t x86 = 6543;
	int8_t x87 = INT8_MAX;
	int16_t x88 = 0;

	t21 = ((x85&(x86^x87))+x88);

	if (t21 != 6640LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 2;

	t22 = ((x89&(x90^x91))+x92);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int8_t x94 = 1;
	int16_t x95 = -1;
	int32_t x96 = 367450749;
	static volatile int32_t t23 = -23;

	t23 = ((x93&(x94^x95))+x96);

	if (t23 != 367450621) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static int8_t x98 = INT8_MIN;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = UINT8_MAX;
	int64_t t24 = 7530076153479124LL;

	t24 = ((x97&(x98^x99))+x100);

	if (t24 != 255LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 57774U;
	volatile int16_t x102 = -1;
	static int8_t x104 = -1;
	volatile uint32_t t25 = 5U;

	t25 = ((x101&(x102^x103))+x104);

	if (t25 != 45U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 11U;
	static int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MAX;
	volatile uint32_t x108 = 254527U;
	volatile uint32_t t26 = 8U;

	t26 = ((x105&(x106^x107))+x108);

	if (t26 != 254538U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = UINT16_MAX;
	int8_t x112 = -1;
	volatile int32_t t27 = 220;

	t27 = ((x109&(x110^x111))+x112);

	if (t27 != -65537) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	uint8_t x114 = 1U;
	uint64_t x115 = 1435LLU;
	int8_t x116 = 29;
	volatile uint64_t t28 = 5361661429LLU;

	t28 = ((x113&(x114^x115))+x116);

	if (t28 != 183LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	static uint8_t x119 = UINT8_MAX;
	int32_t x120 = 99;
	volatile int32_t t29 = -9206511;

	t29 = ((x117&(x118^x119))+x120);

	if (t29 != 99) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	int64_t t30 = INT64_MIN;

	t30 = ((x121&(x122^x123))+x124);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	volatile int64_t x127 = 2975688351491LL;
	int32_t x128 = INT32_MIN;
	int64_t t31 = 700331673863113979LL;

	t31 = ((x125&(x126^x127))+x128);

	if (t31 != -2978559819776LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 8730U;
	int32_t x130 = 121148643;
	static uint16_t x131 = 9U;
	uint32_t x132 = UINT32_MAX;

	t32 = ((x129&(x130^x131))+x132);

	if (t32 != 9U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = INT8_MAX;
	uint16_t x138 = 4637U;
	volatile int64_t t33 = -30561796736LL;

	t33 = ((x137&(x138^x139))+x140);

	if (t33 != 2088490632LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	static int8_t x142 = 52;
	int16_t x144 = INT16_MAX;
	uint64_t t34 = 510155038LLU;

	t34 = ((x141&(x142^x143))+x144);

	if (t34 != 4295000010LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = 1U;
	int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	static int8_t x148 = -1;
	int64_t t35 = -3147441LL;

	t35 = ((x145&(x146^x147))+x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x151 = -1;
	volatile uint8_t x152 = 0U;
	int32_t t36 = 111;

	t36 = ((x149&(x150^x151))+x152);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	int16_t x155 = 2656;
	static uint16_t x156 = 18382U;

	t37 = ((x153&(x154^x155))+x156);

	if (t37 != 21038) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -7967;
	int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = 65207432276LLU;
	volatile uint64_t t38 = 128173176706LLU;

	t38 = ((x157&(x158^x159))+x160);

	if (t38 != 9223372102062175316LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	int32_t x162 = 4631419;
	int16_t x163 = INT16_MIN;
	int32_t x164 = -70950216;

	t39 = ((x161&(x162^x163))+x164);

	if (t39 != -75592141) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int8_t x167 = -1;
	volatile uint16_t x168 = 6933U;
	int32_t t40 = -1;

	t40 = ((x165&(x166^x167))+x168);

	if (t40 != 39573) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int32_t x172 = 152;
	int64_t t41 = 6548740243842997LL;

	t41 = ((x169&(x170^x171))+x172);

	if (t41 != 32919LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	uint64_t x176 = UINT64_MAX;
	uint64_t t42 = 10LLU;

	t42 = ((x173&(x174^x175))+x176);

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x179 = 0;
	volatile int8_t x180 = 1;
	volatile uint64_t t43 = 608LLU;

	t43 = ((x177&(x178^x179))+x180);

	if (t43 != 103106411LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 2783;
	uint16_t x182 = 992U;
	uint64_t x183 = 1023903739113129LLU;
	int16_t x184 = INT16_MIN;
	uint64_t t44 = 7004330LLU;

	t44 = ((x181&(x182^x183))+x184);

	if (t44 != 18446744073709520969LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1568;
	int64_t x187 = -2LL;
	int32_t x188 = INT32_MAX;
	volatile int64_t t45 = 1183902LL;

	t45 = ((x185&(x186^x187))+x188);

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = 3U;
	uint8_t x190 = UINT8_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t46 = 436LL;

	t46 = ((x189&(x190^x191))+x192);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MAX;
	uint32_t x196 = 626814U;
	uint32_t t47 = 48028627U;

	t47 = ((x193&(x194^x195))+x196);

	if (t47 != 642892U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 14777665;
	uint32_t x198 = UINT32_MAX;
	volatile int8_t x199 = INT8_MIN;
	int64_t x200 = -1LL;

	t48 = ((x197&(x198^x199))+x200);

	if (t48 != 64LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = INT8_MAX;
	static uint32_t x203 = UINT32_MAX;
	volatile int64_t x204 = 13157LL;
	static int64_t t49 = -1059869815962142LL;

	t49 = ((x201&(x202^x203))+x204);

	if (t49 != 2147496677LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x205 = 1U;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = UINT8_MAX;
	uint32_t t50 = 137607U;

	t50 = ((x205&(x206^x207))+x208);

	if (t50 != 27286419U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MAX;
	static int64_t t51 = 3LL;

	t51 = ((x209&(x210^x211))+x212);

	if (t51 != 32800LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t t52 = -8062LL;

	t52 = ((x213&(x214^x215))+x216);

	if (t52 != 295LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	static int8_t x218 = INT8_MIN;
	int32_t x219 = 870;
	int32_t t53 = -117596958;

	t53 = ((x217&(x218^x219))+x220);

	if (t53 != -2147483418) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = INT32_MIN;
	static int32_t x222 = INT32_MIN;
	volatile int16_t x223 = 198;
	uint32_t x224 = 12783559U;
	uint32_t t54 = 809U;

	t54 = ((x221&(x222^x223))+x224);

	if (t54 != 2160267207U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = -491;
	int8_t x226 = 1;
	uint32_t x227 = 52230U;
	int8_t x228 = INT8_MAX;
	volatile uint32_t t55 = 1039090435U;

	t55 = ((x225&(x226^x227))+x228);

	if (t55 != 52356U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = -4895833;
	static int16_t x231 = 10522;
	int8_t x232 = -1;

	t56 = ((x229&(x230^x231))+x232);

	if (t56 != 20U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 258551U;
	int64_t x235 = -1LL;
	int16_t x236 = 370;
	static volatile int64_t t57 = -63211337LL;

	t57 = ((x233&(x234^x235))+x236);

	if (t57 != 258919LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = 172U;
	uint64_t x239 = 0LLU;
	int16_t x240 = -3;
	volatile uint64_t t58 = 662545LLU;

	t58 = ((x237&(x238^x239))+x240);

	if (t58 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1;
	uint8_t x243 = 19U;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t59 = -937421711;

	t59 = ((x241&(x242^x243))+x244);

	if (t59 != -2147483374) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = -60378920005LL;
	static int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = -1;

	t60 = ((x245&(x246^x247))+x248);

	if (t60 != -62277006406LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 2927LL;
	uint16_t x251 = 577U;
	int32_t x252 = -1;
	int64_t t61 = 0LL;

	t61 = ((x249&(x250^x251))+x252);

	if (t61 != 618LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x255 = UINT16_MAX;
	int32_t t62 = -27795123;

	t62 = ((x253&(x254^x255))+x256);

	if (t62 != -32766) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -16233LL;
	int16_t x258 = -1;
	int32_t x259 = 18446;
	int16_t x260 = -1022;
	volatile int64_t t63 = -3LL;

	t63 = ((x257&(x258^x259))+x260);

	if (t63 != -33645LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x263 = INT8_MIN;
	uint32_t x264 = 3280425U;
	volatile int64_t t64 = -4231LL;

	t64 = ((x261&(x262^x263))+x264);

	if (t64 != 3313065LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	static uint8_t x266 = 3U;
	uint64_t x267 = 891963472566LLU;
	volatile int8_t x268 = INT8_MIN;
	static uint64_t t65 = 849802173965602446LLU;

	t65 = ((x265&(x266^x267))+x268);

	if (t65 != 891205713792LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	volatile int64_t x270 = INT64_MAX;
	uint32_t x271 = 857U;
	volatile int64_t t66 = -1501299694388034LL;

	t66 = ((x269&(x270^x271))+x272);

	if (t66 != 2147482789LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MAX;
	static int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t67 = 93118451LL;

	t67 = ((x273&(x274^x275))+x276);

	if (t67 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x277 = 355U;
	static volatile uint32_t x279 = 7097U;
	static uint32_t t68 = 112U;

	t68 = ((x277&(x278^x279))+x280);

	if (t68 != 64U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -18662623785999551LL;
	int64_t x282 = -3102951682766LL;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = 12219065086105LLU;
	static volatile uint64_t t69 = 97416906173148LLU;

	t69 = ((x281&(x282^x283))+x284);

	if (t69 != 18428091125260693978LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = 1160616;
	int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	static int16_t x288 = -2016;
	int32_t t70 = 0;

	t70 = ((x285&(x286^x287))+x288);

	if (t70 != 11720) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	uint16_t x291 = UINT16_MAX;
	uint16_t x292 = 14U;
	int32_t t71 = 0;

	t71 = ((x289&(x290^x291))+x292);

	if (t71 != 65539) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = -1;
	static uint16_t x294 = 728U;
	static int32_t x295 = INT32_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t72 = 74466LLU;

	t72 = ((x293&(x294^x295))+x296);

	if (t72 != 2147482918LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x299 = -8;
	int32_t x300 = 986222291;

	t73 = ((x297&(x298^x299))+x300);

	if (t73 != -1161261357) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	static uint64_t x302 = UINT64_MAX;
	int32_t x304 = -1;
	volatile uint64_t t74 = 0LLU;

	t74 = ((x301&(x302^x303))+x304);

	if (t74 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x305 = INT8_MAX;
	int8_t x306 = 6;
	static uint64_t x307 = 10832805677552LLU;
	uint16_t x308 = 13277U;

	t75 = ((x305&(x306^x307))+x308);

	if (t75 != 13395LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MAX;
	uint64_t x311 = UINT64_MAX;
	static int16_t x312 = INT16_MAX;

	t76 = ((x309&(x310^x311))+x312);

	if (t76 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 2863169402LLU;
	int32_t x316 = INT32_MIN;
	uint64_t t77 = 33706LLU;

	t77 = ((x313&(x314^x315))+x316);

	if (t77 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MAX;
	int16_t x318 = INT16_MIN;
	int32_t x319 = 0;
	int64_t x320 = INT64_MIN;

	t78 = ((x317&(x318^x319))+x320);

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x322 = UINT16_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t79 = 387297;

	t79 = ((x321&(x322^x323))+x324);

	if (t79 != 29720) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x326 = UINT32_MAX;
	static uint64_t x327 = 0LLU;
	int16_t x328 = -1;
	uint64_t t80 = 2027569597851LLU;

	t80 = ((x325&(x326^x327))+x328);

	if (t80 != 596772LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MIN;
	static uint64_t x330 = 5025252LLU;
	static int32_t x332 = INT32_MIN;
	uint64_t t81 = 399602LLU;

	t81 = ((x329&(x330^x331))+x332);

	if (t81 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = 5261LL;
	volatile uint64_t x334 = UINT64_MAX;
	uint16_t x335 = 451U;
	static int64_t x336 = 83325231808LL;
	volatile uint64_t t82 = 0LLU;

	t82 = ((x333&(x334^x335))+x336);

	if (t82 != 83325236940LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x337 = 12631;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	int32_t t83 = -18863;

	t83 = ((x337&(x338^x339))+x340);

	if (t83 != 65622) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MAX;
	static int64_t x342 = 775435723LL;
	volatile int16_t x343 = -1;
	static int16_t x344 = INT16_MIN;

	t84 = ((x341&(x342^x343))+x344);

	if (t84 != 1372015156LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = 62291LL;
	int64_t x346 = INT64_MIN;
	int32_t x347 = -22;
	static volatile int64_t x348 = INT64_MIN;

	t85 = ((x345&(x346^x347))+x348);

	if (t85 != -9223372036854713534LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x349 = 25U;
	int64_t x350 = -1LL;
	volatile uint32_t x351 = 112704U;
	uint64_t t86 = 956868914549LLU;

	t86 = ((x349&(x350^x351))+x352);

	if (t86 != 224LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x353 = UINT64_MAX;
	int16_t x355 = INT16_MAX;
	volatile int8_t x356 = 3;

	t87 = ((x353&(x354^x355))+x356);

	if (t87 != 18446744073709519150LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = -1;
	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;
	volatile int64_t t88 = 6699390640LL;

	t88 = ((x357&(x358^x359))+x360);

	if (t88 != 774016749LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x362 = -38948;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = 54;

	t89 = ((x361&(x362^x363))+x364);

	if (t89 != 9223372036854710326LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 900497884307LLU;
	int8_t x368 = INT8_MIN;
	uint64_t t90 = 94781811170376737LLU;

	t90 = ((x365&(x366^x367))+x368);

	if (t90 != 47852LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -1627761;
	uint64_t x371 = 7808525297489LLU;
	int8_t x372 = -14;
	volatile uint64_t t91 = 8253804LLU;

	t91 = ((x369&(x370^x371))+x372);

	if (t91 != 208LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 66366982U;
	int16_t x375 = -1694;
	uint32_t x376 = 10017025U;
	static volatile uint32_t t92 = 49619U;

	t92 = ((x373&(x374^x375))+x376);

	if (t92 != 10018565U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = 8961U;
	int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t93 = 297289611;

	t93 = ((x377&(x378^x379))+x380);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MIN;
	volatile uint64_t x384 = 12107266LLU;
	volatile uint64_t t94 = 2184843036128LLU;

	t94 = ((x381&(x382^x383))+x384);

	if (t94 != 9223372034719399426LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = 60581;
	int16_t x387 = 4;
	volatile uint64_t t95 = 1LLU;

	t95 = ((x385&(x386^x387))+x388);

	if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x389&(x390^x391))+x392);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x393 = 32216LLU;
	int16_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 8990938U;
	volatile uint64_t t97 = 295692980369LLU;

	t97 = ((x393&(x394^x395))+x396);

	if (t97 != 8990938LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	uint32_t x399 = 125013872U;
	static uint16_t x400 = 533U;
	static uint32_t t98 = 113984U;

	t98 = ((x397&(x398^x399))+x400);

	if (t98 != 125014436U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x405 = INT16_MIN;
	static uint32_t x406 = 11U;
	int64_t x407 = INT64_MAX;
	volatile int64_t t99 = 67328527217448837LL;

	t99 = ((x405&(x406^x407))+x408);

	if (t99 != 9223372034707259392LL) { NG(); } else { ; }
	
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

