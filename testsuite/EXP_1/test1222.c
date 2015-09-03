#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
volatile int32_t t1 = 157311;
static int32_t x10 = INT32_MIN;
int32_t t3 = 0;
int8_t x21 = INT8_MIN;
int64_t x23 = -3043521950347547186LL;
int64_t t6 = 2LL;
volatile uint64_t t8 = UINT64_MAX;
int32_t x42 = 250007186;
static int16_t x43 = INT16_MIN;
int32_t t10 = -1293;
volatile int32_t t11 = 189329983;
uint64_t x63 = UINT64_MAX;
int64_t x66 = INT64_MIN;
int32_t x67 = INT32_MAX;
volatile int64_t x69 = INT64_MIN;
int8_t x70 = INT8_MAX;
volatile int32_t x71 = INT32_MIN;
static volatile int8_t x72 = -20;
int64_t x83 = 33597724049971LL;
static volatile uint8_t x84 = UINT8_MAX;
static uint16_t x86 = 76U;
static volatile uint16_t x93 = 206U;
uint64_t x100 = UINT64_MAX;
static volatile uint64_t t24 = UINT64_MAX;
uint32_t t25 = 315U;
int8_t x105 = -1;
volatile uint32_t x106 = 3038704U;
uint64_t x111 = 29351519340LLU;
int32_t x114 = -1;
int16_t x122 = INT16_MIN;
volatile uint64_t t30 = 430497132LLU;
static int8_t x132 = INT8_MIN;
int64_t x137 = -1LL;
uint16_t x139 = UINT16_MAX;
int32_t t34 = 874037;
int32_t x142 = INT32_MIN;
uint16_t x145 = 3U;
volatile int32_t x151 = -247504822;
static uint16_t x154 = UINT16_MAX;
static volatile uint8_t x165 = 49U;
uint16_t x168 = 201U;
static int16_t x172 = INT16_MIN;
int32_t t42 = 7185;
uint64_t x175 = UINT64_MAX;
int32_t x176 = INT32_MIN;
uint64_t t46 = 25380LLU;
int16_t x191 = -1;
volatile int16_t x199 = INT16_MIN;
uint64_t x204 = 481257057790081LLU;
uint64_t t53 = 22512058049996LLU;
uint16_t x217 = UINT16_MAX;
int64_t x229 = INT64_MAX;
uint16_t x234 = 7963U;
volatile uint64_t x238 = 28368LLU;
int16_t x239 = -780;
uint8_t x241 = 74U;
volatile uint8_t x252 = 76U;
uint8_t x253 = 120U;
int64_t x259 = -119LL;
int64_t t64 = 131019443596LL;
volatile int32_t x263 = -79454110;
int64_t x265 = -2LL;
int64_t x266 = 14327072308162LL;
volatile uint32_t x275 = 18U;
uint32_t x278 = 2085021U;
int8_t x280 = -10;
volatile int64_t t69 = -1141LL;
static int16_t x287 = -1;
int8_t x292 = -1;
uint32_t x297 = 56797928U;
int8_t x298 = INT8_MIN;
int32_t t74 = 1;
uint8_t x306 = 4U;
volatile int32_t x308 = INT32_MAX;
int64_t x327 = INT64_MAX;
uint64_t x328 = 6787166470727005LLU;
uint8_t x335 = 39U;
volatile uint32_t x344 = UINT32_MAX;
int16_t x354 = -1;
int8_t x357 = INT8_MAX;
int32_t x360 = 12006314;
int64_t x362 = INT64_MIN;
int64_t x365 = INT64_MAX;
uint16_t x369 = UINT16_MAX;
int64_t t93 = INT64_MIN;
uint16_t x377 = 0U;
int32_t x389 = INT32_MAX;
static int8_t x392 = INT8_MAX;
int8_t x393 = INT8_MIN;
uint32_t t99 = 5932715U;


