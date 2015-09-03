#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 3048571;
volatile int32_t t2 = -13230597;
static uint64_t x16 = UINT64_MAX;
int16_t x22 = INT16_MAX;
int16_t x23 = -1;
static int64_t x29 = INT64_MAX;
volatile uint64_t x44 = UINT64_MAX;
int8_t x47 = INT8_MIN;
int64_t x59 = 85832150LL;
static volatile uint64_t x60 = UINT64_MAX;
static int64_t x63 = INT64_MAX;
int16_t x66 = INT16_MAX;
static uint16_t x71 = 3U;
int32_t t17 = -1405758;
uint32_t x74 = UINT32_MAX;
int16_t x79 = INT16_MIN;
volatile int32_t x88 = INT32_MIN;
uint8_t x91 = 1U;
volatile int32_t x94 = -1;
uint8_t x95 = 1U;
static volatile int8_t x96 = INT8_MAX;
volatile int64_t t24 = 2269857758044539504LL;
int16_t x101 = -8;
int64_t x103 = 28108316LL;
int32_t t26 = 910887966;
static int64_t x124 = INT64_MIN;
static volatile uint32_t t30 = 1U;
uint8_t x127 = 5U;
static volatile uint64_t x130 = 62782501852LLU;
int8_t x134 = -1;
static int64_t x139 = -1LL;
volatile uint64_t x140 = 53704LLU;
int16_t x145 = INT16_MAX;
int32_t x149 = INT32_MAX;
int32_t x151 = INT32_MAX;
static int64_t x153 = INT64_MIN;
int32_t x154 = INT32_MAX;
int16_t x156 = INT16_MAX;
static uint64_t x163 = 6707LLU;
volatile int32_t t42 = -2923224;
volatile int64_t x176 = -59LL;
static volatile uint32_t t43 = 4U;
uint64_t x180 = 4946289468856262138LLU;
uint8_t x182 = 43U;
volatile uint64_t t47 = 7591491158LLU;
uint64_t x197 = 36954814288023104LLU;
volatile int8_t x199 = INT8_MIN;
static int16_t x202 = -1;
volatile int32_t t50 = -1;
int64_t x222 = INT64_MIN;
volatile uint8_t x226 = UINT8_MAX;
int32_t x230 = -1;
int16_t x231 = -1;
volatile uint64_t t57 = 59320LLU;
int64_t x234 = 7473870LL;
int8_t x236 = 46;
uint64_t t58 = 129921972835755LLU;
volatile int32_t x238 = INT32_MIN;
int32_t x245 = 854615646;
int64_t x254 = 3692572804196951361LL;
int64_t t63 = 1544736678129LL;
uint64_t x258 = 3968563418LLU;
int64_t x262 = INT64_MIN;
int8_t x265 = -34;
int32_t t66 = 4192;
volatile int32_t x269 = INT32_MAX;
int32_t x270 = -1;
int8_t x280 = INT8_MIN;
static volatile int8_t x284 = INT8_MIN;
uint16_t x299 = 8697U;
uint64_t x301 = UINT64_MAX;
volatile uint64_t t75 = 5866173023082272601LLU;
uint16_t x309 = 5U;
int32_t x310 = -443;
uint8_t x311 = 0U;
int8_t x312 = INT8_MIN;
uint8_t x317 = UINT8_MAX;
int32_t x322 = INT32_MIN;
static volatile int32_t t80 = -1;
int16_t x327 = 3;
volatile uint32_t x328 = 29988U;
static int64_t t82 = 58507LL;
uint8_t x339 = 1U;
int64_t x342 = 2011138001311804630LL;
volatile int32_t t85 = 2;
volatile uint64_t x347 = 1023387509233937552LLU;
uint32_t t86 = 15906U;
uint32_t x351 = 11059U;
int32_t t87 = 712;
int16_t x355 = INT16_MIN;
static volatile uint64_t x356 = UINT64_MAX;
uint32_t x359 = UINT32_MAX;
int64_t t89 = -1337225711916763328LL;
static int8_t x362 = INT8_MIN;
int32_t x375 = INT32_MAX;
uint64_t x376 = 5989LLU;
static int8_t x377 = INT8_MIN;
int8_t x382 = -1;
uint64_t x386 = 154LLU;
volatile int32_t t96 = 2933842;


