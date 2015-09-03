#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 4627018U;
volatile int8_t x10 = 1;
volatile uint64_t t2 = 5LLU;
int64_t x24 = INT64_MIN;
int64_t t5 = 6711LL;
int64_t x25 = -1LL;
int64_t x26 = -1LL;
int32_t t7 = -13693675;
static uint32_t x33 = 9998U;
int16_t x35 = -1;
static int32_t x41 = INT32_MAX;
volatile uint64_t x44 = 23548637325986LLU;
uint16_t x46 = UINT16_MAX;
static int32_t x47 = -1;
uint32_t x59 = UINT32_MAX;
int64_t x72 = INT64_MIN;
volatile uint64_t x82 = 82552935777994LLU;
int16_t x88 = -1;
int32_t t22 = 29;
static int64_t x93 = -4453342251344LL;
int8_t x99 = INT8_MIN;
volatile uint64_t t25 = 193924236LLU;
volatile int8_t x113 = INT8_MIN;
int8_t x117 = INT8_MIN;
volatile int64_t x120 = 36587876010804LL;
int32_t x128 = -1;
int64_t x133 = INT64_MIN;
int32_t x135 = -1;
int8_t x142 = INT8_MIN;
int64_t x143 = INT64_MIN;
static volatile int32_t x148 = INT32_MIN;
uint32_t x149 = 0U;
uint64_t t38 = 45213LLU;
static uint32_t x158 = UINT32_MAX;
volatile int32_t t39 = 0;
uint16_t x163 = UINT16_MAX;
int8_t x164 = -1;
uint32_t x165 = UINT32_MAX;
volatile int16_t x167 = INT16_MIN;
uint64_t x175 = 231LLU;
static uint64_t x177 = 197295827762962LLU;
uint8_t x183 = 0U;
int8_t x186 = INT8_MAX;
static int8_t x188 = INT8_MIN;
volatile int64_t x195 = INT64_MIN;
uint8_t x206 = 8U;
int8_t x208 = INT8_MIN;
int32_t x215 = -1;
int8_t x218 = INT8_MIN;
uint64_t t54 = 102825160702226LLU;
static int16_t x223 = -9;
int64_t t55 = -1981175743LL;
int16_t x226 = INT16_MIN;
int32_t x235 = 2;
static uint32_t t60 = 11U;
uint64_t x247 = 1922354788LLU;
volatile int64_t x250 = INT64_MIN;
int32_t x251 = 201;
volatile uint16_t x253 = 736U;
volatile int16_t x255 = 1;
volatile int32_t t63 = 3256805;
int32_t x264 = INT32_MIN;
int64_t x265 = INT64_MAX;
volatile int32_t t66 = -215;
static int32_t x270 = -1;
volatile int64_t t67 = -11100LL;
uint8_t x275 = 100U;
int8_t x276 = INT8_MIN;
uint8_t x277 = 8U;
static int64_t x278 = INT64_MAX;
uint32_t x279 = 522166U;
uint8_t x282 = 10U;
int8_t x284 = INT8_MAX;
int64_t x288 = -1LL;
volatile int32_t t72 = -219819;
static int32_t x296 = INT32_MIN;
int64_t x301 = INT64_MIN;
int64_t x305 = INT64_MIN;
int8_t x307 = INT8_MIN;
int8_t x311 = -1;
int8_t x313 = INT8_MAX;
int32_t x315 = -1;
int64_t x322 = 8144LL;
int32_t t80 = 113;
int8_t x328 = INT8_MAX;
static uint32_t x342 = 34887670U;
static uint32_t x343 = UINT32_MAX;
int8_t x346 = INT8_MIN;
uint64_t t88 = 111539232604LLU;
int64_t x360 = INT64_MIN;
int8_t x367 = INT8_MAX;
int16_t x368 = -1;
volatile int16_t x373 = -1;
int32_t x378 = 237344;
int8_t x380 = -1;
uint32_t x383 = UINT32_MAX;
volatile uint32_t t95 = 6U;
volatile int8_t x385 = INT8_MIN;
volatile int8_t x386 = 1;
static volatile int32_t t98 = 4;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = 22560U;
	uint32_t x3 = 774U;
	int8_t x4 = INT8_MIN;
	static volatile uint32_t t0 = 327257808U;

	t0 = ((x1<=x2)%(x3|x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static int32_t x6 = -1;
	uint16_t x7 = 938U;
	int16_t x8 = -1;
	volatile int32_t t1 = -1658534;

	t1 = ((x5<=x6)%(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = UINT8_MAX;
	static uint64_t x12 = 273950270705477292LLU;

	t2 = ((x9<=x10)%(x11|x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x14 = 4064649906689LLU;
	static volatile int8_t x15 = 1;
	int64_t x16 = 43765386583509154LL;
	volatile int64_t t3 = 6LL;

	t3 = ((x13<=x14)%(x15|x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MAX;
	int32_t x18 = -16839;
	volatile int16_t x19 = INT16_MAX;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -37625523;

	t4 = ((x17<=x18)%(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int64_t x22 = -266250434226LL;
	int32_t x23 = INT32_MAX;

	t5 = ((x21<=x22)%(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 9U;
	int64_t x28 = -1LL;
	static volatile int64_t t6 = 132717459LL;

	t6 = ((x25<=x26)%(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 28U;
	int16_t x30 = -3121;
	int8_t x31 = -1;
	static int32_t x32 = -453;

	t7 = ((x29<=x30)%(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = UINT16_MAX;
	static int32_t x36 = -1;
	int32_t t8 = 1;

	t8 = ((x33<=x34)%(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = INT64_MAX;
	uint8_t x39 = 97U;
	int32_t x40 = 172528443;
	int32_t t9 = 22637067;

	t9 = ((x37<=x38)%(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x42 = UINT64_MAX;
	static volatile int32_t x43 = INT32_MIN;
	static volatile uint64_t t10 = 479386556028LLU;

	t10 = ((x41<=x42)%(x43|x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int64_t x48 = 1770604LL;
	static volatile int64_t t11 = -18LL;

	t11 = ((x45<=x46)%(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile uint8_t x50 = UINT8_MAX;
	static int64_t x51 = -1LL;
	volatile int16_t x52 = INT16_MIN;
	static volatile int64_t t12 = 33065567LL;

	t12 = ((x49<=x50)%(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = 119;
	static int8_t x55 = 15;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 0;

	t13 = ((x53<=x54)%(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	int16_t x58 = -1;
	int32_t x60 = INT32_MIN;
	uint32_t t14 = 247223669U;

	t14 = ((x57<=x58)%(x59|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 263007251LLU;
	static int8_t x62 = -1;
	uint64_t x63 = 3468196347484LLU;
	int16_t x64 = 1;
	volatile uint64_t t15 = 83LLU;

	t15 = ((x61<=x62)%(x63|x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = 8577;

	t16 = ((x65<=x66)%(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MAX;
	int32_t x70 = -151053;
	int64_t x71 = -1LL;
	volatile int64_t t17 = -4467633081972352604LL;

	t17 = ((x69<=x70)%(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	static uint16_t x75 = 31U;
	volatile uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 0LLU;

	t18 = ((x73<=x74)%(x75|x76));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MAX;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -24202;
	volatile int64_t t19 = -61675LL;

	t19 = ((x77<=x78)%(x79|x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 2604U;
	int64_t x83 = -876297LL;
	static int8_t x84 = INT8_MAX;
	volatile int64_t t20 = 739802775948410LL;

	t20 = ((x81<=x82)%(x83|x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x85 = INT16_MIN;
	int8_t x86 = -1;
	volatile int8_t x87 = INT8_MAX;
	volatile int32_t t21 = 53;

	t21 = ((x85<=x86)%(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -9;
	int16_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;

	t22 = ((x89<=x90)%(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x94 = UINT32_MAX;
	static volatile int64_t x95 = -1LL;
	static uint32_t x96 = 126U;
	static int64_t t23 = -1LL;

	t23 = ((x93<=x94)%(x95|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int8_t x98 = -1;
	int16_t x100 = -2;
	int32_t t24 = -53704;

	t24 = ((x97<=x98)%(x99|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = 1LL;
	uint64_t x103 = 862381746720LLU;
	int32_t x104 = INT32_MIN;

	t25 = ((x101<=x102)%(x103|x104));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	uint64_t x106 = UINT64_MAX;
	int32_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int64_t t26 = 62LL;

	t26 = ((x105<=x106)%(x107|x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile uint16_t x110 = 5277U;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MIN;
	int32_t t27 = 20125203;

	t27 = ((x109<=x110)%(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 21U;
	static volatile uint64_t t28 = 553LLU;

	t28 = ((x113<=x114)%(x115|x116));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	int64_t t29 = -123762813LL;

	t29 = ((x117<=x118)%(x119|x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	static volatile uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 788344U;

	t30 = ((x121<=x122)%(x123|x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x125 = 39361916U;
	int64_t x126 = -1LL;
	uint32_t x127 = 2U;
	uint32_t t31 = 0U;

	t31 = ((x125<=x126)%(x127|x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MAX;
	int16_t x132 = 2748;
	volatile int64_t t32 = -8178942614LL;

	t32 = ((x129<=x130)%(x131|x132));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x134 = 5U;
	uint8_t x136 = 0U;
	int32_t t33 = -1;

	t33 = ((x133<=x134)%(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int32_t x138 = -32660;
	int64_t x139 = -1LL;
	int32_t x140 = 57326;
	int64_t t34 = -55703858167628206LL;

	t34 = ((x137<=x138)%(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 259600049760762337LL;
	static volatile int32_t x144 = -1;
	volatile int64_t t35 = -67044007776LL;

	t35 = ((x141<=x142)%(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = 154LLU;
	uint64_t t36 = 5LLU;

	t36 = ((x145<=x146)%(x147|x148));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x150 = -707;
	int16_t x151 = INT16_MAX;
	static volatile uint8_t x152 = UINT8_MAX;
	static int32_t t37 = -64269194;

	t37 = ((x149<=x150)%(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = -5211833081LL;

	t38 = ((x153<=x154)%(x155|x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -1;
	uint8_t x159 = 3U;
	static uint8_t x160 = UINT8_MAX;

	t39 = ((x157<=x158)%(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static volatile int32_t t40 = 3957;

	t40 = ((x161<=x162)%(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = 19;
	volatile uint64_t x168 = 15557409087LLU;
	volatile uint64_t t41 = 28873276786719819LLU;

	t41 = ((x165<=x166)%(x167|x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 307;
	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = 794102U;
	volatile int8_t x172 = -30;
	uint32_t t42 = 11393U;

	t42 = ((x169<=x170)%(x171|x172));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int8_t x174 = -1;
	volatile int64_t x176 = INT64_MIN;
	uint64_t t43 = 7073654371LLU;

	t43 = ((x173<=x174)%(x175|x176));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = 1;

	t44 = ((x177<=x178)%(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static volatile int16_t x182 = -1;
	int64_t x184 = -341594705519806625LL;
	static volatile int64_t t45 = 517646656360LL;

	t45 = ((x181<=x182)%(x183|x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 1517271322246LLU;
	volatile int32_t x187 = INT32_MIN;
	int32_t t46 = -8515;

	t46 = ((x185<=x186)%(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 34;
	volatile int64_t x190 = 108462LL;
	int8_t x191 = -3;
	uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 5765236LLU;

	t47 = ((x189<=x190)%(x191|x192));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = 2U;
	static int8_t x196 = INT8_MAX;
	volatile int64_t t48 = -3648609LL;

	t48 = ((x193<=x194)%(x195|x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 995;
	uint8_t x198 = 23U;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 0U;
	static int32_t t49 = 1;

	t49 = ((x197<=x198)%(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = 71;

	t50 = ((x201<=x202)%(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 170339811406524LLU;
	int8_t x207 = INT8_MAX;
	static int32_t t51 = -1;

	t51 = ((x205<=x206)%(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int32_t x210 = -1;
	volatile int32_t x211 = INT32_MIN;
	int16_t x212 = -1;
	int32_t t52 = 3183;

	t52 = ((x209<=x210)%(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = 1815619965915LL;
	uint64_t x216 = 8702673428966LLU;
	uint64_t t53 = 557LLU;

	t53 = ((x213<=x214)%(x215|x216));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 11380230821828LLU;
	uint64_t x219 = 1677LLU;
	volatile int8_t x220 = INT8_MIN;

	t54 = ((x217<=x218)%(x219|x220));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -7LL;
	uint32_t x222 = 13512U;
	int64_t x224 = INT64_MAX;

	t55 = ((x221<=x222)%(x223|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static uint32_t x227 = 34295U;
	uint32_t x228 = 937723640U;
	uint32_t t56 = 1U;

	t56 = ((x225<=x226)%(x227|x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = 489;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	volatile uint32_t t57 = 86685U;

	t57 = ((x229<=x230)%(x231|x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	static uint8_t x234 = 3U;
	static int32_t x236 = -57;
	volatile int32_t t58 = 4;

	t58 = ((x233<=x234)%(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 4922U;
	int8_t x238 = INT8_MAX;
	static int64_t x239 = INT64_MAX;
	uint8_t x240 = UINT8_MAX;
	volatile int64_t t59 = 6015LL;

	t59 = ((x237<=x238)%(x239|x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 735009612LLU;
	int16_t x243 = INT16_MIN;
	volatile uint32_t x244 = 1096U;

	t60 = ((x241<=x242)%(x243|x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 1U;
	int8_t x246 = -1;
	static int64_t x248 = -3LL;
	uint64_t t61 = 13954LLU;

	t61 = ((x245<=x246)%(x247|x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int8_t x252 = INT8_MAX;
	volatile int32_t t62 = 741389;

	t62 = ((x249<=x250)%(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x254 = 8999589649LLU;
	int32_t x256 = 2;

	t63 = ((x253<=x254)%(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 3U;
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 3945;

	t64 = ((x257<=x258)%(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint16_t x262 = 887U;
	int8_t x263 = INT8_MIN;
	volatile int32_t t65 = -25155063;

	t65 = ((x261<=x262)%(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x266 = 0U;
	uint16_t x267 = UINT16_MAX;
	static volatile int8_t x268 = INT8_MAX;

	t66 = ((x265<=x266)%(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x271 = -1LL;
	int32_t x272 = -12820;

	t67 = ((x269<=x270)%(x271|x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 3204U;
	uint16_t x274 = UINT16_MAX;
	volatile int32_t t68 = 17;

	t68 = ((x273<=x274)%(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x280 = INT32_MIN;
	static volatile uint32_t t69 = 167913156U;

	t69 = ((x277<=x278)%(x279|x280));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = -4413585895LL;
	volatile int32_t x283 = INT32_MAX;
	int32_t t70 = 54;

	t70 = ((x281<=x282)%(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	uint16_t x286 = 2698U;
	static int64_t x287 = INT64_MIN;
	static volatile int64_t t71 = -6025067410LL;

	t71 = ((x285<=x286)%(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = 1U;
	static volatile int32_t x292 = 15615914;

	t72 = ((x289<=x290)%(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	int32_t x294 = -2069704;
	int64_t x295 = INT64_MIN;
	volatile int64_t t73 = 1210551151060464216LL;

	t73 = ((x293<=x294)%(x295|x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	uint64_t x298 = 1907LLU;
	int8_t x299 = INT8_MAX;
	int32_t x300 = 393938202;
	volatile int32_t t74 = -1063;

	t74 = ((x297<=x298)%(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x302 = -1;
	uint32_t x303 = 812216474U;
	uint16_t x304 = 29853U;
	volatile uint32_t t75 = 962U;

	t75 = ((x301<=x302)%(x303|x304));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = 5873U;
	int8_t x308 = -1;
	volatile int32_t t76 = 59;

	t76 = ((x305<=x306)%(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 23U;
	uint8_t x310 = UINT8_MAX;
	int64_t x312 = INT64_MAX;
	volatile int64_t t77 = 3526438LL;

	t77 = ((x309<=x310)%(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = INT32_MIN;
	uint64_t x316 = 53856481LLU;
	volatile uint64_t t78 = 63477LLU;

	t78 = ((x313<=x314)%(x315|x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 0;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 75U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = -119438284055678LL;

	t79 = ((x317<=x318)%(x319|x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MAX;
	static volatile uint16_t x323 = UINT16_MAX;
	static uint16_t x324 = UINT16_MAX;

	t80 = ((x321<=x322)%(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MAX;
	int8_t x326 = 1;
	static int8_t x327 = -1;
	volatile int32_t t81 = -194;

	t81 = ((x325<=x326)%(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 68U;
	volatile int32_t x330 = INT32_MAX;
	volatile int64_t x331 = INT64_MIN;
	int8_t x332 = 3;
	int64_t t82 = 136513LL;

	t82 = ((x329<=x330)%(x331|x332));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	static uint8_t x334 = UINT8_MAX;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	volatile int64_t t83 = -1205168246091LL;

	t83 = ((x333<=x334)%(x335|x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 62U;
	static int32_t x338 = INT32_MAX;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = -1LL;
	static int64_t t84 = 398276796LL;

	t84 = ((x337<=x338)%(x339|x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	static uint64_t x344 = 921709226LLU;
	volatile uint64_t t85 = 60678LLU;

	t85 = ((x341<=x342)%(x343|x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int8_t x347 = -1;
	volatile int8_t x348 = 0;
	volatile int32_t t86 = 5740;

	t86 = ((x345<=x346)%(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 263U;
	uint32_t x350 = 1256831810U;
	int8_t x351 = -3;
	volatile uint8_t x352 = 0U;
	volatile int32_t t87 = 6533343;

	t87 = ((x349<=x350)%(x351|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MAX;
	static uint64_t x356 = 287957564LLU;

	t88 = ((x353<=x354)%(x355|x356));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 13U;
	uint16_t x358 = UINT16_MAX;
	static int16_t x359 = INT16_MIN;
	int64_t t89 = -101419180366564LL;

	t89 = ((x357<=x358)%(x359|x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -951353399055598LL;
	static uint16_t x362 = 7754U;
	int32_t x363 = -1;
	uint16_t x364 = 24168U;
	volatile int32_t t90 = 356;

	t90 = ((x361<=x362)%(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static int64_t x366 = INT64_MIN;
	int32_t t91 = 499;

	t91 = ((x365<=x366)%(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -3340;
	volatile uint8_t x370 = 3U;
	static int64_t x371 = -1LL;
	int16_t x372 = -8048;
	int64_t t92 = -66LL;

	t92 = ((x369<=x370)%(x371|x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x374 = UINT16_MAX;
	volatile int8_t x375 = -3;
	uint32_t x376 = 21930639U;
	volatile uint32_t t93 = 2U;

	t93 = ((x373<=x374)%(x375|x376));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -97LL;
	volatile uint8_t x379 = UINT8_MAX;
	volatile int32_t t94 = 4558942;

	t94 = ((x377<=x378)%(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 85U;
	uint8_t x382 = UINT8_MAX;
	static int8_t x384 = INT8_MAX;

	t95 = ((x381<=x382)%(x383|x384));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x387 = 47U;
	static uint32_t x388 = 228783096U;
	uint32_t t96 = 6724071U;

	t96 = ((x385<=x386)%(x387|x388));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x389 = UINT64_MAX;
	int64_t x390 = INT64_MIN;
	int16_t x391 = -6;
	uint16_t x392 = UINT16_MAX;
	int32_t t97 = -49;

	t97 = ((x389<=x390)%(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	volatile uint8_t x394 = 10U;
	static int16_t x395 = -1;
	int8_t x396 = INT8_MIN;

	t98 = ((x393<=x394)%(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -3104;
	int8_t x399 = INT8_MIN;
	volatile int32_t x400 = -1;
	volatile int32_t t99 = 1371119;

	t99 = ((x397<=x398)%(x399|x400));

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

