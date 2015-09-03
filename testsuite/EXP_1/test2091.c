#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint16_t x7 = 1455U;
int64_t t1 = 19502155803LL;
int32_t x11 = -38;
int16_t x13 = INT16_MIN;
int32_t x27 = INT32_MIN;
int32_t x35 = INT32_MIN;
static uint64_t x36 = 395LLU;
int32_t x37 = INT32_MIN;
volatile int8_t x49 = 1;
uint16_t x50 = 668U;
int8_t x52 = -1;
static int64_t x54 = INT64_MIN;
static volatile int64_t t12 = INT64_MIN;
uint64_t x62 = 413087LLU;
int64_t x66 = 1078294590750LL;
static int8_t x69 = INT8_MIN;
int64_t x71 = -15LL;
uint8_t x74 = 61U;
uint16_t x75 = 447U;
volatile uint16_t x82 = 66U;
uint16_t x84 = 1797U;
int8_t x86 = -2;
static int16_t x91 = INT16_MAX;
static int64_t t22 = 11574LL;
uint16_t x102 = 138U;
int16_t x107 = INT16_MIN;
static uint64_t t26 = 1881LLU;
int32_t x122 = INT32_MIN;
int8_t x123 = -1;
int8_t x138 = 3;
static uint8_t x142 = UINT8_MAX;
int8_t x143 = INT8_MAX;
static volatile int32_t t33 = 530;
int32_t x146 = 44;
int64_t t36 = 7669210LL;
uint64_t x160 = 47720LLU;
static volatile uint64_t t37 = 3486590935000668LLU;
volatile int16_t x175 = INT16_MAX;
uint16_t x188 = 10U;
static uint16_t x189 = 5U;
volatile uint32_t x194 = 702974U;
volatile int16_t x200 = INT16_MAX;
static uint16_t x202 = 1U;
static int64_t t50 = 765483805LL;
static uint32_t x220 = UINT32_MAX;
static volatile uint64_t x225 = UINT64_MAX;
volatile uint64_t t53 = 33LLU;
static volatile uint32_t x232 = 182U;
static volatile int64_t x247 = -1LL;
int64_t x250 = -1LL;
uint16_t x257 = 15452U;
int8_t x260 = -1;
uint64_t x267 = 319286LLU;
uint64_t t63 = 15530649LLU;
volatile int16_t x271 = INT16_MIN;
int64_t x276 = 7307263929167143LL;
int32_t x282 = -233444480;
static volatile uint64_t x284 = UINT64_MAX;
int8_t x288 = INT8_MIN;
int8_t x291 = -1;
int64_t x292 = INT64_MIN;
static int64_t x302 = 2LL;
static volatile int64_t t72 = 12701LL;
uint16_t x306 = UINT16_MAX;
uint16_t x312 = 546U;
int8_t x313 = INT8_MAX;
int16_t x314 = INT16_MIN;
uint8_t x316 = 3U;
int16_t x323 = INT16_MIN;
volatile uint32_t t78 = 15478436U;
uint16_t x331 = 29866U;
int32_t x335 = INT32_MIN;
static int64_t x337 = 13LL;
int32_t x339 = INT32_MIN;
volatile int64_t t82 = -4LL;
uint8_t x345 = UINT8_MAX;
int32_t t84 = -3881060;
int32_t x354 = INT32_MAX;
uint8_t x369 = UINT8_MAX;
int8_t x371 = -2;
volatile int64_t t89 = 252542LL;
int32_t x375 = 463913;
volatile uint16_t x395 = UINT16_MAX;
static int64_t x403 = INT64_MIN;
volatile int8_t x406 = 42;
int32_t x411 = -1;


