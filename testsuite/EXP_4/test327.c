#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x9 = 50U;
int64_t x20 = 18593845LL;
volatile int64_t t4 = -970889LL;
volatile uint32_t t7 = 1236U;
int8_t x38 = 0;
uint64_t x39 = UINT64_MAX;
volatile int8_t x47 = -1;
static volatile uint64_t t14 = 4433768570168662304LLU;
int8_t x69 = INT8_MAX;
static volatile int16_t x71 = -1;
static uint16_t x77 = 13809U;
int16_t x78 = INT16_MIN;
volatile int32_t x82 = 134121377;
static int64_t x93 = -556714907660154LL;
static int8_t x94 = INT8_MIN;
volatile int8_t x95 = INT8_MIN;
static int16_t x100 = INT16_MAX;
uint8_t x106 = 43U;
uint64_t x109 = UINT64_MAX;
uint32_t t27 = 54562088U;
int16_t x123 = INT16_MIN;
int64_t x125 = 2LL;
static int64_t t29 = -8LL;
static volatile uint64_t t30 = 1495LLU;
int8_t x134 = INT8_MIN;
int64_t x138 = 1LL;
int64_t x147 = INT64_MIN;
static int64_t t33 = -136941849407022600LL;
int8_t x154 = INT8_MIN;
volatile uint8_t x162 = 26U;
uint64_t x164 = 158092825930789LLU;
int16_t x166 = 13829;
static int64_t t39 = -399LL;
static volatile int64_t x185 = INT64_MIN;
int32_t x187 = 6071;
uint16_t x190 = UINT16_MAX;
uint8_t x192 = 41U;
static volatile int64_t x203 = INT64_MIN;
static uint16_t x210 = 78U;
static uint8_t x213 = UINT8_MAX;
int32_t t45 = 210233456;
volatile int16_t x217 = -29;
static uint64_t x220 = UINT64_MAX;
static int64_t x222 = INT64_MIN;
uint16_t x225 = UINT16_MAX;
volatile int8_t x226 = INT8_MIN;
uint64_t x227 = 10189563612761395LLU;
volatile int8_t x228 = -7;
volatile uint64_t t48 = 61382942497712045LLU;
volatile uint64_t x235 = 8344155801147LLU;
int64_t x251 = 200LL;
volatile int16_t x254 = 107;
static int32_t x255 = -938;
int16_t x258 = INT16_MIN;
uint32_t x263 = 13073U;
volatile int64_t x264 = -1LL;
volatile int64_t t56 = -364111LL;
uint8_t x270 = UINT8_MAX;
int64_t x274 = INT64_MIN;
int64_t t58 = 198655396533806LL;
volatile int64_t t59 = 18624LL;
volatile uint64_t x285 = 105985LLU;
volatile uint8_t x287 = UINT8_MAX;
uint16_t x289 = UINT16_MAX;
uint32_t x291 = 103686631U;
static uint16_t x294 = 392U;
int32_t t63 = -5;
uint8_t x298 = 10U;
static uint16_t x299 = 7726U;
int16_t x323 = 11883;
int16_t x328 = 89;
static uint64_t t70 = 89226787293517484LLU;
uint16_t x333 = UINT16_MAX;
static volatile int32_t x340 = INT32_MIN;
int32_t x343 = INT32_MIN;
int64_t x347 = -1LL;
uint8_t x350 = 9U;
static volatile int32_t t75 = -86;
int8_t x355 = INT8_MAX;
uint32_t t76 = 25U;
int32_t x357 = -2;
int32_t x363 = -14441529;
static int8_t x364 = INT8_MIN;
volatile int32_t x367 = INT32_MIN;
static uint64_t x368 = UINT64_MAX;
int8_t x370 = INT8_MIN;
int64_t x371 = INT64_MIN;
uint8_t x382 = 0U;
volatile uint32_t x391 = 306304109U;
int32_t x395 = -1;
static volatile uint32_t t84 = 14400205U;
uint16_t x400 = UINT16_MAX;
int16_t x416 = INT16_MIN;
int8_t x417 = 14;
static int64_t x426 = -1LL;
int32_t x428 = INT32_MIN;
static volatile int64_t t89 = -12LL;
static uint32_t x430 = 1404520726U;
int32_t t91 = -3602;
uint32_t x449 = 171501U;
static uint64_t x456 = 1130956389565529812LLU;
static int8_t x475 = 0;
static int32_t x480 = INT32_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MAX;
	int64_t t0 = 6579303543981LL;

	t0 = (x1-(x2^(x3-x4)));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = -2059512561057322LL;
	uint16_t x8 = 23U;
	uint64_t t1 = 3914052LLU;

	t1 = (x5-(x6^(x7-x8)));

	if (t1 != 9221312524293718464LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 344U;
	uint32_t x11 = 1U;
	uint8_t x12 = 24U;
	static volatile uint32_t t2 = 12824589U;

	t2 = (x9-(x10^(x11-x12)));

	if (t2 != 385U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MAX;
	int32_t x15 = 11927482;
	uint64_t x16 = 1890785402569170189LLU;
	uint64_t t3 = 7344718886LLU;

	t3 = (x13-(x14^(x15-x16)));

	if (t3 != 1890785402557242925LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 5775942U;
	int32_t x18 = INT32_MIN;
	static int16_t x19 = -1;

	t4 = (x17-(x18^(x19-x20)));

	if (t4 != -2123113860LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 14260811;
	uint8_t x22 = 112U;
	volatile int8_t x23 = 13;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = -1;

	t5 = (x21-(x22^(x23-x24)));

	if (t5 != 14260685) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	int64_t x30 = INT64_MAX;
	static int16_t x31 = -1;
	static int64_t x32 = -1083023031298114034LL;
	static volatile int64_t t6 = 30638LL;

	t6 = (x29-(x30^(x31-x32)));

	if (t6 != -8140349005556661775LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	static int16_t x34 = 0;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = 1;

	t7 = (x33-(x34^(x35-x36)));

	if (t7 != 4294967041U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 235LLU;
	uint64_t x40 = 10LLU;
	volatile uint64_t t8 = 993LLU;

	t8 = (x37-(x38^(x39-x40)));

	if (t8 != 246LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	volatile int64_t x44 = 7886366605153491LL;
	int64_t t9 = 1703196657027400LL;

	t9 = (x41-(x42^(x43-x44)));

	if (t9 != -7886364457669804LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -393829694;
	int16_t x46 = 1510;
	volatile int32_t x48 = -1;
	int32_t t10 = -487753047;

	t10 = (x45-(x46^(x47-x48)));

	if (t10 != -393831204) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = -171LL;
	static uint32_t x50 = 98314U;
	int32_t x51 = 155;
	int16_t x52 = -1;
	static int64_t t11 = -437347LL;

	t11 = (x49-(x50^(x51-x52)));

	if (t11 != -98625LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = -1;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MAX;
	static volatile int64_t x56 = 1716212672582804LL;
	int64_t t12 = -6LL;

	t12 = (x53-(x54^(x55-x56)));

	if (t12 != 1716211373747179LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile int32_t x58 = 7;
	int64_t x59 = 4343209717324899LL;
	volatile int64_t x60 = 1127501381696LL;
	static int64_t t13 = 371835632422297619LL;

	t13 = (x57-(x58^(x59-x60)));

	if (t13 != -4342082215877669LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -11506785;
	volatile int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	int8_t x64 = 1;

	t14 = (x61-(x62^(x63-x64)));

	if (t14 != 18446744071550561185LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int8_t x66 = -7;
	uint64_t x67 = 1240LLU;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t15 = 19402LLU;

	t15 = (x65-(x66^(x67-x68)));

	if (t15 != 18446744071562003680LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -23;
	uint16_t x72 = 292U;
	int32_t t16 = 54678011;

	t16 = (x69-(x70^(x71-x72)));

	if (t16 != -179) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -9147394495576109LL;
	int32_t x74 = -1;
	volatile int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;
	static volatile int64_t t17 = 8967070486092561LL;

	t17 = (x73-(x74^(x75-x76)));

	if (t17 != -9147394495575981LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x79 = -1880;
	int16_t x80 = INT16_MAX;
	volatile int32_t t18 = -214181;

	t18 = (x77-(x78^(x79-x80)));

	if (t18 != -49848) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 47U;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 59U;
	static volatile int32_t t19 = -195;

	t19 = (x81-(x82^(x83-x84)));

	if (t19 != 134121291) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MIN;
	static uint32_t x88 = 1337U;
	volatile int64_t t20 = -24064516017LL;

	t20 = (x85-(x86^(x87-x88)));

	if (t20 != -2147482311LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	int16_t x90 = INT16_MIN;
	volatile int8_t x91 = INT8_MIN;
	int32_t x92 = -25657;
	int32_t t21 = 78;

	t21 = (x89-(x90^(x91-x92)));

	if (t21 != 7238) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x96 = -1LL;
	int64_t t22 = -130723580LL;

	t22 = (x93-(x94^(x95-x96)));

	if (t22 != -556714907660155LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 2;
	int32_t x98 = -8041721;
	int16_t x99 = INT16_MAX;
	static volatile int32_t t23 = -49517007;

	t23 = (x97-(x98^(x99-x100)));

	if (t23 != 8041723) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	int16_t x104 = -3;
	volatile uint64_t t24 = 4LLU;

	t24 = (x101-(x102^(x103-x104)));

	if (t24 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	int16_t x107 = 299;
	volatile uint64_t x108 = 41803657LLU;
	volatile uint64_t t25 = 447558413176819LLU;

	t25 = (x105-(x106^(x107-x108)));

	if (t25 != 41803382LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 540430919LLU;
	static uint8_t x111 = UINT8_MAX;
	static int64_t x112 = -37195694339LL;
	uint64_t t26 = 260713556349104750LLU;

	t26 = (x109-(x110^(x111-x112)));

	if (t26 != 18446744037047201722LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1;
	uint32_t x114 = 808U;
	int32_t x115 = -1;
	int16_t x116 = INT16_MIN;

	t27 = (x113-(x114^(x115-x116)));

	if (t27 != 4294935336U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	static uint16_t x124 = UINT16_MAX;
	static volatile int32_t t28 = 173;

	t28 = (x121-(x122^(x123-x124)));

	if (t28 != -2147385473) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MIN;

	t29 = (x125-(x126^(x127-x128)));

	if (t29 != 131LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = UINT64_MAX;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MIN;

	t30 = (x129-(x130^(x131-x132)));

	if (t30 != 32896LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x133 = 7651LLU;
	int32_t x135 = -1;
	static int8_t x136 = -1;
	uint64_t t31 = 1726291404978677LLU;

	t31 = (x133-(x134^(x135-x136)));

	if (t31 != 7779LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	uint8_t x139 = 12U;
	static int8_t x140 = 2;
	int64_t t32 = -1LL;

	t32 = (x137-(x138^(x139-x140)));

	if (t32 != -12LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	volatile int32_t x146 = INT32_MIN;
	volatile int8_t x148 = 0;

	t33 = (x145-(x146^(x147-x148)));

	if (t33 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int32_t x150 = INT32_MIN;
	uint16_t x151 = 1U;
	int8_t x152 = 1;
	uint64_t t34 = 11520750134357692LLU;

	t34 = (x149-(x150^(x151-x152)));

	if (t34 != 2147483647LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x155 = 6079686;
	int8_t x156 = INT8_MAX;
	volatile uint32_t t35 = 2064508494U;

	t35 = (x153-(x154^(x155-x156)));

	if (t35 != 6079544U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -5;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = 52;
	static uint32_t x160 = 1115923955U;
	uint32_t t36 = 145U;

	t36 = (x157-(x158^(x159-x160)));

	if (t36 != 3263407546U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	uint64_t t37 = 51989LLU;

	t37 = (x161-(x162^(x163-x164)));

	if (t37 != 9223530129680706878LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 7U;
	int16_t x167 = 57;
	int16_t x168 = INT16_MAX;
	static uint32_t t38 = 890U;

	t38 = (x165-(x166^(x167-x168)));

	if (t38 != 18888U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 12953786614578866LL;
	int64_t x174 = -1LL;
	static int8_t x175 = INT8_MAX;
	uint32_t x176 = 133251341U;

	t39 = (x173-(x174^(x175-x176)));

	if (t39 != 12953790776294949LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x186 = -3;
	volatile int64_t x188 = -1LL;
	int64_t t40 = -3028961971986LL;

	t40 = (x185-(x186^(x187-x188)));

	if (t40 != -9223372036854769733LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	volatile int64_t t41 = 40265869LL;

	t41 = (x189-(x190^(x191-x192)));

	if (t41 != 9223372036854742998LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = INT16_MIN;
	uint16_t x194 = 169U;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = 0LL;
	int64_t t42 = 16178911LL;

	t42 = (x193-(x194^(x195-x196)));

	if (t42 != -98134LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = INT64_MIN;
	int64_t x202 = 1LL;
	int16_t x204 = -1;
	volatile int64_t t43 = -454340LL;

	t43 = (x201-(x202^(x203-x204)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -165;
	int32_t x211 = 27943634;
	static int16_t x212 = 16336;
	int32_t t44 = -1;

	t44 = (x209-(x210^(x211-x212)));

	if (t44 != -27927537) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x214 = 27U;
	int8_t x215 = -1;
	uint16_t x216 = UINT16_MAX;

	t45 = (x213-(x214^(x215-x216)));

	if (t45 != 65764) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x218 = 31580LLU;
	int16_t x219 = INT16_MIN;
	volatile uint64_t t46 = 2696089704810405LLU;

	t46 = (x217-(x218^(x219-x220)));

	if (t46 != 1158LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile int8_t x224 = INT8_MIN;
	int64_t t47 = 61732539LL;

	t47 = (x221-(x222^(x223-x224)));

	if (t47 != -127LL) { NG(); } else { ; }
	
}

void f48(void) {


	t48 = (x225-(x226^(x227-x228)));

	if (t48 != 10189563612826949LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 487082560440LLU;
	volatile uint8_t x234 = UINT8_MAX;
	volatile int16_t x236 = INT16_MAX;
	uint64_t t49 = 1083LLU;

	t49 = (x233-(x234^(x235-x236)));

	if (t49 != 18446736216636343541LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	int64_t x240 = INT64_MAX;
	int64_t t50 = 26443800723198LL;

	t50 = (x237-(x238^(x239-x240)));

	if (t50 != -9223372036854710145LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = 0;
	static int32_t x242 = -1;
	volatile int8_t x243 = 1;
	static int8_t x244 = INT8_MIN;
	int32_t t51 = 0;

	t51 = (x241-(x242^(x243-x244)));

	if (t51 != 130) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -1;
	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 6U;
	int32_t x248 = -10389;
	uint64_t t52 = 1243890801LLU;

	t52 = (x245-(x246^(x247-x248)));

	if (t52 != 10395LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = 14529741428639653LLU;
	volatile int64_t x250 = INT64_MIN;
	int32_t x252 = INT32_MAX;
	volatile uint64_t t53 = 512785105183LLU;

	t53 = (x249-(x250^(x251-x252)));

	if (t53 != 9237901780430898908LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	int64_t t54 = -10343LL;

	t54 = (x253-(x254^(x255-x256)));

	if (t54 != -9223372036854774973LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = 28U;
	int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MAX;
	int64_t t55 = -1923164034446117574LL;

	t55 = (x257-(x258^(x259-x260)));

	if (t55 != 9223372036854743196LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 2U;
	volatile int64_t x262 = -1719428492418582LL;

	t56 = (x261-(x262^(x263-x264)));

	if (t56 != 1719428492422410LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x271 = 31;
	int16_t x272 = -1;
	static volatile int32_t t57 = 1;

	t57 = (x269-(x270^(x271-x272)));

	if (t57 != 32) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MAX;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -20;

	t58 = (x273-(x274^(x275-x276)));

	if (t58 != -9223372034707292053LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x277 = INT64_MIN;
	int32_t x278 = -1;
	volatile int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;

	t59 = (x277-(x278^(x279-x280)));

	if (t59 != -2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MIN;
	static volatile int64_t x282 = 6951933LL;
	int64_t x283 = -316192777673LL;
	int16_t x284 = INT16_MIN;
	int64_t t60 = -2LL;

	t60 = (x281-(x282^(x283-x284)));

	if (t60 != 316198352438LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x286 = 3U;
	volatile uint32_t x288 = 107226U;
	uint64_t t61 = 220027669665515516LLU;

	t61 = (x285-(x286^(x287-x288)));

	if (t61 != 18446744069414797275LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x290 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	uint32_t t62 = 1U;

	t62 = (x289-(x290^(x291-x292)));

	if (t62 != 4191346023U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -4901;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = -1;

	t63 = (x293-(x294^(x295-x296)));

	if (t63 != -5037) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x300 = -1LL;
	int64_t t64 = -92180005954810LL;

	t64 = (x297-(x298^(x299-x300)));

	if (t64 != 4294959578LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -17;
	static volatile uint64_t x310 = 584324537278052LLU;
	volatile uint16_t x311 = UINT16_MAX;
	int32_t x312 = 276;
	static uint64_t t65 = 10819761789737LLU;

	t65 = (x309-(x310^(x311-x312)));

	if (t65 != 18446159749172256608LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = 6909;
	volatile int64_t x314 = -104832389243903308LL;
	int32_t x315 = INT32_MIN;
	volatile int32_t x316 = INT32_MIN;
	int64_t t66 = -410955257585367602LL;

	t66 = (x313-(x314^(x315-x316)));

	if (t66 != 104832389243910217LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x317 = 2U;
	static int64_t x318 = INT64_MIN;
	int16_t x319 = INT16_MAX;
	static int8_t x320 = 10;
	volatile int64_t t67 = -1170616017253494LL;

	t67 = (x317-(x318^(x319-x320)));

	if (t67 != 9223372036854743053LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = -219308891142818LL;
	int32_t x324 = INT32_MAX;
	static volatile int64_t t68 = 18LL;

	t68 = (x321-(x322^(x323-x324)));

	if (t68 != -219303906552627LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x325 = 176752U;
	int8_t x326 = 1;
	int8_t x327 = -26;
	volatile uint32_t t69 = 125673U;

	t69 = (x325-(x326^(x327-x328)));

	if (t69 != 176868U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = 114529383550LL;
	uint64_t x330 = 7889LLU;
	int8_t x331 = -22;
	uint8_t x332 = 2U;

	t70 = (x329-(x330^(x331-x332)));

	if (t70 != 114529391429LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x334 = -1LL;
	volatile int8_t x335 = INT8_MIN;
	static int16_t x336 = INT16_MAX;
	int64_t t71 = -63536536108LL;

	t71 = (x333-(x334^(x335-x336)));

	if (t71 != 32641LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x337 = 269706U;
	int16_t x338 = INT16_MAX;
	int64_t x339 = -41519646511642LL;
	int64_t t72 = 3839106843251LL;

	t72 = (x337-(x338^(x339-x340)));

	if (t72 != 41517499321201LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = -1397041;
	uint32_t x344 = 2929815U;
	uint32_t t73 = 646660U;

	t73 = (x341-(x342^(x343-x344)));

	if (t73 != 2143689305U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -1;
	volatile int16_t x346 = INT16_MIN;
	int8_t x348 = 18;
	int64_t t74 = 4995096110605606LL;

	t74 = (x345-(x346^(x347-x348)));

	if (t74 != -32750LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x349 = 41U;
	int8_t x351 = -1;
	volatile int32_t x352 = 1846849;

	t75 = (x349-(x350^(x351-x352)));

	if (t75 != 1846898) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 101161663U;
	volatile int8_t x354 = -29;
	int16_t x356 = INT16_MAX;

	t76 = (x353-(x354^(x355-x356)));

	if (t76 != 101129052U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MIN;
	static int16_t x360 = 0;
	static int64_t t77 = 238LL;

	t77 = (x357-(x358^(x359-x360)));

	if (t77 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = 212LL;
	int8_t x362 = INT8_MAX;
	volatile int64_t t78 = 22051LL;

	t78 = (x361-(x362^(x363-x364)));

	if (t78 != 14441628LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	volatile uint64_t t79 = 34077884678643104LLU;

	t79 = (x365-(x366^(x367-x368)));

	if (t79 != 2147450881LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = 8;
	int16_t x372 = INT16_MIN;
	static int64_t t80 = -13805LL;

	t80 = (x369-(x370^(x371-x372)));

	if (t80 != -9223372036854742904LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x377 = 16;
	static uint64_t x378 = 0LLU;
	int16_t x379 = 1423;
	static uint16_t x380 = 165U;
	volatile uint64_t t81 = 2211126665908528LLU;

	t81 = (x377-(x378^(x379-x380)));

	if (t81 != 18446744073709550374LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = 0U;
	uint8_t x383 = 87U;
	volatile int64_t x384 = 2172353320713089LL;
	volatile int64_t t82 = -5873468415539846LL;

	t82 = (x381-(x382^(x383-x384)));

	if (t82 != 2172353320713002LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x389 = 348820876U;
	static uint16_t x390 = UINT16_MAX;
	int64_t x392 = 1LL;
	int64_t t83 = -468LL;

	t83 = (x389-(x390^(x391-x392)));

	if (t83 != 42559993LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 13U;
	int16_t x394 = 1;
	int32_t x396 = INT32_MAX;

	t84 = (x393-(x394^(x395-x396)));

	if (t84 != 2147483660U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	volatile int64_t x399 = 1022878627577LL;
	static int64_t t85 = 4094556LL;

	t85 = (x397-(x398^(x399-x400)));

	if (t85 != 1020731078278LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x409 = 11310173U;
	static uint8_t x410 = 0U;
	int16_t x411 = -1;
	static int64_t x412 = INT64_MIN;
	int64_t t86 = 750LL;

	t86 = (x409-(x410^(x411-x412)));

	if (t86 != -9223372036843465634LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 13827U;
	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	static volatile int64_t t87 = 1LL;

	t87 = (x413-(x414^(x415-x416)));

	if (t87 != -9223372036854729085LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x418 = INT32_MAX;
	int8_t x419 = INT8_MAX;
	int32_t x420 = -843;
	int32_t t88 = 1554;

	t88 = (x417-(x418^(x419-x420)));

	if (t88 != -2147482663) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MIN;
	static int8_t x427 = INT8_MIN;

	t89 = (x425-(x426^(x427-x428)));

	if (t89 != 2147483393LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x429 = 913U;
	static uint32_t x431 = UINT32_MAX;
	int32_t x432 = INT32_MIN;
	uint32_t t90 = 27679097U;

	t90 = (x429-(x430^(x431-x432)));

	if (t90 != 3552005288U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x433 = UINT16_MAX;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	int16_t x436 = -826;

	t91 = (x433-(x434^(x435-x436)));

	if (t91 != -2147386171) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x441 = 0U;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 1;
	int8_t x444 = INT8_MAX;
	int32_t t92 = 1;

	t92 = (x441-(x442^(x443-x444)));

	if (t92 != -2147483522) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = 1U;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = 7553585U;
	int16_t x448 = INT16_MIN;
	static volatile uint32_t t93 = 49U;

	t93 = (x445-(x446^(x447-x448)));

	if (t93 != 7585232U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x450 = 5LLU;
	int16_t x451 = -1;
	static int32_t x452 = INT32_MAX;
	volatile uint64_t t94 = 9089329985875246LLU;

	t94 = (x449-(x450^(x451-x452)));

	if (t94 != 2147655144LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = INT64_MAX;
	int16_t x455 = INT16_MIN;
	volatile uint64_t t95 = 13863211218LLU;

	t95 = (x453-(x454^(x455-x456)));

	if (t95 != 8092415647289278764LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = INT64_MIN;
	volatile uint64_t x458 = 47359865678LLU;
	int16_t x459 = -1;
	int32_t x460 = -1143;
	volatile uint64_t t96 = 3844931LLU;

	t96 = (x457-(x458^(x459-x460)));

	if (t96 != 9223371989494909128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = INT64_MIN;
	int8_t x470 = -1;
	int16_t x471 = 7396;
	int16_t x472 = -1;
	int64_t t97 = 618130LL;

	t97 = (x469-(x470^(x471-x472)));

	if (t97 != -9223372036854768410LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x473 = INT32_MIN;
	int16_t x474 = INT16_MAX;
	volatile uint32_t x476 = UINT32_MAX;
	uint32_t t98 = 40U;

	t98 = (x473-(x474^(x475-x476)));

	if (t98 != 2147450882U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x477 = 3U;
	int64_t x478 = INT64_MIN;
	int8_t x479 = INT8_MIN;
	static int64_t t99 = 16848716897LL;

	t99 = (x477-(x478^(x479-x480)));

	if (t99 != 9223372034707292291LL) { NG(); } else { ; }
	
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

