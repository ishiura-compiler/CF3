#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -337527352;
int64_t x5 = -1LL;
uint32_t x7 = UINT32_MAX;
static int64_t t1 = -101521101150225978LL;
volatile uint64_t x9 = UINT64_MAX;
volatile uint64_t t2 = UINT64_MAX;
uint8_t x16 = 20U;
int8_t x17 = INT8_MIN;
uint8_t x19 = UINT8_MAX;
volatile int32_t t4 = 3338;
static int8_t x24 = INT8_MIN;
int8_t x26 = 15;
volatile int32_t t6 = -1;
int16_t x31 = -1;
static int8_t x33 = INT8_MAX;
volatile int8_t x38 = INT8_MIN;
int64_t x42 = 64323529096575605LL;
uint32_t x43 = 7000U;
uint32_t x56 = 343524280U;
int16_t x58 = 1;
int64_t x59 = 13578207729752LL;
uint16_t x60 = UINT16_MAX;
static int64_t t12 = 217344993724LL;
uint32_t x67 = UINT32_MAX;
uint8_t x70 = 63U;
int32_t t15 = -3;
static int32_t x73 = -27084;
static int8_t x74 = -1;
int16_t x81 = 0;
uint64_t x83 = UINT64_MAX;
volatile uint64_t t18 = 7331LLU;
int32_t x87 = INT32_MIN;
static uint32_t t19 = 581431002U;
int32_t x89 = -1;
volatile uint32_t t20 = UINT32_MAX;
int64_t x93 = INT64_MIN;
uint16_t x94 = 1989U;
uint64_t x96 = 708429LLU;
static int64_t x97 = -15LL;
uint8_t x99 = 4U;
uint32_t t26 = 1U;
volatile int32_t x119 = 485;
volatile int32_t t29 = -28243498;
volatile int8_t x132 = INT8_MIN;
static volatile uint32_t t31 = UINT32_MAX;
uint8_t x144 = 5U;
static uint64_t t32 = 379629LLU;
uint64_t x147 = 895986359LLU;
int32_t x166 = 9331;
volatile uint64_t t36 = 3708LLU;
int16_t x179 = INT16_MAX;
uint64_t t37 = 1273629LLU;
int16_t x183 = INT16_MIN;
int64_t x184 = 26574056285246901LL;
int64_t x189 = INT64_MAX;
uint32_t x194 = 4291057U;
volatile uint64_t x197 = 604LLU;
uint32_t x201 = UINT32_MAX;
int16_t x211 = -96;
volatile uint16_t x212 = 21688U;
int32_t t45 = 335;
volatile int64_t x218 = INT64_MAX;
int16_t x220 = -1;
static uint64_t t47 = 1612730791145LLU;
int32_t x222 = -1;
int64_t x227 = -171LL;
uint16_t x233 = 1010U;
static int32_t x242 = INT32_MIN;
int16_t x244 = INT16_MAX;
uint16_t x245 = 6215U;
int64_t x247 = -1LL;
int64_t x252 = -139746607702437LL;
int32_t x260 = INT32_MIN;
static uint64_t t57 = 0LLU;
int8_t x282 = -1;
int16_t x285 = INT16_MAX;
volatile uint32_t t62 = 426U;
volatile uint64_t x293 = 29643317250665951LLU;
int16_t x294 = INT16_MIN;
volatile uint64_t x312 = UINT64_MAX;
static uint64_t t66 = UINT64_MAX;
static int16_t x315 = 49;
int64_t t70 = -266431933LL;
uint32_t x329 = UINT32_MAX;
int8_t x331 = INT8_MAX;
static volatile uint16_t x332 = 61U;
static uint32_t x335 = 379U;
volatile uint32_t t72 = 24U;
uint8_t x347 = 7U;
int16_t x349 = -1;
static int32_t x352 = -1;
static int64_t x353 = INT64_MIN;
int16_t x357 = INT16_MIN;
int64_t x360 = -44201648717600LL;
int64_t t77 = -8069LL;
uint16_t x367 = UINT16_MAX;
static int16_t x370 = 5703;
int32_t x374 = -37235;
static uint16_t x383 = UINT16_MAX;
int16_t x384 = INT16_MAX;
static volatile int32_t x387 = -1;
static uint16_t x396 = UINT16_MAX;
volatile int8_t x400 = INT8_MIN;
int32_t t86 = -11685;
volatile uint8_t x413 = 1U;
volatile int64_t x417 = INT64_MIN;
static int32_t x418 = INT32_MAX;
volatile int8_t x425 = INT8_MAX;
int32_t x433 = INT32_MAX;
volatile int64_t t98 = 363522753944095052LL;
static int16_t x456 = 232;
volatile int64_t t99 = 331708LL;


