#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int32_t x6 = INT32_MAX;
int32_t t1 = -407;
int64_t x11 = INT64_MIN;
int32_t x13 = INT32_MIN;
volatile int16_t x16 = INT16_MIN;
uint32_t x21 = 1860498204U;
volatile int16_t x23 = -1;
int32_t t5 = 2760256;
int64_t x26 = 985913327LL;
uint64_t x28 = 64759079473232LLU;
int64_t x31 = INT64_MAX;
static int32_t t7 = 9097403;
volatile uint8_t x34 = 27U;
volatile int32_t t8 = 0;
volatile int64_t x37 = INT64_MAX;
volatile int32_t t9 = -14;
static int8_t x44 = INT8_MAX;
uint16_t x46 = 799U;
uint64_t x48 = 2582107LLU;
volatile uint32_t x51 = 4358826U;
int32_t x55 = 15;
static volatile int16_t x56 = INT16_MAX;
int32_t t13 = -190365;
int16_t x57 = INT16_MIN;
volatile int64_t x59 = -1LL;
volatile int32_t t14 = -240;
int64_t x65 = -36088LL;
uint32_t x66 = 85U;
static volatile int64_t x68 = INT64_MIN;
int64_t x70 = 34262648736804LL;
volatile int32_t t17 = 12552585;
volatile int32_t t19 = 0;
uint32_t x85 = 2U;
uint16_t x89 = 57U;
static uint8_t x92 = 36U;
uint8_t x100 = 34U;
static volatile int32_t t24 = -1486;
int64_t x107 = INT64_MIN;
int8_t x111 = 63;
int32_t x112 = -1;
static int32_t t28 = 62443;
volatile int64_t x123 = -1LL;
volatile int32_t t31 = 9;
static int16_t x131 = -29;
volatile uint8_t x142 = 3U;
int8_t x144 = INT8_MIN;
int64_t x151 = -233133554540443347LL;
volatile int32_t t37 = 55835;
int16_t x153 = INT16_MIN;
static int16_t x159 = INT16_MAX;
int16_t x164 = -1;
static int32_t x166 = -1;
volatile int16_t x170 = INT16_MIN;
uint8_t x171 = 13U;
int64_t x179 = -1087780883327467453LL;
volatile int32_t t43 = -4461;
int8_t x183 = INT8_MIN;
uint8_t x206 = 3U;
volatile int32_t t50 = -1;
int64_t x209 = INT64_MIN;
static uint64_t x212 = UINT64_MAX;
static int32_t t52 = 94820;
int16_t x222 = INT16_MIN;
int32_t x224 = INT32_MIN;
int16_t x225 = INT16_MAX;
int8_t x226 = 1;
static int16_t x231 = INT16_MAX;
int32_t t56 = 644574043;
uint32_t x233 = UINT32_MAX;
uint8_t x235 = UINT8_MAX;
volatile int16_t x240 = INT16_MIN;
volatile int32_t t58 = 1;
int64_t x241 = -1LL;
static volatile int64_t x251 = -29216776940298730LL;
int8_t x252 = INT8_MIN;
volatile int32_t t62 = -48560435;
volatile int32_t t63 = -47602311;
int16_t x269 = 47;
static volatile int64_t x270 = -1LL;
volatile int32_t x276 = INT32_MAX;
int32_t x285 = -11046507;
int8_t x286 = INT8_MAX;
static int8_t x288 = -1;
static volatile int32_t t71 = -3;
int16_t x293 = INT16_MIN;
int8_t x297 = -1;
static int32_t x301 = INT32_MIN;
int8_t x302 = INT8_MIN;
int8_t x305 = -1;
static volatile int64_t x308 = -1LL;
int32_t t75 = -55457878;
int8_t x310 = -22;
int32_t t77 = -29763;
int64_t x318 = -1LL;
int32_t t79 = 628;
int8_t x328 = -4;
uint64_t x329 = 208605990LLU;
uint8_t x331 = 1U;
int64_t x337 = INT64_MIN;
static int16_t x345 = INT16_MIN;
uint32_t x347 = UINT32_MAX;
int8_t x349 = -21;
int16_t x353 = 0;
int32_t t87 = 3286060;
int8_t x357 = 59;
uint32_t x362 = 884983744U;
volatile int32_t t91 = -11;
volatile int32_t x375 = INT32_MIN;
uint64_t x378 = 530826033883LLU;
static int8_t x380 = -1;
int64_t x382 = INT64_MAX;
uint32_t x383 = 519022U;
static int32_t t94 = 468318;
int16_t x385 = INT16_MIN;
volatile uint16_t x387 = UINT16_MAX;
int64_t x390 = -126LL;
volatile int64_t x394 = -1LL;
uint32_t x395 = UINT32_MAX;
int64_t x399 = INT64_MIN;
volatile int32_t t99 = 0;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = 2840LL;
	int32_t x4 = -1;
	int32_t t0 = 6;

	t0 = ((x1/x2)<=(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int64_t x7 = -38813403LL;
	int64_t x8 = 234LL;

	t1 = ((x5/x6)<=(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MAX;
	volatile int16_t x12 = -1;
	int32_t t2 = -30461;

	t2 = ((x9/x10)<=(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = 9;
	volatile int64_t x15 = 7265327470182090LL;
	static volatile int32_t t3 = 37376;

	t3 = ((x13/x14)<=(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 0;
	int64_t x18 = INT64_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 1427;

	t4 = ((x17/x18)<=(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 126383146851131LLU;
	int64_t x24 = 608196507430671LL;

	t5 = ((x21/x22)<=(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 133137060U;
	volatile int64_t x27 = INT64_MIN;
	volatile int32_t t6 = -491240;

	t6 = ((x25/x26)<=(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 16647070728571LLU;
	int8_t x30 = INT8_MIN;
	int16_t x32 = 20;

	t7 = ((x29/x30)<=(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x35 = -1LL;
	int8_t x36 = INT8_MIN;

	t8 = ((x33/x34)<=(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	volatile uint32_t x39 = 10U;
	int32_t x40 = INT32_MIN;

	t9 = ((x37/x38)<=(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = INT16_MIN;
	int32_t t10 = 170933;

	t10 = ((x41/x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x47 = 792987461353637LLU;
	int32_t t11 = 836941894;

	t11 = ((x45/x46)<=(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = 3967046284LL;
	volatile int16_t x52 = -1;
	volatile int32_t t12 = -21;

	t12 = ((x49/x50)<=(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int64_t x54 = -37590765LL;

	t13 = ((x53/x54)<=(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	int16_t x60 = -1;

	t14 = ((x57/x58)<=(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MAX;
	int16_t x62 = -1;
	int32_t x63 = -1;
	static uint64_t x64 = UINT64_MAX;
	int32_t t15 = -129596579;

	t15 = ((x61/x62)<=(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = INT64_MIN;
	volatile int32_t t16 = 40796;

	t16 = ((x65/x66)<=(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 25U;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;

	t17 = ((x69/x70)<=(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint64_t x74 = 238820937312LLU;
	uint32_t x75 = 93735437U;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -41032792;

	t18 = ((x73/x74)<=(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static volatile uint8_t x78 = 81U;
	int64_t x79 = -137225LL;
	uint64_t x80 = 8732LLU;

	t19 = ((x77/x78)<=(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = 5231;
	uint32_t x83 = 0U;
	static uint64_t x84 = UINT64_MAX;
	static int32_t t20 = -513357;

	t20 = ((x81/x82)<=(x83^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -1;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t21 = -8866;

	t21 = ((x85/x86)<=(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x90 = UINT8_MAX;
	int64_t x91 = INT64_MAX;
	int32_t t22 = 96510907;

	t22 = ((x89/x90)<=(x91^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = 5U;
	int32_t t23 = 105;

	t23 = ((x93/x94)<=(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MAX;

	t24 = ((x97/x98)<=(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1464;
	static int32_t x102 = -3;
	int32_t x103 = -14523;
	static uint32_t x104 = 2838997U;
	int32_t t25 = -519429621;

	t25 = ((x101/x102)<=(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 761943867014661LL;
	uint8_t x106 = 1U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -4913;

	t26 = ((x105/x106)<=(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	uint8_t x110 = 2U;
	volatile int32_t t27 = -7;

	t27 = ((x109/x110)<=(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x115 = 2;
	volatile int16_t x116 = INT16_MIN;

	t28 = ((x113/x114)<=(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = 1;
	uint8_t x118 = UINT8_MAX;
	volatile uint8_t x119 = UINT8_MAX;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -98436453;

	t29 = ((x117/x118)<=(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 6LLU;
	static int64_t x122 = -332328593591LL;
	int8_t x124 = -6;
	volatile int32_t t30 = 7;

	t30 = ((x121/x122)<=(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 4U;
	static uint8_t x126 = UINT8_MAX;
	static uint32_t x127 = 227967U;
	uint8_t x128 = 105U;

	t31 = ((x125/x126)<=(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 15U;
	uint32_t x130 = 5764U;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 42;

	t32 = ((x129/x130)<=(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 6;
	int32_t x134 = 7704042;
	int8_t x135 = 5;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -1573;

	t33 = ((x133/x134)<=(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int64_t x138 = 1030274LL;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 303585U;
	volatile int32_t t34 = -1;

	t34 = ((x137/x138)<=(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x143 = -1;
	volatile int32_t t35 = 462131300;

	t35 = ((x141/x142)<=(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	uint16_t x146 = 3U;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -2206221;

	t36 = ((x145/x146)<=(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	volatile uint16_t x150 = UINT16_MAX;
	int16_t x152 = 1;

	t37 = ((x149/x150)<=(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	uint32_t x155 = 119481U;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 11530;

	t38 = ((x153/x154)<=(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 2U;
	int16_t x158 = -1;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t39 = -825;

	t39 = ((x157/x158)<=(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 4U;
	volatile int64_t x162 = INT64_MAX;
	volatile int8_t x163 = -1;
	static volatile int32_t t40 = -110;

	t40 = ((x161/x162)<=(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	static int8_t x167 = 6;
	int32_t x168 = -2974;
	int32_t t41 = 1766;

	t41 = ((x165/x166)<=(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 5473;
	uint8_t x172 = 7U;
	volatile int32_t t42 = 193886958;

	t42 = ((x169/x170)<=(x171^x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	uint16_t x178 = UINT16_MAX;
	int64_t x180 = INT64_MIN;

	t43 = ((x177/x178)<=(x179^x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int64_t x182 = INT64_MIN;
	volatile int32_t x184 = INT32_MAX;
	int32_t t44 = -1732360;

	t44 = ((x181/x182)<=(x183^x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MIN;
	uint32_t x186 = 60091859U;
	volatile uint32_t x187 = UINT32_MAX;
	volatile uint64_t x188 = 1198784664151295217LLU;
	int32_t t45 = 5420;

	t45 = ((x185/x186)<=(x187^x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MIN;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = -10879LL;
	int8_t x192 = INT8_MAX;
	volatile int32_t t46 = 31590;

	t46 = ((x189/x190)<=(x191^x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x193 = 12483184669355003LLU;
	volatile uint8_t x194 = UINT8_MAX;
	volatile uint16_t x195 = UINT16_MAX;
	volatile int64_t x196 = INT64_MAX;
	volatile int32_t t47 = -11470;

	t47 = ((x193/x194)<=(x195^x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	uint8_t x199 = 2U;
	static int32_t x200 = 37343;
	volatile int32_t t48 = 469619;

	t48 = ((x197/x198)<=(x199^x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	static int16_t x203 = -1;
	static uint64_t x204 = 4293LLU;
	int32_t t49 = 16672371;

	t49 = ((x201/x202)<=(x203^x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x205 = INT8_MIN;
	uint16_t x207 = 6833U;
	int16_t x208 = INT16_MAX;

	t50 = ((x205/x206)<=(x207^x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = INT16_MIN;
	static uint32_t x211 = UINT32_MAX;
	int32_t t51 = 24312;

	t51 = ((x209/x210)<=(x211^x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MIN;
	int64_t x214 = -1526LL;
	static uint16_t x215 = 3308U;
	static volatile int8_t x216 = INT8_MIN;

	t52 = ((x213/x214)<=(x215^x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	static int8_t x218 = INT8_MIN;
	volatile int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MAX;
	int32_t t53 = 1;

	t53 = ((x217/x218)<=(x219^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 1945U;
	int16_t x223 = INT16_MAX;
	static volatile int32_t t54 = -856477;

	t54 = ((x221/x222)<=(x223^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x227 = INT64_MIN;
	uint32_t x228 = 1U;
	int32_t t55 = -7057;

	t55 = ((x225/x226)<=(x227^x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = 14;
	uint16_t x232 = 1U;

	t56 = ((x229/x230)<=(x231^x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = INT32_MAX;
	static int8_t x236 = -1;
	static volatile int32_t t57 = 20997596;

	t57 = ((x233/x234)<=(x235^x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x237 = 7903U;
	int32_t x238 = -113;
	int8_t x239 = 4;

	t58 = ((x237/x238)<=(x239^x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MAX;
	int64_t x244 = INT64_MAX;
	int32_t t59 = -1031340;

	t59 = ((x241/x242)<=(x243^x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = -1;
	uint16_t x246 = 25988U;
	volatile int8_t x247 = -1;
	static volatile uint16_t x248 = UINT16_MAX;
	static int32_t t60 = -1;

	t60 = ((x245/x246)<=(x247^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MIN;
	static volatile int32_t t61 = 477056606;

	t61 = ((x249/x250)<=(x251^x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = 12956568LLU;
	int64_t x254 = INT64_MIN;
	static volatile uint16_t x255 = 82U;
	volatile uint64_t x256 = 3090057LLU;

	t62 = ((x253/x254)<=(x255^x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	static uint8_t x258 = 95U;
	int16_t x259 = -1;
	volatile int8_t x260 = INT8_MIN;

	t63 = ((x257/x258)<=(x259^x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	uint32_t x263 = 95370U;
	volatile int16_t x264 = -235;
	static int32_t t64 = -5;

	t64 = ((x261/x262)<=(x263^x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -3602;
	int64_t x266 = 20498746LL;
	volatile int16_t x267 = INT16_MIN;
	uint64_t x268 = 29584392LLU;
	int32_t t65 = -120513569;

	t65 = ((x265/x266)<=(x267^x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x271 = INT64_MIN;
	int64_t x272 = 9LL;
	int32_t t66 = 193896;

	t66 = ((x269/x270)<=(x271^x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	static volatile int32_t t67 = -1;

	t67 = ((x273/x274)<=(x275^x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x277 = 118U;
	volatile int8_t x278 = -1;
	int64_t x279 = 61688826LL;
	int32_t x280 = -257;
	volatile int32_t t68 = -16206242;

	t68 = ((x277/x278)<=(x279^x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = 53593U;
	uint16_t x283 = 5657U;
	static volatile uint8_t x284 = 125U;
	static volatile int32_t t69 = -1;

	t69 = ((x281/x282)<=(x283^x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x287 = INT64_MIN;
	volatile int32_t t70 = 26300748;

	t70 = ((x285/x286)<=(x287^x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = -1LL;
	volatile int32_t x291 = -1;
	uint8_t x292 = 4U;

	t71 = ((x289/x290)<=(x291^x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x294 = -1LL;
	int8_t x295 = -1;
	uint64_t x296 = 5921LLU;
	int32_t t72 = 1;

	t72 = ((x293/x294)<=(x295^x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x298 = 1336U;
	uint32_t x299 = 304952U;
	int16_t x300 = 36;
	int32_t t73 = 1908216;

	t73 = ((x297/x298)<=(x299^x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x303 = -118;
	static int32_t x304 = -9602449;
	volatile int32_t t74 = -3253;

	t74 = ((x301/x302)<=(x303^x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x306 = INT32_MAX;
	int64_t x307 = -1LL;

	t75 = ((x305/x306)<=(x307^x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t76 = -1190;

	t76 = ((x309/x310)<=(x311^x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = 12689;
	int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	int8_t x316 = INT8_MAX;

	t77 = ((x313/x314)<=(x315^x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 1;
	int32_t x319 = -1;
	volatile int8_t x320 = -1;
	int32_t t78 = -543;

	t78 = ((x317/x318)<=(x319^x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x321 = 0;
	static volatile uint32_t x322 = 27475702U;
	uint64_t x323 = 2629070574LLU;
	int32_t x324 = INT32_MIN;

	t79 = ((x321/x322)<=(x323^x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MIN;
	static volatile uint8_t x326 = 99U;
	int64_t x327 = INT64_MAX;
	volatile int32_t t80 = 275;

	t80 = ((x325/x326)<=(x327^x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x330 = -6563129;
	static int16_t x332 = -1;
	int32_t t81 = -276414;

	t81 = ((x329/x330)<=(x331^x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x333 = UINT64_MAX;
	volatile int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = UINT64_MAX;
	int32_t t82 = 942019460;

	t82 = ((x333/x334)<=(x335^x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x338 = 23303881U;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = -1LL;
	static int32_t t83 = -575901;

	t83 = ((x337/x338)<=(x339^x340));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x341 = 116990LLU;
	static uint16_t x342 = UINT16_MAX;
	uint8_t x343 = 6U;
	int16_t x344 = -1;
	int32_t t84 = 14755115;

	t84 = ((x341/x342)<=(x343^x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x346 = -49;
	uint64_t x348 = 870404088095554104LLU;
	static int32_t t85 = -857080;

	t85 = ((x345/x346)<=(x347^x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = -1;
	volatile uint8_t x351 = 3U;
	uint16_t x352 = 5U;
	int32_t t86 = -985306;

	t86 = ((x349/x350)<=(x351^x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = -209880225449293LL;
	volatile int16_t x356 = -2;

	t87 = ((x353/x354)<=(x355^x356));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x358 = 189U;
	volatile int32_t x359 = -1;
	static uint32_t x360 = 0U;
	volatile int32_t t88 = -435197591;

	t88 = ((x357/x358)<=(x359^x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -7543;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	int32_t t89 = 7136;

	t89 = ((x361/x362)<=(x363^x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = 36441996LL;
	volatile uint32_t x367 = 2U;
	static int8_t x368 = -1;
	volatile int32_t t90 = 0;

	t90 = ((x365/x366)<=(x367^x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MAX;
	int32_t x372 = 395;

	t91 = ((x369/x370)<=(x371^x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MAX;
	uint32_t x374 = 108U;
	static volatile int32_t x376 = INT32_MAX;
	int32_t t92 = -75169522;

	t92 = ((x373/x374)<=(x375^x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = -1;
	volatile int64_t x379 = 11776960847LL;
	int32_t t93 = 783285430;

	t93 = ((x377/x378)<=(x379^x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x381 = -4;
	int64_t x384 = -1LL;

	t94 = ((x381/x382)<=(x383^x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x386 = -59;
	int16_t x388 = -1;
	int32_t t95 = -40;

	t95 = ((x385/x386)<=(x387^x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x389 = INT8_MIN;
	static int32_t x391 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t96 = -7606;

	t96 = ((x389/x390)<=(x391^x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x393 = 12;
	int32_t x396 = -1;
	int32_t t97 = -19206;

	t97 = ((x393/x394)<=(x395^x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MAX;
	static int32_t x398 = -1;
	int32_t x400 = INT32_MIN;
	int32_t t98 = -4;

	t98 = ((x397/x398)<=(x399^x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x401 = UINT8_MAX;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = -11;
	int8_t x404 = INT8_MAX;

	t99 = ((x401/x402)<=(x403^x404));

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

