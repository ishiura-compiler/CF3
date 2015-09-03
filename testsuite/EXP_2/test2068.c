#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = 18092387817LL;
uint8_t x8 = 10U;
int8_t x23 = INT8_MAX;
volatile int32_t t5 = -17295;
int64_t x27 = INT64_MIN;
int64_t x29 = -5487966349LL;
int16_t x38 = INT16_MIN;
static volatile uint8_t x40 = UINT8_MAX;
int32_t t10 = -6494;
int32_t x45 = INT32_MAX;
int8_t x46 = INT8_MAX;
static volatile int64_t x47 = INT64_MIN;
int64_t t11 = 533859038LL;
volatile int32_t x51 = -1;
uint8_t x55 = 0U;
int32_t t14 = 695;
volatile int32_t x79 = -216505;
int32_t t18 = -31;
static uint64_t t19 = 5864395828487321LLU;
uint64_t x86 = UINT64_MAX;
static int16_t x112 = -1934;
uint8_t x121 = 52U;
static uint64_t x123 = UINT64_MAX;
int8_t x126 = INT8_MIN;
volatile uint64_t t30 = UINT64_MAX;
static uint16_t x132 = UINT16_MAX;
uint64_t x134 = 593840438224684LLU;
int64_t x140 = INT64_MIN;
int8_t x141 = INT8_MIN;
volatile int8_t x151 = 17;
uint64_t x159 = 781998300LLU;
static int8_t x162 = 2;
static uint64_t x168 = 411LLU;
uint64_t t39 = 87190087218454693LLU;
uint32_t x176 = UINT32_MAX;
uint32_t t41 = UINT32_MAX;
volatile int64_t t42 = 99553273566LL;
uint8_t x187 = 4U;
static volatile int16_t x196 = -1;
int8_t x207 = INT8_MIN;
volatile int16_t x208 = -1;
static volatile int8_t x221 = -1;
int64_t t51 = 13505LL;
int64_t x225 = INT64_MIN;
uint16_t x233 = 415U;
uint64_t x236 = 2LLU;
static int16_t x237 = INT16_MIN;
int16_t x239 = INT16_MAX;
int32_t x246 = INT32_MIN;
static uint64_t t57 = 59817202LLU;
int8_t x254 = INT8_MIN;
volatile int32_t t59 = -34946;
int16_t x260 = INT16_MAX;
volatile uint32_t x262 = UINT32_MAX;
int64_t x263 = INT64_MIN;
uint32_t t64 = 2522209U;
int16_t x282 = INT16_MIN;
uint8_t x284 = UINT8_MAX;
uint8_t x290 = 5U;
volatile int32_t t68 = 60;
static int64_t x294 = INT64_MAX;
int64_t t69 = -2461614692727699061LL;
static volatile int16_t x298 = -1;
int8_t x306 = INT8_MIN;
static int32_t x313 = 5;
int8_t x314 = 1;
static int16_t x316 = INT16_MIN;
uint64_t t74 = 28LLU;
uint8_t x318 = 0U;
int64_t x320 = -1LL;
static volatile int64_t t75 = -29098081915LL;
volatile int32_t t77 = -941;
int64_t x330 = -2081323932LL;
volatile int64_t t78 = 4572553271011028606LL;
uint8_t x335 = 15U;
int16_t x341 = INT16_MIN;
uint8_t x356 = 0U;
int32_t x360 = INT32_MAX;
int64_t x367 = 634917LL;
uint64_t x369 = UINT64_MAX;
uint8_t x370 = 27U;
static int64_t x372 = -64845LL;
uint32_t x381 = 52013897U;
volatile int16_t x388 = INT16_MAX;
int32_t x394 = 261361;
int8_t x395 = -1;
int16_t x401 = -1;
int64_t t96 = INT64_MIN;
static int64_t x414 = -959315665015LL;
int64_t x422 = 1119405534146112LL;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = -1;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = INT64_MAX;

	t0 = ((x1/(x2^x3))+x4);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 64119;
	uint64_t x7 = 130763LLU;
	uint64_t t1 = 77LLU;

	t1 = ((x5/(x6^x7))+x8);

	if (t1 != 10LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	volatile uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 227636LLU;
	uint16_t x12 = 1U;
	volatile uint64_t t2 = 2651212935LLU;

	t2 = ((x9/(x10^x11))+x12);

	if (t2 != 4295194946LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = INT32_MIN;
	uint64_t x16 = 1215634080947LLU;
	volatile uint64_t t3 = 754249342323345LLU;

	t3 = ((x13/(x14^x15))+x16);

	if (t3 != 1211339048114LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 4795034533389289LLU;
	static int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 41U;
	volatile uint64_t t4 = 20773244290426LLU;

	t4 = ((x17/(x18^x19))+x20);

	if (t4 != 41LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int16_t x22 = INT16_MAX;
	int16_t x24 = INT16_MIN;

	t5 = ((x21/(x22^x23))+x24);

	if (t5 != -32766) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int16_t x26 = -1;
	int32_t x28 = INT32_MIN;
	int64_t t6 = -42732042057471481LL;

	t6 = ((x25/(x26^x27))+x28);

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 3693LLU;
	uint32_t x31 = 1943U;
	int32_t x32 = -1;
	volatile uint64_t t7 = 108919640083LLU;

	t7 = ((x29/(x30^x31))+x32);

	if (t7 != 7222687575654495LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1817;
	int16_t x34 = 6;
	static int8_t x35 = -1;
	int64_t x36 = INT64_MAX;
	int64_t t8 = 331065LL;

	t8 = ((x33/(x34^x35))+x36);

	if (t8 != 9223372036854775548LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 6;
	static int8_t x39 = INT8_MIN;
	int32_t t9 = -93565417;

	t9 = ((x37/(x38^x39))+x40);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int16_t x42 = 158;
	int8_t x43 = 24;
	int8_t x44 = INT8_MIN;

	t10 = ((x41/(x42^x43))+x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x48 = INT16_MIN;

	t11 = ((x45/(x46^x47))+x48);

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MAX;
	int8_t x52 = 0;
	volatile int64_t t12 = 26295LL;

	t12 = ((x49/(x50^x51))+x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int64_t x54 = INT64_MIN;
	volatile int32_t x56 = INT32_MAX;
	static uint64_t t13 = 4034815521298263LLU;

	t13 = ((x53/(x54^x55))+x56);

	if (t13 != 2147483648LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	static volatile uint16_t x58 = 16U;
	int32_t x59 = -1;
	volatile int8_t x60 = INT8_MIN;

	t14 = ((x57/(x58^x59))+x60);

	if (t14 != -126322695) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	uint16_t x67 = 3997U;
	static volatile int16_t x68 = INT16_MIN;
	int32_t t15 = 1089787;

	t15 = ((x65/(x66^x67))+x68);

	if (t15 != -67664) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 6U;
	volatile int64_t x70 = INT64_MAX;
	static uint64_t x71 = 13264649466766LLU;
	uint16_t x72 = 29379U;
	volatile uint64_t t16 = 307076937086487871LLU;

	t16 = ((x69/(x70^x71))+x72);

	if (t16 != 29379LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 108U;
	volatile uint16_t x74 = 5U;
	static int32_t x75 = INT32_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = -379329;

	t17 = ((x73/(x74^x75))+x76);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = UINT8_MAX;
	int16_t x78 = -1;
	int8_t x80 = -1;

	t18 = ((x77/(x78^x79))+x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = 139U;
	static int16_t x82 = -1;
	uint64_t x83 = 0LLU;
	volatile int8_t x84 = INT8_MIN;

	t19 = ((x81/(x82^x83))+x84);

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 25921U;
	static volatile uint32_t x87 = 125072U;
	int64_t x88 = -433812750LL;
	volatile uint64_t t20 = 91944919688769639LLU;

	t20 = ((x85/(x86^x87))+x88);

	if (t20 != 18446744073275738866LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	static volatile int64_t x90 = INT64_MAX;
	int8_t x91 = -1;
	int64_t x92 = 69007443946LL;
	int64_t t21 = 130932LL;

	t21 = ((x89/(x90^x91))+x92);

	if (t21 != 69007443947LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 16U;
	static uint32_t x94 = 178825U;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MAX;
	int64_t t22 = 48821348LL;

	t22 = ((x93/(x94^x95))+x96);

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 8U;
	uint32_t x98 = UINT32_MAX;
	static volatile int16_t x99 = INT16_MIN;
	uint64_t x100 = 24640616551LLU;
	volatile uint64_t t23 = 15LLU;

	t23 = ((x97/(x98^x99))+x100);

	if (t23 != 24640616551LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 0U;
	int32_t x102 = -43;
	uint8_t x103 = 104U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t24 = INT64_MIN;

	t24 = ((x101/(x102^x103))+x104);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MAX;
	uint32_t x106 = 50745U;
	volatile uint8_t x107 = UINT8_MAX;
	static int32_t x108 = INT32_MAX;
	int64_t t25 = 38148225LL;

	t25 = ((x105/(x106^x107))+x108);

	if (t25 != 181257739136651LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x109 = -1LL;
	uint64_t x110 = 18252763084299LLU;
	static int16_t x111 = INT16_MIN;
	uint64_t t26 = 70361079892051LLU;

	t26 = ((x109/(x110^x111))+x112);

	if (t26 != 18446744073709549683LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int8_t x114 = -1;
	int32_t x115 = -259;
	uint64_t x116 = 141777469830LLU;
	volatile uint64_t t27 = 5086873LLU;

	t27 = ((x113/(x114^x115))+x116);

	if (t27 != 141777469830LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = INT32_MAX;
	static uint8_t x118 = 0U;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t28 = 791725;

	t28 = ((x117/(x118^x119))+x120);

	if (t28 != -16777343) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = INT16_MIN;
	int16_t x124 = 1;
	uint64_t t29 = 867993997350556LLU;

	t29 = ((x121/(x122^x123))+x124);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = 7234573366091LLU;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = -1;

	t30 = ((x125/(x126^x127))+x128);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 107U;
	int64_t x131 = INT64_MIN;
	uint64_t t31 = 1807981176373LLU;

	t31 = ((x129/(x130^x131))+x132);

	if (t31 != 65536LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	static int8_t x135 = INT8_MIN;
	int64_t x136 = 9735466712041LL;
	volatile uint64_t t32 = 681LLU;

	t32 = ((x133/(x134^x135))+x136);

	if (t32 != 9735466712042LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	static uint64_t x138 = 42LLU;
	int8_t x139 = -1;
	uint64_t t33 = 7186349921259LLU;

	t33 = ((x137/(x138^x139))+x140);

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = -1;
	volatile uint16_t x143 = UINT16_MAX;
	uint8_t x144 = 23U;
	int32_t t34 = 129870;

	t34 = ((x141/(x142^x143))+x144);

	if (t34 != 23) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	static uint8_t x148 = 17U;
	static volatile int32_t t35 = -368;

	t35 = ((x145/(x146^x147))+x148);

	if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x149 = 66777425LLU;
	int32_t x150 = INT32_MAX;
	static volatile int8_t x152 = INT8_MAX;
	volatile uint64_t t36 = 6LLU;

	t36 = ((x149/(x150^x151))+x152);

	if (t36 != 127LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x157 = 1177014283U;
	uint16_t x158 = UINT16_MAX;
	int8_t x160 = -1;
	uint64_t t37 = 200976046475LLU;

	t37 = ((x157/(x158^x159))+x160);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x161 = 1432097840412011664LLU;
	int64_t x163 = -1LL;
	uint64_t x164 = 1975645294051359884LLU;
	volatile uint64_t t38 = 62311105LLU;

	t38 = ((x161/(x162^x163))+x164);

	if (t38 != 1975645294051359884LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = INT64_MAX;
	static uint64_t x166 = 0LLU;
	int64_t x167 = 37710565635557LL;

	t39 = ((x165/(x166^x167))+x168);

	if (t39 != 244994LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x169 = 12224U;
	volatile int64_t x170 = -266165802LL;
	uint32_t x171 = 35U;
	int32_t x172 = INT32_MIN;
	volatile int64_t t40 = 3LL;

	t40 = ((x169/(x170^x171))+x172);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x173 = INT16_MAX;
	volatile int32_t x174 = INT32_MIN;
	static int16_t x175 = INT16_MIN;

	t41 = ((x173/(x174^x175))+x176);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	static int8_t x182 = INT8_MAX;
	int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;

	t42 = ((x181/(x182^x183))+x184);

	if (t42 != 4294967296LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = INT32_MIN;
	uint8_t x186 = 0U;
	static uint16_t x188 = 10857U;
	volatile int32_t t43 = 405;

	t43 = ((x185/(x186^x187))+x188);

	if (t43 != -536860055) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x193 = -1;
	static uint16_t x194 = 13U;
	uint64_t x195 = 1244957109019834548LLU;
	volatile uint64_t t44 = 10926352383734LLU;

	t44 = ((x193/(x194^x195))+x196);

	if (t44 != 13LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = 13;
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = 0;
	volatile int32_t x200 = -1;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x197/(x198^x199))+x200);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	volatile uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t46 = -7627LL;

	t46 = ((x201/(x202^x203))+x204);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x205 = 106U;
	volatile int8_t x206 = INT8_MAX;
	static volatile int32_t t47 = 4;

	t47 = ((x205/(x206^x207))+x208);

	if (t47 != -107) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	static volatile uint16_t x211 = 194U;
	int16_t x212 = -3;
	int32_t t48 = -9;

	t48 = ((x209/(x210^x211))+x212);

	if (t48 != 11302542) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -700;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MAX;
	uint16_t x216 = 4U;
	int32_t t49 = 1;

	t49 = ((x213/(x214^x215))+x216);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = -1LL;
	uint64_t x218 = 333228LLU;
	int64_t x219 = -1LL;
	volatile int8_t x220 = INT8_MAX;
	uint64_t t50 = 947079LLU;

	t50 = ((x217/(x218^x219))+x220);

	if (t50 != 128LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x222 = -17856712;
	static uint32_t x223 = UINT32_MAX;
	static int64_t x224 = 1094209239918879LL;

	t51 = ((x221/(x222^x223))+x224);

	if (t51 != 1094209239919119LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MIN;
	static int32_t x228 = -44374;
	uint64_t t52 = 2212459376LLU;

	t52 = ((x225/(x226^x227))+x228);

	if (t52 != 4294922924LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 8U;
	uint64_t x230 = 693087721498175LLU;
	int64_t x231 = 879854LL;
	volatile uint64_t x232 = 68886953LLU;
	uint64_t t53 = 1250012958398LLU;

	t53 = ((x229/(x230^x231))+x232);

	if (t53 != 68886953LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x234 = 511579278561846LL;
	int8_t x235 = INT8_MAX;
	volatile uint64_t t54 = 15828714439991219LLU;

	t54 = ((x233/(x234^x235))+x236);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x238 = -1;
	int8_t x240 = -1;
	volatile int32_t t55 = -2;

	t55 = ((x237/(x238^x239))+x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -7014786;
	static int8_t x242 = INT8_MAX;
	volatile int16_t x243 = -1;
	static int32_t x244 = 1;
	int32_t t56 = -222370;

	t56 = ((x241/(x242^x243))+x244);

	if (t56 != 54804) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = 58;

	t57 = ((x245/(x246^x247))+x248);

	if (t57 != 60LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 20LLU;
	static int8_t x250 = INT8_MAX;
	uint8_t x251 = 66U;
	static uint16_t x252 = UINT16_MAX;
	uint64_t t58 = 3057LLU;

	t58 = ((x249/(x250^x251))+x252);

	if (t58 != 65535LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = INT16_MIN;
	uint16_t x255 = 170U;
	int8_t x256 = INT8_MIN;

	t59 = ((x253/(x254^x255))+x256);

	if (t59 != 25) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MIN;
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int32_t t60 = -3870;

	t60 = ((x257/(x258^x259))+x260);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -1LL;
	int8_t x264 = INT8_MAX;
	volatile int64_t t61 = -17650391LL;

	t61 = ((x261/(x262^x263))+x264);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x265 = 3U;
	static int16_t x266 = 0;
	int16_t x267 = 5003;
	volatile int64_t x268 = INT64_MAX;
	static volatile int64_t t62 = INT64_MAX;

	t62 = ((x265/(x266^x267))+x268);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 0;
	int64_t x270 = INT64_MAX;
	uint16_t x271 = 2U;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

	t63 = ((x269/(x270^x271))+x272);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x273 = 3;
	static volatile uint32_t x274 = 6U;
	static int8_t x275 = -1;
	int32_t x276 = INT32_MAX;

	t64 = ((x273/(x274^x275))+x276);

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = -1;
	int64_t x278 = -1LL;
	int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	volatile int64_t t65 = -1478LL;

	t65 = ((x277/(x278^x279))+x280);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 0U;
	int32_t x283 = 48707;
	volatile int32_t t66 = -14541;

	t66 = ((x281/(x282^x283))+x284);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MAX;
	static uint32_t x286 = UINT32_MAX;
	int8_t x287 = 1;
	static int16_t x288 = INT16_MIN;
	uint32_t t67 = 21007968U;

	t67 = ((x285/(x286^x287))+x288);

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	int16_t x291 = -57;
	int32_t x292 = -1;

	t68 = ((x289/(x290^x291))+x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = -1;

	t69 = ((x293/(x294^x295))+x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MIN;
	int16_t x299 = 6;
	static int16_t x300 = INT16_MAX;
	int64_t t70 = -1366071679305917LL;

	t70 = ((x297/(x298^x299))+x300);

	if (t70 != 1317624576693572168LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = 64LLU;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	static uint64_t t71 = 5726688504919LLU;

	t71 = ((x301/(x302^x303))+x304);

	if (t71 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x305 = 5U;
	int8_t x307 = -1;
	static volatile int64_t x308 = INT64_MIN;
	static volatile int64_t t72 = INT64_MIN;

	t72 = ((x305/(x306^x307))+x308);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -1;
	static int16_t x310 = INT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	static int64_t t73 = 6LL;

	t73 = ((x309/(x310^x311))+x312);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x315 = 695135914440LLU;

	t74 = ((x313/(x314^x315))+x316);

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -1;
	int16_t x319 = INT16_MIN;

	t75 = ((x317/(x318^x319))+x320);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = 113;
	int8_t x322 = -1;
	static uint16_t x323 = 506U;
	int8_t x324 = -1;
	volatile int32_t t76 = -2145127;

	t76 = ((x321/(x322^x323))+x324);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -1;
	int16_t x326 = -1;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -1;

	t77 = ((x325/(x326^x327))+x328);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = 17;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = 0U;

	t78 = ((x329/(x330^x331))+x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x333 = 7U;
	int64_t x334 = -1LL;
	int16_t x336 = 0;
	volatile int64_t t79 = 342309LL;

	t79 = ((x333/(x334^x335))+x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MAX;
	static int8_t x340 = -1;
	volatile uint64_t t80 = 94913561LLU;

	t80 = ((x337/(x338^x339))+x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = INT32_MIN;
	static volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t81 = INT32_MIN;

	t81 = ((x341/(x342^x343))+x344);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 33190293816489LLU;
	uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 3275853318LLU;
	static int64_t x348 = INT64_MIN;
	volatile uint64_t t82 = 15352LLU;

	t82 = ((x345/(x346^x347))+x348);

	if (t82 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -1LL;
	static int16_t x350 = -25;
	int32_t x351 = INT32_MIN;
	static int16_t x352 = INT16_MIN;
	static volatile int64_t t83 = -2525952846017LL;

	t83 = ((x349/(x350^x351))+x352);

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = 122586842;
	static volatile int32_t x355 = 1691;
	uint32_t t84 = 10708921U;

	t84 = ((x353/(x354^x355))+x356);

	if (t84 != 35U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = INT8_MIN;
	static int32_t x358 = -630;
	static int64_t x359 = -6623838LL;
	static int64_t t85 = -100939172518441LL;

	t85 = ((x357/(x358^x359))+x360);

	if (t85 != 2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MAX;
	int64_t x366 = INT64_MIN;
	uint16_t x368 = 0U;
	int64_t t86 = 7667986036417LL;

	t86 = ((x365/(x366^x367))+x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x371 = 242LLU;
	uint64_t t87 = 1021173656607937LLU;

	t87 = ((x369/(x370^x371))+x372);

	if (t87 != 79170575423581299LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	uint8_t x375 = 4U;
	int16_t x376 = -147;
	volatile int64_t t88 = -868621966LL;

	t88 = ((x373/(x374^x375))+x376);

	if (t88 != -198LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = 46;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 5U;
	int32_t x380 = 122;
	int32_t t89 = 11895348;

	t89 = ((x377/(x378^x379))+x380);

	if (t89 != 122) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x382 = -105;
	int64_t x383 = -1LL;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t90 = 1795611371LLU;

	t90 = ((x381/(x382^x383))+x384);

	if (t90 != 500132LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 2U;
	int32_t x387 = INT32_MAX;
	static volatile uint64_t t91 = 166229182LLU;

	t91 = ((x385/(x386^x387))+x388);

	if (t91 != 8589967371LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = -1LL;
	int16_t x396 = -1;
	volatile int64_t t92 = 38792326560008LL;

	t92 = ((x393/(x394^x395))+x396);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = INT16_MIN;
	static int8_t x398 = -21;
	static int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 182U;
	int32_t t93 = 123314;

	t93 = ((x397/(x398^x399))+x400);

	if (t93 != 181) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t94 = -13;

	t94 = ((x401/(x402^x403))+x404);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -11514LL;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = INT32_MIN;
	int64_t x408 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x405/(x406^x407))+x408);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int64_t x410 = -1LL;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = INT64_MIN;

	t96 = ((x409/(x410^x411))+x412);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = -1;
	int64_t x415 = INT64_MAX;
	static int32_t x416 = INT32_MAX;
	volatile int64_t t97 = 499083LL;

	t97 = ((x413/(x414^x415))+x416);

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = 31;
	volatile int32_t x418 = -1;
	uint64_t x419 = 15975005701LLU;
	int32_t x420 = INT32_MAX;
	volatile uint64_t t98 = 542081LLU;

	t98 = ((x417/(x418^x419))+x420);

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int8_t x424 = -1;
	int64_t t99 = 6LL;

	t99 = ((x421/(x422^x423))+x424);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

