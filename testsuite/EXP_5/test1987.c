#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 45;
static uint16_t x4 = UINT16_MAX;
int64_t t1 = -7LL;
volatile uint16_t x13 = 4408U;
int8_t x16 = INT8_MIN;
volatile int64_t x23 = INT64_MIN;
static volatile int32_t t5 = 3613488;
uint8_t x37 = 14U;
uint8_t x42 = UINT8_MAX;
int32_t x43 = INT32_MIN;
int64_t t10 = -11690889LL;
int64_t x45 = -272735164912109338LL;
int32_t x48 = 0;
int8_t x50 = INT8_MIN;
volatile int32_t t13 = -28858677;
volatile int64_t x61 = INT64_MIN;
volatile uint32_t t16 = 1234962421U;
int32_t x71 = -44;
uint32_t x73 = 9U;
uint32_t x79 = 41U;
int32_t t19 = 44;
uint32_t x86 = 95424838U;
uint8_t x87 = 2U;
int32_t x89 = INT32_MIN;
int8_t x91 = INT8_MIN;
volatile uint32_t x104 = 1020U;
int16_t x107 = -1;
static volatile int32_t t26 = -2247928;
int32_t t27 = -9;
int32_t t32 = 1940449;
uint32_t x139 = 1873U;
static uint32_t x141 = 439161656U;
int32_t x144 = 2496720;
static int8_t x146 = INT8_MIN;
volatile uint8_t x149 = UINT8_MAX;
volatile int16_t x150 = 3360;
int8_t x151 = INT8_MIN;
static volatile int32_t t37 = 243260;
int64_t x159 = INT64_MAX;
int32_t t41 = -9;
int64_t x171 = -1LL;
volatile uint32_t x181 = 76U;
uint16_t x183 = 0U;
int32_t x184 = -1;
uint32_t t45 = 0U;
volatile int64_t x189 = INT64_MAX;
uint16_t x190 = 2U;
static int16_t x200 = INT16_MIN;
static int32_t x201 = INT32_MAX;
int32_t t52 = 13;
int16_t x215 = INT16_MIN;
volatile int32_t x216 = INT32_MIN;
volatile int32_t t53 = 6092;
uint32_t x220 = 32953636U;
volatile uint64_t x223 = UINT64_MAX;
int32_t x228 = INT32_MAX;
int32_t x235 = 0;
static uint32_t x240 = UINT32_MAX;
uint16_t x241 = 147U;
int32_t x247 = -1;
volatile uint32_t t61 = 3706154U;
uint32_t x254 = UINT32_MAX;
volatile int32_t x259 = 73150494;
volatile uint16_t x264 = 142U;
uint16_t x267 = 1U;
int64_t x268 = -1LL;
volatile int32_t t66 = -1;
uint8_t x269 = 22U;
int16_t x271 = -1;
uint16_t x272 = 7U;
volatile uint64_t x274 = 25375LLU;
static int64_t x276 = -1LL;
static int32_t t68 = -12;
volatile int32_t t69 = -1795;
uint64_t x283 = UINT64_MAX;
static volatile int16_t x287 = -1;
int64_t x290 = -1LL;
int32_t x291 = INT32_MIN;
int64_t x296 = -12433LL;
static int32_t x302 = -1;
volatile uint16_t x304 = 4U;
uint32_t x309 = 9613U;
int16_t x314 = INT16_MIN;
uint8_t x317 = 3U;
uint64_t x329 = 104796902796LLU;
volatile int16_t x332 = INT16_MIN;
uint64_t t82 = 18904043879763LLU;
uint16_t x337 = 9U;
static int64_t x342 = -110214686977LL;
int8_t x343 = INT8_MIN;
int8_t x352 = INT8_MAX;
static volatile int64_t x355 = 518195LL;
static uint32_t x357 = UINT32_MAX;
volatile int16_t x359 = 10169;
uint64_t t90 = 635365LLU;
static int32_t x365 = INT32_MAX;
volatile int16_t x369 = INT16_MAX;
int16_t x370 = 1;
volatile int64_t x373 = INT64_MIN;
uint16_t x377 = 9U;
int32_t t94 = 65355809;
int32_t x384 = -1;
int8_t x389 = INT8_MIN;
int16_t x394 = 3689;
int64_t x397 = 48LL;