void f0(void) {
	int16_t x1 = 7327;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = 12001;

	t0 = (((x1==x2)*x3)^x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	volatile int16_t x6 = -298;
	volatile int8_t x7 = -21;
	static uint16_t x8 = 3731U;

	t1 = (((x5==x6)*x7)^x8);

	if (t1 != 3731) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static uint32_t x11 = UINT32_MAX;
	int32_t x12 = 9659242;
	volatile uint32_t t2 = 14322U;

	t2 = (((x9==x10)*x11)^x12);

	if (t2 != 9659242U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -2;
	static int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	volatile uint8_t x16 = UINT8_MAX;

	t3 = (((x13==x14)*x15)^x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 237U;
	volatile uint32_t x20 = 4420U;
	uint32_t t4 = 162735U;

	t4 = (((x17==x18)*x19)^x20);

	if (t4 != 4420U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	int32_t x24 = -1;
	int64_t t5 = -74438621540369535LL;

	t5 = (((x21==x22)*x23)^x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = -1;
	int16_t x26 = INT16_MAX;
	int64_t x27 = INT64_MAX;
	static uint8_t x28 = UINT8_MAX;

	t6 = (((x25==x26)*x27)^x28);

	if (t6 != 255LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint64_t x30 = 2893976924LLU;
	volatile uint32_t x31 = 1245892U;
	uint16_t x32 = 0U;
	static volatile uint32_t t7 = 255U;

	t7 = (((x29==x30)*x31)^x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	volatile uint8_t x34 = 46U;
	uint16_t x35 = UINT16_MAX;
	uint64_t x36 = UINT64_MAX;

	t8 = (((x33==x34)*x35)^x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 257U;
	int64_t x38 = -1LL;
	static int32_t x39 = INT32_MAX;
	static volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -218285;

	t9 = (((x37==x38)*x39)^x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint8_t x44 = 10U;

	t10 = (((x41==x42)*x43)^x44);

	if (t10 != 10) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = -1;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = 9980115;
	uint16_t x48 = UINT16_MAX;

	t11 = (((x45==x46)*x47)^x48);

	if (t11 != 10008364) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = 899211259754LLU;
	uint16_t x51 = 47U;
	volatile int64_t x52 = INT64_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (((x49==x50)*x51)^x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 0U;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -654;

	t13 = (((x53==x54)*x55)^x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 3049LLU;
	static volatile uint8_t x58 = UINT8_MAX;
	volatile int64_t x59 = -1LL;
	int16_t x60 = 24;
	volatile int64_t t14 = -37160501148923LL;

	t14 = (((x57==x58)*x59)^x60);

	if (t14 != 24LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -1LL;
	int16_t x64 = INT16_MIN;
	static uint64_t t15 = 4817184637780LLU;

	t15 = (((x61==x62)*x63)^x64);

	if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 466120U;
	uint16_t x68 = 2440U;
	int32_t t16 = 55672278;

	t16 = (((x65==x66)*x67)^x68);

	if (t16 != 2440) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t t17 = -659;

	t17 = (((x69==x70)*x71)^x72);

	if (t17 != -20) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 7308U;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 337U;
	int64_t t18 = 3LL;

	t18 = (((x73==x74)*x75)^x76);

	if (t18 != 337LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -53LL;
	int64_t x78 = INT64_MAX;
	int32_t x79 = 723883;
	int32_t x80 = -822276282;
	static volatile int32_t t19 = 52;

	t19 = (((x77==x78)*x79)^x80);

	if (t19 != -822276282) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 413;
	static int64_t x82 = -26468895295LL;
	int64_t t20 = -1159696LL;

	t20 = (((x81==x82)*x83)^x84);

	if (t20 != 255LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x87 = 50516610;
	volatile int64_t x88 = INT64_MAX;
	volatile int64_t t21 = INT64_MAX;

	t21 = (((x85==x86)*x87)^x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 689466U;
	static int16_t x90 = -1;
	uint32_t x91 = 371495U;
	uint8_t x92 = UINT8_MAX;
	volatile uint32_t t22 = 208U;

	t22 = (((x89==x90)*x91)^x92);

	if (t22 != 255U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	int32_t x95 = -105610;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -92824357;

	t23 = (((x93==x94)*x95)^x96);

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 8276245055128488602LLU;
	uint16_t x99 = 107U;

	t24 = (((x97==x98)*x99)^x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 22810508U;

	t25 = (((x101==x102)*x103)^x104);

	if (t25 != 22810508U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 57904LLU;
	uint64_t t26 = 5061411473LLU;

	t26 = (((x105==x106)*x107)^x108);

	if (t26 != 57904LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 124006992LLU;
	uint64_t x110 = UINT64_MAX;
	static uint16_t x112 = 1U;
	static volatile uint64_t t27 = 263767LLU;

	t27 = (((x109==x110)*x111)^x112);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint64_t x115 = 3999746008LLU;
	int16_t x116 = INT16_MAX;
	static volatile uint64_t t28 = 6751906460106LLU;

	t28 = (((x113==x114)*x115)^x116);

	if (t28 != 3999741991LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 419U;
	int64_t x118 = -54036465LL;
	int8_t x119 = INT8_MIN;
	static int8_t x120 = INT8_MIN;
	int32_t t29 = -3477;

	t29 = (((x117==x118)*x119)^x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x123 = 10277LL;
	volatile uint64_t x124 = 849842LLU;

	t30 = (((x121==x122)*x123)^x124);

	if (t30 != 849842LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MAX;
	uint32_t x127 = 11U;
	static int8_t x128 = 2;
	volatile uint32_t t31 = 758876054U;

	t31 = (((x125==x126)*x127)^x128);

	if (t31 != 2U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	static int32_t x130 = INT32_MIN;
	static int8_t x131 = -1;
	static volatile int32_t t32 = -627;

	t32 = (((x129==x130)*x131)^x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = 262;
	static uint8_t x134 = 40U;
	uint64_t x135 = UINT64_MAX;
	uint16_t x136 = 18941U;
	volatile uint64_t t33 = 695573665LLU;

	t33 = (((x133==x134)*x135)^x136);

	if (t33 != 18941LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int16_t x140 = INT16_MIN;

	t34 = (((x137==x138)*x139)^x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	static int32_t t35 = -88;

	t35 = (((x141==x142)*x143)^x144);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 141273LLU;
	uint32_t x147 = 6028U;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (((x145==x146)*x147)^x148);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 3479;
	volatile int32_t x150 = 21;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t37 = -55599;

	t37 = (((x149==x150)*x151)^x152);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -985257;
	volatile int32_t x155 = INT32_MIN;
	volatile int64_t x156 = -1LL;
	int64_t t38 = 50LL;

	t38 = (((x153==x154)*x155)^x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = 8U;
	int16_t x159 = INT16_MIN;
	static uint8_t x160 = 10U;
	volatile int32_t t39 = 5714;

	t39 = (((x157==x158)*x159)^x160);

	if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 7597;
	volatile int32_t x162 = INT32_MIN;
	int32_t x163 = -1;
	static volatile int8_t x164 = -1;
	static int32_t t40 = 1790117;

	t40 = (((x161==x162)*x163)^x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = -1;
	volatile uint8_t x167 = 1U;
	int32_t t41 = -996829;

	t41 = (((x165==x166)*x167)^x168);

	if (t41 != 201) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 75U;
	uint8_t x170 = 23U;
	int8_t x171 = INT8_MIN;

	t42 = (((x169==x170)*x171)^x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	static int32_t x174 = 408;
	uint64_t t43 = 677094861LLU;

	t43 = (((x173==x174)*x175)^x176);

	if (t43 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = 10;
	int64_t x178 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	uint64_t x180 = 848994530258793335LLU;
	volatile uint64_t t44 = 1931554745996396LLU;

	t44 = (((x177==x178)*x179)^x180);

	if (t44 != 848994530258793335LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x182 = UINT8_MAX;
	volatile int64_t x183 = 1374253870839124732LL;
	static int8_t x184 = 7;
	volatile int64_t t45 = -22824536042933532LL;

	t45 = (((x181==x182)*x183)^x184);

	if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -392556LL;
	static volatile uint64_t x186 = 24LLU;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 3651011451LLU;

	t46 = (((x185==x186)*x187)^x188);

	if (t46 != 3651011451LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	uint8_t x190 = 30U;
	uint64_t x192 = 2046629727437411918LLU;
	static volatile uint64_t t47 = 2696742959LLU;

	t47 = (((x189==x190)*x191)^x192);

	if (t47 != 2046629727437411918LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = 17;
	static int8_t x195 = -1;
	volatile int64_t x196 = INT64_MIN;
	int64_t t48 = INT64_MIN;

	t48 = (((x193==x194)*x195)^x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 1U;
	int8_t x198 = INT8_MIN;
	int32_t x200 = -20;
	static int32_t t49 = 98011713;

	t49 = (((x197==x198)*x199)^x200);

	if (t49 != -20) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	volatile uint64_t t50 = 43530033521568LLU;

	t50 = (((x201==x202)*x203)^x204);

	if (t50 != 481257057790081LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int16_t x206 = INT16_MIN;
	static uint64_t x207 = 30790LLU;
	int64_t x208 = INT64_MAX;
	uint64_t t51 = 1041979813175LLU;

	t51 = (((x205==x206)*x207)^x208);

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	uint16_t x210 = 4U;
	int32_t x211 = INT32_MIN;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -8;

	t52 = (((x209==x210)*x211)^x212);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = 7458LLU;
	volatile int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = 4817930LLU;
	int8_t x216 = INT8_MIN;

	t53 = (((x213==x214)*x215)^x216);

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = UINT8_MAX;
	static int64_t x219 = -3995466933LL;
	int8_t x220 = INT8_MIN;
	volatile int64_t t54 = 4120487523511LL;

	t54 = (((x217==x218)*x219)^x220);

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -2;
	uint16_t x222 = 617U;
	volatile int64_t x223 = INT64_MIN;
	int16_t x224 = -1;
	volatile int64_t t55 = 1510730978LL;

	t55 = (((x221==x222)*x223)^x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MAX;
	volatile int64_t t56 = 154323451033269LL;

	t56 = (((x225==x226)*x227)^x228);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x230 = -1;
	int16_t x231 = -1;
	static volatile int32_t x232 = INT32_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (((x229==x230)*x231)^x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	int64_t x235 = -19295LL;
	int8_t x236 = INT8_MIN;
	volatile int64_t t58 = -1686LL;

	t58 = (((x233==x234)*x235)^x236);

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MAX;
	static int64_t x240 = -4169846316132250LL;
	volatile int64_t t59 = -108117875LL;

	t59 = (((x237==x238)*x239)^x240);

	if (t59 != -4169846316132250LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	volatile uint8_t x243 = 3U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -41679;

	t60 = (((x241==x242)*x243)^x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 14U;
	static int64_t x246 = INT64_MAX;
	static uint8_t x247 = 60U;
	int64_t x248 = INT64_MAX;
	int64_t t61 = INT64_MAX;

	t61 = (((x245==x246)*x247)^x248);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	static int64_t x250 = INT64_MAX;
	int64_t x251 = INT64_MIN;
	static int64_t t62 = -25721591LL;

	t62 = (((x249==x250)*x251)^x252);

	if (t62 != 76LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x254 = UINT32_MAX;
	int64_t x255 = -1LL;
	static int16_t x256 = INT16_MIN;
	volatile int64_t t63 = 13639834LL;

	t63 = (((x253==x254)*x255)^x256);

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 0;
	int8_t x258 = INT8_MIN;
	static uint8_t x260 = 9U;

	t64 = (((x257==x258)*x259)^x260);

	if (t64 != 9LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	static int32_t x264 = -17521;
	int32_t t65 = 9185;

	t65 = (((x261==x262)*x263)^x264);

	if (t65 != -17521) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x267 = 942LLU;
	uint8_t x268 = 0U;
	volatile uint64_t t66 = 171307875833794005LLU;

	t66 = (((x265==x266)*x267)^x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1663LL;
	uint64_t x270 = 5682382438939152LLU;
	volatile int64_t x271 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile int64_t t67 = 31344911490494LL;

	t67 = (((x269==x270)*x271)^x272);

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -22356559137LL;
	int16_t x274 = INT16_MIN;
	int16_t x276 = INT16_MAX;
	volatile uint32_t t68 = 201201U;

	t68 = (((x273==x274)*x275)^x276);

	if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	static int64_t x279 = 0LL;

	t69 = (((x277==x278)*x279)^x280);

	if (t69 != -10LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -1;
	static uint16_t x283 = UINT16_MAX;
	volatile int16_t x284 = INT16_MAX;
	int32_t t70 = 4127360;

	t70 = (((x281==x282)*x283)^x284);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -5591;
	static int16_t x286 = INT16_MIN;
	static int64_t x288 = INT64_MIN;
	static int64_t t71 = INT64_MIN;

	t71 = (((x285==x286)*x287)^x288);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 132U;
	volatile uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 1328;

	t72 = (((x289==x290)*x291)^x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -35309340858770LL;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 735048246815662484LLU;
	int64_t x296 = 560366189124540LL;
	volatile uint64_t t73 = 6644LLU;

	t73 = (((x293==x294)*x295)^x296);

	if (t73 != 560366189124540LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = -1;
	int32_t x300 = -466891;

	t74 = (((x297==x298)*x299)^x300);

	if (t74 != -466891) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 8983U;
	int64_t x302 = -1LL;
	uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = 0;
	uint64_t t75 = 339410138940598269LLU;

	t75 = (((x301==x302)*x303)^x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int16_t x307 = -4373;
	int32_t t76 = INT32_MAX;

	t76 = (((x305==x306)*x307)^x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 354U;
	int32_t x310 = -1;
	int32_t x311 = -451;
	static uint16_t x312 = 1192U;
	int32_t t77 = 550447;

	t77 = (((x309==x310)*x311)^x312);

	if (t77 != 1192) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 14U;
	int64_t x314 = -1LL;
	static uint16_t x315 = UINT16_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x313==x314)*x315)^x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -271;
	int64_t x318 = -3LL;
	uint16_t x319 = 16528U;
	static uint32_t x320 = 2035U;
	volatile uint32_t t79 = 792U;

	t79 = (((x317==x318)*x319)^x320);

	if (t79 != 2035U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 3552908U;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	static int64_t t80 = INT64_MIN;

	t80 = (((x321==x322)*x323)^x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = 2;
	volatile uint64_t t81 = 22LLU;

	t81 = (((x325==x326)*x327)^x328);

	if (t81 != 6787166470727005LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int64_t x330 = -1LL;
	int8_t x331 = -1;
	static uint32_t x332 = 97320U;
	volatile uint32_t t82 = 193299005U;

	t82 = (((x329==x330)*x331)^x332);

	if (t82 != 4294869975U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x334 = 20855587894491LL;
	volatile uint16_t x336 = 82U;
	static int32_t t83 = 1;

	t83 = (((x333==x334)*x335)^x336);

	if (t83 != 82) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 56;

	t84 = (((x337==x338)*x339)^x340);

	if (t84 != 2147450880) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	static int16_t x343 = -1;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x341==x342)*x343)^x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = INT32_MAX;
	int64_t x346 = 1LL;
	int32_t x347 = 102887705;
	static volatile int64_t x348 = 1LL;
	volatile int64_t t86 = -20549441683324216LL;

	t86 = (((x345==x346)*x347)^x348);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile int16_t x350 = -50;
	int16_t x351 = 14;
	volatile uint64_t x352 = 64274758710814LLU;
	volatile uint64_t t87 = 2045081151LLU;

	t87 = (((x349==x350)*x351)^x352);

	if (t87 != 64274758710814LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 37437485U;
	int16_t x355 = 54;
	uint16_t x356 = 16506U;
	volatile int32_t t88 = 6;

	t88 = (((x353==x354)*x355)^x356);

	if (t88 != 16506) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = -1;
	volatile int32_t x359 = 57;
	volatile int32_t t89 = 239;

	t89 = (((x357==x358)*x359)^x360);

	if (t89 != 12006314) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	int8_t x363 = -1;
	int16_t x364 = -1283;
	static int32_t t90 = 47;

	t90 = (((x361==x362)*x363)^x364);

	if (t90 != -1283) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = UINT16_MAX;
	static int8_t x367 = 6;
	int8_t x368 = -1;
	static int32_t t91 = -19478882;

	t91 = (((x365==x366)*x367)^x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 1U;
	uint32_t x372 = UINT32_MAX;
	uint32_t t92 = UINT32_MAX;

	t92 = (((x369==x370)*x371)^x372);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = -23;
	int16_t x375 = -1057;
	static int64_t x376 = INT64_MIN;

	t93 = (((x373==x374)*x375)^x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = -2;
	static int64_t x380 = INT64_MAX;
	int64_t t94 = INT64_MAX;

	t94 = (((x377==x378)*x379)^x380);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	static uint16_t x384 = 1U;
	volatile int32_t t95 = -616437;

	t95 = (((x381==x382)*x383)^x384);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = -1;
	volatile int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	volatile int32_t t96 = 289;

	t96 = (((x385==x386)*x387)^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = 52;
	uint16_t x391 = UINT16_MAX;
	int32_t t97 = -3;

	t97 = (((x389==x390)*x391)^x392);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = UINT32_MAX;
	int64_t x395 = -1LL;
	volatile uint32_t x396 = UINT32_MAX;
	static volatile int64_t t98 = -997024409LL;

	t98 = (((x393==x394)*x395)^x396);

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 21U;
	int16_t x398 = 8;
	uint32_t x399 = 516U;
	int8_t x400 = INT8_MAX;

	t99 = (((x397==x398)*x399)^x400);

	if (t99 != 127U) { NG(); } else { ; }
	
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

