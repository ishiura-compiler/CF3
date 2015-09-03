#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1;
volatile uint16_t x5 = UINT16_MAX;
uint64_t x6 = UINT64_MAX;
volatile uint8_t x10 = 1U;
int64_t x19 = 0LL;
int8_t x20 = INT8_MIN;
int8_t x24 = INT8_MAX;
int32_t t5 = 972065;
uint16_t x35 = 30U;
static int64_t x36 = -1LL;
int32_t x45 = -154;
int16_t x53 = INT16_MIN;
int32_t x58 = 327358981;
uint8_t x60 = 7U;
volatile int8_t x63 = INT8_MIN;
int64_t x67 = INT64_MIN;
int16_t x68 = 1;
int64_t x73 = INT64_MIN;
int64_t x77 = INT64_MAX;
int16_t x80 = INT16_MIN;
static int8_t x84 = INT8_MIN;
volatile int8_t x97 = 3;
static volatile uint16_t x98 = 1U;
uint8_t x105 = 93U;
volatile int16_t x114 = -6;
int64_t t28 = -2166547622413519LL;
uint8_t x120 = 0U;
int8_t x124 = 1;
int64_t x125 = INT64_MAX;
volatile int8_t x127 = INT8_MAX;
uint32_t x130 = UINT32_MAX;
int64_t t32 = INT64_MIN;
volatile uint16_t x135 = 13444U;
int32_t x137 = INT32_MIN;
static volatile int64_t t34 = -114616LL;
int32_t t36 = -353067;
uint32_t x149 = 81U;
uint64_t x151 = UINT64_MAX;
volatile uint64_t t37 = UINT64_MAX;
volatile int32_t t38 = -1;
uint32_t x157 = UINT32_MAX;
uint64_t t39 = 134345996046LLU;
uint8_t x161 = 91U;
uint16_t x165 = 25715U;
volatile uint64_t x166 = UINT64_MAX;
static int64_t x169 = -1LL;
volatile int64_t x173 = INT64_MIN;
int32_t x174 = -1;
volatile int64_t x177 = -1LL;
volatile uint32_t t45 = UINT32_MAX;
uint16_t x188 = 6934U;
uint32_t x192 = 16248440U;
static int8_t x194 = 51;
int64_t x200 = 57700766304254511LL;
int16_t x201 = INT16_MAX;
volatile int32_t x202 = -1;
volatile int16_t x210 = INT16_MAX;
int64_t x220 = INT64_MIN;
volatile int64_t t54 = INT64_MIN;
static uint32_t x224 = 288U;
int8_t x226 = -1;
int32_t x230 = -1;
uint64_t x231 = 216026731326125652LLU;
int32_t x235 = INT32_MIN;
volatile int32_t x244 = INT32_MAX;
int64_t x247 = INT64_MIN;
static volatile int32_t t61 = -110;
uint8_t x258 = UINT8_MAX;
volatile int16_t x264 = -1;
int64_t x267 = INT64_MIN;
int16_t x270 = -1;
int64_t x277 = INT64_MIN;
int64_t x283 = INT64_MIN;
uint64_t x284 = 48076123LLU;
static volatile uint64_t t70 = 200727879962LLU;
int64_t x288 = INT64_MAX;
int64_t x289 = INT64_MIN;
int64_t x294 = INT64_MIN;
static volatile int16_t x302 = 2719;
static volatile uint32_t x306 = 25U;
int8_t x307 = INT8_MIN;
volatile int64_t x308 = INT64_MAX;
uint64_t x309 = 96576091291LLU;
int16_t x311 = INT16_MIN;
static volatile int64_t x319 = INT64_MAX;
int8_t x328 = INT8_MIN;
volatile int32_t t82 = -927062010;
uint64_t x334 = UINT64_MAX;
static int32_t x336 = INT32_MAX;
int32_t t83 = INT32_MAX;
static int64_t x346 = INT64_MAX;
uint32_t x350 = UINT32_MAX;
int32_t x352 = INT32_MIN;
static volatile int32_t t87 = INT32_MIN;
int64_t x354 = -1LL;
int32_t t89 = INT32_MAX;
volatile int16_t x369 = -1;
uint8_t x377 = UINT8_MAX;
uint8_t x384 = UINT8_MAX;
int32_t t96 = -34;
static int32_t x389 = INT32_MIN;
static int16_t x391 = INT16_MIN;
int16_t x396 = -1;
volatile int32_t t99 = 31;


