#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
static int64_t x2 = INT64_MIN;
uint8_t x7 = UINT8_MAX;
volatile uint8_t x8 = 1U;
static int32_t x13 = -1;
int64_t x18 = -1LL;
int32_t x24 = INT32_MIN;
uint16_t x31 = 29U;
int64_t t6 = 62308LL;
int32_t x43 = 32990723;
static int8_t x44 = INT8_MAX;
int32_t x51 = INT32_MAX;
int16_t x55 = INT16_MIN;
uint32_t x57 = UINT32_MAX;
static int32_t x60 = 2;
static volatile uint32_t t13 = 24190178U;
volatile int16_t x62 = INT16_MIN;
static uint16_t x64 = 4827U;
volatile uint64_t t14 = 327238LLU;
static volatile int64_t t16 = -83988249809765868LL;
int8_t x74 = INT8_MIN;
static uint32_t x80 = 115U;
int64_t t18 = 25LL;
volatile int8_t x88 = INT8_MAX;
int8_t x89 = 1;
static int64_t x90 = INT64_MIN;
static volatile int32_t x92 = INT32_MIN;
int64_t x99 = INT64_MAX;
int64_t t23 = 3557854899484188991LL;
uint64_t x102 = UINT64_MAX;
uint64_t t24 = 1951273035656LLU;
int8_t x105 = -4;
uint64_t t30 = 1LLU;
int32_t t31 = 5;
static int64_t x133 = INT64_MAX;
int64_t x134 = 387212544828821282LL;
volatile int64_t x138 = INT64_MIN;
static uint64_t x142 = 147292787054553LLU;
int16_t x143 = 1;
volatile uint16_t x145 = 12762U;
uint16_t x146 = 3U;
volatile int16_t x151 = INT16_MIN;
int64_t t38 = 3555922256563710336LL;
int64_t x161 = -1LL;
int8_t x169 = INT8_MIN;
volatile int16_t x173 = INT16_MAX;
int8_t x174 = INT8_MIN;
int16_t x184 = INT16_MIN;
int64_t t45 = -6173982646195683LL;
int8_t x192 = INT8_MIN;
int64_t t48 = 8534471223435LL;
volatile uint8_t x202 = 48U;
volatile uint64_t x205 = UINT64_MAX;
static uint64_t x220 = 462062341261969LLU;
static int64_t x223 = -1LL;
volatile int64_t t54 = -20338611867LL;
volatile int8_t x227 = 1;
volatile uint16_t x232 = 536U;
uint16_t x236 = 3U;
uint8_t x244 = UINT8_MAX;
uint32_t x249 = 6030U;
int8_t x255 = INT8_MIN;
static volatile uint16_t x264 = 128U;
int32_t t65 = -10400;
uint32_t x274 = 3413258U;
static int32_t x277 = INT32_MAX;
int32_t x287 = INT32_MAX;
uint8_t x290 = UINT8_MAX;
int64_t x292 = INT64_MAX;
static uint32_t x293 = UINT32_MAX;
int8_t x295 = -1;
static volatile int8_t x301 = -39;
static int32_t t74 = 223775;
int64_t x306 = INT64_MIN;
static volatile uint8_t x313 = UINT8_MAX;
volatile uint8_t x314 = 3U;
int64_t t77 = 2LL;
volatile uint8_t x321 = UINT8_MAX;
volatile uint64_t t80 = 8806464305295275245LLU;
int64_t x331 = INT64_MIN;
int32_t x332 = -1;
uint16_t x342 = 93U;
uint16_t x343 = 50U;
uint32_t x346 = 279450921U;
int32_t x357 = 30952260;
volatile int32_t x358 = INT32_MAX;
volatile int16_t x361 = INT16_MIN;
static int64_t x367 = -1LL;
static int64_t t91 = -15673LL;
int8_t x373 = -1;
uint32_t x374 = UINT32_MAX;
static int16_t x378 = -1;
uint16_t x391 = 93U;
int32_t x399 = 32608972;
int32_t x402 = INT32_MIN;
static int32_t x410 = INT32_MAX;
int64_t x412 = -2865113151360353LL;


