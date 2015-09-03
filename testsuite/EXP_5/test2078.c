#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = INT8_MIN;
uint8_t x6 = 1U;
volatile int64_t t1 = -10LL;
static volatile uint32_t t2 = 29603711U;
int16_t x23 = INT16_MAX;
uint64_t x27 = 14151LLU;
int64_t x37 = -65860541919826069LL;
int32_t x46 = -3746495;
uint64_t t9 = 114320LLU;
int64_t x49 = INT64_MIN;
int64_t t10 = INT64_MIN;
uint64_t x57 = 5028775298052LLU;
int32_t x60 = -869;
uint16_t x64 = 12U;
volatile uint8_t x77 = 117U;
uint64_t t17 = 11925258867194LLU;
static uint64_t x83 = 260036928LLU;
static int32_t x92 = -55534;
volatile int32_t x95 = -53;
uint16_t x100 = UINT16_MAX;
int32_t x102 = -1;
volatile int16_t x106 = 6;
int64_t x107 = -3519846830088LL;
static int16_t x108 = INT16_MAX;
int16_t x110 = INT16_MIN;
int64_t x125 = -1LL;
int16_t x126 = 1;
uint64_t t29 = 1101482902687807677LLU;
int16_t x132 = -236;
int32_t x134 = -1;
int16_t x141 = INT16_MIN;
static volatile int64_t t34 = -56080610LL;
int16_t x162 = -1;
uint16_t x167 = UINT16_MAX;
uint8_t x172 = 3U;
static uint64_t x179 = UINT64_MAX;
int32_t x202 = -10882945;
static volatile int64_t t48 = -3007095496870035LL;
static int16_t x210 = INT16_MIN;
uint16_t x213 = 5195U;
int32_t t53 = -6;
static int64_t x229 = -2506456472700LL;
volatile uint8_t x231 = 1U;
uint32_t x232 = 2U;
uint16_t x240 = 245U;
uint32_t x244 = UINT32_MAX;
static uint64_t t57 = 1637LLU;
int32_t x247 = -1;
static volatile int8_t x248 = -39;
static int32_t x251 = INT32_MIN;
static int16_t x257 = -1;
uint32_t x258 = 163U;
uint32_t x259 = 108020337U;
volatile int8_t x264 = INT8_MIN;
int64_t x269 = INT64_MIN;
uint32_t x276 = 1U;
int8_t x277 = INT8_MIN;
int32_t x279 = -1;
static volatile uint64_t t67 = 176396631LLU;
int64_t x289 = INT64_MIN;
static int64_t x294 = INT64_MAX;
int64_t x297 = -1LL;
int16_t x298 = 3941;
uint64_t t70 = 115616247300144447LLU;
int32_t x305 = INT32_MIN;
volatile int32_t t72 = -125368729;
static uint8_t x309 = UINT8_MAX;
uint64_t x310 = 15LLU;
int16_t x311 = -1;
volatile uint64_t t73 = 18034755943091LLU;
int64_t x318 = 228LL;
uint64_t x322 = 10LLU;
uint64_t t76 = 9478696LLU;
volatile uint64_t x335 = 240973489005LLU;
uint16_t x341 = 3U;
uint16_t x342 = 496U;
static uint32_t x349 = UINT32_MAX;
int8_t x350 = -1;
volatile int32_t x357 = INT32_MIN;
static uint64_t x361 = 7367278938711LLU;
int64_t x362 = INT64_MIN;
volatile uint64_t t87 = 12508312345LLU;
int16_t x372 = INT16_MIN;
uint64_t x373 = UINT64_MAX;
volatile int32_t x383 = -1;
int16_t x387 = INT16_MIN;
int8_t x391 = INT8_MAX;
static volatile uint64_t x393 = 105LLU;
uint32_t x394 = 6198495U;
int32_t x396 = -203433448;
volatile int8_t x399 = INT8_MAX;
volatile int32_t t95 = 535590696;
static int16_t x401 = 10;
uint8_t x406 = 1U;
volatile uint16_t x407 = 91U;
volatile uint16_t x411 = UINT16_MAX;
volatile int16_t x417 = INT16_MIN;
int8_t x418 = -1;
volatile int32_t x419 = -1;
volatile int32_t t99 = 116296114;


