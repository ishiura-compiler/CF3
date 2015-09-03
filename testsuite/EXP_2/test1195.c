#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -1;
volatile int32_t x11 = -1;
static uint16_t x13 = UINT16_MAX;
int64_t x17 = 45512216197875LL;
volatile int32_t x20 = 583;
uint8_t x21 = 81U;
uint8_t x22 = 0U;
static volatile int64_t x30 = INT64_MIN;
int64_t x33 = INT64_MIN;
int64_t t8 = 250453171241LL;
uint8_t x48 = UINT8_MAX;
volatile uint16_t x50 = UINT16_MAX;
uint16_t x55 = UINT16_MAX;
static int32_t t13 = 148;
volatile int64_t x57 = 41826LL;
uint8_t x64 = 61U;
uint8_t x71 = 47U;
int32_t x73 = INT32_MIN;
volatile uint16_t x77 = 12401U;
uint16_t x80 = 166U;
int16_t x81 = -4967;
static volatile int32_t t20 = -61;
volatile int64_t x85 = INT64_MIN;
uint64_t x87 = 114122226613244970LLU;
static volatile int64_t x103 = -1LL;
int32_t x106 = INT32_MIN;
volatile int64_t t26 = 748LL;
int64_t x110 = -23089067842100LL;
int16_t x114 = -1;
uint64_t x116 = 3LLU;
int32_t x117 = INT32_MAX;
int64_t t29 = 87919531LL;
int64_t x122 = INT64_MAX;
int32_t x123 = INT32_MIN;
int16_t x132 = 9267;
int64_t x134 = INT64_MIN;
static int8_t x136 = INT8_MAX;
int16_t x156 = 0;
int16_t x159 = INT16_MAX;
uint16_t x164 = 81U;
static volatile int32_t t40 = INT32_MAX;
int16_t x167 = -1;
int64_t t43 = -8201237043LL;
int32_t t52 = -51195;
volatile int8_t x215 = 29;
int8_t x220 = -1;
static int8_t x223 = INT8_MIN;
int8_t x225 = INT8_MIN;
uint32_t x230 = UINT32_MAX;
static int8_t x231 = INT8_MAX;
uint64_t x234 = 42326206227692844LLU;
uint16_t x241 = UINT16_MAX;
int16_t x244 = INT16_MAX;
uint64_t t61 = UINT64_MAX;
int64_t t64 = 1379LL;
volatile uint8_t x267 = UINT8_MAX;
volatile uint64_t t67 = 1874310142517846231LLU;
int8_t x275 = INT8_MAX;
static volatile uint32_t x277 = UINT32_MAX;
volatile int64_t x280 = INT64_MIN;
int64_t t69 = INT64_MIN;
uint32_t x281 = 111188466U;
uint8_t x286 = 3U;
static uint32_t t71 = UINT32_MAX;
static uint32_t x294 = 693U;
int16_t x296 = -1;
int64_t x297 = INT64_MIN;
int8_t x299 = INT8_MIN;
int16_t x307 = -1;
volatile int64_t t76 = -352LL;
int64_t x316 = INT64_MIN;
static uint32_t t79 = UINT32_MAX;
uint64_t x322 = 14581321806LLU;
int64_t t80 = -40LL;
int64_t x333 = INT64_MIN;
int16_t x336 = 117;
volatile int64_t t83 = 6347687446512876LL;
volatile uint8_t x339 = 4U;
static int32_t t84 = 3;
int16_t x341 = 1;
int32_t t85 = 2980266;
int32_t x345 = -1;
static uint64_t x355 = 313023566LLU;
uint64_t x356 = 271978906241731LLU;
static uint64_t t88 = 224458585311LLU;
volatile uint16_t x364 = UINT16_MAX;
static int16_t x365 = INT16_MIN;
static uint8_t x368 = 46U;
int64_t x369 = -249303286703496LL;
int32_t x372 = -1;
static uint64_t x374 = 263773087LLU;
static volatile uint64_t t94 = UINT64_MAX;
int64_t x398 = INT64_MIN;
int8_t x400 = -1;


