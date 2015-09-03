#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int64_t x4 = -1LL;
int8_t x8 = INT8_MIN;
uint16_t x12 = 1030U;
static int64_t t3 = -9LL;
int32_t x18 = INT32_MIN;
int8_t x20 = -1;
int64_t x26 = INT64_MAX;
int64_t x29 = 2LL;
volatile int64_t t7 = 419100819LL;
int64_t x34 = INT64_MAX;
uint64_t x37 = 30447631102452468LLU;
int32_t x40 = 2568;
int32_t t10 = -459434;
int32_t x46 = 44777;
uint8_t x48 = UINT8_MAX;
static uint64_t x51 = 244186280LLU;
uint64_t x56 = 122964326028LLU;
int32_t t13 = -906607;
uint16_t x60 = UINT16_MAX;
volatile uint32_t t15 = 1661304U;
uint32_t x75 = UINT32_MAX;
volatile int32_t x99 = INT32_MIN;
int64_t x104 = INT64_MIN;
int64_t x105 = -3281339200879LL;
static int64_t x114 = INT64_MIN;
int16_t x115 = -1;
static int16_t x118 = INT16_MIN;
int64_t x120 = INT64_MIN;
int32_t x139 = 27;
int64_t x140 = 280867443902356LL;
uint16_t x142 = 22661U;
int64_t x144 = -1LL;
static int32_t t34 = 672;
volatile int16_t x146 = INT16_MAX;
int32_t x148 = INT32_MIN;
static volatile int32_t t35 = 399;
static int32_t t37 = 725310451;
uint8_t x170 = UINT8_MAX;
volatile uint16_t x171 = UINT16_MAX;
volatile int64_t t40 = 6292296307092058LL;
uint16_t x173 = 3U;
uint32_t t41 = 7081829U;
int64_t x181 = 5LL;
int32_t x182 = INT32_MAX;
static int8_t x185 = INT8_MIN;
static volatile int64_t x188 = -13860775672866LL;
uint16_t x193 = 5U;
int16_t x197 = -1;
int16_t x200 = INT16_MAX;
static uint16_t x202 = 23939U;
static volatile int8_t x204 = INT8_MAX;
uint16_t x205 = 15U;
uint16_t x207 = 5416U;
volatile int64_t x212 = 17967094605478LL;
int64_t x213 = -15325LL;
uint32_t x214 = 2489908U;
static uint8_t x215 = UINT8_MAX;
int8_t x216 = -1;
volatile int64_t t51 = 36230446682LL;
uint64_t x217 = UINT64_MAX;
uint16_t x227 = 3U;
static uint64_t t54 = 355260857139705969LLU;
static uint64_t x234 = 521266687290393LLU;
int64_t x243 = -43787LL;
int64_t x245 = -1LL;
static uint8_t x247 = 3U;
int8_t x248 = -1;
static volatile int64_t x251 = -234LL;
uint64_t x255 = UINT64_MAX;
uint64_t x256 = 1049554743554519LLU;
int32_t x258 = INT32_MIN;
static volatile int32_t t62 = -1;
int16_t x261 = INT16_MAX;
int32_t x265 = 229;
int32_t x270 = INT32_MIN;
uint64_t x272 = 3521248985597LLU;
uint64_t x281 = 6LLU;
int32_t x284 = 1;
uint8_t x285 = 4U;
int64_t x286 = INT64_MIN;
int64_t t69 = -2277929422LL;
int32_t t71 = -1;
uint32_t x306 = UINT32_MAX;
static uint32_t t74 = 80U;
uint32_t x315 = 25685869U;
volatile int64_t t75 = -3949721105174373LL;
int8_t x328 = INT8_MIN;
uint64_t x329 = 1189458331115060000LLU;
volatile uint64_t t79 = 928796381LLU;
static volatile int64_t x334 = -1LL;
int32_t x340 = -1;
static uint16_t x343 = 1U;
uint16_t x349 = UINT16_MAX;
static int64_t x352 = INT64_MAX;
int64_t x355 = -3LL;
int64_t t86 = -408828744683LL;
uint32_t x364 = UINT32_MAX;
static int64_t t90 = 2012859LL;
int16_t x378 = INT16_MIN;
int8_t x382 = INT8_MIN;
volatile uint16_t x383 = 11U;
int64_t x390 = INT64_MIN;
uint8_t x391 = 125U;
volatile int64_t t94 = 406671804087635457LL;
volatile uint64_t t95 = 6507892819LLU;
volatile int64_t x400 = 131121712086LL;
volatile int32_t t96 = 8737;
static uint16_t x402 = UINT16_MAX;
int8_t x408 = INT8_MIN;
volatile int32_t t98 = 8123021;
volatile int32_t t99 = 2;


