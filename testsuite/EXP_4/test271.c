#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 5U;
static volatile uint32_t x11 = UINT32_MAX;
volatile uint16_t x12 = UINT16_MAX;
int32_t x14 = INT32_MAX;
uint64_t x16 = UINT64_MAX;
static volatile int64_t x19 = 0LL;
volatile int64_t x20 = 1055LL;
volatile int32_t t4 = 4623376;
volatile int32_t x21 = INT32_MIN;
volatile int32_t x22 = 3;
volatile int32_t t5 = -2;
static int8_t x34 = -1;
volatile int32_t x37 = INT32_MIN;
volatile int32_t x42 = INT32_MIN;
static int16_t x44 = 1;
int32_t x48 = -1;
int16_t x50 = -1;
int32_t x52 = -489;
static volatile int32_t x53 = 1;
int64_t x77 = -795459LL;
volatile uint32_t x79 = UINT32_MAX;
volatile int32_t t18 = 270;
uint64_t x85 = UINT64_MAX;
static uint64_t t19 = 97739LLU;
static int32_t x89 = INT32_MIN;
int16_t x105 = INT16_MAX;
uint64_t x113 = UINT64_MAX;
int32_t x119 = INT32_MIN;
int32_t t27 = -87910;
int64_t x121 = 548874LL;
int64_t x127 = 1700LL;
static uint64_t t29 = 162999475LLU;
volatile int8_t x136 = INT8_MAX;
uint8_t x141 = UINT8_MAX;
volatile int64_t x142 = INT64_MIN;
static volatile uint64_t x146 = UINT64_MAX;
static int32_t t34 = 483834841;
static volatile int32_t t35 = 160;
int8_t x154 = -29;
volatile int32_t x162 = -433510944;
int64_t x163 = INT64_MIN;
static uint16_t x169 = 258U;
int64_t x180 = 168722086LL;
uint8_t x185 = 91U;
int8_t x188 = INT8_MIN;
int8_t x192 = INT8_MIN;
int16_t x193 = -7;
static int8_t x194 = -1;
static volatile int8_t x195 = -1;
int64_t x204 = 470LL;
int8_t x207 = INT8_MAX;
volatile uint32_t x217 = 93069U;
int16_t x218 = INT16_MIN;
int8_t x220 = -2;
int8_t x221 = -10;
static volatile int32_t t54 = 0;
int8_t x257 = -1;
volatile int16_t x258 = INT16_MIN;
uint16_t x267 = 43U;
int32_t x272 = 2;
static volatile int16_t x285 = -1;
volatile int32_t t64 = -43759;
int16_t x292 = INT16_MAX;
volatile int8_t x299 = INT8_MIN;
volatile uint64_t x303 = 6043589639297009LLU;
int64_t t69 = 14531087725000623LL;
static volatile int16_t x309 = INT16_MIN;
uint64_t x310 = 82152219LLU;
volatile int32_t x317 = -1;
int32_t t71 = 1323373;
uint64_t x328 = 257657137831525LLU;
int32_t t73 = -22;
volatile uint64_t x330 = 1160571424418LLU;
int16_t x332 = INT16_MIN;
static uint32_t t75 = 39798U;
int64_t x338 = INT64_MAX;
uint8_t x343 = UINT8_MAX;
int64_t x344 = -1LL;
volatile int32_t t78 = -24973778;
static volatile int64_t x349 = 0LL;
static int16_t x351 = INT16_MIN;
volatile int16_t x352 = INT16_MIN;
int16_t x371 = 3230;
static int32_t t84 = -1;
int64_t t85 = 110640490274901643LL;
volatile int8_t x377 = INT8_MIN;
static int8_t x387 = -1;
uint8_t x390 = 25U;
uint16_t x391 = 90U;
static uint64_t x393 = 33514364LLU;
uint64_t t90 = 1735652LLU;
volatile int64_t x397 = -29855212402LL;
int64_t x403 = 254596263339684161LL;
int32_t x404 = -2;
int32_t x411 = INT32_MIN;
volatile int8_t x420 = INT8_MAX;
uint64_t x423 = UINT64_MAX;
uint16_t x427 = 4015U;
volatile int32_t x430 = -1;
static int32_t x433 = -1697;
volatile uint16_t x435 = 473U;
int32_t t99 = -219;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	int16_t x3 = -313;
	uint8_t x4 = 3U;
	volatile int32_t t0 = -560;

	t0 = (x1&(x2==(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 91U;
	static volatile int64_t x7 = 4708799007549LL;
	static int8_t x8 = 1;
	uint32_t t1 = 409U;

	t1 = (x5&(x6==(x7-x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 27512545014LL;
	int8_t x10 = INT8_MIN;
	volatile int64_t t2 = -804378446094820LL;

	t2 = (x9&(x10==(x11-x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x15 = -4164521392065LL;
	volatile int32_t t3 = -1073;

	t3 = (x13&(x14==(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -12962;
	uint32_t x18 = UINT32_MAX;

	t4 = (x17&(x18==(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MAX;

	t5 = (x21&(x22==(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 1729159435687113064LLU;
	int8_t x26 = INT8_MAX;
	uint16_t x27 = 8U;
	uint32_t x28 = 3164741U;
	uint64_t t6 = 599556342754160167LLU;

	t6 = (x25&(x26==(x27-x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MAX;
	uint16_t x35 = 1U;
	int32_t x36 = -1;
	int32_t t7 = 982319686;

	t7 = (x33&(x34==(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = 11U;
	uint32_t x39 = UINT32_MAX;
	static int64_t x40 = 61013399678590483LL;
	int32_t t8 = 2670388;

	t8 = (x37&(x38==(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	volatile int32_t t9 = 176576207;

	t9 = (x41&(x42==(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = 3739404LL;
	int32_t x47 = -1;
	static volatile uint32_t t10 = 1518623257U;

	t10 = (x45&(x46==(x47-x48)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -1466;
	int32_t x51 = 24337;
	int32_t t11 = 2024651;

	t11 = (x49&(x50==(x51-x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -3;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = -1;
	int32_t t12 = -3;

	t12 = (x53&(x54==(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	volatile uint64_t x58 = 1798241255LLU;
	int64_t x59 = INT64_MAX;
	static uint8_t x60 = 1U;
	int32_t t13 = 2373;

	t13 = (x57&(x58==(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = 115198573986792LL;
	uint16_t x62 = UINT16_MAX;
	static int8_t x63 = 3;
	int32_t x64 = -66;
	volatile int64_t t14 = -10102096209LL;

	t14 = (x61&(x62==(x63-x64)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	int32_t x67 = -75123687;
	int32_t x68 = -1;
	static volatile int32_t t15 = 975668;

	t15 = (x65&(x66==(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MAX;
	uint64_t x74 = 429902262788LLU;
	int64_t x75 = -1LL;
	int64_t x76 = 670406LL;
	int32_t t16 = -1022598;

	t16 = (x73&(x74==(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x78 = INT64_MIN;
	int32_t x80 = -1;
	volatile int64_t t17 = 248LL;

	t17 = (x77&(x78==(x79-x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 0U;
	int8_t x82 = -1;
	static int16_t x83 = -1;
	uint64_t x84 = 248641619253524401LLU;

	t18 = (x81&(x82==(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = 1478567629198266219LL;
	volatile int64_t x87 = -1407117218054LL;
	static volatile int8_t x88 = INT8_MAX;

	t19 = (x85&(x86==(x87-x88)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	volatile uint32_t x91 = 55442U;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = -15;

	t20 = (x89&(x90==(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = 56;
	int16_t x95 = -1;
	static volatile uint32_t x96 = 0U;
	int32_t t21 = 3483;

	t21 = (x93&(x94==(x95-x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MAX;
	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = 5191;
	volatile int16_t x100 = INT16_MIN;
	int64_t t22 = -4349LL;

	t22 = (x97&(x98==(x99-x100)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = -1;
	int64_t x102 = 0LL;
	int64_t x103 = 39911598LL;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 1635112;

	t23 = (x101&(x102==(x103-x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x106 = INT16_MIN;
	int8_t x107 = 28;
	volatile int32_t x108 = INT32_MAX;
	int32_t t24 = 12016;

	t24 = (x105&(x106==(x107-x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MAX;
	uint32_t x111 = 5075U;
	int32_t x112 = -1;
	volatile int32_t t25 = 22517;

	t25 = (x109&(x110==(x111-x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x114 = INT64_MIN;
	static int64_t x115 = -16038413631110313LL;
	volatile int32_t x116 = -1;
	volatile uint64_t t26 = 204846716LLU;

	t26 = (x113&(x114==(x115-x116)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 14;
	volatile int64_t x118 = INT64_MIN;
	int16_t x120 = -2;

	t27 = (x117&(x118==(x119-x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = 1843;
	int16_t x123 = INT16_MIN;
	static volatile int16_t x124 = -1;
	volatile int64_t t28 = 10115371771LL;

	t28 = (x121&(x122==(x123-x124)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = 245324699LLU;
	int32_t x126 = 2066;
	int16_t x128 = -4;

	t29 = (x125&(x126==(x127-x128)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	uint8_t x130 = 9U;
	uint8_t x131 = 17U;
	int8_t x132 = -1;
	volatile int32_t t30 = 286368;

	t30 = (x129&(x130==(x131-x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x133 = -15;
	uint32_t x134 = 7515U;
	uint8_t x135 = 17U;
	static volatile int32_t t31 = 11;

	t31 = (x133&(x134==(x135-x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MAX;
	int64_t x139 = 630715991917791484LL;
	int8_t x140 = INT8_MIN;
	uint64_t t32 = 111831927617006061LLU;

	t32 = (x137&(x138==(x139-x140)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x143 = 643601147LLU;
	volatile uint8_t x144 = 0U;
	volatile int32_t t33 = 32945565;

	t33 = (x141&(x142==(x143-x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = -1;
	int32_t x147 = INT32_MAX;
	static uint64_t x148 = 11527LLU;

	t34 = (x145&(x146==(x147-x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x149 = INT32_MIN;
	volatile int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	uint16_t x152 = 11U;

	t35 = (x149&(x150==(x151-x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = INT64_MAX;
	int16_t x155 = INT16_MIN;
	int8_t x156 = 52;
	int64_t t36 = 759377433LL;

	t36 = (x153&(x154==(x155-x156)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = -1LL;
	int32_t x158 = 225;
	static int64_t x159 = -1LL;
	volatile int32_t x160 = INT32_MIN;
	int64_t t37 = -301LL;

	t37 = (x157&(x158==(x159-x160)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x164 = -20;
	int32_t t38 = -3;

	t38 = (x161&(x162==(x163-x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 852;
	volatile uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 89U;
	volatile int64_t x168 = -332LL;
	static int32_t t39 = -674803;

	t39 = (x165&(x166==(x167-x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MAX;
	int8_t x171 = 1;
	volatile int8_t x172 = 2;
	int32_t t40 = 47306116;

	t40 = (x169&(x170==(x171-x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	volatile int32_t x174 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t41 = 10216;

	t41 = (x173&(x174==(x175-x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x177 = -1;
	int16_t x178 = INT16_MIN;
	int16_t x179 = 0;
	int32_t t42 = 0;

	t42 = (x177&(x178==(x179-x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = UINT16_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t43 = -5017894;

	t43 = (x181&(x182==(x183-x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = 17U;
	int64_t x187 = -1LL;
	volatile int32_t t44 = 1282;

	t44 = (x185&(x186==(x187-x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	volatile uint8_t x190 = 7U;
	int16_t x191 = INT16_MIN;
	volatile int32_t t45 = 5062;

	t45 = (x189&(x190==(x191-x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x196 = 1756634281490LL;
	static volatile int32_t t46 = -5039485;

	t46 = (x193&(x194==(x195-x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 1;
	int64_t x202 = -1LL;
	uint8_t x203 = 1U;
	volatile int32_t t47 = 2;

	t47 = (x201&(x202==(x203-x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	int64_t x206 = -1LL;
	static volatile uint16_t x208 = 0U;
	volatile int32_t t48 = 483482;

	t48 = (x205&(x206==(x207-x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = UINT16_MAX;
	static int64_t x210 = -1LL;
	uint32_t x211 = 16U;
	uint16_t x212 = UINT16_MAX;
	int32_t t49 = 608552470;

	t49 = (x209&(x210==(x211-x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MIN;
	int8_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	static uint64_t t50 = 9004LLU;

	t50 = (x213&(x214==(x215-x216)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x219 = 5607;
	volatile uint32_t t51 = 6U;

	t51 = (x217&(x218==(x219-x220)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t52 = 73287;

	t52 = (x221&(x222==(x223-x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x229 = -1;
	uint32_t x230 = 0U;
	volatile int8_t x231 = -1;
	int8_t x232 = INT8_MIN;
	static int32_t t53 = 22800662;

	t53 = (x229&(x230==(x231-x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = 15;
	volatile uint16_t x234 = 52U;
	int16_t x235 = 1;
	uint32_t x236 = 1U;

	t54 = (x233&(x234==(x235-x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = 73U;
	int8_t x242 = INT8_MIN;
	static uint32_t x243 = 49811U;
	int8_t x244 = INT8_MIN;
	int32_t t55 = 7;

	t55 = (x241&(x242==(x243-x244)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	static int8_t x246 = -7;
	static uint8_t x247 = UINT8_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int64_t t56 = 703796663126LL;

	t56 = (x245&(x246==(x247-x248)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -26;
	static uint32_t x250 = UINT32_MAX;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MIN;
	volatile int32_t t57 = 4077;

	t57 = (x249&(x250==(x251-x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = -1327;
	static uint64_t x254 = UINT64_MAX;
	static uint16_t x255 = 721U;
	volatile uint64_t x256 = 15LLU;
	int32_t t58 = -81926245;

	t58 = (x253&(x254==(x255-x256)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x259 = INT64_MIN;
	int64_t x260 = -14625377LL;
	volatile int32_t t59 = 1231174;

	t59 = (x257&(x258==(x259-x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = -1;
	int64_t x266 = INT64_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t60 = 782144;

	t60 = (x265&(x266==(x267-x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x269 = INT64_MIN;
	uint8_t x270 = 68U;
	static int32_t x271 = INT32_MAX;
	static volatile int64_t t61 = -8130LL;

	t61 = (x269&(x270==(x271-x272)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x277 = UINT8_MAX;
	static int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MIN;
	volatile int32_t x280 = -14361305;
	volatile int32_t t62 = -46;

	t62 = (x277&(x278==(x279-x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -1;
	static uint16_t x282 = 3U;
	uint32_t x283 = 27651929U;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t63 = 148247;

	t63 = (x281&(x282==(x283-x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;

	t64 = (x285&(x286==(x287-x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -17998969670606LL;
	static int64_t x290 = -17593820643820583LL;
	volatile int8_t x291 = INT8_MIN;
	int64_t t65 = 14489LL;

	t65 = (x289&(x290==(x291-x292)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x293 = 7044196057LLU;
	uint64_t x294 = 3632416LLU;
	int64_t x295 = -2LL;
	volatile int16_t x296 = -1;
	volatile uint64_t t66 = 32467799337LLU;

	t66 = (x293&(x294==(x295-x296)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = 57470396155LLU;
	int32_t x300 = INT32_MIN;
	volatile int32_t t67 = -8819214;

	t67 = (x297&(x298==(x299-x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	static int64_t t68 = 421403955LL;

	t68 = (x301&(x302==(x303-x304)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x305 = 108734456181LL;
	int8_t x306 = INT8_MAX;
	int8_t x307 = -1;
	int16_t x308 = 1;

	t69 = (x305&(x306==(x307-x308)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x311 = -22207670949825LL;
	static volatile int64_t x312 = -1LL;
	volatile int32_t t70 = 1;

	t70 = (x309&(x310==(x311-x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x318 = -1;
	volatile int8_t x319 = -1;
	volatile int16_t x320 = 38;

	t71 = (x317&(x318==(x319-x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 64U;
	volatile int16_t x322 = -1;
	int16_t x323 = -3;
	int64_t x324 = -5LL;
	volatile int32_t t72 = 197226;

	t72 = (x321&(x322==(x323-x324)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x325 = 385;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;

	t73 = (x325&(x326==(x327-x328)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int32_t t74 = 480;

	t74 = (x329&(x330==(x331-x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x333 = 359364U;
	int64_t x334 = -305028043301749525LL;
	uint64_t x335 = 4LLU;
	int16_t x336 = 67;

	t75 = (x333&(x334==(x335-x336)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 6U;
	static int16_t x339 = 7;
	static uint16_t x340 = 2U;
	static volatile int32_t t76 = 23654;

	t76 = (x337&(x338==(x339-x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = 10;
	volatile int32_t t77 = -1067;

	t77 = (x341&(x342==(x343-x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x345 = 0;
	uint64_t x346 = UINT64_MAX;
	static volatile uint16_t x347 = 35U;
	int16_t x348 = -1;

	t78 = (x345&(x346==(x347-x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x350 = -1LL;
	int64_t t79 = 4LL;

	t79 = (x349&(x350==(x351-x352)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	static int8_t x355 = 20;
	uint32_t x356 = 2325647U;
	int32_t t80 = -1468673;

	t80 = (x353&(x354==(x355-x356)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int16_t x358 = 54;
	int8_t x359 = INT8_MIN;
	static int16_t x360 = INT16_MAX;
	volatile uint32_t t81 = 1787048U;

	t81 = (x357&(x358==(x359-x360)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x361 = INT64_MAX;
	static int32_t x362 = INT32_MIN;
	uint32_t x363 = 1431423767U;
	volatile int8_t x364 = INT8_MIN;
	volatile int64_t t82 = 2082660LL;

	t82 = (x361&(x362==(x363-x364)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = UINT32_MAX;
	static int64_t x366 = -1LL;
	int32_t x367 = 28781262;
	int32_t x368 = -827;
	volatile uint32_t t83 = 168387U;

	t83 = (x365&(x366==(x367-x368)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 2U;
	int16_t x370 = INT16_MIN;
	static volatile int64_t x372 = INT64_MAX;

	t84 = (x369&(x370==(x371-x372)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x373 = -3294489LL;
	int64_t x374 = 1244682264LL;
	static int64_t x375 = -883325099LL;
	uint16_t x376 = 437U;

	t85 = (x373&(x374==(x375-x376)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x378 = INT16_MAX;
	volatile int32_t x379 = -10;
	volatile int16_t x380 = -2;
	static volatile int32_t t86 = -1;

	t86 = (x377&(x378==(x379-x380)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MAX;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -1LL;
	volatile int32_t t87 = 108685;

	t87 = (x381&(x382==(x383-x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = -82;
	uint16_t x386 = 1U;
	int8_t x388 = INT8_MIN;
	int32_t t88 = 94816;

	t88 = (x385&(x386==(x387-x388)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x389 = 5LLU;
	uint64_t x392 = 477LLU;
	volatile uint64_t t89 = 263414872001179LLU;

	t89 = (x389&(x390==(x391-x392)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = UINT32_MAX;

	t90 = (x393&(x394==(x395-x396)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x398 = INT64_MAX;
	int64_t x399 = 16513099078473LL;
	static uint32_t x400 = UINT32_MAX;
	int64_t t91 = -38520319241621820LL;

	t91 = (x397&(x398==(x399-x400)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = 1519979U;
	volatile uint8_t x402 = 0U;
	volatile uint32_t t92 = 53U;

	t92 = (x401&(x402==(x403-x404)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	uint64_t x406 = 28659745LLU;
	uint32_t x407 = UINT32_MAX;
	static uint64_t x408 = 53459018963150LLU;
	static volatile int32_t t93 = -175572970;

	t93 = (x405&(x406==(x407-x408)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = -1;
	int8_t x410 = INT8_MAX;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t94 = 1858;

	t94 = (x409&(x410==(x411-x412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = 2997;
	int16_t x418 = -387;
	static int16_t x419 = INT16_MIN;
	int32_t t95 = 0;

	t95 = (x417&(x418==(x419-x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x421 = INT64_MIN;
	uint64_t x422 = 3286LLU;
	volatile uint32_t x424 = UINT32_MAX;
	int64_t t96 = 1267188617576980LL;

	t96 = (x421&(x422==(x423-x424)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -3460;
	uint64_t x426 = 75995142104775000LLU;
	volatile uint16_t x428 = UINT16_MAX;
	volatile int32_t t97 = -29;

	t97 = (x425&(x426==(x427-x428)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x429 = 0;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t98 = -383486362;

	t98 = (x429&(x430==(x431-x432)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x434 = INT64_MIN;
	volatile int8_t x436 = -37;

	t99 = (x433&(x434==(x435-x436)));

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

