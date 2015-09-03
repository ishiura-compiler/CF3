#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
uint8_t x13 = 26U;
int8_t x19 = -1;
int64_t x21 = -5230617LL;
uint32_t x23 = UINT32_MAX;
int32_t x25 = 12;
uint16_t x27 = 11U;
volatile int32_t t6 = -436699911;
static volatile uint8_t x29 = 50U;
volatile uint16_t x32 = 11U;
int32_t x34 = INT32_MIN;
int64_t x40 = -29LL;
uint64_t x41 = 60216LLU;
int64_t x47 = 65652482532645LL;
int16_t x57 = INT16_MIN;
int16_t x61 = INT16_MIN;
volatile uint64_t t15 = 52990706880LLU;
static volatile int32_t x65 = 0;
volatile uint8_t x72 = UINT8_MAX;
int64_t t17 = -921662076LL;
int16_t x75 = -1;
volatile int32_t t18 = -12;
static volatile int64_t x78 = -1LL;
static int32_t x81 = INT32_MAX;
static int16_t x87 = -4242;
int16_t x90 = -1;
volatile uint64_t t24 = 8359LLU;
int8_t x103 = 57;
static int16_t x108 = -1;
int16_t x114 = -1;
static volatile int64_t t28 = 493734696097846322LL;
uint16_t x125 = 38U;
int64_t x130 = -1LL;
uint16_t x131 = 20311U;
int8_t x133 = -1;
uint32_t t33 = 3U;
uint8_t x137 = 41U;
int64_t x139 = INT64_MAX;
int64_t x143 = -1LL;
uint8_t x147 = 5U;
volatile int64_t x148 = -1LL;
static volatile uint32_t t38 = 20U;
int32_t x162 = -1;
int32_t x164 = INT32_MAX;
uint8_t x169 = UINT8_MAX;
int64_t t42 = 0LL;
volatile uint64_t x176 = 3941LLU;
volatile int32_t x178 = INT32_MAX;
static int32_t x182 = -86867069;
volatile int64_t x194 = -1LL;
int64_t x196 = 0LL;
volatile int64_t t48 = 318077128411643LL;
volatile int8_t x205 = 16;
volatile int32_t x206 = -1;
int64_t x209 = 3476333731212671933LL;
static int64_t x223 = INT64_MAX;
int8_t x230 = -16;
volatile int8_t x232 = INT8_MIN;
static volatile uint32_t t57 = 86U;
int16_t x234 = INT16_MIN;
int8_t x242 = INT8_MAX;
uint16_t x248 = 20U;
int8_t x251 = INT8_MAX;
static volatile int32_t x252 = -46;
int64_t t64 = -3403394LL;
uint64_t t65 = 20766438LLU;
static int8_t x266 = INT8_MIN;
int64_t x275 = INT64_MIN;
int16_t x279 = INT16_MIN;
int32_t x281 = INT32_MIN;
int64_t x285 = -1LL;
volatile int64_t t71 = -1LL;
int32_t x289 = INT32_MIN;
volatile uint32_t t73 = 13U;
uint16_t x298 = 11U;
static int64_t x303 = INT64_MAX;
int64_t x305 = INT64_MIN;
static volatile int64_t t77 = -42598208642233892LL;
static uint8_t x313 = UINT8_MAX;
int8_t x318 = -1;
static int32_t x319 = INT32_MIN;
volatile uint64_t t79 = 6090049800LLU;
uint64_t t80 = 17LLU;
uint8_t x332 = 0U;
int8_t x339 = 1;
int16_t x344 = -102;
int32_t x347 = -1;
uint64_t x353 = UINT64_MAX;
static volatile uint8_t x355 = 30U;
int16_t x356 = INT16_MIN;
volatile uint64_t t89 = 22360753540918LLU;
int8_t x366 = -1;
uint16_t x367 = 52U;
volatile int16_t x369 = 1;
int64_t x372 = 1045317553976712LL;
static int16_t x379 = 4;
int16_t x382 = -1;
int16_t x383 = INT16_MAX;
static uint64_t t95 = 257817454298LLU;
volatile int8_t x385 = INT8_MAX;
volatile uint8_t x386 = 12U;
static uint64_t x389 = 84LLU;
int64_t x397 = -1130346488LL;
uint32_t x398 = 6858322U;
uint16_t x399 = UINT16_MAX;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile int8_t x2 = -1;
	volatile int64_t x4 = -1LL;
	static int64_t t0 = 2582914248228642LL;

	t0 = ((x1&x2)&(x3|x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -5;
	int16_t x6 = 945;
	static uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	static uint32_t t1 = 1130128309U;

	t1 = ((x5&x6)&(x7|x8));

	if (t1 != 945U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	int32_t x10 = INT32_MIN;
	volatile int32_t x11 = -11;
	volatile int64_t x12 = -1LL;
	int64_t t2 = -687114380LL;

	t2 = ((x9&x10)&(x11|x12));

	if (t2 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 6792U;
	static int64_t x15 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	int64_t t3 = -967881LL;

	t3 = ((x13&x14)&(x15|x16));

	if (t3 != 8LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int32_t x18 = 32744;
	int64_t x20 = -3412904LL;
	static volatile int64_t t4 = 667732452281293LL;

	t4 = ((x17&x18)&(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = 26572LL;

	t5 = ((x21&x22)&(x23|x24));

	if (t5 != 4289736679LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x26 = 18U;
	static int16_t x28 = -1;

	t6 = ((x25&x26)&(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 857U;
	uint16_t x31 = 3U;
	volatile uint32_t t7 = 494U;

	t7 = ((x29&x30)&(x31|x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int32_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -266741130619897788LL;

	t8 = ((x33&x34)&(x35|x36));

	if (t8 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	int16_t x38 = 60;
	uint64_t x39 = 48330156238344281LLU;
	volatile uint64_t t9 = 3758110762LLU;

	t9 = ((x37&x38)&(x39|x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 7853U;
	volatile int32_t x43 = INT32_MAX;
	volatile int64_t x44 = 102455773209LL;
	uint64_t t10 = 5753949666390450LLU;

	t10 = ((x41&x42)&(x43|x44));

	if (t10 != 2600LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static volatile uint8_t x46 = 28U;
	int16_t x48 = INT16_MAX;
	static int64_t t11 = -13340470687214LL;

	t11 = ((x45&x46)&(x47|x48));

	if (t11 != 28LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	static volatile uint64_t t12 = 6LLU;

	t12 = ((x49&x50)&(x51|x52));

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1557715577U;
	uint32_t x54 = 86095527U;
	uint8_t x55 = 5U;
	uint64_t x56 = 573989342758686LLU;
	volatile uint64_t t13 = 5LLU;

	t13 = ((x53&x54)&(x55|x56));

	if (t13 != 67109377LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MAX;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t14 = -115LL;

	t14 = ((x57&x58)&(x59|x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 58U;
	int32_t x63 = -1;
	volatile uint64_t x64 = 389375341670676LLU;

	t15 = ((x61&x62)&(x63|x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x66 = 35U;
	volatile uint32_t x67 = UINT32_MAX;
	static uint8_t x68 = 0U;
	volatile uint32_t t16 = 7832U;

	t16 = ((x65&x66)&(x67|x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	static uint32_t x71 = UINT32_MAX;

	t17 = ((x69&x70)&(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 4U;
	int16_t x74 = -11;
	uint16_t x76 = 96U;

	t18 = ((x73&x74)&(x75|x76));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -485191752;
	uint32_t x79 = 0U;
	volatile int8_t x80 = -7;
	int64_t t19 = -263414LL;

	t19 = ((x77&x78)&(x79|x80));

	if (t19 != 3809775544LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -3;
	volatile int32_t x83 = -351135;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 85;

	t20 = ((x81&x82)&(x83|x84));

	if (t20 != 2147483645) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 1U;
	volatile int32_t x86 = 50625114;
	uint32_t x88 = 904018U;
	static uint32_t t21 = 247U;

	t21 = ((x85&x86)&(x87|x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile int64_t x91 = INT64_MAX;
	uint64_t x92 = 712603LLU;
	volatile uint64_t t22 = 33514006243LLU;

	t22 = ((x89&x90)&(x91|x92));

	if (t22 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -91LL;
	uint8_t x94 = 1U;
	int64_t x95 = INT64_MIN;
	uint16_t x96 = 18U;
	volatile int64_t t23 = 64664825LL;

	t23 = ((x93&x94)&(x95|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 194U;
	uint64_t x100 = UINT64_MAX;

	t24 = ((x97&x98)&(x99|x100));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 126;
	int32_t x102 = -1;
	static int32_t x104 = 2633428;
	int32_t t25 = 1;

	t25 = ((x101&x102)&(x103|x104));

	if (t25 != 124) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 0U;
	static uint32_t x106 = 16162852U;
	int32_t x107 = INT32_MAX;
	static uint32_t t26 = 857632U;

	t26 = ((x105&x106)&(x107|x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static uint16_t x111 = 85U;
	uint8_t x112 = 70U;
	int32_t t27 = -1701083;

	t27 = ((x109&x110)&(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 21;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;

	t28 = ((x113&x114)&(x115|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -6257031287598841LL;
	int32_t x118 = INT32_MAX;
	int32_t x119 = -1;
	uint8_t x120 = 41U;
	int64_t t29 = 33LL;

	t29 = ((x117&x118)&(x119|x120));

	if (t29 != 1623265543LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 107U;
	int16_t x122 = 1;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	uint32_t t30 = 738U;

	t30 = ((x121&x122)&(x123|x124));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x126 = -14368061;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = INT16_MIN;
	static volatile int32_t t31 = -23;

	t31 = ((x125&x126)&(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 231;
	int32_t x132 = INT32_MAX;
	static int64_t t32 = -2264108022398038503LL;

	t32 = ((x129&x130)&(x131|x132));

	if (t32 != 231LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static int8_t x135 = -15;
	uint32_t x136 = 908U;

	t33 = ((x133&x134)&(x135|x136));

	if (t33 != 4294934528U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MAX;
	volatile int32_t x140 = INT32_MIN;
	int64_t t34 = 884940416LL;

	t34 = ((x137&x138)&(x139|x140));

	if (t34 != 41LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static uint64_t x142 = 1354279980945140874LLU;
	int32_t x144 = -1;
	static volatile uint64_t t35 = 8139926195756002257LLU;

	t35 = ((x141&x142)&(x143|x144));

	if (t35 != 1354279980945140874LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	volatile int32_t x146 = INT32_MAX;
	volatile int64_t t36 = 1965967912838LL;

	t36 = ((x145&x146)&(x147|x148));

	if (t36 != 2147450880LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 31U;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -15164071;

	t37 = ((x149&x150)&(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 3U;
	uint32_t x154 = 1725U;
	volatile int16_t x155 = INT16_MIN;
	volatile int16_t x156 = -5839;

	t38 = ((x153&x154)&(x155|x156));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 190U;
	static int64_t x158 = INT64_MIN;
	uint8_t x159 = 125U;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int64_t t39 = 0LL;

	t39 = ((x157&x158)&(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x163 = 1;
	uint32_t t40 = 3U;

	t40 = ((x161&x162)&(x163|x164));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MAX;
	static uint8_t x166 = 3U;
	int32_t x167 = 4051784;
	int16_t x168 = -1;
	volatile int32_t t41 = 171215798;

	t41 = ((x165&x166)&(x167|x168));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = -809;
	int64_t x171 = INT64_MAX;
	int16_t x172 = -1;

	t42 = ((x169&x170)&(x171|x172));

	if (t42 != 215LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	uint64_t x174 = UINT64_MAX;
	uint8_t x175 = 1U;
	uint64_t t43 = 347988883542435588LLU;

	t43 = ((x173&x174)&(x175|x176));

	if (t43 != 3941LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 3927188;
	static int16_t x179 = 3;
	int32_t x180 = -1;
	int32_t t44 = 1593063;

	t44 = ((x177&x178)&(x179|x180));

	if (t44 != 3927188) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	uint32_t x183 = UINT32_MAX;
	volatile int64_t x184 = -1LL;
	volatile int64_t t45 = -46LL;

	t45 = ((x181&x182)&(x183|x184));

	if (t45 != 4208100227LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 1U;
	int32_t x188 = 101004853;
	int64_t t46 = -1LL;

	t46 = ((x185&x186)&(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int32_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	volatile int8_t x192 = -1;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x189&x190)&(x191|x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	static int8_t x195 = INT8_MAX;

	t48 = ((x193&x194)&(x195|x196));

	if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int32_t x198 = -1058047328;
	int32_t x199 = -353;
	static uint64_t x200 = 118261454775641LLU;
	volatile uint64_t t49 = 90520392520494LLU;

	t49 = ((x197&x198)&(x199|x200));

	if (t49 != 18446744072651504256LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 1899U;
	int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = ((x201&x202)&(x203|x204));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = -1;
	int64_t x208 = -9612363LL;
	int64_t t51 = 6LL;

	t51 = ((x205&x206)&(x207|x208));

	if (t51 != 16LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = -1LL;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = 18728904U;
	volatile int64_t t52 = 4235LL;

	t52 = ((x209&x210)&(x211|x212));

	if (t52 != 832814013LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MIN;
	static uint32_t x216 = 836314U;
	volatile int64_t t53 = 113868720517365458LL;

	t53 = ((x213&x214)&(x215|x216));

	if (t53 != 2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	volatile int32_t x218 = INT32_MIN;
	static int64_t x219 = -25921LL;
	int16_t x220 = -1;
	volatile int64_t t54 = -54938310332880000LL;

	t54 = ((x217&x218)&(x219|x220));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	volatile int16_t x222 = INT16_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int64_t t55 = -90688138138LL;

	t55 = ((x221&x222)&(x223|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 12U;
	static int64_t x226 = INT64_MIN;
	int16_t x227 = -1;
	volatile int16_t x228 = INT16_MIN;
	static volatile int64_t t56 = -110285824061276663LL;

	t56 = ((x225&x226)&(x227|x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x231 = INT8_MIN;

	t57 = ((x229&x230)&(x231|x232));

	if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x235 = -29068;
	volatile uint8_t x236 = 23U;
	static volatile uint32_t t58 = 103U;

	t58 = ((x233&x234)&(x235|x236));

	if (t58 != 4294934528U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -2232;
	int16_t x240 = 1377;
	static int64_t t59 = 3808448719LL;

	t59 = ((x237&x238)&(x239|x240));

	if (t59 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	static int32_t x243 = 49241;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -33;

	t60 = ((x241&x242)&(x243|x244));

	if (t60 != 89) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	volatile int16_t x246 = -1261;
	static int64_t x247 = 32008317LL;
	volatile int64_t t61 = 6157411LL;

	t61 = ((x245&x246)&(x247|x248));

	if (t61 != 32008209LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	int32_t t62 = -480755;

	t62 = ((x249&x250)&(x251|x252));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile int8_t x254 = -1;
	int32_t x255 = -302;
	static uint8_t x256 = 18U;
	static int32_t t63 = -51;

	t63 = ((x253&x254)&(x255|x256));

	if (t63 != -384) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -265;
	static int8_t x258 = -1;
	static volatile int64_t x259 = -1LL;
	uint32_t x260 = 3936726U;

	t64 = ((x257&x258)&(x259|x260));

	if (t64 != -265LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MAX;

	t65 = ((x261&x262)&(x263|x264));

	if (t65 != 32767LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	volatile int64_t x267 = -1LL;
	int64_t x268 = INT64_MIN;
	volatile int64_t t66 = -139LL;

	t66 = ((x265&x266)&(x267|x268));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = 15;
	static uint32_t x270 = 113251U;
	volatile int8_t x271 = 12;
	volatile int16_t x272 = INT16_MIN;
	uint32_t t67 = 778U;

	t67 = ((x269&x270)&(x271|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -785056442667075LL;
	uint8_t x274 = 21U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = 193261768LLU;

	t68 = ((x273&x274)&(x275|x276));

	if (t68 != 21LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	static uint64_t x278 = 23848899LLU;
	volatile int64_t x280 = 252964444296293583LL;
	volatile uint64_t t69 = 1946450LLU;

	t69 = ((x277&x278)&(x279|x280));

	if (t69 != 67LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MAX;
	static int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	volatile int64_t t70 = -2336899569296LL;

	t70 = ((x281&x282)&(x283|x284));

	if (t70 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MAX;
	static uint16_t x288 = 21387U;

	t71 = ((x285&x286)&(x287|x288));

	if (t71 != 21503LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x290 = INT16_MIN;
	static int8_t x291 = INT8_MIN;
	static int64_t x292 = INT64_MIN;
	int64_t t72 = 5886856521570072LL;

	t72 = ((x289&x290)&(x291|x292));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	int16_t x294 = -1;
	int8_t x295 = -4;
	volatile uint32_t x296 = UINT32_MAX;

	t73 = ((x293&x294)&(x295|x296));

	if (t73 != 32767U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MAX;
	int64_t x299 = INT64_MAX;
	int16_t x300 = -1;
	volatile int64_t t74 = 31308915326655LL;

	t74 = ((x297&x298)&(x299|x300));

	if (t74 != 11LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 1613391LLU;
	int8_t x302 = INT8_MIN;
	volatile uint16_t x304 = UINT16_MAX;
	uint64_t t75 = 1436878738432LLU;

	t75 = ((x301&x302)&(x303|x304));

	if (t75 != 1613312LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = -2;
	uint64_t x307 = 2LLU;
	uint8_t x308 = 22U;
	volatile uint64_t t76 = 2326812LLU;

	t76 = ((x305&x306)&(x307|x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 521122586395LL;
	int8_t x310 = INT8_MAX;
	int16_t x311 = 1;
	int8_t x312 = 0;

	t77 = ((x309&x310)&(x311|x312));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x314 = UINT16_MAX;
	int32_t x315 = -1;
	int16_t x316 = 90;
	int32_t t78 = 90123;

	t78 = ((x313&x314)&(x315|x316));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 5830021459508481011LLU;
	static int32_t x320 = INT32_MAX;

	t79 = ((x317&x318)&(x319|x320));

	if (t79 != 5830021459508481011LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	uint8_t x322 = 2U;
	uint64_t x323 = 1581155LLU;
	int8_t x324 = INT8_MIN;

	t80 = ((x321&x322)&(x323|x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile uint32_t x326 = 746313399U;
	volatile int16_t x327 = INT16_MAX;
	int64_t x328 = 1LL;
	static volatile int64_t t81 = 38133388160598LL;

	t81 = ((x325&x326)&(x327|x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -9;
	int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	volatile int64_t t82 = INT64_MIN;

	t82 = ((x329&x330)&(x331|x332));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x333 = -2989;
	static int16_t x334 = INT16_MAX;
	static int32_t x335 = -1;
	int16_t x336 = INT16_MIN;
	int32_t t83 = -171755718;

	t83 = ((x333&x334)&(x335|x336));

	if (t83 != 29779) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -378945319419LL;
	int8_t x338 = 5;
	uint64_t x340 = 1369045LLU;
	uint64_t t84 = 275364672223870136LLU;

	t84 = ((x337&x338)&(x339|x340));

	if (t84 != 5LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -11LL;
	uint8_t x342 = 3U;
	volatile int64_t x343 = INT64_MIN;
	volatile int64_t t85 = 1958LL;

	t85 = ((x341&x342)&(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	uint64_t x346 = UINT64_MAX;
	static int8_t x348 = INT8_MAX;
	volatile uint64_t t86 = 989LLU;

	t86 = ((x345&x346)&(x347|x348));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	static int64_t x351 = 259755LL;
	int32_t x352 = INT32_MIN;
	int64_t t87 = 30055487504701864LL;

	t87 = ((x349&x350)&(x351|x352));

	if (t87 != 9223372034707521536LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x354 = 2U;
	uint64_t t88 = 228283293355259371LLU;

	t88 = ((x353&x354)&(x355|x356));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 382463LLU;
	static volatile int8_t x358 = INT8_MAX;
	static int32_t x359 = INT32_MAX;
	volatile int32_t x360 = -1;

	t89 = ((x357&x358)&(x359|x360));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	uint32_t x362 = 31779009U;
	int64_t x363 = INT64_MIN;
	static int64_t x364 = -1LL;
	int64_t t90 = -14324LL;

	t90 = ((x361&x362)&(x363|x364));

	if (t90 != 31779009LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x368 = INT64_MAX;
	volatile int64_t t91 = -141011122844851903LL;

	t91 = ((x365&x366)&(x367|x368));

	if (t91 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MAX;
	int16_t x371 = 0;
	volatile int64_t t92 = -1703588192LL;

	t92 = ((x369&x370)&(x371|x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = 3673;
	uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = INT8_MAX;
	uint32_t x376 = 11U;
	static uint32_t t93 = 57285018U;

	t93 = ((x373&x374)&(x375|x376));

	if (t93 != 89U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 104973779651306LLU;
	int64_t x378 = -1LL;
	int32_t x380 = -17;
	volatile uint64_t t94 = 1380951578LLU;

	t94 = ((x377&x378)&(x379|x380));

	if (t94 != 104973779651306LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 286LL;
	volatile uint64_t x384 = UINT64_MAX;

	t95 = ((x381&x382)&(x383|x384));

	if (t95 != 286LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = 0;
	int64_t x388 = INT64_MAX;
	int64_t t96 = 398861140806704337LL;

	t96 = ((x385&x386)&(x387|x388));

	if (t96 != 12LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = 5821LL;
	uint16_t x392 = 31U;
	uint64_t t97 = 1464LLU;

	t97 = ((x389&x390)&(x391|x392));

	if (t97 != 20LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x394 = UINT64_MAX;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	volatile uint64_t t98 = 1578951624073057223LLU;

	t98 = ((x393&x394)&(x395|x396));

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x400 = INT32_MAX;
	int64_t t99 = -915LL;

	t99 = ((x397&x398)&(x399|x400));

	if (t99 != 2097152LL) { NG(); } else { ; }
	
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