void f0(void) {
	int8_t x1 = -2;
	int32_t x3 = 26839;
	volatile int32_t t0 = 6552;

	t0 = ((x1/x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int64_t x6 = INT64_MIN;
	static int8_t x7 = INT8_MIN;
	static volatile int64_t t1 = -7767392LL;

	t1 = ((x5/x6)*(x7==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x10 = 127298423360LLU;
	int16_t x11 = -798;
	uint64_t t2 = 233063768263012835LLU;

	t2 = ((x9/x10)*(x11==x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint32_t x14 = UINT32_MAX;
	volatile uint32_t x15 = 1478U;
	int64_t x16 = -25385083LL;

	t3 = ((x13/x14)*(x15==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint8_t x19 = 45U;
	volatile int32_t t4 = -15944097;

	t4 = ((x17/x18)*(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	volatile int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = 7;
	volatile uint64_t t5 = 2525212095LLU;

	t5 = ((x21/x22)*(x23==x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1LL;
	static int8_t x27 = 0;
	int64_t x28 = -1LL;
	int64_t t6 = -3072542LL;

	t6 = ((x25/x26)*(x27==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;

	t7 = ((x29/x30)*(x31==x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;
	int64_t t8 = 3710LL;

	t8 = ((x33/x34)*(x35==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MAX;
	uint64_t t9 = 32932994LLU;

	t9 = ((x37/x38)*(x39==x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 2U;
	volatile int8_t x42 = INT8_MAX;
	volatile int16_t x43 = 1526;
	static int16_t x44 = INT16_MIN;

	t10 = ((x41/x42)*(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 230747581712317581LLU;
	int64_t x47 = -1LL;
	uint64_t t11 = 3196527929LLU;

	t11 = ((x45/x46)*(x47==x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = INT32_MIN;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -28108;

	t12 = ((x49/x50)*(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MIN;

	t13 = ((x53/x54)*(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -6;
	uint64_t x58 = 1609024221775171379LLU;
	volatile int64_t x59 = 8866711LL;
	volatile uint64_t t14 = 1788560049LLU;

	t14 = ((x57/x58)*(x59==x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 989504U;
	int16_t x62 = 1;
	static int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MIN;

	t15 = ((x61/x62)*(x63==x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	int64_t x66 = -2156120554622948394LL;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = 26570LLU;
	volatile int64_t t16 = -328570022487559LL;

	t16 = ((x65/x66)*(x67==x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = 1U;
	static int64_t x71 = 40199206781200LL;
	static int16_t x72 = INT16_MAX;
	volatile int64_t t17 = 1271671LL;

	t17 = ((x69/x70)*(x71==x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = INT8_MIN;
	static volatile int16_t x76 = INT16_MAX;
	static int32_t t18 = -1807;

	t18 = ((x73/x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	volatile int32_t x79 = -1;
	uint32_t x80 = UINT32_MAX;
	int32_t t19 = 33622;

	t19 = ((x77/x78)*(x79==x80));

	if (t19 != -65538) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	static int64_t x83 = INT64_MIN;
	uint16_t x84 = 3U;
	int32_t t20 = -166656;

	t20 = ((x81/x82)*(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	static int8_t x87 = 0;
	static volatile int32_t x88 = -1;
	int32_t t21 = 19479887;

	t21 = ((x85/x86)*(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 1073;
	uint64_t x90 = 113LLU;
	static int16_t x91 = 809;
	int8_t x92 = INT8_MAX;
	static uint64_t t22 = 1273LLU;

	t22 = ((x89/x90)*(x91==x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	uint16_t x98 = UINT16_MAX;
	volatile int64_t x100 = 631168201093LL;
	int64_t t23 = 69734697520355LL;

	t23 = ((x97/x98)*(x99==x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 2;
	int32_t x102 = -1;
	static uint32_t x103 = 6060U;
	volatile int32_t t24 = -40882;

	t24 = ((x101/x102)*(x103==x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = INT32_MAX;
	volatile int16_t x107 = INT16_MIN;
	uint64_t x108 = 26571405984843LLU;
	int64_t t25 = 52128905311287LL;

	t25 = ((x105/x106)*(x107==x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 6LL;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -57073195;
	int64_t x112 = -1LL;
	int64_t t26 = 124387LL;

	t26 = ((x109/x110)*(x111==x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -8565;
	volatile uint32_t x116 = 2115U;
	int64_t t27 = -182866729734397165LL;

	t27 = ((x113/x114)*(x115==x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	int16_t x119 = -1;
	volatile int32_t t28 = -1;

	t28 = ((x117/x118)*(x119==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 808099U;
	int64_t x122 = -1LL;
	uint32_t x123 = 113U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = -57717759501880LL;

	t29 = ((x121/x122)*(x123==x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 4;
	static int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	static uint8_t x128 = UINT8_MAX;
	int32_t t30 = -1541;

	t30 = ((x125/x126)*(x127==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MAX;
	static int32_t x131 = -1;
	uint64_t x132 = 21LLU;
	int64_t t31 = 50445169628LL;

	t31 = ((x129/x130)*(x131==x132));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = UINT16_MAX;
	static int64_t x134 = INT64_MAX;
	int16_t x135 = -368;
	static int8_t x136 = INT8_MIN;
	static int64_t t32 = -1435265637LL;

	t32 = ((x133/x134)*(x135==x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int32_t t33 = 955835;

	t33 = ((x137/x138)*(x139==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -1;
	uint8_t x143 = 92U;

	t34 = ((x141/x142)*(x143==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x145 = -1;
	int16_t x147 = INT16_MIN;

	t35 = ((x145/x146)*(x147==x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -1;
	uint64_t x150 = 4172181LLU;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = 12344U;
	volatile uint64_t t36 = 23936445736LLU;

	t36 = ((x149/x150)*(x151==x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 3;
	int32_t x154 = -1;
	int64_t x155 = INT64_MAX;
	int16_t x156 = 2697;

	t37 = ((x153/x154)*(x155==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x157 = UINT8_MAX;
	static uint32_t x158 = 741U;
	int8_t x159 = 17;
	static uint16_t x160 = UINT16_MAX;
	static volatile uint32_t t38 = 185U;

	t38 = ((x157/x158)*(x159==x160));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 793958363591LLU;
	uint32_t x162 = UINT32_MAX;
	volatile int32_t x163 = -1;
	static int64_t x164 = -1LL;
	uint64_t t39 = 1LLU;

	t39 = ((x161/x162)*(x163==x164));

	if (t39 != 184LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = -29413980LL;
	int16_t x172 = -1;

	t40 = ((x169/x170)*(x171==x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x174 = 5U;
	uint8_t x175 = 38U;
	int32_t x176 = -1;

	t41 = ((x173/x174)*(x175==x176));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = UINT8_MAX;
	uint8_t x178 = 112U;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	static int32_t t42 = 65063123;

	t42 = ((x177/x178)*(x179==x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x183 = -1238;
	int64_t x184 = 1062701133838730754LL;
	static int64_t t43 = -664083964706570LL;

	t43 = ((x181/x182)*(x183==x184));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x186 = 3;
	int64_t x187 = -1LL;
	volatile int32_t t44 = 11;

	t44 = ((x185/x186)*(x187==x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 125249512LLU;
	volatile int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = INT8_MIN;
	volatile uint64_t t45 = 96557709LLU;

	t45 = ((x189/x190)*(x191==x192));

	if (t45 != 986216LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x194 = -1;
	static volatile int64_t x195 = -1022398LL;
	int64_t x196 = 956807042404603LL;
	volatile int32_t t46 = 1052;

	t46 = ((x193/x194)*(x195==x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = -1;
	uint16_t x199 = 3557U;
	static volatile int32_t t47 = 12;

	t47 = ((x197/x198)*(x199==x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = -3679822806103801458LL;
	uint8_t x203 = 31U;
	volatile int64_t t48 = 7874647314LL;

	t48 = ((x201/x202)*(x203==x204));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x206 = INT8_MAX;
	uint8_t x208 = 4U;
	volatile int32_t t49 = 3586;

	t49 = ((x205/x206)*(x207==x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x209 = -5;
	static volatile int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	volatile int32_t t50 = 78428838;

	t50 = ((x209/x210)*(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {


	t51 = ((x213/x214)*(x215==x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x218 = -1LL;
	static int16_t x219 = -1;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t52 = 227355361919110967LLU;

	t52 = ((x217/x218)*(x219==x220));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	uint16_t x222 = 7U;
	uint16_t x223 = 4U;
	int64_t x224 = INT64_MIN;
	static int32_t t53 = 3193228;

	t53 = ((x221/x222)*(x223==x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 38745737579LLU;
	int8_t x226 = -50;
	int32_t x228 = INT32_MAX;

	t54 = ((x225/x226)*(x227==x228));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = 40;
	volatile int32_t x230 = -1;
	uint32_t x231 = 248223U;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 15261;

	t55 = ((x229/x230)*(x231==x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -22064655602LL;
	static uint64_t x235 = 1338592866115931807LLU;
	int8_t x236 = -1;
	volatile uint64_t t56 = 1973145217170414507LLU;

	t56 = ((x233/x234)*(x235==x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = 0;
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;
	static uint64_t t57 = 506695492706LLU;

	t57 = ((x237/x238)*(x239==x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = -14039;
	static int8_t x242 = INT8_MIN;
	static int16_t x244 = -1;
	volatile int32_t t58 = 38;

	t58 = ((x241/x242)*(x243==x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x246 = INT32_MIN;
	volatile int64_t t59 = 51051909214774952LL;

	t59 = ((x245/x246)*(x247==x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MAX;
	volatile uint64_t x250 = UINT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile uint64_t t60 = 30152LLU;

	t60 = ((x249/x250)*(x251==x252));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile uint8_t x254 = UINT8_MAX;
	int32_t t61 = 412451930;

	t61 = ((x253/x254)*(x255==x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x257 = INT8_MAX;
	uint32_t x259 = 2981U;
	uint8_t x260 = 33U;

	t62 = ((x257/x258)*(x259==x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = -4657799;
	volatile int16_t x263 = INT16_MIN;
	uint8_t x264 = 3U;
	int32_t t63 = 3;

	t63 = ((x261/x262)*(x263==x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x266 = 76U;
	volatile int32_t x267 = INT32_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t64 = -51032102;

	t64 = ((x265/x266)*(x267==x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x271 = -1;
	uint64_t t65 = 4599317282497LLU;

	t65 = ((x269/x270)*(x271==x272));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MAX;
	int64_t x276 = INT64_MAX;
	static int32_t t66 = 11;

	t66 = ((x273/x274)*(x275==x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 17180240LLU;
	int8_t x278 = -2;
	uint64_t x279 = 16036LLU;
	int64_t x280 = -1LL;
	volatile uint64_t t67 = 72940157654LLU;

	t67 = ((x277/x278)*(x279==x280));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x282 = INT16_MAX;
	uint8_t x283 = 6U;
	static uint64_t t68 = 1135LLU;

	t68 = ((x281/x282)*(x283==x284));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 3275U;

	t69 = ((x285/x286)*(x287==x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 1U;
	int32_t x291 = -1;
	int8_t x292 = INT8_MAX;
	uint32_t t70 = 1U;

	t70 = ((x289/x290)*(x291==x292));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x293 = INT32_MAX;
	static int16_t x294 = INT16_MIN;
	uint32_t x295 = 31U;
	static int64_t x296 = -866LL;

	t71 = ((x293/x294)*(x295==x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = INT8_MIN;
	uint16_t x298 = 20250U;
	static int32_t x299 = INT32_MAX;
	int64_t x300 = -1LL;
	static volatile int32_t t72 = 1;

	t72 = ((x297/x298)*(x299==x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x301 = UINT16_MAX;
	int64_t x302 = 4077354173971LL;
	static uint32_t x303 = 16820848U;
	int8_t x304 = 23;
	volatile int64_t t73 = -19532222784149893LL;

	t73 = ((x301/x302)*(x303==x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MIN;

	t74 = ((x305/x306)*(x307==x308));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int8_t x316 = INT8_MIN;

	t75 = ((x313/x314)*(x315==x316));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 435139437694166974LLU;
	volatile uint8_t x318 = UINT8_MAX;
	int64_t x319 = INT64_MAX;
	volatile int8_t x320 = INT8_MIN;
	uint64_t t76 = 16433808100610LLU;

	t76 = ((x317/x318)*(x319==x320));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = 5340864253LL;
	int16_t x323 = 2;
	uint64_t x324 = 999926LLU;
	volatile uint64_t t77 = 614607617713857308LLU;

	t77 = ((x321/x322)*(x323==x324));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x325 = UINT32_MAX;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -3941;
	static volatile uint32_t t78 = 61043182U;

	t78 = ((x325/x326)*(x327==x328));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x330 = 27U;
	uint16_t x331 = 26U;
	uint32_t x332 = 13140837U;

	t79 = ((x329/x330)*(x331==x332));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -451;
	int8_t x335 = -1;
	int16_t x336 = INT16_MAX;
	int64_t t80 = -2202187988536987946LL;

	t80 = ((x333/x334)*(x335==x336));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 26U;
	uint16_t x338 = 2U;
	int32_t x339 = -31510100;
	int32_t t81 = -84;

	t81 = ((x337/x338)*(x339==x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = -5;
	uint16_t x342 = 3721U;
	volatile int32_t x344 = INT32_MIN;
	static int32_t t82 = 75481;

	t82 = ((x341/x342)*(x343==x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 1U;
	uint16_t x346 = 111U;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	static int32_t t83 = 1452827;

	t83 = ((x345/x346)*(x347==x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x350 = INT64_MIN;
	uint16_t x351 = UINT16_MAX;
	int64_t t84 = 75LL;

	t84 = ((x349/x350)*(x351==x352));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile int32_t x354 = 245551;
	static uint64_t x356 = 44922288LLU;
	volatile int32_t t85 = -36379;

	t85 = ((x353/x354)*(x355==x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = 1;
	static int64_t x358 = INT64_MAX;
	int32_t x359 = -130686;
	volatile int16_t x360 = 1;

	t86 = ((x357/x358)*(x359==x360));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = -11;
	volatile int8_t x362 = -1;
	uint16_t x363 = 2U;
	static volatile int32_t t87 = 4;

	t87 = ((x361/x362)*(x363==x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 1U;
	static volatile int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MAX;
	static int16_t x368 = INT16_MIN;
	int32_t t88 = 18704;

	t88 = ((x365/x366)*(x367==x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 1815LLU;
	static uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = 0;
	uint64_t t89 = 19349521445LLU;

	t89 = ((x369/x370)*(x371==x372));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MAX;
	static int64_t x375 = INT64_MIN;
	int16_t x376 = -1;

	t90 = ((x373/x374)*(x375==x376));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x377 = 3U;
	int64_t x379 = INT64_MIN;
	static volatile uint16_t x380 = UINT16_MAX;
	static int32_t t91 = 0;

	t91 = ((x377/x378)*(x379==x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = -117538827172305LL;
	static int16_t x384 = -1;
	int64_t t92 = 52767766LL;

	t92 = ((x381/x382)*(x383==x384));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x385 = INT64_MAX;
	uint32_t x386 = 224536363U;
	volatile uint32_t x387 = 1U;
	int64_t x388 = 109422LL;
	int64_t t93 = -3LL;

	t93 = ((x385/x386)*(x387==x388));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MIN;
	volatile uint16_t x392 = 488U;

	t94 = ((x389/x390)*(x391==x392));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MAX;
	static volatile uint64_t x394 = 74719144LLU;
	uint8_t x395 = 3U;
	int64_t x396 = INT64_MIN;

	t95 = ((x393/x394)*(x395==x396));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -1;
	volatile uint8_t x398 = UINT8_MAX;
	static int16_t x399 = INT16_MAX;

	t96 = ((x397/x398)*(x399==x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 54717964U;
	uint32_t x403 = 488839U;
	uint8_t x404 = 15U;
	uint32_t t97 = 1U;

	t97 = ((x401/x402)*(x403==x404));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	static int8_t x407 = -4;

	t98 = ((x405/x406)*(x407==x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x409 = UINT8_MAX;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;
	static int32_t x412 = INT32_MIN;

	t99 = ((x409/x410)*(x411==x412));

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

