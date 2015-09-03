#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 407580530104901LLU;
volatile int64_t x3 = -20263648194250417LL;
static int16_t x6 = INT16_MIN;
int16_t x14 = -1;
int32_t x15 = INT32_MIN;
volatile uint8_t x17 = 14U;
int32_t x22 = INT32_MAX;
static uint16_t x23 = 36U;
int16_t x26 = INT16_MAX;
int32_t x35 = INT32_MIN;
volatile uint32_t x43 = 14U;
volatile int32_t t10 = -1470775;
static int64_t x46 = INT64_MAX;
volatile uint32_t t12 = 1240152U;
uint16_t x54 = UINT16_MAX;
static int64_t x55 = INT64_MIN;
int8_t x57 = -1;
uint16_t x59 = 2395U;
uint32_t x61 = 40012727U;
int64_t x62 = INT64_MIN;
int8_t x63 = -1;
int16_t x64 = INT16_MIN;
volatile int32_t t16 = 1403;
volatile int32_t t18 = -3654242;
int16_t x87 = INT16_MIN;
int32_t x88 = INT32_MIN;
uint32_t x92 = UINT32_MAX;
volatile uint32_t t22 = 8182164U;
static int32_t x98 = INT32_MIN;
int32_t t24 = -4051;
uint64_t x107 = UINT64_MAX;
volatile uint64_t x109 = UINT64_MAX;
int8_t x110 = INT8_MIN;
static int64_t x112 = 120758LL;
int32_t x132 = INT32_MIN;
int8_t x134 = INT8_MIN;
int64_t x136 = 246590111251498LL;
int64_t x138 = INT64_MAX;
volatile uint64_t t34 = 254LLU;
uint16_t x142 = 29584U;
uint64_t x150 = 599765194824575LLU;
volatile int8_t x151 = INT8_MIN;
static int32_t t37 = -1839095;
volatile int16_t x159 = INT16_MIN;
int32_t x162 = INT32_MIN;
int8_t x166 = INT8_MIN;
int32_t x167 = 6416134;
int32_t x168 = -1;
volatile int64_t x172 = INT64_MIN;
volatile uint16_t x175 = UINT16_MAX;
static volatile uint8_t x177 = 3U;
volatile int32_t t44 = -1500;
int64_t x184 = INT64_MIN;
uint8_t x188 = UINT8_MAX;
volatile int32_t t46 = -508663;
volatile int32_t x189 = INT32_MAX;
int32_t x198 = -1;
int8_t x199 = INT8_MAX;
int64_t x202 = INT64_MIN;
int32_t x206 = INT32_MAX;
uint32_t x207 = 13709078U;
static volatile int32_t t51 = 3;
uint8_t x211 = 11U;
uint8_t x224 = 21U;
static volatile uint64_t t55 = 12569057766LLU;
int32_t x228 = INT32_MIN;
static int16_t x229 = INT16_MIN;
int16_t x230 = 58;
volatile int16_t x232 = -1;
int64_t x234 = INT64_MAX;
static int32_t t58 = INT32_MIN;
int64_t x241 = INT64_MIN;
static uint16_t x249 = 4503U;
int8_t x252 = -3;
static int64_t x254 = INT64_MIN;
uint64_t x258 = 11LLU;
volatile int32_t t64 = 7;
int32_t t65 = -10798;
int32_t x265 = INT32_MAX;
int16_t x266 = -1;
int32_t t66 = -85;
int64_t x282 = INT64_MAX;
uint64_t x287 = 118682682501LLU;
int8_t x288 = 4;
int16_t x289 = 6;
volatile int16_t x303 = -101;
static int32_t t75 = -29;
static volatile int16_t x315 = INT16_MIN;
volatile int64_t t79 = 243196383LL;
static int32_t x322 = -183;
static int16_t x326 = -5;
int32_t t81 = 1221028;
volatile uint8_t x331 = 60U;
int64_t x333 = 47619724861217LL;
int32_t x336 = -3254046;
volatile int32_t x347 = INT32_MIN;
int32_t t86 = INT32_MIN;
static volatile int64_t t89 = 68860441747LL;
int8_t x362 = -3;
uint64_t t91 = 4326093LLU;
uint64_t x379 = 3685963338836051724LLU;
static volatile int32_t t94 = -2805588;
uint32_t x392 = 29408744U;
int16_t x399 = -1433;
int32_t x400 = INT32_MIN;


