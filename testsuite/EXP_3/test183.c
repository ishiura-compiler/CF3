#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 124;
volatile uint64_t t0 = 749LLU;
int8_t x9 = INT8_MAX;
volatile int32_t x41 = -1;
int32_t t9 = -16;
int8_t x59 = INT8_MAX;
static uint64_t x82 = 843961572282LLU;
uint64_t x87 = 887102LLU;
int64_t t18 = 0LL;
volatile int64_t t19 = 90LL;
volatile uint64_t t20 = 28378685226411LLU;
static uint16_t x121 = 7U;
int16_t x123 = INT16_MIN;
uint16_t x125 = UINT16_MAX;
int64_t x131 = -16470412199328168LL;
int64_t t23 = -1216326127LL;
int8_t x135 = -12;
uint8_t x136 = 4U;
int16_t x139 = -1;
int64_t x144 = INT64_MIN;
uint64_t x146 = 1086LLU;
int64_t x158 = INT64_MIN;
volatile int8_t x159 = 59;
int64_t t28 = 17916LL;
static int16_t x166 = INT16_MAX;
volatile int64_t x167 = 14369LL;
uint8_t x170 = 54U;
static uint16_t x171 = UINT16_MAX;
int8_t x186 = 0;
volatile int32_t x206 = -1;
int64_t t37 = 18267772619LL;
uint16_t x215 = UINT16_MAX;
uint64_t x217 = 24374301258LLU;
int8_t x220 = 18;
static uint64_t t39 = 28LLU;
int32_t x222 = -1;
volatile int16_t x224 = INT16_MIN;
int8_t x239 = 1;
int64_t x244 = 2424LL;
int64_t x247 = INT64_MAX;
int16_t x248 = 13671;
int16_t x251 = INT16_MIN;
uint64_t t45 = 17424619LLU;
volatile int32_t t46 = -1;
int64_t x262 = -1LL;
uint16_t x271 = 26125U;
uint64_t t50 = 2254054561LLU;
uint64_t x277 = UINT64_MAX;
volatile uint16_t x286 = 0U;
uint8_t x288 = 4U;
static int64_t x290 = INT64_MIN;
uint64_t t54 = 5LLU;
uint16_t x299 = 29232U;
int8_t x300 = INT8_MIN;
int32_t t56 = 7;
int32_t x322 = INT32_MIN;
static int8_t x323 = -4;
int64_t x326 = INT64_MIN;
volatile uint64_t x333 = UINT64_MAX;
volatile int32_t x335 = -21;
uint32_t x338 = 109U;
uint64_t x342 = UINT64_MAX;
static uint16_t x344 = 240U;
uint64_t t62 = 135964577LLU;
uint8_t x347 = 38U;
static int16_t x353 = INT16_MAX;
int32_t x364 = -154;
static int32_t x369 = INT32_MIN;
static uint8_t x371 = 7U;
static int8_t x376 = INT8_MIN;
volatile int32_t t68 = -104;
static volatile int32_t t69 = 20860024;
uint64_t x389 = 162792565LLU;
uint64_t x396 = 979820919358023LLU;
static int8_t x426 = INT8_MAX;
uint16_t x428 = 131U;
uint32_t x431 = 4469U;
uint64_t x440 = UINT64_MAX;
int64_t x449 = INT64_MIN;
static uint64_t x483 = 225653808LLU;
static uint16_t x498 = UINT16_MAX;
volatile int32_t x499 = INT32_MAX;
volatile uint32_t t90 = 57360426U;
uint16_t x517 = 28600U;
static volatile int64_t t92 = -15429LL;
volatile int64_t x547 = -1LL;
volatile uint16_t x552 = 1067U;
int16_t x578 = 3;
volatile int32_t x580 = -226;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x3 = 0;
	int16_t x4 = INT16_MIN;

	t0 = ((x1-x2)+(x3-x4));

	if (t0 != 32643LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	int64_t x6 = -1LL;
	uint16_t x7 = 1434U;
	volatile int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 108222518LL;

	t1 = ((x5-x6)+(x7-x8));

	if (t1 != 34202LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	static volatile int16_t x11 = 1;
	uint8_t x12 = 16U;
	static volatile int32_t t2 = 2736;

	t2 = ((x9-x10)+(x11-x12));

	if (t2 != -15) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 879649121065749LLU;
	volatile int32_t x16 = INT32_MAX;
	volatile uint64_t t3 = 73051677370953LLU;

	t3 = ((x13-x14)+(x15-x16));

	if (t3 != 879651268549270LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int8_t x18 = -41;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	uint64_t t4 = 3103159607613271657LLU;

	t4 = ((x17-x18)+(x19-x20));

	if (t4 != 167LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 6U;
	uint16_t x22 = 689U;
	volatile uint32_t x23 = 487U;
	int32_t x24 = INT32_MAX;
	static uint32_t t5 = 46025137U;

	t5 = ((x21-x22)+(x23-x24));

	if (t5 != 2147483453U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = UINT8_MAX;
	static uint8_t x30 = 106U;
	static uint32_t x31 = UINT32_MAX;
	static int8_t x32 = 38;
	volatile uint32_t t6 = 45798U;

	t6 = ((x29-x30)+(x31-x32));

	if (t6 != 110U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 14672U;
	static uint64_t x38 = 44570468LLU;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 0U;
	uint64_t t7 = 2078195270453953017LLU;

	t7 = ((x37-x38)+(x39-x40));

	if (t7 != 9223372036810220012LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = -1;
	uint64_t x43 = UINT64_MAX;
	uint8_t x44 = UINT8_MAX;
	static uint64_t t8 = 1LLU;

	t8 = ((x41-x42)+(x43-x44));

	if (t8 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = -1;
	static int32_t x54 = INT32_MAX;
	static int8_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;

	t9 = ((x53-x54)+(x55-x56));

	if (t9 != -2147483521) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = 5375LL;
	static uint32_t x58 = 198507U;
	int8_t x60 = INT8_MAX;
	volatile int64_t t10 = 799484950137LL;

	t10 = ((x57-x58)+(x59-x60));

	if (t10 != -193132LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	static volatile int8_t x67 = -14;
	static uint32_t x68 = 8157U;
	uint64_t t11 = 1LLU;

	t11 = ((x65-x66)+(x67-x68));

	if (t11 != 4294959125LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = -1LL;
	static int16_t x71 = -3947;
	volatile int32_t x72 = INT32_MIN;
	volatile int64_t t12 = 560442801510143LL;

	t12 = ((x69-x70)+(x71-x72));

	if (t12 != -9223372034707296106LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 109U;
	uint8_t x74 = 95U;
	int8_t x75 = -5;
	uint16_t x76 = 13U;
	static volatile int32_t t13 = -2558794;

	t13 = ((x73-x74)+(x75-x76));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x77 = 13U;
	uint32_t x78 = 50053098U;
	int64_t x79 = -1LL;
	int16_t x80 = 5596;
	int64_t t14 = -1LL;

	t14 = ((x77-x78)+(x79-x80));

	if (t14 != 4244908614LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = 19;
	int8_t x83 = 0;
	static uint16_t x84 = UINT16_MAX;
	uint64_t t15 = 927LLU;

	t15 = ((x81-x82)+(x83-x84));

	if (t15 != 18446743229747913818LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 23U;
	int16_t x86 = -326;
	int32_t x88 = 0;
	uint64_t t16 = 795130661975909537LLU;

	t16 = ((x85-x86)+(x87-x88));

	if (t16 != 887451LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = 1;
	int64_t x90 = 1058974569348LL;
	volatile int8_t x91 = -56;
	uint8_t x92 = UINT8_MAX;
	int64_t t17 = -17165773130027949LL;

	t17 = ((x89-x90)+(x91-x92));

	if (t17 != -1058974569658LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = 28U;
	static volatile int16_t x106 = INT16_MIN;
	volatile int64_t x107 = -1LL;
	uint16_t x108 = UINT16_MAX;

	t18 = ((x105-x106)+(x107-x108));

	if (t18 != -32740LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -1012948197411LL;
	uint32_t x110 = UINT32_MAX;
	int32_t x111 = INT32_MAX;
	int16_t x112 = 8;

	t19 = ((x109-x110)+(x111-x112));

	if (t19 != -1015095681067LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x113 = 12;
	uint64_t x114 = UINT64_MAX;
	volatile uint64_t x115 = 197528394978487LLU;
	int64_t x116 = 93440875LL;

	t20 = ((x113-x114)+(x115-x116));

	if (t20 != 197528301537625LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x122 = INT32_MAX;
	uint32_t x124 = 428741746U;
	uint32_t t21 = 289U;

	t21 = ((x121-x122)+(x123-x124));

	if (t21 != 1718709142U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x126 = 142021771504897LLU;
	int8_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t22 = 49533466072625805LLU;

	t22 = ((x125-x126)+(x127-x128));

	if (t22 != 18446602051938112126LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x129 = INT32_MAX;
	uint16_t x130 = 1U;
	static int16_t x132 = INT16_MAX;

	t23 = ((x129-x130)+(x131-x132));

	if (t23 != -16470410051877289LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x133 = INT16_MIN;
	int64_t x134 = 49150301566179LL;
	int64_t t24 = 7358087873464349LL;

	t24 = ((x133-x134)+(x135-x136));

	if (t24 != -49150301598963LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x137 = 20499LLU;
	uint8_t x138 = 106U;
	uint8_t x140 = 3U;
	volatile uint64_t t25 = 8783488342757LLU;

	t25 = ((x137-x138)+(x139-x140));

	if (t25 != 20389LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x141 = -1;
	static int8_t x142 = -1;
	static volatile int8_t x143 = -1;
	int64_t t26 = INT64_MAX;

	t26 = ((x141-x142)+(x143-x144));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = 483128;
	int8_t x147 = 0;
	int32_t x148 = INT32_MAX;
	volatile uint64_t t27 = 130229LLU;

	t27 = ((x145-x146)+(x147-x148));

	if (t27 != 18446744071562550011LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = INT16_MIN;
	int16_t x160 = 10482;

	t28 = ((x157-x158)+(x159-x160));

	if (t28 != 9223372036854732617LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = 835348635LLU;
	int64_t x162 = -1LL;
	static uint32_t x163 = 7509U;
	int64_t x164 = -1LL;
	volatile uint64_t t29 = 43600431LLU;

	t29 = ((x161-x162)+(x163-x164));

	if (t29 != 835356146LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x165 = 207LLU;
	volatile int16_t x168 = -1;
	volatile uint64_t t30 = 7993912181540LLU;

	t30 = ((x165-x166)+(x167-x168));

	if (t30 != 18446744073709533426LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x169 = 1679U;
	int16_t x172 = INT16_MIN;
	int32_t t31 = -13607613;

	t31 = ((x169-x170)+(x171-x172));

	if (t31 != 99928) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = 236152954;
	int8_t x182 = -1;
	int16_t x183 = -1;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t32 = 460;

	t32 = ((x181-x182)+(x183-x184));

	if (t32 != 236087419) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = 3034LL;
	int16_t x187 = 0;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int64_t t33 = 710670087943034209LL;

	t33 = ((x185-x186)+(x187-x188));

	if (t33 != -62501LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x197 = UINT32_MAX;
	static uint32_t x198 = 112499U;
	int64_t x199 = 898290161626LL;
	int32_t x200 = INT32_MIN;
	static int64_t t34 = -562461708650356859LL;

	t34 = ((x197-x198)+(x199-x200));

	if (t34 != 904732500070LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = 81;
	volatile int64_t x202 = -1LL;
	static volatile int8_t x203 = INT8_MAX;
	int16_t x204 = -1;
	int64_t t35 = -2191696LL;

	t35 = ((x201-x202)+(x203-x204));

	if (t35 != 210LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MAX;
	static uint32_t x207 = 4058154U;
	int64_t x208 = INT64_MAX;
	volatile int64_t t36 = -47165773LL;

	t36 = ((x205-x206)+(x207-x208));

	if (t36 != -9223372036850717525LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = 26;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = -1;
	int64_t x212 = INT64_MIN;

	t37 = ((x209-x210)+(x211-x212));

	if (t37 != 9223372036854775578LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x213 = 71U;
	int64_t x214 = -13718931011LL;
	int8_t x216 = 1;
	int64_t t38 = -4246688073066LL;

	t38 = ((x213-x214)+(x215-x216));

	if (t38 != 13718996616LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x218 = 4324004660894479102LLU;
	volatile uint8_t x219 = UINT8_MAX;

	t39 = ((x217-x218)+(x219-x220));

	if (t39 != 14122739437189374009LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x223 = 1546333104U;
	int64_t t40 = -350436366544971349LL;

	t40 = ((x221-x222)+(x223-x224));

	if (t40 != -9223372035308409935LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = 0;
	volatile int32_t x231 = -142986;
	uint64_t x232 = 3501614151LLU;
	volatile uint64_t t41 = 3622186LLU;

	t41 = ((x229-x230)+(x231-x232));

	if (t41 != 18446744070207794351LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x237 = INT16_MIN;
	uint16_t x238 = 17U;
	int16_t x240 = -2049;
	volatile int32_t t42 = -10;

	t42 = ((x237-x238)+(x239-x240));

	if (t42 != -30735) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x241 = 92U;
	int8_t x242 = -1;
	uint16_t x243 = 2U;
	static volatile int64_t t43 = 56696LL;

	t43 = ((x241-x242)+(x243-x244));

	if (t43 != -2329LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 0U;
	volatile int64_t t44 = -1171351512LL;

	t44 = ((x245-x246)+(x247-x248));

	if (t44 != -13672LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x249 = UINT64_MAX;
	uint8_t x250 = 0U;
	uint32_t x252 = UINT32_MAX;

	t45 = ((x249-x250)+(x251-x252));

	if (t45 != 4294934528LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x257 = -3;
	int32_t x258 = 1108549;
	int16_t x259 = INT16_MAX;
	uint8_t x260 = 99U;

	t46 = ((x257-x258)+(x259-x260));

	if (t46 != -1075884) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x261 = -1LL;
	static uint32_t x263 = UINT32_MAX;
	uint8_t x264 = 2U;
	int64_t t47 = 65553966668039LL;

	t47 = ((x261-x262)+(x263-x264));

	if (t47 != 4294967293LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x265 = 9280U;
	volatile int8_t x266 = -1;
	int64_t x267 = 23LL;
	uint16_t x268 = 1752U;
	int64_t t48 = -2681358LL;

	t48 = ((x265-x266)+(x267-x268));

	if (t48 != 7552LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = 78268046692LLU;
	int8_t x272 = -1;
	volatile uint64_t t49 = 7769220628541621748LLU;

	t49 = ((x269-x270)+(x271-x272));

	if (t49 != 18446743993294047402LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = 1;
	uint32_t x274 = 613045U;
	uint64_t x275 = 1673461788212314062LLU;
	volatile int64_t x276 = 15741535902LL;

	t50 = ((x273-x274)+(x275-x276));

	if (t50 != 1673461776765132412LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x278 = -1;
	static int16_t x279 = -1;
	int16_t x280 = INT16_MAX;
	volatile uint64_t t51 = 493LLU;

	t51 = ((x277-x278)+(x279-x280));

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x285 = -1;
	uint64_t x287 = 11886712LLU;
	static uint64_t t52 = 937960LLU;

	t52 = ((x285-x286)+(x287-x288));

	if (t52 != 11886707LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int16_t x291 = 11179;
	static int16_t x292 = -1;
	uint64_t t53 = 25352426369LLU;

	t53 = ((x289-x290)+(x291-x292));

	if (t53 != 9223372036854786987LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	volatile uint32_t x295 = UINT32_MAX;
	uint64_t x296 = 1038480LLU;

	t54 = ((x293-x294)+(x295-x296));

	if (t54 != 4293961838LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = -491;
	int16_t x298 = 47;
	int32_t t55 = 12888059;

	t55 = ((x297-x298)+(x299-x300));

	if (t55 != 28822) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x309 = -8043;
	int16_t x310 = INT16_MIN;
	static int8_t x311 = -1;
	int8_t x312 = INT8_MAX;

	t56 = ((x309-x310)+(x311-x312));

	if (t56 != 24597) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x317 = -1;
	int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	int32_t x320 = -37264;
	int64_t t57 = -496540473145974LL;

	t57 = ((x317-x318)+(x319-x320));

	if (t57 != -9223372036854738544LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t58 = 243394514LL;

	t58 = ((x321-x322)+(x323-x324));

	if (t58 != 2147483644LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x325 = -1;
	volatile uint64_t x327 = 42071925048006698LLU;
	int16_t x328 = 481;
	uint64_t t59 = 2064520LLU;

	t59 = ((x325-x326)+(x327-x328));

	if (t59 != 9265443961902782024LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x334 = -1;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t60 = 70415701295475444LLU;

	t60 = ((x333-x334)+(x335-x336));

	if (t60 != 107LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x337 = -1;
	int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	static uint32_t t61 = 50363U;

	t61 = ((x337-x338)+(x339-x340));

	if (t61 != 2147483537U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x341 = 798778LL;
	uint64_t x343 = 582366122734135536LLU;

	t62 = ((x341-x342)+(x343-x344));

	if (t62 != 582366122734934075LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x345 = UINT8_MAX;
	int32_t x346 = -20976755;
	int8_t x348 = INT8_MIN;
	static int32_t t63 = -1055008447;

	t63 = ((x345-x346)+(x347-x348));

	if (t63 != 20977176) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x354 = 3U;
	int16_t x355 = -1;
	volatile uint32_t x356 = 48792U;
	uint32_t t64 = 158674U;

	t64 = ((x353-x354)+(x355-x356));

	if (t64 != 4294951267U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile int32_t x362 = INT32_MAX;
	int32_t x363 = -1;
	volatile uint64_t t65 = 2681041654LLU;

	t65 = ((x361-x362)+(x363-x364));

	if (t65 != 18446744071562068121LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x365 = UINT8_MAX;
	uint8_t x366 = UINT8_MAX;
	static volatile uint8_t x367 = 0U;
	int8_t x368 = -1;
	int32_t t66 = -2;

	t66 = ((x365-x366)+(x367-x368));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x370 = -1LL;
	static int16_t x372 = -1;
	volatile int64_t t67 = -14098087550LL;

	t67 = ((x369-x370)+(x371-x372));

	if (t67 != -2147483639LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x373 = 18U;
	static volatile int32_t x374 = -435766;
	uint8_t x375 = 2U;

	t68 = ((x373-x374)+(x375-x376));

	if (t68 != 435914) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x377 = UINT8_MAX;
	int32_t x378 = 222360;
	volatile uint16_t x379 = 3649U;
	int32_t x380 = 49636;

	t69 = ((x377-x378)+(x379-x380));

	if (t69 != -268092) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x382 = 1666U;
	uint8_t x383 = 21U;
	uint8_t x384 = 23U;
	uint32_t t70 = 577020401U;

	t70 = ((x381-x382)+(x383-x384));

	if (t70 != 4294932860U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x390 = INT32_MIN;
	int16_t x391 = -1;
	static uint32_t x392 = 515276U;
	uint64_t t71 = 642060LLU;

	t71 = ((x389-x390)+(x391-x392));

	if (t71 != 6604728232LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x393 = INT16_MIN;
	volatile uint8_t x394 = 0U;
	int32_t x395 = INT32_MIN;
	uint64_t t72 = 2133LLU;

	t72 = ((x393-x394)+(x395-x396));

	if (t72 != 18445764250642677177LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = 761U;
	int32_t x419 = 18538;
	uint64_t x420 = 94729533074LLU;
	uint64_t t73 = 214451296326LLU;

	t73 = ((x417-x418)+(x419-x420));

	if (t73 != 18446743978980003551LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = -1;
	uint64_t x427 = 7247980LLU;
	volatile uint64_t t74 = 1LLU;

	t74 = ((x425-x426)+(x427-x428));

	if (t74 != 7247721LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x429 = 6;
	static int8_t x430 = INT8_MAX;
	volatile int32_t x432 = -1;
	static volatile uint32_t t75 = 5655852U;

	t75 = ((x429-x430)+(x431-x432));

	if (t75 != 4349U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x433 = -1;
	static volatile int8_t x434 = -7;
	volatile uint8_t x435 = UINT8_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t76 = -2554;

	t76 = ((x433-x434)+(x435-x436));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	static volatile int32_t x439 = 277;
	uint64_t t77 = 8445LLU;

	t77 = ((x437-x438)+(x439-x440));

	if (t77 != 2147483798LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x445 = -753538812;
	static volatile uint64_t x446 = 2644296544873713919LLU;
	uint64_t x447 = UINT64_MAX;
	static volatile int16_t x448 = INT16_MIN;
	static volatile uint64_t t78 = 1898950800914620320LLU;

	t78 = ((x445-x446)+(x447-x448));

	if (t78 != 15802447528082331652LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x450 = UINT64_MAX;
	static int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	static volatile uint64_t t79 = 113LLU;

	t79 = ((x449-x450)+(x451-x452));

	if (t79 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x453 = 1376;
	uint64_t x454 = 15672652565LLU;
	int16_t x455 = -1;
	static int16_t x456 = -1;
	volatile uint64_t t80 = 499485260075895LLU;

	t80 = ((x453-x454)+(x455-x456));

	if (t80 != 18446744058036900427LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	uint64_t x459 = 11405953LLU;
	volatile uint32_t x460 = UINT32_MAX;
	uint64_t t81 = 3367016LLU;

	t81 = ((x457-x458)+(x459-x460));

	if (t81 != 18446744069425990274LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x465 = -1LL;
	volatile uint16_t x466 = 320U;
	static volatile int32_t x467 = INT32_MIN;
	static int64_t x468 = 7831002732502LL;
	static volatile int64_t t82 = 65791749173149LL;

	t82 = ((x465-x466)+(x467-x468));

	if (t82 != -7833150216471LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x473 = 7;
	int32_t x474 = -1;
	static uint64_t x475 = 36LLU;
	volatile uint16_t x476 = UINT16_MAX;
	uint64_t t83 = 5136091444405510912LLU;

	t83 = ((x473-x474)+(x475-x476));

	if (t83 != 18446744073709486125LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x481 = -80621853709LL;
	int16_t x482 = INT16_MIN;
	int16_t x484 = -1;
	uint64_t t84 = 52953570409981873LLU;

	t84 = ((x481-x482)+(x483-x484));

	if (t84 != 18446743993313384484LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x485 = UINT64_MAX;
	int8_t x486 = 24;
	static int16_t x487 = 1;
	static int8_t x488 = INT8_MIN;
	uint64_t t85 = 53902498LLU;

	t85 = ((x485-x486)+(x487-x488));

	if (t85 != 104LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x493 = INT8_MIN;
	static volatile uint64_t x494 = 438379LLU;
	static int64_t x495 = INT64_MAX;
	int16_t x496 = 8;
	static uint64_t t86 = 6188281150LLU;

	t86 = ((x493-x494)+(x495-x496));

	if (t86 != 9223372036854337292LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x497 = INT8_MIN;
	int16_t x500 = 0;
	int32_t t87 = 0;

	t87 = ((x497-x498)+(x499-x500));

	if (t87 != 2147417984) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = -5294807LL;
	int16_t x502 = -10733;
	uint16_t x503 = 80U;
	int8_t x504 = -31;
	volatile int64_t t88 = -109490103395112792LL;

	t88 = ((x501-x502)+(x503-x504));

	if (t88 != -5283963LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x505 = UINT64_MAX;
	static uint8_t x506 = UINT8_MAX;
	uint32_t x507 = UINT32_MAX;
	int8_t x508 = INT8_MIN;
	static uint64_t t89 = 631536128LLU;

	t89 = ((x505-x506)+(x507-x508));

	if (t89 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x509 = INT8_MIN;
	uint8_t x510 = UINT8_MAX;
	uint32_t x511 = UINT32_MAX;
	static int8_t x512 = -1;

	t90 = ((x509-x510)+(x511-x512));

	if (t90 != 4294966913U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x518 = 14U;
	uint64_t x519 = 30073LLU;
	uint64_t x520 = 3606716898943209633LLU;
	static volatile uint64_t t91 = 24949221276556989LLU;

	t91 = ((x517-x518)+(x519-x520));

	if (t91 != 14840027174766400642LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	int64_t x523 = INT64_MIN;
	int8_t x524 = -1;

	t92 = ((x521-x522)+(x523-x524));

	if (t92 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x525 = -1LL;
	static int32_t x526 = 916812;
	volatile uint8_t x527 = 12U;
	int32_t x528 = -1;
	volatile int64_t t93 = -22205LL;

	t93 = ((x525-x526)+(x527-x528));

	if (t93 != -916800LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x533 = -1;
	static volatile int32_t x534 = -6;
	int16_t x535 = 693;
	uint32_t x536 = 15956566U;
	static volatile uint32_t t94 = 9U;

	t94 = ((x533-x534)+(x535-x536));

	if (t94 != 4279011428U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x537 = INT32_MIN;
	volatile int32_t x538 = -1;
	int8_t x539 = -32;
	static int16_t x540 = INT16_MIN;
	int32_t t95 = 0;

	t95 = ((x537-x538)+(x539-x540));

	if (t95 != -2147450911) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x545 = INT32_MIN;
	int64_t x546 = -23841017732LL;
	static int32_t x548 = INT32_MIN;
	volatile int64_t t96 = 79180646LL;

	t96 = ((x545-x546)+(x547-x548));

	if (t96 != 23841017731LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x549 = INT8_MAX;
	static uint64_t x550 = 0LLU;
	int64_t x551 = 615237011846776324LL;
	static volatile uint64_t t97 = 1189591190472199LLU;

	t97 = ((x549-x550)+(x551-x552));

	if (t97 != 615237011846775384LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x569 = INT8_MIN;
	uint64_t x570 = 643LLU;
	int16_t x571 = 26;
	static volatile uint16_t x572 = 17U;
	static volatile uint64_t t98 = 172429448682259LLU;

	t98 = ((x569-x570)+(x571-x572));

	if (t98 != 18446744073709550854LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x577 = 0;
	int16_t x579 = INT16_MAX;
	static int32_t t99 = -2981;

	t99 = ((x577-x578)+(x579-x580));

	if (t99 != 32990) { NG(); } else { ; }
	
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

