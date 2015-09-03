#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x17 = 242831LLU;
static uint8_t x18 = UINT8_MAX;
uint16_t x21 = UINT16_MAX;
volatile uint32_t t4 = 207051U;
int16_t x28 = -17;
volatile int32_t x29 = INT32_MIN;
int32_t x38 = -767;
int8_t x50 = INT8_MAX;
int64_t t10 = 426423791LL;
uint32_t x63 = UINT32_MAX;
uint8_t x68 = 87U;
int32_t t14 = 250232552;
int32_t x74 = -4663;
volatile int32_t t18 = -92998249;
int16_t x90 = INT16_MAX;
uint16_t x96 = UINT16_MAX;
static volatile int32_t t21 = 7691;
volatile int8_t x97 = INT8_MIN;
static uint32_t x98 = UINT32_MAX;
volatile int8_t x99 = -15;
volatile int8_t x100 = -1;
uint8_t x105 = UINT8_MAX;
static int32_t x113 = INT32_MAX;
static volatile uint32_t x114 = 1U;
static volatile uint32_t x117 = 523095U;
volatile uint16_t x120 = UINT16_MAX;
volatile int16_t x125 = INT16_MIN;
uint16_t x132 = 11661U;
static int32_t x134 = -1;
int64_t x139 = 97163601730657922LL;
int16_t x146 = INT16_MIN;
int16_t x151 = INT16_MIN;
int16_t x155 = -1;
uint8_t x173 = 111U;
int8_t x177 = INT8_MIN;
int8_t x181 = 1;
int32_t x194 = INT32_MIN;
int32_t x195 = -468570;
int64_t x196 = INT64_MAX;
static int16_t x200 = INT16_MAX;
static int16_t x206 = -1;
volatile int64_t x219 = INT64_MIN;
static uint16_t x222 = 2U;
uint8_t x232 = 1U;
uint64_t t55 = 783LLU;
int8_t x238 = INT8_MIN;
int32_t x250 = -326687523;
volatile uint8_t x253 = UINT8_MAX;
volatile uint32_t x264 = UINT32_MAX;
int32_t t63 = -5;
int64_t x269 = INT64_MIN;
static int64_t x270 = 243052LL;
int16_t x272 = -1;
static volatile int64_t t64 = -357308113301115384LL;
int16_t x273 = INT16_MIN;
volatile int64_t x274 = -1LL;
uint32_t x276 = UINT32_MAX;
int64_t t65 = -3659859455256361186LL;
static volatile int16_t x277 = -1514;
static int64_t t67 = 3607929858066LL;
volatile int64_t t68 = 29LL;
volatile int64_t x289 = INT64_MIN;
int64_t x292 = -1LL;
volatile int64_t t69 = -100404080073236748LL;
int8_t x293 = INT8_MIN;
static uint32_t x295 = UINT32_MAX;
int64_t x296 = -13507512585221LL;
int32_t t71 = 30348;
uint32_t x302 = 44U;
uint8_t x304 = UINT8_MAX;
uint64_t x307 = 4LLU;
static uint32_t x308 = 1456783334U;
uint64_t t73 = 2541123084393LLU;
volatile int32_t x320 = -8401866;
static int32_t x323 = INT32_MAX;
uint16_t x328 = 11317U;
uint64_t x334 = UINT64_MAX;
volatile uint64_t t79 = 264134445496391LLU;
static int64_t x337 = 1LL;
int16_t x338 = 8;
uint64_t x345 = UINT64_MAX;
static uint8_t x346 = 5U;
volatile uint64_t t82 = 74391322991LLU;
volatile uint16_t x352 = 1U;
int8_t x355 = INT8_MIN;
uint64_t x367 = 894LLU;
volatile int32_t x371 = INT32_MIN;
volatile uint8_t x377 = 0U;
uint32_t x379 = 4025493U;
int64_t x400 = -1LL;
int8_t x402 = 3;
uint8_t x407 = 62U;
int32_t x418 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 780013589U;
	volatile uint32_t t0 = 101361441U;

	t0 = ((x1&(x2/x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3908U;
	int16_t x6 = INT16_MAX;
	int16_t x7 = -2556;
	int8_t x8 = INT8_MIN;
	uint32_t t1 = 8792558U;

	t1 = ((x5&(x6/x7))&x8);

	if (t1 != 3840U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -52;
	static uint8_t x16 = 5U;
	int32_t t2 = -6;

	t2 = ((x13&(x14/x15))&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x19 = 220U;
	uint16_t x20 = 5375U;
	volatile uint64_t t3 = 8499818462027LLU;

	t3 = ((x17&(x18/x19))&x20);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = 1U;
	int16_t x23 = 41;
	uint32_t x24 = 1U;

	t4 = ((x21&(x22/x23))&x24);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = -1;
	int16_t x27 = -1464;
	int32_t t5 = -1;

	t5 = ((x25&(x26/x27))&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 2LLU;
	volatile int32_t x31 = -118;
	uint8_t x32 = 14U;
	volatile uint64_t t6 = 2934752311709731393LLU;

	t6 = ((x29&(x30/x31))&x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int32_t x34 = 21;
	uint16_t x35 = 2395U;
	static int64_t x36 = 300168506LL;
	static int64_t t7 = 75309LL;

	t7 = ((x33&(x34/x35))&x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 17U;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	int64_t t8 = 1838LL;

	t8 = ((x37&(x38/x39))&x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	uint16_t x42 = 6U;
	uint64_t x43 = 2LLU;
	int64_t x44 = INT64_MAX;
	volatile uint64_t t9 = 36053LLU;

	t9 = ((x41&(x42/x43))&x44);

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 45U;
	int64_t x51 = 14010LL;
	int64_t x52 = -1LL;

	t10 = ((x49&(x50/x51))&x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 1U;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t11 = 5;

	t11 = ((x53&(x54/x55))&x56);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = 140;
	volatile int16_t x60 = -1;
	uint32_t t12 = 14848770U;

	t12 = ((x57&(x58/x59))&x60);

	if (t12 != 7489U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	static volatile int64_t x64 = INT64_MIN;
	volatile int64_t t13 = 1LL;

	t13 = ((x61&(x62/x63))&x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 63U;
	volatile uint16_t x66 = 9U;
	int16_t x67 = -41;

	t14 = ((x65&(x66/x67))&x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	volatile int16_t x70 = -1;
	int64_t x71 = INT64_MAX;
	volatile uint32_t x72 = 8U;
	volatile int64_t t15 = -715022270528LL;

	t15 = ((x69&(x70/x71))&x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -450;
	volatile int8_t x75 = 7;
	int32_t x76 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

	t16 = ((x73&(x74/x75))&x76);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 114U;
	static int32_t x78 = -67;
	static int32_t x79 = INT32_MAX;
	int64_t x80 = -1LL;
	static volatile int64_t t17 = 1434131782048913336LL;

	t17 = ((x77&(x78/x79))&x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = -1;
	volatile int16_t x82 = INT16_MAX;
	static int16_t x83 = INT16_MIN;
	static int16_t x84 = -1;

	t18 = ((x81&(x82/x83))&x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = 34844274625585LLU;
	volatile int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 1034862395047957LLU;

	t19 = ((x85&(x86/x87))&x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 6U;
	volatile uint16_t x91 = 8U;
	volatile int8_t x92 = -11;
	volatile int32_t t20 = -7157571;

	t20 = ((x89&(x90/x91))&x92);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 67U;
	uint8_t x95 = 1U;

	t21 = ((x93&(x94/x95))&x96);

	if (t21 != 67) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t t22 = 11714563U;

	t22 = ((x97&(x98/x99))&x100);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 11U;
	int16_t x102 = -3;
	int64_t x103 = 177102493773LL;
	static int32_t x104 = -1;
	int64_t t23 = -525LL;

	t23 = ((x101&(x102/x103))&x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = INT32_MAX;
	volatile int32_t x107 = -4059;
	int64_t x108 = INT64_MIN;
	int64_t t24 = 2950841971726LL;

	t24 = ((x105&(x106/x107))&x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 5348036;
	static volatile int64_t x110 = -2160LL;
	uint64_t x111 = UINT64_MAX;
	static uint32_t x112 = 1636609293U;
	static volatile uint64_t t25 = 956285784921008561LLU;

	t25 = ((x109&(x110/x111))&x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x115 = 19101154040776LLU;
	uint32_t x116 = 10450805U;
	volatile uint64_t t26 = 5062657921LLU;

	t26 = ((x113&(x114/x115))&x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x118 = INT16_MAX;
	int8_t x119 = -58;
	volatile uint32_t t27 = 86U;

	t27 = ((x117&(x118/x119))&x120);

	if (t27 != 63812U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x121 = 0U;
	int16_t x122 = INT16_MIN;
	int32_t x123 = 361439;
	static volatile int64_t x124 = INT64_MAX;
	static int64_t t28 = 579170124LL;

	t28 = ((x121&(x122/x123))&x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = 33842786207880291LL;
	static uint64_t x127 = 3976103136511221LLU;
	uint64_t x128 = 2LLU;
	uint64_t t29 = 7503242LLU;

	t29 = ((x125&(x126/x127))&x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	uint64_t x130 = 3564674622230LLU;
	static volatile uint8_t x131 = UINT8_MAX;
	volatile uint64_t t30 = 53247646428976617LLU;

	t30 = ((x129&(x130/x131))&x132);

	if (t30 != 8325LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x133 = 0U;
	int16_t x135 = 1;
	static int8_t x136 = -5;
	int32_t t31 = -1;

	t31 = ((x133&(x134/x135))&x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = INT8_MIN;
	int8_t x140 = -1;
	int64_t t32 = 77888LL;

	t32 = ((x137&(x138/x139))&x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = 17;
	int32_t x144 = INT32_MIN;
	volatile int64_t t33 = -88LL;

	t33 = ((x141&(x142/x143))&x144);

	if (t33 != -542551298306736128LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = 918208405530LL;
	int32_t x147 = INT32_MAX;
	volatile int8_t x148 = INT8_MAX;
	volatile int64_t t34 = 17548986094853LL;

	t34 = ((x145&(x146/x147))&x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 51U;
	uint32_t x150 = 526816678U;
	int64_t x152 = -281367309434851532LL;
	volatile int64_t t35 = -57196LL;

	t35 = ((x149&(x150/x151))&x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	static int8_t x154 = 0;
	int32_t x156 = -1;
	int32_t t36 = 5;

	t36 = ((x153&(x154/x155))&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = 2442554;
	int64_t x158 = 987062748907550LL;
	uint64_t x159 = 412377LLU;
	static int16_t x160 = INT16_MIN;
	static volatile uint64_t t37 = 2009530987742555118LLU;

	t37 = ((x157&(x158/x159))&x160);

	if (t37 != 2162688LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int8_t x166 = -1;
	uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 10334U;
	static uint32_t t38 = 861713U;

	t38 = ((x165&(x166/x167))&x168);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = -1;
	uint64_t x170 = 13LLU;
	uint64_t x171 = 4100996LLU;
	static int64_t x172 = -1LL;
	volatile uint64_t t39 = 22LLU;

	t39 = ((x169&(x170/x171))&x172);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x174 = INT32_MAX;
	uint32_t x175 = UINT32_MAX;
	static uint32_t x176 = 29U;
	uint32_t t40 = 2U;

	t40 = ((x173&(x174/x175))&x176);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 43139U;
	volatile uint32_t t41 = 40450225U;

	t41 = ((x177&(x178/x179))&x180);

	if (t41 != 128U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x182 = 15770332U;
	static int32_t x183 = INT32_MAX;
	volatile uint32_t x184 = 561818U;
	volatile uint32_t t42 = 120054U;

	t42 = ((x181&(x182/x183))&x184);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = INT32_MIN;
	volatile int16_t x186 = -1;
	volatile int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t43 = 694058;

	t43 = ((x185&(x186/x187))&x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	static uint16_t x192 = 1633U;
	static int64_t t44 = -15607191820440381LL;

	t44 = ((x189&(x190/x191))&x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MAX;
	volatile int64_t t45 = -36377198734805116LL;

	t45 = ((x193&(x194/x195))&x196);

	if (t45 != 4583LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -29;
	int8_t x199 = -1;
	int32_t t46 = 55664;

	t46 = ((x197&(x198/x199))&x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = 0;
	volatile uint32_t x202 = 823349980U;
	int8_t x203 = -2;
	static int64_t x204 = -1LL;
	static int64_t t47 = 37595548LL;

	t47 = ((x201&(x202/x203))&x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x205 = 34U;
	int64_t x207 = -10938LL;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t48 = 18745723500LLU;

	t48 = ((x205&(x206/x207))&x208);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 127U;
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = INT64_MAX;
	uint64_t x212 = UINT64_MAX;
	uint64_t t49 = 105487075515323454LLU;

	t49 = ((x209&(x210/x211))&x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	int64_t x215 = 19915716LL;
	int32_t x216 = 13667264;
	static volatile int64_t t50 = -26881574408485LL;

	t50 = ((x213&(x214/x215))&x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 6U;
	static volatile uint16_t x218 = 3U;
	static int32_t x220 = -1;
	volatile int64_t t51 = 287959546404LL;

	t51 = ((x217&(x218/x219))&x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = 5LL;
	volatile uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t52 = 1528294LL;

	t52 = ((x221&(x222/x223))&x224);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x225 = 1U;
	int32_t x226 = -33978138;
	uint8_t x227 = 24U;
	uint8_t x228 = 2U;
	int32_t t53 = 1742;

	t53 = ((x225&(x226/x227))&x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = 113516198;
	int64_t x231 = INT64_MIN;
	volatile int64_t t54 = -25LL;

	t54 = ((x229&(x230/x231))&x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	static int8_t x234 = -1;
	int16_t x235 = -94;
	uint64_t x236 = 296329LLU;

	t55 = ((x233&(x234/x235))&x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x237 = 633473951495LL;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 24465620U;
	volatile int64_t t56 = 84265315942833LL;

	t56 = ((x237&(x238/x239))&x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -12;
	int32_t x242 = 516570;
	int32_t x243 = 1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t57 = -16;

	t57 = ((x241&(x242/x243))&x244);

	if (t57 != 208) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x245 = -95LL;
	uint64_t x246 = UINT64_MAX;
	static volatile int16_t x247 = INT16_MIN;
	uint64_t x248 = 3LLU;
	static volatile uint64_t t58 = 20070690149806LLU;

	t58 = ((x245&(x246/x247))&x248);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x249 = 304760177LLU;
	uint32_t x251 = 3236U;
	uint64_t x252 = 15477088382LLU;
	uint64_t t59 = 26293121LLU;

	t59 = ((x249&(x250/x251))&x252);

	if (t59 != 48LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x254 = 18;
	uint64_t x255 = 4851020875LLU;
	uint16_t x256 = 7U;
	volatile uint64_t t60 = 3807929667346009717LLU;

	t60 = ((x253&(x254/x255))&x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -8520;
	int64_t x258 = INT64_MIN;
	uint32_t x259 = 53U;
	static uint32_t x260 = 26274865U;
	int64_t t61 = 230635440113LL;

	t61 = ((x257&(x258/x259))&x260);

	if (t61 != 9487376LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -1LL;
	static int16_t x262 = 2;
	int64_t x263 = INT64_MIN;
	volatile int64_t t62 = 63926293LL;

	t62 = ((x261&(x262/x263))&x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x265 = 31U;
	static int8_t x266 = 12;
	uint16_t x267 = 118U;
	uint8_t x268 = 100U;

	t63 = ((x265&(x266/x267))&x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x271 = UINT8_MAX;

	t64 = ((x269&(x270/x271))&x272);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x275 = INT16_MAX;

	t65 = ((x273&(x274/x275))&x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint32_t t66 = 449404868U;

	t66 = ((x277&(x278/x279))&x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 5U;
	int16_t x282 = INT16_MIN;
	uint16_t x283 = 18234U;
	int64_t x284 = 38545455LL;

	t67 = ((x281&(x282/x283))&x284);

	if (t67 != 5LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 2069110832U;
	static int32_t x286 = 1994637;
	int64_t x287 = 5891733LL;
	static int32_t x288 = INT32_MAX;

	t68 = ((x285&(x286/x287))&x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = INT8_MAX;
	uint8_t x291 = 2U;

	t69 = ((x289&(x290/x291))&x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x294 = INT16_MAX;
	volatile int64_t t70 = 408LL;

	t70 = ((x293&(x294/x295))&x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 4087;
	int16_t x298 = -1;
	int16_t x299 = 2155;
	volatile uint8_t x300 = 56U;

	t71 = ((x297&(x298/x299))&x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = -1;
	int32_t x303 = -1;
	uint32_t t72 = 96U;

	t72 = ((x301&(x302/x303))&x304);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = 938;

	t73 = ((x305&(x306/x307))&x308);

	if (t73 != 98LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 68U;
	int64_t x310 = 64879LL;
	static volatile uint64_t x311 = UINT64_MAX;
	uint8_t x312 = UINT8_MAX;
	static uint64_t t74 = 20865LLU;

	t74 = ((x309&(x310/x311))&x312);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MAX;
	uint32_t x314 = 241249202U;
	int64_t x315 = -307050LL;
	static int32_t x316 = -3765566;
	volatile int64_t t75 = -192238035LL;

	t75 = ((x313&(x314/x315))&x316);

	if (t75 != 9223372036851009730LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x317 = 258425754382215818LLU;
	int16_t x318 = -1;
	static int8_t x319 = INT8_MIN;
	static uint64_t t76 = 1LLU;

	t76 = ((x317&(x318/x319))&x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = -1742;
	int16_t x324 = 6;
	volatile int32_t t77 = -386653347;

	t77 = ((x321&(x322/x323))&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -32828829;
	static volatile int64_t x326 = INT64_MAX;
	int32_t x327 = 2;
	volatile int64_t t78 = 217096LL;

	t78 = ((x325&(x326/x327))&x328);

	if (t78 != 33LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x333 = INT8_MAX;
	int32_t x335 = INT32_MIN;
	static int16_t x336 = 0;

	t79 = ((x333&(x334/x335))&x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x339 = 7U;
	int32_t x340 = 3056;
	static volatile int64_t t80 = 598129LL;

	t80 = ((x337&(x338/x339))&x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = UINT16_MAX;
	uint8_t x342 = 6U;
	volatile int64_t x343 = INT64_MIN;
	int32_t x344 = -29;
	volatile int64_t t81 = 113820830LL;

	t81 = ((x341&(x342/x343))&x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x347 = 1081LLU;
	int8_t x348 = INT8_MAX;

	t82 = ((x345&(x346/x347))&x348);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -1;
	volatile uint16_t x350 = 14810U;
	int16_t x351 = INT16_MIN;
	int32_t t83 = -829434;

	t83 = ((x349&(x350/x351))&x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	static int32_t x354 = INT32_MIN;
	uint32_t x356 = 13U;
	uint32_t t84 = 201251209U;

	t84 = ((x353&(x354/x355))&x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = 6;
	volatile int64_t x358 = -1804LL;
	static volatile int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int64_t t85 = 14472079567185LL;

	t85 = ((x357&(x358/x359))&x360);

	if (t85 != 4LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = -1;
	static int16_t x362 = INT16_MIN;
	uint32_t x363 = 117U;
	int8_t x364 = 60;
	volatile uint32_t t86 = 12752U;

	t86 = ((x361&(x362/x363))&x364);

	if (t86 != 40U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x365 = 685U;
	int32_t x366 = -1010477;
	volatile int64_t x368 = INT64_MIN;
	volatile uint64_t t87 = 25919858869LLU;

	t87 = ((x365&(x366/x367))&x368);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MAX;
	volatile uint16_t x370 = 1504U;
	int32_t x372 = -26933523;
	volatile int64_t t88 = 2LL;

	t88 = ((x369&(x370/x371))&x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t89 = -1320433LL;

	t89 = ((x373&(x374/x375))&x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x378 = -919076LL;
	volatile int32_t x380 = INT32_MAX;
	int64_t t90 = -9066011879LL;

	t90 = ((x377&(x378/x379))&x380);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x386 = -245615437LL;
	int64_t x387 = INT64_MAX;
	static int8_t x388 = -2;
	int64_t t91 = 189331265356081313LL;

	t91 = ((x385&(x386/x387))&x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = -1LL;
	volatile uint64_t x390 = 637962574427LLU;
	uint64_t x391 = 931981998LLU;
	int8_t x392 = INT8_MAX;
	static volatile uint64_t t92 = 25284013901844614LLU;

	t92 = ((x389&(x390/x391))&x392);

	if (t92 != 44LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = -172;
	volatile uint8_t x394 = UINT8_MAX;
	int8_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;
	int32_t t93 = 47352024;

	t93 = ((x393&(x394/x395))&x396);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -1;
	int8_t x398 = -1;
	uint16_t x399 = 17U;
	static volatile int64_t t94 = -18477LL;

	t94 = ((x397&(x398/x399))&x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x401 = 8028849LLU;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;
	uint64_t t95 = 445784LLU;

	t95 = ((x401&(x402/x403))&x404);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x405 = -1;
	int32_t x406 = -1;
	volatile uint8_t x408 = 13U;
	static int32_t t96 = -363;

	t96 = ((x405&(x406/x407))&x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -1LL;
	int32_t x410 = 16618;
	volatile uint8_t x411 = 6U;
	volatile int32_t x412 = INT32_MIN;
	static int64_t t97 = 31LL;

	t97 = ((x409&(x410/x411))&x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -18;
	volatile int8_t x414 = INT8_MIN;
	volatile int16_t x415 = -1;
	int32_t x416 = 38;
	static volatile int32_t t98 = -734749;

	t98 = ((x413&(x414/x415))&x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x417 = 74770U;
	int16_t x419 = 53;
	int32_t x420 = 429852;
	uint32_t t99 = 53019U;

	t99 = ((x417&(x418/x419))&x420);

	if (t99 != 0U) { NG(); } else { ; }
	
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

