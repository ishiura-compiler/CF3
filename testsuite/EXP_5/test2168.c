#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
uint16_t x4 = 0U;
int32_t t1 = 0;
static volatile uint16_t x10 = 45U;
uint16_t x12 = 281U;
int32_t t2 = 0;
uint8_t x21 = 14U;
volatile int16_t x32 = 0;
static int32_t x40 = -1;
static int16_t x41 = 5;
int16_t x43 = -7;
int32_t t12 = -7733;
static uint32_t x56 = 42122362U;
int32_t t16 = -61393086;
int8_t x77 = INT8_MIN;
volatile int32_t t19 = 10258509;
volatile uint8_t x85 = 1U;
int16_t x87 = 8;
volatile uint64_t x88 = UINT64_MAX;
static int32_t x91 = -979;
int8_t x97 = -1;
volatile int32_t x105 = 0;
int64_t x116 = INT64_MIN;
int16_t x117 = INT16_MAX;
volatile int64_t x119 = -1LL;
int64_t x120 = INT64_MIN;
volatile int32_t t30 = -10288584;
int8_t x125 = 7;
int8_t x131 = INT8_MIN;
int32_t t32 = 1779543;
int64_t x135 = -23420806LL;
int64_t x137 = INT64_MIN;
static uint8_t x139 = 3U;
volatile int64_t x140 = INT64_MIN;
int32_t x141 = 193987;
int16_t x144 = -1;
static int64_t x146 = -1LL;
volatile int32_t t36 = 1;
int32_t x154 = INT32_MIN;
volatile int32_t t39 = -128934951;
int16_t x162 = -1;
volatile int16_t x164 = -1;
int64_t x166 = -2091920011443LL;
static uint64_t x170 = 171391797354664916LLU;
uint64_t x172 = UINT64_MAX;
int32_t t42 = 484935079;
uint64_t x174 = UINT64_MAX;
uint64_t x177 = 229938211LLU;
int32_t t44 = -22146174;
int64_t x183 = -23469LL;
int32_t x184 = -81764037;
uint32_t x186 = 0U;
uint64_t x188 = 260LLU;
int8_t x192 = -1;
volatile int32_t t48 = 1;
static int8_t x202 = -1;
static int64_t x203 = INT64_MIN;
static int32_t x210 = -1;
int32_t t52 = 2554;
volatile int32_t t53 = -1;
int32_t t55 = 1232;
int8_t x226 = 2;
static int8_t x228 = 13;
int32_t t56 = -27186;
static int64_t x247 = -502795258675170LL;
static volatile int32_t t61 = 18969504;
volatile int8_t x251 = INT8_MIN;
static int64_t x263 = INT64_MIN;
int8_t x264 = 1;
int32_t x267 = 6;
int8_t x273 = 40;
static int64_t x277 = INT64_MIN;
volatile int64_t x279 = -25164530524LL;
uint64_t x286 = 3714170410863236949LLU;
int32_t t74 = 0;
int16_t x302 = INT16_MIN;
int64_t x305 = 50280215848LL;
static uint8_t x308 = UINT8_MAX;
volatile uint32_t x310 = 86947442U;
static int32_t x327 = -1;
static volatile int32_t t81 = 252072320;
int8_t x329 = -1;
uint32_t x332 = 62510U;
int64_t x345 = -57209LL;
int32_t t86 = -12353;
int32_t x358 = INT32_MIN;
uint16_t x359 = UINT16_MAX;
static int32_t t89 = -915887;
volatile int32_t t90 = 0;
int8_t x368 = -1;
uint8_t x369 = UINT8_MAX;
int32_t t92 = -37329380;
uint32_t x376 = 94U;
uint8_t x381 = 38U;
int8_t x382 = INT8_MAX;
int64_t x384 = -1090572LL;
int64_t x387 = -1LL;
uint32_t x388 = 101745803U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint16_t x2 = 123U;
	int32_t t0 = -875595;

	t0 = (x1<=((x2^x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	volatile int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;

	t1 = (x5<=((x6^x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MAX;

	t2 = (x9<=((x10^x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -626;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = -4;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -1393614;

	t3 = (x13<=((x14^x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1937690139555LL;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	int16_t x20 = 174;
	int32_t t4 = 48;

	t4 = (x17<=((x18^x19)&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 1U;
	static int16_t x23 = -4124;
	int8_t x24 = -32;
	volatile int32_t t5 = 42412;

	t5 = (x21<=((x22^x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 21648LL;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 605U;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -7885472;

	t6 = (x25<=((x26^x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MAX;
	int32_t x31 = 17826;
	volatile int32_t t7 = 1;

	t7 = (x29<=((x30^x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1137054705468LLU;
	static uint64_t x34 = 3LLU;
	uint32_t x35 = UINT32_MAX;
	static volatile int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -1;

	t8 = (x33<=((x34^x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	int16_t x38 = -1;
	int32_t x39 = INT32_MIN;
	static volatile int32_t t9 = 83261377;

	t9 = (x37<=((x38^x39)&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -102LL;
	int16_t x44 = 2;
	int32_t t10 = -854574381;

	t10 = (x41<=((x42^x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static uint8_t x46 = UINT8_MAX;
	static uint8_t x47 = 3U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 0;

	t11 = (x45<=((x46^x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static int32_t x50 = INT32_MAX;
	int16_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;

	t12 = (x49<=((x50^x51)&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 133LLU;
	int64_t x54 = 1700300336LL;
	uint32_t x55 = 19986522U;
	int32_t t13 = 975;

	t13 = (x53<=((x54^x55)&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = INT32_MIN;
	int32_t x58 = 21523862;
	static volatile int16_t x59 = -1;
	static uint8_t x60 = UINT8_MAX;
	int32_t t14 = 811676;

	t14 = (x57<=((x58^x59)&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = -1;
	volatile int16_t x63 = INT16_MAX;
	uint32_t x64 = 271492970U;
	int32_t t15 = 0;

	t15 = (x61<=((x62^x63)&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int16_t x66 = 11655;
	volatile int64_t x67 = INT64_MIN;
	volatile int32_t x68 = INT32_MAX;

	t16 = (x65<=((x66^x67)&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 5076U;
	static int16_t x70 = INT16_MAX;
	uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -306;

	t17 = (x69<=((x70^x71)&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint16_t x74 = 15953U;
	int8_t x75 = INT8_MAX;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -208;

	t18 = (x73<=((x74^x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MIN;
	int16_t x80 = 3573;

	t19 = (x77<=((x78^x79)&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	volatile int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MAX;
	uint8_t x84 = 3U;
	int32_t t20 = 63031291;

	t20 = (x81<=((x82^x83)&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x86 = 12065U;
	int32_t t21 = 38;

	t21 = (x85<=((x86^x87)&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MAX;
	uint8_t x90 = UINT8_MAX;
	int32_t x92 = -60559;
	volatile int32_t t22 = -3;

	t22 = (x89<=((x90^x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3630LLU;
	volatile uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -6240;

	t23 = (x93<=((x94^x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	int32_t x99 = 13310;
	static uint8_t x100 = UINT8_MAX;
	int32_t t24 = 34814969;

	t24 = (x97<=((x98^x99)&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int64_t x102 = -1802351343188287LL;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 0U;
	int32_t t25 = -3753026;

	t25 = (x101<=((x102^x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -26901129806LL;
	uint8_t x107 = UINT8_MAX;
	static int64_t x108 = -6721121LL;
	volatile int32_t t26 = 427588603;

	t26 = (x105<=((x106^x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = 0;
	int32_t x110 = INT32_MAX;
	int8_t x111 = -1;
	static uint8_t x112 = 5U;
	static volatile int32_t t27 = 3394838;

	t27 = (x109<=((x110^x111)&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 618676972178LLU;
	volatile uint64_t x114 = 2073LLU;
	int32_t x115 = INT32_MIN;
	int32_t t28 = 3225656;

	t28 = (x113<=((x114^x115)&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = UINT32_MAX;
	int32_t t29 = -8406862;

	t29 = (x117<=((x118^x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -4;
	volatile int8_t x122 = INT8_MIN;
	uint8_t x123 = 21U;
	uint16_t x124 = 1349U;

	t30 = (x121<=((x122^x123)&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 30955191791327LLU;
	static int16_t x127 = INT16_MAX;
	int8_t x128 = -1;
	int32_t t31 = 1;

	t31 = (x125<=((x126^x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	volatile int8_t x130 = INT8_MIN;
	int32_t x132 = -40;

	t32 = (x129<=((x130^x131)&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int16_t x134 = -1;
	volatile uint32_t x136 = 20477904U;
	static int32_t t33 = 1359970;

	t33 = (x133<=((x134^x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = -17LL;
	volatile int32_t t34 = 8067;

	t34 = (x137<=((x138^x139)&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = 0;
	int32_t t35 = 13277688;

	t35 = (x141<=((x142^x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 151U;
	uint32_t x147 = 196U;
	int64_t x148 = INT64_MAX;

	t36 = (x145<=((x146^x147)&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -18;
	static uint32_t x150 = 0U;
	int64_t x151 = INT64_MIN;
	static int64_t x152 = INT64_MIN;
	int32_t t37 = -67;

	t37 = (x149<=((x150^x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	volatile int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;
	static volatile int32_t t38 = -31201750;

	t38 = (x153<=((x154^x155)&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 1;
	int8_t x158 = INT8_MAX;
	static uint16_t x159 = 85U;
	static uint32_t x160 = 370883U;

	t39 = (x157<=((x158^x159)&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 11;
	int8_t x163 = -22;
	static volatile int32_t t40 = -940485;

	t40 = (x161<=((x162^x163)&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	uint32_t x168 = 2U;
	int32_t t41 = -89808862;

	t41 = (x165<=((x166^x167)&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 41711137093535786LL;
	uint8_t x171 = 1U;

	t42 = (x169<=((x170^x171)&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MAX;
	volatile uint8_t x175 = UINT8_MAX;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = 12838;

	t43 = (x173<=((x174^x175)&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MAX;
	static int32_t x180 = INT32_MIN;

	t44 = (x177<=((x178^x179)&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = 128;
	int64_t x182 = INT64_MIN;
	int32_t t45 = 3;

	t45 = (x181<=((x182^x183)&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	static uint32_t x187 = 234821981U;
	volatile int32_t t46 = -61808701;

	t46 = (x185<=((x186^x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 5347062741236914114LLU;
	int32_t x190 = INT32_MAX;
	static volatile uint16_t x191 = 823U;
	int32_t t47 = 59327619;

	t47 = (x189<=((x190^x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	static volatile int64_t x194 = INT64_MIN;
	int64_t x195 = 4219LL;
	int8_t x196 = INT8_MAX;

	t48 = (x193<=((x194^x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	volatile int16_t x198 = -1;
	int32_t x199 = -1;
	uint32_t x200 = 14U;
	static int32_t t49 = 695;

	t49 = (x197<=((x198^x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 1;
	volatile int64_t x204 = 819898736610036770LL;
	volatile int32_t t50 = 304815837;

	t50 = (x201<=((x202^x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MAX;
	int32_t x206 = -736632078;
	int32_t x207 = -1;
	int8_t x208 = INT8_MAX;
	static int32_t t51 = 0;

	t51 = (x205<=((x206^x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	int64_t x211 = -1LL;
	int32_t x212 = 1;

	t52 = (x209<=((x210^x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 1119252844U;
	volatile int8_t x214 = -31;
	volatile int32_t x215 = 7906447;
	volatile int64_t x216 = 1671LL;

	t53 = (x213<=((x214^x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -37202108;
	uint64_t x218 = 16861541322LLU;
	int32_t x219 = 0;
	int16_t x220 = -14258;
	int32_t t54 = -253423;

	t54 = (x217<=((x218^x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int64_t x222 = -245934LL;
	static uint16_t x223 = 0U;
	static volatile int64_t x224 = INT64_MAX;

	t55 = (x221<=((x222^x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 1127;
	int16_t x227 = -1;

	t56 = (x225<=((x226^x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = 6468809LLU;
	static int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -7278;

	t57 = (x229<=((x230^x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -10;
	int64_t x234 = INT64_MIN;
	volatile int16_t x235 = INT16_MIN;
	uint16_t x236 = 31476U;
	volatile int32_t t58 = 349;

	t58 = (x233<=((x234^x235)&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -1;
	int16_t x240 = -1754;
	int32_t t59 = 112;

	t59 = (x237<=((x238^x239)&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	uint8_t x242 = 1U;
	uint64_t x243 = 553436184408740LLU;
	static int64_t x244 = 617825360475873LL;
	static volatile int32_t t60 = -1;

	t60 = (x241<=((x242^x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1U;
	static int32_t x246 = INT32_MAX;
	int8_t x248 = INT8_MIN;

	t61 = (x245<=((x246^x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 909667706LL;
	int16_t x250 = -416;
	static uint16_t x252 = UINT16_MAX;
	static int32_t t62 = -10;

	t62 = (x249<=((x250^x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint32_t x254 = UINT32_MAX;
	volatile int16_t x255 = -3;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 1;

	t63 = (x253<=((x254^x255)&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 54381733834698192LLU;
	static uint32_t x258 = 66U;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = 0U;
	volatile int32_t t64 = -12266544;

	t64 = (x257<=((x258^x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	uint8_t x262 = 22U;
	int32_t t65 = -3477101;

	t65 = (x261<=((x262^x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 9LLU;
	int32_t x266 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -1625;

	t66 = (x265<=((x266^x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 12588876U;
	static uint8_t x270 = UINT8_MAX;
	int8_t x271 = INT8_MAX;
	int64_t x272 = INT64_MAX;
	volatile int32_t t67 = -240590;

	t67 = (x269<=((x270^x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	static volatile int64_t x275 = -1LL;
	uint16_t x276 = 2U;
	volatile int32_t t68 = 0;

	t68 = (x273<=((x274^x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1279;
	int64_t x280 = 2176325546680444LL;
	int32_t t69 = 3;

	t69 = (x277<=((x278^x279)&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	static int16_t x283 = INT16_MAX;
	static volatile int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -19312483;

	t70 = (x281<=((x282^x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	int8_t x287 = INT8_MIN;
	static uint16_t x288 = 912U;
	volatile int32_t t71 = 63606635;

	t71 = (x285<=((x286^x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 63348634306773837LL;
	int64_t x290 = INT64_MAX;
	static int64_t x291 = 1861269780221371055LL;
	int16_t x292 = INT16_MIN;
	static int32_t t72 = -107774;

	t72 = (x289<=((x290^x291)&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int8_t x294 = 0;
	volatile uint8_t x295 = UINT8_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 1;

	t73 = (x293<=((x294^x295)&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -24LL;
	uint32_t x298 = 53070U;
	int16_t x299 = 10679;
	volatile uint8_t x300 = 12U;

	t74 = (x297<=((x298^x299)&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	uint64_t x304 = 5088023LLU;
	static volatile int32_t t75 = 1;

	t75 = (x301<=((x302^x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = 8U;
	int8_t x307 = -58;
	int32_t t76 = 0;

	t76 = (x305<=((x306^x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 590357542U;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 19784185251LLU;
	volatile int32_t t77 = 1488986;

	t77 = (x309<=((x310^x311)&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	static volatile int64_t x314 = INT64_MIN;
	static int16_t x315 = INT16_MAX;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = 0;

	t78 = (x313<=((x314^x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -1LL;
	static int32_t x318 = INT32_MIN;
	static int8_t x319 = -23;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -39047;

	t79 = (x317<=((x318^x319)&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int32_t x322 = -1;
	int16_t x323 = INT16_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 1;

	t80 = (x321<=((x322^x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	uint8_t x326 = 2U;
	int8_t x328 = -1;

	t81 = (x325<=((x326^x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x330 = 83U;
	int16_t x331 = INT16_MAX;
	int32_t t82 = 7;

	t82 = (x329<=((x330^x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 8054U;
	static uint16_t x334 = 16U;
	uint8_t x335 = 38U;
	static int8_t x336 = INT8_MIN;
	static volatile int32_t t83 = -909;

	t83 = (x333<=((x334^x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = 2413;
	int16_t x338 = 1;
	int8_t x339 = -1;
	int16_t x340 = 760;
	int32_t t84 = 370;

	t84 = (x337<=((x338^x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 5328901710698326174LLU;
	int32_t x342 = INT32_MAX;
	int64_t x343 = -23818883018LL;
	volatile uint64_t x344 = 11518886100742229LLU;
	volatile int32_t t85 = 1;

	t85 = (x341<=((x342^x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = 10429337542151LL;
	uint32_t x347 = UINT32_MAX;
	int16_t x348 = INT16_MIN;

	t86 = (x345<=((x346^x347)&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1756439018024723LL;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = 1;
	volatile int32_t t87 = -959;

	t87 = (x349<=((x350^x351)&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	uint32_t x356 = 3886U;
	int32_t t88 = 23582;

	t88 = (x353<=((x354^x355)&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	static int16_t x360 = INT16_MIN;

	t89 = (x357<=((x358^x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 495U;
	volatile uint8_t x362 = 3U;
	volatile int16_t x363 = -9108;
	uint16_t x364 = 413U;

	t90 = (x361<=((x362^x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MAX;
	int8_t x366 = -14;
	int64_t x367 = INT64_MIN;
	static volatile int32_t t91 = 64;

	t91 = (x365<=((x366^x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MAX;
	volatile int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;

	t92 = (x369<=((x370^x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	int32_t t93 = -3310553;

	t93 = (x373<=((x374^x375)&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int32_t x378 = 24450960;
	volatile uint16_t x379 = 33U;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 14;

	t94 = (x377<=((x378^x379)&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x383 = -1;
	static int32_t t95 = 148;

	t95 = (x381<=((x382^x383)&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x386 = INT8_MIN;
	volatile int32_t t96 = -1414;

	t96 = (x385<=((x386^x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	static int16_t x391 = -1;
	int32_t x392 = INT32_MAX;
	static volatile int32_t t97 = 52893836;

	t97 = (x389<=((x390^x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = 13682U;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t x396 = -1;
	volatile int32_t t98 = -573;

	t98 = (x393<=((x394^x395)&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MAX;
	static int64_t x398 = -18LL;
	static volatile uint64_t x399 = 48661253376683LLU;
	static uint32_t x400 = 5330511U;
	int32_t t99 = 122;

	t99 = (x397<=((x398^x399)&x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

