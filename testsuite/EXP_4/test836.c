#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = -1LL;
int8_t x11 = INT8_MAX;
static int32_t x16 = INT32_MIN;
int64_t t3 = 2LL;
int64_t x24 = 487LL;
int16_t x26 = INT16_MAX;
uint16_t x30 = 20U;
int64_t x34 = INT64_MIN;
volatile int8_t x37 = INT8_MIN;
static volatile int32_t t10 = 419;
volatile uint32_t x48 = 3U;
volatile int64_t t12 = 16360046613714LL;
int64_t x53 = -1LL;
uint16_t x57 = 949U;
static int64_t x59 = INT64_MIN;
static volatile uint8_t x67 = 17U;
static uint64_t t17 = 2LLU;
uint16_t x75 = 4231U;
int8_t x81 = INT8_MIN;
int64_t x96 = -22032715974LL;
static int64_t t23 = 115620186456366133LL;
int8_t x97 = -4;
static volatile int16_t x111 = -256;
int64_t x116 = INT64_MIN;
int16_t x118 = INT16_MIN;
volatile int32_t x127 = -66315;
volatile int64_t t32 = -16583537540820LL;
static int16_t x135 = INT16_MIN;
uint32_t x139 = 5674715U;
static int64_t x141 = INT64_MIN;
volatile int8_t x144 = INT8_MIN;
uint16_t x147 = 15729U;
int32_t x159 = INT32_MIN;
int64_t x161 = -1LL;
volatile uint16_t x166 = UINT16_MAX;
int32_t x167 = 181;
uint32_t x168 = UINT32_MAX;
int64_t x169 = -446LL;
int64_t t42 = 412978755218922351LL;
volatile uint32_t x178 = 363927U;
static volatile uint64_t t44 = 22467723653LLU;
volatile int64_t t45 = 5200LL;
volatile int32_t t46 = 23678;
volatile int64_t t47 = 590223LL;
static int64_t x194 = INT64_MIN;
static uint16_t x201 = 6790U;
static uint32_t x202 = 113108U;
static volatile int8_t x206 = INT8_MAX;
int64_t x215 = 8414671360662744LL;
int32_t x216 = INT32_MIN;
int32_t x217 = 38;
uint8_t x219 = 4U;
int64_t x223 = INT64_MIN;
int8_t x226 = INT8_MIN;
uint64_t t57 = 8717244520446394LLU;
static uint64_t x239 = 144717LLU;
static volatile int32_t x241 = INT32_MAX;
uint8_t x242 = 4U;
int64_t x243 = 229183LL;
volatile int32_t x249 = INT32_MAX;
static volatile uint16_t x256 = 2654U;
int32_t t62 = 45756697;
uint64_t x279 = 6074690731272LLU;
static volatile uint16_t x281 = UINT16_MAX;
volatile int64_t t70 = 2021557192317787368LL;
int8_t x293 = INT8_MIN;
uint64_t t71 = 1025501891582416LLU;
int8_t x300 = INT8_MIN;
static int64_t x307 = -1LL;
static int64_t t73 = -55765054LL;
int64_t x311 = -18369858756026817LL;
int32_t x316 = INT32_MIN;
volatile uint32_t x322 = UINT32_MAX;
volatile uint64_t t79 = 976LLU;
uint64_t x338 = 9041096355981LLU;
int16_t x346 = INT16_MIN;
uint32_t x351 = 128628841U;
static volatile int8_t x359 = INT8_MAX;
int64_t x361 = INT64_MIN;
int32_t x368 = 1377;
volatile int16_t x369 = INT16_MIN;
uint64_t t89 = 22737321388LLU;
static volatile int32_t x383 = -19995;
static int64_t t93 = -18688705658329879LL;
int16_t x392 = INT16_MIN;
volatile int64_t t95 = 1300LL;
uint8_t x398 = 1U;
volatile int64_t x401 = INT64_MIN;
static int8_t x402 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
static int16_t x411 = 1;
static int16_t x412 = INT16_MIN;


