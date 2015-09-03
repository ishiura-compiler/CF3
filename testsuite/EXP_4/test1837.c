#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = 29U;
int64_t x11 = -3588347890258LL;
static int8_t x12 = -3;
int16_t x14 = INT16_MAX;
static int16_t x18 = 2478;
uint32_t x34 = UINT32_MAX;
uint8_t x35 = 7U;
static int64_t x38 = 3495987854154244345LL;
static uint16_t x39 = 10U;
int64_t t9 = 448247488670181LL;
uint64_t x46 = UINT64_MAX;
static uint64_t t11 = 3009389377LLU;
int32_t x49 = INT32_MAX;
int16_t x60 = 32;
int16_t x65 = -4;
volatile uint32_t t16 = 56358589U;
int32_t x69 = INT32_MIN;
uint64_t t17 = 241955943173LLU;
uint64_t x74 = 576LLU;
volatile uint64_t t18 = 460357321380LLU;
volatile uint64_t t20 = 53LLU;
uint32_t x86 = 25U;
uint8_t x89 = UINT8_MAX;
uint16_t x92 = 28799U;
volatile int64_t t22 = -68122913676LL;
int8_t x95 = INT8_MIN;
int64_t x97 = INT64_MIN;
int8_t x98 = 17;
int64_t x106 = INT64_MIN;
int32_t x108 = -1;
static int16_t x115 = -1;
volatile int64_t t29 = -41512LL;
uint16_t x121 = UINT16_MAX;
int16_t x122 = INT16_MAX;
int64_t x123 = -1LL;
volatile int64_t t30 = -1858846LL;
uint16_t x127 = 3445U;
int64_t x129 = INT64_MIN;
int64_t x132 = -42277629349LL;
int64_t x134 = INT64_MAX;
int32_t x139 = 52125;
int8_t x149 = INT8_MIN;
int8_t x154 = -1;
int8_t x173 = INT8_MIN;
static uint16_t x177 = 43U;
static int32_t x180 = 146;
static int8_t x190 = -10;
static int16_t x196 = -1;
int8_t x200 = -1;
volatile uint64_t t48 = 135142096454694LLU;
int8_t x202 = -3;
static int32_t t50 = 141;
uint16_t x210 = 13U;
volatile uint16_t x213 = UINT16_MAX;
int32_t x214 = INT32_MIN;
static volatile uint64_t t52 = 1550LLU;
volatile int16_t x217 = INT16_MIN;
volatile int64_t t53 = -3388717048435LL;
volatile int64_t x226 = INT64_MIN;
int8_t x229 = INT8_MIN;
int64_t x232 = 609310197LL;
volatile uint32_t x239 = UINT32_MAX;
uint64_t t58 = 28831884LLU;
volatile int64_t x248 = INT64_MAX;
volatile int64_t t60 = -3955261422285LL;
static volatile int64_t t61 = -6355086LL;
int32_t x257 = INT32_MAX;
int8_t x259 = INT8_MIN;
volatile int16_t x272 = -45;
int64_t t66 = -29574021923210LL;
volatile int32_t t67 = -62801;
int16_t x282 = 37;
int64_t t68 = -780716503588132LL;
static int64_t x292 = INT64_MAX;
static volatile int64_t t71 = 568263869LL;
int8_t x302 = 19;
uint32_t x304 = 851U;
volatile uint8_t x311 = UINT8_MAX;
volatile int64_t t76 = -1LL;
int8_t x323 = INT8_MIN;
int64_t x324 = 33059LL;
int32_t x326 = INT32_MIN;
static volatile int64_t x328 = INT64_MIN;
static volatile uint32_t x334 = UINT32_MAX;
uint32_t x338 = UINT32_MAX;
static uint32_t x349 = 633049U;
volatile uint16_t x354 = 405U;
volatile int32_t t87 = 4;
volatile uint64_t t89 = 42085488077738LLU;
int16_t x372 = INT16_MAX;
int8_t x375 = -1;
int32_t x380 = -1589687;
int32_t x382 = -1;
int32_t t93 = 12980;
static int8_t x385 = INT8_MAX;
int8_t x387 = INT8_MAX;
volatile int32_t x388 = 254591;
volatile int64_t x389 = INT64_MAX;
static int8_t x390 = 1;
volatile int64_t t95 = -17152362352LL;
int64_t x393 = -5LL;
uint64_t x397 = 2583027049LLU;
int8_t x405 = INT8_MAX;
static int8_t x407 = INT8_MIN;


