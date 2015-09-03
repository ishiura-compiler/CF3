#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = 1;
int64_t x7 = -22117355228LL;
static int32_t x15 = 189696;
volatile int8_t x16 = -7;
int64_t x27 = INT64_MIN;
volatile int64_t t6 = -1LL;
int32_t t7 = 43;
int32_t x40 = INT32_MAX;
static uint32_t x45 = 440716464U;
volatile uint32_t t11 = 6536524U;
uint32_t x49 = 16108707U;
uint64_t x51 = UINT64_MAX;
static volatile int32_t x52 = INT32_MIN;
int16_t x63 = INT16_MIN;
static uint8_t x64 = 3U;
int32_t t15 = 12807161;
int32_t x66 = INT32_MAX;
volatile int64_t x72 = -1580433693051895742LL;
int32_t x76 = INT32_MAX;
int64_t x80 = -214073029322245154LL;
volatile uint16_t x81 = 107U;
int16_t x86 = INT16_MIN;
volatile uint64_t x87 = 66781408LLU;
volatile uint16_t x91 = 2208U;
uint32_t x97 = 46539U;
volatile int32_t x100 = 931251029;
uint64_t t24 = 56352337523LLU;
volatile int64_t x103 = -100876014669363LL;
uint32_t x104 = 1823U;
int16_t x109 = INT16_MIN;
int64_t t28 = 2652083280LL;
uint16_t x119 = 95U;
static uint32_t x126 = 4U;
volatile int64_t x127 = -9685343163864LL;
int32_t x129 = 6;
static int16_t x131 = -14875;
int64_t x142 = INT64_MIN;
static volatile int8_t x146 = INT8_MIN;
uint64_t x165 = UINT64_MAX;
volatile int8_t x167 = INT8_MIN;
uint64_t x169 = 9782685753LLU;
uint32_t x172 = 27268U;
static int64_t x173 = INT64_MAX;
int8_t x176 = 23;
uint16_t x178 = 0U;
int16_t x179 = -1561;
static uint64_t x186 = 606627LLU;
volatile int16_t x187 = INT16_MAX;
volatile uint64_t t45 = 473666887234LLU;
uint16_t x209 = 127U;
uint8_t x215 = 15U;
int16_t x216 = -143;
uint8_t x220 = 1U;
int64_t t54 = 198749LL;
uint64_t x227 = 8234736326166252LLU;
static int64_t x228 = -1LL;
int32_t x230 = INT32_MAX;
uint16_t x237 = 13U;
int16_t x238 = 25;
uint64_t x241 = 1177693LLU;
volatile int32_t t62 = -124;
volatile uint16_t x278 = 1859U;
volatile int32_t x280 = -1;
int16_t x282 = -1;
int16_t x285 = 21;
static int32_t x289 = INT32_MAX;
int64_t x296 = -230498474808575LL;
int64_t t71 = -8LL;
static int64_t x302 = 17945291820438LL;
volatile int64_t t73 = -855LL;
int32_t x308 = INT32_MAX;
static int16_t x309 = INT16_MAX;
int64_t x310 = -1LL;
uint8_t x324 = 10U;
static int32_t x328 = 74561280;
volatile int32_t t80 = 111;
volatile int64_t x335 = INT64_MAX;
int64_t t81 = 5LL;
volatile uint8_t x338 = 30U;
uint16_t x339 = 0U;
volatile int64_t t83 = -3751989317LL;
uint32_t x347 = 178U;
volatile uint64_t t84 = UINT64_MAX;
static int8_t x349 = -1;
int64_t x357 = INT64_MIN;
uint16_t x359 = UINT16_MAX;
static volatile int64_t t87 = 22672708490430816LL;
static uint32_t x378 = 1257324581U;
int8_t x380 = INT8_MAX;
uint32_t t91 = 118586807U;
int32_t t93 = 104130442;
volatile int16_t x396 = INT16_MIN;
static uint16_t x397 = 0U;
int8_t x404 = INT8_MAX;
uint16_t x408 = 242U;
int64_t x411 = INT64_MIN;
volatile uint64_t x412 = 28428047LLU;