void f0(void) {
	int64_t x1 = 1672465566330LL;
	uint64_t x2 = 485LLU;
	int64_t t0 = -35LL;

	t0 = (x1&((x2|x3)<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x6 = 84756832U;
	int64_t x7 = INT64_MIN;
	volatile uint32_t x8 = 23358U;

	t1 = (x5&((x6|x7)<=x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = -15430;
	volatile int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	volatile uint32_t t2 = 11899U;

	t2 = (x9&((x10|x11)<=x12));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -135351LL;
	static int16_t x15 = INT16_MIN;
	int32_t t3 = 94705;

	t3 = (x13&((x14|x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x18 = INT16_MAX;
	int32_t x19 = 0;
	uint16_t x20 = 45U;
	volatile uint32_t t4 = 21546300U;

	t4 = (x17&((x18|x19)<=x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int8_t x22 = INT8_MIN;
	volatile int32_t x24 = INT32_MAX;

	t5 = (x21&((x22|x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MAX;
	static int8_t x27 = 1;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 189375998LL;

	t6 = (x25&((x26|x27)<=x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 127U;
	static uint16_t x30 = 0U;
	volatile uint16_t x31 = UINT16_MAX;
	uint64_t x32 = 31458165786915LLU;
	static int32_t t7 = -230949557;

	t7 = (x29&((x30|x31)<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 244U;
	int16_t x34 = -1;
	int32_t x35 = INT32_MIN;
	volatile uint16_t x36 = 1201U;
	int32_t t8 = -1016400;

	t8 = (x33&((x34|x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	int32_t x39 = 296507;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -401681710;

	t9 = (x37&((x38|x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile uint16_t x44 = 6U;

	t10 = (x41&((x42|x43)<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 1135U;
	uint32_t x47 = 18U;
	volatile int64_t t11 = 35508679685063817LL;

	t11 = (x45&((x46|x47)<=x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	volatile int64_t x51 = -28693LL;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 20;

	t12 = (x49&((x50|x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	uint64_t x54 = 16957854240954LLU;
	int64_t x55 = INT64_MAX;
	volatile int64_t x56 = INT64_MIN;

	t13 = (x53&((x54|x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int8_t x58 = INT8_MIN;
	static int16_t x59 = INT16_MAX;
	static int64_t x60 = INT64_MIN;
	uint64_t t14 = 296445047186LLU;

	t14 = (x57&((x58|x59)<=x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = 12;
	static int64_t t15 = -4255251692877636235LL;

	t15 = (x61&((x62|x63)<=x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 444292558U;
	int32_t x66 = -1;
	uint64_t x67 = 194LLU;
	int16_t x68 = INT16_MIN;

	t16 = (x65&((x66|x67)<=x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = 21U;
	int32_t x72 = -178854083;
	int32_t t17 = 1;

	t17 = (x69&((x70|x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 333LLU;
	uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 11U;
	volatile uint32_t t18 = 1319488U;

	t18 = (x73&((x74|x75)<=x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint16_t x78 = UINT16_MAX;
	uint8_t x80 = UINT8_MAX;

	t19 = (x77&((x78|x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 0;
	uint16_t x82 = 587U;
	static int8_t x83 = -5;
	int16_t x84 = INT16_MAX;
	int32_t t20 = 5150008;

	t20 = (x81&((x82|x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int16_t x88 = 1;
	int32_t t21 = -8210;

	t21 = (x85&((x86|x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MAX;
	uint32_t x92 = 125605005U;
	volatile int32_t t22 = 8640;

	t22 = (x89&((x90|x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = 0;
	int8_t x94 = -1;
	uint16_t x95 = 7U;
	int8_t x96 = INT8_MIN;
	static int32_t t23 = -31750;

	t23 = (x93&((x94|x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	int64_t x98 = -573011LL;
	uint32_t x99 = 129568U;
	uint8_t x100 = 4U;
	volatile uint64_t t24 = 6796190222849755123LLU;

	t24 = (x97&((x98|x99)<=x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	uint64_t x102 = 10599119661625267LLU;
	static int16_t x103 = 58;
	int32_t t25 = 92;

	t25 = (x101&((x102|x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 40U;
	int16_t x106 = 13;
	int32_t x108 = 2040;

	t26 = (x105&((x106|x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 1001030U;
	volatile int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MAX;

	t27 = (x109&((x110|x111)<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 4215380560LLU;
	static volatile int8_t x114 = -1;
	volatile int16_t x115 = -1;
	volatile int32_t x116 = INT32_MAX;
	volatile uint64_t t28 = 457LLU;

	t28 = (x113&((x114|x115)<=x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = 2890;
	static int8_t x119 = -1;
	static int8_t x120 = -2;
	static int32_t t29 = -1330;

	t29 = (x117&((x118|x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int8_t x122 = 4;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;
	int32_t t30 = 4468368;

	t30 = (x121&((x122|x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -1;
	volatile int8_t x127 = 46;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 947;

	t31 = (x125&((x126|x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int16_t x130 = 15957;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = -1;

	t32 = (x129&((x130|x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 1U;
	uint16_t x134 = 4423U;
	static uint8_t x135 = 0U;
	uint8_t x136 = 123U;
	volatile int32_t t33 = -27;

	t33 = (x133&((x134|x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 467;

	t34 = (x137&((x138|x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 1;
	static uint16_t x143 = 37U;
	static volatile uint32_t t35 = 563444573U;

	t35 = (x141&((x142|x143)<=x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 278;
	static int64_t x147 = -6352326506932LL;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -22126964;

	t36 = (x145&((x146|x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x152 = INT16_MAX;

	t37 = (x149&((x150|x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -3;
	int16_t x154 = -1;
	volatile uint8_t x155 = 12U;
	volatile int64_t x156 = 25968LL;
	int32_t t38 = 22742325;

	t38 = (x153&((x154|x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = 1648;

	t39 = (x157&((x158|x159)<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	volatile int8_t x162 = -1;
	int32_t x163 = INT32_MAX;
	int16_t x164 = INT16_MIN;
	int64_t t40 = -14737118436866LL;

	t40 = (x161&((x162|x163)<=x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 16;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MAX;

	t41 = (x165&((x166|x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 3716;
	int16_t x170 = INT16_MIN;
	static volatile int64_t x172 = 611616677092541886LL;
	int32_t t42 = -123611834;

	t42 = (x169&((x170|x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	volatile int32_t x174 = -1;
	static uint64_t x175 = UINT64_MAX;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 15;

	t43 = (x173&((x174|x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 49305769U;
	int32_t x178 = -845373993;
	int16_t x179 = 0;
	uint32_t x180 = 12718098U;
	volatile uint32_t t44 = 278U;

	t44 = (x177&((x178|x179)<=x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x182 = -141LL;

	t45 = (x181&((x182|x183)<=x184));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -51LL;
	volatile int64_t x186 = INT64_MIN;
	uint16_t x187 = 23557U;
	volatile uint64_t x188 = 18LLU;
	static volatile int64_t t46 = 8033LL;

	t46 = (x185&((x186|x187)<=x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x191 = INT64_MIN;
	int32_t x192 = -509049386;
	volatile int64_t t47 = -52527825000LL;

	t47 = (x189&((x190|x191)<=x192));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	uint64_t x196 = 2440783531694127LLU;
	volatile uint32_t t48 = 14152352U;

	t48 = (x193&((x194|x195)<=x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1745095;
	int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MAX;
	int32_t t49 = -255106;

	t49 = (x197&((x198|x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = 47;
	static int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = -46;

	t50 = (x201&((x202|x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x205 = 47U;
	int8_t x206 = INT8_MAX;
	uint32_t x207 = UINT32_MAX;
	int8_t x208 = INT8_MIN;
	static int32_t t51 = 453363;

	t51 = (x205&((x206|x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	static volatile uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MIN;
	static uint16_t x212 = 4U;

	t52 = (x209&((x210|x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static uint8_t x214 = 1U;

	t53 = (x213&((x214|x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static volatile int64_t x218 = INT64_MIN;
	int8_t x219 = 1;
	static volatile int32_t t54 = -242;

	t54 = (x217&((x218|x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MIN;
	uint16_t x222 = 320U;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 14;

	t55 = (x221&((x222|x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	volatile uint64_t x227 = 7784LLU;
	volatile int32_t t56 = 206736;

	t56 = (x225&((x226|x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x229 = -1;
	static int16_t x230 = -9;
	volatile int64_t x231 = 924829642373009LL;
	static volatile int8_t x232 = -1;
	int32_t t57 = 566;

	t57 = (x229&((x230|x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 307U;
	uint8_t x234 = 8U;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -86102;

	t58 = (x233&((x234|x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -101189710532LL;
	static uint16_t x238 = 1U;
	int64_t x239 = INT64_MIN;
	volatile int64_t t59 = -49828700984679552LL;

	t59 = (x237&((x238|x239)<=x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MAX;
	int64_t x243 = INT64_MAX;
	int8_t x244 = 1;
	volatile int32_t t60 = -459;

	t60 = (x241&((x242|x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int8_t x246 = -5;
	int16_t x248 = INT16_MIN;

	t61 = (x245&((x246|x247)<=x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -8948219044271883LL;
	int64_t x250 = INT64_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = INT64_MAX;
	int64_t t62 = 20739629970797LL;

	t62 = (x249&((x250|x251)<=x252));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = 0LL;
	int64_t x255 = INT64_MAX;
	static int8_t x256 = -1;
	static int64_t t63 = -21458930374948LL;

	t63 = (x253&((x254|x255)<=x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 77U;
	int32_t x258 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -15;

	t64 = (x257&((x258|x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 14690483262195758LLU;
	uint64_t x262 = 1LLU;
	int32_t x263 = INT32_MIN;
	uint64_t t65 = 8199459102223730378LLU;

	t65 = (x261&((x262|x263)<=x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = 1379231;

	t66 = (x265&((x266|x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 50046868337LLU;
	volatile int32_t t67 = -412059;

	t67 = (x269&((x270|x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x275 = UINT16_MAX;

	t68 = (x273&((x274|x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	static uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 347138675LLU;
	static int16_t x280 = INT16_MIN;

	t69 = (x277&((x278|x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -15862;
	int32_t x282 = 3841545;
	volatile int32_t x284 = 899016;
	static volatile int32_t t70 = 5798;

	t70 = (x281&((x282|x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = INT16_MIN;
	static uint16_t x286 = 150U;
	int32_t x288 = -19617987;
	int32_t t71 = 442210;

	t71 = (x285&((x286|x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 5834932917035157LL;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int64_t t72 = -129686943698495880LL;

	t72 = (x289&((x290|x291)<=x292));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	uint32_t t73 = 444U;

	t73 = (x293&((x294|x295)<=x296));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 211LLU;
	int64_t x298 = INT64_MAX;
	int32_t x299 = 1;
	static uint16_t x300 = UINT16_MAX;
	uint64_t t74 = 12382285399LLU;

	t74 = (x297&((x298|x299)<=x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -527185882LL;
	uint64_t x303 = UINT64_MAX;
	int64_t t75 = -11205607110755254LL;

	t75 = (x301&((x302|x303)<=x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	int32_t x307 = -622163;
	volatile int8_t x308 = 1;
	volatile int32_t t76 = -1955704;

	t76 = (x305&((x306|x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	static int16_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	volatile uint32_t t77 = 1U;

	t77 = (x309&((x310|x311)<=x312));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile uint64_t t78 = 24LLU;

	t78 = (x313&((x314|x315)<=x316));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x318 = 0U;
	static volatile int8_t x319 = -7;
	int8_t x320 = -15;
	volatile int32_t t79 = 0;

	t79 = (x317&((x318|x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = -1;
	static volatile uint8_t x324 = 1U;
	int32_t t80 = -145679;

	t80 = (x321&((x322|x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	uint64_t x326 = 17470205561014622LLU;
	int64_t x327 = 2928521527738LL;
	int64_t x328 = INT64_MIN;
	int32_t t81 = 41797;

	t81 = (x325&((x326|x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	uint16_t x331 = UINT16_MAX;

	t82 = (x329&((x330|x331)<=x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 231561U;
	uint64_t x334 = UINT64_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	static int32_t x336 = 241626;
	uint32_t t83 = 7U;

	t83 = (x333&((x334|x335)<=x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	static volatile uint32_t x340 = 4766U;
	static int32_t t84 = 59238488;

	t84 = (x337&((x338|x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -115;

	t85 = (x341&((x342|x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 1513515765657LLU;
	uint32_t x348 = 154832352U;
	int64_t t86 = -1357096412899LL;

	t86 = (x345&((x346|x347)<=x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint32_t x350 = 18479142U;
	int32_t x351 = 72176;
	int32_t t87 = 0;

	t87 = (x349&((x350|x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 992850LLU;
	int32_t x356 = -1;
	volatile int32_t t88 = -7344416;

	t88 = (x353&((x354|x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	int64_t x360 = INT64_MIN;
	uint32_t t89 = 12079388U;

	t89 = (x357&((x358|x359)<=x360));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	volatile int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MAX;

	t90 = (x361&((x362|x363)<=x364));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 1799268U;
	int16_t x367 = 0;
	uint16_t x368 = 1U;
	int32_t t91 = 867216;

	t91 = (x365&((x366|x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = INT64_MIN;
	static int8_t x372 = -1;
	int32_t t92 = 982556390;

	t92 = (x369&((x370|x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x374 = 239U;
	volatile uint64_t x375 = 33401792396613562LLU;
	int16_t x376 = INT16_MIN;
	int64_t t93 = 206331300626724LL;

	t93 = (x373&((x374|x375)<=x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	static uint8_t x379 = 38U;
	int64_t x380 = 2305448358302232884LL;

	t94 = (x377&((x378|x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = 52403920638508923LL;
	int64_t x383 = INT64_MIN;
	volatile uint32_t t95 = 13U;

	t95 = (x381&((x382|x383)<=x384));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MAX;
	volatile int32_t x388 = INT32_MIN;
	int64_t t96 = 28037149LL;

	t96 = (x385&((x386|x387)<=x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = UINT32_MAX;
	volatile uint64_t x391 = 2144063427LLU;
	volatile int8_t x392 = -11;
	int32_t t97 = 9412041;

	t97 = (x389&((x390|x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	volatile int32_t x395 = -100828;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = -3754;

	t98 = (x393&((x394|x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -39938947969LL;
	uint64_t x399 = UINT64_MAX;
	uint8_t x400 = 2U;
	int64_t t99 = 56012LL;

	t99 = (x397&((x398|x399)<=x400));

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

