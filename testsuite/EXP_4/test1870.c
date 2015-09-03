#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = 3;
static int32_t x19 = 11639;
int64_t x20 = INT64_MIN;
uint64_t x21 = UINT64_MAX;
int16_t x32 = INT16_MIN;
uint16_t x54 = 113U;
int64_t x57 = INT64_MIN;
uint64_t t11 = 213414780LLU;
volatile int16_t x62 = 65;
static uint16_t x63 = 22456U;
volatile int32_t x71 = -61;
int32_t x74 = INT32_MAX;
volatile int32_t x80 = INT32_MIN;
int16_t x87 = INT16_MIN;
volatile int64_t t18 = 149384LL;
static uint64_t x97 = 112050LLU;
int16_t x99 = INT16_MAX;
int16_t x100 = INT16_MIN;
volatile int32_t x102 = 108431;
int32_t t22 = -76;
int32_t x105 = 456743162;
int16_t x108 = INT16_MIN;
static int8_t x114 = -1;
uint64_t x115 = 2044508LLU;
uint16_t x119 = 2U;
int64_t x127 = 25586LL;
int8_t x128 = INT8_MIN;
uint32_t x129 = 38240706U;
volatile int16_t x134 = -1;
static uint16_t x139 = UINT16_MAX;
volatile uint64_t t31 = 166LLU;
static uint8_t x151 = UINT8_MAX;
int8_t x156 = INT8_MIN;
static int64_t x159 = INT64_MIN;
volatile int64_t x161 = INT64_MIN;
uint32_t x165 = 2U;
static uint64_t x176 = 30421LLU;
int16_t x182 = -1;
int64_t t41 = -8591613LL;
int8_t x189 = INT8_MAX;
volatile int16_t x190 = INT16_MIN;
volatile uint32_t x194 = 47137U;
int8_t x197 = INT8_MIN;
volatile int16_t x198 = INT16_MAX;
int16_t x199 = -1;
uint64_t x205 = 34737925426821007LLU;
static int64_t x206 = INT64_MAX;
uint8_t x209 = 13U;
uint64_t t48 = 8569106LLU;
static volatile uint32_t t50 = 1652764U;
static uint64_t x224 = 1LLU;
volatile uint64_t t51 = 97643612LLU;
volatile uint8_t x229 = UINT8_MAX;
int16_t x232 = INT16_MIN;
int8_t x235 = INT8_MIN;
int32_t t58 = -4;
static uint64_t x255 = 65891758LLU;
volatile int32_t x256 = INT32_MIN;
uint64_t x259 = 6507952729LLU;
int64_t x261 = INT64_MIN;
uint16_t x264 = 35U;
volatile int64_t t61 = 477116656395LL;
uint32_t x269 = UINT32_MAX;
int64_t x270 = 13735LL;
volatile int32_t x271 = -13929059;
uint16_t x272 = UINT16_MAX;
volatile uint64_t t64 = 35LLU;
int64_t x281 = -61144122LL;
int16_t x282 = 3;
int16_t x285 = 1;
uint8_t x292 = UINT8_MAX;
int16_t x293 = -3475;
volatile int8_t x319 = INT8_MIN;
int32_t x320 = INT32_MIN;
volatile int64_t t75 = 30308490852LL;
uint8_t x330 = 8U;
int16_t x336 = INT16_MAX;
int16_t x337 = -8294;
uint64_t x338 = 515LLU;
volatile int8_t x341 = 1;
int32_t x347 = -1585865;
int64_t x348 = -107268620913LL;
volatile uint64_t t82 = 1288449343362438606LLU;
int16_t x357 = -1;
static uint8_t x381 = 28U;
int16_t x385 = -1;
uint16_t x386 = UINT16_MAX;
static int8_t x387 = -1;
int8_t x390 = INT8_MAX;
uint64_t t91 = 3542685425208519LLU;
static volatile int16_t x400 = -396;
volatile int64_t t93 = 189136164363LL;
volatile int64_t t94 = INT64_MIN;
int8_t x409 = INT8_MAX;
volatile int32_t x412 = INT32_MIN;
uint32_t x415 = UINT32_MAX;
int8_t x418 = INT8_MIN;
int8_t x427 = 42;
static volatile uint32_t t99 = 989784U;


