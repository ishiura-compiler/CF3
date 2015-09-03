#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x16 = 189680U;
volatile uint32_t t3 = UINT32_MAX;
static int64_t x18 = INT64_MIN;
uint16_t x19 = 1624U;
int16_t x23 = 1;
int64_t x24 = 43791LL;
uint64_t x25 = 2LLU;
uint8_t x26 = 60U;
volatile int16_t x30 = INT16_MAX;
volatile int64_t t7 = 10272753758LL;
int64_t x34 = -1LL;
int8_t x35 = 1;
int32_t t10 = -3;
uint32_t x50 = UINT32_MAX;
int32_t t12 = -13;
static int8_t x54 = INT8_MIN;
volatile int64_t t13 = -96591455706039921LL;
int64_t t14 = INT64_MAX;
static int64_t x70 = -1LL;
int32_t x72 = INT32_MIN;
volatile int8_t x73 = -1;
int8_t x80 = -1;
static volatile uint64_t t20 = 132LLU;
int8_t x85 = INT8_MIN;
static uint16_t x95 = UINT16_MAX;
volatile int64_t t27 = -398884LL;
volatile int16_t x114 = 33;
uint64_t x123 = 7288907LLU;
int32_t t30 = 144;
uint8_t x125 = UINT8_MAX;
int16_t x129 = -1;
static uint64_t x138 = UINT64_MAX;
int8_t x140 = INT8_MIN;
int32_t x149 = INT32_MIN;
static int32_t x154 = INT32_MIN;
int32_t x159 = INT32_MAX;
uint8_t x170 = 10U;
volatile int32_t t41 = -599905;
int64_t x175 = INT64_MAX;
int64_t x177 = -1LL;
int64_t t43 = 2894469232015197LL;
static volatile int32_t x184 = -1;
volatile int32_t t45 = 1;
int16_t x190 = -15844;
int16_t x196 = 16061;
int64_t t47 = 168915LL;
volatile uint64_t t48 = 79LLU;
int8_t x208 = -1;
int64_t t51 = 10032605509801850LL;
int64_t x221 = INT64_MIN;
static int8_t x227 = INT8_MAX;
int16_t x234 = -1;
static uint8_t x235 = UINT8_MAX;
int8_t x236 = INT8_MAX;
static uint8_t x237 = 0U;
uint8_t x238 = 32U;
int64_t x255 = INT64_MAX;
uint32_t x257 = 27926054U;
static uint8_t x259 = 0U;
int8_t x260 = INT8_MIN;
uint32_t t63 = 30361U;
static uint16_t x262 = 1U;
volatile int16_t x269 = INT16_MIN;
int32_t x270 = INT32_MIN;
uint64_t t66 = 2521987LLU;
static int32_t x277 = -20376848;
static int32_t x280 = 244;
int32_t t68 = -52403664;
int32_t x284 = INT32_MIN;
volatile int64_t x285 = INT64_MAX;
volatile int64_t x287 = INT64_MIN;
int64_t t71 = -2235803388013453LL;
int64_t x295 = INT64_MIN;
volatile int64_t t72 = INT64_MAX;
uint64_t x306 = 51231738LLU;
int8_t x307 = 58;
int64_t x310 = -1LL;
volatile int16_t x319 = -5838;
uint64_t t77 = 41LLU;
int32_t x322 = 30539153;
int64_t x325 = INT64_MIN;
int32_t x334 = INT32_MIN;
static int8_t x349 = INT8_MIN;
int32_t x357 = -11;
volatile int32_t t87 = 5926849;
int32_t x361 = INT32_MAX;
static int16_t x365 = INT16_MIN;
uint32_t x369 = 50377140U;
static int64_t x381 = -606465312741830LL;
uint64_t x386 = 5705089355121274697LLU;
volatile int32_t t93 = 7161085;
volatile int32_t t94 = 72753;
uint32_t x399 = UINT32_MAX;
int64_t x401 = -1LL;
uint32_t x402 = UINT32_MAX;
int32_t x405 = -210951392;
int8_t x408 = INT8_MIN;
int8_t x409 = -1;


