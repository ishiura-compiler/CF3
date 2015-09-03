#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = UINT16_MAX;
uint16_t x13 = 2330U;
static int16_t x19 = INT16_MAX;
int8_t x27 = 27;
int32_t t6 = -36875775;
int8_t x31 = 7;
uint64_t t7 = UINT64_MAX;
int16_t x34 = 0;
uint8_t x40 = 2U;
uint64_t x45 = UINT64_MAX;
static uint8_t x51 = 0U;
int64_t t12 = -1082121LL;
static uint8_t x65 = 18U;
uint16_t x67 = 0U;
static volatile uint32_t t16 = 16922021U;
uint16_t x69 = 78U;
static volatile int8_t x71 = INT8_MIN;
int64_t x75 = 81840018797LL;
volatile int16_t x77 = INT16_MIN;
int64_t x78 = INT64_MIN;
uint16_t x82 = 285U;
static int16_t x85 = INT16_MIN;
int8_t x89 = 3;
static volatile int32_t x98 = 52911;
uint64_t t26 = UINT64_MAX;
static volatile uint16_t x117 = 149U;
int32_t x122 = 114;
uint16_t x129 = 1U;
uint32_t x132 = 99U;
int32_t x138 = 546499;
int16_t x140 = INT16_MAX;
int32_t t34 = 11;
uint32_t t36 = 724U;
int64_t t37 = 4054027723LL;
int64_t t38 = 764LL;
static uint8_t x157 = 10U;
int8_t x164 = -2;
int64_t x167 = -1LL;
int64_t x169 = INT64_MIN;
int8_t x171 = -3;
int64_t x173 = -215LL;
int64_t x180 = INT64_MAX;
uint8_t x181 = 70U;
uint32_t x183 = 873U;
uint8_t x185 = UINT8_MAX;
volatile int64_t t46 = 123729LL;
int64_t t47 = INT64_MAX;
int64_t t49 = 266043683369LL;
int32_t x205 = INT32_MAX;
int8_t x206 = INT8_MIN;
uint32_t t52 = 931U;
int8_t x216 = -1;
static uint64_t t53 = 16498268440LLU;
volatile int16_t x219 = -1;
int32_t t54 = 1071;
static int64_t x227 = 3LL;
int32_t x232 = 46;
static int64_t x233 = -15989629714669892LL;
int32_t x236 = -1;
static int16_t x240 = 12;
uint32_t t60 = 1633U;
volatile int64_t x250 = INT64_MIN;
volatile uint16_t x251 = 448U;
int8_t x252 = -1;
volatile int64_t t62 = -3271508LL;
uint64_t x254 = UINT64_MAX;
volatile uint32_t x258 = UINT32_MAX;
int16_t x259 = -1;
volatile uint16_t x262 = 323U;
uint32_t x264 = 25426245U;
int32_t x272 = INT32_MIN;
uint64_t t67 = 5386548005683LLU;
uint8_t x276 = 0U;
static int64_t x286 = -1545900443003396LL;
int16_t x293 = 4210;
volatile int64_t t76 = 25140054149LL;
static int32_t x310 = -1;
static volatile int32_t t77 = 33072189;
int16_t x315 = -696;
static uint16_t x319 = UINT16_MAX;
volatile int8_t x323 = INT8_MAX;
int16_t x326 = 0;
volatile int8_t x328 = 0;
static int8_t x333 = -1;
uint64_t x335 = 1132960510288187820LLU;
static int32_t x338 = -1;
uint32_t x347 = 37846U;
uint32_t t86 = UINT32_MAX;
volatile int32_t t87 = 191949;
int16_t x353 = INT16_MIN;
uint32_t x355 = 0U;
int32_t x368 = INT32_MIN;
volatile int8_t x370 = -1;
volatile uint64_t t92 = UINT64_MAX;
int8_t x373 = 0;
int8_t x374 = INT8_MIN;
volatile int64_t x382 = INT64_MIN;
uint8_t x383 = 63U;
int8_t x385 = -25;
int8_t x393 = INT8_MIN;
uint64_t x394 = 1576644LLU;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int8_t x2 = -1;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 1U;
	int32_t t0 = -25513;

	t0 = (x1|(x2^(x3&x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint64_t x6 = 41358545LLU;
	int8_t x7 = -1;
	int64_t x8 = INT64_MAX;
	uint64_t t1 = 30LLU;

	t1 = (x5|(x6^(x7&x8)));

	if (t1 != 18446744073668193070LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x11 = 62846U;
	int8_t x12 = -5;
	uint32_t t2 = 3738U;

	t2 = (x9|(x10^(x11&x12)));

	if (t2 != 4294967173U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1880LL;
	uint32_t x15 = 1731U;
	uint16_t x16 = 13196U;
	volatile int64_t t3 = -572LL;

	t3 = (x13|(x14^(x15&x16)));

	if (t3 != -1222LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int32_t x18 = -1;
	int16_t x20 = INT16_MIN;
	static int64_t t4 = 256228075066LL;

	t4 = (x17|(x18^(x19&x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MIN;
	volatile uint8_t x23 = 10U;
	int16_t x24 = -858;
	volatile int64_t t5 = 42114682LL;

	t5 = (x21|(x22^(x23&x24)));

	if (t5 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 82U;
	static int8_t x26 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25|(x26^(x27&x28)));

	if (t6 != -37) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MIN;
	uint64_t x32 = 37538898048885999LLU;

	t7 = (x29|(x30^(x31&x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -32889225895LL;
	static int64_t x35 = -1LL;
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 3274806828LL;

	t8 = (x33|(x34^(x35&x36)));

	if (t8 != -32889225895LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static volatile int64_t t9 = -3182647981449LL;

	t9 = (x37|(x38^(x39&x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 0;
	static uint32_t x42 = UINT32_MAX;
	uint16_t x43 = 14U;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x41|(x42^(x43&x44)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	int64_t x47 = -1LL;
	int32_t x48 = -97;
	uint64_t t11 = UINT64_MAX;

	t11 = (x45|(x46^(x47&x48)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = -24738071LL;
	volatile int8_t x52 = -1;

	t12 = (x49|(x50^(x51&x52)));

	if (t12 != -24738071LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 29828046447001LL;
	uint16_t x54 = UINT16_MAX;
	int16_t x55 = -1;
	uint8_t x56 = 16U;
	int64_t t13 = -1084811510904LL;

	t13 = (x53|(x54^(x55&x56)));

	if (t13 != 29828046454783LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 2U;
	volatile int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	uint64_t x60 = 0LLU;
	uint64_t t14 = 1026546282265LLU;

	t14 = (x57|(x58^(x59&x60)));

	if (t14 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = 2;
	volatile int8_t x63 = INT8_MAX;
	uint32_t x64 = 12U;
	static uint32_t t15 = 431642562U;

	t15 = (x61|(x62^(x63&x64)));

	if (t15 != 4294934542U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x66 = 733701864U;
	int16_t x68 = 181;

	t16 = (x65|(x66^(x67&x68)));

	if (t16 != 733701882U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = 579585;
	int32_t x72 = 1967263;
	volatile int32_t t17 = -125;

	t17 = (x69|(x70^(x71&x72)));

	if (t17 != 1498319) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -2;
	int8_t x74 = INT8_MAX;
	int32_t x76 = INT32_MAX;
	static int64_t t18 = 51843733910997LL;

	t18 = (x73|(x74^(x75&x76)));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x79 = INT8_MIN;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -256814LL;

	t19 = (x77|(x78^(x79&x80)));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 83894333;
	static int8_t x83 = 0;
	uint16_t x84 = 29U;
	volatile int32_t t20 = -414;

	t20 = (x81|(x82^(x83&x84)));

	if (t20 != 83894589) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x86 = UINT8_MAX;
	uint16_t x87 = 34U;
	int64_t x88 = 1737103951298478306LL;
	int64_t t21 = 1569881789284039LL;

	t21 = (x85|(x86^(x87&x88)));

	if (t21 != -32547LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -262217295LL;
	volatile int16_t x91 = 124;
	int16_t x92 = INT16_MIN;
	int64_t t22 = 46625592266LL;

	t22 = (x89|(x90^(x91&x92)));

	if (t22 != -262217293LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 15362U;
	volatile int32_t x94 = 3732;
	volatile int32_t x95 = INT32_MIN;
	int32_t x96 = 118833827;
	static int32_t t23 = -420;

	t23 = (x93|(x94^(x95&x96)));

	if (t23 != 16022) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 11363895481LLU;
	volatile int8_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile uint64_t t24 = 356230LLU;

	t24 = (x97|(x98^(x99&x100)));

	if (t24 != 18446744073709506239LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int16_t x102 = -1;
	static uint8_t x103 = 117U;
	volatile int16_t x104 = INT16_MAX;
	static int32_t t25 = -7;

	t25 = (x101|(x102^(x103&x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint64_t x106 = 55059924654830LLU;
	int64_t x107 = -1LL;
	volatile uint64_t x108 = UINT64_MAX;

	t26 = (x105|(x106^(x107&x108)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x110 = 36U;
	uint32_t x111 = 36936U;
	static int8_t x112 = -1;
	static uint32_t t27 = 36477U;

	t27 = (x109|(x110^(x111&x112)));

	if (t27 != 4294938732U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 65199836;
	int32_t x114 = INT32_MAX;
	static volatile uint32_t x115 = UINT32_MAX;
	volatile int8_t x116 = INT8_MIN;
	static uint32_t t28 = 6424U;

	t28 = (x113|(x114^(x115&x116)));

	if (t28 != 2212683519U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = -1;
	int64_t x119 = 43251466LL;
	uint32_t x120 = UINT32_MAX;
	int64_t t29 = -89836LL;

	t29 = (x117|(x118^(x119&x120)));

	if (t29 != -43251467LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 4U;
	volatile int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t30 = -366354;

	t30 = (x121|(x122^(x123&x124)));

	if (t30 != 13) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	volatile int32_t x126 = INT32_MIN;
	static int64_t x127 = -223LL;
	int64_t x128 = 7500363196176464LL;
	volatile int64_t t31 = 16601150LL;

	t31 = (x125|(x126^(x127&x128)));

	if (t31 != -7500361988401025LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	volatile int64_t t32 = -489249433LL;

	t32 = (x129|(x130^(x131&x132)));

	if (t32 != -2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -895;
	int16_t x134 = 28;
	int8_t x135 = 1;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 1;

	t33 = (x133|(x134^(x135&x136)));

	if (t33 != -867) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x139 = -116;

	t34 = (x137|(x138^(x139&x140)));

	if (t34 != -2146948785) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -7;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = UINT32_MAX;
	int64_t t35 = 1101327807593803LL;

	t35 = (x141|(x142^(x143&x144)));

	if (t35 != -7LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint32_t x146 = 1U;
	uint8_t x147 = 3U;
	static int16_t x148 = 106;

	t36 = (x145|(x146^(x147&x148)));

	if (t36 != 2147483651U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 0;
	int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;

	t37 = (x149|(x150^(x151&x152)));

	if (t37 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MIN;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = 236858654082LL;

	t38 = (x153|(x154^(x155&x156)));

	if (t38 != -236223201281LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	static int16_t x159 = -144;
	volatile int64_t x160 = INT64_MAX;
	int64_t t39 = -3232279460LL;

	t39 = (x157|(x158^(x159&x160)));

	if (t39 != 143LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -26;
	static volatile int16_t x162 = -33;
	int32_t x163 = INT32_MIN;
	static volatile int32_t t40 = 0;

	t40 = (x161|(x162^(x163&x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -2094450139609LL;
	uint16_t x166 = 23620U;
	uint32_t x168 = 25U;
	static int64_t t41 = 15481LL;

	t41 = (x165|(x166^(x167&x168)));

	if (t41 != -2094450123137LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	static uint32_t x172 = 105U;
	static volatile int64_t t42 = 9465114189LL;

	t42 = (x169|(x170^(x171&x172)));

	if (t42 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = 57;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;
	static uint64_t t43 = 4081332878803401LLU;

	t43 = (x173|(x174^(x175&x176)));

	if (t43 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -991;
	uint64_t x178 = 6112LLU;
	static int64_t x179 = INT64_MAX;
	volatile uint64_t t44 = 8845823113144220LLU;

	t44 = (x177|(x178^(x179&x180)));

	if (t44 != 18446744073709550655LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = UINT16_MAX;
	int64_t x184 = INT64_MAX;
	static int64_t t45 = -204779872973LL;

	t45 = (x181|(x182^(x183&x184)));

	if (t45 != 64726LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 1U;

	t46 = (x185|(x186^(x187&x188)));

	if (t46 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 10U;
	static int64_t x190 = INT64_MAX;
	int16_t x191 = 5;
	int16_t x192 = 208;

	t47 = (x189|(x190^(x191&x192)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 0;
	static uint16_t x194 = 32281U;
	volatile int16_t x195 = -1;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 0;

	t48 = (x193|(x194^(x195&x196)));

	if (t48 != 486) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	static int64_t x200 = INT64_MIN;

	t49 = (x197|(x198^(x199&x200)));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	static int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x201|(x202^(x203&x204)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -249;

	t51 = (x205|(x206^(x207&x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 2U;
	static volatile uint16_t x210 = 1U;
	uint32_t x211 = UINT32_MAX;
	static volatile uint32_t x212 = 4338U;

	t52 = (x209|(x210^(x211&x212)));

	if (t52 != 4339U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = 2588913926LLU;

	t53 = (x213|(x214^(x215&x216)));

	if (t53 != 9223372039443689734LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint8_t x218 = 2U;
	uint16_t x220 = 2414U;

	t54 = (x217|(x218^(x219&x220)));

	if (t54 != 2431) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 62U;
	static volatile uint64_t x222 = 883810716LLU;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = 1242;
	static volatile uint64_t t55 = 106530273LLU;

	t55 = (x221|(x222^(x223&x224)));

	if (t55 != 883810750LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -6LL;
	static int8_t x226 = -1;
	volatile int8_t x228 = 2;
	int64_t t56 = -1LL;

	t56 = (x225|(x226^(x227&x228)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int64_t x230 = -1LL;
	uint8_t x231 = 14U;
	int64_t t57 = 573141767198072109LL;

	t57 = (x229|(x230^(x231&x232)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 5U;
	uint16_t x235 = UINT16_MAX;
	volatile int64_t t58 = 366000561910616LL;

	t58 = (x233|(x234^(x235&x236)));

	if (t58 != -15989629714628610LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 16LLU;
	int64_t x238 = INT64_MIN;
	static uint16_t x239 = UINT16_MAX;
	uint64_t t59 = 6188204394992233106LLU;

	t59 = (x237|(x238^(x239&x240)));

	if (t59 != 9223372036854775836LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int8_t x242 = -1;
	volatile uint32_t x243 = UINT32_MAX;
	int32_t x244 = INT32_MAX;

	t60 = (x241|(x242^(x243&x244)));

	if (t60 != 4294934528U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = -1324121;
	static int16_t x246 = 61;
	int32_t x247 = -22;
	uint8_t x248 = 14U;
	int32_t t61 = -2910739;

	t61 = (x245|(x246^(x247&x248)));

	if (t61 != -1324105) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;

	t62 = (x249|(x250^(x251&x252)));

	if (t62 != -32320LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = INT64_MIN;
	volatile int16_t x255 = INT16_MIN;
	static uint64_t x256 = UINT64_MAX;
	uint64_t t63 = 1258210937LLU;

	t63 = (x253|(x254^(x255&x256)));

	if (t63 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 70U;
	volatile int64_t x260 = -1LL;
	static volatile int64_t t64 = 1175159697LL;

	t64 = (x257|(x258^(x259&x260)));

	if (t64 != -4294967226LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -4;
	uint8_t x263 = UINT8_MAX;
	static volatile uint32_t t65 = 4302U;

	t65 = (x261|(x262^(x263&x264)));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 28U;
	uint64_t x266 = 30684LLU;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t66 = 6230381469415LLU;

	t66 = (x265|(x266^(x267&x268)));

	if (t66 != 18446744071562098652LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 2U;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 1LLU;

	t67 = (x269|(x270^(x271&x272)));

	if (t67 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static volatile int64_t x274 = INT64_MAX;
	uint16_t x275 = 36U;
	int64_t t68 = 66828287626716091LL;

	t68 = (x273|(x274^(x275&x276)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = 10U;
	static volatile uint64_t x279 = 23935813121LLU;
	int16_t x280 = -1;
	uint64_t t69 = 52694190431LLU;

	t69 = (x277|(x278^(x279&x280)));

	if (t69 != 18446744073709520395LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static int64_t x282 = -1LL;
	int16_t x283 = -1;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t70 = 253860212537539866LL;

	t70 = (x281|(x282^(x283&x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint32_t x287 = 294461729U;
	static uint16_t x288 = UINT16_MAX;
	int64_t t71 = -47LL;

	t71 = (x285|(x286^(x287&x288)));

	if (t71 != -1545900442976257LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	int64_t x291 = -1LL;
	int16_t x292 = 1;
	volatile int64_t t72 = 28764LL;

	t72 = (x289|(x290^(x291&x292)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x294 = 2107982325U;
	static uint8_t x295 = 1U;
	int64_t x296 = INT64_MIN;
	int64_t t73 = 859LL;

	t73 = (x293|(x294^(x295&x296)));

	if (t73 != 2107986423LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 6U;
	int64_t x298 = INT64_MAX;
	uint8_t x299 = 52U;
	volatile int8_t x300 = INT8_MAX;
	int64_t t74 = -10496654888937LL;

	t74 = (x297|(x298^(x299&x300)));

	if (t74 != 9223372036854775759LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	int32_t x304 = INT32_MIN;
	int64_t t75 = -6LL;

	t75 = (x301|(x302^(x303&x304)));

	if (t75 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 5188273U;
	volatile int16_t x306 = 82;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;

	t76 = (x305|(x306^(x307&x308)));

	if (t76 != -9223372036849587469LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	volatile int16_t x311 = INT16_MIN;
	int16_t x312 = -1;

	t77 = (x309|(x310^(x311&x312)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 77671664U;
	int8_t x314 = 0;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t78 = 14LLU;

	t78 = (x313|(x314^(x315&x316)));

	if (t78 != 18446744073709551096LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x318 = 0U;
	static int8_t x320 = 11;
	int64_t t79 = INT64_MAX;

	t79 = (x317|(x318^(x319&x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 2853590765985LLU;
	uint16_t x322 = 7U;
	volatile int64_t x324 = INT64_MIN;
	static uint64_t t80 = 105694723298066LLU;

	t80 = (x321|(x322^(x323&x324)));

	if (t80 != 2853590765991LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 111U;
	volatile int8_t x327 = -1;
	int32_t t81 = 32118;

	t81 = (x325|(x326^(x327&x328)));

	if (t81 != 111) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint16_t x330 = 28U;
	int64_t x331 = INT64_MIN;
	static uint8_t x332 = 47U;
	static int64_t t82 = 1688662594940490LL;

	t82 = (x329|(x330^(x331&x332)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MIN;
	int64_t x336 = -3601751938491LL;
	static volatile uint64_t t83 = UINT64_MAX;

	t83 = (x333|(x334^(x335&x336)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int32_t x339 = 24;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -8104105;

	t84 = (x337|(x338^(x339&x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 1827488LL;
	uint64_t x342 = 419422371882424300LLU;
	static uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t85 = 790369494147276903LLU;

	t85 = (x341|(x342^(x343&x344)));

	if (t85 != 419422371884034796LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	static uint16_t x346 = 2348U;
	static uint32_t x348 = 1045U;

	t86 = (x345|(x346^(x347&x348)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	static uint8_t x351 = UINT8_MAX;
	int32_t x352 = -1;

	t87 = (x349|(x350^(x351&x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	volatile uint32_t t88 = 111U;

	t88 = (x353|(x354^(x355&x356)));

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -12388904;
	uint32_t x360 = 1432U;
	int64_t t89 = 271842820375LL;

	t89 = (x357|(x358^(x359&x360)));

	if (t89 != -9223372032559839848LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 25U;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t90 = 681LLU;

	t90 = (x361|(x362^(x363&x364)));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	uint32_t x366 = 96818276U;
	volatile int16_t x367 = INT16_MIN;
	volatile uint32_t t91 = 842U;

	t91 = (x365|(x366^(x367&x368)));

	if (t91 != 2244301924U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint64_t x371 = 47814171370LLU;
	int32_t x372 = -1;

	t92 = (x369|(x370^(x371&x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x375 = -1;
	static int64_t x376 = -1LL;
	volatile int64_t t93 = -597995727307131373LL;

	t93 = (x373|(x374^(x375&x376)));

	if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	static int32_t x379 = 135;
	int64_t x380 = INT64_MIN;
	int64_t t94 = 0LL;

	t94 = (x377|(x378^(x379&x380)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 3U;
	int64_t x384 = 133138838550638453LL;
	int64_t t95 = 64866898544LL;

	t95 = (x381|(x382^(x383&x384)));

	if (t95 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x386 = -130;
	int32_t x387 = -1;
	static int8_t x388 = -1;
	volatile int32_t t96 = 182;

	t96 = (x385|(x386^(x387&x388)));

	if (t96 != -25) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint64_t x390 = 18008787014900LLU;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = -1;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x389|(x390^(x391&x392)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x395 = 1U;
	uint32_t x396 = UINT32_MAX;
	uint64_t t98 = 836250106700495LLU;

	t98 = (x393|(x394^(x395&x396)));

	if (t98 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = UINT64_MAX;
	int16_t x398 = INT16_MIN;
	static int16_t x399 = 21;
	volatile int32_t x400 = INT32_MAX;
	static volatile uint64_t t99 = UINT64_MAX;

	t99 = (x397|(x398^(x399&x400)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