void f0(void) {
	int16_t x9 = 2;
	static uint64_t x11 = 2027LLU;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t0 = 517002317LLU;

	t0 = (x9&(x10+(x11|x12)));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 6904493048LLU;
	int32_t x14 = 12;
	volatile uint8_t x15 = 15U;
	volatile uint16_t x16 = UINT16_MAX;
	static uint64_t t1 = 146891176685105LLU;

	t1 = (x13&(x14+(x15|x16)));

	if (t1 != 8LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x17 = 6229U;
	static volatile int16_t x18 = -39;
	volatile int64_t t2 = 6LL;

	t2 = (x17&(x18+(x19|x20)));

	if (t2 != 2128LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x22 = 1527138;
	uint64_t x23 = 28LLU;
	int8_t x24 = -15;
	static uint64_t t3 = 3381460742480LLU;

	t3 = (x21&(x22+(x23|x24)));

	if (t3 != 1527135LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = INT32_MIN;
	volatile int8_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int8_t x28 = 16;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x25&(x26+(x27|x28)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MAX;
	int32_t x30 = 96;
	int16_t x31 = 38;
	static int32_t t5 = -10243087;

	t5 = (x29&(x30+(x31|x32)));

	if (t5 != 2147451014) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 64318595220087LLU;
	uint16_t x34 = 169U;
	volatile int8_t x35 = INT8_MAX;
	int64_t x36 = -1LL;
	uint64_t t6 = 4007216LLU;

	t6 = (x33&(x34+(x35|x36)));

	if (t6 != 32LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = 137U;
	int32_t x40 = 14;
	volatile int32_t t7 = 46748676;

	t7 = (x37&(x38+(x39|x40)));

	if (t7 != -2147483520) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 8U;
	static int16_t x42 = INT16_MIN;
	int8_t x43 = 44;
	uint16_t x44 = 15U;
	int32_t t8 = 14142;

	t8 = (x41&(x42+(x43|x44)));

	if (t8 != 8) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 136665049LLU;
	int8_t x47 = -1;
	int16_t x48 = 5714;
	uint64_t t9 = 22490463LLU;

	t9 = (x45&(x46+(x47|x48)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int8_t x55 = -1;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t10 = 12U;

	t10 = (x53&(x54+(x55|x56)));

	if (t10 != 112U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 26U;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = 6951768871095608LLU;

	t11 = (x57&(x58+(x59|x60)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MAX;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t12 = 2974LL;

	t12 = (x61&(x62+(x63|x64)));

	if (t12 != 22521LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x65 = INT16_MAX;
	uint64_t x66 = 8840791933651LLU;
	uint16_t x67 = 2439U;
	uint64_t x68 = 3LLU;
	static volatile uint64_t t13 = 6505224LLU;

	t13 = (x65&(x66+(x67|x68)));

	if (t13 != 19546LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = 22U;
	int16_t x70 = -100;
	static volatile uint8_t x72 = 46U;
	volatile int32_t t14 = -1094135;

	t14 = (x69&(x70+(x71|x72)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x75 = 19;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t15 = 8099042755201220352LLU;

	t15 = (x73&(x74+(x75|x76)));

	if (t15 != 65534LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 798100;
	volatile int32_t x78 = 428;
	int32_t x79 = INT32_MIN;
	int32_t t16 = -5;

	t16 = (x77&(x78+(x79|x80)));

	if (t16 != 388) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 119590684206LLU;
	int16_t x82 = -219;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	uint64_t t17 = 1LLU;

	t17 = (x81&(x82+(x83|x84)));

	if (t17 != 119590684196LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = 0;
	static int16_t x86 = 26;
	int64_t x88 = INT64_MAX;

	t18 = (x85&(x86+(x87|x88)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MIN;
	int32_t x92 = -1;
	volatile int32_t t19 = -23865096;

	t19 = (x89&(x90+(x91|x92)));

	if (t19 != 32640) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = 1;
	int32_t x95 = INT32_MAX;
	static volatile int64_t x96 = -1LL;
	volatile int64_t t20 = -10LL;

	t20 = (x93&(x94+(x95|x96)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x98 = INT16_MIN;
	uint64_t t21 = 4273026004059399222LLU;

	t21 = (x97&(x98+(x99|x100)));

	if (t21 != 79282LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	uint16_t x103 = UINT16_MAX;
	volatile int8_t x104 = -1;

	t22 = (x101&(x102+(x103|x104)));

	if (t22 != 108430) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x106 = INT32_MIN;
	int64_t x107 = -1LL;
	static volatile int64_t t23 = -250267429LL;

	t23 = (x105&(x106+(x107|x108)));

	if (t23 != 456743162LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	static int16_t x116 = -1;
	volatile uint64_t t24 = 462918100LLU;

	t24 = (x113&(x114+(x115|x116)));

	if (t24 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = -48;
	static int32_t x120 = INT32_MAX;
	volatile int32_t t25 = 2165266;

	t25 = (x117&(x118+(x119|x120)));

	if (t25 != 2147483520) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x121 = 1;
	static volatile int64_t x122 = INT64_MAX;
	volatile uint64_t x123 = 7212914LLU;
	uint64_t x124 = 1018554LLU;
	static uint64_t t26 = 108254LLU;

	t26 = (x121&(x122+(x123|x124)));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x125 = INT64_MIN;
	int8_t x126 = 27;
	volatile int64_t t27 = 104704LL;

	t27 = (x125&(x126+(x127|x128)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x130 = INT64_MIN;
	static int16_t x131 = INT16_MAX;
	uint64_t x132 = 208011990998LLU;
	static volatile uint64_t t28 = 4680760848LLU;

	t28 = (x129&(x130+(x131|x132)));

	if (t28 != 37945794LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -1;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 1505232531013346LLU;
	uint64_t t29 = 183LLU;

	t29 = (x133&(x134+(x135|x136)));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = 4;
	volatile int32_t x138 = -1;
	static int64_t x140 = -1LL;
	volatile int64_t t30 = -1259410LL;

	t30 = (x137&(x138+(x139|x140)));

	if (t30 != 4LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = INT64_MIN;
	uint64_t x142 = 137592951250638844LLU;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 4U;

	t31 = (x141&(x142+(x143|x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	static uint8_t x146 = UINT8_MAX;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t32 = -1977;

	t32 = (x145&(x146+(x147|x148)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = 100245921976644LLU;
	int64_t x152 = INT64_MAX;
	uint64_t t33 = 13942LLU;

	t33 = (x149&(x150+(x151|x152)));

	if (t33 != 20803LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = -1;
	volatile int16_t x154 = INT16_MIN;
	volatile uint64_t x155 = UINT64_MAX;
	volatile uint64_t t34 = 5849612638403227LLU;

	t34 = (x153&(x154+(x155|x156)));

	if (t34 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x157 = 115U;
	volatile int16_t x158 = 52;
	static int64_t x160 = -263506009069824LL;
	int64_t t35 = 141442694115LL;

	t35 = (x157&(x158+(x159|x160)));

	if (t35 != 48LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x162 = 15108052LL;
	volatile int64_t x163 = -1LL;
	int16_t x164 = -9886;
	int64_t t36 = -86772100LL;

	t36 = (x161&(x162+(x163|x164)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = 365262521856576LL;
	volatile int64_t t37 = -10475LL;

	t37 = (x165&(x166+(x167|x168)));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 18597U;
	int16_t x172 = INT16_MAX;
	static volatile uint32_t t38 = 331837212U;

	t38 = (x169&(x170+(x171|x172)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = INT64_MIN;
	volatile uint64_t t39 = 2195133147799236670LLU;

	t39 = (x173&(x174+(x175|x176)));

	if (t39 != 9223372041149773440LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	uint64_t x178 = UINT64_MAX;
	volatile int16_t x179 = INT16_MIN;
	volatile uint32_t x180 = 5U;
	volatile uint64_t t40 = 1LLU;

	t40 = (x177&(x178+(x179|x180)));

	if (t40 != 4LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	static int16_t x184 = INT16_MAX;

	t41 = (x181&(x182+(x183|x184)));

	if (t41 != 254LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x185 = 89371788061394LL;
	int8_t x186 = -1;
	uint8_t x187 = UINT8_MAX;
	volatile uint16_t x188 = 37U;
	volatile int64_t t42 = -114913781LL;

	t42 = (x185&(x186+(x187|x188)));

	if (t42 != 210LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x191 = -232479;
	static int16_t x192 = -1;
	volatile int32_t t43 = -1;

	t43 = (x189&(x190+(x191|x192)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = -61360284LL;
	uint32_t x195 = 12670461U;
	int16_t x196 = -113;
	volatile int64_t t44 = 3453273544074329527LL;

	t44 = (x193&(x194+(x195|x196)));

	if (t44 != 45088LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x200 = INT8_MIN;
	int32_t t45 = 58371;

	t45 = (x197&(x198+(x199|x200)));

	if (t45 != 32640) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 1U;
	static uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 24U;
	uint64_t x204 = 318551LLU;
	uint64_t t46 = 3379582112813336LLU;

	t46 = (x201&(x202+(x203|x204)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x207 = 47U;
	int64_t x208 = INT64_MIN;
	static volatile uint64_t t47 = 447138680275LLU;

	t47 = (x205&(x206+(x207|x208)));

	if (t47 != 14LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = -1;
	volatile int16_t x211 = -8;
	static volatile uint64_t x212 = UINT64_MAX;

	t48 = (x209&(x210+(x211|x212)));

	if (t48 != 12LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static volatile int64_t x215 = INT64_MAX;
	int64_t x216 = 1682224428LL;
	int64_t t49 = 36124116LL;

	t49 = (x213&(x214+(x215|x216)));

	if (t49 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	volatile uint32_t x219 = 884U;
	volatile int16_t x220 = -13695;

	t50 = (x217&(x218+(x219|x220)));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 0U;
	volatile int16_t x222 = INT16_MAX;
	uint32_t x223 = 24177078U;

	t51 = (x221&(x222+(x223|x224)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = INT16_MAX;
	uint16_t x226 = UINT16_MAX;
	static volatile int8_t x227 = -1;
	int64_t x228 = -1LL;
	volatile int64_t t52 = -1838542233544764LL;

	t52 = (x225&(x226+(x227|x228)));

	if (t52 != 32766LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x230 = 278064451072LLU;
	volatile uint8_t x231 = 42U;
	uint64_t t53 = 236435LLU;

	t53 = (x229&(x230+(x231|x232)));

	if (t53 != 42LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = INT64_MIN;
	static int16_t x234 = -4712;
	volatile uint32_t x236 = 239483504U;
	volatile int64_t t54 = 111149551577131LL;

	t54 = (x233&(x234+(x235|x236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x237 = INT16_MIN;
	static int16_t x238 = INT16_MIN;
	volatile int8_t x239 = INT8_MIN;
	int16_t x240 = -90;
	volatile int32_t t55 = 3;

	t55 = (x237&(x238+(x239|x240)));

	if (t55 != -65536) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = UINT8_MAX;
	static int32_t x242 = 69060;
	int64_t x243 = -1LL;
	uint16_t x244 = 1896U;
	int64_t t56 = 0LL;

	t56 = (x241&(x242+(x243|x244)));

	if (t56 != 195LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MIN;
	uint32_t x246 = 4960055U;
	volatile int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t57 = 116534LLU;

	t57 = (x245&(x246+(x247|x248)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 3U;
	uint8_t x250 = 0U;
	int16_t x251 = 1527;
	int8_t x252 = INT8_MAX;

	t58 = (x249&(x250+(x251|x252)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	uint64_t t59 = 33LLU;

	t59 = (x253&(x254+(x255|x256)));

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = 123;
	volatile uint8_t x260 = 116U;
	volatile uint64_t t60 = 741138360806088025LLU;

	t60 = (x257&(x258+(x259|x260)));

	if (t60 != 6507952888LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = INT8_MAX;
	int16_t x263 = -1;

	t61 = (x261&(x262+(x263|x264)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t t62 = -16762745496054LL;

	t62 = (x269&(x270+(x271|x272)));

	if (t62 != 4281087398LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 1;
	volatile uint64_t x274 = 2540995LLU;
	uint32_t x275 = UINT32_MAX;
	static int16_t x276 = INT16_MIN;
	volatile uint64_t t63 = 17947711793283337LLU;

	t63 = (x273&(x274+(x275|x276)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = 1;
	uint64_t x278 = 35972771555381LLU;
	int64_t x279 = -229148235693LL;
	static uint64_t x280 = 38LLU;

	t64 = (x277&(x278+(x279|x280)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	int64_t t65 = -16211872615LL;

	t65 = (x281&(x282+(x283|x284)));

	if (t65 != -2147418110LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t66 = 1096672569519348768LLU;

	t66 = (x285&(x286+(x287|x288)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 37222322568709LLU;
	int16_t x290 = -91;
	int32_t x291 = -1;
	static volatile uint64_t t67 = 48919523753532LLU;

	t67 = (x289&(x290+(x291|x292)));

	if (t67 != 37222322568708LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x294 = UINT32_MAX;
	int32_t x295 = -1;
	int64_t x296 = INT64_MIN;
	volatile int64_t t68 = 1671883213334319344LL;

	t68 = (x293&(x294+(x295|x296)));

	if (t68 != 4294963820LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MAX;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int64_t t69 = 1299814290387LL;

	t69 = (x297&(x298+(x299|x300)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MAX;
	int8_t x302 = -1;
	static int64_t x303 = 496477730230LL;
	int16_t x304 = -1;
	static int64_t t70 = -1LL;

	t70 = (x301&(x302+(x303|x304)));

	if (t70 != 2147483646LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = INT16_MIN;
	static volatile int8_t x308 = -12;
	uint64_t t71 = 0LLU;

	t71 = (x305&(x306+(x307|x308)));

	if (t71 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -1;
	int8_t x310 = -1;
	int8_t x311 = INT8_MAX;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int32_t t72 = 30982813;

	t72 = (x309&(x310+(x311|x312)));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = 19U;
	int8_t x314 = -1;
	static uint32_t x315 = 29U;
	int32_t x316 = INT32_MAX;
	static volatile uint32_t t73 = 4170U;

	t73 = (x313&(x314+(x315|x316)));

	if (t73 != 18U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = INT32_MAX;
	volatile int32_t t74 = 3733;

	t74 = (x317&(x318+(x319|x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MIN;

	t75 = (x321&(x322+(x323|x324)));

	if (t75 != 9223372036854743166LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x325 = 229U;
	static uint32_t x326 = 11U;
	static volatile int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;
	uint32_t t76 = 26455U;

	t76 = (x325&(x326+(x327|x328)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = 0;
	int32_t x331 = 10273;
	static int16_t x332 = 0;
	volatile int32_t t77 = -35585672;

	t77 = (x329&(x330+(x331|x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = -1;
	volatile uint64_t x334 = 11714LLU;
	volatile uint64_t x335 = 3LLU;
	uint64_t t78 = 147714609593420LLU;

	t78 = (x333&(x334+(x335|x336)));

	if (t78 != 44481LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x339 = INT16_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	uint64_t t79 = 112LLU;

	t79 = (x337&(x338+(x339|x340)));

	if (t79 != 4294967810LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x342 = UINT64_MAX;
	static int16_t x343 = INT16_MAX;
	uint64_t x344 = UINT64_MAX;
	static volatile uint64_t t80 = 13LLU;

	t80 = (x341&(x342+(x343|x344)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	uint32_t x346 = 62779502U;
	int64_t t81 = 13963LL;

	t81 = (x345&(x346+(x347|x348)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = INT16_MIN;
	static int32_t x350 = INT32_MAX;
	int16_t x351 = 1;
	uint64_t x352 = 486970LLU;

	t82 = (x349&(x350+(x351|x352)));

	if (t82 != 2147942400LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 1195;
	int16_t x354 = INT16_MIN;
	static uint32_t x355 = UINT32_MAX;
	int8_t x356 = INT8_MIN;
	volatile uint32_t t83 = 315U;

	t83 = (x353&(x354+(x355|x356)));

	if (t83 != 1195U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = 1881;
	uint16_t x359 = 26396U;
	int16_t x360 = INT16_MAX;
	int32_t t84 = 2;

	t84 = (x357&(x358+(x359|x360)));

	if (t84 != 34648) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = -13;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = -7996;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t85 = 110;

	t85 = (x361&(x362+(x363|x364)));

	if (t85 != -8128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x369 = 2207U;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t86 = 3784515225095LLU;

	t86 = (x369&(x370+(x371|x372)));

	if (t86 != 2207LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = -1;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	static uint16_t x376 = 7686U;
	int32_t t87 = -1974;

	t87 = (x373&(x374+(x375|x376)));

	if (t87 != 65407) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -10;
	uint8_t x378 = 20U;
	static int64_t x379 = -101971531118LL;
	int64_t x380 = INT64_MAX;
	int64_t t88 = 12447LL;

	t88 = (x377&(x378+(x379|x380)));

	if (t88 != 18LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x382 = 41604;
	uint8_t x383 = 3U;
	int16_t x384 = -11601;
	int32_t t89 = -5;

	t89 = (x381&(x382+(x383|x384)));

	if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t90 = 16563468U;

	t90 = (x385&(x386+(x387|x388)));

	if (t90 != 65534U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 234672168LLU;
	static uint8_t x391 = 36U;
	static uint8_t x392 = 0U;

	t91 = (x389&(x390+(x391|x392)));

	if (t91 != 32LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = -1;
	static int64_t x394 = 257539210685LL;
	volatile uint8_t x395 = 20U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t92 = 49739905535053193LL;

	t92 = (x393&(x394+(x395|x396)));

	if (t92 != -9223371779315565103LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x397 = UINT16_MAX;
	static uint16_t x398 = 209U;
	int64_t x399 = 9925957372851LL;

	t93 = (x397&(x398+(x399|x400)));

	if (t93 != 200LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x401 = INT64_MIN;
	static uint16_t x402 = 6U;
	int32_t x403 = -341;
	int16_t x404 = 3208;

	t94 = (x401&(x402+(x403|x404)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = INT32_MIN;
	volatile int8_t x406 = INT8_MIN;
	uint32_t x407 = 643543U;
	volatile int64_t x408 = -1LL;
	static int64_t t95 = 2554603673776139729LL;

	t95 = (x405&(x406+(x407|x408)));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x410 = 52433U;
	int16_t x411 = -14262;
	static volatile uint32_t t96 = 25U;

	t96 = (x409&(x410+(x411|x412)));

	if (t96 != 27U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = -1;
	int8_t x414 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	static volatile uint32_t t97 = 0U;

	t97 = (x413&(x414+(x415|x416)));

	if (t97 != 4294967167U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x419 = UINT32_MAX;
	static volatile int64_t x420 = INT64_MIN;
	int64_t t98 = -151263689425045837LL;

	t98 = (x417&(x418+(x419|x420)));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 30232172U;
	int16_t x426 = INT16_MIN;
	static uint32_t x428 = 9658584U;

	t99 = (x425&(x426+(x427|x428)));

	if (t99 != 8405096U) { NG(); } else { ; }
	
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

