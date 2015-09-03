#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x6 = -985246;
int16_t x8 = INT16_MAX;
int32_t t2 = 4;
uint8_t x13 = 35U;
static int16_t x15 = INT16_MAX;
uint32_t x16 = UINT32_MAX;
int64_t x19 = INT64_MAX;
int8_t x20 = -4;
volatile int32_t t4 = -14614479;
volatile int32_t t5 = 293640;
static volatile int32_t t6 = 782939;
int8_t x30 = 1;
volatile int32_t t7 = -56;
static uint64_t x39 = 14677349LLU;
int8_t x42 = -1;
static uint32_t x47 = UINT32_MAX;
int64_t x48 = -1LL;
int32_t t11 = -16478182;
static int64_t x51 = INT64_MIN;
static uint64_t x52 = UINT64_MAX;
static volatile int32_t t12 = 387;
uint64_t x55 = UINT64_MAX;
static int8_t x56 = -18;
int64_t x59 = 6446LL;
volatile uint32_t x62 = UINT32_MAX;
int64_t x69 = -972179900789465359LL;
int16_t x72 = INT16_MIN;
volatile uint32_t x79 = UINT32_MAX;
static int16_t x83 = INT16_MIN;
int8_t x95 = INT8_MAX;
int32_t t22 = -29179563;
int32_t t23 = -86135;
static int32_t x107 = -1;
int8_t x110 = -1;
int8_t x114 = -1;
int64_t x127 = INT64_MIN;
uint32_t x128 = 75405374U;
int32_t t30 = 196621755;
int64_t x141 = INT64_MIN;
int32_t t34 = -5;
volatile int64_t x154 = -1LL;
static int64_t x163 = -107218619670541LL;
int32_t t36 = -5619836;
static int32_t t37 = -3909338;
volatile int8_t x184 = INT8_MIN;
static int16_t x192 = INT16_MAX;
uint16_t x193 = 14829U;
volatile int32_t x203 = INT32_MIN;
volatile int32_t t47 = 107829965;
volatile int8_t x219 = INT8_MAX;
volatile int16_t x229 = 43;
volatile uint8_t x230 = 84U;
int16_t x240 = 7291;
int32_t t56 = 35693;
volatile int32_t t57 = 9860;
volatile uint32_t x253 = UINT32_MAX;
int32_t t58 = 3837409;
int64_t x267 = -1LL;
int32_t t61 = 352;
int64_t x271 = 417669834831383085LL;
uint8_t x274 = UINT8_MAX;
int32_t x277 = INT32_MIN;
int16_t x285 = INT16_MAX;
volatile uint64_t x294 = UINT64_MAX;
static int32_t t69 = -355;
int64_t x309 = INT64_MAX;
int64_t x310 = -1LL;
volatile int64_t x312 = -1LL;
volatile int32_t t72 = -1085530;
static int8_t x323 = INT8_MAX;
uint16_t x331 = 13U;
int8_t x336 = INT8_MIN;
int32_t t77 = -2;
int16_t x340 = INT16_MIN;
int8_t x343 = -1;
int16_t x344 = INT16_MIN;
int32_t t82 = -451;
static int32_t x363 = 19649429;
int32_t t84 = -3174;
int64_t x365 = INT64_MIN;
int8_t x371 = INT8_MIN;
static uint32_t x374 = 112991781U;
static uint8_t x384 = UINT8_MAX;
int8_t x388 = INT8_MIN;
volatile int64_t x395 = INT64_MIN;
uint32_t x396 = UINT32_MAX;
int32_t x397 = -1;
static int32_t t93 = -388854;
int8_t x410 = INT8_MIN;
volatile int32_t t95 = 1051;
int16_t x424 = INT16_MIN;
uint16_t x427 = UINT16_MAX;
int16_t x428 = -1;
int32_t t99 = 57596382;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -57;

	t0 = ((x1&x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -17;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -563676;

	t1 = ((x5&x6)<(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -37;
	static volatile int64_t x10 = INT64_MAX;
	volatile uint8_t x11 = 98U;
	int32_t x12 = -60646;

	t2 = ((x9&x10)<(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	int32_t t3 = -101;

	t3 = ((x13&x14)<(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	static int16_t x18 = 64;

	t4 = ((x17&x18)<(x19+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int8_t x24 = 9;

	t5 = ((x21&x22)<(x23+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	static uint16_t x26 = 3774U;
	static int32_t x27 = -863792127;
	uint64_t x28 = 98LLU;

	t6 = ((x25&x26)<(x27+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 12LLU;
	volatile int32_t x31 = -1;
	int16_t x32 = -1;

	t7 = ((x29&x30)<(x31+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -12424;
	int8_t x34 = -12;
	static int64_t x35 = 8665256LL;
	int8_t x36 = -1;
	volatile int32_t t8 = 7900;

	t8 = ((x33&x34)<(x35+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = 33482;
	static uint32_t x38 = 1777U;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -12181;

	t9 = ((x37&x38)<(x39+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -92738;
	int8_t x43 = -2;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 1;

	t10 = ((x41&x42)<(x43+x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -815560484866398LL;
	volatile uint64_t x46 = 1761LLU;

	t11 = ((x45&x46)<(x47+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int64_t x50 = INT64_MIN;

	t12 = ((x49&x50)<(x51+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	volatile int8_t x54 = 1;
	volatile int32_t t13 = 42;

	t13 = ((x53&x54)<(x55+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int16_t x58 = -3123;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = 523086;

	t14 = ((x57&x58)<(x59+x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1U;
	int16_t x63 = INT16_MAX;
	volatile int32_t x64 = -525376;
	int32_t t15 = -708006;

	t15 = ((x61&x62)<(x63+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	static uint64_t x66 = 2208LLU;
	int32_t x67 = -1055;
	int8_t x68 = -1;
	volatile int32_t t16 = 0;

	t16 = ((x65&x66)<(x67+x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = -1;
	static uint16_t x71 = 53U;
	volatile int32_t t17 = 1;

	t17 = ((x69&x70)<(x71+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	volatile int64_t x74 = INT64_MIN;
	int8_t x75 = -1;
	int64_t x76 = -1LL;
	int32_t t18 = -30905981;

	t18 = ((x73&x74)<(x75+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 28;
	int32_t x78 = 2;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 66662;

	t19 = ((x77&x78)<(x79+x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = 2970;
	int16_t x82 = -115;
	int16_t x84 = -311;
	int32_t t20 = 35660;

	t20 = ((x81&x82)<(x83+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -3;
	int32_t x90 = 819560;
	static int8_t x91 = 13;
	int16_t x92 = INT16_MIN;
	int32_t t21 = 203090456;

	t21 = ((x89&x90)<(x91+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = 1;
	int8_t x94 = 0;
	volatile int8_t x96 = INT8_MIN;

	t22 = ((x93&x94)<(x95+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	uint64_t x98 = 108724590914847LLU;
	int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;

	t23 = ((x97&x98)<(x99+x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = 13;
	int64_t x106 = 1LL;
	int8_t x108 = 0;
	int32_t t24 = -89802147;

	t24 = ((x105&x106)<(x107+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 32U;
	volatile int64_t x111 = -33014014LL;
	volatile uint64_t x112 = UINT64_MAX;
	volatile int32_t t25 = -13192;

	t25 = ((x109&x110)<(x111+x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x113 = 3244U;
	static int32_t x115 = 575541861;
	int32_t x116 = INT32_MIN;
	int32_t t26 = 2052;

	t26 = ((x113&x114)<(x115+x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	static volatile uint32_t x118 = 44U;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t27 = -25835450;

	t27 = ((x117&x118)<(x119+x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -1683;
	uint16_t x122 = 598U;
	int32_t x123 = INT32_MAX;
	int32_t x124 = -1;
	volatile int32_t t28 = -281713;

	t28 = ((x121&x122)<(x123+x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = UINT64_MAX;
	volatile int32_t t29 = 23;

	t29 = ((x125&x126)<(x127+x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	volatile int64_t x130 = INT64_MAX;
	int8_t x131 = 56;
	int64_t x132 = -2901332155LL;

	t30 = ((x129&x130)<(x131+x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 0U;
	int8_t x134 = INT8_MAX;
	int16_t x135 = INT16_MAX;
	int8_t x136 = -1;
	int32_t t31 = 353377995;

	t31 = ((x133&x134)<(x135+x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = UINT8_MAX;
	static int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MAX;
	static volatile int32_t t32 = -333039;

	t32 = ((x137&x138)<(x139+x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MAX;
	static int8_t x144 = -1;
	int32_t t33 = -29498541;

	t33 = ((x141&x142)<(x143+x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = 895LL;
	int32_t x146 = -1;
	uint64_t x147 = 20653LLU;
	int64_t x148 = -61772523LL;

	t34 = ((x145&x146)<(x147+x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x153 = -1;
	volatile int8_t x155 = -1;
	volatile uint64_t x156 = 4330628352657091LLU;
	int32_t t35 = -46072284;

	t35 = ((x153&x154)<(x155+x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 11U;
	uint32_t x162 = 7111909U;
	static int8_t x164 = INT8_MIN;

	t36 = ((x161&x162)<(x163+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 38U;
	volatile int16_t x166 = INT16_MAX;
	static int64_t x167 = INT64_MIN;
	static uint16_t x168 = 121U;

	t37 = ((x165&x166)<(x167+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	static volatile int64_t x170 = INT64_MIN;
	int16_t x171 = 1;
	static int32_t x172 = INT32_MIN;
	static volatile int32_t t38 = 910;

	t38 = ((x169&x170)<(x171+x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 2061265LLU;
	int32_t x174 = INT32_MIN;
	int64_t x175 = 67145747134LL;
	static volatile int32_t x176 = INT32_MIN;
	volatile int32_t t39 = 29;

	t39 = ((x173&x174)<(x175+x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = -25305283;
	static volatile int32_t x178 = INT32_MIN;
	int32_t x179 = -66517663;
	volatile uint16_t x180 = 13U;
	volatile int32_t t40 = -14;

	t40 = ((x177&x178)<(x179+x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 32924598372547LLU;
	uint64_t x182 = 264725807255789817LLU;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t t41 = 52;

	t41 = ((x181&x182)<(x183+x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 57802;
	volatile int16_t x186 = -1;
	int32_t x187 = -1;
	int8_t x188 = -1;
	static int32_t t42 = 589646777;

	t42 = ((x185&x186)<(x187+x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = 65084476203810193LL;
	volatile int8_t x190 = INT8_MAX;
	volatile int8_t x191 = -1;
	int32_t t43 = 33281523;

	t43 = ((x189&x190)<(x191+x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x194 = 3LLU;
	int64_t x195 = INT64_MIN;
	volatile int8_t x196 = 0;
	int32_t t44 = -324546890;

	t44 = ((x193&x194)<(x195+x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 2U;
	int16_t x198 = INT16_MIN;
	static int8_t x199 = -1;
	int32_t x200 = -204367;
	volatile int32_t t45 = 0;

	t45 = ((x197&x198)<(x199+x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 3099799213482289267LLU;
	int64_t x202 = INT64_MIN;
	int64_t x204 = -829549831517181LL;
	int32_t t46 = -36221963;

	t46 = ((x201&x202)<(x203+x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 34U;
	int64_t x210 = -1LL;
	static int16_t x211 = INT16_MIN;
	static uint64_t x212 = 64313745011LLU;

	t47 = ((x209&x210)<(x211+x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 15995492;
	uint64_t x214 = 54063LLU;
	int16_t x215 = 0;
	int64_t x216 = INT64_MIN;
	static volatile int32_t t48 = 218071701;

	t48 = ((x213&x214)<(x215+x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 866691681U;
	int8_t x218 = INT8_MAX;
	static int64_t x220 = -1LL;
	static int32_t t49 = -23;

	t49 = ((x217&x218)<(x219+x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x221 = UINT32_MAX;
	int32_t x222 = INT32_MAX;
	int16_t x223 = -10341;
	uint32_t x224 = 3567U;
	volatile int32_t t50 = 351;

	t50 = ((x221&x222)<(x223+x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -896;
	int8_t x226 = 9;
	static uint32_t x227 = 56730754U;
	int16_t x228 = 19;
	int32_t t51 = 8611;

	t51 = ((x225&x226)<(x227+x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x231 = -1;
	int16_t x232 = -1;
	volatile int32_t t52 = 76;

	t52 = ((x229&x230)<(x231+x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 22U;
	uint64_t x234 = 65142568721LLU;
	volatile int16_t x235 = -8;
	int32_t x236 = -1;
	static volatile int32_t t53 = 2933;

	t53 = ((x233&x234)<(x235+x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = INT8_MIN;
	static int8_t x238 = 8;
	uint64_t x239 = 616611522LLU;
	static volatile int32_t t54 = 26800;

	t54 = ((x237&x238)<(x239+x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = INT8_MAX;
	int16_t x242 = -1;
	static uint8_t x243 = 26U;
	volatile int64_t x244 = 431642879261861457LL;
	int32_t t55 = 13940;

	t55 = ((x241&x242)<(x243+x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 63U;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = INT8_MIN;

	t56 = ((x245&x246)<(x247+x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = -1;
	uint8_t x251 = 4U;
	volatile uint32_t x252 = 357238297U;

	t57 = ((x249&x250)<(x251+x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x254 = -6390;
	uint8_t x255 = 72U;
	uint32_t x256 = UINT32_MAX;

	t58 = ((x253&x254)<(x255+x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile uint16_t x258 = UINT16_MAX;
	static int32_t x259 = 113;
	static volatile int16_t x260 = INT16_MAX;
	static volatile int32_t t59 = -168;

	t59 = ((x257&x258)<(x259+x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = 136953456111LLU;
	volatile int64_t x262 = INT64_MIN;
	int16_t x263 = -116;
	volatile int16_t x264 = 14500;
	static int32_t t60 = 12350;

	t60 = ((x261&x262)<(x263+x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = -11;
	static int16_t x268 = 25;

	t61 = ((x265&x266)<(x267+x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = 550892U;
	volatile int16_t x270 = -1;
	uint8_t x272 = 1U;
	volatile int32_t t62 = -343692727;

	t62 = ((x269&x270)<(x271+x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 71U;
	uint64_t x275 = 2LLU;
	int64_t x276 = INT64_MIN;
	volatile int32_t t63 = 5803;

	t63 = ((x273&x274)<(x275+x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x278 = 8;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 2U;
	static int32_t t64 = -44815084;

	t64 = ((x277&x278)<(x279+x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = UINT64_MAX;
	int8_t x282 = 0;
	uint16_t x283 = UINT16_MAX;
	volatile uint64_t x284 = 2713268246164073LLU;
	static int32_t t65 = -13;

	t65 = ((x281&x282)<(x283+x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x286 = 46;
	int8_t x287 = 31;
	int32_t x288 = INT32_MIN;
	int32_t t66 = 11824;

	t66 = ((x285&x286)<(x287+x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x289 = 1951179562897199305LLU;
	volatile int32_t x290 = -262477447;
	int8_t x291 = -1;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t67 = 609;

	t67 = ((x289&x290)<(x291+x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x293 = UINT8_MAX;
	int64_t x295 = 333220304856635683LL;
	volatile int16_t x296 = -1;
	volatile int32_t t68 = 4616;

	t68 = ((x293&x294)<(x295+x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = -112668LL;
	volatile int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 1U;

	t69 = ((x297&x298)<(x299+x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x301 = 5516U;
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = 2035LL;
	int8_t x304 = INT8_MIN;
	volatile int32_t t70 = -513450468;

	t70 = ((x301&x302)<(x303+x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = 87;
	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	static int8_t x308 = 12;
	int32_t t71 = 126032739;

	t71 = ((x305&x306)<(x307+x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x311 = 5;

	t72 = ((x309&x310)<(x311+x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = -1LL;
	static int32_t x315 = INT32_MAX;
	uint32_t x316 = 780U;
	static volatile int32_t t73 = -34;

	t73 = ((x313&x314)<(x315+x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -23;
	int8_t x318 = 0;
	int16_t x319 = -1;
	int16_t x320 = 14475;
	int32_t t74 = 1001;

	t74 = ((x317&x318)<(x319+x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x321 = 1422292603U;
	volatile int32_t x322 = INT32_MAX;
	uint32_t x324 = UINT32_MAX;
	int32_t t75 = 614455;

	t75 = ((x321&x322)<(x323+x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = -1837;
	int32_t x330 = INT32_MIN;
	int16_t x332 = -1;
	volatile int32_t t76 = -1913761;

	t76 = ((x329&x330)<(x331+x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = 5;
	static int8_t x334 = INT8_MAX;
	static int64_t x335 = INT64_MAX;

	t77 = ((x333&x334)<(x335+x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = -1LL;
	volatile int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	volatile int32_t t78 = -10584022;

	t78 = ((x337&x338)<(x339+x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -1266585LL;
	volatile int16_t x342 = -13;
	int32_t t79 = 9503789;

	t79 = ((x341&x342)<(x343+x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = INT32_MIN;
	uint64_t x346 = 328206600LLU;
	int8_t x347 = INT8_MIN;
	int32_t x348 = -5;
	volatile int32_t t80 = 12591694;

	t80 = ((x345&x346)<(x347+x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t81 = 17356;

	t81 = ((x349&x350)<(x351+x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x353 = 7U;
	volatile int16_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	uint32_t x356 = UINT32_MAX;

	t82 = ((x353&x354)<(x355+x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x358 = 818725U;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t83 = 201590;

	t83 = ((x357&x358)<(x359+x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MAX;
	volatile uint64_t x362 = 174231LLU;
	volatile int32_t x364 = INT32_MIN;

	t84 = ((x361&x362)<(x363+x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x366 = 11233U;
	volatile int32_t x367 = 96034506;
	int8_t x368 = INT8_MIN;
	int32_t t85 = -1420561;

	t85 = ((x365&x366)<(x367+x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = INT16_MIN;
	static int32_t x370 = 186580;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t86 = 2;

	t86 = ((x369&x370)<(x371+x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x373 = 11892889LLU;
	uint8_t x375 = 2U;
	uint32_t x376 = 2321U;
	static volatile int32_t t87 = 63040855;

	t87 = ((x373&x374)<(x375+x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	volatile int16_t x380 = -85;
	int32_t t88 = -592380551;

	t88 = ((x377&x378)<(x379+x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 8172324LLU;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	volatile int32_t t89 = 196282;

	t89 = ((x381&x382)<(x383+x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 3647U;
	volatile uint64_t x386 = UINT64_MAX;
	static uint16_t x387 = UINT16_MAX;
	int32_t t90 = 536518630;

	t90 = ((x385&x386)<(x387+x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x389 = 103533405974LLU;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 22420965911989417LLU;
	int32_t t91 = -1;

	t91 = ((x389&x390)<(x391+x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = -5LL;
	volatile uint16_t x394 = 297U;
	static volatile int32_t t92 = -12512;

	t92 = ((x393&x394)<(x395+x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x398 = 6;
	volatile int64_t x399 = -25213622300160391LL;
	volatile uint32_t x400 = UINT32_MAX;

	t93 = ((x397&x398)<(x399+x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x401 = -1;
	static volatile int64_t x402 = INT64_MIN;
	int8_t x403 = -54;
	volatile int8_t x404 = -1;
	int32_t t94 = 160483;

	t94 = ((x401&x402)<(x403+x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = 0;
	volatile uint8_t x411 = 24U;
	static volatile int16_t x412 = 473;

	t95 = ((x409&x410)<(x411+x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x413 = INT16_MIN;
	static int8_t x414 = -1;
	static int16_t x415 = 534;
	uint32_t x416 = 106775U;
	static int32_t t96 = 102265;

	t96 = ((x413&x414)<(x415+x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x417 = INT64_MIN;
	uint32_t x418 = 7909576U;
	int64_t x419 = -1LL;
	volatile int32_t x420 = INT32_MIN;
	static int32_t t97 = -14920;

	t97 = ((x417&x418)<(x419+x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x421 = UINT64_MAX;
	static int64_t x422 = INT64_MAX;
	int64_t x423 = -338797005726243588LL;
	int32_t t98 = 23587402;

	t98 = ((x421&x422)<(x423+x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x425 = INT8_MAX;
	int16_t x426 = -618;

	t99 = ((x425&x426)<(x427+x428));

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

