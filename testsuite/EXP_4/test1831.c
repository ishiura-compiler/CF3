#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -209616595;
uint16_t x8 = 27U;
static volatile int32_t t1 = -1585189;
static int64_t t2 = 573046LL;
static int8_t x14 = INT8_MIN;
int64_t t3 = 1461LL;
uint16_t x18 = 14430U;
volatile int32_t x20 = INT32_MIN;
static int8_t x23 = INT8_MIN;
int32_t x25 = -1;
int64_t x26 = INT64_MIN;
static int8_t x29 = INT8_MAX;
uint32_t x41 = 314136U;
uint64_t x45 = UINT64_MAX;
int16_t x50 = INT16_MIN;
int32_t x52 = INT32_MIN;
volatile int64_t t13 = 212574508765470298LL;
int64_t t14 = 3201516361112599809LL;
int8_t x64 = INT8_MAX;
int8_t x65 = INT8_MAX;
static uint64_t x69 = 310470749457520LLU;
int64_t x74 = 2991686789586679LL;
int32_t t22 = 1028;
static volatile int64_t t23 = 2856911525177LL;
static int64_t x98 = 1LL;
int32_t x103 = INT32_MAX;
volatile int32_t x104 = INT32_MIN;
volatile uint16_t x108 = UINT16_MAX;
int64_t t26 = 17145705824378659LL;
static int32_t x113 = -3;
int32_t x114 = INT32_MAX;
static int32_t x119 = -1;
volatile uint64_t t30 = 46502942767998577LLU;
int64_t x136 = -322055576LL;
uint64_t t33 = 136140828930887539LLU;
int64_t x147 = -1LL;
static int16_t x150 = -1;
int8_t x156 = 10;
static int64_t t38 = 508206616663610923LL;
static volatile int64_t x162 = -35013587LL;
int32_t x165 = -1;
volatile uint32_t x166 = UINT32_MAX;
uint8_t x175 = 23U;
volatile uint32_t t43 = 782435U;
int32_t x179 = -1;
uint32_t x180 = 21257075U;
volatile uint8_t x186 = UINT8_MAX;
int32_t x192 = INT32_MIN;
volatile uint64_t t48 = 106LLU;
volatile int32_t t49 = 1927;
static uint8_t x203 = 18U;
int64_t x210 = INT64_MAX;
uint32_t x215 = 111U;
int8_t x216 = -3;
int16_t x221 = -557;
int64_t t55 = -2482278864LL;
volatile int32_t x228 = 849295476;
int16_t x230 = -562;
static volatile uint64_t t58 = 1425150822LLU;
volatile int32_t x238 = INT32_MIN;
int32_t x244 = -1;
int64_t x247 = INT64_MAX;
static int8_t x248 = INT8_MIN;
static volatile int8_t x252 = INT8_MIN;
int16_t x254 = INT16_MAX;
int64_t x271 = -1LL;
static int32_t x273 = INT32_MIN;
int32_t x274 = INT32_MIN;
volatile int16_t x277 = INT16_MIN;
uint16_t x279 = 391U;
static volatile int8_t x281 = INT8_MAX;
static uint8_t x283 = 60U;
static int32_t x284 = INT32_MIN;
int8_t x294 = INT8_MIN;
int32_t x295 = 4765959;
uint64_t t73 = 1151586882446977802LLU;
int32_t t74 = 9;
static int64_t x305 = -1LL;
int8_t x307 = -1;
volatile int64_t t76 = 3306822922482LL;
volatile uint64_t x310 = UINT64_MAX;
static int32_t x322 = -1;
uint32_t x325 = UINT32_MAX;
int32_t x331 = -1;
volatile int32_t x349 = INT32_MAX;
static int16_t x350 = INT16_MAX;
int8_t x352 = -1;
uint64_t x364 = UINT64_MAX;
int8_t x367 = 0;
static int8_t x369 = -1;
static volatile int16_t x373 = 1;
int32_t x375 = 2;
volatile uint32_t t94 = 127729U;
static int8_t x387 = INT8_MIN;
int64_t t96 = -430058886LL;
uint8_t x390 = 1U;
static uint8_t x398 = 6U;
volatile int64_t t99 = 90LL;


