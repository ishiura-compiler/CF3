#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 455872835U;
uint32_t x12 = 350U;
static uint64_t x15 = UINT64_MAX;
uint8_t x16 = UINT8_MAX;
int16_t x23 = INT16_MAX;
static int32_t x24 = -3;
int64_t t5 = 2133737197205LL;
uint8_t x31 = UINT8_MAX;
int32_t t7 = INT32_MAX;
int32_t x34 = INT32_MIN;
volatile int64_t x37 = INT64_MIN;
int32_t x39 = INT32_MIN;
static uint8_t x45 = 2U;
volatile uint64_t t11 = 223858LLU;
volatile int64_t t12 = -3568934477537210910LL;
uint64_t x55 = UINT64_MAX;
static volatile int32_t x57 = INT32_MAX;
static int64_t t15 = 5113064682973583LL;
int16_t x65 = -1;
uint32_t x70 = UINT32_MAX;
volatile uint32_t x74 = 113800799U;
volatile int8_t x77 = 2;
int32_t x78 = 19;
int32_t x82 = INT32_MIN;
volatile uint32_t t21 = 7211181U;
uint8_t x90 = 7U;
int32_t x91 = INT32_MIN;
static uint16_t x93 = 427U;
int32_t t23 = 344291;
uint8_t x98 = 27U;
int64_t x107 = 4124695275760796LL;
volatile int64_t t26 = -263920168424668405LL;
static volatile int16_t x113 = INT16_MAX;
uint32_t x120 = 34U;
static uint32_t x121 = 2088094U;
volatile int16_t x127 = 71;
int32_t x131 = INT32_MIN;
int64_t x134 = -882703503217LL;
uint32_t x138 = 300690U;
volatile int16_t x145 = INT16_MIN;
uint16_t x151 = UINT16_MAX;
int64_t x152 = INT64_MIN;
int8_t x157 = 0;
uint64_t x166 = UINT64_MAX;
static int64_t x172 = -1LL;
int8_t x177 = -1;
volatile int32_t t45 = 6;
int64_t t46 = -396620034LL;
volatile int32_t x196 = -1;
int32_t x197 = INT32_MIN;
int32_t x201 = INT32_MIN;
uint8_t x203 = UINT8_MAX;
uint32_t x207 = 133U;
volatile int16_t x208 = INT16_MIN;
int8_t x210 = 0;
static uint64_t x211 = 1995265LLU;
static uint8_t x214 = UINT8_MAX;
uint8_t x215 = 7U;
int32_t t53 = 406456;
uint8_t x228 = UINT8_MAX;
volatile uint64_t t57 = 604416087276097750LLU;
int8_t x234 = INT8_MIN;
static uint16_t x236 = 2205U;
uint16_t x238 = 13322U;
int64_t x240 = INT64_MIN;
volatile int32_t x244 = INT32_MAX;
volatile int8_t x251 = -6;
int16_t x259 = INT16_MIN;
uint16_t x265 = UINT16_MAX;
volatile uint16_t x271 = 0U;
volatile int32_t t67 = -1;
static volatile int8_t x280 = INT8_MAX;
static uint32_t x296 = UINT32_MAX;
static int64_t x301 = INT64_MIN;
int64_t t75 = -31353709663180459LL;
uint64_t t76 = 1849856LLU;
int32_t x313 = INT32_MIN;
uint64_t t78 = 167919LLU;
uint8_t x322 = 3U;
int16_t x326 = -1;
uint16_t x329 = 2805U;
volatile int64_t x331 = -503949602LL;
int64_t t82 = INT64_MAX;
volatile int32_t x344 = -10;
uint32_t t85 = 237U;
int64_t x346 = 1095040283943LL;
static uint8_t x355 = UINT8_MAX;
int16_t x360 = INT16_MIN;
int64_t t89 = 80080289049979565LL;
int32_t t90 = 114;
int16_t x376 = -1;
uint8_t x377 = 61U;
int32_t x378 = INT32_MIN;
uint32_t t94 = 2U;
int32_t x382 = INT32_MIN;
volatile int8_t x385 = -1;
int8_t x386 = 0;
volatile uint32_t x388 = 2U;
volatile int32_t x391 = -1356;
volatile uint64_t t97 = 1044889LLU;
uint32_t x395 = 5U;
uint32_t t98 = 272655U;
uint16_t x398 = 0U;


