#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint32_t x6 = 192377U;
uint64_t t4 = 295502LLU;
int16_t x32 = INT16_MIN;
volatile int32_t t8 = -10159216;
int32_t x46 = 1343;
static uint64_t t12 = 18928090LLU;
volatile int32_t x59 = INT32_MAX;
volatile uint32_t x64 = 365540909U;
static volatile int8_t x84 = INT8_MAX;
int64_t x88 = INT64_MAX;
volatile int64_t t18 = INT64_MIN;
uint32_t x91 = UINT32_MAX;
int32_t x95 = 2056051;
int32_t x99 = -1;
volatile uint16_t x100 = UINT16_MAX;
uint16_t x105 = 2U;
volatile uint8_t x108 = 3U;
static volatile uint32_t t23 = 0U;
static volatile int64_t x126 = -52LL;
int32_t x130 = 0;
volatile int16_t x145 = 37;
int32_t x147 = INT32_MIN;
static volatile int32_t t32 = -1263;
static uint64_t x158 = 135560450LLU;
static int32_t x159 = 7275473;
uint64_t x168 = 8LLU;
volatile uint32_t x169 = 837200U;
int32_t x177 = INT32_MAX;
volatile uint64_t t39 = 396235350394LLU;
uint8_t x186 = 61U;
static uint32_t x196 = 2879776U;
uint64_t x197 = UINT64_MAX;
volatile int32_t x201 = INT32_MIN;
int32_t x202 = 235;
uint8_t x204 = 2U;
uint8_t x216 = 101U;
uint32_t x222 = UINT32_MAX;
uint32_t x224 = 7011670U;
volatile uint32_t t49 = 1849092U;
int64_t x231 = INT64_MAX;
volatile int64_t x233 = -64343056991LL;
int32_t x240 = 32655771;
static uint8_t x241 = 76U;
uint64_t x242 = 2033470395663298LLU;
int64_t x250 = -1LL;
uint8_t x260 = 122U;
int16_t x265 = INT16_MIN;
int16_t x274 = INT16_MIN;
volatile int32_t t61 = -396829428;
int64_t x277 = INT64_MIN;
int32_t x285 = INT32_MIN;
uint16_t x291 = UINT16_MAX;
int64_t x292 = -154LL;
int64_t t66 = -6242149LL;
uint16_t x299 = 565U;
int64_t t68 = -3607208093LL;
int16_t x316 = INT16_MIN;
static volatile int8_t x319 = INT8_MIN;
uint64_t x321 = UINT64_MAX;
uint16_t x324 = UINT16_MAX;
static volatile uint64_t t71 = 135874843LLU;
uint32_t x325 = 209749U;
static uint16_t x326 = 5729U;
uint16_t x328 = UINT16_MAX;
uint32_t x331 = 4U;
uint32_t x333 = UINT32_MAX;
int64_t x341 = INT64_MIN;
volatile int8_t x345 = 1;
int8_t x362 = -1;
int8_t x363 = -1;
volatile int32_t t81 = -5532482;
static int64_t x366 = INT64_MIN;
uint32_t x367 = 15178866U;
int32_t x370 = -15;
int32_t x371 = -42;
volatile uint64_t x376 = 6715LLU;
int32_t x388 = INT32_MAX;
volatile uint64_t t87 = 52755161LLU;
int8_t x394 = -1;
uint16_t x395 = UINT16_MAX;
int64_t x396 = 1LL;
volatile uint64_t t90 = 494498112LLU;
uint32_t x406 = 13U;
static int8_t x411 = -61;
int64_t x417 = 80442737LL;
int64_t x421 = -1LL;
static uint64_t x438 = UINT64_MAX;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	volatile int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	static int64_t t0 = -29057662777922230LL;

	t0 = (x1&(x2&(x3-x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	static uint16_t x8 = 13923U;
	uint32_t t1 = 5574U;

	t1 = (x5&(x6&(x7-x8)));

	if (t1 != 131072U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint64_t x10 = 32905271LLU;
	uint64_t x11 = 23445479LLU;
	uint8_t x12 = 83U;
	static volatile uint64_t t2 = 258038061LLU;

	t2 = (x9&(x10&(x11-x12)));

	if (t2 != 23336980LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 293863LL;
	uint8_t x14 = UINT8_MAX;
	int16_t x15 = INT16_MIN;
	int32_t x16 = 4333018;
	int64_t t3 = 31383LL;

	t3 = (x13&(x14&(x15-x16)));

	if (t3 != 38LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 64148LLU;
	volatile int32_t x18 = INT32_MIN;
	int8_t x19 = 11;
	uint32_t x20 = 4649155U;

	t4 = (x17&(x18&(x19-x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MAX;
	uint8_t x23 = 1U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -47611;

	t5 = (x21&(x22&(x23-x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = 51099253U;
	int64_t t6 = -6813413LL;

	t6 = (x29&(x30&(x31-x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -7;

	t7 = (x33&(x34&(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = INT32_MAX;
	volatile int16_t x38 = INT16_MIN;
	static uint8_t x39 = UINT8_MAX;
	static uint8_t x40 = UINT8_MAX;

	t8 = (x37&(x38&(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 12U;
	uint8_t x42 = 99U;
	int8_t x43 = INT8_MIN;
	int8_t x44 = -1;
	static int32_t t9 = 33098127;

	t9 = (x41&(x42&(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 0;
	uint32_t x47 = 465U;
	int64_t x48 = INT64_MAX;
	int64_t t10 = 7072LL;

	t10 = (x45&(x46&(x47-x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = 54646LL;
	int32_t x50 = -13193912;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;
	uint64_t t11 = 39LLU;

	t11 = (x49&(x50&(x51-x52)));

	if (t11 != 34112LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = 3;
	uint64_t x54 = 86419333150094LLU;
	volatile uint32_t x55 = 83167996U;
	int8_t x56 = INT8_MAX;

	t12 = (x53&(x54&(x55-x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int32_t x58 = INT32_MIN;
	volatile int32_t x60 = INT32_MAX;
	volatile int32_t t13 = 84777;

	t13 = (x57&(x58&(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = -1;
	int8_t x62 = INT8_MAX;
	volatile int8_t x63 = INT8_MIN;
	static volatile uint32_t t14 = 46495U;

	t14 = (x61&(x62&(x63-x64)));

	if (t14 != 83U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	static int16_t x66 = INT16_MIN;
	uint32_t x67 = 11570429U;
	int32_t x68 = INT32_MAX;
	uint32_t t15 = 685U;

	t15 = (x65&(x66&(x67-x68)));

	if (t15 != 11567104U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 4034U;
	volatile int16_t x74 = INT16_MIN;
	static int16_t x75 = INT16_MAX;
	uint8_t x76 = 31U;
	volatile uint32_t t16 = 6543739U;

	t16 = (x73&(x74&(x75-x76)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -1;
	int32_t x82 = -1;
	uint64_t x83 = 7467LLU;
	uint64_t t17 = 418LLU;

	t17 = (x81&(x82&(x83-x84)));

	if (t17 != 7340LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = INT8_MIN;
	int32_t x86 = -488;
	uint8_t x87 = UINT8_MAX;

	t18 = (x85&(x86&(x87-x88)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 328321U;
	static volatile int16_t x90 = 30;
	uint32_t x92 = 918U;
	uint32_t t19 = 506876U;

	t19 = (x89&(x90&(x91-x92)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 2U;
	uint16_t x94 = 545U;
	volatile uint32_t x96 = UINT32_MAX;
	uint32_t t20 = 236956819U;

	t20 = (x93&(x94&(x95-x96)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x97 = 7;
	uint32_t x98 = UINT32_MAX;
	uint32_t t21 = 5243U;

	t21 = (x97&(x98&(x99-x100)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = INT32_MIN;
	static int32_t x107 = -26;
	volatile int32_t t22 = 1222;

	t22 = (x105&(x106&(x107-x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -11718;
	volatile uint16_t x110 = 63U;
	volatile uint32_t x111 = UINT32_MAX;
	volatile uint8_t x112 = 2U;

	t23 = (x109&(x110&(x111-x112)));

	if (t23 != 56U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 454U;
	int32_t x114 = INT32_MIN;
	int16_t x115 = -1;
	int32_t x116 = 1;
	volatile int32_t t24 = -55985193;

	t24 = (x113&(x114&(x115-x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x117 = UINT16_MAX;
	static int64_t x118 = INT64_MIN;
	static int32_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	static volatile int64_t t25 = -13037LL;

	t25 = (x117&(x118&(x119-x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 13U;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = 36LLU;
	uint32_t x124 = 29982094U;
	static uint64_t t26 = 2LLU;

	t26 = (x121&(x122&(x123-x124)));

	if (t26 != 4LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 5LLU;
	int32_t x127 = -1;
	int32_t x128 = 507492;
	volatile uint64_t t27 = 208705344891LLU;

	t27 = (x125&(x126&(x127-x128)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1516;
	static uint8_t x131 = 44U;
	uint32_t x132 = 6U;
	volatile uint32_t t28 = 1U;

	t28 = (x129&(x130&(x131-x132)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 1210862367439432LLU;
	uint8_t x134 = 0U;
	int64_t x135 = -16200LL;
	int8_t x136 = -1;
	uint64_t t29 = 5714LLU;

	t29 = (x133&(x134&(x135-x136)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static uint64_t x138 = 11712LLU;
	int8_t x139 = INT8_MIN;
	static uint32_t x140 = 13156135U;
	volatile uint64_t t30 = 1317347609134636896LLU;

	t30 = (x137&(x138&(x139-x140)));

	if (t30 != 64LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = -1;
	volatile int32_t x142 = -1;
	int8_t x143 = -6;
	uint64_t x144 = 529071LLU;
	volatile uint64_t t31 = 33483LLU;

	t31 = (x141&(x142&(x143-x144)));

	if (t31 != 18446744073709022539LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x146 = 2U;
	int8_t x148 = INT8_MIN;

	t32 = (x145&(x146&(x147-x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	static uint8_t x154 = 1U;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = 923;
	static uint64_t t33 = 651208514701902382LLU;

	t33 = (x153&(x154&(x155-x156)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x160 = 1741;
	volatile uint64_t t34 = 651928821LLU;

	t34 = (x157&(x158&(x159-x160)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = 1;
	int16_t x166 = 1;
	int32_t x167 = INT32_MIN;
	volatile uint64_t t35 = 22698929927097LLU;

	t35 = (x165&(x166&(x167-x168)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x170 = -1;
	volatile int64_t x171 = -4960730910LL;
	int32_t x172 = INT32_MIN;
	static int64_t t36 = 29984614098881LL;

	t36 = (x169&(x170&(x171-x172)));

	if (t36 != 16448LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = 49;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	uint8_t x176 = 0U;
	int32_t t37 = -17743414;

	t37 = (x173&(x174&(x175-x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x178 = INT8_MIN;
	int64_t x179 = 6322725LL;
	uint64_t x180 = 238915668LLU;
	uint64_t t38 = 3037803LLU;

	t38 = (x177&(x178&(x179-x180)));

	if (t38 != 1914890624LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = 833;
	volatile uint64_t x182 = UINT64_MAX;
	volatile int32_t x183 = 3352344;
	int32_t x184 = -573622;

	t39 = (x181&(x182&(x183-x184)));

	if (t39 != 832LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -383806994814869803LL;
	uint64_t x187 = UINT64_MAX;
	static int64_t x188 = -42603582665LL;
	static uint64_t t40 = 2252980669758746725LLU;

	t40 = (x185&(x186&(x187-x188)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MAX;
	volatile int8_t x195 = INT8_MIN;
	volatile uint32_t t41 = 177434336U;

	t41 = (x193&(x194&(x195-x196)));

	if (t41 != 2144600064U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x198 = 13067866623386LLU;
	int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MAX;
	static volatile uint64_t t42 = 1127374LLU;

	t42 = (x197&(x198&(x199-x200)));

	if (t42 != 128LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x203 = INT16_MAX;
	volatile int32_t t43 = -26;

	t43 = (x201&(x202&(x203-x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = 57;
	static int8_t x207 = -25;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t44 = -1;

	t44 = (x205&(x206&(x207-x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -5;
	int8_t x210 = INT8_MAX;
	int16_t x211 = -15995;
	volatile int16_t x212 = 823;
	static int32_t t45 = -55290507;

	t45 = (x209&(x210&(x211-x212)));

	if (t45 != 74) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = INT8_MIN;
	static int16_t x214 = 44;
	static volatile int16_t x215 = INT16_MIN;
	volatile int32_t t46 = 0;

	t46 = (x213&(x214&(x215-x216)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = -165;
	int32_t x220 = INT32_MIN;
	volatile int32_t t47 = 55310836;

	t47 = (x217&(x218&(x219-x220)));

	if (t47 != 65371) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x221 = INT64_MAX;
	int64_t x223 = -1LL;
	static volatile int64_t t48 = 7471206LL;

	t48 = (x221&(x222&(x223-x224)));

	if (t48 != 4287955625LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = 2870;
	static uint8_t x226 = 63U;
	uint32_t x227 = UINT32_MAX;
	static int16_t x228 = -105;

	t49 = (x225&(x226&(x227-x228)));

	if (t49 != 32U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = -1LL;
	int32_t x230 = 1663;
	volatile int32_t x232 = 94070079;
	int64_t t50 = 0LL;

	t50 = (x229&(x230&(x231-x232)));

	if (t50 != 576LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = INT8_MAX;
	static int64_t x235 = INT64_MAX;
	static int32_t x236 = 194;
	int64_t t51 = -18192163744235LL;

	t51 = (x233&(x234&(x235-x236)));

	if (t51 != 33LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = 18;
	uint8_t x238 = 1U;
	uint8_t x239 = 3U;
	volatile int32_t t52 = -557533;

	t52 = (x237&(x238&(x239-x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = -1;
	static volatile uint64_t t53 = 849LLU;

	t53 = (x241&(x242&(x243-x244)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x245 = 7714964;
	int32_t x246 = INT32_MIN;
	static volatile int64_t x247 = -1LL;
	uint16_t x248 = 5091U;
	volatile int64_t t54 = -53211LL;

	t54 = (x245&(x246&(x247-x248)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = -1;
	volatile int16_t x251 = INT16_MAX;
	uint64_t x252 = 21851LLU;
	static uint64_t t55 = 14533535100708LLU;

	t55 = (x249&(x250&(x251-x252)));

	if (t55 != 10916LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = 62;
	uint8_t x255 = UINT8_MAX;
	volatile uint8_t x256 = 52U;
	uint64_t t56 = 914077678LLU;

	t56 = (x253&(x254&(x255-x256)));

	if (t56 != 10LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	static int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MIN;
	static volatile int32_t t57 = 3940825;

	t57 = (x257&(x258&(x259-x260)));

	if (t57 != 6) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x261 = -1LL;
	uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 7118U;
	static uint16_t x264 = UINT16_MAX;
	int64_t t58 = 126508486124LL;

	t58 = (x261&(x262&(x263-x264)));

	if (t58 != 4294908879LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x266 = -1;
	int8_t x267 = -1;
	uint8_t x268 = 2U;
	volatile int32_t t59 = -44;

	t59 = (x265&(x266&(x267-x268)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x269 = 11U;
	uint16_t x270 = 10419U;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;
	uint64_t t60 = 40755063864LLU;

	t60 = (x269&(x270&(x271-x272)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x275 = 7;
	uint16_t x276 = 179U;

	t61 = (x273&(x274&(x275-x276)));

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t62 = 5345LLU;

	t62 = (x277&(x278&(x279-x280)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	volatile uint32_t x283 = 955259U;
	uint64_t x284 = UINT64_MAX;
	uint64_t t63 = 3499521730LLU;

	t63 = (x281&(x282&(x283-x284)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MAX;
	static uint64_t x288 = 7196706LLU;
	uint64_t t64 = 439983039174248LLU;

	t64 = (x285&(x286&(x287-x288)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = 5;
	uint8_t x290 = 77U;
	volatile int64_t t65 = -136891441668LL;

	t65 = (x289&(x290&(x291-x292)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = INT64_MAX;
	uint8_t x295 = 113U;
	int8_t x296 = INT8_MIN;

	t66 = (x293&(x294&(x295-x296)));

	if (t66 != 128LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	int64_t x300 = 463496100031677340LL;
	uint64_t t67 = 51660752805019LLU;

	t67 = (x297&(x298&(x299-x300)));

	if (t67 != 17983247973677858816LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MAX;
	volatile int64_t x306 = INT64_MIN;
	static volatile int8_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;

	t68 = (x305&(x306&(x307-x308)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -459;
	int32_t x314 = -29972200;
	int8_t x315 = -63;
	volatile int32_t t69 = 39122996;

	t69 = (x313&(x314&(x315-x316)));

	if (t69 != 10240) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x317 = 332;
	static int32_t x318 = INT32_MIN;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t70 = 1;

	t70 = (x317&(x318&(x319-x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x322 = INT64_MIN;
	uint64_t x323 = UINT64_MAX;

	t71 = (x321&(x322&(x323-x324)));

	if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x327 = UINT16_MAX;
	volatile uint32_t t72 = 15U;

	t72 = (x325&(x326&(x327-x328)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x329 = 60405LLU;
	static int64_t x330 = -26344040572LL;
	volatile int16_t x332 = -1;
	volatile uint64_t t73 = 26208075717051286LLU;

	t73 = (x329&(x330&(x331-x332)));

	if (t73 != 4LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x334 = -7;
	volatile uint32_t x335 = 3U;
	int16_t x336 = -452;
	volatile uint32_t t74 = 134U;

	t74 = (x333&(x334&(x335-x336)));

	if (t74 != 449U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = 12;
	static int64_t x338 = -1217785081067907309LL;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	int64_t t75 = 30089LL;

	t75 = (x337&(x338&(x339-x340)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x342 = -1;
	int32_t x343 = -1;
	uint8_t x344 = 110U;
	int64_t t76 = INT64_MIN;

	t76 = (x341&(x342&(x343-x344)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x346 = INT8_MAX;
	uint32_t x347 = 6834U;
	int32_t x348 = -1450060;
	uint32_t t77 = 9908089U;

	t77 = (x345&(x346&(x347-x348)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x349 = 26497222930LLU;
	int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = INT32_MAX;
	volatile uint64_t t78 = 173935881LLU;

	t78 = (x349&(x350&(x351-x352)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x353 = INT16_MAX;
	static int64_t x354 = INT64_MAX;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 3552LLU;
	uint64_t t79 = 4569142LLU;

	t79 = (x353&(x354&(x355-x356)));

	if (t79 != 29216LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x357 = -11;
	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	volatile uint64_t x360 = 87864292434LLU;
	volatile uint64_t t80 = 1254LLU;

	t80 = (x357&(x358&(x359-x360)));

	if (t80 != 18446743985845259301LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MIN;
	int16_t x364 = 207;

	t81 = (x361&(x362&(x363-x364)));

	if (t81 != -256) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -1668686;
	int32_t x368 = INT32_MIN;
	volatile int64_t t82 = -2179711408933348585LL;

	t82 = (x365&(x366&(x367-x368)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x369 = INT64_MAX;
	uint32_t x372 = UINT32_MAX;
	int64_t t83 = 50LL;

	t83 = (x369&(x370&(x371-x372)));

	if (t83 != 4294967249LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = -10;
	uint16_t x374 = 15U;
	static uint16_t x375 = 244U;
	volatile uint64_t t84 = 255176LLU;

	t84 = (x373&(x374&(x375-x376)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -3199666288926735LL;
	static int16_t x378 = INT16_MIN;
	int32_t x379 = -1;
	int16_t x380 = INT16_MAX;
	volatile int64_t t85 = -35LL;

	t85 = (x377&(x378&(x379-x380)));

	if (t85 != -3199666288951296LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = -318;
	static int16_t x382 = -1;
	uint32_t x383 = 55U;
	int32_t x384 = INT32_MIN;
	static uint32_t t86 = 498U;

	t86 = (x381&(x382&(x383-x384)));

	if (t86 != 2147483650U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = 1;
	uint64_t x386 = 3852542116338LLU;
	int64_t x387 = -123015973LL;

	t87 = (x385&(x386&(x387-x388)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = 2901168;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = -1;
	static int8_t x392 = 0;
	int32_t t88 = 554714191;

	t88 = (x389&(x390&(x391-x392)));

	if (t88 != 176) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MIN;
	volatile int64_t t89 = 0LL;

	t89 = (x393&(x394&(x395-x396)));

	if (t89 != 65408LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -1;

	t90 = (x397&(x398&(x399-x400)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x401 = 1;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = UINT8_MAX;
	volatile uint8_t x404 = 126U;
	volatile int32_t t91 = -2723315;

	t91 = (x401&(x402&(x403-x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 4U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 1;
	static volatile uint32_t t92 = 2570U;

	t92 = (x405&(x406&(x407-x408)));

	if (t92 != 4U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x409 = -1;
	int8_t x410 = INT8_MIN;
	static int64_t x412 = INT64_MIN;
	int64_t t93 = 36309613186LL;

	t93 = (x409&(x410&(x411-x412)));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = -3169726489800142831LL;
	int64_t x416 = 761042283479409LL;
	volatile int64_t t94 = -2979LL;

	t94 = (x413&(x414&(x415-x416)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x418 = -1;
	int8_t x419 = INT8_MIN;
	int64_t x420 = 1550LL;
	int64_t t95 = -6770LL;

	t95 = (x417&(x418&(x419-x420)));

	if (t95 != 80441712LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x422 = 3U;
	int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;
	volatile int64_t t96 = 5273322341115LL;

	t96 = (x421&(x422&(x423-x424)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x425 = 2U;
	int32_t x426 = INT32_MAX;
	volatile int16_t x427 = INT16_MIN;
	uint32_t x428 = 1469U;
	uint32_t t97 = 441292U;

	t97 = (x425&(x426&(x427-x428)));

	if (t97 != 2U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = INT64_MAX;
	int32_t x434 = -21808230;
	volatile int16_t x435 = -9;
	uint16_t x436 = UINT16_MAX;
	static volatile int64_t t98 = 4LL;

	t98 = (x433&(x434&(x435-x436)));

	if (t98 != 9223372036832902040LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x437 = 2395071973984061LL;
	static volatile uint8_t x439 = 4U;
	uint32_t x440 = 250U;
	static uint64_t t99 = 10473LLU;

	t99 = (x437&(x438&(x439-x440)));

	if (t99 != 641238792LLU) { NG(); } else { ; }
	
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

