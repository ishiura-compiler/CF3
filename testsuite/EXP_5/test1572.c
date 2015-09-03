#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = INT32_MIN;
volatile int32_t x4 = -72;
int32_t x7 = -1;
volatile uint64_t t1 = UINT64_MAX;
volatile int64_t t2 = INT64_MIN;
uint16_t x15 = 81U;
int8_t x18 = INT8_MAX;
int32_t x19 = -12235;
static int32_t x24 = -1;
volatile int64_t x25 = 62237045765LL;
uint64_t x29 = 120061979912679512LLU;
uint8_t x41 = 1U;
int32_t x42 = INT32_MIN;
volatile uint32_t t10 = 15409U;
volatile int64_t x46 = -1LL;
int16_t x48 = INT16_MAX;
static int32_t t12 = -2492;
int32_t x59 = -595066;
int8_t x60 = 1;
int64_t x64 = -4840697LL;
int64_t x68 = -16919083875LL;
volatile int32_t t17 = 1047;
volatile int8_t x73 = INT8_MIN;
int16_t x78 = INT16_MIN;
volatile int32_t x79 = 509;
uint32_t x85 = 111394U;
static int16_t x93 = 3;
int64_t x98 = INT64_MIN;
int32_t x106 = -20874;
static int8_t x110 = INT8_MIN;
int64_t x112 = INT64_MIN;
static volatile int64_t t27 = -13315757428LL;
static uint64_t x114 = 14097148LLU;
volatile int16_t x115 = -509;
static uint64_t t28 = 68109048430328416LLU;
int32_t x118 = INT32_MAX;
volatile int32_t x121 = 828;
volatile int32_t x123 = 7;
int32_t x126 = INT32_MIN;
int8_t x137 = -1;
static int16_t x142 = INT16_MIN;
int64_t x152 = -1LL;
int64_t t37 = -150698642533LL;
uint16_t x156 = 3U;
int64_t t38 = 3518LL;
int32_t x158 = INT32_MIN;
int32_t t39 = 5720603;
static int32_t x161 = INT32_MIN;
static int64_t x162 = INT64_MAX;
int32_t t40 = INT32_MIN;
volatile int16_t x175 = 715;
uint16_t x176 = 217U;
volatile int64_t x179 = 81384234656509838LL;
uint8_t x180 = 32U;
volatile uint64_t t46 = UINT64_MAX;
int16_t x191 = -1;
volatile int64_t t47 = -33404941829540LL;
int32_t x196 = INT32_MAX;
volatile int64_t x200 = INT64_MAX;
uint32_t x202 = 25696633U;
uint8_t x203 = 0U;
static volatile int32_t t50 = -1093203;
uint32_t x206 = UINT32_MAX;
int64_t x222 = INT64_MAX;
uint32_t x228 = 23612U;
int8_t x229 = INT8_MIN;
int16_t x232 = 1;
static volatile int8_t x238 = 0;
int32_t x250 = -45;
static int16_t x251 = INT16_MIN;
int64_t t62 = INT64_MAX;
int8_t x256 = -1;
static uint16_t x258 = 9U;
static uint8_t x264 = UINT8_MAX;
volatile uint32_t x268 = UINT32_MAX;
int64_t x276 = INT64_MAX;
int64_t x278 = 49610901258LL;
int32_t t71 = -456;
volatile uint64_t t72 = 7943286729881464358LLU;
uint16_t x293 = UINT16_MAX;
int16_t x294 = INT16_MAX;
uint64_t x308 = UINT64_MAX;
int64_t x311 = INT64_MIN;
volatile uint16_t x315 = 13968U;
static volatile int16_t x316 = INT16_MIN;
int8_t x324 = 2;
int16_t x327 = INT16_MAX;
uint16_t x334 = UINT16_MAX;
static int64_t x338 = -1LL;
volatile int32_t t84 = -10900966;
volatile uint32_t x347 = 12889430U;
volatile uint32_t x349 = 1322406919U;
int64_t x353 = -65654672837439882LL;
volatile int8_t x354 = -27;
uint8_t x358 = 100U;
static uint32_t t89 = UINT32_MAX;
static uint32_t x361 = 1U;
int32_t x366 = INT32_MAX;
uint16_t x368 = UINT16_MAX;
int32_t t94 = INT32_MAX;
int64_t t95 = 30643422492188381LL;
volatile int64_t x397 = INT64_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	uint32_t x3 = 108U;
	volatile int64_t t0 = -57040931263133LL;

	t0 = (x1|((x2<=x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static uint32_t x6 = 29490605U;
	static int64_t x8 = INT64_MIN;

	t1 = (x5|((x6<=x7)/x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = INT64_MIN;
	static uint8_t x10 = 19U;
	uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;

	t2 = (x9|((x10<=x11)/x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1789873897174LLU;
	static uint16_t x14 = 107U;
	volatile uint8_t x16 = UINT8_MAX;
	uint64_t t3 = 15019271166588249LLU;

	t3 = (x13|((x14<=x15)/x16));

	if (t3 != 1789873897174LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 419LLU;
	static volatile int32_t x20 = 3235671;
	uint64_t t4 = 981076738904872LLU;

	t4 = (x17|((x18<=x19)/x20));

	if (t4 != 419LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x21 = UINT64_MAX;
	uint64_t x22 = 385560697LLU;
	volatile uint16_t x23 = UINT16_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21|((x22<=x23)/x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 259597967;
	volatile int16_t x27 = INT16_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -103703589480293071LL;

	t6 = (x25|((x26<=x27)/x28));

	if (t6 != 62237045765LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -6830;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	uint64_t t7 = 5550107039968LLU;

	t7 = (x29|((x30<=x31)/x32));

	if (t7 != 120061979912679512LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -2032LL;
	int16_t x34 = -6;
	static int32_t x35 = -1;
	static int8_t x36 = 2;
	int64_t t8 = -14LL;

	t8 = (x33|((x34<=x35)/x36));

	if (t8 != -2032LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 363755247LL;
	int32_t x38 = INT32_MAX;
	uint64_t x39 = UINT64_MAX;
	static uint32_t x40 = 2042U;
	int64_t t9 = -71939865012370501LL;

	t9 = (x37|((x38<=x39)/x40));

	if (t9 != 363755247LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x43 = -52;
	uint32_t x44 = 36423U;

	t10 = (x41|((x42<=x43)/x44));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	static volatile int16_t x47 = -1;
	int64_t t11 = INT64_MIN;

	t11 = (x45|((x46<=x47)/x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 515U;
	volatile int8_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	static int32_t x52 = INT32_MAX;

	t12 = (x49|((x50<=x51)/x52));

	if (t12 != 515) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	uint64_t x54 = 4432858647560595807LLU;
	int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MAX;
	int32_t t13 = 820;

	t13 = (x53|((x54<=x55)/x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	volatile int8_t x58 = -1;
	int32_t t14 = INT32_MAX;

	t14 = (x57|((x58<=x59)/x60));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 3398LLU;
	int16_t x62 = INT16_MIN;
	static uint64_t x63 = 7679148776047LLU;
	static uint64_t t15 = 70007682689118LLU;

	t15 = (x61|((x62<=x63)/x64));

	if (t15 != 3398LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -3;
	int8_t x66 = INT8_MIN;
	int16_t x67 = -5976;
	int64_t t16 = 26323677458474230LL;

	t16 = (x65|((x66<=x67)/x68));

	if (t16 != -3LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static uint32_t x70 = 1U;
	volatile int64_t x71 = INT64_MAX;
	volatile int8_t x72 = INT8_MIN;

	t17 = (x69|((x70<=x71)/x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	volatile int16_t x75 = INT16_MAX;
	volatile int8_t x76 = -7;
	volatile int32_t t18 = 26662542;

	t18 = (x73|((x74<=x75)/x76));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static int8_t x80 = INT8_MIN;
	volatile int64_t t19 = 3366LL;

	t19 = (x77|((x78<=x79)/x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x82 = -1;
	static uint16_t x83 = 23U;
	static volatile int16_t x84 = INT16_MIN;
	int32_t t20 = 7;

	t20 = (x81|((x82<=x83)/x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MAX;
	static uint32_t x88 = 62360U;
	volatile uint32_t t21 = 3U;

	t21 = (x85|((x86<=x87)/x88));

	if (t21 != 111394U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -424481628;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = 120LLU;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -107LL;

	t22 = (x89|((x90<=x91)/x92));

	if (t22 != -424481628LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 1;
	int16_t x95 = -1765;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = -531930798;

	t23 = (x93|((x94<=x95)/x96));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1391U;
	int64_t x99 = -50481683978400LL;
	int64_t x100 = INT64_MAX;
	volatile int64_t t24 = 2394208LL;

	t24 = (x97|((x98<=x99)/x100));

	if (t24 != 1391LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -28575378;
	int32_t x102 = -3;
	volatile uint64_t x103 = 1248868582987690922LLU;
	volatile int32_t x104 = -1;
	int32_t t25 = -71;

	t25 = (x101|((x102<=x103)/x104));

	if (t25 != -28575378) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	uint64_t x107 = 6198506061886229654LLU;
	uint8_t x108 = UINT8_MAX;
	static int32_t t26 = INT32_MIN;

	t26 = (x105|((x106<=x107)/x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	volatile int64_t x111 = INT64_MIN;

	t27 = (x109|((x110<=x111)/x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 66U;
	uint64_t x116 = 203LLU;

	t28 = (x113|((x114<=x115)/x116));

	if (t28 != 66LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x119 = 871;
	int64_t x120 = -1LL;
	int64_t t29 = INT64_MIN;

	t29 = (x117|((x118<=x119)/x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	uint64_t x124 = 1966837931398205LLU;
	uint64_t t30 = 240301146LLU;

	t30 = (x121|((x122<=x123)/x124));

	if (t30 != 828LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = -30319;
	static int16_t x127 = 167;
	int16_t x128 = INT16_MIN;
	static int32_t t31 = 66;

	t31 = (x125|((x126<=x127)/x128));

	if (t31 != -30319) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	int32_t x130 = 0;
	int8_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = 2880695LL;

	t32 = (x129|((x130<=x131)/x132));

	if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 53623252U;
	static int16_t x135 = -2210;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -6649LL;

	t33 = (x133|((x134<=x135)/x136));

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	volatile uint16_t x139 = 8U;
	uint16_t x140 = 28U;
	int32_t t34 = -13;

	t34 = (x137|((x138<=x139)/x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	uint8_t x143 = 5U;
	static volatile uint8_t x144 = 1U;
	volatile int32_t t35 = 102;

	t35 = (x141|((x142<=x143)/x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 15643453;
	int32_t x146 = INT32_MAX;
	volatile int16_t x147 = -1;
	int16_t x148 = -1548;
	volatile int32_t t36 = 51270;

	t36 = (x145|((x146<=x147)/x148));

	if (t36 != 15643453) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	static int16_t x150 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;

	t37 = (x149|((x150<=x151)/x152));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 101885032409302074LL;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = UINT8_MAX;

	t38 = (x153|((x154<=x155)/x156));

	if (t38 != 101885032409302074LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -14;
	int32_t x159 = -1;
	int16_t x160 = -7698;

	t39 = (x157|((x158<=x159)/x160));

	if (t39 != -14) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x163 = INT8_MAX;
	uint8_t x164 = 16U;

	t40 = (x161|((x162<=x163)/x164));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 470244LLU;
	int64_t x166 = INT64_MIN;
	int16_t x167 = 4;
	static int16_t x168 = -119;
	volatile uint64_t t41 = 13910977927LLU;

	t41 = (x165|((x166<=x167)/x168));

	if (t41 != 470244LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -406008110LL;
	volatile uint8_t x171 = UINT8_MAX;
	int16_t x172 = 442;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x169|((x170<=x171)/x172));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t t43 = 5864967;

	t43 = (x173|((x174<=x175)/x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MIN;
	static volatile int32_t t44 = 4;

	t44 = (x177|((x178<=x179)/x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MAX;
	uint64_t x182 = 817680085925940591LLU;
	int16_t x183 = 4;
	uint32_t x184 = 723182U;
	volatile uint32_t t45 = 785U;

	t45 = (x181|((x182<=x183)/x184));

	if (t45 != 127U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int16_t x187 = INT16_MIN;
	volatile uint64_t x188 = 1547774071772648541LLU;

	t46 = (x185|((x186<=x187)/x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = 8;
	int16_t x190 = 1;
	int64_t x192 = -1LL;

	t47 = (x189|((x190<=x191)/x192));

	if (t47 != 8LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x194 = 99U;
	int16_t x195 = INT16_MIN;
	static volatile int64_t t48 = INT64_MAX;

	t48 = (x193|((x194<=x195)/x196));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 40249593081LLU;
	int8_t x199 = INT8_MIN;
	static int64_t t49 = 13942253994712LL;

	t49 = (x197|((x198<=x199)/x200));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int16_t x204 = -1;

	t50 = (x201|((x202<=x203)/x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 83926910U;
	int64_t x207 = -395LL;
	int32_t x208 = -1;
	volatile uint32_t t51 = 3U;

	t51 = (x205|((x206<=x207)/x208));

	if (t51 != 83926910U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	static int16_t x210 = -21;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = 26U;
	uint32_t t52 = 732321U;

	t52 = (x209|((x210<=x211)/x212));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 137235394460LLU;
	uint32_t x214 = 452U;
	int16_t x215 = -3;
	uint8_t x216 = 1U;
	uint64_t t53 = 356998LLU;

	t53 = (x213|((x214<=x215)/x216));

	if (t53 != 137235394461LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1;
	volatile int16_t x218 = -37;
	uint64_t x219 = 322526LLU;
	volatile int8_t x220 = INT8_MAX;
	static int32_t t54 = 3;

	t54 = (x217|((x218<=x219)/x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x223 = -6;
	static int8_t x224 = INT8_MAX;
	int32_t t55 = INT32_MIN;

	t55 = (x221|((x222<=x223)/x224));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 2;
	static int32_t x226 = INT32_MIN;
	static int64_t x227 = INT64_MIN;
	volatile uint32_t t56 = 69548U;

	t56 = (x225|((x226<=x227)/x228));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x230 = INT32_MIN;
	uint16_t x231 = 121U;
	static volatile int32_t t57 = -33;

	t57 = (x229|((x230<=x231)/x232));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 14082106050324312LLU;
	static int8_t x234 = 0;
	uint8_t x235 = 27U;
	int32_t x236 = INT32_MAX;
	uint64_t t58 = 5596LLU;

	t58 = (x233|((x234<=x235)/x236));

	if (t58 != 14082106050324312LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 27U;
	int8_t x239 = 9;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 225222506653949126LLU;

	t59 = (x237|((x238<=x239)/x240));

	if (t59 != 27LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = 116764;
	int64_t x243 = 1278766LL;
	static volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 209873033269LLU;

	t60 = (x241|((x242<=x243)/x244));

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = 1304995;
	volatile uint32_t x246 = UINT32_MAX;
	int32_t x247 = -856400982;
	volatile uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 19;

	t61 = (x245|((x246<=x247)/x248));

	if (t61 != 1304995) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int8_t x252 = INT8_MAX;

	t62 = (x249|((x250<=x251)/x252));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	int64_t t63 = INT64_MAX;

	t63 = (x253|((x254<=x255)/x256));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 0U;
	uint32_t x259 = 6206U;
	volatile int16_t x260 = INT16_MIN;
	int32_t t64 = 7;

	t64 = (x257|((x258<=x259)/x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 29437U;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t t65 = 45550136;

	t65 = (x261|((x262<=x263)/x264));

	if (t65 != 29437) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -106557638029917719LL;
	int32_t x266 = -1;
	int32_t x267 = 77416;
	volatile int64_t t66 = 8764181580666492LL;

	t66 = (x265|((x266<=x267)/x268));

	if (t66 != -106557638029917719LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 0;
	int16_t x270 = 967;
	int8_t x271 = -1;
	int32_t x272 = -1;
	int32_t t67 = 26808;

	t67 = (x269|((x270<=x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static volatile int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MIN;
	int64_t t68 = -35159525045243861LL;

	t68 = (x273|((x274<=x275)/x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	int16_t x279 = INT16_MAX;
	int8_t x280 = -1;
	volatile int32_t t69 = 1637;

	t69 = (x277|((x278<=x279)/x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	volatile int32_t x282 = 17053899;
	static int16_t x283 = 0;
	static uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x281|((x282<=x283)/x284));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -44;
	uint8_t x286 = 3U;
	int8_t x287 = INT8_MIN;
	volatile int16_t x288 = 1;

	t71 = (x285|((x286<=x287)/x288));

	if (t71 != -44) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = -26;
	uint64_t x292 = UINT64_MAX;

	t72 = (x289|((x290<=x291)/x292));

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x295 = INT64_MAX;
	static int32_t x296 = -1;
	volatile int32_t t73 = -4;

	t73 = (x293|((x294<=x295)/x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static int8_t x298 = INT8_MIN;
	int32_t x299 = -1;
	volatile int64_t x300 = 2736683597142342LL;
	static volatile int64_t t74 = 1557680823561LL;

	t74 = (x297|((x298<=x299)/x300));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = UINT8_MAX;
	uint16_t x304 = 3197U;
	int32_t t75 = 1;

	t75 = (x301|((x302<=x303)/x304));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	static int8_t x306 = -1;
	int8_t x307 = -9;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x305|((x306<=x307)/x308));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 0;
	int16_t x310 = -1;
	int64_t x312 = -1LL;
	int64_t t77 = -17866883693272LL;

	t77 = (x309|((x310<=x311)/x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	static int16_t x314 = INT16_MIN;
	int64_t t78 = INT64_MAX;

	t78 = (x313|((x314<=x315)/x316));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = -1;
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 7408971LLU;
	int16_t x320 = -3;
	int32_t t79 = 85;

	t79 = (x317|((x318<=x319)/x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = -1;
	int16_t x323 = INT16_MAX;
	volatile int32_t t80 = -1221;

	t80 = (x321|((x322<=x323)/x324));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = -15656;
	static int8_t x328 = INT8_MAX;
	static volatile int32_t t81 = -6361;

	t81 = (x325|((x326<=x327)/x328));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	volatile int16_t x330 = -15;
	int32_t x331 = -1;
	volatile int64_t x332 = INT64_MAX;
	volatile int64_t t82 = -8608LL;

	t82 = (x329|((x330<=x331)/x332));

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;
	int64_t t83 = INT64_MIN;

	t83 = (x333|((x334<=x335)/x336));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	static uint16_t x339 = 19192U;
	static volatile int16_t x340 = -1;

	t84 = (x337|((x338<=x339)/x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = 48117LL;
	volatile int64_t x343 = -1LL;
	uint64_t x344 = 7741501032180LLU;
	uint64_t t85 = 2773013374478490193LLU;

	t85 = (x341|((x342<=x343)/x344));

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 0;
	uint32_t x346 = 5478U;
	int8_t x348 = 1;
	volatile int32_t t86 = 1;

	t86 = (x345|((x346<=x347)/x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = 52;
	volatile uint32_t x351 = 1U;
	static uint16_t x352 = 562U;
	uint32_t t87 = 1U;

	t87 = (x349|((x350<=x351)/x352));

	if (t87 != 1322406919U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = 31;
	int64_t t88 = -2009008555LL;

	t88 = (x353|((x354<=x355)/x356));

	if (t88 != -65654672837439882LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	static int64_t x359 = -19040299LL;
	volatile int16_t x360 = INT16_MAX;

	t89 = (x357|((x358<=x359)/x360));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	volatile uint32_t x363 = 101797929U;
	static int16_t x364 = INT16_MIN;
	static volatile uint32_t t90 = 5U;

	t90 = (x361|((x362<=x363)/x364));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 24748775859190LLU;
	int8_t x367 = -5;
	uint64_t t91 = 6LLU;

	t91 = (x365|((x366<=x367)/x368));

	if (t91 != 24748775859190LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 93U;
	uint32_t x370 = 362342U;
	static int8_t x371 = 0;
	uint16_t x372 = 22U;
	uint32_t t92 = 1184U;

	t92 = (x369|((x370<=x371)/x372));

	if (t92 != 93U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	uint32_t x374 = 809068311U;
	int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MAX;
	volatile int64_t t93 = -147445624521LL;

	t93 = (x373|((x374<=x375)/x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint32_t x378 = 24694U;
	int32_t x379 = INT32_MIN;
	static int32_t x380 = INT32_MIN;

	t94 = (x377|((x378<=x379)/x380));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = 1475614U;
	int64_t x384 = -1LL;

	t95 = (x381|((x382<=x383)/x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int8_t x386 = -1;
	uint32_t x387 = 30706U;
	volatile int64_t x388 = INT64_MAX;
	static volatile int64_t t96 = 382038274738333LL;

	t96 = (x385|((x386<=x387)/x388));

	if (t96 != 255LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 43253357761189216LLU;
	volatile uint8_t x390 = 5U;
	static uint16_t x391 = 3U;
	uint16_t x392 = 297U;
	static uint64_t t97 = 15527LLU;

	t97 = (x389|((x390<=x391)/x392));

	if (t97 != 43253357761189216LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = UINT32_MAX;
	static int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	static uint32_t t98 = UINT32_MAX;

	t98 = (x393|((x394<=x395)/x396));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 13383984755778LLU;
	volatile uint16_t x400 = 87U;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x397|((x398<=x399)/x400));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