void f0(void) {
	static uint64_t x1 = 940936605LLU;
	static volatile int64_t x2 = INT64_MAX;
	static uint32_t x3 = 282U;
	uint8_t x4 = 6U;

	t0 = ((x1==(x2^x3))|x4);

	if (t0 != 6) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 80022;

	t1 = ((x5==(x6^x7))|x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 137667U;
	int64_t x11 = INT64_MIN;
	int8_t x12 = -1;
	static volatile int32_t t2 = -14871979;

	t2 = ((x9==(x10^x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile uint64_t x14 = 611832LLU;
	int64_t x15 = -1LL;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13==(x14^x15))|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	volatile int32_t t4 = 784342926;

	t4 = ((x17==(x18^x19))|x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 23;
	int64_t x23 = INT64_MIN;

	t5 = ((x21==(x22^x23))|x24);

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static volatile int64_t x26 = -1LL;
	uint8_t x27 = 6U;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = ((x25==(x26^x27))|x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 17047373LLU;
	volatile int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 119894;

	t7 = ((x29==(x30^x31))|x32);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	static int64_t t8 = -66364835664243LL;

	t8 = ((x33==(x34^x35))|x36);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 0U;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = 3462U;
	int64_t x40 = -1LL;
	int64_t t9 = -714623245364057LL;

	t9 = ((x37==(x38^x39))|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -4024638;

	t10 = ((x41==(x42^x43))|x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	static int64_t x47 = 231106725298403879LL;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -3468810;

	t11 = ((x45==(x46^x47))|x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	int16_t x50 = 0;
	uint64_t x51 = 219806LLU;
	int64_t x52 = -12530LL;
	volatile int64_t t12 = 9489510LL;

	t12 = ((x49==(x50^x51))|x52);

	if (t12 != -12530LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 1LLU;
	uint32_t x55 = UINT32_MAX;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -27327;

	t13 = ((x53==(x54^x55))|x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	volatile int32_t t14 = 395900482;

	t14 = ((x57==(x58^x59))|x60);

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 376405740087776LLU;
	volatile uint64_t x62 = 208LLU;
	static int8_t x64 = 63;
	int32_t t15 = 32517;

	t15 = ((x61==(x62^x63))|x64);

	if (t15 != 63) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 4868LL;
	uint64_t x66 = 35519669444231556LLU;
	volatile int32_t t16 = -591;

	t16 = ((x65==(x66^x67))|x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

	t17 = ((x69==(x70^x71))|x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	uint8_t x75 = 8U;
	int32_t x76 = 0;
	volatile int32_t t18 = 225876505;

	t18 = ((x73==(x74^x75))|x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	uint8_t x79 = 44U;
	int32_t t19 = -41135075;

	t19 = ((x77==(x78^x79))|x80);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = 967;
	int64_t x82 = INT64_MAX;
	int16_t x83 = -1;
	int32_t t20 = -658962;

	t20 = ((x81==(x82^x83))|x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -19880671300139LL;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 294U;
	uint32_t t21 = 25U;

	t21 = ((x85==(x86^x87))|x88);

	if (t21 != 294U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 1U;
	static uint64_t x90 = 42911693709LLU;
	int32_t x91 = INT32_MIN;
	volatile uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -1793048;

	t22 = ((x89==(x90^x91))|x92);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 70U;
	static volatile uint64_t x94 = 3802LLU;
	int8_t x95 = -1;
	static uint8_t x96 = 0U;
	volatile int32_t t23 = 271;

	t23 = ((x93==(x94^x95))|x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = -27;
	static uint16_t x100 = UINT16_MAX;
	static int32_t t24 = 3127;

	t24 = ((x97==(x98^x99))|x100);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	uint16_t x103 = 2714U;
	int8_t x104 = -41;
	int32_t t25 = -14173;

	t25 = ((x101==(x102^x103))|x104);

	if (t25 != -41) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 0U;
	uint16_t x108 = 28U;
	volatile int32_t t26 = 42420162;

	t26 = ((x105==(x106^x107))|x108);

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 31372U;
	static volatile uint8_t x110 = 18U;
	int64_t x111 = -1LL;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = ((x109==(x110^x111))|x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -1LL;

	t28 = ((x113==(x114^x115))|x116);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 275;
	int64_t x118 = -25554604LL;
	volatile int32_t x119 = 1750;
	volatile int32_t t29 = -7787;

	t29 = ((x117==(x118^x119))|x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -972655694793328129LL;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MIN;
	int32_t t30 = 267005;

	t30 = ((x121==(x122^x123))|x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 3190682823544LLU;
	uint16_t x128 = 1U;
	int32_t t31 = -120;

	t31 = ((x125==(x126^x127))|x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 393U;
	volatile int16_t x131 = -4385;
	int64_t x132 = INT64_MIN;

	t32 = ((x129==(x130^x131))|x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = 1;
	int16_t x136 = -103;
	int32_t t33 = 111591;

	t33 = ((x133==(x134^x135))|x136);

	if (t33 != -103) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = -41;
	int64_t x139 = -1LL;
	static volatile int64_t x140 = -1LL;

	t34 = ((x137==(x138^x139))|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = 0;
	static int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = INT32_MIN;

	t35 = ((x141==(x142^x143))|x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int8_t x146 = -1;
	int16_t x147 = -758;
	uint8_t x148 = UINT8_MAX;

	t36 = ((x145==(x146^x147))|x148);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x150 = 117479689LLU;
	uint64_t x152 = UINT64_MAX;

	t37 = ((x149==(x150^x151))|x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -6;
	int16_t x154 = INT16_MIN;
	static uint16_t x155 = 2032U;
	int16_t x156 = 3694;

	t38 = ((x153==(x154^x155))|x156);

	if (t38 != 3694) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	volatile uint64_t x160 = 1108907124599LLU;

	t39 = ((x157==(x158^x159))|x160);

	if (t39 != 1108907124599LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x162 = 32U;
	volatile int32_t x163 = 1610;
	int64_t x164 = -4778068124840618LL;
	volatile int64_t t40 = -2323401282642LL;

	t40 = ((x161==(x162^x163))|x164);

	if (t40 != -4778068124840618LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x167 = -1;
	static volatile uint8_t x168 = 66U;
	int32_t t41 = 12;

	t41 = ((x165==(x166^x167))|x168);

	if (t41 != 66) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = 1;
	volatile uint64_t x171 = 6329970294855LLU;
	uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x169==(x170^x171))|x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x175 = INT64_MIN;
	uint64_t x176 = 3761780971LLU;
	volatile uint64_t t43 = 3432LLU;

	t43 = ((x173==(x174^x175))|x176);

	if (t43 != 3761780971LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 5735730070LLU;
	volatile int32_t x179 = -1;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -1881542;

	t44 = ((x177==(x178^x179))|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -12;
	volatile uint32_t x182 = UINT32_MAX;
	volatile uint8_t x183 = 0U;
	uint32_t x184 = UINT32_MAX;

	t45 = ((x181==(x182^x183))|x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 168U;
	static int64_t x186 = 3994LL;
	int64_t x187 = INT64_MIN;
	volatile int32_t t46 = -116301;

	t46 = ((x185==(x186^x187))|x188);

	if (t46 != 6934) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 2561172302964LLU;
	int16_t x190 = -91;
	int64_t x191 = 47047148745312LL;
	volatile uint32_t t47 = 701743117U;

	t47 = ((x189==(x190^x191))|x192);

	if (t47 != 16248440U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = INT32_MAX;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = 168LL;
	int64_t t48 = -3178LL;

	t48 = ((x193==(x194^x195))|x196);

	if (t48 != 168LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 427LL;
	static int32_t x198 = INT32_MIN;
	uint8_t x199 = 0U;
	int64_t t49 = 2928LL;

	t49 = ((x197==(x198^x199))|x200);

	if (t49 != 57700766304254511LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x203 = 51U;
	uint64_t x204 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x201==(x202^x203))|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x207 = 789307LLU;
	volatile int16_t x208 = 13;
	volatile int32_t t51 = -141;

	t51 = ((x205==(x206^x207))|x208);

	if (t51 != 13) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x211 = 73278512U;
	int16_t x212 = 4668;
	static int32_t t52 = 131862107;

	t52 = ((x209==(x210^x211))|x212);

	if (t52 != 4668) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 15585U;
	volatile int64_t x214 = INT64_MIN;
	uint32_t x215 = 5504U;
	static uint16_t x216 = UINT16_MAX;
	static int32_t t53 = -53;

	t53 = ((x213==(x214^x215))|x216);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -12;
	int16_t x218 = -7475;
	static int32_t x219 = -861;

	t54 = ((x217==(x218^x219))|x220);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = -23026;
	int32_t x223 = INT32_MIN;
	uint32_t t55 = 365075U;

	t55 = ((x221==(x222^x223))|x224);

	if (t55 != 288U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 150;
	volatile int8_t x227 = INT8_MIN;
	static volatile int32_t x228 = -1;
	volatile int32_t t56 = 0;

	t56 = ((x225==(x226^x227))|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x229 = -1;
	volatile int8_t x232 = -2;
	static volatile int32_t t57 = -15283;

	t57 = ((x229==(x230^x231))|x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	volatile uint32_t x234 = 34943556U;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 3689;

	t58 = ((x233==(x234^x235))|x236);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	volatile int64_t x238 = INT64_MIN;
	int8_t x239 = -1;
	int32_t x240 = INT32_MAX;
	int32_t t59 = INT32_MAX;

	t59 = ((x237==(x238^x239))|x240);

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = 0;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	int32_t t60 = INT32_MAX;

	t60 = ((x241==(x242^x243))|x244);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x245 = 7297LLU;
	uint8_t x246 = UINT8_MAX;
	static uint8_t x248 = 38U;

	t61 = ((x245==(x246^x247))|x248);

	if (t61 != 38) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 7;
	int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 6;
	int32_t t62 = 191985;

	t62 = ((x249==(x250^x251))|x252);

	if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -4372;
	int16_t x254 = INT16_MIN;
	static uint8_t x255 = 14U;
	int64_t x256 = -3798580943LL;
	int64_t t63 = 36690570627LL;

	t63 = ((x253==(x254^x255))|x256);

	if (t63 != -3798580943LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	static int64_t x259 = 7717LL;
	int64_t x260 = -1LL;
	int64_t t64 = -59071730787LL;

	t64 = ((x257==(x258^x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 2856;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -48;
	static volatile int32_t t65 = -3;

	t65 = ((x261==(x262^x263))|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -6LL;
	int8_t x266 = INT8_MIN;
	volatile uint16_t x268 = 30U;
	volatile int32_t t66 = 28;

	t66 = ((x265==(x266^x267))|x268);

	if (t66 != 30) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile int64_t x272 = INT64_MAX;
	int64_t t67 = INT64_MAX;

	t67 = ((x269==(x270^x271))|x272);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = 0U;
	static volatile uint32_t x276 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = ((x273==(x274^x275))|x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	volatile int32_t t69 = -833;

	t69 = ((x277==(x278^x279))|x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MAX;

	t70 = ((x281==(x282^x283))|x284);

	if (t70 != 48076123LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 55U;
	uint64_t x286 = 475347834387472948LLU;
	uint64_t x287 = UINT64_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = ((x285==(x286^x287))|x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = INT64_MIN;
	uint64_t x291 = 172678933182328LLU;
	uint32_t x292 = 2339U;
	static uint32_t t72 = 9U;

	t72 = ((x289==(x290^x291))|x292);

	if (t72 != 2339U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	volatile int16_t x295 = 1656;
	uint64_t x296 = 1077352036688390121LLU;
	uint64_t t73 = 392257134121LLU;

	t73 = ((x293==(x294^x295))|x296);

	if (t73 != 1077352036688390121LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = 1126941241363301LL;
	int8_t x298 = -1;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -4773720;

	t74 = ((x297==(x298^x299))|x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 6687826087631170LL;
	uint32_t x303 = 505U;
	static int64_t x304 = -62LL;
	volatile int64_t t75 = 214LL;

	t75 = ((x301==(x302^x303))|x304);

	if (t75 != -62LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int64_t t76 = INT64_MAX;

	t76 = ((x305==(x306^x307))|x308);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	static volatile uint8_t x312 = 36U;
	volatile int32_t t77 = -691110327;

	t77 = ((x309==(x310^x311))|x312);

	if (t77 != 36) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 3U;
	volatile int32_t x314 = INT32_MIN;
	uint16_t x315 = 28U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = INT32_MIN;

	t78 = ((x313==(x314^x315))|x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = 1;
	int16_t x320 = -1;
	volatile int32_t t79 = -177419;

	t79 = ((x317==(x318^x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MAX;
	uint8_t x323 = 9U;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = 93396;

	t80 = ((x321==(x322^x323))|x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = -1;
	int64_t x327 = -155605229666171LL;
	volatile int32_t t81 = -1444;

	t81 = ((x325==(x326^x327))|x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -119001953683377466LL;
	volatile int8_t x332 = INT8_MIN;

	t82 = ((x329==(x330^x331))|x332);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MAX;

	t83 = ((x333==(x334^x335))|x336);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	uint64_t x338 = 536909935499LLU;
	int32_t x339 = 4;
	static uint32_t x340 = 454U;
	uint32_t t84 = 10119U;

	t84 = ((x337==(x338^x339))|x340);

	if (t84 != 454U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 3131U;
	uint64_t x342 = 54690784695840LLU;
	uint16_t x343 = 2U;
	int32_t x344 = -80199;
	static int32_t t85 = -12670;

	t85 = ((x341==(x342^x343))|x344);

	if (t85 != -80199) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	static volatile uint8_t x347 = UINT8_MAX;
	uint32_t x348 = 6570U;
	uint32_t t86 = 871351U;

	t86 = ((x345==(x346^x347))|x348);

	if (t86 != 6570U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x351 = -1;

	t87 = ((x349==(x350^x351))|x352);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 477612706U;
	uint64_t x355 = 2430650LLU;
	static volatile int16_t x356 = -1;
	volatile int32_t t88 = -32372249;

	t88 = ((x353==(x354^x355))|x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile uint8_t x358 = 80U;
	int16_t x359 = 0;
	volatile int32_t x360 = INT32_MAX;

	t89 = ((x357==(x358^x359))|x360);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x361 = 498740;
	int8_t x362 = INT8_MAX;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = -1;
	volatile int32_t t90 = 22972;

	t90 = ((x361==(x362^x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static volatile uint16_t x366 = 0U;
	int8_t x367 = -1;
	uint64_t x368 = 5LLU;
	uint64_t t91 = 705197812046225163LLU;

	t91 = ((x365==(x366^x367))|x368);

	if (t91 != 5LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = 3;
	uint8_t x371 = 6U;
	volatile int32_t x372 = INT32_MAX;
	static volatile int32_t t92 = INT32_MAX;

	t92 = ((x369==(x370^x371))|x372);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	static volatile uint16_t x374 = UINT16_MAX;
	static int8_t x375 = -1;
	volatile uint8_t x376 = 30U;
	int32_t t93 = -920275899;

	t93 = ((x373==(x374^x375))|x376);

	if (t93 != 30) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x378 = 1;
	static uint64_t x379 = 742274714991115763LLU;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 0;

	t94 = ((x377==(x378^x379))|x380);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 76U;
	int32_t t95 = 470132;

	t95 = ((x381==(x382^x383))|x384);

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x385 = 84768U;
	uint16_t x386 = 3U;
	int16_t x387 = INT16_MIN;
	static int8_t x388 = INT8_MAX;

	t96 = ((x385==(x386^x387))|x388);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = INT32_MAX;
	uint32_t x392 = 2889U;
	static uint32_t t97 = 4924U;

	t97 = ((x389==(x390^x391))|x392);

	if (t97 != 2889U) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	static uint8_t x395 = 19U;
	int32_t t98 = -572653;

	t98 = ((x393==(x394^x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x398 = -1;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = UINT8_MAX;

	t99 = ((x397==(x398^x399))|x400);

	if (t99 != 255) { NG(); } else { ; }
	
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

