#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 1782;
int16_t x11 = INT16_MIN;
int32_t x16 = 740;
static volatile uint64_t x23 = UINT64_MAX;
volatile int64_t t6 = 50809915904863LL;
static int16_t x33 = INT16_MIN;
int16_t x35 = INT16_MAX;
uint64_t t9 = 1086224168645336LLU;
uint32_t x44 = UINT32_MAX;
uint32_t t10 = UINT32_MAX;
int32_t x45 = -1;
uint8_t x50 = 4U;
int32_t x54 = 1;
int32_t t13 = INT32_MIN;
int32_t x59 = 12;
static int64_t x60 = 33914621LL;
int32_t x63 = -73672156;
volatile int32_t t15 = -274;
static volatile int8_t x66 = -3;
int64_t t17 = INT64_MIN;
volatile int64_t x73 = INT64_MIN;
int16_t x77 = INT16_MAX;
uint64_t t21 = 12904023LLU;
uint64_t t22 = 16569298LLU;
volatile uint8_t x95 = 7U;
volatile int64_t t23 = 794LL;
uint8_t x97 = 126U;
int8_t x99 = INT8_MIN;
int8_t x101 = 30;
uint32_t x102 = 396903003U;
int64_t x106 = INT64_MAX;
int32_t x111 = -2162;
volatile int32_t x112 = INT32_MAX;
int64_t x116 = INT64_MIN;
volatile int32_t x127 = INT32_MAX;
static uint16_t x128 = 0U;
volatile int64_t t31 = 3488303LL;
uint32_t x134 = 565244060U;
int64_t t34 = 5470070LL;
int64_t x147 = -634343065LL;
int64_t x149 = -180905753346896LL;
volatile int64_t x150 = -54254608LL;
int8_t x155 = INT8_MAX;
int32_t x162 = INT32_MAX;
int16_t x166 = -1;
int16_t x173 = -1;
static uint8_t x175 = 6U;
volatile int32_t t43 = 490010;
volatile int64_t t45 = -20677045LL;
uint64_t x195 = 826290LLU;
int8_t x198 = -1;
uint32_t x201 = 1182U;
volatile uint32_t x203 = 30043U;
volatile int32_t x213 = -22;
int64_t x214 = -136529143444587334LL;
int8_t x216 = INT8_MAX;
int64_t t53 = -644843836LL;
static uint16_t x218 = UINT16_MAX;
uint8_t x221 = UINT8_MAX;
int64_t x229 = -33502252283773LL;
volatile int32_t x232 = INT32_MAX;
static volatile int16_t x234 = INT16_MIN;
static volatile int16_t x236 = -1;
int16_t x239 = INT16_MAX;
volatile int16_t x248 = INT16_MAX;
volatile int64_t t61 = -978341636601LL;
static int16_t x250 = INT16_MIN;
uint8_t x255 = 1U;
uint16_t x258 = 841U;
volatile int64_t x259 = INT64_MIN;
volatile int64_t x267 = INT64_MAX;
static int32_t x271 = INT32_MIN;
int8_t x273 = 0;
volatile int64_t x283 = 3501024LL;
int16_t x288 = INT16_MAX;
static volatile int64_t t71 = 186178876385LL;
uint32_t t74 = 2707U;
uint8_t x306 = 29U;
static uint32_t x307 = 224U;
int32_t x308 = INT32_MIN;
int64_t x313 = -1LL;
uint8_t x321 = 125U;
uint8_t x329 = 38U;
static int16_t x330 = 38;
volatile uint64_t x341 = 56730LLU;
int8_t x343 = INT8_MAX;
static int32_t t85 = -1;
uint16_t x354 = UINT16_MAX;
volatile uint32_t t87 = UINT32_MAX;
static volatile int16_t x365 = -106;
int16_t x367 = INT16_MIN;
uint64_t x368 = 2713LLU;
volatile uint64_t t91 = 523726411LLU;
static int32_t x374 = 54;
static volatile int64_t t93 = 3541996954042773LL;
int16_t x391 = 0;
uint64_t x400 = 14LLU;
uint64_t t98 = 21023310LLU;
static uint8_t x402 = 23U;


