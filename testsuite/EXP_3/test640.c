#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
int64_t x13 = 3808434430884687LL;
static int32_t x28 = INT32_MIN;
int16_t x31 = -353;
int64_t t6 = 10275811122034630LL;
uint64_t t7 = 1215691258LLU;
volatile int32_t x42 = INT32_MIN;
uint8_t x44 = UINT8_MAX;
int64_t t8 = -64796LL;
uint16_t x45 = 831U;
uint32_t x49 = 5U;
int32_t x52 = -1;
uint64_t t10 = 65845233LLU;
uint64_t x59 = 7142269LLU;
uint64_t t11 = 2090996326552126LLU;
uint16_t x61 = 42U;
static uint16_t x66 = 91U;
volatile int32_t x71 = INT32_MIN;
int8_t x74 = -1;
int32_t x83 = -1715838;
static int64_t x84 = INT64_MIN;
uint32_t x91 = 10112190U;
static int32_t x92 = -1;
volatile int64_t x93 = INT64_MIN;
static int32_t x97 = -82087;
static uint16_t x99 = 2412U;
uint32_t t21 = 463187U;
static int32_t x104 = -1;
uint64_t t22 = 10982632941897LLU;
int8_t x107 = INT8_MAX;
int64_t x110 = -1LL;
volatile int32_t x113 = INT32_MIN;
int8_t x123 = INT8_MIN;
int32_t x130 = -1;
volatile int8_t x132 = INT8_MIN;
int64_t x133 = INT64_MIN;
volatile uint64_t t30 = 0LLU;
uint64_t x142 = UINT64_MAX;
static uint64_t t33 = UINT64_MAX;
int16_t x156 = -6353;
int64_t x161 = -288003LL;
int64_t x162 = -391LL;
static uint16_t x165 = 0U;
static uint16_t x169 = 1718U;
uint8_t x171 = UINT8_MAX;
static int16_t x172 = INT16_MAX;
volatile int32_t x181 = -1;
int32_t x190 = INT32_MAX;
static volatile uint16_t x192 = 169U;
volatile int64_t t44 = 57670LL;
volatile int32_t x197 = INT32_MIN;
int8_t x199 = INT8_MIN;
int64_t x200 = INT64_MAX;
static int32_t x211 = INT32_MIN;
int64_t x214 = 473354663LL;
volatile uint64_t x221 = UINT64_MAX;
uint64_t t51 = 500828935LLU;
int8_t x226 = INT8_MIN;
uint64_t t52 = 27530785167507LLU;
static int16_t x230 = INT16_MIN;
int16_t x234 = -10777;
uint64_t x236 = 162949940548334494LLU;
int32_t x238 = INT32_MAX;
int16_t x243 = -4;
int32_t x244 = INT32_MAX;
static volatile uint64_t t57 = 7211048992961191LLU;
static uint64_t x249 = 851373896LLU;
static uint64_t x252 = UINT64_MAX;
volatile int32_t x253 = INT32_MIN;
int64_t x258 = -1LL;
int8_t x259 = -1;
volatile int32_t x260 = INT32_MAX;
uint16_t x266 = 690U;
int16_t x279 = INT16_MIN;
volatile uint32_t t64 = 19U;
static uint64_t x285 = UINT64_MAX;
static int32_t x287 = -1;
volatile uint64_t t66 = UINT64_MAX;
int64_t t68 = 23301420476LL;
volatile uint32_t x297 = 1650U;
static int32_t t70 = -9031;
int32_t x310 = INT32_MAX;
static int32_t x323 = INT32_MIN;
int32_t x324 = 349;
int32_t x326 = -30800568;
volatile uint32_t x334 = 0U;
uint32_t x339 = 1137040130U;
static int16_t x341 = INT16_MIN;
int64_t x346 = -1LL;
int64_t x348 = INT64_MIN;
static int32_t x349 = -1;
static int64_t x361 = -1LL;
int8_t x362 = INT8_MAX;
uint8_t x369 = UINT8_MAX;
int32_t x373 = INT32_MAX;
volatile uint32_t t86 = 2758998U;
volatile uint8_t x379 = 1U;
volatile int64_t t88 = 1573207251321085LL;
int16_t x388 = INT16_MIN;
volatile uint32_t t89 = 1258754U;
int16_t x389 = INT16_MIN;
int8_t x391 = 0;
int16_t x395 = 1;
int16_t x397 = INT16_MIN;
int8_t x398 = INT8_MIN;
volatile int16_t x401 = -1;
int16_t x412 = -1;
int16_t x414 = INT16_MIN;
volatile int64_t x422 = -499458LL;