void f0(void) {
	volatile int32_t x1 = -16817;
	int32_t x2 = INT32_MAX;
	static uint32_t x3 = 7U;
	int32_t x4 = INT32_MAX;
	uint32_t t0 = 46299U;

	t0 = (x1/(x2^(x3%x4)));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -120;
	int32_t x7 = INT32_MAX;
	volatile int32_t x8 = 48549;
	int32_t t1 = 42516499;

	t1 = (x5/(x6^(x7%x8)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 14902513764LLU;
	volatile int16_t x12 = -1;
	volatile uint64_t t2 = 12837237863620944LLU;

	t2 = (x9/(x10^(x11%x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int64_t x14 = INT64_MIN;
	volatile int16_t x15 = INT16_MIN;

	t3 = (x13/(x14^(x15%x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 82852LLU;
	volatile int64_t x20 = INT64_MAX;
	volatile uint64_t t4 = 493034000281071589LLU;

	t4 = (x17/(x18^(x19%x20)));

	if (t4 != 227774137499963LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 33U;
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int64_t t5 = -232332061730049LL;

	t5 = (x21/(x22^(x23%x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	static uint32_t x27 = UINT32_MAX;
	volatile int64_t x28 = INT64_MAX;
	volatile int64_t t6 = -281773813777378LL;

	t6 = (x25/(x26^(x27%x28)));

	if (t6 != 2147500032LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1368;
	int16_t x31 = -154;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -209;

	t7 = (x29/(x30^(x31%x32)));

	if (t7 != 9) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 35U;
	uint16_t x35 = 0U;
	int64_t x36 = -7958LL;
	volatile int64_t t8 = -11LL;

	t8 = (x33/(x34^(x35%x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = 4U;
	static volatile uint64_t x39 = 1223632LLU;
	volatile int32_t x40 = 60;
	uint64_t t9 = 1906928548LLU;

	t9 = (x37/(x38^(x39%x40)));

	if (t9 != 384307168202282322LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -14033;
	int16_t x42 = INT16_MIN;
	int32_t x43 = 314197;
	static volatile uint16_t x44 = 2249U;

	t10 = (x41/(x42^(x43%x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 20LL;
	static int64_t x46 = -63382LL;
	uint64_t x47 = 25604LLU;
	uint64_t t11 = 3182396907259933LLU;

	t11 = (x45/(x46^(x47%x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 34067707;
	int64_t x50 = INT64_MIN;
	volatile uint16_t x51 = 4611U;
	static uint32_t x52 = UINT32_MAX;

	t12 = (x49/(x50^(x51%x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = UINT16_MAX;
	static uint64_t x55 = 271832452904LLU;
	volatile int8_t x56 = 1;
	volatile uint64_t t13 = 14370586396LLU;

	t13 = (x53/(x54^(x55%x56)));

	if (t13 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	static uint64_t x60 = UINT64_MAX;
	static uint64_t t14 = 1143463LLU;

	t14 = (x57/(x58^(x59%x60)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = -7LL;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	int64_t t15 = 470LL;

	t15 = (x61/(x62^(x63%x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = INT64_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t16 = -1LL;

	t16 = (x65/(x66^(x67%x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = 2339;
	int64_t x71 = -11631322183126LL;
	int16_t x72 = -49;

	t17 = (x69/(x70^(x71%x72)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 3;
	volatile uint8_t x74 = 99U;
	static uint16_t x76 = 15U;
	volatile int32_t t18 = 4;

	t18 = (x73/(x74^(x75%x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	volatile int64_t x78 = -918877LL;
	int16_t x79 = 12931;
	int32_t x80 = INT32_MIN;
	volatile int64_t t19 = 97295264206675054LL;

	t19 = (x77/(x78^(x79%x80)));

	if (t19 != 2304LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x82 = 275U;
	int16_t x83 = INT16_MAX;
	volatile int32_t x84 = -107;
	int32_t t20 = 887;

	t20 = (x81/(x82^(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -461582692;
	static int16_t x86 = 217;
	uint64_t x87 = 1284083552962LLU;
	int16_t x88 = -247;
	uint64_t t21 = 320LLU;

	t21 = (x85/(x86^(x87%x88)));

	if (t21 != 14365688LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int8_t x90 = -1;
	int32_t x91 = INT32_MAX;
	static int8_t x92 = 51;
	int32_t t22 = -978;

	t22 = (x89/(x90^(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MAX;
	uint16_t x95 = 2803U;

	t23 = (x93/(x94^(x95%x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MIN;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = 38046565477185471LL;
	volatile int64_t t24 = -4437668828626067LL;

	t24 = (x97/(x98^(x99%x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 3130U;
	volatile int32_t x102 = INT32_MAX;
	static uint32_t x103 = 41807U;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 929033405258859LL;

	t25 = (x101/(x102^(x103%x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -6;
	int16_t x106 = INT16_MAX;
	int32_t x107 = -56291;
	volatile int64_t x108 = -1LL;
	volatile int64_t t26 = 180966484LL;

	t26 = (x105/(x106^(x107%x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = -1;
	int16_t x112 = 23;
	int32_t t27 = 61263309;

	t27 = (x109/(x110^(x111%x112)));

	if (t27 != -1073741824) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint8_t x114 = 34U;
	uint64_t x115 = UINT64_MAX;
	uint64_t t28 = 165LLU;

	t28 = (x113/(x114^(x115%x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 304359933LL;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = INT8_MIN;
	volatile int64_t t29 = 177302638302355028LL;

	t29 = (x117/(x118^(x119%x120)));

	if (t29 != -9288LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 1940U;
	int16_t x122 = INT16_MAX;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 25U;
	static uint32_t t30 = 266716U;

	t30 = (x121/(x122^(x123%x124)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 0;
	static int8_t x126 = INT8_MAX;
	uint16_t x128 = UINT16_MAX;
	static volatile int32_t t31 = 171;

	t31 = (x125/(x126^(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -2409214723914364575LL;
	int64_t x130 = -1LL;
	uint16_t x131 = UINT16_MAX;
	int16_t x132 = 2;

	t32 = (x129/(x130^(x131%x132)));

	if (t32 != 1204607361957182287LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x133 = 2471U;
	uint16_t x134 = 464U;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 146449063;

	t33 = (x133/(x134^(x135%x136)));

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	static volatile int16_t x138 = -1;
	static uint64_t x140 = 58870606821760LLU;
	uint64_t t34 = 476LLU;

	t34 = (x137/(x138^(x139%x140)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 80U;
	volatile int16_t x143 = -1;
	volatile int64_t t35 = 376035221LL;

	t35 = (x141/(x142^(x143%x144)));

	if (t35 != 113868790578454022LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1727642LLU;
	int64_t x146 = -1LL;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t36 = 4731379LLU;

	t36 = (x145/(x146^(x147%x148)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	uint64_t x150 = 271168901364406LLU;
	static int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	uint64_t t37 = 1788219LLU;

	t37 = (x149/(x150^(x151%x152)));

	if (t37 != 68026LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint8_t x154 = 1U;
	int32_t x155 = 8756613;
	volatile int64_t x156 = INT64_MAX;
	int64_t t38 = 22488715287LL;

	t38 = (x153/(x154^(x155%x156)));

	if (t38 != -245LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static int32_t x158 = INT32_MIN;
	int8_t x160 = -6;
	uint64_t t39 = 91231LLU;

	t39 = (x157/(x158^(x159%x160)));

	if (t39 != 8589934600LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MAX;
	int16_t x164 = -1;
	int64_t t40 = -260059475206700689LL;

	t40 = (x161/(x162^(x163%x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	static uint32_t t41 = 56127288U;

	t41 = (x165/(x166^(x167%x168)));

	if (t41 != 32859U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = 18U;
	uint32_t x171 = 9379509U;
	uint16_t x172 = UINT16_MAX;

	t42 = (x169/(x170^(x171%x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 0U;
	int64_t x174 = 761197604829564978LL;
	int16_t x175 = 12;
	volatile uint64_t x176 = 188576045525947594LLU;
	volatile uint64_t t43 = 43LLU;

	t43 = (x173/(x174^(x175%x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int64_t x179 = -695098570212987LL;
	uint64_t x180 = UINT64_MAX;

	t44 = (x177/(x178^(x179%x180)));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 3U;
	uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 8U;
	int64_t x184 = INT64_MIN;

	t45 = (x181/(x182^(x183%x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 0U;
	uint16_t x186 = UINT16_MAX;
	static int8_t x187 = -1;
	volatile uint16_t x188 = 12U;

	t46 = (x185/(x186^(x187%x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = -1LL;
	uint16_t x191 = 6U;
	volatile int64_t x192 = -1LL;

	t47 = (x189/(x190^(x191%x192)));

	if (t47 != -32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x195 = -314LL;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -764589149563615LL;

	t48 = (x193/(x194^(x195%x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	int32_t x199 = 1;
	int16_t x200 = -1;
	int64_t t49 = -46581803LL;

	t49 = (x197/(x198^(x199%x200)));

	if (t49 != 281474976710656LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x203 = -1;
	volatile int64_t x204 = 6482LL;
	volatile int64_t t50 = 92LL;

	t50 = (x201/(x202^(x203%x204)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 24;
	int64_t x207 = -1LL;
	uint64_t x208 = 261401102LLU;
	volatile uint64_t t51 = 65428933LLU;

	t51 = (x205/(x206^(x207%x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 523345195LLU;
	static uint64_t x210 = UINT64_MAX;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MAX;
	uint64_t t52 = 989819785104266LLU;

	t52 = (x209/(x210^(x211%x212)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	volatile uint8_t x214 = 37U;
	int64_t t53 = 8LL;

	t53 = (x213/(x214^(x215%x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	int16_t x220 = -11704;
	volatile int32_t t54 = 95427;

	t54 = (x217/(x218^(x219%x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -3930LL;
	uint16_t x222 = 1066U;
	int64_t x224 = 7LL;
	int64_t t55 = 653073866239840559LL;

	t55 = (x221/(x222^(x223%x224)));

	if (t55 != 3LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 2278U;
	uint8_t x227 = 30U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 2540;

	t56 = (x225/(x226^(x227%x228)));

	if (t56 != -23) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 35U;
	uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 1U;
	int64_t x236 = INT64_MIN;

	t57 = (x233/(x234^(x235%x236)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MAX;
	int8_t x240 = INT8_MAX;
	volatile uint64_t t58 = 43689342619LLU;

	t58 = (x237/(x238^(x239%x240)));

	if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x244 = INT64_MAX;
	volatile int64_t t59 = 1816819906LL;

	t59 = (x241/(x242^(x243%x244)));

	if (t59 != 9370LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = 7;
	volatile int8_t x246 = 1;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	int64_t t60 = 5LL;

	t60 = (x245/(x246^(x247%x248)));

	if (t60 != -3LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = 61189165930LL;
	volatile uint8_t x251 = 12U;
	int16_t x252 = -1;
	int64_t t61 = -16914LL;

	t61 = (x249/(x250^(x251%x252)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 90U;
	int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MIN;

	t62 = (x253/(x254^(x255%x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -10347;
	uint8_t x262 = 4U;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 76035989;

	t63 = (x261/(x262^(x263%x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -103;
	int32_t x266 = -643509403;
	volatile uint8_t x267 = 82U;
	int32_t x268 = 1037003359;
	volatile int32_t t64 = 188594150;

	t64 = (x265/(x266^(x267%x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static volatile int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	volatile uint64_t x272 = 43720LLU;
	volatile uint64_t t65 = 53975418373669289LLU;

	t65 = (x269/(x270^(x271%x272)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = 15;
	int16_t x274 = -1;
	int64_t x275 = INT64_MIN;
	volatile uint16_t x276 = 10U;
	volatile int64_t t66 = -3164735492171303LL;

	t66 = (x273/(x274^(x275%x276)));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 3U;
	int8_t x278 = -1;
	uint64_t x280 = UINT64_MAX;
	static volatile uint64_t t67 = 15213LLU;

	t67 = (x277/(x278^(x279%x280)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x282 = -1;
	volatile int64_t x283 = INT64_MAX;
	uint64_t x284 = 6823762470853LLU;
	uint64_t t68 = 5LLU;

	t68 = (x281/(x282^(x283%x284)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = 3394;
	uint64_t x286 = UINT64_MAX;
	static uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 6U;
	volatile uint64_t t69 = 5641LLU;

	t69 = (x285/(x286^(x287%x288)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 111U;
	int64_t x290 = -16LL;
	volatile int8_t x291 = -13;
	int32_t x292 = INT32_MIN;

	t70 = (x289/(x290^(x291%x292)));

	if (t70 != 37LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 132522488162311LLU;
	int64_t x295 = 404649843344LL;
	int8_t x296 = 53;

	t71 = (x293/(x294^(x295%x296)));

	if (t71 != 139197LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -194LL;
	volatile uint64_t x299 = 309348877LLU;
	uint64_t t72 = 1486LLU;

	t72 = (x297/(x298^(x299%x300)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x305 = INT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	static uint32_t x308 = UINT32_MAX;

	t73 = (x305/(x306^(x307%x308)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	static int8_t x312 = INT8_MIN;
	int64_t t74 = 32818572LL;

	t74 = (x309/(x310^(x311%x312)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x314 = -1103;
	int64_t x315 = -1LL;
	int64_t t75 = -4973885458897LL;

	t75 = (x313/(x314^(x315%x316)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	int8_t x318 = 1;
	int64_t x319 = INT64_MAX;
	int8_t x320 = INT8_MIN;
	volatile int64_t t76 = -25LL;

	t76 = (x317/(x318^(x319%x320)));

	if (t76 != -73201365371863300LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	int8_t x323 = INT8_MAX;
	static volatile int32_t x324 = INT32_MIN;
	volatile int64_t t77 = -75966535887369354LL;

	t77 = (x321/(x322^(x323%x324)));

	if (t77 != -2147483712LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = 9338;
	static int64_t x326 = -3LL;
	int64_t x327 = 296702500733420005LL;
	volatile int64_t x328 = 9981LL;
	int64_t t78 = 2914725399LL;

	t78 = (x325/(x326^(x327%x328)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	uint64_t x330 = 6488607439025LLU;
	int8_t x331 = INT8_MIN;
	volatile int64_t x332 = -636233476967389LL;

	t79 = (x329/(x330^(x331%x332)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x333 = 80U;
	int64_t x334 = 7201LL;
	static uint16_t x335 = UINT16_MAX;
	uint8_t x336 = UINT8_MAX;
	int64_t t80 = -29635462978806127LL;

	t80 = (x333/(x334^(x335%x336)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = 8363;
	uint64_t x339 = 873686349721658LLU;
	volatile int8_t x340 = 7;
	uint64_t t81 = 591020695955096LLU;

	t81 = (x337/(x338^(x339%x340)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = UINT16_MAX;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = -1LL;
	static int16_t x344 = INT16_MIN;
	static volatile int64_t t82 = -488650193468LL;

	t82 = (x341/(x342^(x343%x344)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x345 = -1;
	uint32_t x347 = 3U;
	volatile int8_t x348 = INT8_MIN;
	volatile uint32_t t83 = 1765U;

	t83 = (x345/(x346^(x347%x348)));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = -1074804599154318LL;
	int16_t x350 = -1;
	uint64_t x352 = 14935LLU;
	volatile uint64_t t84 = 3308937082LLU;

	t84 = (x349/(x350^(x351%x352)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = 4U;
	static uint64_t x355 = 37408235778LLU;
	int16_t x356 = INT16_MAX;
	volatile uint64_t t85 = 64293LLU;

	t85 = (x353/(x354^(x355%x356)));

	if (t85 != 941496660621756LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MIN;
	int16_t x360 = 8490;
	static volatile int32_t t86 = 149255847;

	t86 = (x357/(x358^(x359%x360)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = 0;
	int8_t x363 = INT8_MIN;
	uint64_t x364 = 17096203909647258LLU;
	volatile uint64_t t87 = 3531606909592476LLU;

	t87 = (x361/(x362^(x363%x364)));

	if (t87 != 541LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = 9247U;
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	int64_t t88 = 192461760938LL;

	t88 = (x365/(x366^(x367%x368)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x370 = 16803620LLU;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;

	t89 = (x369/(x370^(x371%x372)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -1;
	int64_t x376 = -1758187998682843LL;
	volatile int64_t t90 = -4222735255657719083LL;

	t90 = (x373/(x374^(x375%x376)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	static uint64_t x378 = 177913LLU;
	volatile uint32_t x379 = 8U;
	uint8_t x380 = 42U;
	volatile uint64_t t91 = 109015032379LLU;

	t91 = (x377/(x378^(x379%x380)));

	if (t91 != 103688733164945LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	volatile uint16_t x382 = 627U;
	uint32_t x384 = 242U;
	volatile uint32_t t92 = 0U;

	t92 = (x381/(x382^(x383%x384)));

	if (t92 != 6905091U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x385 = INT16_MIN;
	volatile int16_t x386 = INT16_MAX;
	static int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MIN;

	t93 = (x385/(x386^(x387%x388)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = -7;
	static int64_t x390 = INT64_MAX;
	uint32_t x391 = UINT32_MAX;
	int64_t t94 = -35057408LL;

	t94 = (x389/(x390^(x391%x392)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = 1;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = 0;
	int64_t x396 = -1LL;

	t95 = (x393/(x394^(x395%x396)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 21LLU;
	uint16_t x399 = 1545U;
	int16_t x400 = INT16_MIN;
	static uint64_t t96 = 33325736630LLU;

	t96 = (x397/(x398^(x399%x400)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x404 = INT32_MIN;
	static int64_t t97 = 16160894595372719LL;

	t97 = (x401/(x402^(x403%x404)));

	if (t97 != -4294967042LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x405 = 6625U;
	uint32_t x406 = 19277582U;
	int8_t x407 = INT8_MAX;
	volatile int64_t x408 = INT64_MAX;
	volatile int64_t t98 = 2026104181801LL;

	t98 = (x405/(x406^(x407%x408)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = 6090461;
	volatile int16_t x410 = -1;
	int32_t t99 = -30;

	t99 = (x409/(x410^(x411%x412)));

	if (t99 != -3045230) { NG(); } else { ; }
	
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

