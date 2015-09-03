#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x14 = INT16_MIN;
volatile uint64_t t3 = 227481LLU;
uint32_t x28 = 0U;
volatile int8_t x29 = -7;
volatile uint32_t t7 = 12844231U;
int16_t x35 = -1;
int8_t x36 = INT8_MAX;
volatile int32_t x38 = 22;
uint8_t x45 = UINT8_MAX;
static uint64_t x55 = UINT64_MAX;
static int8_t x56 = -1;
static uint64_t t13 = 3943219655209088LLU;
volatile int32_t x68 = INT32_MAX;
uint32_t x72 = 670U;
int64_t x77 = -3LL;
static volatile int16_t x78 = INT16_MIN;
int64_t t18 = 31352089LL;
static uint64_t x84 = 13903LLU;
uint32_t x88 = 1195160256U;
uint64_t t20 = 3927608729LLU;
volatile int64_t x89 = -153797230LL;
volatile uint16_t x90 = 0U;
uint16_t x100 = UINT16_MAX;
int64_t x103 = INT64_MIN;
int16_t x106 = 3293;
int8_t x107 = -20;
static volatile int64_t t25 = 36237053840LL;
int32_t x109 = 122798;
static int8_t x110 = -1;
int16_t x111 = INT16_MIN;
volatile uint64_t t29 = 7538867459815458548LLU;
int16_t x131 = INT16_MIN;
volatile int64_t x135 = INT64_MIN;
volatile int64_t t32 = 1174308883LL;
int32_t x137 = INT32_MAX;
static int8_t x138 = -1;
int64_t x139 = INT64_MIN;
volatile uint16_t x148 = 5650U;
uint64_t t35 = 1607087877357730LLU;
volatile int32_t x152 = -1;
uint32_t x153 = 61104053U;
uint8_t x155 = UINT8_MAX;
int16_t x156 = -1;
volatile uint64_t x157 = UINT64_MAX;
static volatile int8_t x159 = -1;
volatile uint64_t t38 = 182290LLU;
volatile int16_t x172 = INT16_MIN;
uint16_t x173 = UINT16_MAX;
volatile int16_t x176 = INT16_MIN;
int8_t x179 = INT8_MIN;
static int64_t x181 = -1LL;
int64_t x194 = 119098179068LL;
int64_t x201 = INT64_MIN;
static int64_t t50 = -280981538343742594LL;
volatile int16_t x215 = -1;
static int16_t x224 = -163;
int16_t x225 = -1;
uint64_t t56 = 2048034865164LLU;
int16_t x234 = INT16_MAX;
static uint64_t t59 = 102LLU;
int64_t x253 = -1LL;
int64_t x259 = -1LL;
uint64_t t63 = 5331LLU;
uint64_t x263 = 133079902LLU;
static volatile uint64_t t64 = 1577LLU;
static uint64_t x273 = 2816451304LLU;
volatile int8_t x285 = 7;
int16_t x294 = INT16_MAX;
static int32_t x297 = INT32_MIN;
int8_t x304 = INT8_MIN;
int8_t x306 = INT8_MIN;
int32_t x312 = 2502272;
volatile uint8_t x320 = 1U;
int32_t t76 = -71080023;
volatile uint16_t x321 = 290U;
static uint8_t x338 = 5U;
volatile int32_t x339 = -3328;
volatile uint32_t t84 = 528664282U;
int64_t x353 = -3LL;
int16_t x355 = -3;
volatile uint16_t x359 = 10553U;
int8_t x362 = INT8_MIN;
volatile uint64_t t87 = 63838LLU;
int16_t x366 = INT16_MIN;
uint8_t x377 = UINT8_MAX;
volatile int64_t t90 = 136724308LL;
int64_t x381 = INT64_MAX;
uint32_t x382 = 5203248U;
static int64_t x384 = 10179236LL;
int16_t x390 = INT16_MAX;
int64_t x391 = -1LL;
uint8_t x395 = 29U;
static volatile int32_t x410 = -1;


