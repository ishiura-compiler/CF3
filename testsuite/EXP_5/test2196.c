#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 821243LL;
int16_t x6 = -7;
volatile uint64_t x18 = 23236278783650LLU;
int8_t x20 = INT8_MIN;
int8_t x21 = 1;
volatile int64_t t5 = -3222319935455779018LL;
int64_t x31 = INT64_MAX;
uint32_t x34 = 21393408U;
int8_t x48 = 27;
int16_t x63 = -8;
static volatile int8_t x67 = -1;
int32_t x68 = -399;
uint64_t t17 = UINT64_MAX;
int32_t x74 = INT32_MIN;
uint8_t x77 = UINT8_MAX;
static int32_t x81 = INT32_MIN;
int64_t x84 = INT64_MAX;
static int64_t t20 = 1214872LL;
volatile int64_t t21 = 31236745695511531LL;
int16_t x90 = -1;
volatile uint64_t t23 = 20428491LLU;
volatile int64_t t24 = 118550LL;
int16_t x101 = INT16_MIN;
uint64_t x102 = UINT64_MAX;
static uint64_t t25 = 3421631053149305680LLU;
uint64_t x105 = 837761486450LLU;
int16_t x107 = -328;
uint16_t x114 = UINT16_MAX;
static volatile int32_t x120 = -19332;
volatile uint8_t x124 = 67U;
uint16_t x125 = 659U;
static uint32_t x126 = 1572494U;
static volatile int16_t x128 = -1;
static int8_t x131 = -1;
volatile int32_t t32 = 14;
uint8_t x133 = 4U;
static int8_t x137 = INT8_MIN;
int8_t x149 = 23;
static volatile int64_t x156 = 10518263LL;
volatile int16_t x159 = INT16_MIN;
static int32_t x161 = INT32_MIN;
int8_t x163 = -1;
uint64_t x164 = 874326052999904LLU;
volatile int16_t x166 = -1;
uint32_t x176 = 31U;
int64_t t45 = 3LL;
uint32_t x193 = 475594521U;
int32_t x199 = 925319;
static int8_t x207 = INT8_MIN;
int32_t x210 = INT32_MAX;
volatile int32_t x218 = -1;
static int8_t x222 = -53;
int64_t x230 = -32624189911LL;
int32_t x241 = INT32_MIN;
static volatile int32_t x243 = -1;
int32_t x255 = -1;
int16_t x257 = INT16_MAX;
static int64_t t65 = 892601695LL;
uint8_t x265 = UINT8_MAX;
static int16_t x275 = -1;
uint64_t x276 = 13512314315979LLU;
uint64_t x280 = 9LLU;
uint16_t x282 = UINT16_MAX;
uint64_t x288 = UINT64_MAX;
volatile uint32_t x293 = 173U;
volatile uint32_t t73 = 910263U;
volatile int32_t x303 = INT32_MIN;
uint64_t x304 = UINT64_MAX;
int16_t x306 = INT16_MIN;
int8_t x320 = INT8_MAX;
volatile int32_t t79 = 3861;
int16_t x323 = INT16_MIN;
static int8_t x324 = INT8_MIN;
int32_t x330 = INT32_MIN;
volatile int16_t x332 = INT16_MAX;
int64_t x333 = INT64_MIN;
int32_t x334 = 11;
int16_t x335 = INT16_MIN;
static volatile uint32_t t84 = 34979733U;
int32_t x354 = -15;
volatile int8_t x357 = 0;
int64_t x358 = INT64_MIN;
uint8_t x366 = UINT8_MAX;
int32_t x367 = 3181763;
static int32_t t91 = -396000;
int8_t x375 = INT8_MIN;
static uint8_t x381 = 15U;
int64_t t95 = 610942574962277904LL;
int8_t x395 = 3;
int16_t x396 = -1;
uint8_t x399 = 1U;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int64_t x2 = 691054090682201LL;
	int16_t x3 = INT16_MIN;
	int32_t x4 = 622146;

	t0 = (x1|((x2^x3)^x4));

	if (t0 != -691054090223105LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	uint16_t x8 = 6U;
	volatile uint32_t t1 = 136U;

	t1 = (x5|((x6^x7)^x8));

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	uint8_t x10 = 3U;
	static uint8_t x11 = 1U;
	int16_t x12 = -2;
	int64_t t2 = -29206617091480LL;

	t2 = (x9|((x10^x11)^x12));

	if (t2 != -4LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MAX;
	volatile int16_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (x13|((x14^x15)^x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static uint8_t x19 = 96U;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18^x19)^x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -13992875;
	uint32_t x23 = 3887828U;
	int64_t x24 = INT64_MIN;

	t5 = (x21|((x22^x23)^x24));

	if (t5 != -9223372032575459711LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 33U;
	uint64_t x26 = 87352479364600871LLU;
	static int32_t x27 = INT32_MIN;
	volatile uint32_t x28 = 48857157U;
	uint64_t t6 = 28575620094573LLU;

	t6 = (x25|((x26^x27)^x28));

	if (t6 != 18359391596407903331LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = 92;
	volatile uint32_t x32 = 0U;
	int64_t t7 = -419515533LL;

	t7 = (x29|((x30^x31)^x32));

	if (t7 != -93LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 826;
	static volatile int16_t x35 = INT16_MIN;
	int16_t x36 = -13876;
	uint32_t t8 = 27U;

	t8 = (x33|((x34^x35)^x36));

	if (t8 != 21380094U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -4;
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MAX;
	static volatile int64_t t9 = -511488977874186638LL;

	t9 = (x37|((x38^x39)^x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 15;
	static int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	static int32_t x44 = 38524529;
	volatile int64_t t10 = 624831334389LL;

	t10 = (x41|((x42^x43)^x44));

	if (t10 != 9223372036816251279LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 1LLU;
	static volatile int32_t x46 = -8;
	uint32_t x47 = 404189411U;
	uint64_t t11 = 1613571792LLU;

	t11 = (x45|((x46^x47)^x48));

	if (t11 != 3890777857LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 6479LLU;
	static int16_t x50 = INT16_MIN;
	int32_t x51 = -2103;
	uint64_t x52 = 216220617292984941LLU;
	uint64_t t12 = 4527LLU;

	t12 = (x49|((x50^x51)^x52));

	if (t12 != 216220617292996079LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static int32_t x54 = -234;
	int32_t x55 = INT32_MAX;
	static int16_t x56 = 1761;
	volatile int32_t t13 = 1871;

	t13 = (x53|((x54^x55)^x56));

	if (t13 != -2147482104) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -1;
	static int64_t x58 = INT64_MIN;
	int8_t x59 = 1;
	int8_t x60 = 1;
	volatile int64_t t14 = 15381366298004842LL;

	t14 = (x57|((x58^x59)^x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int16_t x62 = 439;
	static int64_t x64 = -989636182791LL;
	static int64_t t15 = -161331531340072LL;

	t15 = (x61|((x62^x63)^x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 0;
	uint8_t x66 = UINT8_MAX;
	static volatile int32_t t16 = 641926567;

	t16 = (x65|((x66^x67)^x68));

	if (t16 != 369) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	volatile int16_t x70 = INT16_MIN;
	static int64_t x71 = INT64_MIN;
	uint64_t x72 = 779521LLU;

	t17 = (x69|((x70^x71)^x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 2898250258656709198LLU;
	static int32_t x75 = INT32_MIN;
	uint16_t x76 = 15469U;
	static volatile uint64_t t18 = 119959709LLU;

	t18 = (x73|((x74^x75)^x76));

	if (t18 != 2898250258656722543LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x78 = -15;
	uint32_t x79 = 4029310U;
	volatile int64_t x80 = INT64_MAX;
	static volatile int64_t t19 = -15864LL;

	t19 = (x77|((x78^x79)^x80));

	if (t19 != 9223372032563837951LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	int8_t x83 = -1;

	t20 = (x81|((x82^x83)^x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 175U;
	int32_t x87 = INT32_MIN;
	static int64_t x88 = -1LL;

	t21 = (x85|((x86^x87)^x88));

	if (t21 != -176LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 13272226167LLU;
	static volatile int32_t x91 = -33430309;
	volatile int8_t x92 = -1;
	uint64_t t22 = 13209698LLU;

	t22 = (x89|((x90^x91)^x92));

	if (t22 != 18446744073694346751LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = 3294373356942LL;
	volatile uint64_t x95 = UINT64_MAX;
	static int64_t x96 = -1LL;

	t23 = (x93|((x94^x95)^x96));

	if (t23 != 9223375331228132750LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static uint16_t x98 = 11U;
	int16_t x99 = -1;
	uint32_t x100 = 211047822U;

	t24 = (x97|((x98^x99)^x100));

	if (t24 != -9223372032770856326LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = INT8_MAX;
	uint8_t x104 = 1U;

	t25 = (x101|((x102^x103)^x104));

	if (t25 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	uint64_t x108 = 88LLU;
	uint64_t t26 = 7LLU;

	t26 = (x105|((x106^x107)^x108));

	if (t26 != 837761486719LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MAX;
	int32_t x112 = -1;
	int64_t t27 = -3166091250620LL;

	t27 = (x109|((x110^x111)^x112));

	if (t27 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	static int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	int64_t t28 = -39136LL;

	t28 = (x113|((x114^x115)^x116));

	if (t28 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 31;
	int16_t x118 = -1;
	int16_t x119 = 1;
	int32_t t29 = 1;

	t29 = (x117|((x118^x119)^x120));

	if (t29 != 19359) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 106U;
	uint64_t x122 = UINT64_MAX;
	volatile int64_t x123 = INT64_MAX;
	static volatile uint64_t t30 = 123295805905698817LLU;

	t30 = (x121|((x122^x123)^x124));

	if (t30 != 9223372036854775915LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x127 = 0;
	uint32_t t31 = 152352865U;

	t31 = (x125|((x126^x127)^x128));

	if (t31 != 4293395443U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MAX;
	volatile int8_t x132 = INT8_MIN;

	t32 = (x129|((x130^x131)^x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 15762U;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MAX;
	static volatile int32_t t33 = -29619177;

	t33 = (x133|((x134^x135)^x136));

	if (t33 != 15766) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -27637LL;
	volatile int64_t x139 = INT64_MIN;
	static int64_t x140 = 66788196412LL;
	volatile int64_t t34 = -13484LL;

	t34 = (x137|((x138^x139)^x140));

	if (t34 != -73LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 28070;

	t35 = (x141|((x142^x143)^x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	static uint8_t x146 = 3U;
	int64_t x147 = -1LL;
	uint8_t x148 = 1U;
	volatile int64_t t36 = -9450044786LL;

	t36 = (x145|((x146^x147)^x148));

	if (t36 != -3LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = 0;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -13668513;

	t37 = (x149|((x150^x151)^x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	int16_t x154 = INT16_MIN;
	uint16_t x155 = UINT16_MAX;
	volatile int64_t t38 = 1068396963461908LL;

	t38 = (x153|((x154^x155)^x156));

	if (t38 != -10485761LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1U;
	volatile uint16_t x158 = 6546U;
	uint32_t x160 = UINT32_MAX;
	uint32_t t39 = 13U;

	t39 = (x157|((x158^x159)^x160));

	if (t39 != 26221U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -1LL;
	uint64_t t40 = 225LLU;

	t40 = (x161|((x162^x163)^x164));

	if (t40 != 18446744073270104800LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = 5608918LL;
	static int8_t x167 = -1;
	uint64_t x168 = 25081601392611878LLU;
	volatile uint64_t t41 = 112346LLU;

	t41 = (x165|((x166^x167)^x168));

	if (t41 != 25081601393661942LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = 30326;
	volatile int64_t x172 = -1LL;
	int64_t t42 = 1041682454249507654LL;

	t42 = (x169|((x170^x171)^x172));

	if (t42 != 2441LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	volatile int64_t t43 = -2718304562LL;

	t43 = (x173|((x174^x175)^x176));

	if (t43 != -9223372032559808544LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 7900U;
	uint64_t x178 = 120LLU;
	volatile int8_t x179 = INT8_MIN;
	static uint8_t x180 = UINT8_MAX;
	uint64_t t44 = 64LLU;

	t44 = (x177|((x178^x179)^x180));

	if (t44 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 20531U;
	uint16_t x182 = 1U;
	uint8_t x183 = 122U;
	int64_t x184 = INT64_MIN;

	t45 = (x181|((x182^x183)^x184));

	if (t45 != -9223372036854755205LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -220741356462LL;
	volatile int32_t x186 = 4561;
	static uint64_t x187 = UINT64_MAX;
	int16_t x188 = 13;
	uint64_t t46 = 33739568554103LLU;

	t46 = (x185|((x186^x187)^x188));

	if (t46 != 18446744073709551219LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	uint32_t x192 = 82930U;
	uint32_t t47 = UINT32_MAX;

	t47 = (x189|((x190^x191)^x192));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	uint8_t x196 = 8U;
	static int64_t t48 = -1515341923345340330LL;

	t48 = (x193|((x194^x195)^x196));

	if (t48 != -9223372036379181287LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	int8_t x198 = INT8_MAX;
	int64_t x200 = -1LL;
	static int64_t t49 = 7LL;

	t49 = (x197|((x198^x199)^x200));

	if (t49 != -925433LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = INT8_MAX;
	uint64_t x202 = 90321485LLU;
	static uint32_t x203 = 0U;
	uint8_t x204 = UINT8_MAX;
	uint64_t t50 = 12475443LLU;

	t50 = (x201|((x202^x203)^x204));

	if (t50 != 90321663LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 30;
	int64_t x206 = -1LL;
	static uint8_t x208 = UINT8_MAX;
	int64_t t51 = 15317362028517LL;

	t51 = (x205|((x206^x207)^x208));

	if (t51 != 158LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	int32_t x211 = INT32_MIN;
	static volatile int32_t x212 = 1;
	static int32_t t52 = -1;

	t52 = (x209|((x210^x211)^x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint32_t x215 = 56U;
	int64_t x216 = 45379016LL;
	int64_t t53 = -49747273732LL;

	t53 = (x213|((x214^x215)^x216));

	if (t53 != 4249611775LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 2944908LLU;
	int64_t x219 = INT64_MIN;
	int8_t x220 = 3;
	volatile uint64_t t54 = 7684396LLU;

	t54 = (x217|((x218^x219)^x220));

	if (t54 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	int64_t t55 = 764598LL;

	t55 = (x221|((x222^x223)^x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int64_t x228 = 593489LL;
	volatile int64_t t56 = -16820506010092LL;

	t56 = (x225|((x226^x227)^x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = INT32_MIN;
	int32_t x232 = 62;
	static volatile int64_t t57 = 63244342LL;

	t57 = (x229|((x230^x231)^x232));

	if (t57 != -411935209LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 7488038LLU;
	int16_t x235 = 1;
	static int16_t x236 = INT16_MIN;
	static volatile uint64_t t58 = 91487LLU;

	t58 = (x233|((x234^x235)^x236));

	if (t58 != 18446744073709535783LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	volatile int64_t x239 = -1046352780761LL;
	int8_t x240 = -2;
	volatile int64_t t59 = -17592855591811710LL;

	t59 = (x237|((x238^x239)^x240));

	if (t59 != -528244186LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = 237038039440LL;
	volatile int64_t x244 = INT64_MAX;
	int64_t t60 = -191LL;

	t60 = (x241|((x242^x243)^x244));

	if (t60 != -1332645488LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 9U;
	volatile int16_t x246 = 0;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 852U;
	static volatile int32_t t61 = 2108;

	t61 = (x245|((x246^x247)^x248));

	if (t61 != 939) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	static uint32_t x250 = UINT32_MAX;
	int64_t x251 = INT64_MAX;
	int64_t x252 = 21992880693752LL;
	int64_t t62 = -465028467374LL;

	t62 = (x249|((x250^x251)^x252));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	uint64_t x254 = 15335800LLU;
	uint64_t x256 = 493387LLU;
	uint64_t t63 = 479LLU;

	t63 = (x253|((x254^x255)^x256));

	if (t63 != 18446744073693985228LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = 4U;
	int32_t x260 = INT32_MIN;
	volatile uint32_t t64 = 4U;

	t64 = (x257|((x258^x259)^x260));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 193LL;
	volatile uint16_t x262 = UINT16_MAX;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;

	t65 = (x261|((x262^x263)^x264));

	if (t65 != 33023LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = 6195;
	int8_t x267 = -34;
	static volatile uint8_t x268 = 2U;
	volatile int32_t t66 = -264;

	t66 = (x265|((x266^x267)^x268));

	if (t66 != -6145) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MIN;
	uint64_t x270 = 2786503078598LLU;
	int8_t x271 = INT8_MIN;
	volatile int64_t x272 = INT64_MAX;
	uint64_t t67 = 323160LLU;

	t67 = (x269|((x270^x271)^x272));

	if (t67 != 18446744073709531833LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int8_t x274 = INT8_MAX;
	volatile uint64_t t68 = 578973LLU;

	t68 = (x273|((x274^x275)^x276));

	if (t68 != 18446730561395294207LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = -4;
	int8_t x279 = -21;
	uint64_t t69 = 395553LLU;

	t69 = (x277|((x278^x279)^x280));

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 12359989;
	int8_t x283 = 1;
	int32_t x284 = 1;
	volatile int32_t t70 = 483011307;

	t70 = (x281|((x282^x283)^x284));

	if (t70 != 12386303) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 1;
	uint32_t x286 = 1569U;
	volatile int8_t x287 = -1;
	volatile uint64_t t71 = 71271833422LLU;

	t71 = (x285|((x286^x287)^x288));

	if (t71 != 18446744069414585889LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x289 = UINT64_MAX;
	uint8_t x290 = 8U;
	uint64_t x291 = 32525302LLU;
	int64_t x292 = 14994932466LL;
	uint64_t t72 = UINT64_MAX;

	t72 = (x289|((x290^x291)^x292));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x294 = -8;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MAX;

	t73 = (x293|((x294^x295)^x296));

	if (t73 != 175U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 8837255065665665333LLU;
	int8_t x298 = -1;
	uint64_t x299 = 97843144167970LLU;
	uint8_t x300 = 6U;
	static volatile uint64_t t74 = 334827LLU;

	t74 = (x297|((x298^x299)^x300));

	if (t74 != 18446673340407348735LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint8_t x302 = 0U;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x301|((x302^x303)^x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x307 = 28U;
	int32_t x308 = -1388;
	volatile int32_t t76 = -60;

	t76 = (x305|((x306^x307)^x308));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x310 = INT32_MIN;
	int8_t x311 = -10;
	int8_t x312 = 1;
	volatile int32_t t77 = -506098551;

	t77 = (x309|((x310^x311)^x312));

	if (t77 != -9) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = -1LL;
	static uint64_t x314 = 0LLU;
	uint16_t x315 = UINT16_MAX;
	int8_t x316 = 1;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x313|((x314^x315)^x316));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;

	t79 = (x317|((x318^x319)^x320));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	int32_t x322 = INT32_MAX;
	int32_t t80 = 42;

	t80 = (x321|((x322^x323)^x324));

	if (t80 != 2147451007) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = 6;
	uint8_t x327 = UINT8_MAX;
	static int32_t x328 = INT32_MIN;
	int64_t t81 = -1692059682847045LL;

	t81 = (x325|((x326^x327)^x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x331 = INT32_MAX;
	volatile int32_t t82 = 635;

	t82 = (x329|((x330^x331)^x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x336 = 1U;
	static volatile int64_t t83 = -1902876982LL;

	t83 = (x333|((x334^x335)^x336));

	if (t83 != -9223372032559841270LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	uint32_t x338 = UINT32_MAX;
	volatile int32_t x339 = 4;
	static volatile int16_t x340 = INT16_MAX;

	t84 = (x337|((x338^x339)^x340));

	if (t84 != 4294934532U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	uint16_t x342 = 62U;
	uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = INT8_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (x341|((x342^x343)^x344));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 5338U;
	int16_t x346 = -1;
	static int32_t x347 = -1;
	static volatile int64_t x348 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x345|((x346^x347)^x348));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	volatile uint8_t x350 = 3U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -6;
	int32_t t87 = 4005842;

	t87 = (x349|((x350^x351)^x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	int32_t x356 = INT32_MIN;
	int64_t t88 = 10889LL;

	t88 = (x353|((x354^x355)^x356));

	if (t88 != -32754LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x359 = 63U;
	int16_t x360 = -1;
	volatile int64_t t89 = 19753183636007034LL;

	t89 = (x357|((x358^x359)^x360));

	if (t89 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = 318;
	uint32_t x364 = 47593974U;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x361|((x362^x363)^x364));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int16_t x368 = -1;

	t91 = (x365|((x366^x367)^x368));

	if (t91 != -3181569) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = 7872;
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = -8294203;

	t92 = (x369|((x370^x371)^x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 204LLU;
	int32_t x374 = -1;
	static int16_t x376 = -1;
	uint64_t t93 = 30117507420LLU;

	t93 = (x373|((x374^x375)^x376));

	if (t93 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	int32_t x379 = INT32_MIN;
	volatile int64_t x380 = INT64_MAX;
	volatile int64_t t94 = -17100986284LL;

	t94 = (x377|((x378^x379)^x380));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x382 = 2;
	int64_t x383 = INT64_MIN;
	volatile int32_t x384 = INT32_MIN;

	t95 = (x381|((x382^x383)^x384));

	if (t95 != 9223372034707292175LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 30U;
	static int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	volatile int32_t x388 = INT32_MIN;
	int64_t t96 = -3099LL;

	t96 = (x385|((x386^x387)^x388));

	if (t96 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 0U;
	volatile int32_t x392 = -2179969;
	static volatile int32_t t97 = 456176651;

	t97 = (x389|((x390^x391)^x392));

	if (t97 != 2195455) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint32_t x394 = 1768782U;
	volatile uint32_t t98 = 29520U;

	t98 = (x393|((x394^x395)^x396));

	if (t98 != 4293198514U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 195;
	static int32_t x398 = INT32_MIN;
	volatile int16_t x400 = -1;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x397|((x398^x399)^x400));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

