#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = 0;
volatile int64_t x10 = INT64_MIN;
int8_t x16 = 8;
int32_t x17 = -1;
static int8_t x19 = INT8_MAX;
uint8_t x24 = UINT8_MAX;
uint8_t x27 = UINT8_MAX;
uint64_t x28 = UINT64_MAX;
uint64_t t7 = UINT64_MAX;
int64_t x34 = INT64_MIN;
static int16_t x39 = -1;
int64_t x41 = 38205LL;
static int32_t x44 = INT32_MAX;
static volatile int16_t x52 = INT16_MAX;
int64_t x64 = -1LL;
int8_t x65 = 0;
int64_t x67 = -2741431495814897002LL;
static uint32_t x68 = 129221U;
int16_t x76 = INT16_MIN;
volatile int8_t x79 = 1;
volatile int8_t x80 = 4;
uint32_t x81 = 54U;
volatile int32_t x85 = -1;
int32_t x87 = -194631388;
uint8_t x103 = 9U;
static uint16_t x111 = 46U;
volatile int32_t t27 = -31875;
static volatile int16_t x120 = INT16_MIN;
uint8_t x122 = 14U;
volatile int32_t x123 = -1;
volatile int64_t x137 = INT64_MIN;
int16_t x138 = 2249;
uint64_t t32 = 0LLU;
uint64_t t33 = 1997187254968169LLU;
int64_t x145 = -4299837262LL;
volatile int32_t t37 = -250;
static int64_t x162 = INT64_MAX;
int8_t x163 = -1;
static uint64_t x169 = 99142828LLU;
int64_t t41 = -50300589721867543LL;
int16_t x179 = INT16_MAX;
volatile int64_t x180 = -1LL;
static volatile int64_t t42 = 3045887298137488LL;
int64_t x181 = -1LL;
int8_t x186 = -10;
static int64_t x190 = INT64_MIN;
static int8_t x195 = 1;
volatile uint32_t x196 = 402U;
uint16_t x198 = 0U;
uint32_t x199 = 377U;
volatile int8_t x204 = INT8_MIN;
uint32_t x208 = 287874U;
uint8_t x210 = 1U;
volatile int32_t t50 = 218854;
uint32_t x221 = 2670337U;
uint32_t x224 = 4195U;
int64_t x226 = INT64_MIN;
uint8_t x234 = 34U;
uint16_t x240 = 31U;
static uint32_t x241 = 183775U;
int8_t x244 = -5;
int16_t x245 = 9898;
static volatile int32_t t59 = 753136;
int8_t x263 = INT8_MIN;
volatile int64_t t62 = -270530351969183345LL;
int32_t x273 = 351220;
int64_t x274 = -1932881156744961LL;
volatile uint8_t x279 = UINT8_MAX;
int32_t x281 = 4;
uint64_t t67 = 50150183226LLU;
uint32_t x288 = UINT32_MAX;
uint32_t t69 = 0U;
uint32_t x296 = 507U;
volatile int64_t x300 = 407708347604LL;
int64_t x309 = INT64_MIN;
static int16_t x310 = INT16_MIN;
volatile uint64_t t75 = 56246LLU;
int64_t x319 = INT64_MIN;
int32_t x325 = INT32_MIN;
uint16_t x336 = 161U;
uint32_t x346 = 479U;
int64_t t83 = -13140LL;
int8_t x356 = -1;
static uint32_t x377 = 171389U;
int16_t x383 = 1;
int8_t x384 = -1;
int16_t x387 = -80;
int16_t x389 = INT16_MIN;
int8_t x391 = INT8_MIN;
static int64_t x396 = -1LL;
int8_t x398 = INT8_MAX;
volatile int64_t x416 = INT64_MIN;


