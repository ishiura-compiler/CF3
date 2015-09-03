#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = INT64_MAX;
uint16_t x9 = 4144U;
int16_t x11 = INT16_MIN;
uint64_t t4 = 1850529623183088LLU;
int32_t t5 = -42;
int32_t x27 = INT32_MIN;
uint16_t x28 = 5U;
int8_t x30 = -1;
volatile int64_t x32 = INT64_MIN;
int64_t x33 = INT64_MIN;
uint8_t x39 = 3U;
int64_t x41 = INT64_MIN;
uint32_t x42 = 286U;
volatile int8_t x43 = -7;
volatile int16_t x45 = INT16_MAX;
int16_t x50 = 1274;
static uint32_t t17 = 2916U;
int64_t x75 = INT64_MIN;
int32_t x79 = INT32_MIN;
static volatile int32_t t19 = 4132711;
int16_t x81 = INT16_MIN;
static volatile int8_t x84 = INT8_MIN;
volatile int64_t t24 = -19LL;
uint32_t x102 = 197096U;
uint64_t x103 = UINT64_MAX;
int32_t x111 = 8174;
int16_t x113 = INT16_MIN;
volatile int32_t x118 = INT32_MIN;
int64_t x121 = -181LL;
int32_t x122 = INT32_MIN;
int8_t x134 = INT8_MIN;
static uint16_t x136 = 412U;
int16_t x137 = INT16_MAX;
volatile uint64_t x138 = 904574LLU;
volatile uint64_t t34 = 32185264883870LLU;
int32_t x143 = 813548;
volatile int8_t x148 = INT8_MIN;
int32_t x151 = 4;
static uint8_t x154 = 16U;
volatile uint8_t x156 = 57U;
int8_t x159 = 8;
int64_t x160 = -1LL;
int16_t x162 = -1;
uint16_t x167 = 6460U;
uint64_t t41 = 197068419343494198LLU;
uint16_t x171 = UINT16_MAX;
int64_t x173 = INT64_MIN;
int16_t x177 = -5;
int32_t t44 = 118611454;
volatile int64_t x185 = INT64_MAX;
int8_t x186 = INT8_MIN;
uint16_t x190 = UINT16_MAX;
int32_t x192 = INT32_MIN;
int16_t x194 = INT16_MAX;
static int64_t t48 = -4076340LL;
uint8_t x197 = 23U;
static int8_t x213 = -12;
uint32_t t53 = 9U;
static int32_t x224 = -1;
volatile int32_t t55 = -1;
uint64_t x228 = 21795960619LLU;
static int32_t x233 = -3246199;
int64_t t62 = 271309147603LL;
static uint64_t x260 = UINT64_MAX;
uint64_t x264 = 21538023215792802LLU;
int8_t x267 = -1;
volatile uint64_t x268 = 420287925LLU;
uint64_t t66 = 3930732LLU;
volatile int8_t x275 = 0;
uint16_t x284 = 14U;
static volatile int8_t x287 = INT8_MIN;
static int16_t x290 = -220;
static uint64_t x291 = 30599LLU;
static int8_t x306 = INT8_MIN;
int16_t x312 = INT16_MAX;
int8_t x315 = INT8_MIN;
int32_t x326 = -129220946;
int8_t x332 = -1;
static int32_t x338 = INT32_MAX;
static int64_t x341 = INT64_MIN;
volatile uint64_t t85 = 56114232167LLU;
static int8_t x345 = INT8_MIN;
uint8_t x348 = UINT8_MAX;
int8_t x352 = 0;
int16_t x354 = INT16_MIN;
int64_t x370 = INT64_MIN;
volatile int64_t t92 = -28669338822710197LL;
int16_t x388 = INT16_MAX;
int8_t x390 = INT8_MIN;
int32_t x393 = INT32_MIN;
int32_t x399 = -35999;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = -1;

	t0 = (x1^((x2|x3)^x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = 0;
	volatile int32_t x8 = 1;
	volatile uint64_t t1 = 79LLU;

	t1 = (x5^((x6|x7)^x8));

	if (t1 != 2147483646LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 11484839377LLU;
	static int64_t x12 = INT64_MIN;
	uint64_t t2 = 473638265LLU;

	t2 = (x9^((x10|x11)^x12));

	if (t2 != 9223372036854754785LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 64949389LLU;
	int8_t x14 = 30;
	volatile uint64_t x15 = 25578955705LLU;
	int32_t x16 = INT32_MIN;
	uint64_t t3 = 114LLU;

	t3 = (x13^((x14|x15)^x16));

	if (t3 != 18446744049940492082LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 14U;
	uint64_t x18 = 390793985851LLU;
	int16_t x19 = -1;
	uint16_t x20 = 1U;

	t4 = (x17^((x18|x19)^x20));

	if (t4 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -4008;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;

	t5 = (x21^((x22|x23)^x24));

	if (t5 != -28712) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	uint16_t x26 = 3U;
	int64_t t6 = -127795417LL;

	t6 = (x25^((x26|x27)^x28));

	if (t6 != 2147483641LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x31 = -1;
	int64_t t7 = 22336147486450814LL;

	t7 = (x29^((x30|x31)^x32));

	if (t7 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x34 = INT16_MIN;
	static int16_t x35 = -1;
	int32_t x36 = -1;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33^((x34|x35)^x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 29649034LLU;
	int32_t x38 = INT32_MIN;
	volatile int8_t x40 = -1;
	volatile uint64_t t9 = 253197108847508LLU;

	t9 = (x37^((x38|x39)^x40));

	if (t9 != 2117834614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x44 = 1334520349955LL;
	int64_t t10 = -1463928030LL;

	t10 = (x41^((x42|x43)^x44));

	if (t10 != -9223370704200434948LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	int8_t x47 = -7;
	static volatile int16_t x48 = INT16_MAX;
	int32_t t11 = 1436;

	t11 = (x45^((x46|x47)^x48));

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = INT16_MAX;
	int32_t t12 = -1703746;

	t12 = (x49^((x50|x51)^x52));

	if (t12 != -32896) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = 1U;
	int8_t x56 = 1;
	int32_t t13 = -46215999;

	t13 = (x53^((x54|x55)^x56));

	if (t13 != -32513) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -7LL;
	int32_t x58 = 193;
	int64_t x59 = -801LL;
	uint16_t x60 = UINT16_MAX;
	static int64_t t14 = -6464614176LL;

	t14 = (x57^((x58|x59)^x60));

	if (t14 != 64729LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 2846363091218881355LL;
	uint32_t x62 = 1057U;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	int64_t t15 = 1073746735579520893LL;

	t15 = (x61^((x62|x63)^x64));

	if (t15 != 2846363091218881386LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = 10807410;
	volatile uint32_t t16 = 1091004498U;

	t16 = (x65^((x66|x67)^x68));

	if (t16 != 4284213362U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 0U;
	static uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;

	t17 = (x69^((x70|x71)^x72));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	uint32_t x74 = 0U;
	static uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 16376445922541LLU;

	t18 = (x73^((x74|x75)^x76));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -139;
	static uint8_t x78 = 0U;
	int32_t x80 = -1;

	t19 = (x77^((x78|x79)^x80));

	if (t19 != -2147483510) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int16_t x83 = -27;
	int32_t t20 = -470455;

	t20 = (x81^((x82|x83)^x84));

	if (t20 != -32641) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static uint16_t x86 = UINT16_MAX;
	int32_t x87 = -6650;
	uint8_t x88 = 0U;
	volatile int32_t t21 = 116641;

	t21 = (x85^((x86|x87)^x88));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = INT8_MIN;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = (x89^((x90|x91)^x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int64_t x94 = -32367LL;
	int8_t x95 = -10;
	int8_t x96 = INT8_MIN;
	static volatile int64_t t23 = 77747075LL;

	t23 = (x93^((x94|x95)^x96));

	if (t23 != -9LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 46484U;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = -1;
	int64_t x100 = INT64_MIN;

	t24 = (x97^((x98|x99)^x100));

	if (t24 != -9223372032559854997LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 10U;
	uint8_t x104 = 3U;
	uint64_t t25 = 123563942063053014LLU;

	t25 = (x101^((x102|x103)^x104));

	if (t25 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = -14;
	volatile int8_t x107 = INT8_MAX;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t26 = 130865777LL;

	t26 = (x105^((x106|x107)^x108));

	if (t26 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 19582368481LL;
	static int16_t x110 = -12;
	static volatile int16_t x112 = 62;
	static volatile int64_t t27 = -132794988355828401LL;

	t27 = (x109^((x110|x111)^x112));

	if (t27 != -19582368479LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = INT16_MIN;
	volatile int8_t x115 = 26;
	uint64_t x116 = 272201825346LLU;
	volatile uint64_t t28 = 2975480439272LLU;

	t28 = (x113^((x114|x115)^x116));

	if (t28 != 272201825368LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint32_t x119 = 354598473U;
	uint16_t x120 = 1506U;
	volatile uint32_t t29 = 35759942U;

	t29 = (x117^((x118|x119)^x120));

	if (t29 != 2502083668U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t30 = -105708258624280284LL;

	t30 = (x121^((x122|x123)^x124));

	if (t30 != -2147483445LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = -51;
	volatile int32_t t31 = -1;

	t31 = (x125^((x126|x127)^x128));

	if (t31 != -32691) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 6U;
	volatile int64_t x130 = -1LL;
	uint16_t x131 = 2689U;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -169453949LL;

	t32 = (x129^((x130|x131)^x132));

	if (t32 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 1940U;
	volatile int64_t x135 = 980393103204LL;
	volatile int64_t t33 = 110154063811735LL;

	t33 = (x133^((x134|x135)^x136));

	if (t33 != -1556LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x139 = -11;
	int32_t x140 = -1;

	t34 = (x137^((x138|x139)^x140));

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 675;
	uint32_t x142 = 498405862U;
	int64_t x144 = INT64_MIN;
	int64_t t35 = -1LL;

	t35 = (x141^((x142|x143)^x144));

	if (t35 != -9223372036355818675LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 311U;
	volatile int32_t x146 = INT32_MAX;
	uint32_t x147 = 5504U;
	uint32_t t36 = 125990299U;

	t36 = (x145^((x146|x147)^x148));

	if (t36 != 2147483976U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 4U;
	int64_t x150 = 6289993LL;
	int8_t x152 = 1;
	static volatile int64_t t37 = -6134LL;

	t37 = (x149^((x150|x151)^x152));

	if (t37 != 6289992LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x155 = 3303592;
	volatile int32_t t38 = -106362168;

	t38 = (x153^((x154|x155)^x156));

	if (t38 != -3282815) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	int64_t t39 = -271LL;

	t39 = (x157^((x158|x159)^x160));

	if (t39 != -9LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	static int8_t x163 = 8;
	int16_t x164 = -1;
	static volatile int32_t t40 = -31790;

	t40 = (x161^((x162|x163)^x164));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = UINT64_MAX;
	int64_t x166 = 3995892510795431274LL;
	volatile int32_t x168 = INT32_MAX;

	t41 = (x165^((x166|x167)^x168));

	if (t41 != 14450851563001544062LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 1U;
	int8_t x170 = 21;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 6594490;

	t42 = (x169^((x170|x171)^x172));

	if (t42 != 2147418113) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -232LL;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = 43U;
	int64_t t43 = 72903LL;

	t43 = (x173^((x174|x175)^x176));

	if (t43 != 9223372036854775603LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	int8_t x180 = -1;

	t44 = (x177^((x178|x179)^x180));

	if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int8_t x182 = -1;
	int16_t x183 = -25;
	int16_t x184 = INT16_MAX;
	volatile int32_t t45 = 1;

	t45 = (x181^((x182|x183)^x184));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x187 = 2472;
	int32_t x188 = INT32_MAX;
	volatile int64_t t46 = 26849LL;

	t46 = (x185^((x186|x187)^x188));

	if (t46 != -9223372034707292248LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	volatile uint64_t x191 = 2051638364875951LLU;
	uint64_t t47 = 9911954680521164LLU;

	t47 = (x189^((x190|x191)^x192));

	if (t47 != 2051638364930047LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1112;
	int16_t x195 = -1;
	static volatile int64_t x196 = INT64_MIN;

	t48 = (x193^((x194|x195)^x196));

	if (t48 != -9223372036854774697LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 102U;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = INT32_MAX;
	int32_t t49 = 1;

	t49 = (x197^((x198|x199)^x200));

	if (t49 != 2147418135) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 291684960LLU;
	int64_t x202 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MIN;
	uint64_t t50 = 901807505060634831LLU;

	t50 = (x201^((x202|x203)^x204));

	if (t50 != 9223372034415607199LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 144299U;
	int16_t x206 = INT16_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t x208 = INT64_MAX;
	int64_t t51 = 138454738291915879LL;

	t51 = (x205^((x206|x207)^x208));

	if (t51 != 9223372032559952811LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MAX;
	static int64_t x211 = INT64_MAX;
	static volatile int32_t x212 = -6063026;
	volatile uint64_t t52 = 238165592465LLU;

	t52 = (x209^((x210|x211)^x212));

	if (t52 != 9223372036848712782LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 29;
	uint32_t x215 = 44931U;
	static int16_t x216 = INT16_MIN;

	t53 = (x213^((x214|x215)^x216));

	if (t53 != 53355U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 21914521001325040LLU;
	uint32_t x218 = 3848U;
	volatile int64_t x219 = -1LL;
	int32_t x220 = -2591070;
	uint64_t t54 = 73420858339LLU;

	t54 = (x217^((x218|x219)^x220));

	if (t54 != 21914520999131309LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 56U;

	t55 = (x221^((x222|x223)^x224));

	if (t55 != 56) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	static int64_t x226 = 1172260599328LL;
	static uint8_t x227 = 38U;
	uint64_t t56 = 1993503LLU;

	t56 = (x225^((x226|x227)^x228));

	if (t56 != 18446742880194215666LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 130808U;
	static volatile int64_t x230 = -1LL;
	volatile int32_t x231 = -1;
	static int32_t x232 = INT32_MIN;
	int64_t t57 = -1572180000105458LL;

	t57 = (x229^((x230|x231)^x232));

	if (t57 != 2147352839LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	int8_t x235 = -1;
	static int64_t x236 = INT64_MIN;
	int64_t t58 = 263465541693LL;

	t58 = (x233^((x234|x235)^x236));

	if (t58 != -9223372036851529610LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = 13410LLU;
	int8_t x240 = INT8_MAX;
	static volatile uint64_t t59 = 8992364166113564LLU;

	t59 = (x237^((x238|x239)^x240));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 11U;
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 5U;
	int64_t x244 = 1429LL;
	volatile int64_t t60 = -2LL;

	t60 = (x241^((x242|x243)^x244));

	if (t60 != -2147482213LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;
	static int64_t t61 = 1750985LL;

	t61 = (x245^((x246|x247)^x248));

	if (t61 != 2147450879LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = 402U;
	int64_t x251 = -1966090460LL;
	volatile int16_t x252 = INT16_MAX;

	t62 = (x249^((x250|x251)^x252));

	if (t62 != -2328864842LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -786;
	static uint8_t x254 = 41U;
	static uint16_t x255 = UINT16_MAX;
	static uint32_t x256 = 111U;
	uint32_t t63 = 959883U;

	t63 = (x253^((x254|x255)^x256));

	if (t63 != 4294902654U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 0;
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	volatile uint64_t t64 = 98032485463365793LLU;

	t64 = (x257^((x258|x259)^x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	static int8_t x262 = INT8_MIN;
	volatile int64_t x263 = -1LL;
	uint64_t t65 = 224787LLU;

	t65 = (x261^((x262|x263)^x264));

	if (t65 != 21538023215824221LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 38U;
	int16_t x266 = INT16_MIN;

	t66 = (x265^((x266|x267)^x268));

	if (t66 != 18446744073289263724LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -23LL;
	static int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = -2;
	volatile int64_t t67 = 3150027LL;

	t67 = (x269^((x270|x271)^x272));

	if (t67 != -105LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	static volatile uint8_t x274 = 9U;
	int32_t x276 = INT32_MAX;
	int32_t t68 = 1140;

	t68 = (x273^((x274|x275)^x276));

	if (t68 != -2147483639) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -73;
	static uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	static uint32_t x280 = 17833596U;
	uint64_t t69 = 44794098950149227LLU;

	t69 = (x277^((x278|x279)^x280));

	if (t69 != 17833524LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	int64_t t70 = -35817LL;

	t70 = (x281^((x282|x283)^x284));

	if (t70 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 65U;
	volatile int64_t x286 = INT64_MIN;
	volatile int32_t x288 = 109;
	volatile int64_t t71 = -56734930LL;

	t71 = (x285^((x286|x287)^x288));

	if (t71 != -84LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = 495LLU;

	t72 = (x289^((x290|x291)^x292));

	if (t72 != 65447LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	volatile uint32_t x294 = 292U;
	int8_t x295 = 0;
	static volatile uint64_t x296 = 59270270499607LLU;
	uint64_t t73 = 2LLU;

	t73 = (x293^((x294|x295)^x296));

	if (t73 != 9223431307125275187LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MAX;
	static int32_t x298 = INT32_MIN;
	static volatile uint64_t x299 = 30138LLU;
	int8_t x300 = INT8_MIN;
	uint64_t t74 = 5758943755278LLU;

	t74 = (x297^((x298|x299)^x300));

	if (t74 != 9223372034707322309LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -4869;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	static uint16_t x304 = 7U;
	int32_t t75 = -1;

	t75 = (x301^((x302|x303)^x304));

	if (t75 != 4867) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 57U;
	int64_t x307 = -74969864LL;
	static volatile uint32_t x308 = UINT32_MAX;
	volatile int64_t t76 = -2598387083186LL;

	t76 = (x305^((x306|x307)^x308));

	if (t76 != -4294967234LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int16_t x311 = -17;
	volatile int32_t t77 = 19;

	t77 = (x309^((x310|x311)^x312));

	if (t77 != 32751) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int32_t x314 = -1;
	uint32_t x316 = 1U;
	volatile uint32_t t78 = 1231U;

	t78 = (x313^((x314|x315)^x316));

	if (t78 != 32766U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int32_t x320 = INT32_MIN;
	int32_t t79 = 8130664;

	t79 = (x317^((x318|x319)^x320));

	if (t79 != 2147483392) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	static uint8_t x322 = 3U;
	static volatile int8_t x323 = -1;
	volatile uint64_t x324 = 35LLU;
	volatile uint64_t t80 = 34094998786464LLU;

	t80 = (x321^((x322|x323)^x324));

	if (t80 != 92LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = 42;
	int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = -40523;

	t81 = (x325^((x326|x327)^x328));

	if (t81 != -32726) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MAX;
	int32_t x331 = -1;
	volatile int32_t t82 = 10349034;

	t82 = (x329^((x330|x331)^x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	static int32_t x334 = -154;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 13;
	int32_t t83 = 277341007;

	t83 = (x333^((x334|x335)^x336));

	if (t83 != -32748) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	static volatile int8_t x340 = INT8_MIN;
	uint64_t t84 = 3702485LLU;

	t84 = (x337^((x338|x339)^x340));

	if (t84 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	int64_t x343 = 60250LL;
	static uint64_t x344 = 4290633446966171370LLU;

	t85 = (x341^((x342|x343)^x344));

	if (t85 != 4932738588943383984LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -1;
	uint64_t x347 = 348948LLU;
	volatile uint64_t t86 = 152978706413863LLU;

	t86 = (x345^((x346|x347)^x348));

	if (t86 != 128LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 245U;
	int8_t x351 = 57;
	uint32_t t87 = 1715188U;

	t87 = (x349^((x350|x351)^x352));

	if (t87 != 4294967165U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	static uint64_t x355 = 116260430380262150LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t88 = 33277822281LLU;

	t88 = (x353^((x354|x355)^x356));

	if (t88 != 9223372034707299577LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 137LLU;
	uint8_t x358 = UINT8_MAX;
	static volatile int64_t x359 = INT64_MIN;
	uint8_t x360 = UINT8_MAX;
	uint64_t t89 = 2597984583359016906LLU;

	t89 = (x357^((x358|x359)^x360));

	if (t89 != 9223372036854775945LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int16_t x362 = 167;
	int16_t x363 = 430;
	static volatile uint64_t x364 = 15257598966LLU;
	volatile uint64_t t90 = 4368899700509087311LLU;

	t90 = (x361^((x362|x363)^x364));

	if (t90 != 18446744058451982937LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MAX;
	static volatile int32_t x366 = INT32_MIN;
	int32_t x367 = 538113;
	int64_t x368 = INT64_MIN;
	volatile int64_t t91 = 25481311369064LL;

	t91 = (x365^((x366|x367)^x368));

	if (t91 != 2146945534LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 12U;

	t92 = (x369^((x370|x371)^x372));

	if (t92 != 2147483635LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile int64_t x374 = -1LL;
	volatile int8_t x375 = -1;
	volatile int8_t x376 = INT8_MIN;
	static volatile int64_t t93 = 217LL;

	t93 = (x373^((x374|x375)^x376));

	if (t93 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -13504155;

	t94 = (x377^((x378|x379)^x380));

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	int16_t x382 = -1;
	static volatile int64_t x383 = INT64_MIN;
	int32_t x384 = -1;
	volatile int64_t t95 = -3068241028842062LL;

	t95 = (x381^((x382|x383)^x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static uint8_t x386 = 53U;
	uint16_t x387 = 6U;
	int32_t t96 = -167;

	t96 = (x385^((x386|x387)^x388));

	if (t96 != -32713) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 136U;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -718572535255285558LL;
	int64_t t97 = -1909LL;

	t97 = (x389^((x390|x391)^x392));

	if (t97 != 718572535255285698LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	int8_t x395 = INT8_MAX;
	volatile uint8_t x396 = 29U;
	static volatile int64_t t98 = -989324948159LL;

	t98 = (x393^((x394|x395)^x396));

	if (t98 != 9223372034707292258LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = 1406310;
	volatile int16_t x398 = -1;
	int32_t x400 = 126797871;
	int32_t t99 = -228241;

	t99 = (x397^((x398|x399)^x400));

	if (t99 != -127647050) { NG(); } else { ; }
	
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

