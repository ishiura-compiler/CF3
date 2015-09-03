#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
static int64_t t0 = 656957423LL;
static int32_t x12 = INT32_MIN;
int64_t t1 = -102993876LL;
int16_t x19 = 176;
volatile int16_t x20 = INT16_MAX;
uint64_t t3 = 370808637307LLU;
int16_t x22 = INT16_MIN;
volatile uint8_t x24 = 1U;
volatile int32_t t4 = 2472962;
volatile int32_t x38 = INT32_MIN;
static int64_t x40 = INT64_MAX;
int64_t x43 = -1LL;
int64_t x46 = 531996637LL;
volatile int8_t x47 = -1;
static uint32_t x56 = UINT32_MAX;
uint64_t x59 = 18747168853LLU;
int8_t x65 = 38;
int64_t x66 = -1LL;
static int64_t x67 = -162LL;
uint16_t x68 = UINT16_MAX;
volatile int64_t t15 = -6LL;
int64_t x74 = INT64_MIN;
uint8_t x81 = 5U;
static int32_t x83 = INT32_MIN;
int8_t x84 = INT8_MIN;
int64_t t19 = -350128398386884681LL;
uint64_t x89 = 273355369746272LLU;
volatile int32_t x90 = 14964838;
volatile int16_t x93 = INT16_MIN;
volatile uint64_t t24 = 3853800LLU;
uint64_t t25 = 2327747608LLU;
int16_t x110 = -13349;
int64_t x111 = -1LL;
int64_t x117 = -1LL;
int8_t x121 = -1;
volatile int32_t x122 = INT32_MIN;
int32_t t29 = 98063;
int8_t x142 = 47;
int8_t x145 = INT8_MIN;
static volatile int32_t t36 = -2;
uint8_t x157 = 120U;
uint16_t x179 = 78U;
static int8_t x181 = 6;
volatile uint64_t t43 = 968427LLU;
static int32_t x185 = INT32_MAX;
int64_t x186 = INT64_MAX;
int16_t x187 = -1;
uint8_t x188 = UINT8_MAX;
int16_t x189 = -29;
uint32_t x191 = 47361275U;
volatile uint64_t x194 = 6769127698907934LLU;
volatile int32_t t51 = 97;
uint64_t x220 = 21LLU;
static uint64_t t56 = 13322024641LLU;
int32_t x238 = -29482748;
uint8_t x241 = 2U;
volatile uint64_t t59 = 124550173497990107LLU;
int32_t x255 = INT32_MAX;
static volatile uint64_t t60 = 212759863352041LLU;
volatile int8_t x262 = -3;
int32_t x264 = -1;
static uint64_t x271 = 188923719952043LLU;
uint64_t t64 = 595990905008123LLU;
int16_t x280 = -1;
static uint32_t x283 = UINT32_MAX;
int32_t x285 = 128690;
int64_t x286 = -6134801753LL;
int16_t x287 = INT16_MIN;
int32_t x288 = 16049619;
volatile int8_t x294 = INT8_MAX;
volatile uint64_t x309 = 11818994343LLU;
static int16_t x312 = 169;
uint64_t t74 = 1384478332836LLU;
static uint32_t x316 = 5548U;
static int64_t x321 = -1LL;
int64_t t77 = -5499741558364454LL;
int8_t x328 = 3;
int32_t x329 = -1;
uint16_t x340 = UINT16_MAX;
static int16_t x342 = -2;
uint32_t x347 = UINT32_MAX;
static uint8_t x349 = 6U;
volatile int64_t x352 = -1LL;
volatile int16_t x359 = -1;
uint16_t x369 = 59U;
static uint64_t x372 = 31818LLU;
uint64_t t89 = 329780889584690LLU;
int8_t x375 = INT8_MAX;
static volatile int64_t t90 = 71401600148LL;
uint8_t x387 = UINT8_MAX;
int16_t x388 = 920;
static int64_t x392 = -399231LL;
volatile int64_t t94 = 225220243383LL;
static int16_t x404 = INT16_MIN;
uint64_t t96 = 2218111891625173LLU;
static int8_t x405 = -1;
int64_t x416 = 44568LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	static int64_t x4 = INT64_MIN;

	t0 = ((x1^(x2^x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;

	t1 = ((x9^(x10^x11))/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 0LL;
	volatile uint64_t x14 = 2069867748488LLU;
	int32_t x15 = 1;
	int16_t x16 = 704;
	uint64_t t2 = 1085710784893944364LLU;

	t2 = ((x13^(x14^x15))/x16);

	if (t2 != 2940153051LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 8755LLU;
	volatile int64_t x18 = INT64_MIN;

	t3 = ((x17^(x18^x19))/x20);

	if (t3 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 190;
	static int16_t x23 = INT16_MAX;

	t4 = ((x21^(x22^x23))/x24);

	if (t4 != -191) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint8_t x26 = 2U;
	int64_t x27 = 377LL;
	uint8_t x28 = 1U;
	volatile int64_t t5 = -19839177100LL;

	t5 = ((x25^(x26^x27))/x28);

	if (t5 != -380LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static int32_t x30 = INT32_MIN;
	volatile int64_t x31 = INT64_MIN;
	uint64_t x32 = 466326839158876545LLU;
	volatile uint64_t t6 = 128LLU;

	t6 = ((x29^(x30^x31))/x32);

	if (t6 != 19LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	static int64_t x34 = -1LL;
	int8_t x35 = -32;
	static uint8_t x36 = 43U;
	volatile int64_t t7 = 1689435LL;

	t7 = ((x33^(x34^x35))/x36);

	if (t7 != 5LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 2569043936LLU;
	uint16_t x39 = 68U;
	static volatile uint64_t t8 = 2LLU;

	t8 = ((x37^(x38^x39))/x40);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MIN;
	uint16_t x44 = 60U;
	volatile int64_t t9 = -13956163LL;

	t9 = ((x41^(x42^x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 3712U;
	int16_t x48 = -1;
	int64_t t10 = 984267925388285120LL;

	t10 = ((x45^(x46^x47))/x48);

	if (t10 != 531992926LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = 8;
	int16_t x50 = -290;
	int8_t x51 = -1;
	uint32_t x52 = 380834630U;
	uint32_t t11 = 562016350U;

	t11 = ((x49^(x50^x51))/x52);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = -1;
	uint8_t x55 = 0U;
	static uint32_t t12 = 5267U;

	t12 = ((x53^(x54^x55))/x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint8_t x58 = 120U;
	uint32_t x60 = UINT32_MAX;
	uint64_t t13 = 3143LLU;

	t13 = ((x57^(x58^x59))/x60);

	if (t13 != 4LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	static volatile uint16_t x62 = UINT16_MAX;
	static int64_t x63 = -3259034907LL;
	int16_t x64 = INT16_MIN;
	volatile int64_t t14 = 1076012298797452LL;

	t14 = ((x61^(x62^x63))/x64);

	if (t14 != -99456LL) { NG(); } else { ; }
	
}

void f15(void) {


	t15 = ((x65^(x66^x67))/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = 13U;
	int16_t x70 = 245;
	static int64_t x71 = -1LL;
	uint16_t x72 = 6998U;
	volatile int64_t t16 = -1650264736018LL;

	t16 = ((x69^(x70^x71))/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -13932;
	uint8_t x75 = 46U;
	uint32_t x76 = UINT32_MAX;
	int64_t t17 = -396473843944LL;

	t17 = ((x73^(x74^x75))/x76);

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MAX;
	static int32_t x79 = INT32_MAX;
	uint16_t x80 = 10381U;
	int64_t t18 = 1331LL;

	t18 = ((x77^(x78^x79))/x80);

	if (t18 != 888485891022765LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x82 = INT64_MIN;

	t19 = ((x81^(x82^x83))/x84);

	if (t19 != -72057594021150720LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -3;
	uint32_t x86 = 219900U;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MAX;
	static uint64_t t20 = 119928027439LLU;

	t20 = ((x85^(x86^x87))/x88);

	if (t20 != 6LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x91 = INT32_MAX;
	static uint16_t x92 = 51U;
	static volatile uint64_t t21 = 12976833LLU;

	t21 = ((x89^(x90^x91))/x92);

	if (t21 != 5359950320544LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x94 = 1U;
	static int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MIN;
	static int64_t t22 = 1431723LL;

	t22 = ((x93^(x94^x95))/x96);

	if (t22 != 72057594037927680LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 5U;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 126U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t23 = -375175593443934LL;

	t23 = ((x97^(x98^x99))/x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MAX;
	static uint16_t x102 = 1U;
	int64_t x103 = INT64_MAX;
	uint64_t x104 = 71219986137247LLU;

	t24 = ((x101^(x102^x103))/x104);

	if (t24 != 129505LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static volatile int8_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 523789095LLU;

	t25 = ((x105^(x106^x107))/x108);

	if (t25 != 4LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x109 = 33U;
	int32_t x112 = 5117;
	int64_t t26 = -1724004866LL;

	t26 = ((x109^(x110^x111))/x112);

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MAX;
	static int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int64_t t27 = 501360206LL;

	t27 = ((x113^(x114^x115))/x116);

	if (t27 != -4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = 0;
	volatile uint64_t x119 = 64LLU;
	uint16_t x120 = 2000U;
	uint64_t t28 = 185LLU;

	t28 = ((x117^(x118^x119))/x120);

	if (t28 != 9223372036854775LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x123 = 4U;
	int16_t x124 = -1;

	t29 = ((x121^(x122^x123))/x124);

	if (t29 != -2147483643) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 1040573;
	int64_t x126 = INT64_MAX;
	static uint32_t x127 = UINT32_MAX;
	uint64_t x128 = 17349759894351LLU;
	uint64_t t30 = 13128LLU;

	t30 = ((x125^(x126^x127))/x128);

	if (t30 != 531613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	static int16_t x130 = -1;
	int16_t x131 = INT16_MAX;
	volatile int64_t x132 = -28369386LL;
	int64_t t31 = -4127184LL;

	t31 = ((x129^(x130^x131))/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = 1717083306265912498LLU;
	uint16_t x135 = UINT16_MAX;
	uint8_t x136 = 46U;
	static uint64_t t32 = 13055457LLU;

	t32 = ((x133^(x134^x135))/x136);

	if (t32 != 363688277582105173LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = 496;
	uint8_t x138 = 11U;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int64_t t33 = 81976LL;

	t33 = ((x137^(x138^x139))/x140);

	if (t33 != 72057594037927932LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	int64_t t34 = 75705LL;

	t34 = ((x141^(x142^x143))/x144);

	if (t34 != -4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MIN;
	volatile int32_t x147 = INT32_MIN;
	static int64_t x148 = INT64_MIN;
	volatile int64_t t35 = 0LL;

	t35 = ((x145^(x146^x147))/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = INT16_MIN;
	static int32_t x154 = 518471412;
	volatile int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MAX;

	t36 = ((x153^(x154^x155))/x156);

	if (t36 != 4082457) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x158 = UINT8_MAX;
	volatile uint8_t x159 = 3U;
	uint16_t x160 = 1U;
	volatile int32_t t37 = -26699315;

	t37 = ((x157^(x158^x159))/x160);

	if (t37 != 132) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = 111727LL;
	volatile int64_t t38 = -261839473LL;

	t38 = ((x161^(x162^x163))/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = 262;
	int8_t x167 = 8;
	int16_t x168 = -2058;
	static volatile uint32_t t39 = 2148837U;

	t39 = ((x165^(x166^x167))/x168);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	int8_t x170 = -1;
	uint8_t x171 = 1U;
	static uint64_t x172 = 5809231854705631203LLU;
	volatile uint64_t t40 = 5033106LLU;

	t40 = ((x169^(x170^x171))/x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = -7;
	volatile uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = INT32_MIN;
	static int8_t x176 = 28;
	volatile uint64_t t41 = 1LLU;

	t41 = ((x173^(x174^x175))/x176);

	if (t41 != 658812288270073856LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 65629U;
	uint32_t x178 = 5U;
	int16_t x180 = -6;
	static uint32_t t42 = 1448U;

	t42 = ((x177^(x178^x179))/x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x182 = 675862263LLU;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = -115993944LL;

	t43 = ((x181^(x182^x183))/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t t44 = -1LL;

	t44 = ((x185^(x186^x187))/x188);

	if (t44 != -36170086410616832LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = 27U;
	int64_t x192 = -1LL;
	volatile int64_t t45 = 380LL;

	t45 = ((x189^(x190^x191))/x192);

	if (t45 != -4247606019LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 401749757;
	int8_t x195 = -1;
	volatile uint8_t x196 = UINT8_MAX;
	uint64_t t46 = 1874217821946444088LLU;

	t46 = ((x193^(x194^x195))/x196);

	if (t46 != 72313627240298241LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = -1;
	volatile int64_t x198 = INT64_MIN;
	static volatile uint32_t x199 = 749582U;
	uint32_t x200 = 866506U;
	int64_t t47 = 66156161772LL;

	t47 = ((x197^(x198^x199))/x200);

	if (t47 != 10644325644431LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x201 = 19U;
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = 12;
	int64_t t48 = 288875810847749668LL;

	t48 = ((x201^(x202^x203))/x204);

	if (t48 != 768614336225607681LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = 13;
	volatile int16_t x206 = -1;
	static uint32_t x207 = UINT32_MAX;
	int32_t x208 = -2525194;
	volatile uint32_t t49 = 349U;

	t49 = ((x205^(x206^x207))/x208);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = 4;
	static int64_t x211 = INT64_MIN;
	static uint8_t x212 = 1U;
	static volatile int64_t t50 = -44625312LL;

	t50 = ((x209^(x210^x211))/x212);

	if (t50 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	static uint8_t x214 = 11U;
	uint16_t x215 = UINT16_MAX;
	static int32_t x216 = -312882826;

	t51 = ((x213^(x214^x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = UINT8_MAX;
	volatile uint8_t x219 = 6U;
	volatile uint64_t t52 = 1559446088937087700LLU;

	t52 = ((x217^(x218^x219))/x220);

	if (t52 != 439208192231179812LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MIN;
	volatile int32_t x223 = 519271;
	int8_t x224 = 56;
	volatile int64_t t53 = -1651247434226LL;

	t53 = ((x221^(x222^x223))/x224);

	if (t53 != -9272LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 13U;
	static volatile int16_t x226 = INT16_MIN;
	volatile int16_t x227 = 1;
	int16_t x228 = -118;
	uint32_t t54 = 30945U;

	t54 = ((x225^(x226^x227))/x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = INT32_MAX;
	uint32_t x230 = 1U;
	uint32_t x231 = 3676U;
	int32_t x232 = INT32_MAX;
	volatile uint32_t t55 = 23U;

	t55 = ((x229^(x230^x231))/x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = 60657857467LLU;
	volatile int32_t x235 = INT32_MAX;
	uint32_t x236 = 86056U;

	t56 = ((x233^(x234^x235))/x236);

	if (t56 != 214357441804880LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = INT32_MAX;
	volatile uint32_t x239 = 40132107U;
	int64_t x240 = INT64_MIN;
	int64_t t57 = 102134219426LL;

	t57 = ((x237^(x238^x239))/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = 2893;
	int16_t x243 = INT16_MIN;
	static int64_t x244 = INT64_MAX;
	volatile int64_t t58 = -7LL;

	t58 = ((x241^(x242^x243))/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = INT16_MIN;
	static uint64_t x251 = UINT64_MAX;
	volatile int8_t x252 = 1;

	t59 = ((x249^(x250^x251))/x252);

	if (t59 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = 0;
	uint64_t x254 = UINT64_MAX;
	int64_t x256 = 2470LL;

	t60 = ((x253^(x254^x255))/x256);

	if (t60 != 7468317437879379LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int64_t x259 = INT64_MIN;
	int32_t x260 = -113;
	volatile int64_t t61 = 1LL;

	t61 = ((x257^(x258^x259))/x260);

	if (t61 != 81622761388095071LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	int64_t t62 = -1432582155864489LL;

	t62 = ((x261^(x262^x263))/x264);

	if (t62 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MIN;
	uint32_t x266 = UINT32_MAX;
	static int16_t x267 = INT16_MIN;
	uint8_t x268 = 3U;
	static uint32_t t63 = 12U;

	t63 = ((x265^(x266^x267))/x268);

	if (t63 != 1431655765U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int64_t x270 = -77634163845435LL;
	uint32_t x272 = UINT32_MAX;

	t64 = ((x269^(x270^x271))/x272);

	if (t64 != 4294906552LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = 7939474284258662LL;
	static uint8_t x274 = 4U;
	int64_t x275 = -1LL;
	uint64_t x276 = UINT64_MAX;
	static uint64_t t65 = 2092215LLU;

	t65 = ((x273^(x274^x275))/x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = INT64_MIN;
	int8_t x278 = -11;
	static uint64_t x279 = 8LLU;
	static uint64_t t66 = 3384919557103094420LLU;

	t66 = ((x277^(x278^x279))/x280);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	uint64_t t67 = 63627317205LLU;

	t67 = ((x281^(x282^x283))/x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t t68 = -422936304LL;

	t68 = ((x285^(x286^x287))/x288);

	if (t68 != 382LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 25U;
	static int32_t x290 = INT32_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	int16_t x292 = -716;
	int32_t t69 = -12;

	t69 = ((x289^(x290^x291))/x292);

	if (t69 != 2999278) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = -1;
	int64_t x295 = -6LL;
	int64_t x296 = INT64_MAX;
	int64_t t70 = 950786LL;

	t70 = ((x293^(x294^x295))/x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = 26U;
	int32_t x298 = -66;
	int64_t x299 = -1LL;
	int64_t x300 = INT64_MIN;
	int64_t t71 = -111LL;

	t71 = ((x297^(x298^x299))/x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -1;
	static uint16_t x302 = 0U;
	int16_t x303 = 198;
	int16_t x304 = INT16_MAX;
	volatile int32_t t72 = -30472763;

	t72 = ((x301^(x302^x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = -1;
	int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t73 = 40;

	t73 = ((x305^(x306^x307))/x308);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MIN;

	t74 = ((x309^(x310^x311))/x312);

	if (t74 != 54576165968484008LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -1LL;
	int8_t x314 = INT8_MIN;
	int16_t x315 = 16232;
	volatile int64_t t75 = 164323259LL;

	t75 = ((x313^(x314^x315))/x316);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -76014885985LL;
	int64_t x318 = INT64_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int8_t x320 = 2;
	uint64_t t76 = 2446434596252430435LLU;

	t76 = ((x317^(x318^x319))/x320);

	if (t76 != 4611685980419944911LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x322 = 5558390U;
	uint8_t x323 = 1U;
	uint32_t x324 = 571685302U;

	t77 = ((x321^(x322^x323))/x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = 3278889;
	volatile int8_t x326 = 1;
	uint64_t x327 = UINT64_MAX;
	volatile uint64_t t78 = 95955630747LLU;

	t78 = ((x325^(x326^x327))/x328);

	if (t78 != 6148914691235424242LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	static int64_t x332 = INT64_MIN;
	int64_t t79 = -8793748475318215LL;

	t79 = ((x329^(x330^x331))/x332);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	int8_t x334 = -16;
	uint32_t x335 = UINT32_MAX;
	static uint64_t x336 = 5450587212680LLU;
	volatile uint64_t t80 = 2LLU;

	t80 = ((x333^(x334^x335))/x336);

	if (t80 != 3384359LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 83U;
	int64_t x338 = 6302344LL;
	volatile uint16_t x339 = 13U;
	int64_t t81 = -15523LL;

	t81 = ((x337^(x338^x339))/x340);

	if (t81 != 96LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = 9456914;
	volatile uint64_t x343 = UINT64_MAX;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t82 = 132186829060LLU;

	t82 = ((x341^(x342^x343))/x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = UINT16_MAX;
	int32_t x346 = -1266;
	int8_t x348 = INT8_MIN;
	volatile uint32_t t83 = 11300186U;

	t83 = ((x345^(x346^x347))/x348);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 11U;
	int64_t t84 = -1633668176LL;

	t84 = ((x349^(x350^x351))/x352);

	if (t84 != -65522LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 13373LLU;
	int8_t x356 = INT8_MIN;
	static uint64_t t85 = 10455638023LLU;

	t85 = ((x353^(x354^x355))/x356);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x358 = 52U;
	static volatile int8_t x360 = INT8_MAX;
	int32_t t86 = 442;

	t86 = ((x357^(x358^x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = -507906;
	int64_t x364 = 21609LL;
	int64_t t87 = -1143389090LL;

	t87 = ((x361^(x362^x363))/x364);

	if (t87 != 99402LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -16;
	volatile int8_t x366 = -1;
	volatile int64_t x367 = 1816840232466945LL;
	volatile uint16_t x368 = 62U;
	volatile int64_t t88 = 333LL;

	t88 = ((x365^(x366^x367))/x368);

	if (t88 != 29303874717209LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = 318926647;

	t89 = ((x369^(x370^x371))/x372);

	if (t89 != 579758126638714LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x373 = 346U;
	int64_t x374 = -1LL;
	uint8_t x376 = 47U;

	t90 = ((x373^(x374^x375))/x376);

	if (t90 != -6LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 26469LLU;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;
	volatile uint64_t t91 = 3839193782LLU;

	t91 = ((x377^(x378^x379))/x380);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x385 = -1;
	static int8_t x386 = -61;
	static volatile int32_t t92 = 21862;

	t92 = ((x385^(x386^x387))/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	static int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MAX;
	volatile int64_t t93 = -510LL;

	t93 = ((x389^(x390^x391))/x392);

	if (t93 != -23102845306870LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 178U;
	int64_t x394 = 593203LL;
	int8_t x395 = -1;
	int16_t x396 = INT16_MIN;

	t94 = ((x393^(x394^x395))/x396);

	if (t94 != 18LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MAX;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -4944;
	volatile int32_t t95 = -24526;

	t95 = ((x397^(x398^x399))/x400);

	if (t95 != 434361) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	uint64_t x403 = UINT64_MAX;

	t96 = ((x401^(x402^x403))/x404);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x406 = 0U;
	uint8_t x407 = 3U;
	volatile int64_t x408 = INT64_MAX;
	int64_t t97 = -25LL;

	t97 = ((x405^(x406^x407))/x408);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 4049021U;
	int32_t x410 = -1;
	int64_t x411 = 1LL;
	int8_t x412 = INT8_MIN;
	volatile int64_t t98 = 464862LL;

	t98 = ((x409^(x410^x411))/x412);

	if (t98 != 31632LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = -1LL;
	volatile int64_t x415 = INT64_MIN;
	int64_t t99 = 882668256945LL;

	t99 = ((x413^(x414^x415))/x416);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