void f0(void) {
	uint32_t x3 = 187694U;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = INT64_MIN;

	t0 = (x1&(x2|(x3%x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	static volatile int32_t t1 = 25;

	t1 = (x5&(x6|(x7%x8)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint16_t x16 = 1256U;
	int64_t t2 = -14LL;

	t2 = (x13&(x14|(x15%x16)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	volatile uint8_t x19 = UINT8_MAX;
	static int8_t x20 = 2;
	int64_t t3 = -737440838409LL;

	t3 = (x17&(x18|(x19%x20)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 34;
	uint16_t x22 = 8970U;
	uint64_t x23 = 448489LLU;
	volatile uint64_t t4 = 9852588623837266LLU;

	t4 = (x21&(x22|(x23%x24)));

	if (t4 != 34LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	int64_t x26 = -403LL;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	static uint64_t t5 = 1038226LLU;

	t5 = (x25&(x26|(x27%x28)));

	if (t5 != 18446744073709551213LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MIN;
	volatile int32_t x32 = INT32_MIN;

	t6 = (x29&(x30|(x31%x32)));

	if (t6 != 29LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MIN;
	static volatile int32_t x34 = 3067445;
	static int32_t x35 = -2170;
	static int8_t x36 = -1;
	int32_t t7 = 112;

	t7 = (x33&(x34|(x35%x36)));

	if (t7 != 3047424) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 20092587269179110LLU;
	volatile int32_t x38 = -1;
	uint8_t x39 = 6U;
	uint32_t x40 = UINT32_MAX;
	volatile uint64_t t8 = 860024525899473513LLU;

	t8 = (x37&(x38|(x39%x40)));

	if (t8 != 114050790LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = -132980911;
	int32_t x42 = -1;
	int32_t t9 = -1017724720;

	t9 = (x41&(x42|(x43%x44)));

	if (t9 != -132980911) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 432141868784LL;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 70480U;
	static uint64_t t10 = 1LLU;

	t10 = (x45&(x46|(x47%x48)));

	if (t10 != 432141868720LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = 1U;
	volatile int16_t x52 = -489;
	int32_t t11 = 5720168;

	t11 = (x49&(x50|(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -837;
	static volatile int32_t x56 = INT32_MIN;
	static volatile int32_t t12 = -10;

	t12 = (x53&(x54|(x55%x56)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = 391982U;

	t13 = (x57&(x58|(x59%x60)));

	if (t13 != 4294934528U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = -1;
	volatile uint64_t x63 = UINT64_MAX;

	t14 = (x61&(x62|(x63%x64)));

	if (t14 != 18446744073709523303LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	static volatile int8_t x66 = INT8_MIN;
	uint16_t x67 = 1065U;
	int8_t x68 = INT8_MIN;
	int32_t t15 = -9;

	t15 = (x65&(x66|(x67%x68)));

	if (t15 != -87) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint16_t x70 = 99U;
	int16_t x71 = -1;
	static int64_t x72 = INT64_MAX;

	t16 = (x69&(x70|(x71%x72)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int16_t x75 = -2;
	static uint64_t x76 = UINT64_MAX;
	uint64_t t17 = 1710971991LLU;

	t17 = (x73&(x74|(x75%x76)));

	if (t17 != 32766LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MAX;
	int32_t x79 = INT32_MAX;

	t18 = (x77&(x78|(x79%x80)));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = 244;
	static uint32_t x82 = 70377U;
	volatile uint8_t x83 = 2U;
	uint16_t x84 = 46U;
	static uint32_t t19 = 2074217U;

	t19 = (x81&(x82|(x83%x84)));

	if (t19 != 224U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -44773011;
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MAX;
	volatile uint32_t t20 = 5567U;

	t20 = (x85&(x86|(x87%x88)));

	if (t20 != 4250194285U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x91 = -27376LL;
	volatile int64_t t21 = -5487717769011LL;

	t21 = (x89&(x90|(x91%x92)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MAX;
	uint16_t x94 = 8238U;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t22 = 5;

	t22 = (x93&(x94|(x95%x96)));

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	static uint32_t x98 = UINT32_MAX;
	int32_t x100 = INT32_MIN;

	t23 = (x97&(x98|(x99%x100)));

	if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	int32_t x103 = INT32_MIN;
	static int8_t x104 = INT8_MIN;

	t24 = (x101&(x102|(x103%x104)));

	if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 188013949LLU;
	static uint32_t x108 = 7889U;
	static uint64_t t25 = 6LLU;

	t25 = (x105&(x106|(x107%x108)));

	if (t25 != 4294967292LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 3U;
	int64_t x110 = -1LL;
	static int32_t x111 = -1;
	static int64_t x112 = -1LL;
	int64_t t26 = 44LL;

	t26 = (x109&(x110|(x111%x112)));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 6795LLU;
	volatile uint32_t x114 = 389172U;
	int64_t x115 = -1LL;
	static int32_t x116 = INT32_MIN;
	uint64_t t27 = 1924537117604LLU;

	t27 = (x113&(x114|(x115%x116)));

	if (t27 != 6795LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -84;
	volatile uint64_t x118 = 287LLU;
	static int64_t x119 = INT64_MIN;
	uint32_t x120 = UINT32_MAX;
	static uint64_t t28 = 17999LLU;

	t28 = (x117&(x118|(x119%x120)));

	if (t28 != 18446744071562068236LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x121 = 59U;
	static uint16_t x122 = 835U;
	int32_t x123 = INT32_MAX;
	volatile int64_t x124 = INT64_MIN;
	int64_t t29 = -10834652LL;

	t29 = (x121&(x122|(x123%x124)));

	if (t29 != 59LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = -14LL;
	static int16_t x127 = -1;
	static uint64_t x128 = 508984248LLU;

	t30 = (x125&(x126|(x127%x128)));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 27U;
	static int16_t x130 = INT16_MIN;
	int16_t x131 = INT16_MAX;
	int8_t x132 = INT8_MIN;

	t31 = (x129&(x130|(x131%x132)));

	if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x135 = 6866252582904LLU;
	uint16_t x136 = 24598U;
	static uint64_t t32 = 6017560995LLU;

	t32 = (x133&(x134|(x135%x136)));

	if (t32 != 387212544828825394LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 21032U;
	int32_t x139 = -1;
	static int64_t x140 = INT64_MIN;
	int64_t t33 = 15842711802167888LL;

	t33 = (x137&(x138|(x139%x140)));

	if (t33 != 21032LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = INT32_MIN;
	volatile int32_t x144 = INT32_MIN;
	static uint64_t t34 = 1666361553680LLU;

	t34 = (x141&(x142|(x143%x144)));

	if (t34 != 147291608449024LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x147 = UINT8_MAX;
	static uint16_t x148 = 311U;
	volatile int32_t t35 = -100294;

	t35 = (x145&(x146|(x147%x148)));

	if (t35 != 218) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	static int16_t x152 = INT16_MAX;
	int64_t t36 = INT64_MIN;

	t36 = (x149&(x150|(x151%x152)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = INT32_MIN;
	static volatile int16_t x154 = INT16_MAX;
	int32_t x155 = -1;
	static int64_t x156 = -1LL;
	int64_t t37 = -748243113134080822LL;

	t37 = (x153&(x154|(x155%x156)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 158567907;
	int64_t x158 = -64649951256LL;
	volatile uint8_t x159 = 30U;
	static uint16_t x160 = 55U;

	t38 = (x157&(x158|(x159%x160)));

	if (t38 != 1050082LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MIN;
	int64_t t39 = 1417880LL;

	t39 = (x161&(x162|(x163%x164)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = 4015U;
	static volatile int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	uint32_t t40 = 80843234U;

	t40 = (x165&(x166|(x167%x168)));

	if (t40 != 4015U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x170 = 1742U;
	int64_t x171 = -1LL;
	uint16_t x172 = 72U;
	static volatile int64_t t41 = 4152016381LL;

	t41 = (x169&(x170|(x171%x172)));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x175 = 0LLU;
	volatile int16_t x176 = 3790;
	static volatile uint64_t t42 = 0LLU;

	t42 = (x173&(x174|(x175%x176)));

	if (t42 != 32640LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = UINT32_MAX;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = 503215748;
	int8_t x180 = -1;
	uint32_t t43 = UINT32_MAX;

	t43 = (x177&(x178|(x179%x180)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MAX;
	static int64_t x182 = INT64_MAX;
	int16_t x183 = -126;
	int64_t t44 = INT64_MAX;

	t44 = (x181&(x182|(x183%x184)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MIN;
	uint32_t x186 = 1978039U;
	static volatile int64_t x187 = -5058LL;
	int16_t x188 = -1;

	t45 = (x185&(x186|(x187%x188)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t46 = INT32_MAX;

	t46 = (x189&(x190|(x191%x192)));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = -1;
	int8_t x194 = 1;
	uint64_t x195 = 8805383008589646697LLU;
	static volatile int32_t x196 = INT32_MAX;
	uint64_t t47 = 828013975LLU;

	t47 = (x193&(x194|(x195%x196)));

	if (t47 != 1990528461LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = 7680LL;
	static volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = -1LL;
	int32_t x200 = INT32_MAX;

	t48 = (x197&(x198|(x199%x200)));

	if (t48 != 7680LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static int64_t x203 = INT64_MIN;
	int64_t x204 = -1LL;
	static int64_t t49 = 19516810118352LL;

	t49 = (x201&(x202|(x203%x204)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x206 = 20791831;
	uint32_t x207 = 8945U;
	volatile int16_t x208 = 1;
	uint64_t t50 = 2356475361144457LLU;

	t50 = (x205&(x206|(x207%x208)));

	if (t50 != 20791831LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -28;
	uint64_t x211 = 13199980445718160LLU;
	int16_t x212 = INT16_MAX;
	volatile uint64_t t51 = 402567LLU;

	t51 = (x209&(x210|(x211%x212)));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 69U;
	volatile int32_t t52 = 24793;

	t52 = (x213&(x214|(x215%x216)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = -1;
	static uint64_t t53 = 53235LLU;

	t53 = (x217&(x218|(x219%x220)));

	if (t53 != 291285849225215LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 10U;
	int16_t x222 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;

	t54 = (x221&(x222|(x223%x224)));

	if (t54 != 10LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = -13LL;
	static volatile int64_t x226 = INT64_MAX;
	volatile int64_t x228 = -285240889256LL;
	int64_t t55 = -1124780815007LL;

	t55 = (x225&(x226|(x227%x228)));

	if (t55 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	volatile int64_t t56 = -4LL;

	t56 = (x229&(x230|(x231%x232)));

	if (t56 != 2147483520LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x233 = -1;
	int8_t x234 = 0;
	volatile uint64_t x235 = UINT64_MAX;
	volatile uint64_t t57 = 226767309066023201LLU;

	t57 = (x233&(x234|(x235%x236)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x237&(x238|(x239%x240)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x241 = UINT8_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	uint64_t x243 = 285170266165757096LLU;
	volatile uint64_t t59 = 1273994LLU;

	t59 = (x241&(x242|(x243%x244)));

	if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MAX;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 1242301U;
	int64_t t60 = 12531842297025357LL;

	t60 = (x245&(x246|(x247%x248)));

	if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = -248;
	volatile uint32_t t61 = 486267262U;

	t61 = (x249&(x250|(x251%x252)));

	if (t61 != 6030U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = -64578;
	int32_t x256 = INT32_MAX;
	volatile int32_t t62 = 438;

	t62 = (x253&(x254|(x255%x256)));

	if (t62 != 65470) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 27U;
	uint8_t x258 = 115U;
	uint64_t x259 = 1LLU;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t63 = 31LLU;

	t63 = (x257&(x258|(x259%x260)));

	if (t63 != 19LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x261 = -13;
	int32_t x262 = 13;
	int64_t x263 = -2111146751523LL;
	volatile int64_t t64 = 206796257939152LL;

	t64 = (x261&(x262|(x263%x264)));

	if (t64 != -47LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x265 = 2484;
	int16_t x266 = 396;
	uint16_t x267 = 12U;
	int32_t x268 = -1;

	t65 = (x265&(x266|(x267%x268)));

	if (t65 != 388) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x269 = 3459U;
	uint64_t x270 = 705829LLU;
	static volatile int16_t x271 = INT16_MAX;
	int32_t x272 = 250;
	uint64_t t66 = 118564624961776665LLU;

	t66 = (x269&(x270|(x271%x272)));

	if (t66 != 1281LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x273 = 2624583836458LLU;
	volatile int32_t x275 = 22472649;
	uint32_t x276 = 15630U;
	uint64_t t67 = 31809576381938074LLU;

	t67 = (x273&(x274|(x275%x276)));

	if (t67 != 2105642LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x278 = 1958U;
	int8_t x279 = -1;
	int64_t x280 = 114393532730249353LL;
	volatile int64_t t68 = -54139845228454916LL;

	t68 = (x277&(x278|(x279%x280)));

	if (t68 != 2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x281 = 123U;
	static uint64_t x282 = 3595902997LLU;
	uint8_t x283 = 30U;
	int64_t x284 = -1LL;
	uint64_t t69 = 1009258564790537LLU;

	t69 = (x281&(x282|(x283%x284)));

	if (t69 != 17LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x285 = 72930322U;
	int32_t x286 = -12;
	static volatile int64_t x288 = INT64_MIN;
	int64_t t70 = -30794092801244LL;

	t70 = (x285&(x286|(x287%x288)));

	if (t70 != 72930322LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -5;
	uint32_t x291 = UINT32_MAX;
	int64_t t71 = -678056280LL;

	t71 = (x289&(x290|(x291%x292)));

	if (t71 != 4294967291LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = 30;
	int8_t x296 = INT8_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x293&(x294|(x295%x296)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	int8_t x298 = -1;
	int16_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x297&(x298|(x299%x300)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x302 = 7U;
	static int8_t x303 = 1;
	uint16_t x304 = 6810U;

	t74 = (x301&(x302|(x303%x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = 12384U;
	volatile uint64_t x307 = 1332LLU;
	int16_t x308 = INT16_MIN;
	uint64_t t75 = 4295388825058874LLU;

	t75 = (x305&(x306|(x307%x308)));

	if (t75 != 32LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 2906906965306LL;
	int8_t x312 = INT8_MIN;
	int64_t t76 = 64237451LL;

	t76 = (x309&(x310|(x311%x312)));

	if (t76 != 4294934586LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x315 = 14524LL;
	int64_t x316 = INT64_MIN;

	t77 = (x313&(x314|(x315%x316)));

	if (t77 != 191LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x317 = UINT32_MAX;
	volatile uint32_t x318 = 667U;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t78 = -665351LL;

	t78 = (x317&(x318|(x319%x320)));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = -1;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t79 = 873673LLU;

	t79 = (x321&(x322|(x323%x324)));

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	static int64_t x327 = INT64_MAX;
	static int64_t x328 = 10771LL;

	t80 = (x325&(x326|(x327%x328)));

	if (t80 != 18446744071562068172LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = 1876872444LL;
	int64_t t81 = -1676692531LL;

	t81 = (x329&(x330|(x331%x332)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 63U;
	int64_t x334 = -1LL;
	volatile uint16_t x335 = UINT16_MAX;
	static uint32_t x336 = UINT32_MAX;
	volatile int64_t t82 = -4088134744054695LL;

	t82 = (x333&(x334|(x335%x336)));

	if (t82 != 63LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x337 = 2U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	volatile uint32_t t83 = 2693670U;

	t83 = (x337&(x338|(x339%x340)));

	if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x344 = -5440634;
	static uint32_t t84 = 30059319U;

	t84 = (x341&(x342|(x343%x344)));

	if (t84 != 127U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	uint32_t t85 = 2U;

	t85 = (x345&(x346|(x347%x348)));

	if (t85 != 279445504U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = UINT8_MAX;
	static int32_t x350 = 1048;
	uint32_t x351 = 302375U;
	uint16_t x352 = UINT16_MAX;
	static uint32_t t86 = 1269898U;

	t86 = (x349&(x350|(x351%x352)));

	if (t86 != 59U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	static int64_t x354 = 71248827263375LL;
	int8_t x355 = 48;
	static volatile uint64_t x356 = UINT64_MAX;
	uint64_t t87 = 514330408778LLU;

	t87 = (x353&(x354|(x355%x356)));

	if (t87 != 71247064989696LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x359 = -1;
	int16_t x360 = 83;
	static int32_t t88 = -4789413;

	t88 = (x357&(x358|(x359%x360)));

	if (t88 != 30952260) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x362 = 2U;
	uint8_t x363 = 0U;
	uint16_t x364 = 1U;
	volatile uint32_t t89 = 64050987U;

	t89 = (x361&(x362|(x363%x364)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	int64_t t90 = 19LL;

	t90 = (x365&(x366|(x367%x368)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = 25;
	static int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MAX;

	t91 = (x369&(x370|(x371%x372)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x375 = UINT64_MAX;
	int8_t x376 = 14;
	static uint64_t t92 = 437219085048LLU;

	t92 = (x373&(x374|(x375%x376)));

	if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x377 = -1;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	int32_t t93 = -15612382;

	t93 = (x377&(x378|(x379%x380)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t94 = -24;

	t94 = (x389&(x390|(x391%x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MAX;
	uint32_t x394 = 3420U;
	uint8_t x395 = 14U;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t95 = -57606185LL;

	t95 = (x393&(x394|(x395%x396)));

	if (t95 != 3422LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x397 = INT8_MIN;
	uint64_t x398 = UINT64_MAX;
	volatile int16_t x400 = 374;
	static volatile uint64_t t96 = 2023LLU;

	t96 = (x397&(x398|(x399%x400)));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	int32_t x403 = -1;
	volatile uint32_t x404 = 26U;
	uint32_t t97 = 1U;

	t97 = (x401&(x402|(x403%x404)));

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = INT8_MIN;
	uint64_t x406 = 27422094512409LLU;
	int8_t x407 = -1;
	volatile uint8_t x408 = 2U;
	static uint64_t t98 = 341LLU;

	t98 = (x405&(x406|(x407%x408)));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -1LL;
	volatile uint32_t x411 = 106276U;
	static volatile int64_t t99 = 12293785156LL;

	t99 = (x409&(x410|(x411%x412)));

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