void f0(void) {
	int8_t x1 = -1;
	volatile int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 29U;
	static volatile int32_t t0 = -3750588;

	t0 = (x1*((x2|x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 115U;
	int64_t x6 = 249LL;
	uint16_t x7 = 10698U;
	int64_t x8 = INT64_MIN;

	t1 = (x5*((x6|x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 1U;
	int16_t x10 = 14398;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MAX;

	t2 = (x9*((x10|x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x14 = -23;
	int16_t x15 = INT16_MIN;
	volatile int64_t t3 = 1250665197322225477LL;

	t3 = (x13*((x14|x15)==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MAX;
	int8_t x20 = 3;
	volatile int32_t t4 = -3116;

	t4 = (x17*((x18|x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int8_t x24 = INT8_MAX;
	int64_t t5 = -101LL;

	t5 = (x21*((x22|x23)==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = 32;
	static int8_t x27 = 1;
	static uint64_t x28 = 225489029948472962LLU;
	static volatile int32_t t6 = 73;

	t6 = (x25*((x26|x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x30 = 2U;
	int8_t x31 = 11;
	uint32_t x32 = 12228806U;
	int64_t t7 = 3376999LL;

	t7 = (x29*((x30|x31)==x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	int64_t x34 = -700764890LL;
	int16_t x35 = INT16_MIN;
	static int64_t x36 = 58268747215546LL;
	int32_t t8 = -353;

	t8 = (x33*((x34|x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = 11368563340109LL;
	int8_t x38 = -1;
	volatile int64_t x39 = -1150742413336LL;
	volatile int64_t x40 = -116286LL;
	int64_t t9 = -912545LL;

	t9 = (x37*((x38|x39)==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	uint16_t x42 = UINT16_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41*((x42|x43)==x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int32_t x48 = -48743;
	volatile int32_t t11 = 2;

	t11 = (x45*((x46|x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 42U;
	int64_t x52 = INT64_MAX;
	int32_t t12 = 3;

	t12 = (x49*((x50|x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -91874193;
	static int64_t x54 = INT64_MIN;
	volatile int32_t x55 = INT32_MAX;
	static volatile int64_t x56 = INT64_MIN;
	int32_t t13 = -167482560;

	t13 = (x53*((x54|x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 11U;
	uint64_t x58 = 43LLU;
	volatile uint32_t t14 = 9022U;

	t14 = (x57*((x58|x59)==x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -2;
	int64_t x62 = INT64_MAX;
	uint8_t x64 = 4U;
	static int32_t t15 = -1438451;

	t15 = (x61*((x62|x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 195228034380LLU;
	int64_t x67 = 65LL;
	int32_t x68 = INT32_MIN;
	uint64_t t16 = 1905LLU;

	t16 = (x65*((x66|x67)==x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int64_t x70 = INT64_MIN;
	static int32_t x72 = INT32_MIN;

	t17 = (x69*((x70|x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 62U;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -62751627;

	t18 = (x73*((x74|x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x78 = 428706125LLU;
	int64_t x80 = -1LL;
	volatile int32_t t19 = -695285;

	t19 = (x77*((x78|x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 185412209;
	static volatile uint64_t x82 = 14LLU;
	static int8_t x83 = 1;
	uint32_t x84 = 115U;
	int32_t t20 = 1;

	t20 = (x81*((x82|x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	static int64_t x87 = -1LL;
	int32_t t21 = -39865;

	t21 = (x85*((x86|x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile uint32_t x90 = UINT32_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -83;

	t22 = (x89*((x90|x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1U;
	int32_t t23 = -3506991;

	t23 = (x93*((x94|x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 1989402LL;
	int8_t x98 = -1;
	int64_t x99 = INT64_MIN;
	int32_t x100 = -533;

	t24 = (x97*((x98|x99)==x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = 7;
	volatile int8_t x104 = INT8_MIN;
	int32_t t25 = 1127415;

	t25 = (x101*((x102|x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	int64_t x106 = 24650473557LL;
	int64_t x107 = INT64_MAX;
	uint64_t x108 = UINT64_MAX;

	t26 = (x105*((x106|x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x110 = 26295U;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -348628306;

	t27 = (x109*((x110|x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	static uint32_t x114 = 198326U;
	uint64_t x115 = 2627993598324242LLU;
	int16_t x116 = 13084;
	volatile uint64_t t28 = 86256612277274LLU;

	t28 = (x113*((x114|x115)==x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	uint8_t x120 = 76U;
	volatile uint64_t t29 = 55245187931555550LLU;

	t29 = (x117*((x118|x119)==x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 1941555345U;
	volatile uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MIN;

	t30 = (x121*((x122|x123)==x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 38030932631065LLU;
	volatile int16_t x126 = INT16_MIN;
	int16_t x128 = 8045;
	volatile uint64_t t31 = 582880300440LLU;

	t31 = (x125*((x126|x127)==x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = 3741;
	static volatile int32_t t32 = -11;

	t32 = (x129*((x130|x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -3082574906040705LL;
	volatile uint8_t x135 = 7U;
	uint8_t x136 = 96U;
	volatile int64_t t33 = 173LL;

	t33 = (x133*((x134|x135)==x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 0;
	static volatile int8_t x138 = INT8_MAX;
	int32_t t34 = 704271;

	t34 = (x137*((x138|x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 99009LLU;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 7U;
	volatile uint64_t t35 = 2035708299891LLU;

	t35 = (x141*((x142|x143)==x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -4;

	t36 = (x145*((x146|x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MAX;
	static int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 14394;

	t37 = (x149*((x150|x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x155 = 29981LLU;
	static volatile int64_t t38 = -305714910742619LL;

	t38 = (x153*((x154|x155)==x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 63U;
	int8_t x158 = INT8_MAX;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -54;

	t39 = (x157*((x158|x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 0;

	t40 = (x161*((x162|x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static int8_t x166 = -1;
	int64_t x167 = -139607357LL;
	uint64_t x168 = 3566080LLU;
	volatile int32_t t41 = 451241;

	t41 = (x165*((x166|x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	int16_t x171 = -15666;
	uint8_t x172 = 25U;

	t42 = (x169*((x170|x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 42907U;
	volatile int32_t x174 = INT32_MIN;
	static volatile uint16_t x175 = 8539U;

	t43 = (x173*((x174|x175)==x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 493U;
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = 448;
	volatile int32_t t44 = 99509155;

	t44 = (x177*((x178|x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -9;
	int8_t x183 = -1;
	int32_t x184 = -184;
	int32_t t45 = -18409;

	t45 = (x181*((x182|x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x185 = -4488047713227184284LL;
	volatile int64_t x186 = INT64_MIN;
	static uint16_t x187 = 6651U;
	int8_t x188 = INT8_MAX;
	int64_t t46 = -15993657616LL;

	t46 = (x185*((x186|x187)==x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 24940692950895LLU;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 11929249LLU;
	static volatile int16_t x192 = 75;

	t47 = (x189*((x190|x191)==x192));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -842150271;
	int32_t x194 = -1;
	static volatile uint32_t x195 = 79319U;
	int16_t x196 = 4;
	volatile int32_t t48 = 178;

	t48 = (x193*((x194|x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x198 = 7215U;
	int16_t x200 = -2010;
	volatile uint64_t t49 = 2208893561987LLU;

	t49 = (x197*((x198|x199)==x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 3U;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;

	t50 = (x201*((x202|x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	volatile int16_t x206 = 2914;
	static int8_t x207 = -1;
	volatile int16_t x208 = 160;
	volatile int32_t t51 = 729144652;

	t51 = (x205*((x206|x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = -1;
	static uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int64_t t52 = -452064800LL;

	t52 = (x209*((x210|x211)==x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	uint8_t x216 = 3U;
	volatile uint32_t t53 = 14037U;

	t53 = (x213*((x214|x215)==x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = 0;
	uint8_t x218 = 122U;
	volatile int32_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 7550557;

	t54 = (x217*((x218|x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 3U;
	int32_t x223 = -1;
	uint16_t x224 = 41U;
	volatile int32_t t55 = -4121850;

	t55 = (x221*((x222|x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int32_t x227 = -1717229;
	int64_t x228 = -1LL;
	volatile uint64_t t56 = 1933875211612LLU;

	t56 = (x225*((x226|x227)==x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 2432424LLU;
	volatile int16_t x232 = 6694;

	t57 = (x229*((x230|x231)==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 60416214135LLU;
	static volatile int16_t x235 = INT16_MAX;

	t58 = (x233*((x234|x235)==x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x239 = 127;
	int64_t x240 = INT64_MAX;
	volatile uint32_t t59 = 302U;

	t59 = (x237*((x238|x239)==x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MAX;
	int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t60 = 3139;

	t60 = (x241*((x242|x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x246 = 15013197U;
	static volatile int64_t x247 = INT64_MIN;
	uint16_t x248 = 1707U;
	volatile int32_t t61 = -6284;

	t61 = (x245*((x246|x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -14;
	volatile uint32_t x250 = 813170U;
	volatile uint8_t x251 = 3U;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 149287265;

	t62 = (x249*((x250|x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -8781417LL;
	volatile int8_t x255 = -2;
	static volatile uint32_t x256 = UINT32_MAX;

	t63 = (x253*((x254|x255)==x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint64_t x259 = 94975506583304156LLU;
	int64_t x260 = INT64_MIN;
	int32_t t64 = -16265;

	t64 = (x257*((x258|x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 60625991LLU;
	uint16_t x263 = 0U;
	int32_t x264 = -1;
	uint64_t t65 = 60226808LLU;

	t65 = (x261*((x262|x263)==x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x266 = 306678763;
	int64_t x267 = INT64_MAX;
	int32_t x268 = -39601;

	t66 = (x265*((x266|x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x271 = 83838853LLU;
	static uint16_t x272 = 1U;
	static int32_t t67 = 10;

	t67 = (x269*((x270|x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x274 = 222LLU;
	static int64_t x275 = -105982102194487540LL;
	static int16_t x276 = 100;
	volatile int32_t t68 = 1957254;

	t68 = (x273*((x274|x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	int64_t x278 = 18583LL;
	uint16_t x279 = 3U;
	volatile int64_t t69 = -2349540162067741872LL;

	t69 = (x277*((x278|x279)==x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 418336241;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 123610554LLU;
	volatile int32_t t70 = 56709;

	t70 = (x281*((x282|x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -7194044435506418LL;
	int8_t x286 = 0;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	int64_t t71 = 546256LL;

	t71 = (x285*((x286|x287)==x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 16;
	int32_t x290 = INT32_MAX;
	volatile uint32_t x291 = 817698785U;
	static uint16_t x292 = 774U;
	volatile int32_t t72 = -40;

	t72 = (x289*((x290|x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 556489;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -5;
	int8_t x296 = 13;
	int32_t t73 = -3964;

	t73 = (x293*((x294|x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	uint8_t x298 = 19U;
	int64_t x300 = -5311503754452LL;
	int32_t t74 = 13;

	t74 = (x297*((x298|x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 1U;
	uint16_t x303 = 30U;
	int64_t x304 = -1LL;

	t75 = (x301*((x302|x303)==x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile uint8_t x306 = 32U;
	volatile int8_t x307 = 0;
	static int8_t x308 = INT8_MIN;
	int64_t t76 = -68015283115585839LL;

	t76 = (x305*((x306|x307)==x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t t77 = 0;

	t77 = (x309*((x310|x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 363598515LLU;
	int8_t x314 = INT8_MIN;
	static volatile int32_t x315 = -1;
	static volatile int64_t x316 = INT64_MIN;
	uint64_t t78 = 5722475984275LLU;

	t78 = (x313*((x314|x315)==x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x318 = 134U;
	volatile uint8_t x319 = UINT8_MAX;
	int64_t x320 = -1LL;
	volatile int32_t t79 = -42706;

	t79 = (x317*((x318|x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	int64_t x323 = -3569LL;
	volatile int32_t x324 = INT32_MAX;

	t80 = (x321*((x322|x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MIN;
	volatile int32_t t81 = -1025559;

	t81 = (x325*((x326|x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	uint32_t x330 = 278557U;
	int8_t x331 = -1;
	int16_t x332 = INT16_MIN;

	t82 = (x329*((x330|x331)==x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = -1LL;
	uint64_t x335 = UINT64_MAX;
	static int32_t x336 = INT32_MIN;
	volatile int64_t t83 = -137661014238224055LL;

	t83 = (x333*((x334|x335)==x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 2742844U;
	int64_t x338 = INT64_MIN;
	uint64_t x340 = UINT64_MAX;
	static volatile uint32_t t84 = 723921U;

	t84 = (x337*((x338|x339)==x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MIN;
	int8_t x343 = -29;
	int64_t x344 = INT64_MIN;

	t85 = (x341*((x342|x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MIN;
	uint64_t x348 = UINT64_MAX;

	t86 = (x345*((x346|x347)==x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	static uint64_t x350 = UINT64_MAX;
	uint16_t x352 = 552U;

	t87 = (x349*((x350|x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	volatile uint8_t x354 = UINT8_MAX;
	int64_t t88 = -5649552LL;

	t88 = (x353*((x354|x355)==x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	static int16_t x358 = 865;
	static int64_t x360 = INT64_MIN;

	t89 = (x357*((x358|x359)==x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = 488;
	uint32_t x363 = 5U;
	int32_t x364 = -1022421;
	volatile int32_t t90 = -59660821;

	t90 = (x361*((x362|x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 1;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = INT32_MIN;
	int32_t x368 = 378;
	volatile int32_t t91 = -1045155;

	t91 = (x365*((x366|x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MIN;
	static uint64_t x370 = 6876185769436445LLU;
	static int32_t x371 = INT32_MIN;
	volatile uint8_t x372 = 1U;
	int64_t t92 = 8LL;

	t92 = (x369*((x370|x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MIN;
	volatile int32_t t93 = 3664;

	t93 = (x373*((x374|x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	uint8_t x379 = 2U;
	int16_t x380 = -11598;
	volatile int32_t t94 = 9;

	t94 = (x377*((x378|x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile uint32_t x383 = 7U;
	volatile uint16_t x384 = UINT16_MAX;
	static volatile int32_t t95 = 20832597;

	t95 = (x381*((x382|x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	int16_t x387 = INT16_MIN;
	uint8_t x388 = 22U;

	t96 = (x385*((x386|x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MAX;
	static volatile uint32_t x390 = 16373982U;
	volatile int8_t x391 = INT8_MIN;
	volatile int8_t x392 = -1;
	int32_t t97 = -1;

	t97 = (x389*((x390|x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -5;

	t98 = (x393*((x394|x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	uint16_t x398 = 6U;
	int8_t x399 = -30;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -262033533;

	t99 = (x397*((x398|x399)==x400));

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