void f0(void) {
	volatile int32_t x2 = 25250;
	uint64_t x3 = 15LLU;
	static volatile int8_t x4 = 2;
	static volatile uint64_t t0 = 372122917501LLU;

	t0 = (x1|(x2^(x3/x4)));

	if (t0 != 25253LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint32_t x6 = 916U;
	int16_t x8 = -1;
	int64_t t1 = -203195798535LL;

	t1 = (x5|(x6^(x7/x8)));

	if (t1 != -1504965304LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 4U;
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 1;

	t2 = (x9|(x10^(x11/x12)));

	if (t2 != -32764) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = 44272591U;
	static volatile uint32_t t3 = 987145545U;

	t3 = (x13|(x14^(x15/x16)));

	if (t3 != 4294942186U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 180390409513LL;
	int32_t x18 = INT32_MAX;
	int8_t x19 = -1;
	uint16_t x20 = 11848U;
	int64_t t4 = 2995591397659LL;

	t4 = (x17|(x18^(x19/x20)));

	if (t4 != 182536110079LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	uint64_t x22 = 1554LLU;
	int32_t x23 = -1;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 14145540LLU;

	t5 = (x21|(x22^(x23/x24)));

	if (t5 != 4294967295LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 85U;
	static uint32_t x26 = 3400456U;
	volatile uint32_t x28 = 14711413U;

	t6 = (x25|(x26^(x27/x28)));

	if (t6 != -626954371713LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	int32_t x30 = 116;
	static volatile int8_t x31 = 1;
	uint16_t x32 = 217U;

	t7 = (x29|(x30^(x31/x32)));

	if (t7 != -2147483532) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = 2U;
	int64_t t8 = 5LL;

	t8 = (x33|(x34^(x35/x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 1143U;
	int64_t x38 = -1LL;
	uint64_t x39 = UINT64_MAX;
	volatile uint64_t t9 = 9107549969887446LLU;

	t9 = (x37|(x38^(x39/x40)));

	if (t9 != 18446744065119617023LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	static volatile int32_t x44 = INT32_MIN;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41|(x42^(x43/x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 31U;
	int16_t x47 = -63;
	int32_t x48 = -1;

	t11 = (x45|(x46^(x47/x48)));

	if (t11 != 440716464U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	uint64_t t12 = 769588761234071688LLU;

	t12 = (x49|(x50^(x51/x52)));

	if (t12 != 18446744073709538467LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = 66190710U;
	static volatile uint8_t x55 = 11U;
	uint8_t x56 = 6U;
	int64_t t13 = 265402028073LL;

	t13 = (x53|(x54^(x55/x56)));

	if (t13 != -9223372036788585097LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -55237397;
	static int32_t x58 = -1;
	volatile int32_t x59 = -1;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -88260652;

	t14 = (x57|(x58^(x59/x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 14999;
	static int16_t x62 = -587;

	t15 = (x61|(x62^(x63/x64)));

	if (t15 != 15095) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1970104777U;
	static uint8_t x67 = 18U;
	uint16_t x68 = 430U;
	uint32_t t16 = 511U;

	t16 = (x65|(x66^(x67/x68)));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	volatile int64_t t17 = 32089678LL;

	t17 = (x69|(x70^(x71/x72)));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	static volatile int64_t x74 = -1LL;
	int64_t x75 = INT64_MIN;
	volatile int64_t t18 = -31715951301LL;

	t18 = (x73|(x74^(x75/x76)));

	if (t18 != 4295032831LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -227962737348175LL;
	static int16_t x78 = -1;
	int8_t x79 = -1;
	volatile int64_t t19 = 118687371288LL;

	t19 = (x77|(x78^(x79/x80)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	static uint16_t x83 = 27U;
	uint8_t x84 = 95U;
	volatile int64_t t20 = 21054796891LL;

	t20 = (x81|(x82^(x83/x84)));

	if (t20 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int16_t x88 = INT16_MIN;
	uint64_t t21 = UINT64_MAX;

	t21 = (x85|(x86^(x87/x88)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = -375464;

	t22 = (x89|(x90^(x91/x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 7U;
	int32_t x94 = -1;
	static uint64_t x95 = 7LLU;
	uint8_t x96 = 54U;
	uint64_t t23 = UINT64_MAX;

	t23 = (x93|(x94^(x95/x96)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = UINT16_MAX;
	static uint64_t x99 = 16709258LLU;

	t24 = (x97|(x98^(x99/x100)));

	if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int64_t x102 = -1548LL;
	static int64_t t25 = 2172LL;

	t25 = (x101|(x102^(x103/x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	static int16_t x108 = 7799;
	static int32_t t26 = 333198830;

	t26 = (x105|(x106^(x107/x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = UINT16_MAX;
	uint8_t x111 = UINT8_MAX;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t27 = 299;

	t27 = (x109|(x110^(x111/x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -3;
	volatile int16_t x114 = INT16_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	int64_t x116 = 8009LL;

	t28 = (x113|(x114^(x115/x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int16_t x118 = -21;
	int8_t x120 = INT8_MIN;
	volatile int64_t t29 = -66885721971LL;

	t29 = (x117|(x118^(x119/x120)));

	if (t29 != -21LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -11812;
	volatile int64_t x122 = INT64_MAX;
	static int16_t x123 = 19;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t30 = -1783LL;

	t30 = (x121|(x122^(x123/x124)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile uint8_t x128 = 16U;
	volatile int64_t t31 = -23297447223LL;

	t31 = (x125|(x126^(x127/x128)));

	if (t31 != -605333946369LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = -480414;

	t32 = (x129|(x130^(x131/x132)));

	if (t32 != -122) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	static volatile int16_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	int64_t x136 = 3873404768920LL;
	volatile uint64_t t33 = 348319195698266LLU;

	t33 = (x133|(x134^(x135/x136)));

	if (t33 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	uint8_t x138 = 1U;
	int64_t x139 = INT64_MAX;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = -1LL;

	t34 = (x137|(x138^(x139/x140)));

	if (t34 != -127LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	volatile int16_t x143 = INT16_MAX;
	int32_t x144 = -1;
	int64_t t35 = -187619621263591777LL;

	t35 = (x141|(x142^(x143/x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 372LLU;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MIN;
	uint64_t t36 = 197390861622971510LLU;

	t36 = (x145|(x146^(x147/x148)));

	if (t36 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = 27LL;
	int64_t t37 = -928038LL;

	t37 = (x153|(x154^(x155/x156)));

	if (t37 != 2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = 75LL;
	int16_t x160 = INT16_MIN;
	volatile int64_t t38 = 32578274LL;

	t38 = (x157|(x158^(x159/x160)));

	if (t38 != -2147450881LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 8086U;
	int64_t x162 = -183LL;
	volatile int8_t x163 = INT8_MIN;
	uint32_t x164 = 1609U;
	int64_t t39 = 861714078179LL;

	t39 = (x161|(x162^(x163/x164)));

	if (t39 != -2662442LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x166 = 71U;
	int32_t x168 = 36;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x165|(x166^(x167/x168)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x170 = 7069;
	uint32_t x171 = 2U;
	static uint64_t t41 = 7017374849719LLU;

	t41 = (x169|(x170^(x171/x172)));

	if (t41 != 9782688701LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x174 = INT16_MIN;
	static uint32_t x175 = 40636U;
	int64_t t42 = INT64_MAX;

	t42 = (x173|(x174^(x175/x176)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	volatile int8_t x180 = INT8_MAX;
	int32_t t43 = 8142036;

	t43 = (x177|(x178^(x179/x180)));

	if (t43 != -12) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	int32_t x183 = -2;
	static int16_t x184 = INT16_MIN;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x181|(x182^(x183/x184)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x185 = UINT16_MAX;
	volatile int32_t x188 = INT32_MIN;

	t45 = (x185|(x186^(x187/x188)));

	if (t45 != 655359LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MAX;
	volatile uint8_t x190 = 7U;
	int64_t x191 = -219986759427842LL;
	int16_t x192 = INT16_MAX;
	volatile int64_t t46 = 814188962831046LL;

	t46 = (x189|(x190^(x191/x192)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = -162;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -1;
	volatile int64_t x196 = -1LL;
	volatile int64_t t47 = 2549LL;

	t47 = (x193|(x194^(x195/x196)));

	if (t47 != -161LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 0;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 1052139340229210LLU;
	uint64_t x200 = 2355LLU;
	volatile uint64_t t48 = 5LLU;

	t48 = (x197|(x198^(x199/x200)));

	if (t48 != 448732383878LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -1;
	int8_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MAX;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x201|(x202^(x203/x204)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x205 = -131516414;
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = 3;
	uint16_t x208 = 1U;
	volatile uint64_t t50 = 923559535615LLU;

	t50 = (x205|(x206^(x207/x208)));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x210 = -1LL;
	int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	static volatile int64_t t51 = -120710LL;

	t51 = (x209|(x210^(x211/x212)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	int8_t x214 = -1;
	static int32_t t52 = -661;

	t52 = (x213|(x214^(x215/x216)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 2U;
	static volatile int16_t x218 = -5;
	int32_t x219 = -1;
	int32_t t53 = -165735;

	t53 = (x217|(x218^(x219/x220)));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x221 = -1LL;
	volatile uint16_t x222 = 82U;
	static int8_t x223 = -1;
	int64_t x224 = INT64_MAX;

	t54 = (x221|(x222^(x223/x224)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -8035061;
	uint8_t x226 = 4U;
	uint64_t t55 = 83278LLU;

	t55 = (x225|(x226^(x227/x228)));

	if (t55 != 18446744073701516559LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int32_t x231 = 59287685;
	static volatile int64_t x232 = INT64_MIN;
	volatile int64_t t56 = -42524375934457687LL;

	t56 = (x229|(x230^(x231/x232)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = -1LL;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MAX;
	static int8_t x236 = 11;
	int64_t t57 = -106815291LL;

	t57 = (x233|(x234^(x235/x236)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x239 = 26;
	int16_t x240 = INT16_MIN;
	volatile int32_t t58 = 28036;

	t58 = (x237|(x238^(x239/x240)));

	if (t58 != 29) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x242 = 415;
	int16_t x243 = INT16_MIN;
	volatile uint8_t x244 = UINT8_MAX;
	volatile uint64_t t59 = 117998393131725LLU;

	t59 = (x241|(x242^(x243/x244)));

	if (t59 != 18446744073709551199LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MAX;
	static uint32_t x246 = 12108U;
	volatile int16_t x247 = INT16_MAX;
	volatile int16_t x248 = INT16_MIN;
	int64_t t60 = INT64_MAX;

	t60 = (x245|(x246^(x247/x248)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -10;
	int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t61 = 41889475235120LLU;

	t61 = (x253|(x254^(x255/x256)));

	if (t61 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = 0;
	int8_t x259 = INT8_MAX;
	uint16_t x260 = 12338U;

	t62 = (x257|(x258^(x259/x260)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -18950238920LL;
	uint32_t x262 = UINT32_MAX;
	volatile uint16_t x263 = 2U;
	int8_t x264 = INT8_MIN;
	static volatile int64_t t63 = -2401348LL;

	t63 = (x261|(x262^(x263/x264)));

	if (t63 != -17179869185LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	static int64_t x266 = INT64_MAX;
	uint8_t x267 = 5U;
	int64_t x268 = INT64_MIN;
	volatile int64_t t64 = 30583725LL;

	t64 = (x265|(x266^(x267/x268)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MIN;
	uint32_t x270 = 12423464U;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = INT16_MIN;
	uint32_t t65 = 5663U;

	t65 = (x269|(x270^(x271/x272)));

	if (t65 != 2159907112U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 0U;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 2069287U;
	int64_t x276 = -1LL;
	volatile int64_t t66 = 13379637LL;

	t66 = (x273|(x274^(x275/x276)));

	if (t66 != 2069337LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x277 = 1U;
	int32_t x279 = -276;
	static int32_t t67 = -237210;

	t67 = (x277|(x278^(x279/x280)));

	if (t67 != 1623) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = INT64_MIN;
	uint32_t x283 = 410U;
	uint64_t x284 = 5453468342238212254LLU;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x281|(x282^(x283/x284)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = 210;
	int16_t x287 = INT16_MAX;
	int64_t x288 = -1LL;
	volatile int64_t t69 = 214434179LL;

	t69 = (x285|(x286^(x287/x288)));

	if (t69 != -32553LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = INT64_MAX;
	static int64_t x291 = INT64_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	static int64_t t70 = 1LL;

	t70 = (x289|(x290^(x291/x292)));

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = INT8_MAX;
	int16_t x294 = -1;
	int32_t x295 = INT32_MIN;

	t71 = (x293|(x294^(x295/x296)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x297 = INT16_MIN;
	uint16_t x298 = UINT16_MAX;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	static volatile uint32_t t72 = 9U;

	t72 = (x297|(x298^(x299/x300)));

	if (t72 != 4294967294U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x303 = 1U;
	static int16_t x304 = INT16_MIN;

	t73 = (x301|(x302^(x303/x304)));

	if (t73 != -106LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 53U;
	static volatile int32_t t74 = 523538;

	t74 = (x305|(x306^(x307/x308)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x311 = 0;
	int64_t x312 = 30224051947818417LL;
	volatile int64_t t75 = -5833994LL;

	t75 = (x309|(x310^(x311/x312)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t76 = 585867;

	t76 = (x313|(x314^(x315/x316)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = INT8_MIN;
	static uint8_t x318 = 18U;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = 437U;
	volatile uint32_t t77 = 256563045U;

	t77 = (x317|(x318^(x319/x320)));

	if (t77 != 4294967187U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x321 = 9;
	int8_t x322 = -1;
	int8_t x323 = INT8_MIN;
	volatile int32_t t78 = 731;

	t78 = (x321|(x322^(x323/x324)));

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 25;
	uint16_t x326 = 17207U;
	int64_t x327 = -1LL;
	int64_t t79 = 1792LL;

	t79 = (x325|(x326^(x327/x328)));

	if (t79 != 17215LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x329 = INT16_MIN;
	static volatile int16_t x330 = 5157;
	volatile uint16_t x331 = 21U;
	volatile int16_t x332 = INT16_MIN;

	t80 = (x329|(x330^(x331/x332)));

	if (t80 != -27611) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = -114;
	volatile uint16_t x334 = 2U;
	int32_t x336 = INT32_MIN;

	t81 = (x333|(x334^(x335/x336)));

	if (t81 != -113LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 35614096378096762LLU;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t82 = 29563720LLU;

	t82 = (x337|(x338^(x339/x340)));

	if (t82 != 35614096378096766LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -34;
	uint8_t x342 = 4U;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;

	t83 = (x341|(x342^(x343/x344)));

	if (t83 != -34LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = INT8_MIN;

	t84 = (x345|(x346^(x347/x348)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x350 = 1U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t85 = -4;

	t85 = (x349|(x350^(x351/x352)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x353 = 8U;
	static int32_t x354 = -7603;
	static uint64_t x355 = UINT64_MAX;
	volatile int16_t x356 = -857;
	static uint64_t t86 = 56756049996913LLU;

	t86 = (x353|(x354^(x355/x356)));

	if (t86 != 18446744073709544012LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x358 = -16492LL;
	int32_t x360 = 251362094;

	t87 = (x357|(x358^(x359/x360)));

	if (t87 != -16492LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = 0U;
	static volatile int16_t x366 = -1;
	static volatile int32_t x367 = 30;
	volatile int8_t x368 = 1;
	int32_t t88 = -32;

	t88 = (x365|(x366^(x367/x368)));

	if (t88 != -31) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	volatile uint64_t x370 = 879LLU;
	int16_t x371 = 13;
	static int16_t x372 = INT16_MIN;
	uint64_t t89 = UINT64_MAX;

	t89 = (x369|(x370^(x371/x372)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x373 = 5717U;
	static int8_t x374 = INT8_MAX;
	int32_t x375 = 9394910;
	uint64_t x376 = UINT64_MAX;
	uint64_t t90 = 7479281LLU;

	t90 = (x373|(x374^(x375/x376)));

	if (t90 != 5759LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x377 = 637097644U;
	int16_t x379 = INT16_MIN;

	t91 = (x377|(x378^(x379/x380)));

	if (t91 != 3053453055U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	volatile uint16_t x384 = 4U;
	volatile uint64_t t92 = 48LLU;

	t92 = (x381|(x382^(x383/x384)));

	if (t92 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = 28;
	static int32_t x386 = -1;
	static int16_t x387 = 1;
	int8_t x388 = INT8_MIN;

	t93 = (x385|(x386^(x387/x388)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x389 = 2576LLU;
	volatile int16_t x390 = -1;
	volatile uint8_t x391 = 0U;
	int32_t x392 = 17;
	uint64_t t94 = UINT64_MAX;

	t94 = (x389|(x390^(x391/x392)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	static int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MAX;
	int64_t t95 = -40829085LL;

	t95 = (x393|(x394^(x395/x396)));

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = 0;
	volatile uint16_t x399 = 10U;
	int16_t x400 = -1180;
	int32_t t96 = -1144;

	t96 = (x397|(x398^(x399/x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x401 = -1;
	uint32_t x402 = 0U;
	uint8_t x403 = 3U;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x401|(x402^(x403/x404)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x405 = INT64_MIN;
	volatile uint32_t x406 = UINT32_MAX;
	uint64_t x407 = 30LLU;
	uint64_t t98 = 233466439881896LLU;

	t98 = (x405|(x406^(x407/x408)));

	if (t98 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 1201726721112903LLU;
	int64_t x410 = INT64_MIN;
	volatile uint64_t t99 = 1609521064196LLU;

	t99 = (x409|(x410^(x411/x412)));

	if (t99 != 9224573802238984055LLU) { NG(); } else { ; }
	
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