void f0(void) {
	static volatile int16_t x1 = INT16_MIN;
	static uint8_t x2 = 70U;
	static uint8_t x3 = 18U;
	int32_t x4 = -3016522;
	volatile int32_t t0 = -22674;

	t0 = (x1|((x2<x3)%x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 13LL;
	uint64_t x6 = 213926558LLU;
	int32_t x7 = 5;
	static volatile int32_t x8 = INT32_MAX;
	static int64_t t1 = 65825LL;

	t1 = (x5|((x6<x7)%x8));

	if (t1 != 13LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	static volatile int32_t x11 = 23;
	static int8_t x12 = -6;
	int32_t t2 = -250;

	t2 = (x9|((x10<x11)%x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	static uint64_t x14 = 2943582714619LLU;
	uint16_t x15 = UINT16_MAX;

	t3 = (x13|((x14<x15)%x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -9744LL;
	int16_t x20 = -1;
	int64_t t4 = -204378192493LL;

	t4 = (x17|((x18<x19)%x20));

	if (t4 != -9744LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -452926089540128LL;
	volatile uint16_t x22 = UINT16_MAX;
	volatile int64_t t5 = -290526846542245683LL;

	t5 = (x21|((x22<x23)%x24));

	if (t5 != -452926089540128LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x27 = UINT32_MAX;
	static int16_t x28 = 1753;
	static uint64_t t6 = 375190478133000876LLU;

	t6 = (x25|((x26<x27)%x28));

	if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 19032LL;
	int8_t x31 = 22;
	int64_t x32 = INT64_MIN;

	t7 = (x29|((x30<x31)%x32));

	if (t7 != 19032LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (x33|((x34<x35)%x36));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -13885175LL;
	static int64_t x38 = INT64_MAX;
	uint64_t x39 = 1951980332LLU;
	int8_t x40 = INT8_MIN;
	static int64_t t9 = -90231556LL;

	t9 = (x37|((x38<x39)%x40));

	if (t9 != -13885175LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 88;
	volatile uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MAX;
	volatile int16_t x44 = INT16_MIN;

	t10 = (x41|((x42<x43)%x44));

	if (t10 != 88) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = -32144709;
	uint8_t x47 = UINT8_MAX;
	static int8_t x48 = INT8_MAX;
	int32_t t11 = -1007113020;

	t11 = (x45|((x46<x47)%x48));

	if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -2883;
	volatile uint16_t x51 = UINT16_MAX;
	uint16_t x52 = 21619U;

	t12 = (x49|((x50<x51)%x52));

	if (t12 != -2883) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	int64_t x56 = INT64_MIN;

	t13 = (x53|((x54<x55)%x56));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = INT16_MIN;
	static uint64_t x59 = UINT64_MAX;
	int64_t x60 = -300179709233610190LL;

	t14 = (x57|((x58<x59)%x60));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1LLU;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = 1921975476U;
	volatile uint64_t t15 = 1702354LLU;

	t15 = (x61|((x62<x63)%x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static uint32_t x66 = 756625974U;
	volatile int8_t x67 = -2;
	uint32_t x68 = 180489U;
	int64_t t16 = -1981074534304151543LL;

	t16 = (x65|((x66<x67)%x68));

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static uint64_t x71 = UINT64_MAX;
	int32_t t17 = -2;

	t17 = (x69|((x70<x71)%x72));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	volatile uint32_t x76 = 1516932498U;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x73|((x74<x75)%x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 6U;
	uint64_t x78 = 134281LLU;
	int16_t x79 = INT16_MAX;
	volatile int32_t t19 = 8159;

	t19 = (x77|((x78<x79)%x80));

	if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = 4U;
	uint64_t x84 = 16142LLU;

	t20 = (x81|((x82<x83)%x84));

	if (t20 != 65535LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = INT32_MAX;
	volatile int8_t x87 = INT8_MAX;
	static volatile uint32_t x88 = 223410456U;
	uint32_t t21 = 6U;

	t21 = (x85|((x86<x87)%x88));

	if (t21 != 4294967168U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1490699455LLU;
	static int8_t x90 = -1;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	uint64_t t22 = 113729785522101767LLU;

	t22 = (x89|((x90<x91)%x92));

	if (t22 != 1490699455LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 5818LLU;
	int8_t x94 = 5;
	uint16_t x96 = UINT16_MAX;
	uint64_t t23 = 3989955LLU;

	t23 = (x93|((x94<x95)%x96));

	if (t23 != 5819LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 459202820LL;
	int64_t x98 = INT64_MIN;
	int8_t x99 = 1;
	uint16_t x100 = 4315U;
	int64_t t24 = -448779753804852LL;

	t24 = (x97|((x98<x99)%x100));

	if (t24 != 459202821LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MAX;
	volatile int8_t x103 = INT8_MIN;
	int64_t x104 = 272368639400620305LL;
	static volatile int64_t t25 = 370420649LL;

	t25 = (x101|((x102<x103)%x104));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = UINT32_MAX;
	uint8_t x106 = 35U;
	int8_t x107 = INT8_MAX;
	int64_t x108 = INT64_MAX;
	volatile int64_t t26 = -2576876481776LL;

	t26 = (x105|((x106<x107)%x108));

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	volatile int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MAX;

	t27 = (x109|((x110<x111)%x112));

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 0;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t28 = -19LL;

	t28 = (x113|((x114<x115)%x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = INT16_MIN;
	int8_t x118 = 45;
	uint8_t x119 = 0U;
	uint16_t x120 = 3U;
	static volatile int32_t t29 = 35665190;

	t29 = (x117|((x118<x119)%x120));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 34U;
	int8_t x122 = -5;
	int8_t x124 = INT8_MIN;

	t30 = (x121|((x122<x123)%x124));

	if (t30 != 34) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 0U;
	volatile uint8_t x127 = 1U;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 195;

	t31 = (x125|((x126<x127)%x128));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x130 = 5015788U;
	volatile int8_t x131 = -1;
	int32_t x132 = -529604525;
	volatile int32_t t32 = 6;

	t32 = (x129|((x130<x131)%x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static volatile uint64_t x134 = UINT64_MAX;
	int8_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 409;

	t33 = (x133|((x134<x135)%x136));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x139 = 6;
	int64_t t34 = INT64_MAX;

	t34 = (x137|((x138<x139)%x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 2U;
	volatile uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MAX;
	static uint16_t x144 = UINT16_MAX;
	int32_t t35 = 33390;

	t35 = (x141|((x142<x143)%x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x150 = INT8_MIN;
	uint64_t x151 = UINT64_MAX;
	volatile uint16_t x152 = 1453U;
	int32_t t36 = 3458909;

	t36 = (x149|((x150<x151)%x152));

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 9775LLU;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 2652U;
	uint64_t t37 = 22LLU;

	t37 = (x153|((x154<x155)%x156));

	if (t37 != 9775LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 37U;
	uint16_t x158 = 960U;
	int8_t x160 = 1;
	int32_t t38 = 7942;

	t38 = (x157|((x158<x159)%x160));

	if (t38 != 37) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	static volatile int16_t x164 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (x161|((x162<x163)%x164));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 4681505596LLU;
	static int8_t x166 = -1;
	volatile int64_t x167 = 10503048279LL;
	uint64_t x168 = UINT64_MAX;
	uint64_t t40 = 3163912358565LLU;

	t40 = (x165|((x166<x167)%x168));

	if (t40 != 4681505597LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = 0;
	volatile int8_t x171 = INT8_MIN;
	static volatile uint8_t x172 = 19U;

	t41 = (x169|((x170<x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = 465246623;
	int16_t x174 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t42 = 59163;

	t42 = (x173|((x174<x175)%x176));

	if (t42 != 465246623) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = -1;
	static int32_t x179 = 1;
	int64_t x180 = 9480739467199266LL;

	t43 = (x177|((x178<x179)%x180));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = -1;
	int64_t x182 = -2014738693626167478LL;
	static uint8_t x183 = UINT8_MAX;
	int32_t t44 = -1;

	t44 = (x181|((x182<x183)%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 8800;
	static int16_t x186 = 1;
	static int64_t x187 = INT64_MIN;
	int32_t x188 = -25258052;

	t45 = (x185|((x186<x187)%x188));

	if (t45 != 8800) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t x192 = INT32_MAX;
	int32_t t46 = -235119;

	t46 = (x189|((x190<x191)%x192));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	volatile int8_t x194 = -3;
	volatile uint16_t x195 = 16640U;

	t47 = (x193|((x194<x195)%x196));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -110457844;
	int8_t x198 = -28;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = UINT64_MAX;

	t48 = (x197|((x198<x199)%x200));

	if (t48 != 18446744073599093772LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	int32_t x204 = 19334;
	int64_t t49 = 839520LL;

	t49 = (x201|((x202<x203)%x204));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 15U;
	uint8_t x206 = 7U;
	int64_t x207 = 1LL;
	volatile int32_t t50 = 2777;

	t50 = (x205|((x206<x207)%x208));

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = -6;
	int16_t x211 = -852;
	int64_t x212 = -1LL;

	t51 = (x209|((x210<x211)%x212));

	if (t51 != 255LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 1;
	int16_t x214 = -1;
	uint8_t x215 = 4U;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t52 = 434888284651093LL;

	t52 = (x213|((x214<x215)%x216));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = UINT16_MAX;
	static int16_t x218 = -1;
	int64_t x219 = 69019LL;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t53 = -27;

	t53 = (x217|((x218<x219)%x220));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = 1;
	int8_t x224 = 1;
	int64_t t54 = INT64_MIN;

	t54 = (x221|((x222<x223)%x224));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = -36;
	volatile int32_t x228 = INT32_MAX;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x225|((x226<x227)%x228));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MAX;
	static volatile uint16_t x231 = 266U;
	static uint8_t x232 = 1U;
	int32_t t56 = 26031016;

	t56 = (x229|((x230<x231)%x232));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t t57 = -36875;

	t57 = (x233|((x234<x235)%x236));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x239 = -1LL;
	int64_t x240 = 285398986823568080LL;
	static int64_t t58 = -30890731319960LL;

	t58 = (x237|((x238<x239)%x240));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = -6;
	uint32_t x244 = 92382U;
	uint32_t t59 = UINT32_MAX;

	t59 = (x241|((x242<x243)%x244));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = 1637;
	int32_t x246 = INT32_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 27482U;
	uint32_t t60 = 31U;

	t60 = (x245|((x246<x247)%x248));

	if (t60 != 1637U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = 1U;
	int64_t x250 = INT64_MAX;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t61 = -1302LL;

	t61 = (x249|((x250<x251)%x252));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 2847818U;
	int64_t x254 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	static volatile uint32_t t62 = 1557475203U;

	t62 = (x253|((x254<x255)%x256));

	if (t62 != 2847819U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x258 = 136U;

	t63 = (x257|((x258<x259)%x260));

	if (t63 != 27926054U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x261 = 19321038U;
	uint8_t x263 = 58U;
	int8_t x264 = INT8_MIN;
	uint32_t t64 = 182U;

	t64 = (x261|((x262<x263)%x264));

	if (t64 != 19321039U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -1;
	uint8_t x266 = 3U;
	int64_t x267 = 679135309216617187LL;
	uint64_t x268 = 348278LLU;
	static uint64_t t65 = UINT64_MAX;

	t65 = (x265|((x266<x267)%x268));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x271 = UINT32_MAX;
	uint64_t x272 = 3914900354996629193LLU;

	t66 = (x269|((x270<x271)%x272));

	if (t66 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	volatile int16_t x274 = -2280;
	int8_t x275 = -7;
	volatile int64_t x276 = INT64_MIN;
	int64_t t67 = -27895LL;

	t67 = (x273|((x274<x275)%x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x278 = -1;
	uint8_t x279 = 9U;

	t68 = (x277|((x278<x279)%x280));

	if (t68 != -20376847) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	static volatile int64_t x283 = INT64_MAX;
	volatile int32_t t69 = INT32_MIN;

	t69 = (x281|((x282<x283)%x284));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x286 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x285|((x286<x287)%x288));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = 1U;
	int16_t x291 = -11275;
	static int64_t x292 = -20896LL;

	t71 = (x289|((x290<x291)%x292));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = 1;
	volatile int64_t x296 = -4554048LL;

	t72 = (x293|((x294<x295)%x296));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x297 = 0;
	uint64_t x298 = 1573877567LLU;
	uint64_t x299 = 45LLU;
	uint16_t x300 = 248U;
	int32_t t73 = -130511;

	t73 = (x297|((x298<x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int64_t x308 = -1LL;
	volatile int64_t t74 = -282702741420890320LL;

	t74 = (x305|((x306<x307)%x308));

	if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	int8_t x311 = 0;
	volatile int8_t x312 = -1;
	volatile int32_t t75 = 4;

	t75 = (x309|((x310<x311)%x312));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int32_t x314 = INT32_MIN;
	uint16_t x315 = 15U;
	int16_t x316 = -1;
	int32_t t76 = 236862341;

	t76 = (x313|((x314<x315)%x316));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -5058;
	int8_t x318 = INT8_MIN;
	static uint64_t x320 = 1LLU;

	t77 = (x317|((x318<x319)%x320));

	if (t77 != 18446744073709546558LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = 15888182;
	int8_t x323 = 17;
	int8_t x324 = INT8_MIN;
	int32_t t78 = -44;

	t78 = (x321|((x322<x323)%x324));

	if (t78 != 15888182) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = -3;
	int16_t x327 = -1;
	static int16_t x328 = INT16_MIN;
	int64_t t79 = 1813222567270LL;

	t79 = (x325|((x326<x327)%x328));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = -1;
	int64_t x331 = INT64_MAX;
	uint16_t x332 = 115U;
	int32_t t80 = 164;

	t80 = (x329|((x330<x331)%x332));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = INT16_MIN;
	volatile int8_t x335 = INT8_MIN;
	static int64_t x336 = -344165135LL;
	static volatile int64_t t81 = -359842023422861LL;

	t81 = (x333|((x334<x335)%x336));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	uint32_t x339 = UINT32_MAX;
	int8_t x340 = -1;
	static int64_t t82 = INT64_MIN;

	t82 = (x337|((x338<x339)%x340));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = -3;
	volatile uint16_t x343 = 29798U;
	static int32_t x344 = INT32_MIN;
	int32_t t83 = 498;

	t83 = (x341|((x342<x343)%x344));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = -1;
	uint64_t x347 = 25093469LLU;
	static volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x345|((x346<x347)%x348));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = -1LL;
	int32_t x351 = -1;
	int64_t x352 = -1784509125LL;
	static volatile int64_t t85 = -40432150422LL;

	t85 = (x349|((x350<x351)%x352));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MAX;
	volatile uint32_t x354 = 3705U;
	uint32_t x355 = UINT32_MAX;
	static int64_t x356 = -2237765387461824LL;
	int64_t t86 = 247729304125954384LL;

	t86 = (x353|((x354<x355)%x356));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x358 = 2479;
	volatile uint16_t x359 = 19832U;
	static int16_t x360 = INT16_MIN;

	t87 = (x357|((x358<x359)%x360));

	if (t87 != -11) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x362 = INT64_MIN;
	int64_t x363 = -512889669245103LL;
	int64_t x364 = INT64_MIN;
	int64_t t88 = 3426877931LL;

	t88 = (x361|((x362<x363)%x364));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x366 = 651432924228606LLU;
	static uint64_t x367 = UINT64_MAX;
	static uint16_t x368 = 6U;
	int32_t t89 = -86034;

	t89 = (x365|((x366<x367)%x368));

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	int64_t x372 = INT64_MIN;
	static int64_t t90 = -1223942810113422LL;

	t90 = (x369|((x370<x371)%x372));

	if (t90 != 50377141LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = INT32_MIN;
	static volatile uint8_t x378 = 6U;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;
	int64_t t91 = -1702245590841062795LL;

	t91 = (x377|((x378<x379)%x380));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	static uint16_t x384 = 1472U;
	volatile int64_t t92 = 23074063045186LL;

	t92 = (x381|((x382<x383)%x384));

	if (t92 != -606465312741829LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x385 = 7680U;
	static uint32_t x387 = UINT32_MAX;
	int32_t x388 = -161372381;

	t93 = (x385|((x386<x387)%x388));

	if (t93 != 7680) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = 1;
	volatile uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MAX;
	volatile int16_t x392 = -7;

	t94 = (x389|((x390<x391)%x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	int16_t x395 = -1;
	static uint64_t x396 = 5LLU;
	volatile uint64_t t95 = 41005LLU;

	t95 = (x393|((x394<x395)%x396));

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x397 = 0U;
	int16_t x398 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	static int64_t t96 = 52036377015934LL;

	t96 = (x397|((x398<x399)%x400));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = INT64_MAX;
	static volatile int64_t t97 = 42LL;

	t97 = (x401|((x402<x403)%x404));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x406 = INT16_MIN;
	uint8_t x407 = 11U;
	int32_t t98 = -12555179;

	t98 = (x405|((x406<x407)%x408));

	if (t98 != -210951391) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x410 = INT8_MIN;
	static int64_t x411 = -1LL;
	int8_t x412 = INT8_MAX;
	static volatile int32_t t99 = 7327;

	t99 = (x409|((x410<x411)%x412));

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

