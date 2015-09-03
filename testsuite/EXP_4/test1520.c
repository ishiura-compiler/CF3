#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int32_t t1 = 58553477;
int16_t x14 = INT16_MIN;
int64_t x16 = 19504LL;
static int32_t t3 = 0;
volatile int64_t x21 = INT64_MIN;
int64_t x23 = INT64_MIN;
static volatile int16_t x25 = INT16_MIN;
static int8_t x30 = -1;
uint32_t x34 = UINT32_MAX;
static int8_t x36 = -1;
uint32_t t8 = 6U;
int32_t x40 = INT32_MAX;
static volatile int16_t x45 = -7619;
static int64_t t11 = 697557802LL;
int16_t x51 = INT16_MIN;
int8_t x57 = -1;
volatile uint8_t x59 = UINT8_MAX;
int8_t x62 = 3;
int32_t x63 = INT32_MAX;
uint64_t x64 = UINT64_MAX;
static int8_t x72 = INT8_MIN;
uint64_t t17 = UINT64_MAX;
int32_t x74 = INT32_MIN;
int16_t x76 = INT16_MAX;
int16_t x80 = 4690;
int64_t t19 = 1605LL;
static uint16_t x87 = UINT16_MAX;
int64_t x88 = -1LL;
volatile uint64_t x89 = 23687611072869LLU;
int64_t x90 = INT64_MIN;
uint16_t x91 = 61U;
uint16_t x107 = 208U;
int32_t x111 = 3366;
volatile int32_t t27 = 54305435;
static int32_t x113 = 1;
int64_t x117 = 1LL;
int8_t x122 = 1;
int16_t x123 = INT16_MIN;
static int8_t x124 = 0;
uint32_t t31 = UINT32_MAX;
int16_t x142 = INT16_MIN;
volatile uint64_t t35 = UINT64_MAX;
int8_t x153 = INT8_MIN;
int32_t x155 = INT32_MIN;
static int64_t x163 = -1LL;
volatile int8_t x164 = 9;
int16_t x167 = INT16_MIN;
static uint32_t t41 = 87U;
int32_t x171 = INT32_MIN;
static uint64_t x175 = 430123082615LLU;
volatile int64_t x183 = -1LL;
volatile uint64_t t45 = UINT64_MAX;
int64_t x189 = INT64_MIN;
int16_t x191 = INT16_MIN;
volatile uint32_t x195 = UINT32_MAX;
static uint64_t t48 = 3LLU;
int8_t x208 = INT8_MIN;
int16_t x216 = INT16_MIN;
uint32_t t54 = 7U;
int8_t x222 = INT8_MIN;
volatile int64_t t55 = 2681714LL;
uint32_t x225 = 186659U;
static uint32_t x226 = UINT32_MAX;
uint16_t x227 = UINT16_MAX;
volatile int64_t t57 = 986236LL;
int32_t x236 = INT32_MAX;
int32_t t58 = 132460986;
static int32_t x242 = -45;
uint8_t x258 = 31U;
int32_t x263 = INT32_MIN;
int32_t x267 = INT32_MIN;
static int8_t x270 = INT8_MAX;
int8_t x273 = 47;
uint8_t x284 = UINT8_MAX;
uint64_t x287 = UINT64_MAX;
static int8_t x288 = INT8_MIN;
int32_t t71 = 98;
uint64_t x289 = UINT64_MAX;
volatile int16_t x294 = -1;
int64_t x299 = INT64_MIN;
volatile uint32_t x302 = 101U;
uint8_t x303 = UINT8_MAX;
static int64_t x304 = 1LL;
int64_t x307 = -1LL;
int32_t t76 = 981943;
uint8_t x309 = 3U;
uint8_t x314 = UINT8_MAX;
uint32_t x317 = 91389U;
int32_t x329 = -1;
uint16_t x334 = 14U;
int8_t x343 = INT8_MIN;
int64_t x347 = 3893LL;
int32_t x350 = -235433522;
int32_t x351 = -1;
uint16_t x355 = 57U;
int8_t x361 = INT8_MIN;
uint8_t x363 = 4U;
uint32_t x364 = 99401472U;
int32_t x366 = INT32_MIN;
uint64_t x376 = UINT64_MAX;
volatile int32_t t93 = -280164;
int64_t x377 = INT64_MAX;
uint64_t x379 = 6300627875694LLU;
volatile int16_t x384 = INT16_MAX;
int32_t x388 = INT32_MIN;
volatile int32_t x389 = -158992017;
int32_t x395 = -1;
static int32_t x397 = -1;
int64_t x400 = -1LL;