void f0(void) {
	int32_t x2 = -1;
	uint32_t x3 = 1U;
	uint64_t x4 = 853934LLU;
	uint64_t t0 = 64LLU;

	t0 = ((x1|x2)&(x3|x4));

	if (t0 != 853935LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int32_t x6 = 2023;
	static volatile uint32_t x7 = UINT32_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile uint32_t t1 = 1U;

	t1 = ((x5|x6)&(x7|x8));

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint32_t x10 = 9U;
	int64_t x11 = -27012212848683381LL;
	int64_t t2 = -446434758349934LL;

	t2 = ((x9|x10)&(x11|x12));

	if (t2 != 411992073LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	volatile uint64_t t3 = 18LLU;

	t3 = ((x13|x14)&(x15|x16));

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 83801;
	int64_t x18 = 298352630013LL;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	int64_t t4 = -657037470956020610LL;

	t4 = ((x17|x18)&(x19|x20));

	if (t4 != 298352631680LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int32_t x22 = -1;

	t5 = ((x21|x22)&(x23|x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x25 = UINT64_MAX;
	static uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 527692434638977LLU;

	t6 = ((x25|x26)&(x27|x28));

	if (t6 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int16_t x30 = INT16_MIN;
	static int32_t x32 = INT32_MAX;

	t7 = ((x29|x30)&(x31|x32));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 8003;
	int16_t x35 = 1;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 0;

	t8 = ((x33|x34)&(x35|x36));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MIN;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int64_t t9 = 300461584474390055LL;

	t9 = ((x37|x38)&(x39|x40));

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	static uint16_t x42 = UINT16_MAX;
	static uint64_t x43 = 2396297337666245289LLU;
	uint8_t x44 = 112U;
	static uint64_t t10 = 7128LLU;

	t10 = ((x41|x42)&(x43|x44));

	if (t10 != 2211418873LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = 1736U;
	volatile uint32_t x47 = UINT32_MAX;
	volatile uint64_t x48 = 676320119659077887LLU;

	t11 = ((x45|x46)&(x47|x48));

	if (t11 != 1738LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int64_t x50 = -1LL;
	static volatile int16_t x51 = INT16_MAX;
	uint32_t x52 = 1210U;

	t12 = ((x49|x50)&(x51|x52));

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 5U;
	uint32_t x54 = 853U;
	static int8_t x56 = -1;
	volatile uint64_t t13 = 186744580LLU;

	t13 = ((x53|x54)&(x55|x56));

	if (t13 != 853LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = INT32_MIN;
	volatile int32_t x59 = INT32_MIN;
	uint64_t x60 = 255350LLU;
	uint64_t t14 = 107427LLU;

	t14 = ((x57|x58)&(x59|x60));

	if (t14 != 18446744071562323318LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -10;

	t15 = ((x61|x62)&(x63|x64));

	if (t15 != -10LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MIN;
	volatile int8_t x68 = -1;
	static volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x65|x66)&(x67|x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int64_t x71 = -319236600946572LL;
	int8_t x72 = -1;
	int64_t t17 = 55LL;

	t17 = ((x69|x70)&(x71|x72));

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -19;
	int8_t x75 = -55;
	static int64_t x76 = -89233840800LL;
	int64_t t18 = 15915023513185574LL;

	t18 = ((x73|x74)&(x75|x76));

	if (t18 != 4294967273LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x79 = INT64_MAX;
	static volatile int64_t x80 = 379879851201LL;
	static int64_t t19 = -1905915670235439LL;

	t19 = ((x77|x78)&(x79|x80));

	if (t19 != 19LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int16_t x83 = -1;
	static int64_t x84 = INT64_MIN;
	int64_t t20 = 142314133053LL;

	t20 = ((x81|x82)&(x83|x84));

	if (t20 != -2147450881LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	volatile uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MIN;

	t21 = ((x85|x86)&(x87|x88));

	if (t21 != 2147483903U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x92 = 13;
	volatile int32_t t22 = 73;

	t22 = ((x89|x90)&(x91|x92));

	if (t22 != 13) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x94 = 159328972;
	static int32_t x95 = INT32_MIN;
	uint16_t x96 = 20062U;

	t23 = ((x93|x94)&(x95|x96));

	if (t23 != 2638) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	volatile int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	volatile uint32_t t24 = 657840006U;

	t24 = ((x97|x98)&(x99|x100));

	if (t24 != 2147516415U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	static int16_t x104 = INT16_MAX;
	int64_t t25 = 3272071483LL;

	t25 = ((x101|x102)&(x103|x104));

	if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -735523;
	volatile int16_t x106 = -1;
	int8_t x108 = -1;

	t26 = ((x105|x106)&(x107|x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -70205228077380LL;
	static int32_t x110 = -1;
	uint64_t x111 = 1238021618LLU;
	int8_t x112 = INT8_MAX;
	uint64_t t27 = 7LLU;

	t27 = ((x109|x110)&(x111|x112));

	if (t27 != 1238021631LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 448291513029LLU;
	volatile int32_t x116 = 230357094;
	uint64_t t28 = 99220LLU;

	t28 = ((x113|x114)&(x115|x116));

	if (t28 != 448521829095LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int64_t x118 = -106252LL;
	volatile int64_t x119 = INT64_MAX;
	int64_t t29 = INT64_MAX;

	t29 = ((x117|x118)&(x119|x120));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 454U;
	volatile int16_t x123 = INT16_MIN;
	static volatile int8_t x124 = -1;
	uint32_t t30 = 2830936U;

	t30 = ((x121|x122)&(x123|x124));

	if (t30 != 2088414U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -3;
	int64_t x126 = -1697446131245LL;
	static uint16_t x128 = UINT16_MAX;
	static int64_t t31 = 104571415435512320LL;

	t31 = ((x125|x126)&(x127|x128));

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	volatile int8_t x130 = INT8_MIN;
	volatile int16_t x132 = -5;
	int32_t t32 = -3147747;

	t32 = ((x129|x130)&(x131|x132));

	if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int16_t x135 = -1;
	int64_t x136 = 54722277LL;
	volatile int64_t t33 = 859981LL;

	t33 = ((x133|x134)&(x135|x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 5LL;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	static int64_t t34 = 2817LL;

	t34 = ((x137|x138)&(x139|x140));

	if (t34 != 300695LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 30937U;
	static uint64_t x142 = UINT64_MAX;
	static volatile int16_t x143 = INT16_MIN;
	uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x141|x142)&(x143|x144));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x146 = 4LLU;
	int16_t x147 = -4320;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t36 = 3585933LLU;

	t36 = ((x145|x146)&(x147|x148));

	if (t36 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -1;
	volatile int64_t t37 = -2LL;

	t37 = ((x149|x150)&(x151|x152));

	if (t37 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 1;
	static int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = 4391363875323139132LLU;

	t38 = ((x153|x154)&(x155|x156));

	if (t38 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x158 = 5164;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = -1;
	static int32_t t39 = -1;

	t39 = ((x157|x158)&(x159|x160));

	if (t39 != 5164) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x162 = 29297728LLU;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 0;
	volatile uint64_t t40 = 6972245567LLU;

	t40 = ((x161|x162)&(x163|x164));

	if (t40 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint64_t x167 = 616707456300734846LLU;
	uint32_t x168 = 198U;
	static volatile uint64_t t41 = 3444396492669LLU;

	t41 = ((x165|x166)&(x167|x168));

	if (t41 != 616707456300734974LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = INT64_MIN;
	int64_t t42 = 28773LL;

	t42 = ((x169|x170)&(x171|x172));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 0;
	uint32_t x174 = 1U;
	uint16_t x175 = 4U;
	int8_t x176 = INT8_MIN;
	volatile uint32_t t43 = 1U;

	t43 = ((x173|x174)&(x175|x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	volatile int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t44 = 209454LL;

	t44 = ((x177|x178)&(x179|x180));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = 52;
	static int8_t x184 = -1;

	t45 = ((x181|x182)&(x183|x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 7;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -1LL;
	int32_t x188 = -1;

	t46 = ((x185|x186)&(x187|x188));

	if (t46 != -121LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	static int32_t x190 = -64;
	int64_t x191 = INT64_MIN;
	uint8_t x192 = 68U;
	uint64_t t47 = 5379LLU;

	t47 = ((x189|x190)&(x191|x192));

	if (t47 != 9223372036854775876LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -2LL;
	static uint8_t x194 = UINT8_MAX;
	int8_t x195 = 1;
	volatile int64_t t48 = 145162LL;

	t48 = ((x193|x194)&(x195|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 15U;
	uint16_t x199 = 44U;
	int32_t x200 = INT32_MAX;
	static volatile int32_t t49 = -383033;

	t49 = ((x197|x198)&(x199|x200));

	if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -3512;

	t50 = ((x201|x202)&(x203|x204));

	if (t50 != 2147483520) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	volatile uint64_t x206 = 340101330759LLU;
	volatile uint64_t t51 = 87962LLU;

	t51 = ((x205|x206)&(x207|x208));

	if (t51 != 4294934661LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	static uint64_t t52 = 1796LLU;

	t52 = ((x209|x210)&(x211|x212));

	if (t52 != 4294934528LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 103;
	uint16_t x216 = 8355U;

	t53 = ((x213|x214)&(x215|x216));

	if (t53 != 167) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 2;
	int16_t x218 = INT16_MAX;
	uint16_t x219 = 15068U;
	volatile int16_t x220 = 0;
	volatile int32_t t54 = -935193;

	t54 = ((x217|x218)&(x219|x220));

	if (t54 != 15068) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = 23949;
	int64_t x223 = -1LL;
	int64_t x224 = INT64_MAX;
	int64_t t55 = -83931913971303LL;

	t55 = ((x221|x222)&(x223|x224));

	if (t55 != -115LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -372958;
	static uint16_t x226 = UINT16_MAX;
	static uint16_t x227 = UINT16_MAX;
	volatile int32_t t56 = 49294;

	t56 = ((x225|x226)&(x227|x228));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 2058LLU;
	uint8_t x230 = 61U;
	volatile int8_t x231 = -15;
	static int16_t x232 = INT16_MIN;

	t57 = ((x229|x230)&(x231|x232));

	if (t57 != 2097LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	volatile int32_t t58 = -139874856;

	t58 = ((x233|x234)&(x235|x236));

	if (t58 != -30592) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint16_t x239 = 1U;
	static int64_t t59 = INT64_MIN;

	t59 = ((x237|x238)&(x239|x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 3;
	uint16_t x242 = 178U;
	int64_t x243 = INT64_MAX;
	static volatile int64_t t60 = 1LL;

	t60 = ((x241|x242)&(x243|x244));

	if (t60 != 179LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -113308LL;
	int8_t x246 = INT8_MIN;
	static int64_t x247 = 944878631LL;
	int8_t x248 = INT8_MIN;
	volatile int64_t t61 = 588355643967527057LL;

	t61 = ((x245|x246)&(x247|x248));

	if (t61 != -92LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	int16_t x250 = -1;
	int32_t x252 = 2239749;
	int32_t t62 = 109939;

	t62 = ((x249|x250)&(x251|x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = 385255;
	int8_t x255 = -1;
	int64_t x256 = INT64_MIN;
	int64_t t63 = 124120LL;

	t63 = ((x253|x254)&(x255|x256));

	if (t63 != -9223372036854390553LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x258 = -70522994082005800LL;
	int64_t x260 = INT64_MAX;
	int64_t t64 = -94166075823LL;

	t64 = ((x257|x258)&(x259|x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -58233;
	int32_t x262 = 5145;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -27548;

	t65 = ((x261|x262)&(x263|x264));

	if (t65 != -65505) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 692LLU;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = UINT16_MAX;
	uint64_t t66 = 55764310913668LLU;

	t66 = ((x265|x266)&(x267|x268));

	if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -11;
	volatile uint16_t x270 = 876U;
	int16_t x272 = -1;

	t67 = ((x269|x270)&(x271|x272));

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint32_t x274 = 34783U;
	uint32_t x275 = 15853640U;
	volatile int64_t x276 = 1297180917640243308LL;
	volatile int64_t t68 = 125765LL;

	t68 = ((x273|x274)&(x275|x276));

	if (t68 != 4261275756LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	uint8_t x278 = UINT8_MAX;
	volatile int32_t x279 = 5946;
	volatile int64_t t69 = 746759427882865LL;

	t69 = ((x277|x278)&(x279|x280));

	if (t69 != 6015LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1276822;
	int8_t x282 = 24;
	volatile uint32_t x283 = UINT32_MAX;
	int64_t x284 = 9903972937LL;
	static int64_t t70 = -367329062867LL;

	t70 = ((x281|x282)&(x283|x284));

	if (t70 != 12883625082LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 198173LL;
	int16_t x286 = INT16_MIN;
	int64_t x287 = 986798006946LL;
	int64_t x288 = INT64_MIN;
	volatile int64_t t71 = 93342706494409LL;

	t71 = ((x285|x286)&(x287|x288));

	if (t71 != -9223371050056777216LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static volatile int32_t x290 = INT32_MIN;
	int8_t x291 = 0;
	volatile int8_t x292 = 5;
	static volatile int32_t t72 = -406150109;

	t72 = ((x289|x290)&(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	int32_t x294 = INT32_MIN;
	volatile uint16_t x295 = 9U;
	static volatile int64_t t73 = -234973LL;

	t73 = ((x293|x294)&(x295|x296));

	if (t73 != 4294967295LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile uint64_t x298 = 984205654691737534LLU;
	static uint8_t x299 = 43U;
	int8_t x300 = 5;
	static volatile uint64_t t74 = 7035LLU;

	t74 = ((x297|x298)&(x299|x300));

	if (t74 != 47LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MAX;
	uint8_t x303 = 4U;
	int16_t x304 = INT16_MAX;

	t75 = ((x301|x302)&(x303|x304));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x305 = 282856LLU;
	int8_t x306 = INT8_MAX;
	static int16_t x307 = -1;
	int64_t x308 = INT64_MIN;

	t76 = ((x305|x306)&(x307|x308));

	if (t76 != 282879LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MAX;
	static uint64_t x311 = 5LLU;
	int64_t x312 = -1LL;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x309|x310)&(x311|x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = 26763786614454728LLU;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = UINT64_MAX;

	t78 = ((x313|x314)&(x315|x316));

	if (t78 != 18446744072266693064LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 16028U;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 0;
	int32_t x320 = 428125;
	volatile int64_t t79 = 38LL;

	t79 = ((x317|x318)&(x319|x320));

	if (t79 != 2076LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1735964U;
	int64_t x323 = -41LL;
	int32_t x324 = 58;
	volatile int64_t t80 = -1389847664309154600LL;

	t80 = ((x321|x322)&(x323|x324));

	if (t80 != 1735967LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x327 = 261;
	uint64_t x328 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x325|x326)&(x327|x328));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MAX;
	int32_t x332 = INT32_MAX;

	t82 = ((x329|x330)&(x331|x332));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -3919;
	volatile int64_t x334 = -1LL;
	uint16_t x335 = 14U;
	uint8_t x336 = 1U;
	static volatile int64_t t83 = 69248LL;

	t83 = ((x333|x334)&(x335|x336));

	if (t83 != 15LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	static uint16_t x338 = 25196U;
	static int16_t x339 = -13105;
	static int32_t x340 = INT32_MIN;
	volatile uint64_t t84 = 895955292967148LLU;

	t84 = ((x337|x338)&(x339|x340));

	if (t84 != 18446744073709538511LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = -14;
	uint32_t x342 = 253425618U;
	uint32_t x343 = 3U;

	t85 = ((x341|x342)&(x343|x344));

	if (t85 != 4294967282U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -74611;
	volatile int16_t x347 = 0;
	int16_t x348 = -1;
	int64_t t86 = -15LL;

	t86 = ((x345|x346)&(x347|x348));

	if (t86 != -66129LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -79;
	uint8_t x350 = 57U;
	static int16_t x351 = -1;
	uint16_t x352 = 323U;
	static volatile int32_t t87 = 102788460;

	t87 = ((x349|x350)&(x351|x352));

	if (t87 != -71) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 0U;
	int64_t x354 = INT64_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t88 = INT64_MIN;

	t88 = ((x353|x354)&(x355|x356));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 87747043530LL;
	uint16_t x358 = 7986U;
	uint8_t x359 = 53U;

	t89 = ((x357|x358)&(x359|x360));

	if (t89 != 87747035184LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = INT16_MAX;
	static volatile int16_t x362 = -1;
	static int16_t x363 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;

	t90 = ((x361|x362)&(x363|x364));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = 568207974197081795LL;
	static int32_t x368 = INT32_MAX;
	int64_t t91 = 195928LL;

	t91 = ((x365|x366)&(x367|x368));

	if (t91 != 568207972644159488LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = INT16_MIN;
	volatile int64_t x371 = -237248775500367LL;
	uint32_t x372 = UINT32_MAX;
	int64_t t92 = -587133550580623LL;

	t92 = ((x369|x370)&(x371|x372));

	if (t92 != -237245403529216LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	static volatile int8_t x374 = INT8_MIN;
	int8_t x375 = 21;
	static volatile int32_t t93 = -2;

	t93 = ((x373|x374)&(x375|x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x379 = 2945029U;
	int16_t x380 = INT16_MIN;

	t94 = ((x377|x378)&(x379|x380));

	if (t94 != 2147483653U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 4U;
	static int64_t x383 = -1LL;
	volatile uint8_t x384 = UINT8_MAX;
	int64_t t95 = -393212969LL;

	t95 = ((x381|x382)&(x383|x384));

	if (t95 != -2147483644LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x387 = 243U;
	volatile uint32_t t96 = 81677325U;

	t96 = ((x385|x386)&(x387|x388));

	if (t96 != 243U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 108197;
	int16_t x390 = INT16_MIN;
	uint64_t x392 = 249273437198464LLU;

	t97 = ((x389|x390)&(x391|x392));

	if (t97 != 18446744073709527716LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int32_t x394 = 2534;
	int16_t x396 = INT16_MIN;

	t98 = ((x393|x394)&(x395|x396));

	if (t98 != 4294934533U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 0;
	static volatile int32_t t99 = INT32_MIN;

	t99 = ((x397|x398)&(x399|x400));

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