void f0(void) {
	int16_t x2 = -1;
	int16_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -9;

	t0 = (x1&(x2&(x3&x4)));

	if (t0 != 45) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3U;
	static volatile int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MAX;

	t1 = (x5&(x6&(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	static int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	volatile int32_t x12 = INT32_MIN;

	t2 = (x9&(x10&(x11&x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int16_t x15 = 13;
	static volatile int8_t x16 = INT8_MAX;

	t3 = (x13&(x14&(x15&x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 24U;
	volatile uint8_t x19 = UINT8_MAX;
	uint32_t t4 = 62U;

	t4 = (x17&(x18&(x19&x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MAX;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = -7205432441759LL;

	t5 = (x21&(x22&(x23&x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 3658U;
	uint8_t x28 = 22U;
	int64_t t6 = 201307523849122577LL;

	t6 = (x25&(x26&(x27&x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = -98;
	int16_t x32 = 0;
	volatile int32_t t7 = -1;

	t7 = (x29&(x30&(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -23;
	int8_t x34 = INT8_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t x36 = -1;
	int32_t t8 = -13980;

	t8 = (x33&(x34&(x35&x36)));

	if (t8 != 105) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;
	int64_t x40 = INT64_MIN;
	static int64_t t9 = 6148379238LL;

	t9 = (x37&(x38&(x39&x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 17856072U;
	static volatile int8_t x43 = -14;
	volatile int8_t x44 = -1;
	volatile uint32_t t10 = 15514253U;

	t10 = (x41&(x42&(x43&x44)));

	if (t10 != 16896U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = 6U;
	int64_t x47 = INT64_MAX;
	static volatile uint32_t x48 = 16841U;
	uint64_t t11 = 125222366934687LLU;

	t11 = (x45&(x46&(x47&x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MAX;
	uint32_t x51 = 257U;
	uint32_t t12 = 396995U;

	t12 = (x49&(x50&(x51&x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 3U;
	int64_t x54 = -430636874851473LL;
	static volatile int64_t x55 = -1LL;
	int8_t x56 = -4;

	t13 = (x53&(x54&(x55&x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	uint8_t x58 = 3U;
	static volatile int64_t x59 = 1LL;
	int16_t x60 = -1;

	t14 = (x57&(x58&(x59&x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	static int16_t x63 = 9;
	uint32_t t15 = 1464U;

	t15 = (x61&(x62&(x63&x64)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	int64_t t16 = 294495537613LL;

	t16 = (x65&(x66&(x67&x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	uint64_t t17 = 7LLU;

	t17 = (x69&(x70&(x71&x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -259312794;
	static int64_t x75 = 17059LL;
	volatile int8_t x76 = 0;
	int64_t t18 = -24226LL;

	t18 = (x73&(x74&(x75&x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -401;
	uint16_t x78 = 2U;
	int8_t x79 = 8;
	volatile int16_t x80 = 0;
	int32_t t19 = 0;

	t19 = (x77&(x78&(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -386417197427LL;
	static int32_t x82 = -569505;
	uint16_t x83 = 25U;
	int8_t x84 = -3;
	int64_t t20 = -6053373012979LL;

	t20 = (x81&(x82&(x83&x84)));

	if (t20 != 9LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = UINT8_MAX;
	uint32_t x88 = 0U;
	volatile uint64_t t21 = 57097LLU;

	t21 = (x85&(x86&(x87&x88)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile uint16_t x90 = 823U;
	int8_t x91 = -5;
	uint16_t x92 = UINT16_MAX;

	t22 = (x89&(x90&(x91&x92)));

	if (t22 != 819) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = 44U;
	uint8_t x94 = UINT8_MAX;
	static uint32_t x95 = 810817504U;
	static int64_t x96 = 2814880LL;

	t23 = (x93&(x94&(x95&x96)));

	if (t23 != 32LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = -1;
	uint32_t x99 = UINT32_MAX;
	volatile uint32_t x100 = UINT32_MAX;
	volatile int64_t t24 = 1300LL;

	t24 = (x97&(x98&(x99&x100)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = 0;
	int32_t t25 = 7117123;

	t25 = (x101&(x102&(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = INT32_MAX;

	t26 = (x105&(x106&(x107&x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = -1;
	int16_t x110 = INT16_MAX;
	int32_t x111 = -1;
	int64_t x112 = -1LL;
	int64_t t27 = -1519227LL;

	t27 = (x109&(x110&(x111&x112)));

	if (t27 != 32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = INT64_MIN;
	uint64_t x116 = 8754478374288LLU;
	uint64_t t28 = 2451027582858086733LLU;

	t28 = (x113&(x114&(x115&x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MIN;
	uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 25LLU;

	t29 = (x117&(x118&(x119&x120)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	static uint32_t x124 = UINT32_MAX;

	t30 = (x121&(x122&(x123&x124)));

	if (t30 != 4294967168LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = 0;
	int64_t t31 = 15622LL;

	t31 = (x125&(x126&(x127&x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 2584543LLU;
	int8_t x130 = 1;
	int32_t x131 = INT32_MAX;
	uint8_t x132 = 14U;
	volatile uint64_t t32 = 378009LLU;

	t32 = (x129&(x130&(x131&x132)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 76LLU;
	int32_t x134 = INT32_MIN;
	static int8_t x135 = INT8_MIN;

	t33 = (x133&(x134&(x135&x136)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -15050LL;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int16_t x140 = 10770;
	int64_t t34 = -46206365447471LL;

	t34 = (x137&(x138&(x139&x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	static uint32_t x142 = 683U;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 17868731LLU;
	uint64_t t35 = 1813270871865098541LLU;

	t35 = (x141&(x142&(x143&x144)));

	if (t35 != 640LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 3LL;
	static uint32_t x146 = 129794U;
	volatile int32_t x148 = 785293955;
	int64_t t36 = -14866193931145LL;

	t36 = (x145&(x146&(x147&x148)));

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static int32_t x151 = -760556;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 29320076;

	t37 = (x149&(x150&(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int64_t x154 = INT64_MIN;
	volatile int32_t x155 = -643425969;

	t38 = (x153&(x154&(x155&x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 0U;
	int8_t x158 = -1;
	volatile int16_t x159 = INT16_MAX;
	int32_t x160 = -1;
	volatile int32_t t39 = 5504;

	t39 = (x157&(x158&(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -3646;
	int32_t x163 = 2;
	int64_t x164 = -223589591LL;
	volatile int64_t t40 = 0LL;

	t40 = (x161&(x162&(x163&x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x167 = -1;
	int64_t x168 = 4126LL;
	int64_t t41 = 6033460LL;

	t41 = (x165&(x166&(x167&x168)));

	if (t41 != 4126LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 1229862;
	uint32_t x170 = UINT32_MAX;
	int16_t x171 = INT16_MIN;
	uint8_t x172 = 3U;
	static volatile uint32_t t42 = 99866168U;

	t42 = (x169&(x170&(x171&x172)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -6062;
	uint32_t x174 = 554132U;
	uint32_t x176 = 805072U;

	t43 = (x173&(x174&(x175&x176)));

	if (t43 != 16U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 1473725214LL;
	int16_t x178 = 1;
	volatile int64_t t44 = 94655LL;

	t44 = (x177&(x178&(x179&x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	uint32_t x184 = 1U;
	static volatile int64_t t45 = 3440381102671110426LL;

	t45 = (x181&(x182&(x183&x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 78127354637964484LLU;
	static int32_t x187 = -1;
	static int64_t x188 = -1LL;
	volatile uint64_t t46 = 1055617176LLU;

	t46 = (x185&(x186&(x187&x188)));

	if (t46 != 196LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	static int16_t x190 = INT16_MIN;
	uint8_t x191 = 0U;
	volatile int32_t t47 = 1;

	t47 = (x189&(x190&(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -1LL;
	volatile uint64_t x194 = 179LLU;
	uint32_t x195 = 130U;
	static uint8_t x196 = 21U;

	t48 = (x193&(x194&(x195&x196)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MAX;
	uint16_t x200 = 8697U;

	t49 = (x197&(x198&(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -823852615;
	int64_t x202 = INT64_MAX;
	volatile int32_t x204 = INT32_MAX;
	int64_t t50 = -240797151LL;

	t50 = (x201&(x202&(x203&x204)));

	if (t50 != 16LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	int64_t t51 = -844248LL;

	t51 = (x205&(x206&(x207&x208)));

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 15U;
	static int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;
	int64_t t52 = 1008299831240874644LL;

	t52 = (x209&(x210&(x211&x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -10;
	int64_t x214 = INT64_MIN;
	int64_t t53 = 312758939478658416LL;

	t53 = (x213&(x214&(x215&x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -266844570627648767LL;
	static int8_t x218 = -1;
	static volatile int16_t x219 = INT16_MIN;
	volatile int16_t x220 = INT16_MAX;
	int64_t t54 = -11LL;

	t54 = (x217&(x218&(x219&x220)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = 19808345;
	static volatile int64_t x223 = INT64_MAX;
	volatile uint32_t x224 = UINT32_MAX;

	t55 = (x221&(x222&(x223&x224)));

	if (t55 != 19808337LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -39;
	int16_t x226 = -250;
	volatile int8_t x227 = INT8_MIN;
	int32_t t56 = -40341;

	t56 = (x225&(x226&(x227&x228)));

	if (t56 != 849295360) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = -1;
	volatile uint64_t t57 = 20819LLU;

	t57 = (x229&(x230&(x231&x232)));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 308031325803968668LLU;
	static int16_t x234 = 0;
	int64_t x235 = INT64_MAX;
	volatile int16_t x236 = INT16_MIN;

	t58 = (x233&(x234&(x235&x236)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x237 = 562715033U;
	static volatile uint32_t x239 = 29U;
	int8_t x240 = INT8_MAX;
	static volatile uint32_t t59 = 5U;

	t59 = (x237&(x238&(x239&x240)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint64_t x242 = UINT64_MAX;
	volatile uint8_t x243 = UINT8_MAX;
	uint64_t t60 = 166LLU;

	t60 = (x241&(x242&(x243&x244)));

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static volatile int32_t x246 = INT32_MAX;
	int64_t t61 = -22LL;

	t61 = (x245&(x246&(x247&x248)));

	if (t61 != 2147483520LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -11026390;
	int64_t x250 = 5773367LL;
	static int32_t x251 = INT32_MIN;
	static int64_t t62 = 47979599518211LL;

	t62 = (x249&(x250&(x251&x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 57985764U;
	uint8_t x255 = 7U;
	int32_t x256 = -1;
	uint32_t t63 = 102441U;

	t63 = (x253&(x254&(x255&x256)));

	if (t63 != 4U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 747694734878LLU;
	uint64_t x258 = 2950LLU;
	static int32_t x259 = -46426133;
	int8_t x260 = -1;
	volatile uint64_t t64 = 134267013197996LLU;

	t64 = (x257&(x258&(x259&x260)));

	if (t64 != 514LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 9641291051116336LLU;
	static volatile uint16_t x262 = 51U;
	volatile int8_t x263 = INT8_MIN;
	uint32_t x264 = 2261U;
	uint64_t t65 = 1157640919LLU;

	t65 = (x261&(x262&(x263&x264)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 91673339758907680LLU;
	static int8_t x266 = -1;
	static int16_t x267 = -1;
	volatile int8_t x268 = -1;
	volatile uint64_t t66 = 1019010494188LLU;

	t66 = (x265&(x266&(x267&x268)));

	if (t66 != 91673339758907680LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 621243LL;
	static volatile int8_t x270 = 1;
	uint8_t x272 = 4U;
	int64_t t67 = -259LL;

	t67 = (x269&(x270&(x271&x272)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x275 = INT16_MIN;
	uint16_t x276 = UINT16_MAX;
	static int32_t t68 = 311569;

	t68 = (x273&(x274&(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -1;
	volatile int16_t x280 = -251;
	volatile int32_t t69 = -404121392;

	t69 = (x277&(x278&(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = -1;
	volatile int32_t t70 = 0;

	t70 = (x281&(x282&(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	volatile uint64_t x286 = 45373254614517LLU;
	volatile uint16_t x287 = 6U;
	static volatile uint16_t x288 = 28094U;
	uint64_t t71 = 14160783481766607LLU;

	t71 = (x285&(x286&(x287&x288)));

	if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t72 = 7091529LLU;

	t72 = (x289&(x290&(x291&x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 4073279255LLU;
	uint32_t x296 = 16U;

	t73 = (x293&(x294&(x295&x296)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	static int32_t x300 = INT32_MIN;

	t74 = (x297&(x298&(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int64_t x302 = 314246784639758LL;
	uint32_t x303 = UINT32_MAX;
	static int32_t x304 = -1;
	volatile int64_t t75 = -426LL;

	t75 = (x301&(x302&(x303&x304)));

	if (t75 != 1207460622LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x306 = INT64_MIN;
	volatile int8_t x308 = 1;

	t76 = (x305&(x306&(x307&x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static int8_t x311 = 0;
	uint16_t x312 = UINT16_MAX;
	volatile uint64_t t77 = 4735554725LLU;

	t77 = (x309&(x310&(x311&x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = 48LL;
	int16_t x314 = 1;
	int16_t x315 = -1;
	int32_t x316 = INT32_MAX;
	static volatile int64_t t78 = -104823521917178520LL;

	t78 = (x313&(x314&(x315&x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 26U;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	static int32_t x320 = 344345;
	uint64_t t79 = 13392250914LLU;

	t79 = (x317&(x318&(x319&x320)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	static int8_t x323 = -1;
	volatile int32_t x324 = INT32_MIN;
	volatile uint32_t t80 = 52998316U;

	t80 = (x321&(x322&(x323&x324)));

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = -46;
	static int64_t x327 = 321906981LL;
	static int64_t x328 = -1LL;
	int64_t t81 = -1453953LL;

	t81 = (x325&(x326&(x327&x328)));

	if (t81 != 321906944LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = -1;
	int32_t x330 = 96854;
	int16_t x332 = -11;
	int32_t t82 = 781;

	t82 = (x329&(x330&(x331&x332)));

	if (t82 != 96852) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	volatile uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	uint16_t x336 = UINT16_MAX;
	static volatile uint32_t t83 = 126847U;

	t83 = (x333&(x334&(x335&x336)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = 6;
	uint64_t x338 = 869377071856LLU;
	int16_t x339 = -4059;
	uint8_t x340 = UINT8_MAX;
	static volatile uint64_t t84 = 60LLU;

	t84 = (x337&(x338&(x339&x340)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	volatile int64_t x342 = -1LL;
	uint16_t x343 = 1U;
	int32_t x344 = -1;
	volatile int64_t t85 = -47314597LL;

	t85 = (x341&(x342&(x343&x344)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -11;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 29U;
	volatile int16_t x348 = -31;
	volatile uint32_t t86 = 237427U;

	t86 = (x345&(x346&(x347&x348)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x351 = 2;
	static int32_t t87 = 3867;

	t87 = (x349&(x350&(x351&x352)));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -35;
	uint32_t x354 = UINT32_MAX;
	static int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	volatile uint32_t t88 = 11173398U;

	t88 = (x353&(x354&(x355&x356)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 43U;
	int64_t x358 = INT64_MAX;
	uint32_t x359 = 3U;
	static uint8_t x360 = 70U;
	int64_t t89 = -3678532LL;

	t89 = (x357&(x358&(x359&x360)));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	uint16_t x362 = 54U;
	int8_t x363 = INT8_MIN;
	volatile uint64_t t90 = 1728118790470466113LLU;

	t90 = (x361&(x362&(x363&x364)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MAX;
	static volatile int8_t x368 = -3;
	int32_t t91 = -203583757;

	t91 = (x365&(x366&(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x370 = INT8_MAX;
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 2490478;

	t92 = (x369&(x370&(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x374 = 7U;
	int64_t x376 = INT64_MIN;
	volatile int64_t t93 = 99225740059LL;

	t93 = (x373&(x374&(x375&x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = UINT16_MAX;
	volatile uint16_t x378 = 137U;
	int16_t x379 = -1;
	uint32_t x380 = 2529U;

	t94 = (x377&(x378&(x379&x380)));

	if (t94 != 129U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -83;
	volatile int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	int16_t x384 = -1;
	int64_t t95 = INT64_MIN;

	t95 = (x381&(x382&(x383&x384)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	volatile uint16_t x386 = 0U;
	int64_t x388 = -1LL;

	t96 = (x385&(x386&(x387&x388)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 6U;
	static int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t97 = -19764990650LL;

	t97 = (x389&(x390&(x391&x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -12;
	static int32_t x394 = INT32_MIN;
	uint8_t x395 = UINT8_MAX;
	volatile int64_t x396 = -1LL;
	int64_t t98 = 192758242LL;

	t98 = (x393&(x394&(x395&x396)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MIN;

	t99 = (x397&(x398&(x399&x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

