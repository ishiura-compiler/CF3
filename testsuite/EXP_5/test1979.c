#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
volatile uint16_t x4 = 9307U;
static volatile int32_t t0 = -6;
static int8_t x10 = INT8_MAX;
int64_t x19 = 1446057951160436595LL;
volatile uint64_t x22 = 59437653580LLU;
uint16_t x26 = 2045U;
uint8_t x33 = 1U;
int32_t x36 = INT32_MIN;
volatile uint64_t t9 = 65305574985299LLU;
volatile int8_t x42 = -29;
int32_t x46 = -20682;
volatile int32_t t11 = INT32_MIN;
static uint32_t x60 = UINT32_MAX;
uint16_t x63 = UINT16_MAX;
int64_t x68 = -1LL;
int16_t x71 = -1;
uint16_t x75 = 3985U;
int16_t x78 = INT16_MIN;
static int64_t x81 = 9926923000819734LL;
int16_t x88 = 1;
uint32_t x91 = 7239U;
uint16_t x93 = UINT16_MAX;
int32_t x100 = INT32_MAX;
volatile int64_t t24 = 44520673945LL;
int16_t x106 = INT16_MIN;
uint16_t x127 = 222U;
static int8_t x131 = INT8_MAX;
uint16_t x132 = 3682U;
volatile int16_t x138 = -203;
int64_t x140 = INT64_MAX;
uint64_t t36 = 18LLU;
int16_t x155 = -855;
volatile int32_t t39 = -3;
volatile uint32_t x161 = 2294110U;
int32_t t41 = 0;
uint64_t x171 = UINT64_MAX;
volatile uint64_t t42 = 118LLU;
int32_t x180 = INT32_MIN;
uint16_t x192 = 2U;
volatile int8_t x193 = -1;
volatile uint64_t x194 = UINT64_MAX;
uint16_t x224 = UINT16_MAX;
static uint32_t x227 = UINT32_MAX;
uint32_t x228 = 298010885U;
volatile int32_t t58 = INT32_MIN;
uint8_t x239 = UINT8_MAX;
volatile int32_t t61 = -3;
static volatile int64_t x251 = -7LL;
int8_t x252 = 32;
int8_t x255 = INT8_MIN;
int32_t t65 = -983;
uint8_t x269 = 5U;
int32_t x272 = -128199;
uint64_t t69 = UINT64_MAX;
int8_t x284 = -13;
volatile int32_t t70 = 192792879;
volatile int32_t x286 = 536841275;
int8_t x294 = INT8_MIN;
volatile int32_t t75 = 7;
int16_t x315 = INT16_MIN;
static volatile int32_t t78 = 484;
static int64_t x318 = -1372LL;
uint16_t x320 = 12899U;
uint16_t x324 = 320U;
volatile int32_t x326 = INT32_MAX;
uint64_t x328 = 6098474LLU;
int64_t x331 = INT64_MIN;
volatile int32_t t82 = -106502;
int8_t x335 = 20;
int64_t x336 = -1LL;
static int32_t x351 = 0;
int64_t x354 = 11280786LL;
uint64_t x355 = UINT64_MAX;
int32_t t89 = 22;
volatile uint16_t x361 = UINT16_MAX;
static int16_t x362 = -1;
uint64_t x364 = UINT64_MAX;
uint32_t x372 = 3233U;
int32_t t94 = 255013;
uint16_t x381 = 29464U;
int32_t x382 = INT32_MIN;
uint16_t x384 = 12572U;
static volatile int8_t x390 = INT8_MIN;
uint16_t x396 = 2U;
int32_t t99 = -55366155;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;

	t0 = (x1*((x2|x3)<=x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1;
	int32_t x6 = -1;
	volatile uint16_t x7 = 1U;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 2791;

	t1 = (x5*((x6|x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int64_t x11 = -1LL;
	volatile int32_t x12 = INT32_MAX;
	int32_t t2 = 423940840;

	t2 = (x9*((x10|x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 8U;
	int8_t x14 = INT8_MAX;
	static volatile int64_t x15 = -1LL;
	static int64_t x16 = -89746602097788347LL;
	volatile uint32_t t3 = 139U;

	t3 = (x13*((x14|x15)<=x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x18 = 0U;
	uint32_t x20 = 1042145U;
	volatile int32_t t4 = -55;

	t4 = (x17*((x18|x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	int16_t x23 = -1;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -1121;

	t5 = (x21*((x22|x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int32_t x27 = -1;
	int8_t x28 = -1;
	volatile int32_t t6 = 808625;

	t6 = (x25*((x26|x27)<=x28));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = -335;
	int8_t x31 = INT8_MIN;
	int64_t x32 = 44513664471LL;
	volatile int32_t t7 = -8;

	t7 = (x29*((x30|x31)<=x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	uint32_t x35 = 25590U;
	volatile int32_t t8 = -13614;

	t8 = (x33*((x34|x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 140531354430880227LLU;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 519U;

	t9 = (x37*((x38|x39)<=x40));

	if (t9 != 140531354430880227LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 346811580484225179LLU;
	int16_t x43 = -1;
	static int16_t x44 = INT16_MIN;
	static uint64_t t10 = 2920325LLU;

	t10 = (x41*((x42|x43)<=x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	uint64_t x47 = 174LLU;
	int8_t x48 = INT8_MIN;

	t11 = (x45*((x46|x47)<=x48));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MIN;
	volatile int32_t x51 = INT32_MAX;
	int64_t x52 = -1LL;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x49*((x50|x51)<=x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 2LLU;
	static int32_t x54 = -1;
	volatile uint64_t x55 = 768LLU;
	int64_t x56 = INT64_MIN;
	static uint64_t t13 = 8850981869702321288LLU;

	t13 = (x53*((x54|x55)<=x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	static volatile int32_t t14 = -56;

	t14 = (x57*((x58|x59)<=x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int16_t x62 = INT16_MAX;
	volatile uint16_t x64 = 1U;
	static int32_t t15 = 5257792;

	t15 = (x61*((x62|x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	static int64_t t16 = -17365598419770LL;

	t16 = (x65*((x66|x67)<=x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int8_t x70 = INT8_MIN;
	int8_t x72 = -1;
	volatile int32_t t17 = 7620040;

	t17 = (x69*((x70|x71)<=x72));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	int64_t x74 = -1LL;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 18457967254648LL;

	t18 = (x73*((x74|x75)<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	uint64_t x79 = 355144LLU;
	uint32_t x80 = 3U;
	int32_t t19 = 12987287;

	t19 = (x77*((x78|x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x82 = INT16_MAX;
	uint32_t x83 = 1U;
	volatile int8_t x84 = 20;
	int64_t t20 = 16561468889196460LL;

	t20 = (x81*((x82|x83)<=x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = 0;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t t21 = 202;

	t21 = (x85*((x86|x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -19307;
	volatile int8_t x90 = -13;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -530264;

	t22 = (x89*((x90|x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 48U;
	static volatile int16_t x95 = 12;
	volatile int32_t x96 = 1986957;
	static volatile int32_t t23 = 9161;

	t23 = (x93*((x94|x95)<=x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	static volatile int16_t x99 = 1;

	t24 = (x97*((x98|x99)<=x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 3797U;
	int16_t x102 = -8559;
	volatile uint32_t x103 = 12006942U;
	volatile int8_t x104 = INT8_MAX;
	volatile uint32_t t25 = 103459U;

	t25 = (x101*((x102|x103)<=x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 13384658LLU;
	uint16_t x107 = 1068U;
	static int64_t x108 = INT64_MIN;
	uint64_t t26 = 83986043LLU;

	t26 = (x105*((x106|x107)<=x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = 47;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	int8_t x112 = 30;
	int32_t t27 = 121;

	t27 = (x109*((x110|x111)<=x112));

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MAX;
	uint64_t x114 = UINT64_MAX;
	volatile int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	volatile int32_t t28 = -61;

	t28 = (x113*((x114|x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -3590;
	int8_t x118 = 1;
	volatile int64_t x119 = INT64_MIN;
	static uint16_t x120 = 4955U;
	volatile int32_t t29 = 10736;

	t29 = (x117*((x118|x119)<=x120));

	if (t29 != -3590) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 9U;
	int16_t x122 = -88;
	int64_t x123 = INT64_MAX;
	volatile int32_t x124 = INT32_MIN;
	int32_t t30 = 0;

	t30 = (x121*((x122|x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	int16_t x126 = -159;
	int8_t x128 = INT8_MAX;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x125*((x126|x127)<=x128));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 125U;
	static int64_t x130 = -1025326654835888232LL;
	int32_t t32 = 405;

	t32 = (x129*((x130|x131)<=x132));

	if (t32 != 125) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint64_t x134 = 14077484025765974LLU;
	int16_t x135 = 484;
	int16_t x136 = -1;
	static int32_t t33 = -28345778;

	t33 = (x133*((x134|x135)<=x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int32_t x139 = INT32_MAX;
	static volatile int64_t t34 = INT64_MIN;

	t34 = (x137*((x138|x139)<=x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 0;
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MAX;
	int8_t x144 = -1;
	int32_t t35 = 66809237;

	t35 = (x141*((x142|x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = UINT64_MAX;
	int64_t x146 = 0LL;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;

	t36 = (x145*((x146|x147)<=x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	int16_t x151 = -1;
	int32_t x152 = INT32_MAX;
	int32_t t37 = -122048;

	t37 = (x149*((x150|x151)<=x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	volatile int32_t x154 = -687;
	volatile uint16_t x156 = 685U;
	volatile int32_t t38 = INT32_MAX;

	t38 = (x153*((x154|x155)<=x156));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MIN;
	volatile int64_t x159 = -69794194708665109LL;
	int32_t x160 = 7796;

	t39 = (x157*((x158|x159)<=x160));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -1;
	uint8_t x163 = 29U;
	int64_t x164 = 204432624442816160LL;
	volatile uint32_t t40 = 1977299335U;

	t40 = (x161*((x162|x163)<=x164));

	if (t40 != 2294110U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MAX;
	int8_t x166 = -53;
	int8_t x167 = 1;
	int64_t x168 = -12251992796LL;

	t41 = (x165*((x166|x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 50LLU;
	uint32_t x170 = UINT32_MAX;
	int8_t x172 = INT8_MIN;

	t42 = (x169*((x170|x171)<=x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 49U;
	uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 8U;
	int16_t x176 = 25;
	int32_t t43 = 89868;

	t43 = (x173*((x174|x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = 117U;
	volatile int32_t t44 = -269572347;

	t44 = (x177*((x178|x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -75;
	static uint8_t x182 = 26U;
	volatile int64_t x183 = INT64_MAX;
	int32_t x184 = -21464;
	int32_t t45 = -1;

	t45 = (x181*((x182|x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -630;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = INT64_MIN;
	uint16_t x188 = 2346U;
	static volatile int32_t t46 = -81272264;

	t46 = (x185*((x186|x187)<=x188));

	if (t46 != -630) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	volatile uint64_t x190 = 103480LLU;
	volatile int8_t x191 = -1;
	volatile int32_t t47 = -1838744;

	t47 = (x189*((x190|x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x195 = 23;
	int16_t x196 = INT16_MAX;
	volatile int32_t t48 = 103859;

	t48 = (x193*((x194|x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 8U;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = -7;
	uint8_t x200 = 6U;
	int32_t t49 = 1;

	t49 = (x197*((x198|x199)<=x200));

	if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 12U;
	static volatile int64_t x202 = INT64_MAX;
	static int32_t x203 = 13164;
	volatile int16_t x204 = -97;
	volatile int32_t t50 = -2703;

	t50 = (x201*((x202|x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -8190;
	int32_t x206 = -377;
	int32_t x207 = -1;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -56695336;

	t51 = (x205*((x206|x207)<=x208));

	if (t51 != -8190) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = 19405;
	int16_t x210 = 1586;
	int16_t x211 = -9023;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 5142;

	t52 = (x209*((x210|x211)<=x212));

	if (t52 != 19405) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MIN;
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 76U;
	int64_t x216 = INT64_MAX;
	int64_t t53 = 307289LL;

	t53 = (x213*((x214|x215)<=x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	int8_t x218 = INT8_MIN;
	static int8_t x219 = INT8_MIN;
	uint16_t x220 = 5550U;
	int32_t t54 = 1;

	t54 = (x217*((x218|x219)<=x220));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -77463111244537077LL;
	static int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	volatile int64_t t55 = 1004197538598279LL;

	t55 = (x221*((x222|x223)<=x224));

	if (t55 != -77463111244537077LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -22;
	int32_t x226 = INT32_MIN;
	static int32_t t56 = 99294811;

	t56 = (x225*((x226|x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -3;
	static uint8_t x230 = 61U;
	static int8_t x231 = -12;
	volatile uint8_t x232 = 34U;
	int32_t t57 = -347687;

	t57 = (x229*((x230|x231)<=x232));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	uint32_t x234 = 102336938U;
	volatile uint64_t x235 = 17511897700555LLU;
	int8_t x236 = -1;

	t58 = (x233*((x234|x235)<=x236));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 28U;
	volatile uint32_t x238 = UINT32_MAX;
	int32_t x240 = INT32_MAX;
	int32_t t59 = -344925;

	t59 = (x237*((x238|x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = 2707422LL;
	static int8_t x242 = 9;
	uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 371U;
	static volatile int64_t t60 = 0LL;

	t60 = (x241*((x242|x243)<=x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 3225U;
	int16_t x246 = -1;
	uint8_t x247 = 94U;
	volatile uint32_t x248 = 1304U;

	t61 = (x245*((x246|x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MIN;
	volatile int32_t t62 = -31780932;

	t62 = (x249*((x250|x251)<=x252));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 2064052LLU;
	int32_t x254 = INT32_MIN;
	volatile int8_t x256 = 23;
	volatile uint64_t t63 = 50957777941LLU;

	t63 = (x253*((x254|x255)<=x256));

	if (t63 != 2064052LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -122;

	t64 = (x257*((x258|x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x261 = 3U;
	int8_t x262 = 16;
	volatile int8_t x263 = 1;
	static volatile int16_t x264 = INT16_MIN;

	t65 = (x261*((x262|x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1;
	int8_t x266 = -1;
	static int64_t x267 = 1LL;
	int16_t x268 = -1;
	volatile int32_t t66 = 72093;

	t66 = (x265*((x266|x267)<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 244833369519397LLU;
	volatile uint32_t x271 = 2371249U;
	volatile int32_t t67 = -209913;

	t67 = (x269*((x270|x271)<=x272));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	volatile uint8_t x274 = 11U;
	static int64_t x275 = INT64_MAX;
	int16_t x276 = INT16_MIN;
	int32_t t68 = 4143636;

	t68 = (x273*((x274|x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 12U;
	uint16_t x279 = 2U;
	int32_t x280 = INT32_MAX;

	t69 = (x277*((x278|x279)<=x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x282 = -3445185816282LL;
	int32_t x283 = 17;

	t70 = (x281*((x282|x283)<=x284));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -5;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = -1;
	int32_t t71 = -14798;

	t71 = (x285*((x286|x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 30839U;
	uint32_t x290 = UINT32_MAX;
	int64_t x291 = -1LL;
	int64_t x292 = 1LL;
	int32_t t72 = -832122726;

	t72 = (x289*((x290|x291)<=x292));

	if (t72 != 30839) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -6;
	uint64_t x295 = UINT64_MAX;
	static uint8_t x296 = 46U;
	volatile int32_t t73 = -3530786;

	t73 = (x293*((x294|x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = 110;
	static uint8_t x298 = UINT8_MAX;
	static uint32_t x299 = 178326U;
	int16_t x300 = -1;
	int32_t t74 = 2054;

	t74 = (x297*((x298|x299)<=x300));

	if (t74 != 110) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -113;
	uint64_t x302 = UINT64_MAX;
	static uint32_t x303 = UINT32_MAX;
	int8_t x304 = -53;

	t75 = (x301*((x302|x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 781787089LLU;
	uint32_t x306 = 301780U;
	volatile uint32_t x307 = 18625U;
	int16_t x308 = 25;
	volatile uint64_t t76 = 13547139LLU;

	t76 = (x305*((x306|x307)<=x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = 20165347339666LLU;
	static volatile uint16_t x311 = 345U;
	static uint8_t x312 = UINT8_MAX;
	int32_t t77 = 621;

	t77 = (x309*((x310|x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 13;
	int8_t x314 = INT8_MIN;
	int16_t x316 = INT16_MIN;

	t78 = (x313*((x314|x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317*((x318|x319)<=x320));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 0U;
	uint64_t x322 = 2824055954036LLU;
	static uint8_t x323 = UINT8_MAX;
	int32_t t80 = 222;

	t80 = (x321*((x322|x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 10668U;
	int64_t x327 = INT64_MIN;
	volatile int32_t t81 = -457129403;

	t81 = (x325*((x326|x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile int8_t x330 = INT8_MIN;
	int64_t x332 = -62929639LL;

	t82 = (x329*((x330|x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	uint16_t x334 = UINT16_MAX;
	static int32_t t83 = 77519596;

	t83 = (x333*((x334|x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MAX;
	int64_t x339 = INT64_MAX;
	uint32_t x340 = 12539187U;
	volatile int32_t t84 = -525342;

	t84 = (x337*((x338|x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 21341825963592540LL;
	static int64_t x342 = INT64_MAX;
	static int32_t x343 = 8110677;
	int16_t x344 = 42;
	volatile int64_t t85 = -206842769641LL;

	t85 = (x341*((x342|x343)<=x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	static int32_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = -1;
	int32_t t86 = 474669;

	t86 = (x345*((x346|x347)<=x348));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	static int8_t x350 = -1;
	static uint32_t x352 = UINT32_MAX;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x349*((x350|x351)<=x352));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x356 = -131498027LL;
	int64_t t88 = -64143352153781932LL;

	t88 = (x353*((x354|x355)<=x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -14287;
	static volatile int8_t x358 = -23;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;

	t89 = (x357*((x358|x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x363 = -1LL;
	volatile int32_t t90 = -11989942;

	t90 = (x361*((x362|x363)<=x364));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 1U;
	uint8_t x366 = 47U;
	uint32_t x367 = UINT32_MAX;
	uint16_t x368 = 9043U;
	volatile int32_t t91 = -14417037;

	t91 = (x365*((x366|x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = -1;
	int32_t t92 = 1;

	t92 = (x369*((x370|x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 1;
	uint64_t x374 = 8954211662820LLU;
	volatile int32_t x375 = INT32_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 23908;

	t93 = (x373*((x374|x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 2595U;
	int32_t x378 = -1;
	volatile uint32_t x379 = 1U;
	int32_t x380 = 8081;

	t94 = (x377*((x378|x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = 0;
	int32_t t95 = 1819637;

	t95 = (x381*((x382|x383)<=x384));

	if (t95 != 29464) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	uint8_t x386 = 7U;
	volatile uint64_t x387 = UINT64_MAX;
	uint16_t x388 = 49U;
	uint32_t t96 = 637869222U;

	t96 = (x385*((x386|x387)<=x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 81U;
	int64_t x391 = INT64_MAX;
	uint8_t x392 = 4U;
	volatile int32_t t97 = 0;

	t97 = (x389*((x390|x391)<=x392));

	if (t97 != 81) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 0U;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = INT16_MIN;
	int32_t t98 = -1063;

	t98 = (x393*((x394|x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 3U;
	int16_t x398 = -1;
	volatile uint64_t x399 = 110022377LLU;
	static volatile int16_t x400 = INT16_MAX;

	t99 = (x397*((x398|x399)<=x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