void f0(void) {
	int16_t x1 = -1;
	int16_t x2 = INT16_MIN;
	volatile int32_t x3 = -1;
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1/(x2^x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	uint8_t x7 = 1U;
	int16_t x8 = -8186;
	volatile int64_t t1 = -3983984379137LL;

	t1 = ((x5/(x6^x7))|x8);

	if (t1 != -8186LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint16_t x10 = 102U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -1323489;

	t2 = ((x9/(x10^x11))|x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int16_t x14 = -1;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 3515;

	t3 = ((x13/(x14^x15))|x16);

	if (t3 != 740) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	uint32_t x18 = UINT32_MAX;
	static uint64_t x19 = 55035113097147LLU;
	int16_t x20 = -1;
	uint64_t t4 = UINT64_MAX;

	t4 = ((x17/(x18^x19))|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int8_t x22 = 0;
	static int16_t x24 = 5594;
	uint64_t t5 = 72460300LLU;

	t5 = ((x21/(x22^x23))|x24);

	if (t5 != 5595LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = -4037;
	int32_t x27 = INT32_MIN;
	volatile uint16_t x28 = UINT16_MAX;

	t6 = ((x25/(x26^x27))|x28);

	if (t6 != -4294967297LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile uint32_t x30 = UINT32_MAX;
	int32_t x31 = 249205218;
	static int32_t x32 = INT32_MIN;
	uint32_t t7 = 27671351U;

	t7 = ((x29/(x30^x31))|x32);

	if (t7 != 2147483649U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 436879159U;
	int16_t x36 = -1;
	uint32_t t8 = UINT32_MAX;

	t8 = ((x33/(x34^x35))|x36);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	int8_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	static volatile int16_t x40 = INT16_MIN;

	t9 = ((x37/(x38^x39))|x40);

	if (t9 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 181U;
	int32_t x43 = 37773;

	t10 = ((x41/(x42^x43))|x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	static int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	static int64_t t11 = 9793LL;

	t11 = ((x45/(x46^x47))|x48);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 29;
	int8_t x51 = INT8_MAX;
	uint64_t x52 = 6138517172LLU;
	volatile uint64_t t12 = 4590508367LLU;

	t12 = ((x49/(x50^x51))|x52);

	if (t12 != 6138517172LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MIN;

	t13 = ((x53/(x54^x55))|x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int64_t t14 = -69875655557626LL;

	t14 = ((x57/(x58^x59))|x60);

	if (t14 != 33914621LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	uint8_t x64 = 2U;

	t15 = ((x61/(x62^x63))|x64);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x67 = INT16_MAX;
	int8_t x68 = INT8_MAX;
	volatile uint32_t t16 = 101359U;

	t16 = ((x65/(x66^x67))|x68);

	if (t16 != 127U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = -539;
	int64_t x72 = INT64_MIN;

	t17 = ((x69/(x70^x71))|x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 4322887596094844941LLU;
	int64_t x75 = INT64_MAX;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t18 = 29291477775353LLU;

	t18 = ((x73/(x74^x75))|x76);

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = -440665060;
	uint8_t x79 = 34U;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 25;

	t19 = ((x77/(x78^x79))|x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 3629536859LLU;
	volatile uint64_t t20 = 6122346904739LLU;

	t20 = ((x81/(x82^x83))|x84);

	if (t20 != 3629536859LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 49059U;
	static int16_t x86 = 0;
	int16_t x87 = 3247;
	uint64_t x88 = 250LLU;

	t21 = ((x85/(x86^x87))|x88);

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	uint16_t x90 = 696U;
	int16_t x91 = 2;
	volatile uint64_t x92 = 414520642LLU;

	t22 = ((x89/(x90^x91))|x92);

	if (t22 != 13214000463846746LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x94 = INT32_MIN;
	int64_t x96 = -9691800LL;

	t23 = ((x93/(x94^x95))|x96);

	if (t23 != -9691800LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = -1LL;
	uint64_t x100 = 153231LLU;
	volatile uint64_t t24 = 173691232093LLU;

	t24 = ((x97/(x98^x99))|x100);

	if (t24 != 153231LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = 1U;
	volatile uint32_t t25 = 246036U;

	t25 = ((x101/(x102^x103))|x104);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	static volatile uint64_t x107 = 1008222489LLU;
	static int64_t x108 = 62397909306LL;
	uint64_t t26 = 247145679767LLU;

	t26 = ((x105/(x106^x107))|x108);

	if (t26 != 62397909307LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MAX;
	volatile int64_t t27 = 109323LL;

	t27 = ((x109/(x110^x111))|x112);

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int64_t x114 = 1272697098120049534LL;
	int32_t x115 = -1;
	static int64_t t28 = INT64_MIN;

	t28 = ((x113/(x114^x115))|x116);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 14335;
	volatile int64_t x118 = INT64_MAX;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	static int64_t t29 = 0LL;

	t29 = ((x117/(x118^x119))|x120);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	static uint32_t x124 = 6984U;
	volatile uint32_t t30 = 11813050U;

	t30 = ((x121/(x122^x123))|x124);

	if (t30 != 6985U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 160864192742135819LL;
	volatile int8_t x126 = -42;

	t31 = ((x125/(x126^x127))|x128);

	if (t31 != -74908228LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = 5764608974901LL;
	int64_t x131 = INT64_MIN;
	int8_t x132 = 15;
	static volatile int64_t t32 = 115LL;

	t32 = ((x129/(x130^x131))|x132);

	if (t32 != 15LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	volatile int16_t x135 = -1;
	int16_t x136 = -371;
	volatile int64_t t33 = 137452678LL;

	t33 = ((x133/(x134^x135))|x136);

	if (t33 != -291LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1387;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	volatile uint8_t x140 = 0U;

	t34 = ((x137/(x138^x139))|x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint32_t x142 = 551129056U;
	volatile uint64_t x143 = 757965919LLU;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t35 = 2549LLU;

	t35 = ((x141/(x142^x143))|x144);

	if (t35 != 9223372115651391623LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 14675;
	uint16_t x146 = 32U;
	int32_t x148 = -1383812;
	int64_t t36 = -263297697649324LL;

	t36 = ((x145/(x146^x147))|x148);

	if (t36 != -1383812LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x151 = 372795978346941823LLU;
	int8_t x152 = -1;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x149/(x150^x151))|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = UINT64_MAX;
	static uint32_t x156 = UINT32_MAX;
	volatile uint64_t t38 = 15554160LLU;

	t38 = ((x153/(x154^x155))|x156);

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -9;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -7;
	volatile int8_t x160 = INT8_MAX;
	static int64_t t39 = -2787244LL;

	t39 = ((x157/(x158^x159))|x160);

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1126503391LLU;
	static uint16_t x163 = 35U;
	uint8_t x164 = UINT8_MAX;
	uint64_t t40 = 21826450LLU;

	t40 = ((x161/(x162^x163))|x164);

	if (t40 != 255LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 25359862LLU;
	int16_t x167 = -726;
	int16_t x168 = INT16_MIN;
	uint64_t t41 = 824436161616LLU;

	t41 = ((x165/(x166^x167))|x168);

	if (t41 != 18446744073709521059LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	uint8_t x170 = 18U;
	int64_t x171 = INT64_MAX;
	uint16_t x172 = 0U;
	volatile int64_t t42 = -4LL;

	t42 = ((x169/(x170^x171))|x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -22;
	int16_t x176 = 5228;

	t43 = ((x173/(x174^x175))|x176);

	if (t43 != 5228) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static uint16_t x178 = 1U;
	volatile uint64_t x179 = 8382LLU;
	volatile uint32_t x180 = UINT32_MAX;
	static volatile uint64_t t44 = 6632986008453449440LLU;

	t44 = ((x177/(x178^x179))|x180);

	if (t44 != 2200496429334527LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int64_t x182 = -8215698LL;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;

	t45 = ((x181/(x182^x183))|x184);

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 2146894864296423LL;
	int32_t x186 = INT32_MIN;
	static volatile uint8_t x187 = 0U;
	int16_t x188 = INT16_MAX;
	static int64_t t46 = 1LL;

	t46 = ((x185/(x186^x187))|x188);

	if (t46 != -983041LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -119;
	static volatile int8_t x190 = INT8_MIN;
	volatile int8_t x191 = INT8_MAX;
	static int16_t x192 = 2;
	volatile int32_t t47 = 1416676;

	t47 = ((x189/(x190^x191))|x192);

	if (t47 != 119) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x194 = UINT8_MAX;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193/(x194^x195))|x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	int64_t x199 = INT64_MAX;
	volatile int8_t x200 = INT8_MAX;
	int64_t t49 = -1LL;

	t49 = ((x197/(x198^x199))|x200);

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = -1LL;
	static int32_t x204 = INT32_MAX;
	volatile int64_t t50 = 44LL;

	t50 = ((x201/(x202^x203))|x204);

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = -3;
	uint8_t x208 = 10U;
	int64_t t51 = -2LL;

	t51 = ((x205/(x206^x207))|x208);

	if (t51 != 10LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = -14;
	volatile int8_t x211 = INT8_MIN;
	uint8_t x212 = 4U;
	int32_t t52 = 38727;

	t52 = ((x209/(x210^x211))|x212);

	if (t52 != 574) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x215 = UINT16_MAX;

	t53 = ((x213/(x214^x215))|x216);

	if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x219 = 664882123180LLU;
	uint64_t x220 = 404878506LLU;
	uint64_t t54 = 1344LLU;

	t54 = ((x217/(x218^x219))|x220);

	if (t54 != 430439678LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x222 = UINT64_MAX;
	int32_t x223 = -28998;
	static uint16_t x224 = UINT16_MAX;
	volatile uint64_t t55 = 410366355764357248LLU;

	t55 = ((x221/(x222^x223))|x224);

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = -1;
	uint8_t x227 = 1U;
	static uint16_t x228 = UINT16_MAX;
	int32_t t56 = 0;

	t56 = ((x225/(x226^x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x230 = 61353729U;
	uint64_t x231 = 1027355305146176140LLU;
	volatile uint64_t t57 = 7837139779382364LLU;

	t57 = ((x229/(x230^x231))|x232);

	if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -16;
	int32_t x235 = INT32_MIN;
	int32_t t58 = 27;

	t58 = ((x233/(x234^x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1897025514533LLU;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	uint64_t t59 = 40215LLU;

	t59 = ((x237/(x238^x239))|x240);

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 540829810U;
	int16_t x244 = 1452;
	uint32_t t60 = 293220U;

	t60 = ((x241/(x242^x243))|x244);

	if (t60 != 1452U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = 72298207124030212LL;
	static uint16_t x246 = UINT16_MAX;
	volatile uint16_t x247 = 9483U;

	t61 = ((x245/(x246^x247))|x248);

	if (t61 != 1289841704959LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	int32_t x251 = -1;
	volatile int16_t x252 = 332;
	int32_t t62 = -707011688;

	t62 = ((x249/(x250^x251))|x252);

	if (t62 != 332) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	static int32_t x254 = INT32_MAX;
	static int32_t x256 = INT32_MAX;
	volatile int32_t t63 = INT32_MAX;

	t63 = ((x253/(x254^x255))|x256);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MAX;
	volatile uint64_t x260 = 222607206414409LLU;
	static uint64_t t64 = 238797639776770LLU;

	t64 = ((x257/(x258^x259))|x260);

	if (t64 != 222607206414409LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -184;
	volatile uint8_t x262 = 0U;
	static uint64_t x263 = 94663624LLU;
	int8_t x264 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x261/(x262^x263))|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 1618;
	int16_t x266 = -1;
	uint32_t x268 = 970226486U;
	volatile int64_t t66 = 5229081546460519LL;

	t66 = ((x265/(x266^x267))|x268);

	if (t66 != 970226486LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -3;
	int8_t x270 = INT8_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t67 = INT32_MIN;

	t67 = ((x269/(x270^x271))|x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MAX;
	volatile int64_t x275 = -49497738779LL;
	static int8_t x276 = 54;
	volatile int64_t t68 = 54580395864605822LL;

	t68 = ((x273/(x274^x275))|x276);

	if (t68 != 54LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = -475841498LL;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = -1LL;
	uint64_t t69 = UINT64_MAX;

	t69 = ((x277/(x278^x279))|x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = 12498091434710671LLU;
	int64_t x284 = INT64_MIN;
	uint64_t t70 = 69573LLU;

	t70 = ((x281/(x282^x283))|x284);

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MAX;

	t71 = ((x285/(x286^x287))|x288);

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 2124U;
	uint16_t x290 = 70U;
	int16_t x291 = 6;
	int32_t x292 = 1190137;
	int32_t t72 = 2708;

	t72 = ((x289/(x290^x291))|x292);

	if (t72 != 1190137) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 151582U;
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = -1;
	volatile int64_t t73 = 15495097LL;

	t73 = ((x293/(x294^x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 5U;
	static uint16_t x298 = 366U;
	int16_t x299 = -13630;
	uint16_t x300 = 983U;

	t74 = ((x297/(x298^x299))|x300);

	if (t74 != 983U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x305 = UINT64_MAX;
	uint64_t t75 = 810337504788217891LLU;

	t75 = ((x305/(x306^x307))|x308);

	if (t75 != 18446744072937136548LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 0;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	uint64_t t76 = UINT64_MAX;

	t76 = ((x309/(x310^x311))|x312);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x313/(x314^x315))|x316);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x317 = UINT32_MAX;
	static volatile int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	uint8_t x320 = UINT8_MAX;
	int64_t t78 = 287276LL;

	t78 = ((x317/(x318^x319))|x320);

	if (t78 != 255LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x322 = 223214LLU;
	int32_t x323 = INT32_MIN;
	int32_t x324 = -1;
	static uint64_t t79 = UINT64_MAX;

	t79 = ((x321/(x322^x323))|x324);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x325 = INT32_MIN;
	uint32_t x326 = 444409842U;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MAX;
	int64_t t80 = INT64_MAX;

	t80 = ((x325/(x326^x327))|x328);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x331 = 19LLU;
	int8_t x332 = INT8_MIN;
	static uint64_t t81 = 7976166LLU;

	t81 = ((x329/(x330^x331))|x332);

	if (t81 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = 12;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	volatile uint32_t t82 = 81572212U;

	t82 = ((x333/(x334^x335))|x336);

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = 6008U;
	volatile uint16_t x338 = 1U;
	uint32_t x339 = 402106724U;
	int8_t x340 = 10;
	static volatile uint32_t t83 = 363217617U;

	t83 = ((x337/(x338^x339))|x340);

	if (t83 != 10U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x342 = UINT16_MAX;
	int8_t x344 = -11;
	uint64_t t84 = 339LLU;

	t84 = ((x341/(x342^x343))|x344);

	if (t84 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x345 = INT16_MIN;
	int32_t x346 = 569;
	int32_t x347 = INT32_MIN;
	int16_t x348 = 3;

	t85 = ((x345/(x346^x347))|x348);

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x350 = INT32_MIN;
	static uint32_t x351 = 16156U;
	int64_t x352 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = ((x349/(x350^x351))|x352);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = 3;
	static uint16_t x355 = 119U;
	uint32_t x356 = UINT32_MAX;

	t87 = ((x353/(x354^x355))|x356);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = 14LL;
	static uint64_t x358 = 1492794390364123LLU;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 6312U;
	uint64_t t88 = 133468593797LLU;

	t88 = ((x357/(x358^x359))|x360);

	if (t88 != 6312LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x361 = 1;
	volatile uint32_t x362 = UINT32_MAX;
	uint64_t x363 = UINT64_MAX;
	uint8_t x364 = 4U;
	volatile uint64_t t89 = 1272075026612956178LLU;

	t89 = ((x361/(x362^x363))|x364);

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x366 = 100LL;
	volatile uint64_t t90 = 25924995LLU;

	t90 = ((x365/(x366^x367))|x368);

	if (t90 != 2713LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MAX;
	uint8_t x371 = 10U;
	int8_t x372 = 4;

	t91 = ((x369/(x370^x371))|x372);

	if (t91 != 6LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = -2731581386682107LL;
	volatile int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	int64_t t92 = 551901LL;

	t92 = ((x373/(x374^x375))|x376);

	if (t92 != -22124LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -3883048886364353724LL;
	static uint8_t x378 = 0U;
	int16_t x379 = -1;
	int32_t x380 = 11;

	t93 = ((x377/(x378^x379))|x380);

	if (t93 != 3883048886364353727LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = 0;
	static int64_t x382 = -1LL;
	int16_t x383 = INT16_MIN;
	int32_t x384 = -21141839;
	volatile int64_t t94 = -916935LL;

	t94 = ((x381/(x382^x383))|x384);

	if (t94 != -21141839LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x385 = 20;
	uint32_t x386 = UINT32_MAX;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t95 = 517U;

	t95 = ((x385/(x386^x387))|x388);

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x389 = 10U;
	volatile int32_t x390 = -1;
	int32_t x392 = INT32_MIN;
	static int32_t t96 = 91949;

	t96 = ((x389/(x390^x391))|x392);

	if (t96 != -10) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = 13;
	int32_t x394 = INT32_MIN;
	int16_t x395 = -7;
	volatile uint64_t x396 = 102442LLU;
	volatile uint64_t t97 = 1466596LLU;

	t97 = ((x393/(x394^x395))|x396);

	if (t97 != 102442LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x397 = 1441700LLU;
	int8_t x398 = -7;
	int8_t x399 = -1;

	t98 = ((x397/(x398^x399))|x400);

	if (t98 != 240287LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x401 = -1;
	static int8_t x403 = 1;
	static int64_t x404 = -31467136260758LL;
	int64_t t99 = -96107LL;

	t99 = ((x401/(x402^x403))|x404);

	if (t99 != -31467136260758LL) { NG(); } else { ; }
	
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