void f0(void) {
	int8_t x1 = -6;
	static int8_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int8_t x4 = 24;

	t0 = (x1|(x2/(x3+x4)));

	if (t0 != -6) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -1;
	volatile int8_t x8 = -1;

	t1 = (x5|(x6/(x7+x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int16_t x11 = -1;
	int64_t x12 = -1LL;

	t2 = (x9|(x10/(x11+x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = 2U;
	static int8_t x15 = 1;
	volatile uint32_t t3 = 192723365U;

	t3 = (x13|(x14/(x15+x16)));

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = INT32_MIN;
	int8_t x20 = INT8_MAX;

	t4 = (x17|(x18/(x19+x20)));

	if (t4 != -52) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MAX;
	static volatile int64_t x23 = -1LL;
	static int64_t t5 = -625526279674LL;

	t5 = (x21|(x22/(x23+x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int8_t x27 = 0;
	int8_t x28 = INT8_MIN;

	t6 = (x25|(x26/(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -27;
	int64_t x30 = 10LL;
	uint16_t x32 = UINT16_MAX;
	volatile int64_t t7 = -1LL;

	t7 = (x29|(x30/(x31+x32)));

	if (t7 != -27LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 46U;
	int8_t x35 = -6;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = -318;

	t8 = (x33|(x34/(x35+x36)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int64_t x39 = -1LL;
	int16_t x40 = -1;
	volatile int64_t t9 = 1612356LL;

	t9 = (x37|(x38/(x39+x40)));

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 1;
	int8_t x44 = INT8_MAX;
	static volatile int64_t t10 = -3897114LL;

	t10 = (x41|(x42/(x43+x44)));

	if (t10 != 9025330306801LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = -3;
	volatile uint8_t x54 = 10U;
	int8_t x55 = -1;
	volatile uint32_t t11 = 2U;

	t11 = (x53|(x54/(x55+x56)));

	if (t11 != 4294967293U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;

	t12 = (x57|(x58/(x59+x60)));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 2U;
	volatile int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	static int32_t x64 = INT32_MAX;
	volatile int64_t t13 = 21267284672130LL;

	t13 = (x61|(x62/(x63+x64)));

	if (t13 != 4294967554LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -8;
	int32_t x66 = 3119;
	int32_t x68 = INT32_MAX;
	volatile uint32_t t14 = 58214407U;

	t14 = (x65|(x66/(x67+x68)));

	if (t14 != 4294967288U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -260;

	t15 = (x69|(x70/(x71+x72)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x75 = 4842U;
	volatile uint16_t x76 = 60U;
	int32_t t16 = -2449200;

	t16 = (x73|(x74/(x75+x76)));

	if (t16 != -27084) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MAX;
	volatile int8_t x79 = INT8_MIN;
	int32_t x80 = -15758;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x77|(x78/(x79+x80)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = 23U;
	uint16_t x84 = 16080U;

	t18 = (x81|(x82/(x83+x84)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	static uint32_t x86 = UINT32_MAX;
	int32_t x88 = INT32_MAX;

	t19 = (x85|(x86/(x87+x88)));

	if (t19 != 4294967169U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = INT16_MAX;
	uint32_t x91 = UINT32_MAX;
	volatile uint32_t x92 = 87382U;

	t20 = (x89|(x90/(x91+x92)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x95 = -22008890945LL;
	volatile uint64_t t21 = 87804434285537LLU;

	t21 = (x93|(x94/(x95+x96)));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t22 = -3228385LL;

	t22 = (x97|(x98/(x99+x100)));

	if (t22 != -15LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -305LL;
	int8_t x102 = 3;
	volatile int64_t x103 = -1LL;
	int64_t x104 = INT64_MAX;
	int64_t t23 = 90879990438438LL;

	t23 = (x101|(x102/(x103+x104)));

	if (t23 != -305LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x105 = 771064192959573LLU;
	int32_t x106 = -1347539;
	static int8_t x107 = -1;
	static uint8_t x108 = 68U;
	volatile uint64_t t24 = 18777LLU;

	t24 = (x105|(x106/(x107+x108)));

	if (t24 != 18446744073709532533LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 42434833U;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	int16_t x112 = INT16_MAX;
	static uint32_t t25 = UINT32_MAX;

	t25 = (x109|(x110/(x111+x112)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 386U;
	uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 1238U;
	uint16_t x116 = UINT16_MAX;

	t26 = (x113|(x114/(x115+x116)));

	if (t26 != 386U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 432U;
	volatile int16_t x118 = -1;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t27 = -114LL;

	t27 = (x117|(x118/(x119+x120)));

	if (t27 != 432LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = 298556LL;
	int32_t x122 = INT32_MIN;
	volatile int32_t x123 = INT32_MAX;
	volatile int64_t x124 = -1LL;
	volatile int64_t t28 = -3071771498076337LL;

	t28 = (x121|(x122/(x123+x124)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = UINT16_MAX;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 1U;

	t29 = (x125|(x126/(x127+x128)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = UINT16_MAX;
	static int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t t30 = 985086596243LLU;

	t30 = (x129|(x130/(x131+x132)));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = UINT32_MAX;
	static int8_t x138 = 44;
	int8_t x139 = -1;
	int16_t x140 = INT16_MAX;

	t31 = (x137|(x138/(x139+x140)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -7;
	int8_t x142 = 0;
	uint64_t x143 = 2320064829356LLU;

	t32 = (x141|(x142/(x143+x144)));

	if (t32 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = INT32_MAX;
	volatile int16_t x146 = -3;
	int16_t x148 = INT16_MIN;
	uint64_t t33 = 879772369121751750LLU;

	t33 = (x145|(x146/(x147+x148)));

	if (t33 != 21474836479LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = 0;
	volatile int64_t x158 = INT64_MIN;
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile int64_t t34 = 33789597036435842LL;

	t34 = (x157|(x158/(x159+x160)));

	if (t34 != -4294967300LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MAX;
	uint8_t x167 = 4U;
	static volatile uint16_t x168 = UINT16_MAX;
	int32_t t35 = 1;

	t35 = (x165|(x166/(x167+x168)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = 399U;
	int32_t x172 = 0;

	t36 = (x169|(x170/(x171+x172)));

	if (t36 != 46232445313351679LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 213629963755862792LLU;
	uint32_t x178 = 1U;
	int8_t x180 = 3;

	t37 = (x177|(x178/(x179+x180)));

	if (t37 != 213629963755862792LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MAX;
	int16_t x182 = 9;
	int64_t t38 = 2039150447164LL;

	t38 = (x181|(x182/(x183+x184)));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = -1;
	volatile int16_t x186 = -19;
	int32_t x187 = INT32_MIN;
	int16_t x188 = 1449;
	volatile int32_t t39 = -3769481;

	t39 = (x185|(x186/(x187+x188)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x190 = -1;
	static volatile int8_t x191 = -15;
	int64_t x192 = -1LL;
	int64_t t40 = INT64_MAX;

	t40 = (x189|(x190/(x191+x192)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile uint64_t x195 = 30098LLU;
	uint16_t x196 = UINT16_MAX;
	uint64_t t41 = 142722126034985995LLU;

	t41 = (x193|(x194/(x195+x196)));

	if (t41 != 18446744071562068012LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x198 = 18708LLU;
	int8_t x199 = -1;
	int64_t x200 = -14377LL;
	static uint64_t t42 = 5884495LLU;

	t42 = (x197|(x198/(x199+x200)));

	if (t42 != 604LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x201|(x202/(x203+x204)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint8_t x206 = UINT8_MAX;
	static uint32_t x207 = 466244012U;
	int64_t x208 = 578031LL;
	static volatile int64_t t44 = -59057112143593LL;

	t44 = (x205|(x206/(x207+x208)));

	if (t44 != 65535LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = 1;
	static volatile int16_t x210 = INT16_MIN;

	t45 = (x209|(x210/(x211+x212)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MAX;
	static volatile int16_t x214 = 254;
	uint16_t x215 = 22U;
	volatile int32_t x216 = 56;
	volatile int32_t t46 = INT32_MAX;

	t46 = (x213|(x214/(x215+x216)));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -7;
	uint64_t x219 = UINT64_MAX;

	t47 = (x217|(x218/(x219+x220)));

	if (t47 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x221 = 0U;
	int32_t x223 = -130;
	volatile int64_t x224 = 4502339479180LL;
	int64_t t48 = 111066006068LL;

	t48 = (x221|(x222/(x223+x224)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x225 = 1U;
	uint64_t x226 = UINT64_MAX;
	static uint16_t x228 = 3301U;
	uint64_t t49 = 22LLU;

	t49 = (x225|(x226/(x227+x228)));

	if (t49 != 5893528458054169LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = -1;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MIN;
	volatile int64_t t50 = 6373LL;

	t50 = (x229|(x230/(x231+x232)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x234 = 10;
	volatile uint8_t x235 = 36U;
	uint32_t x236 = 69510034U;
	uint32_t t51 = 166779499U;

	t51 = (x233|(x234/(x235+x236)));

	if (t51 != 1010U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x237 = 13U;
	static volatile int8_t x238 = INT8_MIN;
	uint32_t x239 = 6U;
	static volatile int32_t x240 = -1;
	static uint32_t t52 = 50U;

	t52 = (x237|(x238/(x239+x240)));

	if (t52 != 858993437U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = UINT32_MAX;
	static uint16_t x243 = 0U;
	static uint32_t t53 = UINT32_MAX;

	t53 = (x241|(x242/(x243+x244)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x246 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	volatile int64_t t54 = 182098067560285971LL;

	t54 = (x245|(x246/(x247+x248)));

	if (t54 != -441LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = 84134LL;
	static uint64_t x251 = UINT64_MAX;
	uint64_t t55 = 0LLU;

	t55 = (x249|(x250/(x251+x252)));

	if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MAX;
	uint32_t x255 = 21U;
	uint8_t x256 = 97U;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x253|(x254/(x255+x256)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 2432761764547LLU;
	int32_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;

	t57 = (x257|(x258/(x259+x260)));

	if (t57 != 2432761764547LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x265 = INT32_MAX;
	int16_t x266 = -12;
	static volatile int64_t x267 = -7640185763657823LL;
	static uint64_t x268 = 18618328LLU;
	volatile uint64_t t58 = 1LLU;

	t58 = (x265|(x266/(x267+x268)));

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = -1;
	int32_t x275 = INT32_MAX;
	int8_t x276 = -1;
	volatile int32_t t59 = -1;

	t59 = (x273|(x274/(x275+x276)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x281 = 167U;
	int32_t x283 = -1;
	int64_t x284 = -68772902944113LL;
	static volatile int64_t t60 = -87475509LL;

	t60 = (x281|(x282/(x283+x284)));

	if (t60 != 167LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x286 = 30U;
	int32_t x287 = -31859;
	int8_t x288 = INT8_MIN;
	volatile int32_t t61 = -18355393;

	t61 = (x285|(x286/(x287+x288)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 113554316U;
	static int32_t x290 = -1;
	int32_t x291 = INT32_MAX;
	static int8_t x292 = -1;

	t62 = (x289|(x290/(x291+x292)));

	if (t62 != 113554316U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x295 = INT16_MIN;
	int32_t x296 = -912;
	volatile uint64_t t63 = 138198124785467493LLU;

	t63 = (x293|(x294/(x295+x296)));

	if (t63 != 29643317250665951LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = -1;
	int8_t x298 = -5;
	static uint16_t x299 = 0U;
	int64_t x300 = -66029951862164LL;
	int64_t t64 = 2LL;

	t64 = (x297|(x298/(x299+x300)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 0U;
	int64_t x302 = -1LL;
	uint8_t x303 = 3U;
	int8_t x304 = INT8_MIN;
	volatile int64_t t65 = 212699756927692LL;

	t65 = (x301|(x302/(x303+x304)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MIN;
	volatile int8_t x311 = 3;

	t66 = (x309|(x310/(x311+x312)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -15460006444940370LL;
	uint32_t x314 = 2U;
	static int8_t x316 = 0;
	volatile int64_t t67 = 3935LL;

	t67 = (x313|(x314/(x315+x316)));

	if (t67 != -15460006444940370LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = 0;
	volatile int8_t x318 = INT8_MIN;
	static volatile uint32_t x319 = 26166U;
	static volatile int8_t x320 = INT8_MIN;
	static uint32_t t68 = 16097030U;

	t68 = (x317|(x318/(x319+x320)));

	if (t68 != 164949U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x321 = INT64_MIN;
	uint16_t x322 = 99U;
	volatile int64_t x323 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x321|(x322/(x323+x324)));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -1;
	volatile int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	volatile uint8_t x328 = UINT8_MAX;

	t70 = (x325|(x326/(x327+x328)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x330 = INT16_MIN;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x329|(x330/(x331+x332)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x333 = INT8_MIN;
	uint16_t x334 = 7U;
	int8_t x336 = INT8_MIN;

	t72 = (x333|(x334/(x335+x336)));

	if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 224053401U;
	volatile int16_t x338 = -1299;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 27U;
	volatile uint32_t t73 = 2343U;

	t73 = (x337|(x338/(x339+x340)));

	if (t73 != 224053405U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 669724;
	static volatile uint16_t x346 = UINT16_MAX;
	static int32_t x348 = -1;
	volatile int32_t t74 = 2947;

	t74 = (x345|(x346/(x347+x348)));

	if (t74 != 670398) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x350 = -14815LL;
	static int8_t x351 = -1;
	int64_t t75 = 9942568457LL;

	t75 = (x349|(x350/(x351+x352)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x354 = INT32_MIN;
	int8_t x355 = -12;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t76 = 21509LLU;

	t76 = (x353|(x354/(x355+x356)));

	if (t76 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x358 = UINT16_MAX;
	volatile int8_t x359 = -1;

	t77 = (x357|(x358/(x359+x360)));

	if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x361 = -79LL;
	int64_t x362 = -1LL;
	int16_t x363 = -1;
	int8_t x364 = INT8_MAX;
	volatile int64_t t78 = -160421501472LL;

	t78 = (x361|(x362/(x363+x364)));

	if (t78 != -79LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = -3;
	volatile int32_t x366 = INT32_MIN;
	uint8_t x368 = 15U;
	volatile int32_t t79 = 25137610;

	t79 = (x365|(x366/(x367+x368)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = 589242LL;
	uint16_t x371 = 64U;
	uint32_t x372 = 0U;
	int64_t t80 = 1LL;

	t80 = (x369|(x370/(x371+x372)));

	if (t80 != 589307LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = UINT8_MAX;
	uint64_t x375 = 2LLU;
	volatile int64_t x376 = -1LL;
	uint64_t t81 = 54401389400LLU;

	t81 = (x373|(x374/(x375+x376)));

	if (t81 != 18446744073709514495LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MAX;
	int32_t x379 = -13155735;
	int8_t x380 = -1;
	uint64_t t82 = UINT64_MAX;

	t82 = (x377|(x378/(x379+x380)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 39U;
	static volatile int32_t t83 = 3;

	t83 = (x381|(x382/(x383+x384)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MIN;
	uint32_t x386 = 682U;
	static uint32_t x388 = 221654U;
	static uint32_t t84 = 3242719U;

	t84 = (x385|(x386/(x387+x388)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x393 = INT64_MIN;
	uint8_t x394 = 6U;
	static volatile int8_t x395 = INT8_MIN;
	static int64_t t85 = INT64_MIN;

	t85 = (x393|(x394/(x395+x396)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = 64;
	int16_t x398 = INT16_MIN;
	int16_t x399 = 16146;

	t86 = (x397|(x398/(x399+x400)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -52;
	uint8_t x402 = 17U;
	static volatile int8_t x403 = INT8_MIN;
	static int8_t x404 = -17;
	int32_t t87 = -772438;

	t87 = (x401|(x402/(x403+x404)));

	if (t87 != -52) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	static volatile int16_t x406 = INT16_MIN;
	int64_t x407 = 0LL;
	volatile int16_t x408 = -668;
	volatile int64_t t88 = -3112909536LL;

	t88 = (x405|(x406/(x407+x408)));

	if (t88 != -79LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = -1;
	int8_t x410 = -1;
	volatile int32_t x411 = 59;
	int8_t x412 = -4;
	int32_t t89 = -1794;

	t89 = (x409|(x410/(x411+x412)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x414 = UINT16_MAX;
	uint32_t x415 = 1739U;
	int64_t x416 = INT64_MIN;
	int64_t t90 = -386147618LL;

	t90 = (x413|(x414/(x415+x416)));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x419 = -5885655840282LL;
	uint16_t x420 = 5059U;
	int64_t t91 = INT64_MIN;

	t91 = (x417|(x418/(x419+x420)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x421 = INT64_MAX;
	int8_t x422 = -1;
	int32_t x423 = -1;
	int16_t x424 = INT16_MAX;
	static int64_t t92 = INT64_MAX;

	t92 = (x421|(x422/(x423+x424)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x426 = 0U;
	volatile int8_t x427 = -1;
	int16_t x428 = 11534;
	uint32_t t93 = 491144U;

	t93 = (x425|(x426/(x427+x428)));

	if (t93 != 127U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x429 = -11588410595786LL;
	static int32_t x430 = -1;
	static uint32_t x431 = UINT32_MAX;
	int64_t x432 = -1LL;
	volatile int64_t t94 = 2480001270622431516LL;

	t94 = (x429|(x430/(x431+x432)));

	if (t94 != -11588410595786LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x434 = 1U;
	uint64_t x435 = UINT64_MAX;
	uint32_t x436 = UINT32_MAX;
	uint64_t t95 = 58763849LLU;

	t95 = (x433|(x434/(x435+x436)));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = 21U;
	static int64_t x442 = -1LL;
	static int16_t x443 = INT16_MIN;
	static uint32_t x444 = 14699737U;
	static volatile int64_t t96 = -56LL;

	t96 = (x441|(x442/(x443+x444)));

	if (t96 != 21LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = -168315336023937895LL;
	int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = UINT32_MAX;
	int64_t t97 = -623918LL;

	t97 = (x445|(x446/(x447+x448)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x449 = -362;
	static uint16_t x450 = UINT16_MAX;
	int64_t x451 = INT64_MIN;
	int16_t x452 = 4;

	t98 = (x449|(x450/(x451+x452)));

	if (t98 != -362LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -1362045202LL;
	uint16_t x454 = 26572U;
	volatile int8_t x455 = -1;

	t99 = (x453|(x454/(x455+x456)));

	if (t99 != -1362045185LL) { NG(); } else { ; }
	
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