void f0(void) {
	int32_t x1 = -322;
	static uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = -159358425;

	t0 = (x1*((x2^x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 138373U;
	uint8_t x7 = 2U;
	static int8_t x8 = INT8_MIN;
	volatile uint32_t t1 = 61797678U;

	t1 = (x5*((x6^x7)<=x8));

	if (t1 != 138373U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int8_t x10 = 19;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;
	uint64_t t2 = UINT64_MAX;

	t2 = (x9*((x10^x11)<=x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	static volatile int32_t x16 = -1;
	int32_t t3 = -3316;

	t3 = (x13*((x14^x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MAX;
	static int16_t x20 = 0;
	volatile int32_t t4 = -241161;

	t4 = (x17*((x18^x19)<=x20));

	if (t4 != 14) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int16_t x24 = 2;
	uint64_t t5 = 5627433592240503419LLU;

	t5 = (x21*((x22^x23)<=x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int32_t x27 = -5;
	volatile int8_t x28 = 26;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x25*((x26^x27)<=x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static volatile int8_t x30 = INT8_MAX;
	volatile int32_t x31 = -216721532;
	int16_t x32 = -3683;
	static volatile int32_t t7 = -10;

	t7 = (x29*((x30^x31)<=x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int16_t x34 = 692;
	int8_t x36 = 12;
	volatile int32_t t8 = -75383553;

	t8 = (x33*((x34^x35)<=x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = 13320;
	int32_t x39 = -1;
	int32_t x40 = INT32_MIN;
	volatile int64_t t9 = 47318LL;

	t9 = (x37*((x38^x39)<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint64_t x42 = 8960301644LLU;
	uint32_t x44 = UINT32_MAX;

	t10 = (x41*((x42^x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	volatile int32_t x47 = INT32_MIN;
	volatile uint32_t x48 = 316975U;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x45*((x46^x47)<=x48));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1851U;
	static int16_t x50 = -8;
	int8_t x51 = INT8_MIN;
	volatile uint16_t x52 = 10533U;

	t12 = (x49*((x50^x51)<=x52));

	if (t12 != 1851U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint64_t x56 = 415281007341677LLU;
	volatile int64_t t13 = 420356464061LL;

	t13 = (x53*((x54^x55)<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 2;
	volatile uint16_t x60 = 7U;
	int32_t t14 = -567;

	t14 = (x57*((x58^x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t t15 = 493496408U;

	t15 = (x61*((x62^x63)<=x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int64_t x66 = INT64_MAX;
	static volatile uint64_t x67 = 363354LLU;
	uint64_t x68 = UINT64_MAX;

	t16 = (x65*((x66^x67)<=x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint8_t x70 = 58U;
	int8_t x71 = -1;
	static int16_t x72 = INT16_MIN;
	static int32_t t17 = 0;

	t17 = (x69*((x70^x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = INT32_MIN;
	static int32_t x74 = INT32_MIN;
	uint32_t x75 = 27430U;
	static uint8_t x76 = 14U;

	t18 = (x73*((x74^x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	uint8_t x78 = 8U;
	int64_t x79 = -1LL;
	uint16_t x80 = 22023U;
	int32_t t19 = 0;

	t19 = (x77*((x78^x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	uint16_t x82 = 3U;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	static volatile int64_t t20 = -644702LL;

	t20 = (x81*((x82^x83)<=x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = -1;
	int32_t t21 = 3808;

	t21 = (x85*((x86^x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 174U;
	volatile int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;

	t22 = (x89*((x90^x91)<=x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 3;
	int16_t x94 = INT16_MIN;
	volatile uint8_t x95 = 3U;
	uint8_t x96 = 2U;
	static int32_t t23 = 13;

	t23 = (x93*((x94^x95)<=x96));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MIN;

	t24 = (x97*((x98^x99)<=x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 2041384490744LL;
	int8_t x102 = -1;
	int64_t x103 = -139073935055956169LL;
	volatile uint8_t x104 = 28U;
	volatile int64_t t25 = 385466669201LL;

	t25 = (x101*((x102^x103)<=x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1522;
	volatile uint32_t x106 = UINT32_MAX;
	int16_t x108 = -1;
	static volatile int32_t t26 = 24;

	t26 = (x105*((x106^x107)<=x108));

	if (t26 != 1522) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x111 = INT32_MIN;
	static volatile uint64_t t27 = 28044156649776785LLU;

	t27 = (x109*((x110^x111)<=x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int8_t x114 = 20;
	volatile int8_t x115 = INT8_MAX;
	int32_t x116 = -1;
	volatile int32_t t28 = 1;

	t28 = (x113*((x114^x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 2U;
	int32_t x118 = 1801;
	static int64_t x119 = INT64_MIN;
	volatile uint8_t x120 = 1U;
	int32_t t29 = 1;

	t29 = (x117*((x118^x119)<=x120));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = -7549LL;
	static int32_t t30 = 529374266;

	t30 = (x121*((x122^x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x126 = 1595U;
	uint64_t x127 = 2174404014976828071LLU;
	int64_t x128 = 407029901284LL;
	int32_t t31 = 60;

	t31 = (x125*((x126^x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 26U;
	static uint8_t x130 = 18U;
	uint16_t x131 = 27804U;
	int32_t t32 = -1;

	t32 = (x129*((x130^x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static int64_t x135 = INT64_MAX;
	static int32_t t33 = -1002561050;

	t33 = (x133*((x134^x135)<=x136));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 72105390279082641LLU;
	uint32_t x139 = 7U;
	static uint8_t x140 = 8U;

	t34 = (x137*((x138^x139)<=x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 5U;
	volatile uint64_t x143 = UINT64_MAX;
	static int64_t x144 = INT64_MAX;
	int32_t t35 = -2281360;

	t35 = (x141*((x142^x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = 4U;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MIN;
	int32_t t36 = 6600334;

	t36 = (x145*((x146^x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 610;
	uint8_t x152 = 76U;

	t37 = (x149*((x150^x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 123LLU;
	uint64_t x154 = 121254061650LLU;
	uint16_t x155 = 6U;
	int64_t x156 = INT64_MIN;
	static volatile uint64_t t38 = 53120LLU;

	t38 = (x153*((x154^x155)<=x156));

	if (t38 != 123LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	volatile int8_t x158 = INT8_MIN;
	int64_t x160 = INT64_MAX;
	int32_t t39 = -9;

	t39 = (x157*((x158^x159)<=x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -381189887;
	int32_t x163 = 0;
	int32_t x164 = -1;
	static int32_t t40 = 34919610;

	t40 = (x161*((x162^x163)<=x164));

	if (t40 != -381189887) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int64_t t41 = -133LL;

	t41 = (x165*((x166^x167)<=x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MAX;
	static int32_t x171 = INT32_MIN;
	static uint32_t t42 = 93925109U;

	t42 = (x169*((x170^x171)<=x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	static uint8_t x174 = 0U;
	int16_t x176 = -1;
	int32_t t43 = 1;

	t43 = (x173*((x174^x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -6;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 1113164059LLU;

	t44 = (x177*((x178^x179)<=x180));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 139U;
	int8_t x183 = INT8_MIN;
	static uint64_t t45 = 42238922LLU;

	t45 = (x181*((x182^x183)<=x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	int16_t x187 = 1;

	t46 = (x185*((x186^x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x190 = 20987U;
	uint8_t x191 = 12U;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x189*((x190^x191)<=x192));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 4343U;
	static volatile int16_t x194 = INT16_MIN;
	int64_t x195 = 108785747080LL;
	uint64_t x196 = 46278788352LLU;
	volatile int32_t t48 = -767173;

	t48 = (x193*((x194^x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 380;

	t49 = (x197*((x198^x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static uint64_t x203 = 1578770483950LLU;
	volatile int64_t x204 = INT64_MAX;
	volatile int32_t t50 = 41748059;

	t50 = (x201*((x202^x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int8_t x208 = -2;

	t51 = (x205*((x206^x207)<=x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -41;
	int32_t x210 = -1;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -2992;

	t52 = (x209*((x210^x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -20;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -7;

	t53 = (x213*((x214^x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = -1;
	volatile uint64_t x219 = UINT64_MAX;
	int8_t x220 = -1;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x217*((x218^x219)<=x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	static int64_t x222 = INT64_MAX;
	static uint64_t x223 = UINT64_MAX;

	t55 = (x221*((x222^x223)<=x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 49U;
	int64_t x226 = INT64_MIN;
	static int32_t x227 = INT32_MIN;
	volatile uint32_t t56 = 1580U;

	t56 = (x225*((x226^x227)<=x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x231 = -1;
	int32_t t57 = 312;

	t57 = (x229*((x230^x231)<=x232));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	static int8_t x235 = -1;
	int8_t x236 = INT8_MAX;

	t58 = (x233*((x234^x235)<=x236));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x237 = 9U;
	uint8_t x238 = 2U;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 97;

	t59 = (x237*((x238^x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -1LL;
	int8_t x243 = INT8_MAX;
	static uint16_t x244 = 3U;
	int64_t t60 = INT64_MIN;

	t60 = (x241*((x242^x243)<=x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 0U;
	volatile int16_t x246 = INT16_MAX;
	int8_t x247 = -1;
	volatile int64_t x248 = -53062641231707164LL;
	volatile int32_t t61 = 6502436;

	t61 = (x245*((x246^x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	static int8_t x251 = -34;
	int32_t t62 = -21889;

	t62 = (x249*((x250^x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	volatile int32_t x255 = 136284;
	int16_t x256 = INT16_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x253*((x254^x255)<=x256));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	static uint32_t x260 = 13U;

	t64 = (x257*((x258^x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = 786620765875006LL;
	static int32_t x263 = 2752;
	volatile uint16_t x264 = UINT16_MAX;

	t65 = (x261*((x262^x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x267 = -1;
	int8_t x268 = -1;

	t66 = (x265*((x266^x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 2U;
	int32_t x270 = 1898;
	int8_t x271 = INT8_MIN;
	uint64_t x272 = 11668LLU;
	volatile uint32_t t67 = 730U;

	t67 = (x269*((x270^x271)<=x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	static int8_t x274 = INT8_MIN;
	int32_t x275 = 165;
	static int8_t x276 = INT8_MAX;
	int32_t t68 = INT32_MIN;

	t68 = (x273*((x274^x275)<=x276));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	int16_t x278 = -12651;
	uint8_t x279 = 12U;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x277*((x278^x279)<=x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int64_t x283 = -1LL;
	uint64_t x284 = 896LLU;
	int32_t t70 = 519670773;

	t70 = (x281*((x282^x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	static int32_t x286 = 935994914;
	volatile int32_t t71 = 315503153;

	t71 = (x285*((x286^x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = INT64_MIN;
	uint16_t x291 = UINT16_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t72 = -3394;

	t72 = (x289*((x290^x291)<=x292));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;
	volatile int64_t x295 = INT64_MIN;
	int32_t x296 = -1;
	volatile int64_t t73 = -138392627LL;

	t73 = (x293*((x294^x295)<=x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 163U;
	uint8_t x298 = 9U;
	int8_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = -6;

	t74 = (x297*((x298^x299)<=x300));

	if (t74 != 163) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	uint16_t x302 = 0U;
	volatile uint16_t x304 = 20278U;

	t75 = (x301*((x302^x303)<=x304));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	volatile int32_t x306 = INT32_MIN;
	static uint32_t x307 = 3U;
	int32_t x308 = -1;
	static volatile int32_t t76 = -407;

	t76 = (x305*((x306^x307)<=x308));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 3;
	uint32_t x310 = UINT32_MAX;
	volatile int64_t x311 = 143536776294309175LL;
	uint64_t x312 = UINT64_MAX;
	static int32_t t77 = 20;

	t77 = (x309*((x310^x311)<=x312));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1852;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t x316 = INT32_MIN;
	static int32_t t78 = 2406;

	t78 = (x313*((x314^x315)<=x316));

	if (t78 != -1852) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	static int64_t x318 = INT64_MIN;
	int8_t x319 = 0;
	static int32_t x320 = -14579754;

	t79 = (x317*((x318^x319)<=x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -39;
	uint8_t x323 = 53U;
	static uint32_t x324 = 2U;
	volatile int32_t t80 = 2517;

	t80 = (x321*((x322^x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 3238U;
	volatile int8_t x327 = INT8_MAX;
	volatile uint32_t x328 = UINT32_MAX;

	t81 = (x325*((x326^x327)<=x328));

	if (t81 != 3238) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 27279854U;
	volatile uint64_t x330 = 820195320851548LLU;
	uint32_t x332 = UINT32_MAX;
	uint32_t t82 = 69U;

	t82 = (x329*((x330^x331)<=x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 0U;
	volatile int64_t x335 = INT64_MAX;
	static int64_t t83 = 129687179343210LL;

	t83 = (x333*((x334^x335)<=x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	uint32_t x338 = 26U;
	uint16_t x339 = UINT16_MAX;
	static volatile int16_t x340 = INT16_MIN;
	int64_t t84 = INT64_MAX;

	t84 = (x337*((x338^x339)<=x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int64_t x342 = 3550LL;
	static int16_t x343 = INT16_MAX;
	volatile int32_t x344 = -484518;
	static int32_t t85 = 788742;

	t85 = (x341*((x342^x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	volatile int16_t x348 = INT16_MIN;

	t86 = (x345*((x346^x347)<=x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = -7;
	static int64_t x351 = INT64_MIN;
	static int16_t x352 = -1;
	static int32_t t87 = 42519;

	t87 = (x349*((x350^x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 14137141660LLU;
	int64_t x354 = 59LL;
	int16_t x355 = INT16_MIN;
	uint32_t x356 = 109531069U;
	uint64_t t88 = 15126693655202LLU;

	t88 = (x353*((x354^x355)<=x356));

	if (t88 != 14137141660LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = -1852079103670960399LL;
	static int8_t x358 = -1;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;

	t89 = (x357*((x358^x359)<=x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 61;
	volatile uint64_t x363 = 79005704480483LLU;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -7247;

	t90 = (x361*((x362^x363)<=x364));

	if (t90 != 61) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 4691055861813356976LLU;
	int16_t x366 = -1;
	static uint16_t x367 = 1U;
	uint32_t x368 = 394578878U;

	t91 = (x365*((x366^x367)<=x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = UINT16_MAX;
	uint8_t x370 = UINT8_MAX;
	volatile uint16_t x371 = 1U;
	volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -1040246;

	t92 = (x369*((x370^x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 5U;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MIN;
	int16_t x376 = 4;
	static volatile uint32_t t93 = 246U;

	t93 = (x373*((x374^x375)<=x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 36;
	int16_t x378 = INT16_MIN;
	static volatile int8_t x380 = -1;

	t94 = (x377*((x378^x379)<=x380));

	if (t94 != 36) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile int64_t x382 = INT64_MAX;
	int16_t x383 = -1;
	int32_t x384 = -1;
	volatile int32_t t95 = -1665048;

	t95 = (x381*((x382^x383)<=x384));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 767U;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = -7369;
	uint16_t x388 = 7U;
	static volatile int32_t t96 = 1;

	t96 = (x385*((x386^x387)<=x388));

	if (t96 != 767) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	int8_t x390 = 1;
	static volatile int16_t x391 = -1;
	int32_t t97 = -2656;

	t97 = (x389*((x390^x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1211LL;
	volatile int32_t x394 = 30;
	int16_t x395 = 1869;
	int8_t x396 = INT8_MIN;
	int64_t t98 = -97282453LL;

	t98 = (x393*((x394^x395)<=x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int64_t x398 = -2933903160LL;
	int32_t t99 = 21929;

	t99 = (x397*((x398^x399)<=x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

