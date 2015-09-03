#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int16_t x4 = INT16_MIN;
volatile int32_t t0 = -3444;
uint64_t x13 = 282555134LLU;
volatile int64_t x16 = INT64_MIN;
int32_t x17 = -1;
int16_t x19 = INT16_MAX;
uint32_t t4 = 150U;
static volatile int64_t x21 = INT64_MAX;
int8_t x25 = INT8_MIN;
int32_t x27 = 8769941;
int8_t x34 = -1;
int32_t t9 = 927;
int64_t x41 = 1099425636380LL;
volatile uint64_t x44 = 70628243227646038LLU;
static int64_t x49 = INT64_MIN;
static int64_t x50 = INT64_MIN;
static int16_t x55 = INT16_MAX;
volatile int32_t t13 = INT32_MAX;
static int64_t x58 = INT64_MIN;
int32_t x90 = -1;
int16_t x93 = -1;
int16_t x95 = -1;
volatile uint64_t x99 = UINT64_MAX;
int16_t x107 = 8;
int8_t x109 = -1;
int8_t x114 = INT8_MIN;
int16_t x118 = 107;
uint64_t x123 = 6250LLU;
uint16_t x126 = 1010U;
int16_t x128 = INT16_MIN;
int32_t t31 = 3;
int16_t x131 = INT16_MIN;
static volatile int32_t t32 = -46941640;
static int32_t x137 = 8566942;
static uint32_t x138 = 0U;
volatile int32_t x140 = -9100;
volatile int32_t t34 = 2210;
volatile int32_t t35 = 15979;
volatile int64_t t36 = -832645729192759LL;
int16_t x153 = INT16_MAX;
static uint32_t x156 = 6297921U;
volatile uint32_t t38 = 579U;
static int8_t x157 = 13;
uint64_t x158 = 10646724635292LLU;
volatile uint16_t x161 = 203U;
volatile int16_t x163 = INT16_MAX;
static volatile int64_t x167 = 420518777024LL;
int64_t x168 = 14851958471LL;
static uint32_t x173 = 1265U;
int32_t t44 = 15789;
int32_t t45 = -1636635;
uint8_t x186 = 33U;
int64_t x188 = -1LL;
int8_t x191 = -7;
volatile int32_t t52 = 200249827;
int64_t x216 = -1LL;
volatile int64_t t53 = 4772287115990648LL;
int32_t x223 = INT32_MAX;
int16_t x227 = -346;
volatile int64_t x231 = INT64_MAX;
uint16_t x241 = 1U;
int32_t x242 = INT32_MIN;
int16_t x249 = INT16_MIN;
int32_t x251 = -1;
int32_t x253 = INT32_MIN;
int32_t x262 = 14941950;
int32_t x263 = INT32_MIN;
uint32_t t66 = 10U;
static int64_t x271 = -1LL;
static uint64_t x272 = 11LLU;
int8_t x275 = -1;
uint32_t t68 = 895644360U;
int32_t x283 = INT32_MIN;
volatile int64_t t70 = 250298588LL;
volatile int64_t t71 = -935LL;
uint16_t x289 = 383U;
volatile int32_t t72 = INT32_MAX;
volatile int8_t x293 = -21;
static int64_t x299 = INT64_MIN;
uint16_t x305 = UINT16_MAX;
volatile int64_t t76 = -161LL;
static uint32_t x309 = 15646496U;
volatile uint8_t x324 = UINT8_MAX;
int32_t t80 = 1;
static uint32_t x325 = 2053U;
volatile uint64_t t82 = 559017141829065575LLU;
volatile int8_t x335 = INT8_MIN;
int32_t x341 = INT32_MAX;
int8_t x345 = -1;
volatile int16_t x353 = -1;
volatile uint16_t x364 = 521U;
volatile int32_t x367 = INT32_MAX;
int8_t x369 = INT8_MAX;
volatile int64_t t93 = 1134901003318418632LL;
int16_t x378 = 1;
int64_t t94 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint8_t x3 = UINT8_MAX;

	t0 = (((x1==x2)&x3)^x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int16_t x6 = 103;
	int64_t x7 = 356049284769799LL;
	uint16_t x8 = 261U;
	static int64_t t1 = -327LL;

	t1 = (((x5==x6)&x7)^x8);

	if (t1 != 261LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1U;
	int16_t x10 = INT16_MAX;
	static uint8_t x11 = UINT8_MAX;
	uint32_t x12 = 7484U;
	volatile uint32_t t2 = 41U;

	t2 = (((x9==x10)&x11)^x12);

	if (t2 != 7484U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 1912910035U;
	uint8_t x15 = UINT8_MAX;
	int64_t t3 = INT64_MIN;

	t3 = (((x13==x14)&x15)^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -90232;
	static uint32_t x20 = 17U;

	t4 = (((x17==x18)&x19)^x20);

	if (t4 != 17U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	int64_t x23 = -1LL;
	int64_t x24 = INT64_MIN;
	int64_t t5 = INT64_MIN;

	t5 = (((x21==x22)&x23)^x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	int64_t x28 = INT64_MAX;
	int64_t t6 = INT64_MAX;

	t6 = (((x25==x26)&x27)^x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = -1;
	int16_t x31 = -1;
	static uint16_t x32 = 4397U;
	static volatile int32_t t7 = -1;

	t7 = (((x29==x30)&x31)^x32);

	if (t7 != 4396) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 88U;
	static int64_t x35 = INT64_MIN;
	int64_t x36 = -68342317992LL;
	static volatile int64_t t8 = 553161997LL;

	t8 = (((x33==x34)&x35)^x36);

	if (t8 != -68342317992LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	static int16_t x38 = INT16_MIN;
	uint16_t x39 = 6965U;
	int16_t x40 = INT16_MIN;

	t9 = (((x37==x38)&x39)^x40);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	int64_t x43 = 10334LL;
	volatile uint64_t t10 = 42363319502LLU;

	t10 = (((x41==x42)&x43)^x44);

	if (t10 != 70628243227646038LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 260554699U;
	int32_t x46 = 30942;
	int32_t x47 = -4178;
	volatile int32_t x48 = INT32_MIN;
	static int32_t t11 = INT32_MIN;

	t11 = (((x45==x46)&x47)^x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x51 = 413;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 509384763;

	t12 = (((x49==x50)&x51)^x52);

	if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 0U;
	uint32_t x54 = 279U;
	int32_t x56 = INT32_MAX;

	t13 = (((x53==x54)&x55)^x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x59 = -1;
	int32_t x60 = 62310520;
	volatile int32_t t14 = 2171;

	t14 = (((x57==x58)&x59)^x60);

	if (t14 != 62310520) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 5U;
	volatile int32_t x62 = -1;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -678026739;

	t15 = (((x61==x62)&x63)^x64);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MIN;
	uint16_t x67 = 8U;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = 41;

	t16 = (((x65==x66)&x67)^x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	volatile uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	static int8_t x72 = -1;
	volatile int32_t t17 = -2;

	t17 = (((x69==x70)&x71)^x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 3608894LLU;
	uint64_t x74 = 22935921056142404LLU;
	uint16_t x75 = 978U;
	static volatile uint64_t x76 = 842340LLU;
	static uint64_t t18 = 8832745315916LLU;

	t18 = (((x73==x74)&x75)^x76);

	if (t18 != 842340LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 7U;
	static int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = 62U;
	int32_t x80 = -1;
	int32_t t19 = -944;

	t19 = (((x77==x78)&x79)^x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -4773;
	int16_t x82 = 398;
	int8_t x83 = INT8_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 735456091;

	t20 = (((x81==x82)&x83)^x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -6147;
	int64_t x86 = 16096508592LL;
	static uint8_t x87 = UINT8_MAX;
	static uint8_t x88 = UINT8_MAX;
	int32_t t21 = 11883;

	t21 = (((x85==x86)&x87)^x88);

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 31;
	int16_t x91 = -1;
	int16_t x92 = -724;
	int32_t t22 = -633931;

	t22 = (((x89==x90)&x91)^x92);

	if (t22 != -724) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 0U;
	int32_t x96 = INT32_MAX;
	int32_t t23 = INT32_MAX;

	t23 = (((x93==x94)&x95)^x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	static volatile uint64_t x100 = 21LLU;
	uint64_t t24 = 9295516937156LLU;

	t24 = (((x97==x98)&x99)^x100);

	if (t24 != 21LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 63;
	static uint64_t x102 = 522264200975241LLU;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -5089711;

	t25 = (((x101==x102)&x103)^x104);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	static int8_t x106 = -1;
	uint64_t x108 = 879165324590LLU;
	uint64_t t26 = 4LLU;

	t26 = (((x105==x106)&x107)^x108);

	if (t26 != 879165324590LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 84026U;
	int16_t x112 = INT16_MIN;
	volatile uint32_t t27 = 786U;

	t27 = (((x109==x110)&x111)^x112);

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = 1;
	int32_t t28 = -5703574;

	t28 = (((x113==x114)&x115)^x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = INT32_MIN;

	t29 = (((x117==x118)&x119)^x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x122 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	uint64_t t30 = 18648LLU;

	t30 = (((x121==x122)&x123)^x124);

	if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x127 = INT32_MAX;

	t31 = (((x125==x126)&x127)^x128);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 107U;
	int8_t x130 = INT8_MAX;
	volatile int8_t x132 = INT8_MAX;

	t32 = (((x129==x130)&x131)^x132);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 157461U;
	int16_t x136 = INT16_MIN;
	uint32_t t33 = 611041U;

	t33 = (((x133==x134)&x135)^x136);

	if (t33 != 4294934528U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x139 = INT32_MIN;

	t34 = (((x137==x138)&x139)^x140);

	if (t34 != -9100) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint32_t x142 = 5574U;
	uint8_t x143 = 105U;
	uint8_t x144 = 0U;

	t35 = (((x141==x142)&x143)^x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int64_t x146 = -12611493335562578LL;
	int64_t x147 = INT64_MAX;
	int8_t x148 = INT8_MIN;

	t36 = (((x145==x146)&x147)^x148);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	volatile int64_t x151 = 2671231550LL;
	int8_t x152 = INT8_MAX;
	int64_t t37 = -229831913980561052LL;

	t37 = (((x149==x150)&x151)^x152);

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	uint16_t x155 = 0U;

	t38 = (((x153==x154)&x155)^x156);

	if (t38 != 6297921U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x159 = 931U;
	int32_t x160 = INT32_MIN;
	int32_t t39 = INT32_MIN;

	t39 = (((x157==x158)&x159)^x160);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x162 = 0;
	uint16_t x164 = 39U;
	static volatile int32_t t40 = -3;

	t40 = (((x161==x162)&x163)^x164);

	if (t40 != 39) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	uint32_t x166 = 569U;
	volatile int64_t t41 = 5237171LL;

	t41 = (((x165==x166)&x167)^x168);

	if (t41 != 14851958471LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = 1468;
	uint64_t x171 = 59141289002098204LLU;
	static int16_t x172 = -1;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x169==x170)&x171)^x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = 141;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 3639;

	t43 = (((x173==x174)&x175)^x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = UINT8_MAX;

	t44 = (((x177==x178)&x179)^x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 1;
	static uint64_t x182 = 378904959718LLU;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = -1;

	t45 = (((x181==x182)&x183)^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 6;
	uint64_t x187 = 421152076797353LLU;
	static uint64_t t46 = UINT64_MAX;

	t46 = (((x185==x186)&x187)^x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	static int64_t x190 = INT64_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t47 = 67;

	t47 = (((x189==x190)&x191)^x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 289033U;
	int16_t x194 = INT16_MIN;
	volatile int32_t x195 = -1;
	int8_t x196 = INT8_MAX;
	static int32_t t48 = -244836;

	t48 = (((x193==x194)&x195)^x196);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;
	static volatile int64_t t49 = -49456755622982625LL;

	t49 = (((x197==x198)&x199)^x200);

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 347777U;
	volatile int32_t x202 = -9630390;
	int32_t x203 = -18;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 61686;

	t50 = (((x201==x202)&x203)^x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = 3U;
	int64_t x207 = -105LL;
	uint32_t x208 = UINT32_MAX;
	static int64_t t51 = -2465811503311932LL;

	t51 = (((x205==x206)&x207)^x208);

	if (t51 != 4294967295LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 858836LLU;
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = 254U;

	t52 = (((x209==x210)&x211)^x212);

	if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 186782879;
	int32_t x214 = -1;
	volatile uint32_t x215 = 31450U;

	t53 = (((x213==x214)&x215)^x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	static int16_t x218 = INT16_MIN;
	int8_t x219 = -3;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (((x217==x218)&x219)^x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = (((x221==x222)&x223)^x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	volatile uint64_t x228 = 42316506531272LLU;
	static volatile uint64_t t56 = 3934474844805070LLU;

	t56 = (((x225==x226)&x227)^x228);

	if (t56 != 42316506531272LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -3500;
	static int32_t x230 = INT32_MIN;
	uint32_t x232 = 251749U;
	int64_t t57 = -14579910693276LL;

	t57 = (((x229==x230)&x231)^x232);

	if (t57 != 251749LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	static int16_t x234 = INT16_MIN;
	volatile uint16_t x235 = UINT16_MAX;
	int16_t x236 = -1;
	int32_t t58 = 0;

	t58 = (((x233==x234)&x235)^x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static int8_t x238 = -1;
	static uint64_t x239 = UINT64_MAX;
	volatile int16_t x240 = -1;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x237==x238)&x239)^x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x243 = UINT32_MAX;
	int64_t x244 = 14533379807LL;
	volatile int64_t t60 = 990103LL;

	t60 = (((x241==x242)&x243)^x244);

	if (t60 != 14533379807LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MAX;
	static volatile int16_t x246 = 0;
	uint32_t x247 = 104U;
	int8_t x248 = INT8_MIN;
	uint32_t t61 = 125076891U;

	t61 = (((x245==x246)&x247)^x248);

	if (t61 != 4294967168U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	volatile uint64_t x252 = UINT64_MAX;
	uint64_t t62 = UINT64_MAX;

	t62 = (((x249==x250)&x251)^x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = 46U;
	uint16_t x255 = 1U;
	uint8_t x256 = 102U;
	int32_t t63 = -47933;

	t63 = (((x253==x254)&x255)^x256);

	if (t63 != 102) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -1;
	uint16_t x258 = 3U;
	int32_t x259 = -1;
	uint8_t x260 = 28U;
	volatile int32_t t64 = -178314681;

	t64 = (((x257==x258)&x259)^x260);

	if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	static volatile int32_t x264 = 12779100;
	static volatile int32_t t65 = -20216342;

	t65 = (((x261==x262)&x263)^x264);

	if (t65 != 12779100) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint16_t x266 = 8U;
	uint32_t x267 = 5380495U;
	int8_t x268 = 1;

	t66 = (((x265==x266)&x267)^x268);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -23148153LL;
	int64_t x270 = INT64_MAX;
	volatile uint64_t t67 = 7907980LLU;

	t67 = (((x269==x270)&x271)^x272);

	if (t67 != 11LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 19U;
	int8_t x274 = -1;
	uint32_t x276 = 240183264U;

	t68 = (((x273==x274)&x275)^x276);

	if (t68 != 240183264U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = 0;
	int64_t x278 = INT64_MIN;
	uint8_t x279 = 21U;
	static int64_t x280 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (((x277==x278)&x279)^x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x284 = -1LL;

	t70 = (((x281==x282)&x283)^x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 85844LLU;
	static int32_t x286 = INT32_MAX;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -24900LL;

	t71 = (((x285==x286)&x287)^x288);

	if (t71 != -24900LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = -18571LL;
	int16_t x291 = INT16_MIN;
	static int32_t x292 = INT32_MAX;

	t72 = (((x289==x290)&x291)^x292);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	volatile int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	volatile int32_t t73 = 19413;

	t73 = (((x293==x294)&x295)^x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int16_t x298 = 0;
	int8_t x300 = 15;
	volatile int64_t t74 = -11944716LL;

	t74 = (((x297==x298)&x299)^x300);

	if (t74 != 15LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -1;
	volatile uint64_t x302 = 406281480LLU;
	int8_t x303 = INT8_MAX;
	uint16_t x304 = 75U;
	volatile int32_t t75 = -1;

	t75 = (((x301==x302)&x303)^x304);

	if (t75 != 75) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x306 = 26261986;
	static int64_t x307 = INT64_MAX;
	static int32_t x308 = 3548;

	t76 = (((x305==x306)&x307)^x308);

	if (t76 != 3548LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = 3819195;
	uint32_t x311 = 1013U;
	int64_t x312 = 201395986LL;
	volatile int64_t t77 = 211957589717729904LL;

	t77 = (((x309==x310)&x311)^x312);

	if (t77 != 201395986LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = INT64_MIN;
	static uint64_t x315 = 174270LLU;
	volatile int64_t x316 = -1LL;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x313==x314)&x315)^x316);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = -1;
	volatile uint8_t x319 = 2U;
	volatile uint64_t x320 = 3LLU;
	volatile uint64_t t79 = 14585096818847190LLU;

	t79 = (((x317==x318)&x319)^x320);

	if (t79 != 3LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 123629000276LL;
	static int16_t x322 = -1;
	int8_t x323 = INT8_MAX;

	t80 = (((x321==x322)&x323)^x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = -162114092458LL;
	int8_t x327 = INT8_MAX;
	uint64_t x328 = 3121663713053150LLU;
	uint64_t t81 = 31171529017LLU;

	t81 = (((x325==x326)&x327)^x328);

	if (t81 != 3121663713053150LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 126016913228362642LLU;
	static int8_t x330 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	static int8_t x332 = -22;

	t82 = (((x329==x330)&x331)^x332);

	if (t82 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int8_t x334 = -28;
	uint8_t x336 = 0U;
	volatile int32_t t83 = 319508;

	t83 = (((x333==x334)&x335)^x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint32_t x338 = 86U;
	volatile uint32_t x339 = 199U;
	uint32_t x340 = 25381U;
	uint32_t t84 = 34438820U;

	t84 = (((x337==x338)&x339)^x340);

	if (t84 != 25381U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = 32566895LL;
	int16_t x343 = INT16_MIN;
	int16_t x344 = 106;
	volatile int32_t t85 = -415;

	t85 = (((x341==x342)&x343)^x344);

	if (t85 != 106) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x346 = 6;
	int8_t x347 = INT8_MAX;
	static volatile uint16_t x348 = 6U;
	static int32_t t86 = 0;

	t86 = (((x345==x346)&x347)^x348);

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = -47;
	int16_t x350 = INT16_MIN;
	volatile int8_t x351 = -1;
	int32_t x352 = -1;
	volatile int32_t t87 = -649365;

	t87 = (((x349==x350)&x351)^x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1137727359522260LL;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 26U;
	volatile int32_t t88 = 45489;

	t88 = (((x353==x354)&x355)^x356);

	if (t88 != 26) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 1389651900U;
	volatile uint8_t x360 = 23U;
	static uint32_t t89 = 250794U;

	t89 = (((x357==x358)&x359)^x360);

	if (t89 != 23U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = INT8_MAX;
	int32_t t90 = 418018;

	t90 = (((x361==x362)&x363)^x364);

	if (t90 != 521) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 8;
	uint8_t x366 = 0U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x365==x366)&x367)^x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = 8271745;
	int8_t x371 = 4;
	int16_t x372 = 15;
	int32_t t92 = 274;

	t92 = (((x369==x370)&x371)^x372);

	if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	static volatile int64_t x375 = -1LL;
	int8_t x376 = 2;

	t93 = (((x373==x374)&x375)^x376);

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = UINT32_MAX;
	volatile uint8_t x379 = 0U;
	int64_t x380 = INT64_MIN;

	t94 = (((x377==x378)&x379)^x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -40;
	int64_t x382 = INT64_MIN;
	uint16_t x383 = 1U;
	int64_t x384 = INT64_MAX;
	volatile int64_t t95 = INT64_MAX;

	t95 = (((x381==x382)&x383)^x384);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	static volatile int8_t x386 = -1;
	volatile int16_t x387 = -1;
	uint64_t x388 = 47485438370LLU;
	volatile uint64_t t96 = 20442264LLU;

	t96 = (((x385==x386)&x387)^x388);

	if (t96 != 47485438370LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	uint64_t x390 = UINT64_MAX;
	static volatile int32_t x391 = -95;
	int64_t x392 = -12256372LL;
	volatile int64_t t97 = -1411044363132293528LL;

	t97 = (((x389==x390)&x391)^x392);

	if (t97 != -12256372LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 9475760LLU;
	volatile int64_t x395 = -1LL;
	volatile uint16_t x396 = 1U;
	int64_t t98 = 1LL;

	t98 = (((x393==x394)&x395)^x396);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x397 = INT8_MIN;
	static volatile int64_t x398 = INT64_MAX;
	volatile uint8_t x399 = 13U;
	uint8_t x400 = 17U;
	int32_t t99 = 4797;

	t99 = (((x397==x398)&x399)^x400);

	if (t99 != 17) { NG(); } else { ; }
	
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

