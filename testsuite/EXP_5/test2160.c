#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -6438;
static uint64_t x4 = 583377547198232LLU;
int8_t x5 = INT8_MIN;
uint32_t x6 = UINT32_MAX;
int16_t x18 = INT16_MAX;
int64_t x19 = 2676071921800987LL;
int64_t x26 = -8437507952342886LL;
uint8_t x29 = 12U;
static int8_t x36 = INT8_MIN;
static int16_t x40 = 4846;
static int32_t x46 = INT32_MIN;
uint8_t x47 = UINT8_MAX;
uint64_t t11 = 14783351571LLU;
volatile int64_t t12 = 6331776329LL;
uint64_t x55 = UINT64_MAX;
volatile uint64_t t13 = 443LLU;
volatile int32_t t14 = 403786625;
volatile int64_t x73 = -1LL;
uint64_t x77 = 703687337312824784LLU;
int64_t x80 = -1LL;
volatile uint64_t t18 = 2237991579702LLU;
int32_t x81 = INT32_MIN;
int8_t x88 = INT8_MIN;
static volatile uint8_t x109 = 32U;
volatile uint64_t t25 = 3535454893636344105LLU;
uint32_t x116 = UINT32_MAX;
volatile int64_t t26 = 896394541447LL;
int8_t x117 = 6;
int32_t x118 = INT32_MIN;
static volatile uint64_t t27 = 940562399268363605LLU;
static uint64_t x131 = 25LLU;
static int64_t x143 = INT64_MAX;
int16_t x150 = INT16_MIN;
uint32_t x160 = 937218610U;
static uint32_t x165 = UINT32_MAX;
int8_t x170 = INT8_MIN;
int32_t t40 = 266848;
uint64_t x174 = UINT64_MAX;
int32_t x178 = -31;
uint64_t x182 = 43493441LLU;
uint64_t t43 = 847LLU;
static int64_t x188 = INT64_MIN;
static uint8_t x199 = 0U;
uint16_t x201 = UINT16_MAX;
uint64_t t48 = 102541LLU;
int8_t x205 = INT8_MAX;
int32_t x207 = -22;
uint32_t t50 = 2U;
static volatile int16_t x214 = -1;
volatile int16_t x216 = -7;
volatile int32_t t52 = 346211858;
int32_t x222 = INT32_MIN;
static uint32_t t54 = 1821U;
static uint8_t x232 = 104U;
int32_t x236 = INT32_MIN;
static uint16_t x242 = UINT16_MAX;
volatile uint32_t x243 = UINT32_MAX;
volatile int64_t x250 = INT64_MIN;
uint32_t x254 = 59549U;
int8_t x255 = INT8_MAX;
volatile int64_t x263 = -1LL;
int64_t x269 = 21488355769958LL;
static int64_t t65 = 2306483493342LL;
static volatile int64_t x273 = -1LL;
uint64_t x276 = UINT64_MAX;
int32_t x285 = INT32_MAX;
volatile int32_t t67 = INT32_MAX;
static int8_t x290 = INT8_MIN;
int32_t x292 = INT32_MIN;
int16_t x294 = INT16_MAX;
int32_t x295 = -58391;
static uint16_t x296 = 46U;
volatile int16_t x299 = 263;
uint16_t x304 = 40U;
int32_t x306 = INT32_MIN;
volatile uint64_t t73 = 7219512959LLU;
static int32_t x314 = 1;
int16_t x316 = 188;
uint16_t x320 = UINT16_MAX;
static int16_t x324 = INT16_MIN;
int16_t x334 = INT16_MIN;
static int64_t x337 = INT64_MIN;
volatile int32_t t82 = 1081;
volatile int8_t x349 = 0;
static int64_t x357 = INT64_MAX;
int16_t x360 = INT16_MAX;
uint32_t t86 = 6084U;
int16_t x371 = -1;
static int64_t t90 = -369764258527LL;
volatile uint16_t x389 = 870U;
int64_t x397 = INT64_MAX;
volatile int64_t x400 = INT64_MIN;
volatile int64_t t96 = -44469LL;
int8_t x405 = -1;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	uint64_t t0 = 1216LLU;

	t0 = (x1-((x2^x3)&x4));

	if (t0 != 18446744072980228034LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -2184314LL;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 21LLU;

	t1 = (x5-((x6^x7)&x8));

	if (t1 != 4292782855LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static uint16_t x10 = 39U;
	int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = UINT8_MAX;
	static int64_t t2 = -14362243078LL;

	t2 = (x9-((x10^x11)&x12));

	if (t2 != 9223372036854775640LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	static uint16_t x15 = 94U;
	volatile int64_t x16 = -1LL;
	volatile int64_t t3 = -1622148234283LL;

	t3 = (x13-((x14^x15)&x16));

	if (t3 != 2147483426LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 1000337455388109069LL;

	t4 = (x17-((x18^x19)&x20));

	if (t4 != -2676071921778689LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 656LLU;
	int32_t x23 = -2;
	int32_t x24 = -1;
	uint64_t t5 = 36794530136353338LLU;

	t5 = (x21-((x22^x23)&x24));

	if (t5 != 18446744071562068626LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x27 = 27;
	volatile int8_t x28 = 1;
	volatile int64_t t6 = 5738905LL;

	t6 = (x25-((x26^x27)&x28));

	if (t6 != 4294967294LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 4;
	static uint8_t x31 = 11U;
	uint32_t x32 = 230U;
	uint32_t t7 = 168495U;

	t7 = (x29-((x30^x31)&x32));

	if (t7 != 6U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = -1;
	volatile uint32_t x35 = UINT32_MAX;
	uint32_t t8 = UINT32_MAX;

	t8 = (x33-((x34^x35)&x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 112U;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 1592U;
	uint64_t t9 = 8460688478877512LLU;

	t9 = (x37-((x38^x39)&x40));

	if (t9 != 18446744073709547434LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	static int16_t x42 = INT16_MAX;
	static int16_t x43 = 4028;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 45095;

	t10 = (x41-((x42^x43)&x44));

	if (t10 != -195) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 3U;
	volatile uint64_t x48 = 254696964433255LLU;

	t11 = (x45-((x46^x47)&x48));

	if (t11 != 18446489377853931420LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	static uint32_t x51 = 853237U;
	int8_t x52 = INT8_MIN;

	t12 = (x49-((x50^x51)&x52));

	if (t12 != 9223372036853922687LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 8U;
	static uint64_t x54 = 476660524554761199LLU;
	int32_t x56 = 96358132;

	t13 = (x53-((x54^x55)&x56));

	if (t13 != 18446744073689215992LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = INT8_MAX;

	t14 = (x57-((x58^x59)&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -77;
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = 860LL;
	static int64_t x64 = -1513406295697LL;
	int64_t t15 = -2943137100891LL;

	t15 = (x61-((x62^x63)&x64));

	if (t15 != -368LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 4U;
	uint8_t x66 = 80U;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 6754U;
	int32_t t16 = -3566009;

	t16 = (x65-((x66^x67)&x68));

	if (t16 != -60) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x74 = 22U;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 249U;
	int64_t t17 = 948LL;

	t17 = (x73-((x74^x75)&x76));

	if (t17 != -17LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 23125146;
	static uint16_t x79 = 4089U;

	t18 = (x77-((x78^x79)&x80));

	if (t18 != 703687337289701997LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = -1LL;
	static uint8_t x83 = UINT8_MAX;
	static int16_t x84 = 4;
	static int64_t t19 = 422422303187046778LL;

	t19 = (x81-((x82^x83)&x84));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 900U;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MAX;
	int32_t t20 = 3;

	t20 = (x85-((x86^x87)&x88));

	if (t20 != 1028) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	static int32_t x90 = INT32_MIN;
	int16_t x91 = -5;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t21 = 1178393U;

	t21 = (x89-((x90^x91)&x92));

	if (t21 != 2147483652U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	int8_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	static int64_t x96 = 161006804LL;
	volatile int64_t t22 = -213894421LL;

	t22 = (x93-((x94^x95)&x96));

	if (t22 != -161006805LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -1LL;
	int16_t x102 = -1;
	int32_t x103 = -1;
	int8_t x104 = INT8_MAX;
	int64_t t23 = 11170638LL;

	t23 = (x101-((x102^x103)&x104));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -3;
	int32_t x106 = 18;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = -24;

	t24 = (x105-((x106^x107)&x108));

	if (t24 != -21) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x110 = UINT64_MAX;
	int16_t x111 = -1;
	static int32_t x112 = INT32_MIN;

	t25 = (x109-((x110^x111)&x112));

	if (t25 != 32LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 1398709162LL;
	int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;

	t26 = (x113-((x114^x115)&x116));

	if (t26 != -748774486LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = -1;

	t27 = (x117-((x118^x119)&x120));

	if (t27 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -558927144;
	static uint8_t x122 = 0U;
	uint8_t x123 = 25U;
	static uint16_t x124 = 0U;
	volatile int32_t t28 = 2788;

	t28 = (x121-((x122^x123)&x124));

	if (t28 != -558927144) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = 74973U;
	int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = -1LL;
	int64_t t29 = -44291046490LL;

	t29 = (x125-((x126^x127)&x128));

	if (t29 != 74846LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	uint64_t x132 = 11248423LLU;
	volatile uint64_t t30 = 141LLU;

	t30 = (x129-((x130^x131)&x132));

	if (t30 != 9223372036854775770LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 6U;
	static int8_t x135 = INT8_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t31 = 445U;

	t31 = (x133-((x134^x135)&x136));

	if (t31 != 6U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -43;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MIN;
	int32_t x140 = -1;
	static volatile int32_t t32 = 0;

	t32 = (x137-((x138^x139)&x140));

	if (t32 != 2147483350) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MAX;
	uint8_t x144 = 9U;
	static volatile int64_t t33 = -28122862719837050LL;

	t33 = (x141-((x142^x143)&x144));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	uint32_t x146 = 314U;
	uint32_t x147 = 41359556U;
	int64_t x148 = INT64_MIN;
	static volatile int64_t t34 = -2807285704654210LL;

	t34 = (x145-((x146^x147)&x148));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x149 = 109U;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t35 = -15204527;

	t35 = (x149-((x150^x151)&x152));

	if (t35 != 109) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 90616U;
	int16_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	uint8_t x156 = 13U;
	uint32_t t36 = 11U;

	t36 = (x153-((x154^x155)&x156));

	if (t36 != 90616U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int64_t x158 = 533597661LL;
	static int64_t x159 = INT64_MIN;
	static volatile int64_t t37 = -543603217353LL;

	t37 = (x157-((x158^x159)&x160));

	if (t37 != 3895721967LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	volatile uint64_t x163 = 13680752LLU;
	uint16_t x164 = 5U;
	uint64_t t38 = 5164409104904LLU;

	t38 = (x161-((x162^x163)&x164));

	if (t38 != 18446744071562067963LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = INT64_MAX;
	int8_t x167 = 22;
	volatile int64_t x168 = -1LL;
	volatile int64_t t39 = -1055LL;

	t39 = (x165-((x166^x167)&x168));

	if (t39 != -9223372032559808490LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 223;
	int8_t x171 = -62;
	uint16_t x172 = 1U;

	t40 = (x169-((x170^x171)&x172));

	if (t40 != 223) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 19960LL;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = 3393U;
	uint64_t t41 = 388862351683343LLU;

	t41 = (x173-((x174^x175)&x176));

	if (t41 != 19895LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = 4U;
	static int32_t x179 = -615857;
	int32_t x180 = INT32_MIN;
	volatile int32_t t42 = 3;

	t42 = (x177-((x178^x179)&x180));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t x184 = -826;

	t43 = (x181-((x182^x183)&x184));

	if (t43 != 9223372036898270073LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	static int64_t x186 = -1LL;
	static int64_t x187 = -1LL;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x185-((x186^x187)&x188));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	volatile int64_t x190 = 23LL;
	static int64_t x191 = INT64_MIN;
	uint64_t x192 = 3207430795675LLU;
	uint64_t t45 = 471485667186462LLU;

	t45 = (x189-((x190^x191)&x192));

	if (t45 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = -731167LL;
	int32_t x194 = 944;
	int32_t x195 = INT32_MAX;
	static volatile int32_t x196 = INT32_MAX;
	volatile int64_t t46 = -218LL;

	t46 = (x193-((x194^x195)&x196));

	if (t46 != -2148213870LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = -1LL;
	int16_t x198 = 10957;
	int16_t x200 = 1;
	int64_t t47 = 2557446LL;

	t47 = (x197-((x198^x199)&x200));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x202 = INT32_MIN;
	uint16_t x203 = 922U;
	uint64_t x204 = UINT64_MAX;

	t48 = (x201-((x202^x203)&x204));

	if (t48 != 2147548261LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x206 = 1U;
	static volatile uint16_t x208 = UINT16_MAX;
	static volatile uint32_t t49 = 37013323U;

	t49 = (x205-((x206^x207)&x208));

	if (t49 != 4294901908U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = 1;
	volatile uint32_t x210 = 5U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = 0;

	t50 = (x209-((x210^x211)&x212));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = INT32_MAX;
	int32_t x215 = -1;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x213-((x214^x215)&x216));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = INT32_MAX;
	int32_t x218 = -1;
	int32_t x219 = INT32_MIN;
	uint16_t x220 = 624U;

	t52 = (x217-((x218^x219)&x220));

	if (t52 != 2147483023) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = 18;
	int64_t x223 = INT64_MIN;
	int64_t x224 = INT64_MAX;
	static volatile int64_t t53 = -1604LL;

	t53 = (x221-((x222^x223)&x224));

	if (t53 != -9223372034707292142LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 180339U;
	int16_t x226 = -53;
	int8_t x227 = -1;
	static volatile int32_t x228 = INT32_MIN;

	t54 = (x225-((x226^x227)&x228));

	if (t54 != 180339U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MAX;
	static int32_t x231 = INT32_MIN;
	volatile int64_t t55 = -2509LL;

	t55 = (x229-((x230^x231)&x232));

	if (t55 != 2147483543LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = UINT16_MAX;
	static int64_t x234 = -23764271055402LL;
	int64_t x235 = 89286980LL;
	int64_t t56 = -8592490045925019LL;

	t56 = (x233-((x234^x235)&x236));

	if (t56 != 23766201597951LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = 1U;
	volatile int8_t x238 = -1;
	volatile int8_t x239 = -1;
	int32_t x240 = -1;
	static volatile int32_t t57 = 23569323;

	t57 = (x237-((x238^x239)&x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = 34710LL;
	uint8_t x244 = 0U;
	int64_t t58 = 2589957246183LL;

	t58 = (x241-((x242^x243)&x244));

	if (t58 != 34710LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -1398112501257215LL;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -1;
	uint64_t t59 = 267066LLU;

	t59 = (x245-((x246^x247)&x248));

	if (t59 != 18445345961208294529LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x249 = 19;
	uint64_t x251 = 4326976LLU;
	volatile int64_t x252 = INT64_MIN;
	volatile uint64_t t60 = 125566LLU;

	t60 = (x249-((x250^x251)&x252));

	if (t60 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x256 = 5473409LLU;
	volatile uint64_t t61 = 61LLU;

	t61 = (x253-((x254^x255)&x256));

	if (t61 != 18446744073709518592LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x257 = 0LLU;
	int32_t x258 = INT32_MIN;
	int8_t x259 = 1;
	static volatile int64_t x260 = -27027028146480031LL;
	static volatile uint64_t t62 = 1156350230LLU;

	t62 = (x257-((x258^x259)&x260));

	if (t62 != 27027028750368767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = INT64_MIN;
	volatile int32_t x262 = INT32_MIN;
	int32_t x264 = INT32_MIN;
	int64_t t63 = INT64_MIN;

	t63 = (x261-((x262^x263)&x264));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	volatile int64_t t64 = 1LL;

	t64 = (x265-((x266^x267)&x268));

	if (t64 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x270 = -1;
	int32_t x271 = -1;
	static int8_t x272 = INT8_MAX;

	t65 = (x269-((x270^x271)&x272));

	if (t65 != 21488355769958LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = INT64_MIN;
	volatile uint64_t t66 = 402961830705364190LLU;

	t66 = (x273-((x274^x275)&x276));

	if (t66 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x286 = INT16_MAX;
	int32_t x287 = INT32_MAX;
	int32_t x288 = 0;

	t67 = (x285-((x286^x287)&x288));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 65037861554LLU;
	volatile uint16_t x291 = 6U;
	uint64_t t68 = 36428712LLU;

	t68 = (x289-((x290^x291)&x292));

	if (t68 != 67185345202LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MAX;
	volatile int64_t t69 = -27LL;

	t69 = (x293-((x294^x295)&x296));

	if (t69 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = 1;
	uint8_t x300 = 3U;
	int32_t t70 = 376724;

	t70 = (x297-((x298^x299)&x300));

	if (t70 != -130) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = INT32_MIN;
	static uint64_t x303 = UINT64_MAX;
	uint64_t t71 = 160771843590LLU;

	t71 = (x301-((x302^x303)&x304));

	if (t71 != 32727LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	static uint16_t x307 = 2U;
	static uint32_t x308 = UINT32_MAX;
	uint32_t t72 = 3U;

	t72 = (x305-((x306^x307)&x308));

	if (t72 != 4294967293U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -10;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = 0LLU;
	int8_t x312 = -33;

	t73 = (x309-((x310^x311)&x312));

	if (t73 != 32758LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint32_t x315 = 1528U;
	volatile uint32_t t74 = 233321317U;

	t74 = (x313-((x314^x315)&x316));

	if (t74 != 4294967111U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x317 = -1LL;
	volatile int8_t x318 = 0;
	int32_t x319 = INT32_MIN;
	int64_t t75 = 2080336458769LL;

	t75 = (x317-((x318^x319)&x320));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 27637U;
	uint16_t x322 = 256U;
	int64_t x323 = INT64_MAX;
	volatile int64_t t76 = 37639987LL;

	t76 = (x321-((x322^x323)&x324));

	if (t76 != -9223372036854715403LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = -1;
	static int16_t x327 = INT16_MIN;
	int8_t x328 = -1;
	volatile int32_t t77 = -20347;

	t77 = (x325-((x326^x327)&x328));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile uint32_t x331 = 71230508U;
	static int8_t x332 = 30;
	volatile uint32_t t78 = 798771246U;

	t78 = (x329-((x330^x331)&x332));

	if (t78 != 32755U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 11301U;
	volatile int8_t x335 = -2;
	int16_t x336 = -1;
	volatile int32_t t79 = -1049822;

	t79 = (x333-((x334^x335)&x336));

	if (t79 != -21465) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x338 = 1564206361LL;
	int64_t x339 = -1LL;
	int8_t x340 = INT8_MIN;
	int64_t t80 = -1975759516LL;

	t80 = (x337-((x338^x339)&x340));

	if (t80 != -9223372035290569344LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = 89101U;
	int32_t x342 = 31414;
	volatile int64_t x343 = 104542LL;
	int32_t x344 = -55254;
	volatile int64_t t81 = 21295727180024994LL;

	t81 = (x341-((x342^x343)&x344));

	if (t81 != 15333LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -137935;
	static int8_t x346 = -1;
	int16_t x347 = INT16_MAX;
	static int8_t x348 = -1;

	t82 = (x345-((x346^x347)&x348));

	if (t82 != -105167) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = 2932495039105536769LL;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	int64_t t83 = 2029594358LL;

	t83 = (x349-((x350^x351)&x352));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 63659U;
	static volatile int64_t x354 = INT64_MIN;
	int64_t x355 = -1LL;
	int32_t x356 = -8;
	int64_t t84 = 1662LL;

	t84 = (x353-((x354^x355)&x356));

	if (t84 != -9223372036854712141LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x358 = 92391083883876832LLU;
	uint8_t x359 = 0U;
	volatile uint64_t t85 = 16548812283057LLU;

	t85 = (x357-((x358^x359)&x360));

	if (t85 != 9223372036854754847LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 25U;
	static uint32_t x362 = 522393U;
	int32_t x363 = -3029;
	static volatile int32_t x364 = -1;

	t86 = (x361-((x362^x363)&x364));

	if (t86 != 521063U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 0;
	int32_t x366 = INT32_MAX;
	int8_t x367 = INT8_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t87 = 5U;

	t87 = (x365-((x366^x367)&x368));

	if (t87 != 2147483776U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -28;
	int8_t x370 = -1;
	int8_t x372 = 0;
	volatile int32_t t88 = 1;

	t88 = (x369-((x370^x371)&x372));

	if (t88 != -28) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int32_t x374 = 2;
	int64_t x375 = INT64_MAX;
	volatile uint32_t x376 = 6268U;
	int64_t t89 = -65626968LL;

	t89 = (x373-((x374^x375)&x376));

	if (t89 != 4294961027LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = 0;

	t90 = (x377-((x378^x379)&x380));

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int8_t x382 = -1;
	int16_t x383 = -62;
	uint8_t x384 = 14U;
	volatile int32_t t91 = -25110;

	t91 = (x381-((x382^x383)&x384));

	if (t91 != 65523) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = 5;
	uint8_t x386 = 75U;
	int8_t x387 = -5;
	static uint64_t x388 = 17065LLU;
	volatile uint64_t t92 = 79231846LLU;

	t92 = (x385-((x386^x387)&x388));

	if (t92 != 18446744073709534565LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = UINT8_MAX;
	volatile int8_t x391 = -1;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t93 = -239118;

	t93 = (x389-((x390^x391)&x392));

	if (t93 != 33638) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = 4930LLU;
	volatile int8_t x394 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	volatile int16_t x396 = 3;
	uint64_t t94 = 6306108388398343LLU;

	t94 = (x393-((x394^x395)&x396));

	if (t94 != 4930LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x398 = 88U;
	int32_t x399 = 1;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x397-((x398^x399)&x400));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	static int64_t x404 = INT64_MIN;

	t96 = (x401-((x402^x403)&x404));

	if (t96 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x406 = INT8_MAX;
	int16_t x407 = -235;
	volatile uint8_t x408 = UINT8_MAX;
	volatile int32_t t97 = -4078387;

	t97 = (x405-((x406^x407)&x408));

	if (t97 != -107) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 0U;
	volatile uint16_t x410 = 15U;
	volatile int16_t x411 = -6673;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -57963790;

	t98 = (x409-((x410^x411)&x412));

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x413 = 1;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = 2438LLU;
	uint64_t t99 = 1309885260232696166LLU;

	t99 = (x413-((x414^x415)&x416));

	if (t99 != 18446744073709549179LLU) { NG(); } else { ; }
	
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