void f0(void) {
	int32_t x2 = -12;
	int32_t x3 = INT32_MIN;
	static volatile uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -6084;

	t0 = (x1|(x2^(x3<x4)));

	if (t0 != -11) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -2;
	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MAX;
	static int64_t x8 = -1295LL;

	t1 = (x5|(x6^(x7<x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = -1245;
	uint16_t x11 = 23U;
	int8_t x12 = -4;
	static volatile int64_t t2 = 382LL;

	t2 = (x9|(x10^(x11<x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -6;
	int32_t x15 = INT32_MAX;

	t3 = (x13|(x14^(x15<x16)));

	if (t3 != -6) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int16_t x18 = INT16_MAX;
	static int8_t x19 = 1;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -487170;

	t4 = (x17|(x18^(x19<x20)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	volatile int64_t x24 = -1LL;
	volatile int64_t t5 = -2999204469LL;

	t5 = (x21|(x22^(x23<x24)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	static uint8_t x27 = 96U;
	uint64_t x28 = 88802274748544LLU;
	static int32_t t6 = 349;

	t6 = (x25|(x26^(x27<x28)));

	if (t6 != -32642) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int32_t x31 = 2046;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = -3909;

	t7 = (x29|(x30^(x31<x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -52;
	volatile int32_t x35 = INT32_MIN;

	t8 = (x33|(x34^(x35<x36)));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MAX;
	volatile int8_t x39 = 1;
	volatile int32_t t9 = -58802241;

	t9 = (x37|(x38^(x39<x40)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 190;
	int32_t x42 = INT32_MAX;
	volatile int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = 51080412;

	t10 = (x41|(x42^(x43<x44)));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 3138650114LL;
	static int16_t x47 = 381;
	int32_t x48 = INT32_MIN;

	t11 = (x45|(x46^(x47<x48)));

	if (t11 != -7617LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 816880110LLU;
	int8_t x50 = INT8_MAX;
	volatile int64_t x52 = INT64_MIN;
	uint64_t t12 = 836244374126LLU;

	t12 = (x49|(x50^(x51<x52)));

	if (t12 != 816880127LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int64_t x54 = INT64_MIN;
	int32_t x55 = -1;
	int8_t x56 = 28;
	int64_t t13 = 29638298LL;

	t13 = (x53|(x54^(x55<x56)));

	if (t13 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	volatile int32_t x60 = 0;
	volatile int64_t t14 = -1326489090925969010LL;

	t14 = (x57|(x58^(x59<x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	int32_t t15 = 3;

	t15 = (x61|(x62^(x63<x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -2540771LL;
	uint8_t x66 = 0U;
	uint32_t x67 = 15542833U;
	uint16_t x68 = 13592U;
	int64_t t16 = 748LL;

	t16 = (x65|(x66^(x67<x68)));

	if (t16 != -2540771LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint8_t x70 = 6U;
	uint16_t x71 = 14U;

	t17 = (x69|(x70^(x71<x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int16_t x75 = -878;
	static int32_t t18 = -1;

	t18 = (x73|(x74^(x75<x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = -3;

	t19 = (x77|(x78^(x79<x80)));

	if (t19 != -2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -539010500620LL;
	int64_t x82 = -2770465LL;
	int16_t x83 = -2779;
	uint16_t x84 = 131U;
	volatile int64_t t20 = -2733962442892389LL;

	t20 = (x81|(x82^(x83<x84)));

	if (t20 != -131074LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int64_t x86 = -1LL;
	volatile int64_t t21 = -957283LL;

	t21 = (x85|(x86^(x87<x88)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x92 = INT8_MAX;
	uint64_t t22 = 4551020349596579LLU;

	t22 = (x89|(x90^(x91<x92)));

	if (t22 != 9223395724465848677LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = -6;
	int64_t x95 = 3615478373336LL;
	volatile int8_t x96 = INT8_MIN;
	volatile int64_t t23 = 165896111LL;

	t23 = (x93|(x94^(x95<x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint16_t x98 = 59U;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;
	static volatile int64_t t24 = 6575000LL;

	t24 = (x97|(x98^(x99<x100)));

	if (t24 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = 694;
	uint16_t x104 = 26U;
	static int32_t t25 = -1;

	t25 = (x101|(x102^(x103<x104)));

	if (t25 != -32641) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	static int64_t x108 = -1LL;
	int64_t t26 = -7214075416266LL;

	t26 = (x105|(x106^(x107<x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	static int8_t x110 = INT8_MIN;
	volatile int8_t x112 = INT8_MIN;

	t27 = (x109|(x110^(x111<x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	volatile uint16_t x115 = 18U;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t28 = -132380;

	t28 = (x113|(x114^(x115<x116)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -1LL;
	static int8_t x120 = 0;
	static int64_t t29 = -4835LL;

	t29 = (x117|(x118^(x119<x120)));

	if (t29 != -32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 240250U;
	uint32_t t30 = 5926877U;

	t30 = (x121|(x122^(x123<x124)));

	if (t30 != 240250U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static int8_t x126 = 1;
	volatile int64_t x127 = INT64_MIN;
	int64_t x128 = -303LL;

	t31 = (x125|(x126^(x127<x128)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -2LL;
	uint8_t x130 = 72U;
	uint16_t x131 = UINT16_MAX;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int64_t t32 = -703112589874354562LL;

	t32 = (x129|(x130^(x131<x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = 5;
	static volatile int32_t x135 = 18737;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -3;

	t33 = (x133|(x134^(x135<x136)));

	if (t33 != -123) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 0U;
	uint8_t x138 = 104U;
	uint16_t x139 = UINT16_MAX;
	volatile uint8_t x140 = 25U;
	static int32_t t34 = 119898;

	t34 = (x137|(x138^(x139<x140)));

	if (t34 != 104) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int8_t x143 = 1;
	volatile int8_t x144 = INT8_MIN;

	t35 = (x141|(x142^(x143<x144)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 24369140U;
	static uint8_t x147 = UINT8_MAX;
	uint16_t x148 = UINT16_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x145|(x146^(x147<x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	volatile int16_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int32_t x152 = 1753;
	int32_t t37 = -13;

	t37 = (x149|(x150^(x151<x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -28410990063436LL;
	static uint32_t x156 = 29U;
	volatile int64_t t38 = 34070054078231LL;

	t38 = (x153|(x154^(x155<x156)));

	if (t38 != -76LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = 37U;
	int32_t x159 = -1;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -693124;

	t39 = (x157|(x158^(x159<x160)));

	if (t39 != -2147483611) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	int32_t t40 = -25;

	t40 = (x161|(x162^(x163<x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = 57U;
	volatile uint64_t x168 = UINT64_MAX;

	t41 = (x165|(x166^(x167<x168)));

	if (t41 != 2147483704U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 3932721880655276265LLU;
	int64_t x172 = -55532LL;
	volatile uint64_t t42 = 7052229835092776007LLU;

	t42 = (x169|(x170^(x171<x172)));

	if (t42 != 13156093917510052072LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int32_t x174 = -46812776;
	volatile uint8_t x176 = 8U;
	static volatile int64_t t43 = 4292006294224226LL;

	t43 = (x173|(x174^(x175<x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 15U;
	static volatile int16_t x178 = INT16_MIN;
	int64_t x179 = -199709240679LL;
	static volatile int64_t x180 = -1LL;
	int32_t t44 = -11747;

	t44 = (x177|(x178^(x179<x180)));

	if (t44 != -32753) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 19241LLU;
	int32_t x182 = -1;
	int32_t x184 = 0;

	t45 = (x181|(x182^(x183<x184)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 6U;
	uint64_t x188 = 46190498LLU;
	int64_t t46 = 57947064LL;

	t46 = (x185|(x186^(x187<x188)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = 0;
	static int8_t x192 = 0;
	volatile int64_t t47 = -135696246466210714LL;

	t47 = (x189|(x190^(x191<x192)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 239935934590LLU;
	int32_t x194 = 34334;
	uint32_t x196 = UINT32_MAX;

	t48 = (x193|(x194^(x195<x196)));

	if (t48 != 239935936126LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = 3U;
	int64_t x200 = INT64_MAX;
	int64_t t49 = 529990928768749LL;

	t49 = (x197|(x198^(x199<x200)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	static uint64_t x202 = 16742889148002965LLU;
	volatile int32_t x203 = -1;
	uint16_t x204 = 24156U;
	volatile uint64_t t50 = 705879227LLU;

	t50 = (x201|(x202^(x203<x204)));

	if (t50 != 16742889148002965LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = UINT8_MAX;
	int8_t x206 = INT8_MAX;
	uint8_t x207 = 6U;
	volatile int32_t t51 = 22522302;

	t51 = (x205|(x206^(x207<x208)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -1;
	static int8_t x211 = 1;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -185;

	t52 = (x209|(x210^(x211<x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1402462LL;
	int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	static volatile int64_t t53 = -4858486LL;

	t53 = (x213|(x214^(x215<x216)));

	if (t53 != -26205LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	uint32_t x218 = 2U;
	int64_t x219 = INT64_MIN;
	int32_t x220 = 516934498;

	t54 = (x217|(x218^(x219<x220)));

	if (t54 != 4294934531U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -3LL;
	int32_t x223 = 430;
	uint16_t x224 = UINT16_MAX;

	t55 = (x221|(x222^(x223<x224)));

	if (t55 != -3LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x228 = 0U;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x225|(x226^(x227<x228)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 39U;
	static int64_t x230 = -4362236LL;
	volatile uint16_t x231 = UINT16_MAX;
	int64_t x232 = 22LL;

	t57 = (x229|(x230^(x231<x232)));

	if (t57 != -4362201LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 12061U;
	int16_t x234 = INT16_MAX;
	static uint16_t x235 = UINT16_MAX;

	t58 = (x233|(x234^(x235<x236)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 17651U;
	volatile uint16_t x238 = 3U;
	uint64_t x239 = 0LLU;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -16978401;

	t59 = (x237|(x238^(x239<x240)));

	if (t59 != 17651) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	uint16_t x243 = 1U;
	int8_t x244 = 1;
	volatile int32_t t60 = -2015920;

	t60 = (x241|(x242^(x243<x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -119059LL;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	int32_t x248 = -1;
	volatile int64_t t61 = 92103746104LL;

	t61 = (x245|(x246^(x247<x248)));

	if (t61 != -19LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 2885981273434892LLU;
	uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 4U;
	int8_t x252 = -1;
	static volatile uint64_t t62 = 22594791897135LLU;

	t62 = (x249|(x250^(x251<x252)));

	if (t62 != 2885981273456639LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = -1;
	static uint32_t x254 = 42U;
	int8_t x255 = -6;
	volatile uint16_t x256 = 113U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x253|(x254^(x255<x256)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 23312277U;
	uint8_t x259 = 20U;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t64 = 4U;

	t64 = (x257|(x258^(x259<x260)));

	if (t64 != 23312287U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	int64_t t65 = -551195852566889463LL;

	t65 = (x261|(x262^(x263<x264)));

	if (t65 != -2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	volatile uint32_t x266 = 10773U;
	int32_t x268 = 262;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x265|(x266^(x267<x268)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = 39;
	uint8_t x271 = UINT8_MAX;
	uint8_t x272 = 7U;
	volatile int32_t t67 = 100;

	t67 = (x269|(x270^(x271<x272)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = UINT16_MAX;
	static int8_t x275 = 9;
	static volatile int8_t x276 = INT8_MIN;
	int32_t t68 = 3138;

	t68 = (x273|(x274^(x275<x276)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile uint16_t x280 = 53U;
	uint32_t t69 = UINT32_MAX;

	t69 = (x277|(x278^(x279<x280)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	uint8_t x282 = 0U;
	int64_t x283 = -5383259LL;
	volatile int32_t t70 = 921537072;

	t70 = (x281|(x282^(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = INT8_MAX;
	int16_t x286 = INT16_MAX;

	t71 = (x285|(x286^(x287<x288)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x290 = 699U;
	static int8_t x291 = -7;
	int8_t x292 = -1;
	uint64_t t72 = UINT64_MAX;

	t72 = (x289|(x290^(x291<x292)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 3971LL;
	uint32_t x295 = 7556449U;
	int32_t x296 = INT32_MIN;
	int64_t t73 = 139354880514LL;

	t73 = (x293|(x294^(x295<x296)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 5U;
	int64_t x298 = INT64_MAX;
	volatile uint32_t x300 = 1U;
	int64_t t74 = INT64_MAX;

	t74 = (x297|(x298^(x299<x300)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint32_t t75 = 1192324745U;

	t75 = (x301|(x302^(x303<x304)));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = UINT8_MAX;
	int64_t x308 = INT64_MIN;

	t76 = (x305|(x306^(x307<x308)));

	if (t76 != -32513) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x310 = -7632998;
	static int16_t x311 = INT16_MAX;
	uint8_t x312 = 8U;
	int32_t t77 = 25503;

	t77 = (x309|(x310^(x311<x312)));

	if (t77 != -7632997) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x313 = 5931U;
	int16_t x315 = -1;
	static int64_t x316 = INT64_MAX;
	volatile int32_t t78 = 525054306;

	t78 = (x313|(x314^(x315<x316)));

	if (t78 != 6143) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	int64_t x319 = 6379521616394065LL;
	static int64_t x320 = INT64_MAX;
	int64_t t79 = -7213697825509473LL;

	t79 = (x317|(x318^(x319<x320)));

	if (t79 != -9223372036854684419LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 0U;
	int32_t t80 = -930567;

	t80 = (x321|(x322^(x323<x324)));

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 1709809576U;
	uint8_t x327 = UINT8_MAX;
	uint8_t x328 = UINT8_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (x325|(x326^(x327<x328)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MAX;
	int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 5;

	t82 = (x329|(x330^(x331<x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 1058609U;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = INT8_MIN;
	static volatile uint32_t t83 = 11732713U;

	t83 = (x333|(x334^(x335<x336)));

	if (t83 != 1058623U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -5507447095LL;
	int64_t x338 = INT64_MIN;
	int64_t x339 = -8346619152LL;
	static uint32_t x340 = UINT32_MAX;
	int64_t t84 = 13160LL;

	t84 = (x337|(x338^(x339<x340)));

	if (t84 != -5507447095LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static uint64_t x342 = UINT64_MAX;
	static int32_t x344 = INT32_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x341|(x342^(x343<x344)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	volatile int32_t x346 = 1471;
	volatile uint8_t x348 = 1U;
	int32_t t86 = -14813;

	t86 = (x345|(x346^(x347<x348)));

	if (t86 != -65) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = UINT64_MAX;
	int16_t x352 = INT16_MAX;
	static uint64_t t87 = UINT64_MAX;

	t87 = (x349|(x350^(x351<x352)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -1;
	int64_t x354 = -271582644160LL;
	uint64_t x356 = UINT64_MAX;
	int64_t t88 = -74915610617842948LL;

	t88 = (x353|(x354^(x355<x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x358 = 160U;
	uint16_t x359 = 34U;
	volatile int64_t x360 = -1LL;
	int32_t t89 = 5179;

	t89 = (x357|(x358^(x359<x360)));

	if (t89 != -2147483488) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x362 = 35U;
	volatile int32_t t90 = -163144;

	t90 = (x361|(x362^(x363<x364)));

	if (t90 != -94) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 2U;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 18537612LLU;
	static int32_t t91 = 1;

	t91 = (x365|(x366^(x367<x368)));

	if (t91 != -2147483646) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	volatile int8_t x370 = INT8_MIN;
	uint32_t x371 = 6U;
	uint16_t x372 = 1383U;
	static volatile int32_t t92 = 9871718;

	t92 = (x369|(x370^(x371<x372)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 8U;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = 2807274743066796350LLU;

	t93 = (x373|(x374^(x375<x376)));

	if (t93 != -32759) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = 34;
	uint8_t x380 = 2U;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x377|(x378^(x379<x380)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = 1;
	int64_t x382 = INT64_MIN;
	int16_t x383 = 1;
	int64_t t95 = -3804416473943059LL;

	t95 = (x381|(x382^(x383<x384)));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	static int32_t x386 = INT32_MAX;
	uint32_t x387 = 2U;
	static volatile int32_t t96 = -218701;

	t96 = (x385|(x386^(x387<x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 65U;
	static uint16_t x391 = UINT16_MAX;
	int16_t x392 = -322;
	volatile int32_t t97 = -6869896;

	t97 = (x389|(x390^(x391<x392)));

	if (t97 != -158992017) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -14;
	int32_t x394 = 16945;
	uint8_t x396 = 18U;
	volatile int32_t t98 = -1003990;

	t98 = (x393|(x394^(x395<x396)));

	if (t98 != -14) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 1411U;
	int32_t t99 = 51525;

	t99 = (x397|(x398^(x399<x400)));

	if (t99 != -1) { NG(); } else { ; }
	
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