void f0(void) {
	static uint16_t x1 = 896U;
	int32_t x2 = 1976;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 2U;
	int32_t t0 = -117972689;

	t0 = ((x1+(x2==x3))|x4);

	if (t0 != 898) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	volatile uint64_t x6 = 264LLU;
	int16_t x7 = INT16_MAX;
	static int8_t x8 = -1;
	volatile int32_t t1 = 88;

	t1 = ((x5+(x6==x7))|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 5U;
	volatile int32_t x12 = -1;
	uint32_t t2 = UINT32_MAX;

	t2 = ((x9+(x10==x11))|x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = UINT16_MAX;
	static volatile int32_t x15 = -727923;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13+(x14==x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x18 = 3U;
	uint64_t x19 = 2401736400784796LLU;
	volatile int64_t t4 = 32956454652515LL;

	t4 = ((x17+(x18==x19))|x20);

	if (t4 != 45512216197879LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x23 = UINT64_MAX;
	static volatile uint64_t x24 = 35376295842446080LLU;
	volatile uint64_t t5 = 542789266537712305LLU;

	t5 = ((x21+(x22==x23))|x24);

	if (t5 != 35376295842446161LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 341688523LLU;
	volatile int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	static volatile int8_t x28 = -1;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x25+(x26==x27))|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile int64_t x31 = INT64_MAX;
	uint8_t x32 = 6U;
	volatile int32_t t7 = 2;

	t7 = ((x29+(x30==x31))|x32);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 970953887LLU;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = INT8_MIN;

	t8 = ((x33+(x34==x35))|x36);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 0U;
	int32_t x38 = 247;
	volatile int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37+(x38==x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -3485716848803803LL;
	int64_t x42 = INT64_MAX;
	int16_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41+(x42==x43))|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 24350615220034512LLU;
	volatile uint16_t x46 = 1U;
	volatile int16_t x47 = INT16_MIN;
	static uint64_t t11 = 29512LLU;

	t11 = ((x45+(x46==x47))|x48);

	if (t11 != 24350615220034559LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 1U;
	volatile uint16_t x51 = UINT16_MAX;
	int64_t x52 = 64567573848LL;
	int64_t t12 = -27733945971265422LL;

	t12 = ((x49+(x50==x51))|x52);

	if (t12 != 64567573850LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	uint64_t x54 = 3572792714146790LLU;
	static uint8_t x56 = UINT8_MAX;

	t13 = ((x53+(x54==x55))|x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 0;
	int8_t x59 = INT8_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t14 = -3870685575265LL;

	t14 = ((x57+(x58==x59))|x60);

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MIN;
	static volatile int32_t t15 = -734694;

	t15 = ((x61+(x62==x63))|x64);

	if (t15 != -32707) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	uint64_t x66 = 92839899LLU;
	volatile uint16_t x67 = UINT16_MAX;
	int16_t x68 = -1;
	static volatile int64_t t16 = -9676433LL;

	t16 = ((x65+(x66==x67))|x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = UINT32_MAX;
	int16_t x70 = -658;
	volatile uint16_t x72 = 1U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x69+(x70==x71))|x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 2115LLU;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -9;

	t18 = ((x73+(x74==x75))|x76);

	if (t18 != -2147483393) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x78 = -1LL;
	static uint16_t x79 = UINT16_MAX;
	int32_t t19 = -4966;

	t19 = ((x77+(x78==x79))|x80);

	if (t19 != 12535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 103U;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = UINT16_MAX;

	t20 = ((x81+(x82==x83))|x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int16_t x88 = INT16_MIN;
	static volatile int64_t t21 = 590LL;

	t21 = ((x85+(x86==x87))|x88);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 331153848LLU;
	int32_t x92 = -1;
	static volatile int32_t t22 = 3;

	t22 = ((x89+(x90==x91))|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1U;
	int64_t x94 = INT64_MIN;
	int32_t x95 = 12941669;
	uint16_t x96 = 0U;
	int32_t t23 = -62648;

	t23 = ((x93+(x94==x95))|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 934352141683644LLU;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 391158379U;
	volatile int32_t x100 = -56;
	static uint64_t t24 = 47557471912796704LLU;

	t24 = ((x97+(x98==x99))|x100);

	if (t24 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	int16_t x102 = 982;
	int32_t x104 = -1;
	int32_t t25 = 46;

	t25 = ((x101+(x102==x103))|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -68744013969153LL;
	int32_t x107 = 277678;
	uint8_t x108 = 60U;

	t26 = ((x105+(x106==x107))|x108);

	if (t26 != -68744013969153LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -10;
	static int8_t x111 = INT8_MIN;
	static uint16_t x112 = 2U;
	int32_t t27 = -220595;

	t27 = ((x109+(x110==x111))|x112);

	if (t27 != -10) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile uint8_t x115 = UINT8_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113+(x114==x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -584954;
	static uint8_t x119 = UINT8_MAX;
	int64_t x120 = 1LL;

	t29 = ((x117+(x118==x119))|x120);

	if (t29 != 2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	uint32_t x124 = 163077894U;
	uint32_t t30 = 870785827U;

	t30 = ((x121+(x122==x123))|x124);

	if (t30 != 163086335U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile int8_t x126 = 1;
	static int64_t x127 = -1LL;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -8;

	t31 = ((x125+(x126==x127))|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 849U;
	static int16_t x130 = INT16_MAX;
	uint32_t x131 = 2361U;
	static int32_t t32 = 5304175;

	t32 = ((x129+(x130==x131))|x132);

	if (t32 != 10099) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t t33 = 2452;

	t33 = ((x133+(x134==x135))|x136);

	if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	volatile int64_t x140 = INT64_MAX;
	volatile int64_t t34 = 465LL;

	t34 = ((x137+(x138==x139))|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -11;
	int32_t x142 = INT32_MIN;
	static volatile int64_t x143 = INT64_MIN;
	static int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = -1481684;

	t35 = ((x141+(x142==x143))|x144);

	if (t35 != -11) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MAX;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -15866338LL;
	uint64_t x148 = 74060526900LLU;
	volatile uint64_t t36 = 0LLU;

	t36 = ((x145+(x146==x147))|x148);

	if (t36 != 74060529663LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	static uint32_t x151 = 683518U;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = 10;

	t37 = ((x149+(x150==x151))|x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	static int32_t x154 = INT32_MIN;
	volatile uint32_t x155 = 44337U;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x153+(x154==x155))|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1009910;
	uint64_t x158 = 33976111610665LLU;
	int16_t x160 = 1;
	volatile int32_t t39 = 70;

	t39 = ((x157+(x158==x159))|x160);

	if (t39 != -1009909) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static volatile int8_t x162 = -1;
	uint8_t x163 = 0U;

	t40 = ((x161+(x162==x163))|x164);

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1124342455476862912LL;
	volatile int8_t x166 = -1;
	int16_t x168 = INT16_MIN;
	volatile int64_t t41 = 251705419909LL;

	t41 = ((x165+(x166==x167))|x168);

	if (t41 != -16319LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -891354693756LL;
	volatile int8_t x170 = -21;
	int16_t x171 = -1;
	static uint16_t x172 = 2003U;
	int64_t t42 = -3731950263934LL;

	t42 = ((x169+(x170==x171))|x172);

	if (t42 != -891354693673LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile uint64_t x174 = 125789794747LLU;
	static int64_t x175 = INT64_MIN;
	static int64_t x176 = INT64_MIN;

	t43 = ((x173+(x174==x175))|x176);

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = 12708777U;
	static uint32_t x179 = UINT32_MAX;
	static uint64_t x180 = 423LLU;
	volatile uint64_t t44 = 102LLU;

	t44 = ((x177+(x178==x179))|x180);

	if (t44 != 511LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = -1;
	static int64_t x183 = INT64_MAX;
	volatile int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 11976;

	t45 = ((x181+(x182==x183))|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static volatile uint32_t x186 = 105U;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -487603599;

	t46 = ((x185+(x186==x187))|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -11;
	uint16_t x190 = UINT16_MAX;
	static uint64_t x191 = 7659304086LLU;
	static uint16_t x192 = 2U;
	volatile int32_t t47 = -198;

	t47 = ((x189+(x190==x191))|x192);

	if (t47 != -9) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	int64_t x194 = INT64_MIN;
	volatile uint32_t x195 = 0U;
	int32_t x196 = 21260297;
	static int32_t t48 = 2020;

	t48 = ((x193+(x194==x195))|x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MAX;
	int16_t x198 = -1;
	static volatile int64_t x199 = INT64_MAX;
	volatile int32_t x200 = INT32_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = ((x197+(x198==x199))|x200);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x203 = -1;
	int16_t x204 = INT16_MAX;
	volatile int64_t t50 = -226785234496LL;

	t50 = ((x201+(x202==x203))|x204);

	if (t50 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 11U;
	static volatile int32_t x206 = -228;
	int64_t x207 = 3015082246818026206LL;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -10149870;

	t51 = ((x205+(x206==x207))|x208);

	if (t51 != -2147483637) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MAX;
	int16_t x211 = -1;
	int32_t x212 = -60820058;

	t52 = ((x209+(x210==x211))|x212);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x216 = 21482360382330LLU;
	uint64_t t53 = 1566LLU;

	t53 = ((x213+(x214==x215))|x216);

	if (t53 != 21483426414591LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 6410668;
	uint64_t x218 = 407530750697318233LLU;
	uint64_t x219 = 539481902902086789LLU;
	int32_t t54 = 14;

	t54 = ((x217+(x218==x219))|x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = -125880903;

	t55 = ((x221+(x222==x223))|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = -46434290LL;
	int32_t x227 = -5237;
	int64_t x228 = 132848990LL;
	static int64_t t56 = 28588548LL;

	t56 = ((x225+(x226==x227))|x228);

	if (t56 != -34LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x232 = 46140055661LLU;
	uint64_t t57 = 133903228795LLU;

	t57 = ((x229+(x230==x231))|x232);

	if (t57 != 9223372082994831469LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	int32_t t58 = -3923;

	t58 = ((x233+(x234==x235))|x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 867980891LL;
	int8_t x238 = -1;
	volatile uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;
	volatile int64_t t59 = 3582855663218095LL;

	t59 = ((x237+(x238==x239))|x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = UINT32_MAX;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t t60 = -1006196355;

	t60 = ((x241+(x242==x243))|x244);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 4821150748807898099LLU;
	static int32_t x246 = -1681479;
	int16_t x247 = INT16_MIN;
	static volatile int64_t x248 = -1LL;

	t61 = ((x245+(x246==x247))|x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = 37LL;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 196998;

	t62 = ((x249+(x250==x251))|x252);

	if (t62 != -2147450881) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = -1;
	int32_t t63 = -7;

	t63 = ((x253+(x254==x255))|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -1027238975LL;

	t64 = ((x257+(x258==x259))|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 3229;
	volatile uint32_t x262 = UINT32_MAX;
	volatile int16_t x263 = INT16_MIN;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t65 = INT32_MAX;

	t65 = ((x261+(x262==x263))|x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 15U;
	volatile int8_t x266 = INT8_MIN;
	static int64_t x268 = -1LL;
	int64_t t66 = 254015065LL;

	t66 = ((x265+(x266==x267))|x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 1579435041LLU;
	uint16_t x270 = 45U;
	int8_t x271 = -1;
	int8_t x272 = 0;

	t67 = ((x269+(x270==x271))|x272);

	if (t67 != 1579435041LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 186966277051716353LL;
	static volatile int64_t x274 = -2210858287190584057LL;
	volatile uint16_t x276 = UINT16_MAX;
	volatile int64_t t68 = -246LL;

	t68 = ((x273+(x274==x275))|x276);

	if (t68 != 186966277051777023LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = -1;
	volatile uint64_t x279 = UINT64_MAX;

	t69 = ((x277+(x278==x279))|x280);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = UINT16_MAX;
	static int8_t x283 = -2;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t70 = 193U;

	t70 = ((x281+(x282==x283))|x284);

	if (t70 != 4294941170U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MAX;
	static uint16_t x287 = 895U;
	volatile uint32_t x288 = UINT32_MAX;

	t71 = ((x285+(x286==x287))|x288);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 1U;
	uint8_t x290 = 9U;
	static uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 4U;
	int32_t t72 = -1;

	t72 = ((x289+(x290==x291))|x292);

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	static int16_t x295 = -1;
	static volatile int64_t t73 = 242LL;

	t73 = ((x293+(x294==x295))|x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	volatile int16_t x300 = INT16_MAX;
	int64_t t74 = 53414LL;

	t74 = ((x297+(x298==x299))|x300);

	if (t74 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int32_t x302 = -63;
	volatile int64_t x303 = INT64_MIN;
	volatile int8_t x304 = INT8_MIN;
	static volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x301+(x302==x303))|x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int8_t x306 = INT8_MAX;
	int16_t x308 = 5677;

	t76 = ((x305+(x306==x307))|x308);

	if (t76 != -9223372036854770131LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	int8_t x310 = -1;
	static uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;
	int64_t t77 = -14969618452LL;

	t77 = ((x309+(x310==x311))|x312);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 428U;
	volatile int64_t t78 = 1264116600337957LL;

	t78 = ((x313+(x314==x315))|x316);

	if (t78 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	static int32_t x318 = -2;
	volatile uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 0U;

	t79 = ((x317+(x318==x319))|x320);

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 3203;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = INT64_MIN;

	t80 = ((x321+(x322==x323))|x324);

	if (t80 != -9223372036854772605LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = UINT32_MAX;
	static volatile uint32_t x326 = UINT32_MAX;
	static int16_t x327 = INT16_MIN;
	static uint8_t x328 = UINT8_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = ((x325+(x326==x327))|x328);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = 1643990493653LL;
	int64_t x331 = INT64_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = 3343744;

	t82 = ((x329+(x330==x331))|x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 15U;
	int32_t x335 = INT32_MIN;

	t83 = ((x333+(x334==x335))|x336);

	if (t83 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	volatile int64_t x338 = -1801008LL;
	int16_t x340 = -1;

	t84 = ((x337+(x338==x339))|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = -1;
	volatile int64_t x343 = INT64_MIN;
	static volatile int16_t x344 = 0;

	t85 = ((x341+(x342==x343))|x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	static int16_t x348 = -1;
	volatile int32_t t86 = 468139822;

	t86 = ((x345+(x346==x347))|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	int32_t x350 = -181;
	int64_t x351 = INT64_MAX;
	int64_t x352 = 760594271LL;
	static int64_t t87 = -68210502528LL;

	t87 = ((x349+(x350==x351))|x352);

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 26594U;
	static volatile uint64_t x354 = 35548071734LLU;

	t88 = ((x353+(x354==x355))|x356);

	if (t88 != 271978906251235LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	volatile uint16_t x358 = UINT16_MAX;
	uint16_t x359 = 103U;
	uint32_t x360 = UINT32_MAX;
	uint32_t t89 = UINT32_MAX;

	t89 = ((x357+(x358==x359))|x360);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = -4562636817037270LL;
	uint16_t x362 = 2U;
	int16_t x363 = -1;
	int64_t t90 = -127072898540153749LL;

	t90 = ((x361+(x362==x363))|x364);

	if (t90 != -4562636816973825LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x366 = -28;
	static int32_t x367 = -1;
	volatile int32_t t91 = -218;

	t91 = ((x365+(x366==x367))|x368);

	if (t91 != -32722) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = -1LL;
	int8_t x371 = INT8_MAX;
	volatile int64_t t92 = -158827151866176LL;

	t92 = ((x369+(x370==x371))|x372);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = -1;
	volatile uint16_t x375 = 3U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = -15072;

	t93 = ((x373+(x374==x375))|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile uint64_t x378 = UINT64_MAX;
	volatile int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;

	t94 = ((x377+(x378==x379))|x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	int32_t x382 = 17952;
	int8_t x383 = INT8_MAX;
	uint32_t x384 = 29588U;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = ((x381+(x382==x383))|x384);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	volatile int16_t x386 = 0;
	static volatile int32_t x387 = 2752861;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x385+(x386==x387))|x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 18092615LL;
	uint8_t x390 = 15U;
	uint8_t x391 = 1U;
	uint16_t x392 = 1003U;
	int64_t t97 = -28434149037LL;

	t97 = ((x389+(x390==x391))|x392);

	if (t97 != 18093039LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t98 = 63778591;

	t98 = ((x393+(x394==x395))|x396);

	if (t98 != -32641) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 2;
	int8_t x399 = INT8_MIN;
	int32_t t99 = -2356407;

	t99 = ((x397+(x398==x399))|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