void f0(void) {
	volatile int32_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int16_t x3 = 7025;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -60;

	t0 = ((x1&x2)*(x3/x4));

	if (t0 != 6912) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MAX;
	static volatile int64_t t1 = -38088246LL;

	t1 = ((x5&x6)*(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	static volatile int8_t x15 = 19;
	int8_t x16 = INT8_MIN;
	int64_t t2 = -4LL;

	t2 = ((x13&x14)*(x15/x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = -1LL;
	static int16_t x19 = INT16_MIN;
	volatile int8_t x20 = 3;
	volatile int64_t t3 = 1LL;

	t3 = ((x17&x18)*(x19/x20));

	if (t3 != -2785110LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2291427268421492LLU;
	static int64_t x22 = 6LL;
	int16_t x23 = 2;
	int64_t x24 = -28619541917LL;
	volatile uint64_t t4 = 35045888001589LLU;

	t4 = ((x21&x22)*(x23/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 8084;
	volatile int16_t x26 = INT16_MIN;
	static int64_t x27 = 0LL;
	volatile int64_t t5 = 862202114883365787LL;

	t5 = ((x25&x26)*(x27/x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 16083913;
	volatile int64_t x30 = -584933072367989LL;
	int16_t x32 = INT16_MAX;

	t6 = ((x29&x30)*(x31/x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 274104104770LLU;
	volatile int32_t x36 = 243766785;

	t7 = ((x33&x34)*(x35/x36));

	if (t7 != 286620LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = INT32_MAX;
	int64_t x43 = INT64_MAX;

	t8 = ((x41&x42)*(x43/x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x46 = INT64_MIN;
	static int16_t x47 = -2150;
	static int8_t x48 = -1;
	int64_t t9 = -9543252925604LL;

	t9 = ((x45&x46)*(x47/x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = 562604728;
	uint64_t x51 = UINT64_MAX;

	t10 = ((x49&x50)*(x51/x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 9U;
	static int8_t x58 = INT8_MAX;
	int16_t x60 = INT16_MIN;

	t11 = ((x57&x58)*(x59/x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x62 = UINT16_MAX;
	static int16_t x63 = INT16_MAX;
	int32_t x64 = 1;
	volatile int32_t t12 = 51180;

	t12 = ((x61&x62)*(x63/x64));

	if (t12 != 1376214) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = 3422;
	uint32_t x67 = 2161227U;
	int8_t x68 = -7;
	static uint32_t t13 = 174U;

	t13 = ((x65&x66)*(x67/x68));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MAX;
	uint16_t x70 = 1958U;
	uint64_t x72 = UINT64_MAX;
	uint64_t t14 = 369179LLU;

	t14 = ((x69&x70)*(x71/x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x75 = 0U;
	uint32_t x76 = 7981278U;
	static uint32_t t15 = 4273052U;

	t15 = ((x73&x74)*(x75/x76));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 188335147U;
	int16_t x78 = INT16_MAX;
	volatile int16_t x79 = INT16_MIN;
	static int32_t x80 = -426220413;
	uint32_t t16 = 982272U;

	t16 = ((x77&x78)*(x79/x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 4U;
	uint16_t x82 = 7U;
	int64_t t17 = -14504924018984LL;

	t17 = ((x81&x82)*(x83/x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = UINT8_MAX;
	uint64_t x86 = 25LLU;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -226;
	uint64_t t18 = 635849485LLU;

	t18 = ((x85&x86)*(x87/x88));

	if (t18 != 237553500LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = 50;
	static volatile int8_t x90 = INT8_MAX;
	volatile uint32_t t19 = 3438372U;

	t19 = ((x89&x90)*(x91/x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = -1;
	int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t20 = 0LL;

	t20 = ((x93&x94)*(x95/x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x98 = INT8_MIN;
	uint32_t x100 = 3U;

	t21 = ((x97&x98)*(x99/x100));

	if (t21 != 4228897792U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x101 = INT32_MAX;
	volatile uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 192LLU;

	t22 = ((x101&x102)*(x103/x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 16754925633LL;
	int16_t x106 = 7;
	int64_t x108 = -302474611783668796LL;
	static int64_t t23 = 11LL;

	t23 = ((x105&x106)*(x107/x108));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	volatile int64_t t24 = -36995760LL;

	t24 = ((x109&x110)*(x111/x112));

	if (t24 != 9151314442816847872LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = INT8_MIN;
	static volatile int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t25 = 80;

	t25 = ((x113&x114)*(x115/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 16353LLU;
	static uint16_t x118 = 1821U;
	uint64_t x119 = 10132319385367605LLU;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t26 = 51292682LLU;

	t26 = ((x117&x118)*(x119/x120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = -1;
	static uint8_t x122 = UINT8_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t27 = 2920;

	t27 = ((x121&x122)*(x123/x124));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	volatile int32_t x126 = INT32_MAX;
	uint8_t x127 = 4U;
	volatile int64_t x128 = INT64_MIN;
	volatile int64_t t28 = 3604231614708544LL;

	t28 = ((x125&x126)*(x127/x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -2LL;
	int32_t x131 = -1;
	int64_t t29 = 70029844078LL;

	t29 = ((x129&x130)*(x131/x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x134 = UINT64_MAX;
	uint32_t x135 = 5U;
	uint8_t x136 = 53U;

	t30 = ((x133&x134)*(x135/x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = INT8_MIN;
	uint8_t x139 = 1U;
	int64_t x140 = -64166429328LL;
	volatile int64_t t31 = -1370140075373LL;

	t31 = ((x137&x138)*(x139/x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 30U;
	int8_t x143 = INT8_MAX;
	int8_t x144 = 15;
	volatile uint64_t t32 = 2LLU;

	t32 = ((x141&x142)*(x143/x144));

	if (t32 != 240LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = -1;
	volatile int16_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	volatile int8_t x148 = INT8_MIN;

	t33 = ((x145&x146)*(x147/x148));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int8_t x150 = 3;
	int16_t x151 = 639;
	int32_t x152 = INT32_MIN;
	static int32_t t34 = 23321628;

	t34 = ((x149&x150)*(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 48U;
	uint32_t x154 = 4U;
	uint16_t x155 = UINT16_MAX;
	uint32_t t35 = 522900U;

	t35 = ((x153&x154)*(x155/x156));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = -1LL;
	int64_t x159 = 112163226152135972LL;
	volatile int32_t x160 = INT32_MAX;
	int64_t t36 = 126802462764835LL;

	t36 = ((x157&x158)*(x159/x160));

	if (t36 != -1711474999296LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x163 = 1;
	uint16_t x164 = 359U;
	volatile int64_t t37 = -2LL;

	t37 = ((x161&x162)*(x163/x164));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x166 = UINT64_MAX;
	uint32_t x167 = UINT32_MAX;
	volatile uint16_t x168 = 11U;
	uint64_t t38 = 190938LLU;

	t38 = ((x165&x166)*(x167/x168));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x170 = 111U;
	int32_t t39 = -222042;

	t39 = ((x169&x170)*(x171/x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	volatile int16_t x176 = -35;
	volatile uint32_t t40 = 3648U;

	t40 = ((x173&x174)*(x175/x176));

	if (t40 != 4264296448U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	int64_t x179 = -484886138LL;
	int32_t x180 = -1;
	volatile int64_t t41 = -7548407106180LL;

	t41 = ((x177&x178)*(x179/x180));

	if (t41 != -1041285052496871424LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x182 = INT32_MIN;
	volatile int8_t x183 = INT8_MIN;
	static int16_t x184 = INT16_MAX;
	volatile int32_t t42 = -1003587;

	t42 = ((x181&x182)*(x183/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	static uint8_t x187 = 49U;
	volatile int32_t x188 = INT32_MAX;
	volatile uint64_t t43 = 41LLU;

	t43 = ((x185&x186)*(x187/x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = 106423945227844LL;
	int8_t x191 = 1;

	t44 = ((x189&x190)*(x191/x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = -1;
	volatile uint8_t x194 = UINT8_MAX;
	static int32_t x195 = INT32_MIN;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t45 = -209751758;

	t45 = ((x193&x194)*(x195/x196));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = -1;
	static int64_t t46 = -87LL;

	t46 = ((x197&x198)*(x199/x200));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = -255526046;
	volatile uint16_t x206 = 55U;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t47 = -464711532;

	t47 = ((x205&x206)*(x207/x208));

	if (t47 != 34) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	volatile uint8_t x210 = UINT8_MAX;
	static volatile int16_t x212 = INT16_MIN;
	static int32_t t48 = 4;

	t48 = ((x209&x210)*(x211/x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x213 = 207618;
	int16_t x215 = -1;
	static volatile uint32_t x216 = 8145U;
	int64_t t49 = 5263350880245769LL;

	t49 = ((x213&x214)*(x215/x216));

	if (t49 != 69252016290LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = 18;
	int16_t x218 = -1;
	int8_t x219 = -17;
	int8_t x220 = -13;
	volatile int32_t t50 = -2;

	t50 = ((x217&x218)*(x219/x220));

	if (t50 != 18) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x222 = -1LL;
	uint16_t x223 = 486U;
	int64_t x224 = INT64_MIN;

	t51 = ((x221&x222)*(x223/x224));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = UINT32_MAX;

	t52 = ((x225&x226)*(x227/x228));

	if (t52 != 274877906944LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 19U;
	static uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 1U;
	static volatile uint32_t t53 = 84595584U;

	t53 = ((x229&x230)*(x231/x232));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = 56;
	static int16_t x235 = INT16_MIN;
	uint64_t t54 = 1534LLU;

	t54 = ((x233&x234)*(x235/x236));

	if (t54 != 3616LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x237 = 5U;
	static int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t55 = -513740099LL;

	t55 = ((x237&x238)*(x239/x240));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;
	int32_t t56 = 132358893;

	t56 = ((x241&x242)*(x243/x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 99686LLU;
	static int16_t x248 = -1;

	t57 = ((x245&x246)*(x247/x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x250 = INT64_MIN;
	int64_t x251 = 1116252998964003LL;
	volatile uint64_t t58 = 543000495820LLU;

	t58 = ((x249&x250)*(x251/x252));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x254 = INT8_MAX;
	volatile uint8_t x255 = 102U;
	uint16_t x256 = UINT16_MAX;
	int32_t t59 = -2;

	t59 = ((x253&x254)*(x255/x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MAX;
	static volatile int64_t t60 = -7LL;

	t60 = ((x257&x258)*(x259/x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	static int64_t x267 = -141908599521183LL;
	uint8_t x268 = UINT8_MAX;
	int64_t t61 = -480LL;

	t61 = ((x265&x266)*(x267/x268));

	if (t61 != -383987975174430LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x269 = -1;
	volatile int16_t x270 = INT16_MIN;
	uint16_t x271 = 10316U;
	int32_t x272 = INT32_MAX;
	volatile int32_t t62 = -205678;

	t62 = ((x269&x270)*(x271/x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x273 = INT32_MAX;
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = 79U;
	volatile uint32_t t63 = 105977U;

	t63 = ((x273&x274)*(x275/x276));

	if (t63 != 2093117389U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = INT8_MIN;
	uint32_t x280 = 94576U;

	t64 = ((x277&x278)*(x279/x280));

	if (t64 != 2806906880U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = INT8_MIN;
	uint64_t x282 = 15LLU;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 26502U;
	volatile uint64_t t65 = 1302949660832521282LLU;

	t65 = ((x281&x282)*(x283/x284));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x286 = -1;
	int8_t x288 = -1;

	t66 = ((x285&x286)*(x287/x288));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = 456892719;
	int16_t x290 = -34;
	int16_t x291 = -42;
	uint64_t x292 = 1469099060028596842LLU;
	uint64_t t67 = 1198300019321LLU;

	t67 = ((x289&x290)*(x291/x292));

	if (t67 != 5482712232LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = UINT32_MAX;
	static int32_t x294 = -8;
	int64_t x295 = -1LL;
	volatile int32_t x296 = 440251;

	t68 = ((x293&x294)*(x295/x296));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x298 = 2617070U;
	volatile int32_t x299 = 385;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t69 = 414953182322698LLU;

	t69 = ((x297&x298)*(x299/x300));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x301 = INT16_MAX;
	volatile int32_t x302 = INT32_MAX;
	int32_t x303 = -1;
	volatile int32_t x304 = -42846743;

	t70 = ((x301&x302)*(x303/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1060838425;
	int32_t x306 = 13;
	int32_t x307 = INT32_MAX;
	int64_t x308 = 3070170656951LL;
	volatile int64_t t71 = 48480258686795LL;

	t71 = ((x305&x306)*(x307/x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x309 = 122023619101LLU;
	uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MAX;
	volatile uint64_t t72 = 1126614002980415544LLU;

	t72 = ((x309&x310)*(x311/x312));

	if (t72 != 3529069626LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x321 = 0U;
	uint8_t x322 = 123U;
	uint32_t t73 = 86929431U;

	t73 = ((x321&x322)*(x323/x324));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x325 = -1;
	static int64_t x327 = 2538572LL;
	volatile uint16_t x328 = UINT16_MAX;
	static int64_t t74 = -543302756058LL;

	t74 = ((x325&x326)*(x327/x328));

	if (t74 != -1170421584LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x329 = -1;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	volatile int64_t t75 = 50786610731906504LL;

	t75 = ((x329&x330)*(x331/x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 18007281456120547LL;
	int32_t x335 = -12659;
	static int64_t x336 = 7209916516414LL;
	volatile int64_t t76 = -2810406122598LL;

	t76 = ((x333&x334)*(x335/x336));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = 49;
	uint32_t x340 = 7228U;
	volatile uint32_t t77 = 309U;

	t77 = ((x337&x338)*(x339/x340));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = -1;
	int8_t x343 = -1;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t78 = -34454204;

	t78 = ((x341&x342)*(x343/x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MAX;
	int8_t x347 = INT8_MAX;
	volatile int64_t t79 = -297939960524151LL;

	t79 = ((x345&x346)*(x347/x348));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x350 = 179339236102836933LLU;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = 956;
	uint64_t t80 = 847604150LLU;

	t80 = ((x349&x350)*(x351/x352));

	if (t80 != 4951643982135568331LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 8090913418100LLU;
	static int32_t x355 = INT32_MAX;
	uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t81 = 1609429330LLU;

	t81 = ((x353&x354)*(x355/x356));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	int8_t x359 = 0;
	int64_t x360 = 917827810463398LL;
	volatile int64_t t82 = 1761631LL;

	t82 = ((x357&x358)*(x359/x360));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MIN;
	int64_t t83 = 46128798968LL;

	t83 = ((x361&x362)*(x363/x364));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x365 = INT64_MIN;
	volatile int32_t x366 = -1;
	static uint32_t x367 = 0U;
	volatile int16_t x368 = INT16_MIN;
	int64_t t84 = 129086LL;

	t84 = ((x365&x366)*(x367/x368));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x370 = INT64_MAX;
	static int32_t x371 = INT32_MAX;
	static uint64_t x372 = 72LLU;
	volatile uint64_t t85 = 4070151LLU;

	t85 = ((x369&x370)*(x371/x372));

	if (t85 != 7605671055LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x374 = INT16_MIN;
	int32_t x375 = 72214490;
	uint32_t x376 = 611U;

	t86 = ((x373&x374)*(x375/x376));

	if (t86 != 422117376U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = 1;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 43;

	t87 = ((x377&x378)*(x379/x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = 1;
	int64_t x382 = INT64_MAX;
	int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;

	t88 = ((x381&x382)*(x383/x384));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x385 = -11646157;
	int16_t x386 = -1;
	uint32_t x387 = 225350U;

	t89 = ((x385&x386)*(x387/x388));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x390 = INT64_MIN;
	int64_t x392 = -1LL;
	int64_t t90 = -56093010301LL;

	t90 = ((x389&x390)*(x391/x392));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x393 = UINT8_MAX;
	static uint32_t x394 = 37U;
	int64_t x396 = -21717LL;
	int64_t t91 = -293842LL;

	t91 = ((x393&x394)*(x395/x396));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = ((x397&x398)*(x399/x400));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	static volatile uint64_t x404 = UINT64_MAX;
	uint64_t t93 = 4358276487268460081LLU;

	t93 = ((x401&x402)*(x403/x404));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = 3;
	int64_t x406 = INT64_MIN;
	static uint64_t x407 = 40303818980249LLU;
	uint32_t x408 = 6U;
	uint64_t t94 = 1047371376944535266LLU;

	t94 = ((x405&x406)*(x407/x408));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x409 = -1;
	uint8_t x410 = 2U;
	volatile int16_t x411 = 5;
	volatile int32_t t95 = 111;

	t95 = ((x409&x410)*(x411/x412));

	if (t95 != -10) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MIN;
	volatile int64_t x415 = INT64_MAX;
	volatile int32_t x416 = INT32_MIN;
	volatile int64_t t96 = 193359341433LL;

	t96 = ((x413&x414)*(x415/x416));

	if (t96 != 140737488322560LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x417 = 145U;
	uint16_t x418 = 31321U;
	static uint64_t x419 = 3762987950415950208LLU;
	static int8_t x420 = INT8_MAX;
	volatile uint64_t t97 = 341142361LLU;

	t97 = ((x417&x418)*(x419/x420));

	if (t97 != 503707048480875218LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x421 = 23356192403LLU;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MAX;
	volatile uint64_t t98 = 1LLU;

	t98 = ((x421&x422)*(x423/x424));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -33055692970468339LL;
	int16_t x426 = 164;
	int32_t x427 = INT32_MIN;
	int32_t x428 = 254803652;
	volatile int64_t t99 = -4002044661635086LL;

	t99 = ((x425&x426)*(x427/x428));

	if (t99 != -32LL) { NG(); } else { ; }
	
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