void f0(void) {
	uint16_t x1 = 0U;
	volatile int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int16_t x4 = -9;
	int32_t t0 = 331895822;

	t0 = (x1/(x2|(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static uint64_t x6 = 21LLU;
	int64_t x7 = 519950678541425876LL;
	int32_t x8 = -76173863;
	static uint64_t t1 = 53194LLU;

	t1 = (x5/(x6|(x7&x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 10;
	volatile int64_t t2 = 6396LL;

	t2 = (x9/(x10|(x11&x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1363390061LLU;
	int16_t x15 = -1;
	static int16_t x16 = 23;
	uint64_t t3 = 76176LLU;

	t3 = (x13/(x14|(x15&x16)));

	if (t3 != 41608LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 138U;
	static volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = 1999;
	volatile uint64_t t4 = 512836687LLU;

	t4 = (x17/(x18|(x19&x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	static int16_t x22 = -44;
	int64_t x23 = -1LL;
	uint16_t x24 = 0U;
	int64_t t5 = 421114445674939044LL;

	t5 = (x21/(x22|(x23&x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 65U;
	int16_t x26 = 1731;
	uint32_t x27 = 564495U;
	static int64_t x28 = 41838LL;
	static volatile int64_t t6 = 271505416887346LL;

	t6 = (x25/(x26|(x27&x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = UINT8_MAX;
	uint8_t x31 = 10U;
	volatile int64_t x32 = -1LL;
	int64_t t7 = 81262149285LL;

	t7 = (x29/(x30|(x31&x32)));

	if (t7 != 16843009LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -20;
	int32_t x36 = INT32_MIN;
	uint32_t t8 = 409U;

	t8 = (x33/(x34|(x35&x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 4464;
	int16_t x40 = -1;

	t9 = (x37/(x38|(x39&x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -4;
	volatile int8_t x42 = 6;
	volatile int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 171576972;

	t10 = (x41/(x42|(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = 0;
	static uint32_t x47 = 1945711U;
	int32_t x48 = -1;

	t11 = (x45/(x46|(x47&x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 421923433;
	static int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 4108428LL;

	t12 = (x49/(x50|(x51&x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -383;
	static volatile int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -10763315;
	int64_t x56 = -124957264743977723LL;
	int64_t t13 = -23272279544963LL;

	t13 = (x53/(x54|(x55&x56)));

	if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile uint16_t x58 = 122U;
	uint32_t x59 = 1203365U;
	volatile uint32_t t14 = 76437542U;

	t14 = (x57/(x58|(x59&x60)));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 17U;
	int8_t x62 = 2;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = -1;
	uint64_t t15 = 482LLU;

	t15 = (x61/(x62|(x63&x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 77U;
	static volatile uint32_t x67 = 38U;
	static int8_t x68 = INT8_MAX;

	t16 = (x65/(x66|(x67&x68)));

	if (t16 != 38693399U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 49LL;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 3547U;

	t17 = (x69/(x70|(x71&x72)));

	if (t17 != 5154161517620024LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int16_t x75 = -1;
	static int16_t x76 = 0;

	t18 = (x73/(x74|(x75&x76)));

	if (t18 != 56LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 7077769039LL;
	uint32_t x78 = 17160U;
	uint8_t x79 = 48U;
	int16_t x80 = INT16_MAX;
	volatile int64_t t19 = -6LL;

	t19 = (x77/(x78|(x79&x80)));

	if (t19 != 411306LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MIN;
	int64_t x83 = 689781032LL;
	static volatile int64_t x84 = 3390814545498704809LL;

	t20 = (x81/(x82|(x83&x84)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	static uint16_t x87 = 28243U;
	int8_t x88 = INT8_MIN;
	uint32_t t21 = 2327424U;

	t21 = (x85/(x86|(x87&x88)));

	if (t21 != 76192U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x90 = INT64_MIN;
	int16_t x91 = 134;

	t22 = (x89/(x90|(x91&x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	uint64_t x94 = UINT64_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint64_t t23 = 11925201729LLU;

	t23 = (x93/(x94|(x95&x96)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x99 = 9LL;
	int16_t x100 = INT16_MIN;
	volatile int64_t t24 = -4971118941350LL;

	t24 = (x97/(x98|(x99&x100)));

	if (t24 != -542551296285575047LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = INT8_MAX;
	int16_t x103 = -1;
	static volatile int8_t x104 = -13;
	volatile int32_t t25 = -5980080;

	t25 = (x101/(x102|(x103&x104)));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -1;
	int64_t x107 = INT64_MIN;
	int64_t t26 = -189943LL;

	t26 = (x105/(x106|(x107&x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 351535;
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = 171LLU;
	uint32_t x112 = 0U;
	uint64_t t27 = 108363LLU;

	t27 = (x109/(x110|(x111&x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	uint32_t x114 = 32703U;
	static int8_t x116 = INT8_MIN;
	volatile uint32_t t28 = 30305U;

	t28 = (x113/(x114|(x115&x116)));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	static volatile int8_t x118 = INT8_MIN;
	int64_t x119 = -228193432556LL;
	static int32_t x120 = -45;

	t29 = (x117/(x118|(x119&x120)));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x124 = INT32_MIN;

	t30 = (x121/(x122|(x123&x124)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 37440LL;
	static volatile int32_t x126 = INT32_MIN;
	int32_t x128 = -1;
	static int64_t t31 = -1958LL;

	t31 = (x125/(x126|(x127&x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MAX;
	volatile int64_t t32 = 205LL;

	t32 = (x129/(x130|(x131&x132)));

	if (t32 != 6251268642LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 0;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	volatile int64_t t33 = -589983575267283425LL;

	t33 = (x133/(x134|(x135&x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 45U;
	static int64_t x138 = INT64_MAX;
	static int16_t x140 = -3355;
	volatile int64_t t34 = -351601667320031682LL;

	t34 = (x137/(x138|(x139&x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint8_t x142 = 3U;
	int16_t x143 = 9;
	volatile uint16_t x144 = UINT16_MAX;
	uint32_t t35 = 6249022U;

	t35 = (x141/(x142|(x143&x144)));

	if (t35 != 390451572U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x145 = -1;
	int8_t x146 = 12;
	int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	int64_t t36 = -32773244234538279LL;

	t36 = (x145/(x146|(x147&x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	static volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = 16192;

	t37 = (x149/(x150|(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint32_t x155 = 1U;
	int64_t x156 = INT64_MAX;
	int64_t t38 = 33756668LL;

	t38 = (x153/(x154|(x155&x156)));

	if (t38 != -65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 443U;
	static int64_t x158 = INT64_MAX;
	static int16_t x159 = INT16_MAX;
	uint8_t x160 = 1U;
	int64_t t39 = -3443448833LL;

	t39 = (x157/(x158|(x159&x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -263831288;
	volatile int8_t x162 = INT8_MIN;
	int32_t x163 = -56496512;
	static int16_t x164 = INT16_MAX;
	static int32_t t40 = 204644;

	t40 = (x161/(x162|(x163&x164)));

	if (t40 != 2061181) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 3U;
	int64_t x166 = 1085378968LL;
	volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = -1;
	uint64_t t41 = 8111LLU;

	t41 = (x165/(x166|(x167&x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = 653U;
	int64_t x175 = -1LL;
	static int8_t x176 = INT8_MIN;
	int64_t t42 = 2LL;

	t42 = (x173/(x174|(x175&x176)));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x178 = -252;
	int32_t x179 = INT32_MIN;
	volatile int32_t t43 = 32278;

	t43 = (x177/(x178|(x179&x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = -5;
	static int32_t x182 = INT32_MIN;
	uint8_t x183 = 5U;
	volatile uint32_t x184 = 439U;
	static uint32_t t44 = 88143U;

	t44 = (x181/(x182|(x183&x184)));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = 3U;
	int32_t x186 = 195;
	int16_t x187 = -1;
	int64_t x188 = -1LL;
	volatile int64_t t45 = -265352743420985073LL;

	t45 = (x185/(x186|(x187&x188)));

	if (t45 != -3LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	volatile uint32_t x191 = UINT32_MAX;
	int16_t x192 = INT16_MAX;
	int64_t t46 = 698300506502961384LL;

	t46 = (x189/(x190|(x191&x192)));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 790317915379LL;
	int16_t x194 = -1;
	int16_t x195 = 0;
	volatile int64_t t47 = -36332LL;

	t47 = (x193/(x194|(x195&x196)));

	if (t47 != -790317915379LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = 2617059018821LLU;
	int32_t x198 = INT32_MAX;
	volatile int64_t x199 = 14720LL;

	t48 = (x197/(x198|(x199&x200)));

	if (t48 != 1218LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	static int8_t x203 = INT8_MAX;
	int64_t x204 = -2889LL;
	volatile int64_t t49 = 4831146505974402LL;

	t49 = (x201/(x202|(x203&x204)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = 3;
	static int8_t x206 = -6;
	int8_t x207 = INT8_MAX;
	int16_t x208 = 1;

	t50 = (x205/(x206|(x207&x208)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x209 = -1;
	int8_t x211 = INT8_MIN;
	int8_t x212 = -6;
	volatile int32_t t51 = 412;

	t51 = (x209/(x210|(x211&x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x215 = -1;
	static uint64_t x216 = 5601419470223318LLU;

	t52 = (x213/(x214|(x215&x216)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;

	t53 = (x217/(x218|(x219&x220)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	volatile int64_t x227 = INT64_MIN;
	uint32_t x228 = 359U;
	volatile int64_t t54 = -7376629LL;

	t54 = (x225/(x226|(x227&x228)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x230 = 1;
	int8_t x231 = 0;
	int64_t t55 = -109121LL;

	t55 = (x229/(x230|(x231&x232)));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = 8405809621LL;
	int64_t x234 = -1LL;
	volatile int16_t x235 = -621;
	int32_t x236 = -1;
	static int64_t t56 = -95953420686LL;

	t56 = (x233/(x234|(x235&x236)));

	if (t56 != -8405809621LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	static int8_t x238 = INT8_MIN;
	uint64_t x240 = 7LLU;
	volatile uint64_t t57 = 241964623421389365LLU;

	t57 = (x237/(x238|(x239&x240)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 840139897256LLU;
	int64_t x242 = -150215776350060177LL;
	static int8_t x243 = -1;
	int16_t x244 = INT16_MIN;

	t58 = (x241/(x242|(x243&x244)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x245 = UINT16_MAX;
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = INT8_MIN;
	int64_t t59 = 247675997LL;

	t59 = (x245/(x246|(x247&x248)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x249 = -1LL;
	volatile int16_t x250 = INT16_MIN;
	static int32_t x251 = -132;
	volatile uint16_t x252 = 2146U;

	t60 = (x249/(x250|(x251&x252)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = 118304;
	int8_t x254 = INT8_MIN;
	static int64_t x255 = 3LL;
	static int64_t x256 = 684897LL;

	t61 = (x253/(x254|(x255&x256)));

	if (t61 != -931LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x258 = -889;
	int64_t x260 = -639354962LL;
	volatile int64_t t62 = 24634062944205988LL;

	t62 = (x257/(x258|(x259&x260)));

	if (t62 != -17747798LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MAX;
	uint16_t x262 = 820U;
	int16_t x263 = -1;
	int16_t x264 = -62;
	static int32_t t63 = -35;

	t63 = (x261/(x262|(x263&x264)));

	if (t63 != -214748364) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 2;
	uint8_t x266 = 12U;
	volatile uint8_t x267 = UINT8_MAX;
	volatile uint8_t x268 = 8U;
	int32_t t64 = -252421;

	t64 = (x265/(x266|(x267&x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 2614056U;
	static int32_t x270 = 2285;
	static volatile int64_t x271 = -150LL;
	int64_t t65 = 4418383431495853LL;

	t65 = (x269/(x270|(x271&x272)));

	if (t65 != -153768LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -37491835092LL;
	static int8_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	uint16_t x276 = 127U;

	t66 = (x273/(x274|(x275&x276)));

	if (t66 != 37491835092LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1360;
	static int16_t x278 = -1;
	static int8_t x279 = -3;
	int16_t x280 = INT16_MIN;

	t67 = (x277/(x278|(x279&x280)));

	if (t67 != 1360) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = INT64_MIN;
	int16_t x283 = 37;
	int32_t x284 = 1;

	t68 = (x281/(x282|(x283&x284)));

	if (t68 != -249280325320399346LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = UINT32_MAX;
	static int32_t x288 = -1;
	volatile int64_t t69 = 119394692363LL;

	t69 = (x285/(x286|(x287&x288)));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	volatile int64_t x290 = -1LL;
	static volatile int64_t x291 = INT64_MIN;
	static volatile int64_t t70 = -1050664832898330261LL;

	t70 = (x289/(x290|(x291&x292)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x293 = INT32_MIN;
	int64_t x294 = 152092216LL;
	int8_t x295 = 1;
	int8_t x296 = -1;

	t71 = (x293/(x294|(x295&x296)));

	if (t71 != -14LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	int16_t x298 = 1;
	static uint64_t x299 = 36607595444206905LLU;
	static uint16_t x300 = 4271U;
	static volatile uint64_t t72 = 712675947451758LLU;

	t72 = (x297/(x298|(x299&x300)));

	if (t72 != 4458966418590657LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 920986LL;
	int64_t x303 = 13204965155LL;
	volatile int64_t t73 = 190352054196001773LL;

	t73 = (x301/(x302|(x303&x304)));

	if (t73 != 1170LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 1816LLU;
	int16_t x306 = -4033;
	int8_t x307 = -21;
	volatile uint32_t x308 = UINT32_MAX;
	volatile uint64_t t74 = 16697695117386994LLU;

	t74 = (x305/(x306|(x307&x308)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x309 = 7U;
	int16_t x310 = 9;
	int16_t x312 = INT16_MIN;
	volatile int32_t t75 = -2185962;

	t75 = (x309/(x310|(x311&x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 24225LL;
	volatile uint16_t x314 = UINT16_MAX;
	static uint8_t x315 = UINT8_MAX;
	int8_t x316 = -1;

	t76 = (x313/(x314|(x315&x316)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = UINT64_MAX;
	volatile uint64_t x318 = UINT64_MAX;
	int32_t x319 = -1;
	int16_t x320 = -11;
	uint64_t t77 = 6620567596045185LLU;

	t77 = (x317/(x318|(x319&x320)));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	static int8_t x322 = INT8_MAX;
	volatile uint64_t t78 = 2779872LLU;

	t78 = (x321/(x322|(x323&x324)));

	if (t78 != 556446082281365LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	volatile int64_t t79 = 208028281690226227LL;

	t79 = (x325/(x326|(x327&x328)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = -1;
	int16_t x330 = -114;
	static volatile int8_t x331 = INT8_MIN;
	int64_t x332 = -643798LL;
	volatile int64_t t80 = 126LL;

	t80 = (x329/(x330|(x331&x332)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	uint8_t x335 = 1U;
	int16_t x336 = INT16_MIN;
	volatile int64_t t81 = -2303835LL;

	t81 = (x333/(x334|(x335&x336)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile int16_t x339 = 1;
	int32_t x340 = -4819244;
	uint32_t t82 = 72U;

	t82 = (x337/(x338|(x339&x340)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 516U;
	uint16_t x342 = 1800U;
	int32_t x343 = -1;
	static volatile int64_t x344 = -1LL;
	volatile int64_t t83 = 231833LL;

	t83 = (x341/(x342|(x343&x344)));

	if (t83 != -516LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	static uint32_t x348 = 401236754U;
	uint32_t t84 = 208577075U;

	t84 = (x345/(x346|(x347&x348)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = INT64_MIN;
	int16_t x351 = -11;
	static int16_t x352 = -2;
	volatile int64_t t85 = 3886512989501596809LL;

	t85 = (x349/(x350|(x351&x352)));

	if (t85 != -52754LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = -5;
	int32_t t86 = 17;

	t86 = (x353/(x354|(x355&x356)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile int8_t x358 = -44;
	int32_t x359 = -31;
	static volatile int16_t x360 = -3;

	t87 = (x357/(x358|(x359&x360)));

	if (t87 != 2978) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	volatile uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 11U;
	int8_t x364 = -1;
	int32_t t88 = -891776;

	t88 = (x361/(x362|(x363&x364)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x365 = INT64_MAX;
	static uint64_t x366 = 862LLU;
	uint8_t x367 = 15U;
	uint32_t x368 = UINT32_MAX;

	t89 = (x365/(x366|(x367&x368)));

	if (t89 != 10687568988244236LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 36U;
	volatile int64_t t90 = 21920LL;

	t90 = (x369/(x370|(x371&x372)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	int16_t x376 = INT16_MIN;
	uint32_t t91 = 2870635U;

	t91 = (x373/(x374|(x375&x376)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = UINT32_MAX;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MAX;
	uint32_t t92 = 986U;

	t92 = (x377/(x378|(x379&x380)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = INT32_MAX;
	uint8_t x383 = 2U;
	static volatile int8_t x384 = INT8_MIN;

	t93 = (x381/(x382|(x383&x384)));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x386 = INT8_MIN;
	int32_t t94 = -9615;

	t94 = (x385/(x386|(x387&x388)));

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x391 = INT8_MAX;
	uint8_t x392 = 20U;

	t95 = (x389/(x390|(x391&x392)));

	if (t95 != 439208192231179800LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t96 = 870812504071LLU;

	t96 = (x393/(x394|(x395&x396)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = INT8_MIN;
	static int8_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;
	uint64_t t97 = 86224LLU;

	t97 = (x397/(x398|(x399&x400)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = -1;
	volatile int64_t x402 = 3668763974365449LL;
	uint16_t x403 = 667U;
	int8_t x404 = 3;
	static int64_t t98 = 571938732547655091LL;

	t98 = (x401/(x402|(x403&x404)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x406 = 1891450312055LLU;
	int64_t x408 = INT64_MIN;
	uint64_t t99 = 13884726326LLU;

	t99 = (x405/(x406|(x407&x408)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

