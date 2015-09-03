#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = 8909LL;
volatile uint32_t x12 = 700U;
static volatile uint32_t t2 = 50105728U;
uint16_t x22 = 32086U;
int64_t t5 = -13873102987239138LL;
static uint64_t x25 = 231675163971791775LLU;
volatile int16_t x29 = -1;
volatile int32_t t7 = 3056;
static volatile uint32_t x33 = 45812726U;
volatile int64_t x36 = INT64_MIN;
int32_t x38 = INT32_MIN;
volatile int32_t x48 = -1;
int16_t x51 = -1;
volatile int64_t t12 = INT64_MIN;
uint8_t x60 = 35U;
uint64_t x63 = 528285899LLU;
static volatile int64_t t15 = -3328019LL;
uint8_t x67 = 0U;
int8_t x75 = INT8_MAX;
static uint8_t x81 = UINT8_MAX;
static int32_t x85 = INT32_MIN;
int16_t x88 = INT16_MIN;
uint8_t x90 = 0U;
static uint32_t x91 = UINT32_MAX;
volatile int8_t x103 = INT8_MIN;
uint32_t x106 = 894063U;
uint32_t x108 = 1882U;
uint32_t t26 = 53736324U;
static volatile int64_t x116 = INT64_MAX;
volatile int64_t x120 = 70782081241732792LL;
int16_t x124 = -1;
int32_t t32 = -9088918;
uint8_t x139 = 25U;
volatile int64_t x146 = -1LL;
int32_t t37 = INT32_MIN;
int64_t x162 = 1874050551LL;
int32_t x164 = INT32_MIN;
int16_t x168 = -7393;
static volatile int64_t x174 = INT64_MIN;
uint8_t x179 = 3U;
int32_t t44 = -60819789;
volatile uint16_t x183 = 0U;
volatile int32_t t45 = -1;
static volatile uint16_t x186 = UINT16_MAX;
int16_t x189 = INT16_MIN;
int64_t x191 = -1LL;
uint32_t x194 = 321U;
static volatile int32_t t48 = -5139465;
volatile int32_t x200 = -292500;
uint64_t x215 = 3261253LLU;
volatile int64_t x216 = INT64_MAX;
int16_t x217 = INT16_MIN;
int64_t x222 = 55LL;
int32_t t55 = -19931;
int64_t x227 = INT64_MIN;
uint8_t x232 = 3U;
int8_t x234 = -3;
uint8_t x236 = 110U;
int32_t t58 = 414390277;
int8_t x241 = INT8_MAX;
int64_t t62 = -452249818367021791LL;
uint64_t x254 = 1917363051670LLU;
volatile int16_t x255 = -1;
uint16_t x256 = 24U;
int32_t x257 = 30410;
int64_t x260 = 1933177260LL;
int32_t x280 = -479377345;
uint64_t x282 = 77623LLU;
int16_t x288 = INT16_MAX;
int32_t x295 = INT32_MAX;
int32_t x296 = INT32_MAX;
volatile int32_t t73 = INT32_MAX;
static int32_t x313 = INT32_MAX;
int32_t x319 = INT32_MIN;
static int64_t x321 = INT64_MIN;
uint16_t x325 = 177U;
uint64_t x327 = 62893491LLU;
static int8_t x328 = INT8_MIN;
uint8_t x356 = 14U;
int32_t x357 = -1;
uint16_t x360 = UINT16_MAX;
volatile uint8_t x365 = 25U;
int8_t x367 = -21;
static int8_t x368 = INT8_MIN;
static int32_t x372 = -307;
volatile int32_t t92 = 781307136;
int32_t t93 = -5;
volatile int32_t t94 = -17;
int64_t x382 = INT64_MIN;
int16_t x383 = -1;
int16_t x385 = -1;
volatile uint64_t t96 = UINT64_MAX;
int8_t x391 = -3;
int8_t x393 = INT8_MAX;
volatile int64_t t98 = 920613967419LL;
volatile int8_t x400 = 1;
int32_t t99 = -1436452;


