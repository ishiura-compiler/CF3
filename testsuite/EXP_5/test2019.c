#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 26;
int64_t t1 = -106LL;
volatile int16_t x13 = INT16_MIN;
int64_t x14 = -20953LL;
int32_t x15 = 1335;
int8_t x25 = INT8_MIN;
volatile int64_t x29 = -324519635LL;
static uint8_t x30 = 1U;
int16_t x35 = INT16_MAX;
uint32_t x46 = 117582U;
static volatile int8_t x49 = INT8_MIN;
int32_t x50 = INT32_MIN;
static uint16_t x61 = 2U;
uint64_t x63 = 11731553981615LLU;
volatile uint32_t x66 = 1884U;
int16_t x67 = INT16_MIN;
int16_t x73 = -22;
static int64_t x74 = INT64_MIN;
int64_t t15 = -5806392437LL;
static int8_t x86 = -1;
static volatile int16_t x87 = INT16_MIN;
uint16_t x88 = 181U;
int16_t x94 = -1;
int16_t x96 = INT16_MAX;
static int64_t x97 = INT64_MAX;
uint64_t t20 = 2768545839LLU;
static int64_t x101 = INT64_MAX;
uint8_t x105 = UINT8_MAX;
int64_t t23 = 884564298040LL;
int64_t t24 = -2869313608336324LL;
volatile int16_t x133 = 2754;
int8_t x134 = INT8_MIN;
int32_t x136 = -14415859;
volatile int32_t t28 = -18158022;
static int16_t x137 = 0;
int16_t x138 = INT16_MAX;
int32_t x140 = INT32_MIN;
int8_t x148 = INT8_MIN;
int32_t t31 = 0;
static volatile uint32_t t32 = 99U;
int32_t x157 = 85;
volatile int16_t x159 = -1;
static int16_t x160 = INT16_MAX;
volatile int8_t x168 = INT8_MIN;
volatile int32_t x169 = INT32_MAX;
int32_t x182 = INT32_MAX;
uint64_t x187 = 145940967936LLU;
volatile int32_t t42 = 14;
int64_t t43 = -135LL;
int16_t x202 = 13;
int64_t x206 = INT64_MIN;
int64_t x208 = INT64_MAX;
int8_t x212 = INT8_MAX;
int32_t x221 = 2064256;
static int64_t x224 = -1LL;
static volatile int64_t x235 = INT64_MIN;
int64_t t52 = -436149240LL;
int64_t x242 = INT64_MIN;
uint64_t t57 = 54LLU;
int8_t x259 = INT8_MIN;
uint8_t x260 = 72U;
volatile int64_t t58 = -312432LL;
int32_t x262 = INT32_MAX;
int16_t x263 = INT16_MIN;
int8_t x267 = INT8_MIN;
int16_t x268 = 2;
volatile int32_t x272 = INT32_MIN;
static uint16_t x276 = 13U;
int32_t x277 = INT32_MAX;
uint64_t x279 = 14549LLU;
static int16_t x288 = -8416;
int32_t x290 = INT32_MIN;
volatile int32_t x294 = 358792955;
int16_t x301 = INT16_MAX;
volatile uint16_t x303 = 6492U;
uint64_t t68 = 2LLU;
static uint32_t x307 = 135U;
static volatile uint32_t t69 = 419U;
uint64_t x311 = UINT64_MAX;
static volatile int64_t x318 = INT64_MAX;
int8_t x343 = INT8_MIN;
volatile uint64_t t77 = 80318LLU;
uint32_t x358 = 1023298U;
uint16_t x360 = 125U;
uint64_t x369 = 283630978873670407LLU;
volatile int16_t x380 = INT16_MIN;
static uint8_t x387 = 58U;
uint8_t x392 = UINT8_MAX;
static int64_t t87 = -222850LL;
volatile int16_t x393 = -1;
static uint64_t t88 = 96130LLU;
volatile int32_t x405 = INT32_MIN;
volatile int64_t x406 = INT64_MAX;
uint32_t x410 = 43561625U;
int8_t x415 = INT8_MAX;
int8_t x428 = INT8_MIN;
uint64_t x430 = UINT64_MAX;
uint32_t x435 = UINT32_MAX;
static uint16_t x436 = 8496U;
static int32_t x438 = INT32_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 1972106297638116695LLU;
	uint8_t x4 = 1U;
	volatile uint64_t t0 = 16343418855423025LLU;

	t0 = (x1/((x2|x3)^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 12529U;
	int64_t x6 = -4083445LL;
	volatile uint16_t x7 = 6U;
	int64_t x8 = INT64_MAX;

	t1 = (x5/((x6|x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 118115949317552LLU;
	volatile int32_t x10 = INT32_MIN;
	uint64_t x11 = 109947LLU;
	uint64_t x12 = 56829850656646LLU;
	uint64_t t2 = 1914543LLU;

	t2 = (x9/((x10|x11)^x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x16 = -3;
	volatile int64_t t3 = 54281658LL;

	t3 = (x13/((x14|x15)^x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MAX;
	static int16_t x28 = INT16_MIN;
	static volatile int32_t t4 = 232;

	t4 = (x25/((x26|x27)^x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	volatile int64_t t5 = -52476426503390604LL;

	t5 = (x29/((x30|x31)^x32));

	if (t5 != -9904LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 40U;
	uint8_t x34 = UINT8_MAX;
	uint8_t x36 = UINT8_MAX;
	static int32_t t6 = 3;

	t6 = (x33/((x34|x35)^x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = -1;
	int16_t x38 = 1;
	uint8_t x39 = 11U;
	int16_t x40 = -5;
	int32_t t7 = -21581795;

	t7 = (x37/((x38|x39)^x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	static volatile int16_t x48 = INT16_MAX;
	static volatile uint32_t t8 = 729639U;

	t8 = (x45/((x46|x47)^x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x51 = -1;
	uint16_t x52 = 29226U;
	int32_t t9 = -108735714;

	t9 = (x49/((x50|x51)^x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = 1;
	static uint32_t x54 = 0U;
	static int64_t x55 = INT64_MIN;
	volatile int32_t x56 = INT32_MAX;
	int64_t t10 = 573928955339566205LL;

	t10 = (x53/((x54|x55)^x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = 59;
	static uint32_t x58 = 0U;
	int32_t x59 = -118;
	int8_t x60 = INT8_MAX;
	uint32_t t11 = 2402394U;

	t11 = (x57/((x58|x59)^x60));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	uint64_t t12 = 149099471698794652LLU;

	t12 = (x61/((x62|x63)^x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	volatile uint32_t x68 = 14066848U;
	uint32_t t13 = 5648U;

	t13 = (x65/((x66|x67)^x68));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 2U;
	uint16_t x70 = 11718U;
	int64_t x71 = -31505309371047LL;
	int64_t x72 = -773197383115340104LL;
	volatile int64_t t14 = 85201113798618176LL;

	t14 = (x69/((x70|x71)^x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x75 = 6366922028LL;
	uint16_t x76 = UINT16_MAX;

	t15 = (x73/((x74|x75)^x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 15815515458LLU;
	int16_t x79 = -2;
	int32_t x80 = -1;
	volatile uint64_t t16 = 44881216254839687LLU;

	t16 = (x77/((x78|x79)^x80));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MAX;
	volatile int32_t t17 = 72864;

	t17 = (x85/((x86|x87)^x88));

	if (t17 != -11799360) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint32_t x90 = 42599628U;
	uint64_t x91 = UINT64_MAX;
	static int8_t x92 = 1;
	static volatile uint64_t t18 = 1200846881888630LLU;

	t18 = (x89/((x90|x91)^x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = -1;
	uint32_t x95 = 492U;
	static volatile uint32_t t19 = 267U;

	t19 = (x93/((x94|x95)^x96));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x98 = 51LLU;
	int16_t x99 = INT16_MAX;
	volatile int32_t x100 = INT32_MAX;

	t20 = (x97/((x98|x99)^x100));

	if (t20 != 4295032833LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = 60493;
	static int8_t x103 = 33;
	volatile int32_t x104 = 226831;
	int64_t t21 = -124269651LL;

	t21 = (x101/((x102|x103)^x104));

	if (t21 != 39060568487082LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x106 = 21U;
	int16_t x107 = -4;
	int8_t x108 = -1;
	uint32_t t22 = 12033U;

	t22 = (x105/((x106|x107)^x108));

	if (t22 != 127U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 10311267506095LL;
	uint8_t x110 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 27U;

	t23 = (x109/((x110|x111)^x112));

	if (t23 != 45224857482LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -84793673351LL;
	int16_t x114 = INT16_MAX;
	int32_t x115 = -327797;
	int32_t x116 = INT32_MAX;

	t24 = (x113/((x114|x115)^x116));

	if (t24 != 39LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x117 = 438972U;
	static int8_t x118 = INT8_MAX;
	uint8_t x119 = 120U;
	volatile uint8_t x120 = UINT8_MAX;
	volatile uint32_t t25 = 131146818U;

	t25 = (x117/((x118|x119)^x120));

	if (t25 != 3429U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MIN;
	uint64_t x122 = 173946402322114LLU;
	int64_t x123 = 279012817428236273LL;
	volatile uint8_t x124 = 2U;
	static uint64_t t26 = 6632638701350181183LLU;

	t26 = (x121/((x122|x123)^x124));

	if (t26 != 66LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 695;
	int16_t x130 = -1;
	uint16_t x131 = 79U;
	int32_t x132 = 95;
	volatile int32_t t27 = -480231;

	t27 = (x129/((x130|x131)^x132));

	if (t27 != -7) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x135 = INT8_MIN;

	t28 = (x133/((x134|x135)^x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x139 = 1;
	int32_t t29 = 3982121;

	t29 = (x137/((x138|x139)^x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x141 = -3959;
	volatile uint32_t x142 = 50834888U;
	int32_t x143 = INT32_MAX;
	uint8_t x144 = 1U;
	volatile uint32_t t30 = 1U;

	t30 = (x141/((x142|x143)^x144));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = -1;
	static int32_t x147 = -1;

	t31 = (x145/((x146|x147)^x148));

	if (t31 != -16909320) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	int32_t x150 = -4288332;
	int8_t x151 = -3;
	uint32_t x152 = 18598U;

	t32 = (x149/((x150|x151)^x152));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 75LL;
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = INT32_MAX;
	static volatile int64_t x156 = INT64_MIN;
	volatile int64_t t33 = 302271LL;

	t33 = (x153/((x154|x155)^x156));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x158 = -1;
	int32_t t34 = -24;

	t34 = (x157/((x158|x159)^x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x161 = INT32_MIN;
	int8_t x162 = -49;
	int16_t x163 = INT16_MAX;
	volatile int8_t x164 = INT8_MIN;
	int32_t t35 = 25;

	t35 = (x161/((x162|x163)^x164));

	if (t35 != -16909320) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x165 = -190613348188015LL;
	volatile int64_t x166 = INT64_MIN;
	volatile int32_t x167 = 102;
	volatile int64_t t36 = 506903002757LL;

	t36 = (x165/((x166|x167)^x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x170 = INT16_MIN;
	uint16_t x171 = UINT16_MAX;
	volatile int8_t x172 = 25;
	static volatile int32_t t37 = 3;

	t37 = (x169/((x170|x171)^x172));

	if (t37 != -82595524) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 63U;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MIN;
	uint16_t x176 = 22U;
	volatile int32_t t38 = -942630;

	t38 = (x173/((x174|x175)^x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -1;
	int16_t x178 = -1;
	volatile uint8_t x179 = 62U;
	volatile uint16_t x180 = UINT16_MAX;
	static int32_t t39 = -23795;

	t39 = (x177/((x178|x179)^x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x181 = 13540306U;
	uint64_t x183 = 3LLU;
	int32_t x184 = -1;
	uint64_t t40 = 760062LLU;

	t40 = (x181/((x182|x183)^x184));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x185 = INT16_MIN;
	uint8_t x186 = 0U;
	int32_t x188 = 15;
	volatile uint64_t t41 = 198957947571753959LLU;

	t41 = (x185/((x186|x187)^x188));

	if (t41 != 126398668LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = -2564;
	int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MIN;

	t42 = (x189/((x190|x191)^x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 63U;
	static volatile int8_t x194 = 2;
	volatile uint8_t x195 = 1U;
	int64_t x196 = -1LL;

	t43 = (x193/((x194|x195)^x196));

	if (t43 != -15LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 1775;
	int64_t x198 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 3U;
	uint64_t t44 = 1LLU;

	t44 = (x197/((x198|x199)^x200));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 9004;
	uint8_t x203 = 56U;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t45 = 123;

	t45 = (x201/((x202|x203)^x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x205 = UINT8_MAX;
	uint64_t x207 = 29943685943LLU;
	static uint64_t t46 = 112977533710207LLU;

	t46 = (x205/((x206|x207)^x208));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 1160843U;
	uint64_t x210 = 220215871598LLU;
	int32_t x211 = INT32_MAX;
	volatile uint64_t t47 = 31LLU;

	t47 = (x209/((x210|x211)^x212));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x217 = -1;
	int16_t x218 = -2707;
	uint8_t x219 = 118U;
	uint8_t x220 = UINT8_MAX;
	int32_t t48 = 927;

	t48 = (x217/((x218|x219)^x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x222 = 1U;
	volatile uint16_t x223 = UINT16_MAX;
	int64_t t49 = -12LL;

	t49 = (x221/((x222|x223)^x224));

	if (t49 != -31LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MAX;
	volatile int64_t x226 = 436367812LL;
	uint16_t x227 = 13U;
	volatile uint8_t x228 = 100U;
	static volatile int64_t t50 = -7892LL;

	t50 = (x225/((x226|x227)^x228));

	if (t50 != 4LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x229 = INT16_MIN;
	volatile int16_t x230 = INT16_MIN;
	static volatile uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MAX;
	static uint64_t t51 = 7032LLU;

	t51 = (x229/((x230|x231)^x232));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = 8186;
	int8_t x234 = -1;
	int64_t x236 = INT64_MIN;

	t52 = (x233/((x234|x235)^x236));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	static uint8_t x239 = 16U;
	int64_t x240 = INT64_MAX;
	volatile int64_t t53 = 27535382735380734LL;

	t53 = (x237/((x238|x239)^x240));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x243 = 533U;
	int8_t x244 = -1;
	volatile int64_t t54 = 1LL;

	t54 = (x241/((x242|x243)^x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x245 = INT64_MAX;
	volatile uint8_t x246 = 4U;
	int16_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int64_t t55 = -15752773704174194LL;

	t55 = (x245/((x246|x247)^x248));

	if (t55 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 371U;
	static int8_t x250 = -1;
	uint32_t x251 = 177U;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t56 = 235839U;

	t56 = (x249/((x250|x251)^x252));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1669;
	volatile uint64_t x256 = 1036869249LLU;

	t57 = (x253/((x254|x255)^x256));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x257 = -363721734765819444LL;
	volatile uint32_t x258 = 85U;

	t58 = (x257/((x258|x259)^x260));

	if (t58 != -84685567LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 62U;
	int16_t x264 = INT16_MIN;
	uint32_t t59 = 9254447U;

	t59 = (x261/((x262|x263)^x264));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 27U;
	uint8_t x266 = UINT8_MAX;
	int32_t t60 = -16;

	t60 = (x265/((x266|x267)^x268));

	if (t60 != -9) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = 91U;
	int16_t x270 = INT16_MAX;
	uint32_t x271 = 8626U;
	static volatile uint32_t t61 = 16909784U;

	t61 = (x269/((x270|x271)^x272));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x273 = 8049712U;
	static volatile int32_t x274 = 133653;
	volatile uint8_t x275 = 28U;
	volatile uint32_t t62 = 77885420U;

	t62 = (x273/((x274|x275)^x276));

	if (t62 != 60U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x278 = UINT32_MAX;
	volatile int64_t x280 = INT64_MIN;
	uint64_t t63 = 105296891223LLU;

	t63 = (x277/((x278|x279)^x280));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x281 = 9U;
	int16_t x282 = -1;
	int8_t x283 = INT8_MAX;
	static volatile int16_t x284 = INT16_MAX;
	volatile int32_t t64 = -939137;

	t64 = (x281/((x282|x283)^x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = 5186U;
	int8_t x286 = 1;
	uint64_t x287 = 1855944600LLU;
	volatile uint64_t t65 = 30352932370713630LLU;

	t65 = (x285/((x286|x287)^x288));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MAX;
	uint16_t x291 = 47U;
	int8_t x292 = INT8_MIN;
	volatile int64_t t66 = -58499667758888716LL;

	t66 = (x289/((x290|x291)^x292));

	if (t66 != 4294967458LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = -1;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = UINT16_MAX;
	int32_t t67 = 407344112;

	t67 = (x293/((x294|x295)^x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x302 = 68U;
	static uint64_t x304 = UINT64_MAX;

	t68 = (x301/((x302|x303)^x304));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 30968U;
	int8_t x308 = -1;

	t69 = (x305/((x306|x307)^x308));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MAX;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t70 = 78601311533021LLU;

	t70 = (x309/((x310|x311)^x312));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t71 = -1LL;

	t71 = (x313/((x314|x315)^x316));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x317 = 148U;
	static uint16_t x319 = UINT16_MAX;
	static uint16_t x320 = 511U;
	static volatile int64_t t72 = -3900756041LL;

	t72 = (x317/((x318|x319)^x320));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 876U;
	uint32_t x322 = 82248378U;
	volatile uint64_t x323 = 0LLU;
	static volatile uint64_t x324 = 464LLU;
	volatile uint64_t t73 = 3676LLU;

	t73 = (x321/((x322|x323)^x324));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x333 = 2U;
	uint64_t x334 = 431893782092LLU;
	int32_t x335 = 17646819;
	volatile int8_t x336 = INT8_MIN;
	uint64_t t74 = 3910024242089LLU;

	t74 = (x333/((x334|x335)^x336));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = -1LL;
	int64_t x339 = INT64_MAX;
	static int32_t x340 = 1;
	int64_t t75 = -1199579199030096LL;

	t75 = (x337/((x338|x339)^x340));

	if (t75 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x341 = 3830993LLU;
	uint16_t x342 = UINT16_MAX;
	uint64_t x344 = 779LLU;
	static uint64_t t76 = 426018684959LLU;

	t76 = (x341/((x342|x343)^x344));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 789880587LLU;
	int64_t x348 = INT64_MIN;

	t77 = (x345/((x346|x347)^x348));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 508U;
	int64_t x350 = 123778647658LL;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = -1;
	volatile int64_t t78 = 3LL;

	t78 = (x349/((x350|x351)^x352));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x353 = -1LL;
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = -572319;
	volatile int64_t t79 = -702217019367LL;

	t79 = (x353/((x354|x355)^x356));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x357 = 10U;
	uint32_t x359 = 61U;
	uint32_t t80 = 51459U;

	t80 = (x357/((x358|x359)^x360));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = 3;
	static int8_t x362 = -1;
	uint32_t x363 = 27596243U;
	static int32_t x364 = INT32_MIN;
	uint32_t t81 = 809286602U;

	t81 = (x361/((x362|x363)^x364));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x370 = UINT32_MAX;
	static int8_t x371 = -5;
	int64_t x372 = INT64_MIN;
	static uint64_t t82 = 422171713110LLU;

	t82 = (x369/((x370|x371)^x372));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = -1;
	uint32_t x375 = 94U;
	int8_t x376 = 0;
	volatile uint32_t t83 = 1U;

	t83 = (x373/((x374|x375)^x376));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	volatile uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = 43U;
	static uint32_t t84 = 34410U;

	t84 = (x377/((x378|x379)^x380));

	if (t84 != 131075U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = 1563LL;
	int64_t x382 = 44833LL;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	static int64_t t85 = -9256333253334LL;

	t85 = (x381/((x382|x383)^x384));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = UINT16_MAX;
	static uint8_t x386 = 63U;
	static volatile int32_t x388 = INT32_MIN;
	int32_t t86 = -4;

	t86 = (x385/((x386|x387)^x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = -1LL;
	int64_t x390 = INT64_MIN;
	static int8_t x391 = 13;

	t87 = (x389/((x390|x391)^x392));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x394 = -1LL;
	uint64_t x395 = 4173678LLU;
	int32_t x396 = -714901;

	t88 = (x393/((x394|x395)^x396));

	if (t88 != 25803250907412LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = 68305923064861180LLU;
	int64_t x398 = -1LL;
	uint16_t x399 = 0U;
	int32_t x400 = -1610886;
	volatile uint64_t t89 = 417LLU;

	t89 = (x397/((x398|x399)^x400));

	if (t89 != 42402730837LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 20;
	volatile int64_t x402 = 9221225699LL;
	uint8_t x403 = 5U;
	int32_t x404 = INT32_MIN;
	int64_t t90 = 15LL;

	t90 = (x401/((x402|x403)^x404));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x407 = -1;
	int32_t x408 = INT32_MIN;
	int64_t t91 = 857LL;

	t91 = (x405/((x406|x407)^x408));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x409 = UINT8_MAX;
	static uint8_t x411 = 0U;
	static int32_t x412 = INT32_MIN;
	uint32_t t92 = 1095465912U;

	t92 = (x409/((x410|x411)^x412));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	static int16_t x414 = INT16_MIN;
	uint16_t x416 = UINT16_MAX;
	static int32_t t93 = 989152160;

	t93 = (x413/((x414|x415)^x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x421 = 122U;
	int32_t x422 = -1;
	int8_t x423 = INT8_MAX;
	volatile uint64_t x424 = 2687196LLU;
	uint64_t t94 = 76855468752LLU;

	t94 = (x421/((x422|x423)^x424));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = INT64_MIN;
	volatile int64_t x426 = -642649424554LL;
	int64_t x427 = -1LL;
	static int64_t t95 = -2651836962015683LL;

	t95 = (x425/((x426|x427)^x428));

	if (t95 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = -4132;
	int8_t x431 = 0;
	static int8_t x432 = INT8_MIN;
	volatile uint64_t t96 = 339561501711209LLU;

	t96 = (x429/((x430|x431)^x432));

	if (t96 != 145249953336295649LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MAX;
	volatile uint32_t t97 = 1106U;

	t97 = (x433/((x434|x435)^x436));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = 43U;
	static volatile int16_t x439 = -6284;
	static int8_t x440 = INT8_MIN;
	int32_t t98 = 6552;

	t98 = (x437/((x438|x439)^x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = -2;
	static int64_t x442 = INT64_MIN;
	int32_t x443 = 917313286;
	uint64_t x444 = 6045282209037835234LLU;
	uint64_t t99 = 560807638LLU;

	t99 = (x441/((x442|x443)^x444));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