void f0(void) {
	static uint8_t x1 = 40U;
	uint8_t x2 = 124U;
	int8_t x3 = 1;
	static int64_t x4 = -191026797831409909LL;
	volatile int64_t t0 = -12208099959LL;

	t0 = ((x1&x2)|(x3%x4));

	if (t0 != 41LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = 838160U;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 67676348U;

	t1 = ((x5&x6)|(x7%x8));

	if (t1 != 838160U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 180LLU;
	int16_t x11 = -12337;
	int16_t x12 = INT16_MAX;
	static uint64_t t2 = 2412LLU;

	t2 = ((x9&x10)|(x11%x12));

	if (t2 != 18446744073709539279LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = -35;
	static int8_t x15 = -40;
	volatile int32_t t3 = 38825;

	t3 = ((x13&x14)|(x15%x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint8_t x20 = 56U;
	int32_t t4 = 1;

	t4 = ((x17&x18)|(x19%x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 1455740134U;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	uint32_t t5 = 3U;

	t5 = ((x21&x22)|(x23%x24));

	if (t5 != 4294967168U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static uint8_t x26 = UINT8_MAX;
	volatile uint64_t t6 = 9LLU;

	t6 = ((x25&x26)|(x27%x28));

	if (t6 != 255LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 90LLU;
	int16_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;

	t7 = ((x29&x30)|(x31%x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x35 = INT64_MAX;
	uint64_t x36 = 19LLU;
	uint64_t t8 = 78644LLU;

	t8 = ((x33&x34)|(x35%x36));

	if (t8 != 9223372036854775825LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MAX;
	volatile uint16_t x40 = 500U;
	int32_t t9 = -131;

	t9 = ((x37&x38)|(x39%x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	volatile int64_t t10 = 7175613553661485LL;

	t10 = ((x41&x42)|(x43%x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = UINT8_MAX;
	int32_t t11 = 152547852;

	t11 = ((x45&x46)|(x47%x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = INT32_MAX;
	static volatile int64_t x51 = INT64_MIN;
	int64_t t12 = 45LL;

	t12 = ((x49&x50)|(x51%x52));

	if (t12 != -8LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x54 = 0;
	uint32_t x55 = 9707534U;
	uint32_t x56 = 6U;
	int64_t t13 = -455808LL;

	t13 = ((x53&x54)|(x55%x56));

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int32_t x58 = -1;
	int8_t x59 = -7;
	uint32_t x60 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = ((x57&x58)|(x59%x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 5U;
	uint8_t x62 = 21U;
	int64_t x63 = INT64_MAX;
	volatile int64_t t15 = -661507229975LL;

	t15 = ((x61&x62)|(x63%x64));

	if (t15 != 5LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	int64_t t16 = -2991241454LL;

	t16 = ((x65&x66)|(x67%x68));

	if (t16 != -75748LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MAX;
	static uint64_t x70 = 618129607460LLU;
	static volatile uint8_t x71 = 25U;
	int64_t x72 = INT64_MAX;
	uint64_t t17 = 297639LLU;

	t17 = ((x69&x70)|(x71%x72));

	if (t17 != 1801800509LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 435;
	uint64_t x74 = 41466156LLU;
	uint32_t x75 = 121U;
	uint64_t t18 = 144887548508555LLU;

	t18 = ((x73&x74)|(x75%x76));

	if (t18 != 377LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 759671;
	uint8_t x78 = 1U;
	volatile int32_t t19 = -1;

	t19 = ((x77&x78)|(x79%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	static volatile uint32_t x83 = 388U;
	int32_t x84 = INT32_MIN;
	uint32_t t20 = 44U;

	t20 = ((x81&x82)|(x83%x84));

	if (t20 != 438U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 3;
	volatile int16_t x88 = INT16_MIN;
	static int32_t t21 = -95603637;

	t21 = ((x85&x86)|(x87%x88));

	if (t21 != -22233) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 79U;
	int64_t x90 = INT64_MAX;
	int64_t x91 = INT64_MAX;
	uint64_t x92 = 68836290552343LLU;
	static uint64_t t22 = 985680043LLU;

	t22 = ((x89&x90)|(x91%x92));

	if (t22 != 66302036889583LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	volatile int16_t x94 = INT16_MAX;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 1181807762856887LL;

	t23 = ((x93&x94)|(x95%x96));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 0U;
	volatile int64_t x98 = -1LL;
	int16_t x99 = -1459;
	int32_t x100 = INT32_MIN;
	int64_t t24 = -4632253597LL;

	t24 = ((x97&x98)|(x99%x100));

	if (t24 != -1459LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -4543071;
	static volatile uint64_t x102 = 11782445546LLU;
	int32_t x104 = INT32_MAX;
	uint64_t t25 = 13LLU;

	t25 = ((x101&x102)|(x103%x104));

	if (t25 != 11778165161LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 6U;
	static uint64_t x106 = 1381LLU;
	int8_t x107 = -1;
	uint32_t x108 = 737538U;
	volatile uint64_t t26 = 1641481LLU;

	t26 = ((x105&x106)|(x107%x108));

	if (t26 != 283525LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 47;
	int32_t x110 = INT32_MIN;
	static int32_t x112 = -15305;

	t27 = ((x109&x110)|(x111%x112));

	if (t27 != 46) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	int8_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x117&x118)|(x119%x120));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = 58U;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t29 = -6;

	t29 = ((x121&x122)|(x123%x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = 0;
	uint16_t x128 = 3U;
	volatile int64_t t30 = INT64_MIN;

	t30 = ((x125&x126)|(x127%x128));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -28014;
	uint64_t x134 = 72LLU;
	static int16_t x135 = -1;
	uint16_t x136 = 3U;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x133&x134)|(x135%x136));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x139 = 1;
	volatile uint64_t x140 = 475LLU;

	t32 = ((x137&x138)|(x139%x140));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 11LLU;
	static volatile uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	static uint8_t x144 = UINT8_MAX;

	t33 = ((x141&x142)|(x143%x144));

	if (t33 != 11LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = INT32_MAX;
	static int8_t x147 = INT8_MAX;
	static int32_t x148 = -1609508;
	static volatile int64_t t34 = 575765284671521596LL;

	t34 = ((x145&x146)|(x147%x148));

	if (t34 != 2142613759LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int64_t x150 = -2537486585771118LL;
	int64_t x151 = INT64_MAX;
	int64_t x152 = -5LL;
	static uint64_t t35 = 13834529630850LLU;

	t35 = ((x149&x150)|(x151%x152));

	if (t35 != 18444206587123780498LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = 75;
	volatile uint32_t x154 = UINT32_MAX;
	int32_t x155 = 3;
	int16_t x156 = INT16_MAX;
	volatile uint32_t t36 = 1U;

	t36 = ((x153&x154)|(x155%x156));

	if (t36 != 75U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MAX;
	volatile int8_t x158 = INT8_MIN;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = 1;

	t37 = ((x157&x158)|(x159%x160));

	if (t37 != 32640) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x161 = 57U;
	volatile int16_t x164 = INT16_MAX;
	int64_t t38 = -2531897480265LL;

	t38 = ((x161&x162)|(x163%x164));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x165 = UINT8_MAX;
	uint16_t x166 = 7126U;
	static int64_t x167 = -1LL;
	int16_t x168 = -11;
	volatile int64_t t39 = 12444596LL;

	t39 = ((x165&x166)|(x167%x168));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x170 = 33;
	int16_t x171 = -1;
	static uint64_t x172 = 7606984LLU;
	volatile uint64_t t40 = 5914035547243651LLU;

	t40 = ((x169&x170)|(x171%x172));

	if (t40 != 3008559LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	static uint16_t x174 = UINT16_MAX;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;

	t41 = ((x173&x174)|(x175%x176));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 10;
	static volatile int8_t x178 = INT8_MIN;

	t42 = ((x177&x178)|(x179%x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = INT16_MAX;
	int64_t x183 = INT64_MAX;
	int64_t x184 = -2512140996LL;
	static volatile int64_t t43 = -7LL;

	t43 = ((x181&x182)|(x183%x184));

	if (t43 != 942276607LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 100U;
	uint32_t x187 = 825U;
	int8_t x188 = INT8_MAX;
	uint32_t t44 = 63657U;

	t44 = ((x185&x186)|(x187%x188));

	if (t44 != 127U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = -6;
	volatile int64_t t45 = 10854892344LL;

	t45 = ((x189&x190)|(x191%x192));

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = -1;
	int64_t x194 = INT64_MAX;
	int64_t t46 = INT64_MAX;

	t46 = ((x193&x194)|(x195%x196));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = -1349;
	int32_t x200 = INT32_MAX;
	static volatile uint32_t t47 = 38U;

	t47 = ((x197&x198)|(x199%x200));

	if (t47 != 377U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 535U;
	int64_t x202 = -1LL;
	int16_t x203 = INT16_MIN;
	volatile int64_t t48 = 1957421586914054LL;

	t48 = ((x201&x202)|(x203%x204));

	if (t48 != 535LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = 15871016816099LLU;
	static uint8_t x206 = UINT8_MAX;
	volatile int64_t x207 = INT64_MAX;
	volatile uint64_t t49 = 114644545LLU;

	t49 = ((x205&x206)|(x207%x208));

	if (t49 != 115175LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int32_t x211 = -918469419;
	uint16_t x212 = UINT16_MAX;

	t50 = ((x209&x210)|(x211%x212));

	if (t50 != -61929) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	static int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MAX;
	volatile int32_t t51 = 106402268;

	t51 = ((x213&x214)|(x215%x216));

	if (t51 != -2147483521) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -929;
	volatile int32_t x219 = INT32_MIN;
	uint64_t x220 = 9LLU;
	static uint64_t t52 = 51LLU;

	t52 = ((x217&x218)|(x219%x220));

	if (t52 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x222 = 106U;
	volatile int64_t x223 = 41074295836888LL;
	volatile int64_t t53 = -130436LL;

	t53 = ((x221&x222)|(x223%x224));

	if (t53 != 1973LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = INT32_MAX;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	volatile int64_t t54 = -246138LL;

	t54 = ((x225&x226)|(x227%x228));

	if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x233 = INT32_MIN;
	int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	int32_t t55 = 385371;

	t55 = ((x233&x234)|(x235%x236));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 1;
	static int8_t x238 = -29;
	int16_t x239 = -1;
	int32_t t56 = -308693214;

	t56 = ((x237&x238)|(x239%x240));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x242 = 1U;
	volatile uint8_t x243 = UINT8_MAX;
	uint32_t t57 = 16478754U;

	t57 = ((x241&x242)|(x243%x244));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	static volatile uint64_t x248 = 12937828692543956LLU;
	uint64_t t58 = 26361LLU;

	t58 = ((x245&x246)|(x247%x248));

	if (t58 != 10338184686930668LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	static uint16_t x250 = 189U;
	static int32_t x251 = -1;
	int32_t x252 = -41599772;

	t59 = ((x249&x250)|(x251%x252));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x253 = -5528642LL;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	static int8_t x256 = INT8_MIN;
	int64_t t60 = 1373418845503134988LL;

	t60 = ((x253&x254)|(x255%x256));

	if (t60 != -5528704LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = -1;
	static volatile int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 2U;
	volatile int64_t t61 = 5325641756139LL;

	t61 = ((x257&x258)|(x259%x260));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = 1032658075;
	int32_t x262 = 1;
	int64_t x264 = INT64_MIN;

	t62 = ((x261&x262)|(x263%x264));

	if (t62 != -127LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x265 = 7;
	static int64_t x266 = INT64_MIN;
	uint32_t x267 = 61134622U;
	static volatile uint8_t x268 = UINT8_MAX;
	volatile int64_t t63 = -13229779517584416LL;

	t63 = ((x265&x266)|(x267%x268));

	if (t63 != 157LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 0U;
	uint32_t x271 = 1852U;
	int8_t x272 = INT8_MIN;
	uint64_t t64 = 13369713155494LLU;

	t64 = ((x269&x270)|(x271%x272));

	if (t64 != 1852LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x275 = UINT8_MAX;
	volatile uint64_t x276 = 83716076729036938LLU;
	uint64_t t65 = 4150203817685817927LLU;

	t65 = ((x273&x274)|(x275%x276));

	if (t65 != 22783LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = 193;
	uint16_t x280 = 9402U;
	volatile int32_t t66 = 3;

	t66 = ((x277&x278)|(x279%x280));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x282 = 73U;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;

	t67 = ((x281&x282)|(x283%x284));

	if (t67 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x285 = 520857U;
	uint32_t x286 = 1002379U;
	int64_t x287 = 9618683LL;
	int64_t t68 = 105LL;

	t68 = ((x285&x286)|(x287%x288));

	if (t68 != 9946875LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MAX;
	uint32_t x290 = UINT32_MAX;
	static volatile int16_t x291 = 1217;
	static int16_t x292 = INT16_MIN;

	t69 = ((x289&x290)|(x291%x292));

	if (t69 != 1279U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x293 = -5168640602LL;
	volatile int32_t x294 = -105744254;
	uint32_t x295 = 71U;
	int64_t t70 = -8524889033744870LL;

	t70 = ((x293&x294)|(x295%x296));

	if (t70 != -5207209785LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MIN;
	volatile uint32_t x299 = 433084539U;
	volatile int64_t t71 = 3128LL;

	t71 = ((x297&x298)|(x299%x300));

	if (t71 != 433084539LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 1820000351262LLU;
	static int8_t x302 = -1;
	uint8_t x303 = 9U;
	uint64_t x304 = 53773LLU;
	volatile uint64_t t72 = 3350730669322039731LLU;

	t72 = ((x301&x302)|(x303%x304));

	if (t72 != 1820000351263LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = 0;
	uint32_t x306 = UINT32_MAX;
	static int16_t x307 = 150;
	uint16_t x308 = UINT16_MAX;
	static volatile uint32_t t73 = 16236U;

	t73 = ((x305&x306)|(x307%x308));

	if (t73 != 150U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	volatile int64_t t74 = -2101051460309689LL;

	t74 = ((x309&x310)|(x311%x312));

	if (t74 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x314 = 126;
	uint16_t x315 = 0U;
	static uint64_t x316 = UINT64_MAX;

	t75 = ((x313&x314)|(x315%x316));

	if (t75 != 126LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = -19353110;
	static volatile int32_t x320 = INT32_MAX;
	volatile int64_t t76 = -16696989625LL;

	t76 = ((x317&x318)|(x319%x320));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = 3;
	static int16_t x322 = -1;
	volatile int8_t x323 = INT8_MAX;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t77 = -788;

	t77 = ((x321&x322)|(x323%x324));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x326 = 23U;
	static uint8_t x327 = 2U;
	int32_t x328 = INT32_MAX;
	volatile int32_t t78 = 1853243;

	t78 = ((x325&x326)|(x327%x328));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 7004U;
	static volatile int64_t x332 = INT64_MIN;
	static volatile int64_t t79 = -54312LL;

	t79 = ((x329&x330)|(x331%x332));

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -8881;
	int16_t x334 = -1;
	int8_t x335 = -1;
	volatile int32_t t80 = 25182754;

	t80 = ((x333&x334)|(x335%x336));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = 7;
	static uint32_t x338 = UINT32_MAX;
	volatile uint64_t x339 = 13033LLU;
	int16_t x340 = INT16_MAX;
	volatile uint64_t t81 = 18LLU;

	t81 = ((x337&x338)|(x339%x340));

	if (t81 != 13039LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = 206U;
	int64_t t82 = -2902217462107LL;

	t82 = ((x341&x342)|(x343%x344));

	if (t82 != -2147483610LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int8_t x347 = -1;
	int32_t x348 = 90773196;

	t83 = ((x345&x346)|(x347%x348));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 2921LL;
	int32_t x350 = -1900036;
	volatile int8_t x351 = -1;
	uint16_t x352 = 15U;
	int64_t t84 = -14861804219LL;

	t84 = ((x349&x350)|(x351%x352));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = 6;
	volatile uint8_t x355 = 2U;
	static volatile int32_t t85 = -1800496;

	t85 = ((x353&x354)|(x355%x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	volatile int64_t x360 = 17LL;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x357&x358)|(x359%x360));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	volatile uint64_t x363 = 19LLU;
	uint8_t x364 = UINT8_MAX;
	volatile uint64_t t87 = 52438631304LLU;

	t87 = ((x361&x362)|(x363%x364));

	if (t87 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x365 = 29233436691620250LLU;
	uint64_t x366 = UINT64_MAX;
	static uint8_t x367 = UINT8_MAX;
	static uint32_t x368 = 27070U;
	volatile uint64_t t88 = 13LLU;

	t88 = ((x365&x366)|(x367%x368));

	if (t88 != 29233436691620351LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = 5U;
	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t89 = -51558LL;

	t89 = ((x369&x370)|(x371%x372));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MAX;
	int64_t x374 = INT64_MAX;
	static int64_t x375 = -812201468LL;
	int32_t x376 = 8;
	volatile int64_t t90 = 1048964829403037LL;

	t90 = ((x373&x374)|(x375%x376));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x378 = INT32_MIN;
	static uint16_t x379 = 168U;
	uint64_t x380 = UINT64_MAX;
	static uint64_t t91 = 501109181455LLU;

	t91 = ((x377&x378)|(x379%x380));

	if (t91 != 168LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	volatile uint32_t x382 = 4647817U;
	volatile uint32_t t92 = 2003U;

	t92 = ((x381&x382)|(x383%x384));

	if (t92 != 4647808U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x385 = -1;
	int16_t x386 = INT16_MAX;
	volatile int64_t x388 = -13955965LL;
	volatile int64_t t93 = 124382015711368480LL;

	t93 = ((x385&x386)|(x387%x388));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = 331098;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t94 = 15;

	t94 = ((x389&x390)|(x391%x392));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 133666U;
	int64_t x394 = INT64_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	volatile int64_t t95 = 12LL;

	t95 = ((x393&x394)|(x395%x396));

	if (t95 != 133666LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x397 = 36U;
	volatile uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t96 = 7779544U;

	t96 = ((x397&x398)|(x399%x400));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x401 = 4912U;
	volatile int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	volatile int64_t x404 = INT64_MIN;
	int64_t t97 = -317LL;

	t97 = ((x401&x402)|(x403%x404));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MAX;
	static uint16_t x410 = UINT16_MAX;
	int16_t x411 = 1;
	int8_t x412 = 24;
	int32_t t98 = 128974484;

	t98 = ((x409&x410)|(x411%x412));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = UINT16_MAX;
	volatile int8_t x414 = INT8_MIN;
	uint8_t x415 = 6U;
	static volatile int64_t t99 = -3LL;

	t99 = ((x413&x414)|(x415%x416));

	if (t99 != 65414LL) { NG(); } else { ; }
	
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