void f0(void) {
	int16_t x1 = -224;
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = 39U;
	volatile int64_t t0 = 8210218243993730LL;

	t0 = (((x1<x2)==x3)^x4);

	if (t0 != 8909LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 59;
	static uint16_t x6 = 4U;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = -84053LL;
	int64_t t1 = -185LL;

	t1 = (((x5<x6)==x7)^x8);

	if (t1 != -84053LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int64_t x11 = INT64_MAX;

	t2 = (((x9<x10)==x11)^x12);

	if (t2 != 700U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	int32_t x15 = 0;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 1816185;

	t3 = (((x13<x14)==x15)^x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = -13161716684063LL;
	int32_t x19 = INT32_MIN;
	int32_t x20 = 1279072;
	volatile int32_t t4 = 116780407;

	t4 = (((x17<x18)==x19)^x20);

	if (t4 != 1279072) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 6U;
	int32_t x23 = INT32_MIN;
	int64_t x24 = -2087720344LL;

	t5 = (((x21<x22)==x23)^x24);

	if (t5 != -2087720344LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = INT32_MIN;

	t6 = (((x25<x26)==x27)^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -15892;
	int32_t x31 = 634;
	static int8_t x32 = INT8_MAX;

	t7 = (((x29<x30)==x31)^x32);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x33<x34)==x35)^x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 31U;
	static volatile uint32_t x39 = UINT32_MAX;
	static uint16_t x40 = 674U;
	int32_t t9 = 691369;

	t9 = (((x37<x38)==x39)^x40);

	if (t9 != 674) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 2U;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = 82LLU;
	int8_t x44 = 0;
	int32_t t10 = 119328;

	t10 = (((x41<x42)==x43)^x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	uint32_t x46 = 112U;
	uint32_t x47 = 425649U;
	int32_t t11 = -238;

	t11 = (((x45<x46)==x47)^x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	volatile int64_t x52 = INT64_MIN;

	t12 = (((x49<x50)==x51)^x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 69U;
	static volatile uint8_t x54 = UINT8_MAX;
	volatile int8_t x55 = INT8_MAX;
	uint64_t x56 = 1194267042LLU;
	static uint64_t t13 = 492615068777LLU;

	t13 = (((x53<x54)==x55)^x56);

	if (t13 != 1194267042LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 30;
	static volatile int64_t x58 = 4625572051528819LL;
	int32_t x59 = 246930226;
	volatile int32_t t14 = -2389;

	t14 = (((x57<x58)==x59)^x60);

	if (t14 != 35) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MIN;
	static int64_t x64 = 313575752974LL;

	t15 = (((x61<x62)==x63)^x64);

	if (t15 != 313575752974LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 3LLU;
	uint16_t x66 = 348U;
	uint32_t x68 = 150043266U;
	static volatile uint32_t t16 = 20879U;

	t16 = (((x65<x66)==x67)^x68);

	if (t16 != 150043266U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = UINT16_MAX;
	static volatile int64_t x72 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x69<x70)==x71)^x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 107794LLU;
	uint16_t x74 = 1U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = INT32_MIN;

	t18 = (((x73<x74)==x75)^x76);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = -27;
	static volatile uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 27U;
	static volatile int64_t x80 = INT64_MIN;
	int64_t t19 = INT64_MIN;

	t19 = (((x77<x78)==x79)^x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1U;
	uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t20 = -895155314;

	t20 = (((x81<x82)==x83)^x84);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x86 = 1802478U;
	int64_t x87 = -22005970644LL;
	int32_t t21 = 5909616;

	t21 = (((x85<x86)==x87)^x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 3578499241340LLU;
	int32_t x92 = 211;
	volatile int32_t t22 = 45094;

	t22 = (((x89<x90)==x91)^x92);

	if (t22 != 211) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 75659543;
	uint8_t x94 = UINT8_MAX;
	volatile int64_t x95 = -327164170774638354LL;
	static int8_t x96 = INT8_MAX;
	static volatile int32_t t23 = 23311;

	t23 = (((x93<x94)==x95)^x96);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	uint32_t x98 = 12720592U;
	uint8_t x99 = 4U;
	int8_t x100 = -11;
	static volatile int32_t t24 = -13;

	t24 = (((x97<x98)==x99)^x100);

	if (t24 != -11) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MAX;
	int8_t x104 = -1;
	static volatile int32_t t25 = 244670449;

	t25 = (((x101<x102)==x103)^x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 1LLU;
	int64_t x107 = -18LL;

	t26 = (((x105<x106)==x107)^x108);

	if (t26 != 1882U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	uint64_t x110 = 355154LLU;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = -1;
	volatile int32_t t27 = -223;

	t27 = (((x109<x110)==x111)^x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 179787406626511227LLU;
	int64_t x114 = -1LL;
	int8_t x115 = 3;
	int64_t t28 = INT64_MAX;

	t28 = (((x113<x114)==x115)^x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 166;
	static volatile int8_t x118 = 0;
	int16_t x119 = -11914;
	static volatile int64_t t29 = 3030134797005064LL;

	t29 = (((x117<x118)==x119)^x120);

	if (t29 != 70782081241732792LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = 636926073729LL;
	static int16_t x123 = INT16_MIN;
	int32_t t30 = -671296;

	t30 = (((x121<x122)==x123)^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 11534407;
	static uint64_t x126 = 7516467LLU;
	static int32_t x127 = -1;
	uint16_t x128 = 2U;
	int32_t t31 = -167;

	t31 = (((x125<x126)==x127)^x128);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 38249834640398LLU;
	volatile uint32_t x130 = UINT32_MAX;
	int64_t x131 = -1LL;
	int16_t x132 = 10;

	t32 = (((x129<x130)==x131)^x132);

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = INT8_MAX;
	int32_t x134 = INT32_MIN;
	volatile uint64_t x135 = 7917007717183378153LLU;
	int16_t x136 = INT16_MAX;
	static volatile int32_t t33 = -40747;

	t33 = (((x133<x134)==x135)^x136);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint8_t x138 = UINT8_MAX;
	uint64_t x140 = 2034474LLU;
	uint64_t t34 = 3LLU;

	t34 = (((x137<x138)==x139)^x140);

	if (t34 != 2034474LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 79668654LLU;
	static int32_t x142 = -1;
	static uint16_t x143 = UINT16_MAX;
	static volatile int64_t x144 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = (((x141<x142)==x143)^x144);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -13974242889100LL;
	volatile int64_t x147 = 8049244LL;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = INT32_MIN;

	t36 = (((x145<x146)==x147)^x148);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -414481;
	static int64_t x150 = 11LL;
	int64_t x151 = 436195477LL;
	int32_t x152 = INT32_MIN;

	t37 = (((x149<x150)==x151)^x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = -1031071888403LL;
	int32_t x155 = -7156;
	static int64_t x156 = -1LL;
	static volatile int64_t t38 = 20851LL;

	t38 = (((x153<x154)==x155)^x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	static int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x157<x158)==x159)^x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int16_t x163 = INT16_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (((x161<x162)==x163)^x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -227167741;
	int32_t x166 = INT32_MIN;
	int64_t x167 = 2786LL;
	volatile int32_t t41 = -25113944;

	t41 = (((x165<x166)==x167)^x168);

	if (t41 != -7393) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint64_t x170 = 311301745175LLU;
	uint32_t x171 = UINT32_MAX;
	uint64_t x172 = 752401209999905866LLU;
	static volatile uint64_t t42 = 6178144560249246LLU;

	t42 = (((x169<x170)==x171)^x172);

	if (t42 != 752401209999905866LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -11;
	int8_t x175 = -1;
	volatile uint32_t x176 = 227U;
	volatile uint32_t t43 = 1534685U;

	t43 = (((x173<x174)==x175)^x176);

	if (t43 != 227U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	volatile uint8_t x178 = 1U;
	int8_t x180 = INT8_MAX;

	t44 = (((x177<x178)==x179)^x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 28;
	int8_t x182 = 0;
	uint16_t x184 = UINT16_MAX;

	t45 = (((x181<x182)==x183)^x184);

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 32U;
	uint64_t x187 = 399510LLU;
	static int16_t x188 = -1498;
	int32_t t46 = -20943678;

	t46 = (((x185<x186)==x187)^x188);

	if (t46 != -1498) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = 105U;
	int64_t x192 = -1529788LL;
	volatile int64_t t47 = 111667737051547LL;

	t47 = (((x189<x190)==x191)^x192);

	if (t47 != -1529788LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int32_t x195 = -1;
	int8_t x196 = 2;

	t48 = (((x193<x194)==x195)^x196);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -26938416;
	volatile int16_t x198 = INT16_MAX;
	static uint16_t x199 = 204U;
	static int32_t t49 = -2;

	t49 = (((x197<x198)==x199)^x200);

	if (t49 != -292500) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 151216U;
	static int16_t x202 = -1;
	uint8_t x203 = 60U;
	volatile int8_t x204 = INT8_MAX;
	int32_t t50 = 80;

	t50 = (((x201<x202)==x203)^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -79876328836079084LL;
	volatile uint32_t x206 = 266561466U;
	volatile uint32_t x207 = 13332U;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 27130116;

	t51 = (((x205<x206)==x207)^x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x209 = INT16_MAX;
	static int8_t x210 = -1;
	static int32_t x211 = INT32_MIN;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = (((x209<x210)==x211)^x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	static uint16_t x214 = 12706U;
	volatile int64_t t53 = INT64_MAX;

	t53 = (((x213<x214)==x215)^x216);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	static uint8_t x219 = 10U;
	uint32_t x220 = UINT32_MAX;
	static volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x217<x218)==x219)^x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -25;
	int64_t x223 = -25175765831178LL;
	uint8_t x224 = 2U;

	t55 = (((x221<x222)==x223)^x224);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	static uint64_t x228 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (((x225<x226)==x227)^x228);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 24U;
	int32_t x230 = INT32_MIN;
	static volatile int32_t x231 = INT32_MIN;
	volatile int32_t t57 = 1;

	t57 = (((x229<x230)==x231)^x232);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x235 = 1;

	t58 = (((x233<x234)==x235)^x236);

	if (t58 != 110) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = -50689715;
	int64_t x239 = -1LL;
	volatile uint16_t x240 = UINT16_MAX;
	int32_t t59 = 894515;

	t59 = (((x237<x238)==x239)^x240);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 1;
	volatile int64_t x243 = -3412466LL;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 143903;

	t60 = (((x241<x242)==x243)^x244);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -75655;
	static uint16_t x246 = UINT16_MAX;
	int64_t x247 = -1LL;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = -287;

	t61 = (((x245<x246)==x247)^x248);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	int32_t x250 = -1;
	static int16_t x251 = INT16_MIN;
	volatile int64_t x252 = -393186970553517LL;

	t62 = (((x249<x250)==x251)^x252);

	if (t62 != -393186970553517LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -26;
	volatile int32_t t63 = -3635636;

	t63 = (((x253<x254)==x255)^x256);

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -1;
	static int64_t x259 = -1LL;
	static int64_t t64 = -285724813190240478LL;

	t64 = (((x257<x258)==x259)^x260);

	if (t64 != 1933177260LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x261 = -1LL;
	static int16_t x262 = -1;
	int32_t x263 = 520;
	int8_t x264 = -1;
	static volatile int32_t t65 = 1;

	t65 = (((x261<x262)==x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = -3;
	int64_t x266 = -1LL;
	int16_t x267 = INT16_MAX;
	int32_t x268 = -1;
	static volatile int32_t t66 = -3;

	t66 = (((x265<x266)==x267)^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	static uint16_t x270 = 43U;
	uint8_t x271 = 27U;
	volatile int8_t x272 = -20;
	volatile int32_t t67 = -52930;

	t67 = (((x269<x270)==x271)^x272);

	if (t67 != -20) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x274 = 2U;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = 2970U;
	volatile int32_t t68 = -3;

	t68 = (((x273<x274)==x275)^x276);

	if (t68 != 2970) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 3177264042442778LLU;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = 110U;
	volatile int32_t t69 = 7571;

	t69 = (((x277<x278)==x279)^x280);

	if (t69 != -479377345) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = UINT8_MAX;
	int32_t x283 = INT32_MIN;
	volatile uint64_t x284 = 2143444029137077LLU;
	uint64_t t70 = 24LLU;

	t70 = (((x281<x282)==x283)^x284);

	if (t70 != 2143444029137077LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = 6;

	t71 = (((x285<x286)==x287)^x288);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 379U;
	int32_t x290 = INT32_MIN;
	static int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	static int32_t t72 = 0;

	t72 = (((x289<x290)==x291)^x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;

	t73 = (((x293<x294)==x295)^x296);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -1LL;
	int32_t x298 = -1986469;
	int64_t x299 = INT64_MIN;
	static uint64_t x300 = 315774293129585104LLU;
	uint64_t t74 = 62LLU;

	t74 = (((x297<x298)==x299)^x300);

	if (t74 != 315774293129585104LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -11;
	static int16_t x302 = -1;
	static volatile int32_t x303 = INT32_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x301<x302)==x303)^x304);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 79U;
	int8_t x306 = 3;
	static uint16_t x307 = 2987U;
	uint32_t x308 = UINT32_MAX;
	static uint32_t t76 = UINT32_MAX;

	t76 = (((x305<x306)==x307)^x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	static volatile int32_t x310 = -254;
	static uint8_t x311 = 81U;
	int16_t x312 = 475;
	int32_t t77 = 16552505;

	t77 = (((x309<x310)==x311)^x312);

	if (t77 != 475) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = 342775040999LL;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = -1;
	int32_t t78 = -40;

	t78 = (((x313<x314)==x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -2784;
	uint8_t x318 = UINT8_MAX;
	volatile uint32_t x320 = 449U;
	static uint32_t t79 = 15U;

	t79 = (((x317<x318)==x319)^x320);

	if (t79 != 449U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x322 = -1;
	static int8_t x323 = 0;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = (((x321<x322)==x323)^x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 3703776U;
	static int32_t t81 = -10;

	t81 = (((x325<x326)==x327)^x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MIN;
	uint16_t x330 = UINT16_MAX;
	static uint32_t x331 = 101860U;
	int16_t x332 = INT16_MAX;
	int32_t t82 = 161911035;

	t82 = (((x329<x330)==x331)^x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	uint16_t x334 = 0U;
	int32_t x335 = -30;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (((x333<x334)==x335)^x336);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 1495243;
	int64_t x338 = 1674684895186LL;
	int16_t x339 = 0;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = 6446;

	t84 = (((x337<x338)==x339)^x340);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 1650573953U;
	int64_t x342 = 44484763LL;
	int64_t x343 = INT64_MAX;
	uint8_t x344 = 7U;
	int32_t t85 = -1;

	t85 = (((x341<x342)==x343)^x344);

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	uint32_t x347 = 83121U;
	uint32_t x348 = UINT32_MAX;
	static uint32_t t86 = UINT32_MAX;

	t86 = (((x345<x346)==x347)^x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static uint64_t x350 = 323362LLU;
	static int8_t x351 = -11;
	int16_t x352 = -1;
	int32_t t87 = -127;

	t87 = (((x349<x350)==x351)^x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 5896U;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = INT32_MAX;
	volatile int32_t t88 = -64254234;

	t88 = (((x353<x354)==x355)^x356);

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = 0;
	uint64_t x359 = UINT64_MAX;
	static int32_t t89 = -207194;

	t89 = (((x357<x358)==x359)^x360);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	static int64_t x362 = 132422761487LL;
	volatile uint16_t x363 = UINT16_MAX;
	int16_t x364 = -1;
	static int32_t t90 = 75;

	t90 = (((x361<x362)==x363)^x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MIN;
	volatile int32_t t91 = -215;

	t91 = (((x365<x366)==x367)^x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MAX;

	t92 = (((x369<x370)==x371)^x372);

	if (t92 != -307) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MAX;
	int16_t x374 = -5;
	static int32_t x375 = -119568396;
	static volatile int8_t x376 = INT8_MIN;

	t93 = (((x373<x374)==x375)^x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	static uint16_t x378 = 29U;
	static int32_t x379 = -1;
	uint16_t x380 = UINT16_MAX;

	t94 = (((x377<x378)==x379)^x380);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 17U;
	uint32_t x384 = 52082441U;
	uint32_t t95 = 15473218U;

	t95 = (((x381<x382)==x383)^x384);

	if (t95 != 52082441U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x386 = 2373U;
	int16_t x387 = -1239;
	static uint64_t x388 = UINT64_MAX;

	t96 = (((x385<x386)==x387)^x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 267;
	volatile uint64_t x390 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -5922038;

	t97 = (((x389<x390)==x391)^x392);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x394 = -1;
	uint8_t x395 = 30U;
	int64_t x396 = 7813818119339121LL;

	t98 = (((x393<x394)==x395)^x396);

	if (t98 != 7813818119339121LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 3978040LLU;
	static int8_t x398 = -1;
	static int16_t x399 = 267;

	t99 = (((x397<x398)==x399)^x400);

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