void f0(void) {
	volatile int32_t x1 = 1;
	int32_t x2 = -223954252;
	volatile int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	static volatile uint32_t t0 = 3337U;

	t0 = (x1&((x2^x3)/x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MAX;
	int64_t x8 = 702873LL;

	t1 = (x5&((x6^x7)/x8));

	if (t1 != 13122387738368LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 20U;
	int32_t x10 = INT32_MAX;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 1415U;

	t2 = (x9&((x10^x11)/x12));

	if (t2 != 16U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 2;
	static int32_t x14 = -1;
	uint8_t x15 = 4U;
	uint32_t x16 = 382U;
	uint32_t t3 = 76701U;

	t3 = (x13&((x14^x15)/x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 17U;
	uint16_t x22 = 5691U;
	int16_t x24 = INT16_MAX;
	static int32_t t4 = -5259;

	t4 = (x21&((x22^x23)/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -505216;
	int16_t x26 = -59;
	static uint8_t x28 = 9U;
	static volatile uint64_t t5 = 424282LLU;

	t5 = (x25&((x26^x27)/x28));

	if (t5 != 2049638230411706880LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 40847769LL;
	int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MAX;
	static int8_t x32 = -1;
	volatile int64_t t6 = -7800LL;

	t6 = (x29&((x30^x31)/x32));

	if (t6 != 128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = -16;
	static int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MAX;
	volatile uint32_t t7 = 138778U;

	t7 = (x33&((x34^x35)/x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 253721U;
	int16_t x39 = 7;
	int64_t x40 = -1LL;
	int64_t t8 = -967421272244553LL;

	t8 = (x37&((x38^x39)/x40));

	if (t8 != -65860541920042910LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	static uint64_t x47 = 3624130LLU;
	uint8_t x48 = 5U;

	t9 = (x45&((x46^x47)/x48));

	if (t9 != 3689348814741721575LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = UINT16_MAX;
	static volatile int16_t x51 = INT16_MIN;
	static uint16_t x52 = 15U;

	t10 = (x49&((x50^x51)/x52));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -411;
	int16_t x54 = INT16_MAX;
	volatile int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	static int32_t t11 = 190092374;

	t11 = (x53&((x54^x55)/x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x58 = UINT16_MAX;
	static int16_t x59 = 1843;
	uint64_t t12 = 1LLU;

	t12 = (x57&((x58^x59)/x60));

	if (t12 != 5028775298052LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	static int8_t x62 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	volatile int64_t t13 = -356270014979489LL;

	t13 = (x61&((x62^x63)/x64));

	if (t13 != 21856LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = -3;
	static int8_t x66 = 9;
	uint8_t x67 = 46U;
	int16_t x68 = INT16_MIN;
	int32_t t14 = -81726;

	t14 = (x65&((x66^x67)/x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = UINT64_MAX;
	int8_t x72 = INT8_MIN;
	static uint64_t t15 = 2285436629524LLU;

	t15 = (x69&((x70^x71)/x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 0;
	int32_t x74 = -15737;
	static int32_t x75 = INT32_MIN;
	static uint16_t x76 = UINT16_MAX;
	int32_t t16 = 96293096;

	t16 = (x73&((x74^x75)/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 306350U;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;

	t17 = (x77&((x78^x79)/x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 12U;
	int32_t x84 = INT32_MAX;
	uint64_t t18 = 538928295LLU;

	t18 = (x81&((x82^x83)/x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 22U;
	static uint32_t x86 = 69716768U;
	static int64_t x87 = -1LL;
	volatile uint16_t x88 = 971U;
	int64_t t19 = 11618184440LL;

	t19 = (x85&((x86^x87)/x88));

	if (t19 != 2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int64_t x90 = 113156922LL;
	static int16_t x91 = -582;
	volatile int64_t t20 = -8146953LL;

	t20 = (x89&((x90^x91)/x92));

	if (t20 != 2037LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -21884890188LL;
	uint64_t x94 = 11031188402271658LLU;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t21 = 32LLU;

	t21 = (x93&((x94^x95)/x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = -342654;
	int64_t x98 = INT64_MAX;
	uint16_t x99 = 17U;
	volatile int64_t t22 = -689583518LL;

	t22 = (x97&((x98^x99)/x100));

	if (t22 != 140739635871744LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = INT16_MIN;
	static volatile int32_t x103 = -83643426;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t23 = -3169;

	t23 = (x101&((x102^x103)/x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 89U;
	static int64_t t24 = -2388712LL;

	t24 = (x105&((x106^x107)/x108));

	if (t24 != 64LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	int64_t x111 = -560995222741972954LL;
	static int64_t x112 = INT64_MIN;
	static volatile int64_t t25 = 93327LL;

	t25 = (x109&((x110^x111)/x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile uint32_t x114 = 18942U;
	int32_t x115 = 0;
	uint16_t x116 = UINT16_MAX;
	volatile uint32_t t26 = 2U;

	t26 = (x113&((x114^x115)/x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	static uint64_t x118 = UINT64_MAX;
	uint8_t x119 = 0U;
	int32_t x120 = -1;
	volatile uint64_t t27 = 1LLU;

	t27 = (x117&((x118^x119)/x120));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 6047U;
	uint8_t x122 = 0U;
	uint32_t x123 = 13995U;
	int16_t x124 = INT16_MAX;
	volatile uint32_t t28 = 1359254U;

	t28 = (x121&((x122^x123)/x124));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x127 = 52;
	static uint64_t x128 = 3515095455896972LLU;

	t29 = (x125&((x126^x127)/x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = -1;
	uint64_t x130 = 1135242682720LLU;
	static int32_t x131 = INT32_MAX;
	uint64_t t30 = 49982253667991LLU;

	t30 = (x129&((x130^x131)/x132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = -1;
	volatile int32_t x135 = INT32_MIN;
	volatile uint64_t x136 = 1019797896LLU;
	volatile uint64_t t31 = 1829876907LLU;

	t31 = (x133&((x134^x135)/x136));

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = -1LL;
	uint8_t x138 = 13U;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;
	int64_t t32 = 6LL;

	t32 = (x137&((x138^x139)/x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x142 = 27U;
	uint64_t x143 = UINT64_MAX;
	int16_t x144 = 15;
	uint64_t t33 = 3LLU;

	t33 = (x141&((x142^x143)/x144));

	if (t33 != 1229782938247299072LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	static int8_t x146 = INT8_MIN;
	static int32_t x147 = -21;
	int32_t x148 = INT32_MIN;

	t34 = (x145&((x146^x147)/x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MIN;
	uint64_t x150 = 438682185365LLU;
	int16_t x151 = 0;
	volatile uint32_t x152 = UINT32_MAX;
	static volatile uint64_t t35 = 78582467894963721LLU;

	t35 = (x149&((x150^x151)/x152));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 17U;
	volatile int64_t x154 = 3611109788651160327LL;
	volatile int16_t x155 = INT16_MAX;
	int64_t x156 = INT64_MAX;
	volatile int64_t t36 = -5300930683LL;

	t36 = (x153&((x154^x155)/x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = -2;
	int64_t x158 = INT64_MAX;
	int64_t x159 = 784354514212458LL;
	int64_t x160 = INT64_MIN;
	static int64_t t37 = -18LL;

	t37 = (x157&((x158^x159)/x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x161 = 4U;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 1U;
	static int64_t t38 = 232LL;

	t38 = (x161&((x162^x163)/x164));

	if (t38 != 4LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = -1;
	int64_t x166 = -18477832072260554LL;
	int16_t x168 = -6997;
	int64_t t39 = -10443290884LL;

	t39 = (x165&((x166^x167)/x168));

	if (t39 != 2640822076919LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int64_t x170 = -1LL;
	static int64_t x171 = INT64_MIN;
	volatile int64_t t40 = -14479LL;

	t40 = (x169&((x170^x171)/x172));

	if (t40 != 43690LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = 1;
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = 1071395907009LLU;
	static int64_t x176 = 33LL;
	uint64_t t41 = 194LLU;

	t41 = (x173&((x174^x175)/x176));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t42 = 48673669LLU;

	t42 = (x177&((x178^x179)/x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = -1;
	static uint16_t x182 = 14U;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	volatile int32_t t43 = 22;

	t43 = (x181&((x182^x183)/x184));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	static uint64_t x186 = 135286182276722LLU;
	volatile int16_t x187 = -15;
	int32_t x188 = INT32_MIN;
	uint64_t t44 = 697432LLU;

	t44 = (x185&((x186^x187)/x188));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	uint16_t x191 = 15U;
	uint8_t x192 = UINT8_MAX;
	uint32_t t45 = 1347808337U;

	t45 = (x189&((x190^x191)/x192));

	if (t45 != 16843008U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -405860;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MIN;
	static volatile int64_t x196 = INT64_MAX;
	static int64_t t46 = -3663681915790LL;

	t46 = (x193&((x194^x195)/x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	int32_t x199 = INT32_MIN;
	volatile int16_t x200 = INT16_MIN;
	volatile int64_t t47 = -2LL;

	t47 = (x197&((x198^x199)/x200));

	if (t47 != 281474976645120LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 381452894U;
	int64_t x203 = 455LL;
	uint8_t x204 = 6U;

	t48 = (x201&((x202^x203)/x204));

	if (t48 != 379847252LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1;
	uint8_t x211 = 2U;
	uint16_t x212 = UINT16_MAX;
	int32_t t49 = 30014537;

	t49 = (x209&((x210^x211)/x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MAX;
	volatile int8_t x216 = -1;
	int32_t t50 = 557;

	t50 = (x213&((x214^x215)/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = 3317362773LLU;
	int8_t x220 = -1;
	static uint64_t t51 = 981255619333LLU;

	t51 = (x217&((x218^x219)/x220));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = INT32_MAX;
	volatile uint16_t x222 = 760U;
	static uint32_t x223 = 0U;
	uint32_t x224 = 43670546U;
	uint32_t t52 = 2U;

	t52 = (x221&((x222^x223)/x224));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x225 = -9;
	int32_t x226 = INT32_MIN;
	int16_t x227 = -5974;
	volatile int32_t x228 = 10160543;

	t53 = (x225&((x226^x227)/x228));

	if (t53 != 211) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x230 = INT8_MIN;
	int64_t t54 = 1417550902252065551LL;

	t54 = (x229&((x230^x231)/x232));

	if (t54 != 1804428160LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile uint32_t x234 = 4U;
	volatile int32_t x235 = -1;
	int8_t x236 = -1;
	volatile uint32_t t55 = 16334172U;

	t55 = (x233&((x234^x235)/x236));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = -1;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 96348983877LLU;
	volatile uint64_t t56 = 34890673LLU;

	t56 = (x237&((x238^x239)/x240));

	if (t56 != 37646416870219427LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 184U;
	int16_t x242 = INT16_MAX;
	uint64_t x243 = 40301LLU;

	t57 = (x241&((x242^x243)/x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	int16_t x246 = -2;
	int64_t t58 = -181598739538LL;

	t58 = (x245&((x246^x247)/x248));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MAX;
	int8_t x250 = INT8_MAX;
	int32_t x252 = -1;
	volatile int32_t t59 = 3967;

	t59 = (x249&((x250^x251)/x252));

	if (t59 != 2147483521) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = -981198102LL;
	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t60 = -1565575863020000LL;

	t60 = (x253&((x254^x255)/x256));

	if (t60 != 2101LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x260 = -17;
	volatile uint32_t t61 = 172928U;

	t61 = (x257&((x258^x259)/x260));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = 36;
	static volatile int64_t x263 = INT64_MIN;
	static volatile int64_t t62 = 314722426838LL;

	t62 = (x261&((x262^x263)/x264));

	if (t62 != 72057594037895168LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	uint64_t x267 = 254948861741122657LLU;
	uint8_t x268 = 29U;
	uint64_t t63 = 8LLU;

	t63 = (x265&((x266^x267)/x268));

	if (t63 != 8791338493411328LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x270 = UINT8_MAX;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	volatile int64_t t64 = 224126362508LL;

	t64 = (x269&((x270^x271)/x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = -7319423LL;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MIN;
	volatile int64_t t65 = 6LL;

	t65 = (x273&((x274^x275)/x276));

	if (t65 != 2147504257LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x278 = UINT64_MAX;
	static volatile uint16_t x280 = UINT16_MAX;
	uint64_t t66 = 548329LLU;

	t66 = (x277&((x278^x279)/x280));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x281 = 90106520U;
	uint64_t x282 = 2013LLU;
	volatile uint32_t x283 = UINT32_MAX;
	static volatile int64_t x284 = INT64_MAX;

	t67 = (x281&((x282^x283)/x284));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = 1;
	volatile int64_t t68 = 18306453116097LL;

	t68 = (x289&((x290^x291)/x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x293 = 1265U;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = -102526590133640LL;
	static volatile int64_t t69 = -29920031LL;

	t69 = (x293&((x294^x295)/x296));

	if (t69 != 144LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x299 = 13106008013LLU;
	int32_t x300 = INT32_MIN;

	t70 = (x297&((x298^x299)/x300));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MIN;
	static int8_t x302 = -1;
	int16_t x303 = 2337;
	static int64_t x304 = -1LL;
	volatile int64_t t71 = 2LL;

	t71 = (x301&((x302^x303)/x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x306 = -1;
	volatile uint16_t x307 = 2U;
	int32_t x308 = INT32_MIN;

	t72 = (x305&((x306^x307)/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x312 = -1;

	t73 = (x309&((x310^x311)/x312));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x313 = 0;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = 1;
	volatile int8_t x316 = -1;
	uint64_t t74 = 514LLU;

	t74 = (x313&((x314^x315)/x316));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MAX;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MIN;
	volatile int64_t t75 = -260658318391441LL;

	t75 = (x317&((x318^x319)/x320));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 12866178985LLU;
	static int16_t x323 = INT16_MIN;
	volatile int32_t x324 = -908883;

	t76 = (x321&((x322^x323)/x324));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MIN;
	uint16_t x326 = 15U;
	uint64_t x327 = 758437LLU;
	static uint64_t x328 = 62645031380LLU;
	volatile uint64_t t77 = 8346LLU;

	t77 = (x325&((x326^x327)/x328));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = INT64_MAX;
	uint16_t x330 = 5516U;
	int16_t x331 = -1;
	int64_t x332 = 9LL;
	static int64_t t78 = 28306LL;

	t78 = (x329&((x330^x331)/x332));

	if (t78 != 9223372036854775195LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x333 = UINT32_MAX;
	static volatile uint16_t x334 = 225U;
	int64_t x336 = INT64_MAX;
	static volatile uint64_t t79 = 5011334067LLU;

	t79 = (x333&((x334^x335)/x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MAX;
	static int32_t x338 = -1;
	uint64_t x339 = 36948LLU;
	int32_t x340 = INT32_MIN;
	uint64_t t80 = 144LLU;

	t80 = (x337&((x338^x339)/x340));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t81 = -549879669;

	t81 = (x341&((x342^x343)/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x345 = 177U;
	volatile uint8_t x346 = 1U;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	uint32_t t82 = 1U;

	t82 = (x345&((x346^x347)/x348));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x351 = -1;
	int32_t x352 = -1;
	uint32_t t83 = 28247U;

	t83 = (x349&((x350^x351)/x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = -1;
	int16_t x354 = 6;
	int64_t x355 = 2069313189987LL;
	volatile int32_t x356 = INT32_MIN;
	volatile int64_t t84 = -1LL;

	t84 = (x353&((x354^x355)/x356));

	if (t84 != -963LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MIN;
	static uint64_t x359 = 11256077499940LLU;
	int8_t x360 = -1;
	volatile uint64_t t85 = 595542629LLU;

	t85 = (x357&((x358^x359)/x360));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	uint64_t t86 = 87016812176649460LLU;

	t86 = (x361&((x362^x363)/x364));

	if (t86 != 7365868912640LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x365 = 3898U;
	int32_t x366 = -1;
	int64_t x367 = 86265LL;
	static volatile uint64_t x368 = 237762799940LLU;

	t87 = (x365&((x366^x367)/x368));

	if (t87 != 2314LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x369 = INT32_MIN;
	int8_t x370 = -4;
	static int16_t x371 = INT16_MIN;
	int32_t t88 = 2973660;

	t88 = (x369&((x370^x371)/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x374 = INT64_MAX;
	volatile uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	uint64_t t89 = 4426098763135408070LLU;

	t89 = (x373&((x374^x375)/x376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	static volatile uint32_t x378 = 7257579U;
	int64_t x379 = INT64_MIN;
	static volatile uint32_t x380 = 2092729216U;
	int64_t t90 = -10260814524650226LL;

	t90 = (x377&((x378^x379)/x380));

	if (t90 != 77LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	static uint64_t x382 = 252956LLU;
	static volatile uint32_t x384 = 13164460U;
	static uint64_t t91 = 25008LLU;

	t91 = (x381&((x382^x383)/x384));

	if (t91 != 1094041719LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = INT8_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	int64_t x388 = -322639098437480LL;
	uint64_t t92 = 27358490LLU;

	t92 = (x385&((x386^x387)/x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x389 = 1276812LLU;
	int32_t x390 = 0;
	int8_t x392 = INT8_MIN;
	static volatile uint64_t t93 = 435438707397686528LLU;

	t93 = (x389&((x390^x391)/x392));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x395 = INT16_MIN;
	volatile uint64_t t94 = 3332370LLU;

	t94 = (x393&((x394^x395)/x396));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = 1;
	int32_t x398 = INT32_MIN;
	volatile int16_t x400 = 2;

	t95 = (x397&((x398^x399)/x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x402 = 391687938U;
	volatile int16_t x403 = -260;
	static volatile int32_t x404 = INT32_MIN;
	volatile uint32_t t96 = 254201U;

	t96 = (x401&((x402^x403)/x404));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x405 = INT64_MIN;
	volatile int16_t x408 = INT16_MIN;
	int64_t t97 = 14LL;

	t97 = (x405&((x406^x407)/x408));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = -1;
	static int32_t x410 = INT32_MIN;
	int16_t x412 = INT16_MAX;
	volatile int32_t t98 = 0;

	t98 = (x409&((x410^x411)/x412));

	if (t98 != -65536) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x420 = 7;

	t99 = (x417&((x418^x419)/x420));

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