void f0(void) {
	static volatile int32_t x1 = -23;
	uint8_t x2 = 13U;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 32U;
	int64_t t0 = 13626374369LL;

	t0 = (x1&((x2%x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 115799635533LLU;
	static uint16_t x7 = 851U;
	static int64_t x8 = -1LL;
	uint64_t t1 = 6370LLU;

	t1 = (x5&((x6%x7)&x8));

	if (t1 != 50LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	uint64_t x10 = 2595991LLU;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 1018198182314905777LLU;

	t2 = (x9&((x10%x11)&x12));

	if (t2 != 2588672LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint64_t x15 = 12970881526044990LLU;
	int16_t x16 = INT16_MIN;

	t3 = (x13&((x14%x15)&x16));

	if (t3 != 2150543673524224LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 975LLU;
	int32_t x18 = 1;
	volatile uint16_t x19 = 26U;
	volatile int8_t x20 = INT8_MIN;
	uint64_t t4 = 67900015015LLU;

	t4 = (x17&((x18%x19)&x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 613U;
	static volatile int8_t x22 = -1;
	static volatile uint64_t x23 = UINT64_MAX;
	uint32_t x24 = 56135211U;
	volatile uint64_t t5 = 182LLU;

	t5 = (x21&((x22%x23)&x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	volatile int64_t t6 = -45268826LL;

	t6 = (x25&((x26%x27)&x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 3074U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;

	t7 = (x29&((x30%x31)&x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	static int32_t x34 = -239546;
	volatile int32_t t8 = 409;

	t8 = (x33&((x34%x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	uint32_t x39 = 426222U;
	volatile int8_t x40 = -1;
	volatile uint32_t t9 = 330680U;

	t9 = (x37&((x38%x39)&x40));

	if (t9 != 22U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = -13;
	static uint64_t x43 = 50867055LLU;
	int64_t x44 = -1LL;
	uint64_t t10 = 14740987277LLU;

	t10 = (x41&((x42%x43)&x44));

	if (t10 != 13LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = UINT8_MAX;
	int64_t x47 = -13093702995759LL;
	int8_t x48 = INT8_MIN;
	volatile int64_t t11 = -459016103081LL;

	t11 = (x45&((x46%x47)&x48));

	if (t11 != 128LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x50 = 2494;
	volatile int64_t x51 = -2045452LL;
	volatile uint64_t x52 = 51005591LLU;
	volatile uint64_t t12 = 131814507923LLU;

	t12 = (x49&((x50%x51)&x52));

	if (t12 != 150LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = 1283U;

	t13 = (x53&((x54%x55)&x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	uint8_t x62 = 23U;
	uint32_t x63 = 16724360U;
	int32_t x64 = INT32_MIN;
	uint32_t t14 = 19836U;

	t14 = (x61&((x62%x63)&x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1027425642;
	uint16_t x66 = 354U;
	int32_t x67 = INT32_MIN;
	volatile int32_t t15 = 144977;

	t15 = (x65&((x66%x67)&x68));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MIN;
	static uint8_t x71 = UINT8_MAX;
	volatile uint64_t t16 = 198487908884954529LLU;

	t16 = (x69&((x70%x71)&x72));

	if (t16 != 640LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 3760U;
	uint8_t x74 = 1U;
	static uint8_t x75 = 1U;
	int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -810908083LL;

	t17 = (x73&((x74%x75)&x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MIN;

	t18 = (x77&((x78%x79)&x80));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 7U;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	uint64_t t19 = 5LLU;

	t19 = (x81&((x82%x83)&x84));

	if (t19 != 7LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 428527791;
	static volatile uint64_t x86 = UINT64_MAX;
	volatile uint8_t x87 = 87U;

	t20 = (x85&((x86%x87)&x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x91 = 949920;
	int64_t x92 = -46771148563344695LL;
	int64_t t21 = 337959LL;

	t21 = (x89&((x90%x91)&x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = -1;
	volatile uint8_t x94 = UINT8_MAX;
	int16_t x95 = 9;
	uint16_t x96 = 2U;
	int32_t t22 = -7;

	t22 = (x93&((x94%x95)&x96));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MAX;
	uint16_t x98 = 506U;
	int8_t x99 = INT8_MIN;
	static int32_t t23 = 87370723;

	t23 = (x97&((x98%x99)&x100));

	if (t23 != 122) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = 10825;
	int64_t x102 = -1LL;
	uint64_t x104 = 6LLU;
	volatile uint64_t t24 = 2213039372307780LLU;

	t24 = (x101&((x102%x103)&x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	volatile int16_t x108 = -28;

	t25 = (x105&((x106%x107)&x108));

	if (t25 != 4LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x112 = 1125U;
	volatile int32_t t26 = -7933;

	t26 = (x109&((x110%x111)&x112));

	if (t26 != 1060) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -5052361665LL;
	int64_t x114 = INT64_MIN;
	static volatile int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int64_t t27 = 1574073608871676LL;

	t27 = (x113&((x114%x115)&x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	uint64_t t28 = 1255169070LLU;

	t28 = (x117&((x118%x119)&x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x122 = -72;
	volatile uint64_t x123 = 596230666LLU;
	static int64_t x124 = 3LL;

	t29 = (x121&((x122%x123)&x124));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = 979159;
	uint16_t x126 = UINT16_MAX;
	static int32_t x127 = -1;
	int8_t x128 = -1;
	static int32_t t30 = -35669872;

	t30 = (x125&((x126%x127)&x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int64_t x130 = INT64_MAX;
	int16_t x132 = -8783;
	volatile int64_t t31 = -1530400531749LL;

	t31 = (x129&((x130%x131)&x132));

	if (t31 != 23985LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 24;
	volatile int32_t x134 = INT32_MIN;
	uint16_t x136 = UINT16_MAX;

	t32 = (x133&((x134%x135)&x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x140 = -37;
	int64_t t33 = -2858257910196930LL;

	t33 = (x137&((x138%x139)&x140));

	if (t33 != 2147483611LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 3269130;
	volatile uint64_t x142 = 23668264463435LLU;
	int32_t x143 = 3411793;
	int64_t x144 = INT64_MAX;
	volatile uint64_t t34 = 3314LLU;

	t34 = (x141&((x142%x143)&x144));

	if (t34 != 1089538LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 3U;
	static int64_t x147 = INT64_MIN;

	t35 = (x145&((x146%x147)&x148));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 64U;
	uint64_t x150 = 509123094207220LLU;
	int8_t x151 = -1;
	volatile uint64_t t36 = 82033981268092LLU;

	t36 = (x149&((x150%x151)&x152));

	if (t36 != 64LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x154 = -1;
	uint32_t t37 = 4235U;

	t37 = (x153&((x154%x155)&x156));

	if (t37 != 61104053U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x158 = INT8_MIN;
	int16_t x160 = INT16_MIN;

	t38 = (x157&((x158%x159)&x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 1;
	uint8_t x162 = 7U;
	static uint64_t x163 = UINT64_MAX;
	int32_t x164 = -1;
	static volatile uint64_t t39 = 4087492724447791318LLU;

	t39 = (x161&((x162%x163)&x164));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	static uint16_t x167 = 6853U;
	int64_t x168 = 6104LL;
	static uint64_t t40 = 107205613736267LLU;

	t40 = (x165&((x166%x167)&x168));

	if (t40 != 1280LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int64_t x170 = -954820908LL;
	uint8_t x171 = 3U;
	volatile uint64_t t41 = 0LLU;

	t41 = (x169&((x170%x171)&x172));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = INT32_MIN;
	static int64_t x175 = -15639060LL;
	volatile int64_t t42 = -305376167LL;

	t42 = (x173&((x174%x175)&x176));

	if (t42 != 32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = -124;
	int32_t x178 = -39;
	static int16_t x180 = 2;
	volatile int32_t t43 = -32;

	t43 = (x177&((x178%x179)&x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x182 = 1807959260639682LLU;
	uint32_t x183 = 1U;
	int16_t x184 = -1;
	uint64_t t44 = 128675LLU;

	t44 = (x181&((x182%x183)&x184));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	static volatile uint32_t x186 = UINT32_MAX;
	static uint32_t x187 = 14482U;
	uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t45 = 467386295400LLU;

	t45 = (x185&((x186%x187)&x188));

	if (t45 != 11591LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = 4U;
	volatile uint32_t x190 = 13945U;
	int64_t x191 = -1610597228844333639LL;
	int16_t x192 = INT16_MAX;
	int64_t t46 = 113855499535031LL;

	t46 = (x189&((x190%x191)&x192));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = 0;
	volatile uint8_t x195 = 114U;
	volatile uint16_t x196 = 300U;
	int64_t t47 = 177820202853LL;

	t47 = (x193&((x194%x195)&x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x197 = 115U;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 122995565436LLU;
	static int16_t x200 = INT16_MIN;
	uint64_t t48 = 148613242646516580LLU;

	t48 = (x197&((x198%x199)&x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x202 = 1;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 3U;
	static volatile int64_t t49 = -2776LL;

	t49 = (x201&((x202%x203)&x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	volatile int64_t x207 = INT64_MIN;
	static volatile uint32_t x208 = UINT32_MAX;

	t50 = (x205&((x206%x207)&x208));

	if (t50 != 4294934528LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x209 = INT8_MIN;
	static uint16_t x210 = 491U;
	static int8_t x211 = INT8_MIN;
	volatile int32_t x212 = 105277;
	int32_t t51 = 226771960;

	t51 = (x209&((x210%x211)&x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = -831;
	int32_t x216 = -164;
	volatile int32_t t52 = 1510857;

	t52 = (x213&((x214%x215)&x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MAX;
	volatile int8_t x219 = INT8_MAX;
	static uint32_t x220 = UINT32_MAX;
	volatile uint32_t t53 = 132U;

	t53 = (x217&((x218%x219)&x220));

	if (t53 != 7U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 1370191887LLU;
	static volatile uint32_t x222 = 32909026U;
	uint64_t x223 = UINT64_MAX;
	static uint64_t t54 = 129264571217872LLU;

	t54 = (x221&((x222%x223)&x224));

	if (t54 != 27402240LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x226 = -6193447562857012LL;
	volatile int8_t x227 = 3;
	int64_t x228 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x225&((x226%x227)&x228));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = 4405;
	uint64_t x230 = 274612667995314071LLU;
	static volatile uint16_t x231 = 72U;
	volatile int32_t x232 = -31;

	t56 = (x229&((x230%x231)&x232));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	int16_t x235 = INT16_MAX;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t57 = 547603380419467029LLU;

	t57 = (x233&((x234%x235)&x236));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	uint8_t x238 = 66U;
	volatile int16_t x239 = 1;
	int8_t x240 = INT8_MIN;
	volatile int32_t t58 = -67;

	t58 = (x237&((x238%x239)&x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = INT32_MIN;
	int64_t x242 = -1LL;
	int8_t x243 = -1;
	static uint64_t x244 = 566941240LLU;

	t59 = (x241&((x242%x243)&x244));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -3;
	static int8_t x248 = -3;
	int32_t t60 = 6914114;

	t60 = (x245&((x246%x247)&x248));

	if (t60 != 124) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	static int64_t x251 = 257571766128562LL;
	int64_t x252 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x249&((x250%x251)&x252));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x254 = 14915568LL;
	int64_t x255 = INT64_MIN;
	uint16_t x256 = UINT16_MAX;
	int64_t t62 = 31LL;

	t62 = (x253&((x254%x255)&x256));

	if (t62 != 38896LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	uint16_t x258 = UINT16_MAX;
	uint64_t x260 = 24094645117225671LLU;

	t63 = (x257&((x258%x259)&x260));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	uint64_t x264 = UINT64_MAX;

	t64 = (x261&((x262%x263)&x264));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -8407306735727506LL;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MIN;
	int64_t t65 = -5532860LL;

	t65 = (x269&((x270%x271)&x272));

	if (t65 != 19456LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x274 = INT32_MIN;
	volatile uint32_t x275 = UINT32_MAX;
	int8_t x276 = 1;
	uint64_t t66 = 36604131725576592LLU;

	t66 = (x273&((x274%x275)&x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = INT64_MIN;
	static int32_t x278 = INT32_MIN;
	int64_t x279 = 1167386458638LL;
	uint8_t x280 = 56U;
	static int64_t t67 = 707774942477243083LL;

	t67 = (x277&((x278%x279)&x280));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x286 = -21896LL;
	int16_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	static int64_t t68 = 33671473020067LL;

	t68 = (x285&((x286%x287)&x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 3U;
	volatile int16_t x290 = -109;
	static int8_t x291 = INT8_MAX;
	static volatile uint32_t x292 = UINT32_MAX;
	volatile uint32_t t69 = 74417U;

	t69 = (x289&((x290%x291)&x292));

	if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x293 = -52;
	volatile int32_t x295 = INT32_MIN;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t70 = -647262;

	t70 = (x293&((x294%x295)&x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x298 = -1;
	int16_t x299 = 10;
	int64_t x300 = -1LL;
	volatile int64_t t71 = -3499626735436922LL;

	t71 = (x297&((x298%x299)&x300));

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 234U;
	uint64_t x302 = 1662839894LLU;
	static int8_t x303 = INT8_MAX;
	static volatile uint64_t t72 = 176975879LLU;

	t72 = (x301&((x302%x303)&x304));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x305 = -1LL;
	uint32_t x307 = UINT32_MAX;
	uint32_t x308 = 61U;
	static int64_t t73 = -2248894803568752369LL;

	t73 = (x305&((x306%x307)&x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x309 = UINT16_MAX;
	static int32_t x310 = -1;
	static int16_t x311 = 2248;
	volatile int32_t t74 = 70;

	t74 = (x309&((x310%x311)&x312));

	if (t74 != 11904) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -1;
	static volatile uint64_t x314 = 85771LLU;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile uint64_t t75 = 2658495732148256LLU;

	t75 = (x313&((x314%x315)&x316));

	if (t75 != 20235LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MAX;
	uint8_t x318 = 2U;
	uint8_t x319 = UINT8_MAX;

	t76 = (x317&((x318%x319)&x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x322 = 0U;
	static volatile int8_t x323 = INT8_MAX;
	volatile int64_t x324 = -1899923034443LL;
	volatile int64_t t77 = 965691LL;

	t77 = (x321&((x322%x323)&x324));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x325 = 25131404LLU;
	static volatile int32_t x326 = INT32_MIN;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = INT32_MIN;
	uint64_t t78 = 614LLU;

	t78 = (x325&((x326%x327)&x328));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 2390368900LLU;
	static volatile int32_t x330 = -1;
	int8_t x331 = 34;
	static volatile uint32_t x332 = 5U;
	uint64_t t79 = 2176727090510909LLU;

	t79 = (x329&((x330%x331)&x332));

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int64_t t80 = -84693760315LL;

	t80 = (x333&((x334%x335)&x336));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MAX;
	static int16_t x340 = -1;
	volatile int64_t t81 = 184799LL;

	t81 = (x337&((x338%x339)&x340));

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x341 = INT64_MAX;
	static int16_t x342 = -5;
	volatile int8_t x343 = INT8_MAX;
	volatile int32_t x344 = INT32_MIN;
	static volatile int64_t t82 = -5985109767379LL;

	t82 = (x341&((x342%x343)&x344));

	if (t82 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MAX;
	volatile int64_t x346 = 795689806166021LL;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 14U;
	int64_t t83 = -233LL;

	t83 = (x345&((x346%x347)&x348));

	if (t83 != 4LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x349 = INT32_MIN;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 404U;
	int8_t x352 = INT8_MIN;

	t84 = (x349&((x350%x351)&x352));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x354 = 6278000LLU;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t85 = 224493LLU;

	t85 = (x353&((x354%x355)&x356));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 63U;
	int32_t x358 = -1;
	static uint16_t x360 = 3558U;
	volatile int32_t t86 = 2496;

	t86 = (x357&((x358%x359)&x360));

	if (t86 != 38) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x361 = 60087336880800LLU;
	int8_t x363 = INT8_MIN;
	int8_t x364 = 0;

	t87 = (x361&((x362%x363)&x364));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = 158063U;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t88 = 1559LL;

	t88 = (x365&((x366%x367)&x368));

	if (t88 != 131072LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x373 = INT64_MAX;
	static int32_t x374 = -2;
	uint8_t x375 = 11U;
	int64_t x376 = -223LL;
	volatile int64_t t89 = -2238522799748114LL;

	t89 = (x373&((x374%x375)&x376));

	if (t89 != 9223372036854775584LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x378 = -1LL;
	volatile int8_t x379 = 1;
	int32_t x380 = INT32_MIN;

	t90 = (x377&((x378%x379)&x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x383 = -168;
	int64_t t91 = -294LL;

	t91 = (x381&((x382%x383)&x384));

	if (t91 != 737312LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	volatile uint32_t x386 = 3350882U;
	int16_t x387 = 115;
	static volatile uint16_t x388 = 0U;
	uint32_t t92 = 409740U;

	t92 = (x385&((x386%x387)&x388));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = -89512150;
	int8_t x392 = -1;
	int64_t t93 = 457161518LL;

	t93 = (x389&((x390%x391)&x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 111360753;
	uint32_t x394 = 649115U;
	uint32_t x396 = UINT32_MAX;
	uint32_t t94 = 0U;

	t94 = (x393&((x394%x395)&x396));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -89899280188144LL;
	static volatile int32_t x398 = -1;
	uint64_t x399 = 6043579847727738LLU;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t95 = 42742LLU;

	t95 = (x397&((x398%x399)&x400));

	if (t95 != 16914688LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x402 = 1U;
	uint32_t x403 = 37417500U;
	int64_t x404 = -1LL;
	volatile int64_t t96 = 1200919LL;

	t96 = (x401&((x402%x403)&x404));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 27U;
	volatile int8_t x406 = INT8_MAX;
	static int16_t x407 = 10144;
	int16_t x408 = INT16_MIN;
	int32_t t97 = 6660182;

	t97 = (x405&((x406%x407)&x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	static int8_t x411 = INT8_MAX;
	volatile uint16_t x412 = 16022U;
	volatile int32_t t98 = -7;

	t98 = (x409&((x410%x411)&x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = -1;
	int8_t x416 = -1;
	volatile uint32_t t99 = 100249U;

	t99 = (x413&((x414%x415)&x416));

	if (t99 != 0U) { NG(); } else { ; }
	
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