void f0(void) {
	int32_t x2 = 80;
	static int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	static volatile int64_t t0 = 322372LL;

	t0 = (((x1^x2)%x3)&x4);

	if (t0 != 9223372034707292240LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x6 = -77418LL;
	static int16_t x8 = -1;

	t1 = (((x5^x6)%x7)&x8);

	if (t1 != 302LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int8_t x10 = INT8_MIN;
	volatile int64_t x12 = INT64_MAX;
	int64_t t2 = 15151670LL;

	t2 = (((x9^x10)%x11)&x12);

	if (t2 != 13LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x14 = 13;
	uint8_t x15 = 4U;
	uint32_t x16 = 946948U;
	volatile uint32_t t3 = 40508U;

	t3 = (((x13^x14)%x15)&x16);

	if (t3 != 946948U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = INT64_MAX;
	volatile uint16_t x22 = 8169U;
	uint64_t x23 = UINT64_MAX;
	static int32_t x24 = -254;
	volatile uint64_t t4 = 32204923018838LLU;

	t4 = (((x21^x22)%x23)&x24);

	if (t4 != 9223372036854767618LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	uint16_t x26 = 6U;
	int16_t x28 = INT16_MIN;
	static int32_t t5 = -628099674;

	t5 = (((x25^x26)%x27)&x28);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = 28786U;
	volatile uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = -1;
	static volatile int32_t t6 = -7243416;

	t6 = (((x29^x30)%x31)&x32);

	if (t6 != 29) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile uint64_t t7 = 1824604051054LLU;

	t7 = (((x33^x34)%x35)&x36);

	if (t7 != 395LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x38 = 6U;
	int16_t x39 = -1;
	uint64_t x40 = 1517410261334LLU;
	volatile uint64_t t8 = 2619131230LLU;

	t8 = (((x37^x38)%x39)&x40);

	if (t8 != 6LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MIN;
	static int64_t x43 = INT64_MAX;
	volatile int64_t x44 = 567810609LL;
	int64_t t9 = 108721824LL;

	t9 = (((x41^x42)%x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x45 = -1;
	uint16_t x46 = 1U;
	volatile int16_t x47 = -9774;
	uint8_t x48 = UINT8_MAX;
	static int32_t t10 = 1370790;

	t10 = (((x45^x46)%x47)&x48);

	if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x51 = UINT16_MAX;
	volatile int32_t t11 = 232529800;

	t11 = (((x49^x50)%x51)&x52);

	if (t11 != 669) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MIN;

	t12 = (((x53^x54)%x55)&x56);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 2071U;
	uint8_t x58 = 3U;
	volatile uint64_t x59 = UINT64_MAX;
	uint64_t x60 = 1751398885072LLU;
	volatile uint64_t t13 = 1LLU;

	t13 = (((x57^x58)%x59)&x60);

	if (t13 != 16LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int32_t x63 = 772;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t14 = 1767031920477216LLU;

	t14 = (((x61^x62)%x63)&x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x67 = 3;
	int16_t x68 = -1;
	volatile int64_t t15 = -1614084LL;

	t15 = (((x65^x66)%x67)&x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;
	int64_t t16 = -189490922362LL;

	t16 = (((x69^x70)%x71)&x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 550508660736259904LLU;

	t17 = (((x73^x74)%x75)&x76);

	if (t17 != 18446744073709551240LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = INT64_MIN;
	static volatile int64_t x78 = -1LL;
	uint8_t x79 = 15U;
	volatile int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -102073822LL;

	t18 = (((x77^x78)%x79)&x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 221;
	uint32_t x83 = 2U;
	static uint32_t t19 = 21U;

	t19 = (((x81^x82)%x83)&x84);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = -119;
	int32_t x87 = INT32_MAX;
	int64_t x88 = -372LL;
	int64_t t20 = -24812773LL;

	t20 = (((x85^x86)%x87)&x88);

	if (t20 != 4LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	volatile int16_t x90 = INT16_MIN;
	uint8_t x92 = 0U;
	int32_t t21 = 20;

	t21 = (((x89^x90)%x91)&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = -1;
	volatile int32_t x94 = INT32_MIN;
	static int8_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t22 = (((x93^x94)%x95)&x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	uint32_t x98 = 1U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -1;
	volatile int64_t t23 = -37926549LL;

	t23 = (((x97^x98)%x99)&x100);

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t24 = -3288;

	t24 = (((x101^x102)%x103)&x104);

	if (t24 != 2147483402) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 103304233765148853LLU;
	int8_t x106 = -1;
	int32_t x108 = 9374793;
	uint64_t t25 = 1723860881616335278LLU;

	t25 = (((x105^x106)%x107)&x108);

	if (t25 != 8520776LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 277106216976126LLU;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = -708390216483478LL;
	volatile uint64_t x112 = 21077038704LLU;

	t26 = (((x109^x110)%x111)&x112);

	if (t26 != 20401094656LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -523306LL;
	static int32_t x114 = 41448;
	int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	static volatile int64_t t27 = 33LL;

	t27 = (((x113^x114)%x115)&x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	int8_t x118 = -8;
	volatile int64_t x119 = -1LL;
	volatile int32_t x120 = 958;
	static volatile int64_t t28 = 25810357150LL;

	t28 = (((x117^x118)%x119)&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	int64_t x124 = 7524749163912LL;
	static int64_t t29 = 32016155790452091LL;

	t29 = (((x121^x122)%x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MAX;
	int32_t x126 = -1;
	static uint32_t x127 = 4U;
	int32_t x128 = INT32_MAX;
	uint32_t t30 = 207931445U;

	t30 = (((x125^x126)%x127)&x128);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 3043701419907898LLU;
	int8_t x135 = 30;
	int64_t x136 = -1LL;
	uint64_t t31 = 47404135745LLU;

	t31 = (((x133^x134)%x135)&x136);

	if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	static uint32_t x139 = 22153252U;
	int32_t x140 = 2352337;
	uint64_t t32 = 1498954LLU;

	t32 = (((x137^x138)%x139)&x140);

	if (t32 != 147472LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = 0;
	int8_t x144 = INT8_MAX;

	t33 = (((x141^x142)%x143)&x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -2;
	uint32_t x147 = 20U;
	uint32_t x148 = 13811U;
	uint32_t t34 = 6952804U;

	t34 = (((x145^x146)%x147)&x148);

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = 393824988;
	int64_t x151 = INT64_MIN;
	int8_t x152 = -7;
	volatile int64_t t35 = -122040698912117LL;

	t35 = (((x149^x150)%x151)&x152);

	if (t35 != -1753658664LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int16_t x154 = INT16_MAX;
	static volatile int64_t x155 = -530815567043406LL;
	int32_t x156 = INT32_MIN;

	t36 = (((x153^x154)%x155)&x156);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 8;
	int64_t x158 = -1277090132040458LL;
	static int64_t x159 = INT64_MIN;

	t37 = (((x157^x158)%x159)&x160);

	if (t37 != 8296LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x161 = 1;
	static uint64_t x162 = 328LLU;
	int64_t x163 = -1LL;
	volatile int8_t x164 = INT8_MIN;
	volatile uint64_t t38 = 629511792LLU;

	t38 = (((x161^x162)%x163)&x164);

	if (t38 != 256LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 13324672360567758LLU;
	uint16_t x166 = 0U;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t39 = 12781LLU;

	t39 = (((x165^x166)%x167)&x168);

	if (t39 != 13696LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x169 = -1LL;
	int64_t x170 = INT64_MAX;
	static int16_t x171 = INT16_MIN;
	static int64_t x172 = INT64_MAX;
	int64_t t40 = -50525440368770619LL;

	t40 = (((x169^x170)%x171)&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = INT8_MIN;
	uint16_t x174 = 1951U;
	int8_t x176 = -1;
	volatile int32_t t41 = 14;

	t41 = (((x173^x174)%x175)&x176);

	if (t41 != -2017) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -1LL;
	volatile uint8_t x179 = 10U;
	static int64_t x180 = -1LL;
	static volatile int64_t t42 = 234LL;

	t42 = (((x177^x178)%x179)&x180);

	if (t42 != 7LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 0U;
	volatile int32_t x182 = 58743474;
	int32_t x183 = 549459937;
	int64_t x184 = INT64_MAX;
	volatile int64_t t43 = -60043848556LL;

	t43 = (((x181^x182)%x183)&x184);

	if (t43 != 58743474LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	volatile int8_t x186 = 0;
	int64_t x187 = INT64_MIN;
	volatile uint64_t t44 = 1336936711773137323LLU;

	t44 = (((x185^x186)%x187)&x188);

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x190 = 7U;
	int64_t x191 = -1LL;
	int64_t x192 = INT64_MAX;
	int64_t t45 = 214526873LL;

	t45 = (((x189^x190)%x191)&x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -1;
	static int64_t x195 = -1LL;
	int16_t x196 = -1;
	volatile int64_t t46 = 1837783008LL;

	t46 = (((x193^x194)%x195)&x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	int32_t t47 = -4854;

	t47 = (((x197^x198)%x199)&x200);

	if (t47 != 32512) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = 4588U;
	uint32_t x203 = 17U;
	int32_t x204 = 0;
	uint32_t t48 = 121929765U;

	t48 = (((x201^x202)%x203)&x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = 1592257722814397752LL;
	static int64_t x210 = INT64_MIN;
	int32_t x211 = 733066;
	static volatile int32_t x212 = 1;
	int64_t t49 = 7732663139332804LL;

	t49 = (((x209^x210)%x211)&x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = 409;
	int16_t x214 = -1;
	volatile int8_t x215 = 2;
	int64_t x216 = -1LL;

	t50 = (((x213^x214)%x215)&x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = 135;
	int32_t x218 = -51;
	int8_t x219 = -1;
	static volatile uint32_t t51 = 243614U;

	t51 = (((x217^x218)%x219)&x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = UINT8_MAX;
	static int16_t x222 = 18;
	static int8_t x223 = 9;
	int16_t x224 = -614;
	volatile int32_t t52 = 1973742;

	t52 = (((x221^x222)%x223)&x224);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x226 = 6LL;
	volatile int64_t x227 = 430833746009462LL;
	int16_t x228 = INT16_MAX;

	t53 = (((x225^x226)%x227)&x228);

	if (t53 != 10361LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = 541;
	uint64_t x231 = 35637396417971LLU;
	static uint64_t t54 = 798283701306964LLU;

	t54 = (((x229^x230)%x231)&x232);

	if (t54 != 160LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MAX;
	static int32_t x234 = -1;
	uint16_t x235 = UINT16_MAX;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (((x233^x234)%x235)&x236);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -51445126;
	volatile int64_t x239 = 90640168LL;
	int8_t x240 = 1;
	volatile int64_t t56 = 17176739323699LL;

	t56 = (((x237^x238)%x239)&x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	static int64_t x243 = 70544652LL;
	uint16_t x244 = 633U;
	volatile int64_t t57 = 1100LL;

	t57 = (((x241^x242)%x243)&x244);

	if (t57 != 633LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x245 = 169730790589686234LLU;
	static int64_t x246 = -1LL;
	int32_t x248 = -1;
	static volatile uint64_t t58 = 8LLU;

	t58 = (((x245^x246)%x247)&x248);

	if (t58 != 18277013283119865381LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	int16_t x252 = -1;
	static int64_t t59 = -6252278450193LL;

	t59 = (((x249^x250)%x251)&x252);

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x253 = 105737207;
	static volatile uint32_t x254 = UINT32_MAX;
	static int64_t x255 = 2000080532177280LL;
	volatile uint8_t x256 = 6U;
	int64_t t60 = -851051308LL;

	t60 = (((x253^x254)%x255)&x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x258 = INT16_MAX;
	static uint8_t x259 = 1U;
	volatile int32_t t61 = -1;

	t61 = (((x257^x258)%x259)&x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 905556U;
	int32_t x262 = INT32_MAX;
	uint16_t x263 = 719U;
	int32_t x264 = -866277147;
	uint32_t t62 = 19225590U;

	t62 = (((x261^x262)%x263)&x264);

	if (t62 != 193U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 4780571U;
	uint64_t x266 = UINT64_MAX;
	int64_t x268 = -29119366337163861LL;

	t63 = (((x265^x266)%x267)&x268);

	if (t63 != 34186LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = -1;
	int8_t x270 = -55;
	volatile uint64_t x272 = 3931490778LLU;
	uint64_t t64 = 908LLU;

	t64 = (((x269^x270)%x271)&x272);

	if (t64 != 18LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = 903U;
	int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	int64_t t65 = -775584899002LL;

	t65 = (((x273^x274)%x275)&x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x278 = UINT64_MAX;
	int64_t x279 = -20LL;
	uint32_t x280 = 20756154U;
	uint64_t t66 = 11741160790LLU;

	t66 = (((x277^x278)%x279)&x280);

	if (t66 != 20742144LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -3;
	volatile uint16_t x283 = 26U;
	static volatile uint64_t t67 = 172302674LLU;

	t67 = (((x281^x282)%x283)&x284);

	if (t67 != 19LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = -4;
	static int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = 148679U;
	static uint32_t t68 = 55U;

	t68 = (((x285^x286)%x287)&x288);

	if (t68 != 32640U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	volatile uint64_t x290 = 398LLU;
	volatile uint64_t t69 = 167860166030LLU;

	t69 = (((x289^x290)%x291)&x292);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = -4;
	int32_t x294 = INT32_MIN;
	uint64_t x295 = 21312109LLU;
	static int16_t x296 = 51;
	static volatile uint64_t t70 = 106LLU;

	t70 = (((x293^x294)%x295)&x296);

	if (t70 != 32LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x297 = INT8_MAX;
	int32_t x298 = INT32_MAX;
	int64_t x299 = 8LL;
	static int32_t x300 = INT32_MIN;
	static volatile int64_t t71 = 8712LL;

	t71 = (((x297^x298)%x299)&x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x301 = -1;
	volatile uint16_t x303 = 3806U;
	uint32_t x304 = 153465U;

	t72 = (((x301^x302)%x303)&x304);

	if (t72 != 153465LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = 1;
	static int64_t x307 = INT64_MIN;
	uint8_t x308 = 8U;
	volatile int64_t t73 = -18702422331956176LL;

	t73 = (((x305^x306)%x307)&x308);

	if (t73 != 8LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = -1LL;
	volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = 525351713511LLU;
	uint64_t t74 = 34164968943LLU;

	t74 = (((x309^x310)%x311)&x312);

	if (t74 != 546LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x315 = -27;
	volatile int32_t t75 = -1790;

	t75 = (((x313^x314)%x315)&x316);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = 82U;
	volatile int8_t x318 = INT8_MIN;
	static uint32_t x319 = 744523U;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t76 = -12549130483LL;

	t76 = (((x317^x318)%x319)&x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = 0;
	int32_t x322 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	int64_t t77 = 0LL;

	t77 = (((x321^x322)%x323)&x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = -419;
	int8_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 5U;

	t78 = (((x325^x326)%x327)&x328);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = 1;
	volatile uint64_t x330 = UINT64_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	uint64_t t79 = 12920311463758LLU;

	t79 = (((x329^x330)%x331)&x332);

	if (t79 != 1154LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	uint32_t x336 = 60687U;
	static volatile int64_t t80 = -382888962850005LL;

	t80 = (((x333^x334)%x335)&x336);

	if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x338 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	int64_t t81 = 180109LL;

	t81 = (((x337^x338)%x339)&x340);

	if (t81 != 2147450893LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x341 = INT32_MAX;
	int64_t x342 = -1LL;
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 2U;

	t82 = (((x341^x342)%x343)&x344);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 206682704U;
	volatile uint32_t t83 = 565026790U;

	t83 = (((x345^x346)%x347)&x348);

	if (t83 != 206667856U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -1;
	volatile int16_t x350 = 3307;
	int16_t x351 = INT16_MIN;
	volatile int8_t x352 = -1;

	t84 = (((x349^x350)%x351)&x352);

	if (t84 != -3308) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 0U;
	volatile uint16_t x355 = 219U;
	int8_t x356 = -1;
	int32_t t85 = -58518;

	t85 = (((x353^x354)%x355)&x356);

	if (t85 != 88) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = 3468U;
	static volatile int32_t x358 = INT32_MIN;
	volatile int8_t x359 = 1;
	volatile uint16_t x360 = 185U;
	uint32_t t86 = 72458518U;

	t86 = (((x357^x358)%x359)&x360);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = 0U;
	static int16_t x362 = -13216;
	volatile uint32_t x363 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	int64_t t87 = -141LL;

	t87 = (((x361^x362)%x363)&x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = -1LL;
	int32_t x366 = INT32_MAX;
	uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 1486U;
	static volatile int64_t t88 = -1112LL;

	t88 = (((x365^x366)%x367)&x368);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x370 = INT64_MIN;
	volatile int64_t x372 = -487975270815847297LL;

	t89 = (((x369^x370)%x371)&x372);

	if (t89 != -487975270815847297LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = 5033808U;
	uint32_t x374 = 725658U;
	uint64_t x376 = 459058722719LLU;
	static volatile uint64_t t90 = 4376422793045LLU;

	t90 = (((x373^x374)%x375)&x376);

	if (t90 != 5136LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 11U;
	static int64_t x378 = 2985426017492339776LL;
	static uint8_t x379 = 11U;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t91 = 459844709390038412LL;

	t91 = (((x377^x378)%x379)&x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -6;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = INT64_MIN;
	uint8_t x384 = 0U;
	uint64_t t92 = 1495178708LLU;

	t92 = (((x381^x382)%x383)&x384);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = UINT16_MAX;
	static volatile int32_t x386 = -1;
	int16_t x387 = INT16_MAX;
	uint8_t x388 = 1U;
	static volatile int32_t t93 = 21;

	t93 = (((x385^x386)%x387)&x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = 79398U;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	int64_t t94 = -269014852LL;

	t94 = (((x389^x390)%x391)&x392);

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 31U;
	int64_t x394 = -1506719510581140LL;
	uint16_t x396 = 31U;
	volatile int64_t t95 = -1257563031166LL;

	t95 = (((x393^x394)%x395)&x396);

	if (t95 != 31LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 91U;
	int8_t x398 = -1;
	static volatile int8_t x399 = -2;
	volatile uint8_t x400 = 49U;
	static volatile int32_t t96 = 14;

	t96 = (((x397^x398)%x399)&x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MAX;
	uint16_t x402 = 432U;
	int64_t x404 = INT64_MIN;
	int64_t t97 = -3595077655LL;

	t97 = (((x401^x402)%x403)&x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x405 = 0U;
	volatile uint32_t x407 = UINT32_MAX;
	int16_t x408 = -4;
	uint32_t t98 = 1227813U;

	t98 = (((x405^x406)%x407)&x408);

	if (t98 != 40U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x409 = 1U;
	static int16_t x410 = INT16_MAX;
	static uint32_t x412 = UINT32_MAX;
	uint32_t t99 = 78U;

	t99 = (((x409^x410)%x411)&x412);

	if (t99 != 32766U) { NG(); } else { ; }
	
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

