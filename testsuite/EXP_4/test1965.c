#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
uint16_t x10 = 5U;
uint16_t x12 = 21249U;
volatile int16_t x13 = INT16_MAX;
int64_t x15 = INT64_MIN;
static int64_t x23 = INT64_MIN;
int16_t x25 = INT16_MIN;
volatile int32_t t6 = 664;
volatile int32_t t10 = -10;
uint16_t x54 = 23780U;
volatile int8_t x58 = -57;
static volatile int32_t t19 = 291083;
int64_t x94 = -1LL;
int8_t x95 = 57;
volatile int32_t t24 = -364;
volatile uint64_t t26 = 795813LLU;
static uint64_t x113 = 3798LLU;
int64_t x118 = -1LL;
static int64_t t28 = 206020564LL;
static volatile int64_t x124 = INT64_MIN;
static int64_t x128 = 206233863286856LL;
int32_t x130 = -7;
static volatile int16_t x138 = -1;
volatile int32_t t33 = INT32_MIN;
int16_t x149 = INT16_MIN;
volatile int8_t x150 = -1;
static volatile int32_t x152 = INT32_MIN;
int8_t x153 = INT8_MIN;
static uint64_t x160 = UINT64_MAX;
int32_t x164 = 98247;
volatile uint32_t x175 = UINT32_MAX;
volatile int32_t t41 = -6657;
uint64_t x179 = 720144156715LLU;
static int8_t x182 = INT8_MIN;
volatile int32_t x184 = INT32_MIN;
static int32_t t44 = 258009;
static volatile uint16_t x191 = 185U;
static volatile int64_t t46 = INT64_MIN;
static uint16_t x204 = UINT16_MAX;
volatile int32_t t48 = -7;
volatile int32_t t51 = 1;
static uint32_t x220 = 334U;
uint32_t x231 = UINT32_MAX;
volatile int32_t t55 = 13;
int64_t x242 = -1LL;
uint64_t x256 = 25802873422592LLU;
volatile int32_t t61 = -15;
int32_t x272 = INT32_MIN;
static volatile uint64_t t64 = UINT64_MAX;
volatile uint64_t x273 = UINT64_MAX;
uint16_t x276 = 67U;
volatile uint64_t t65 = UINT64_MAX;
int64_t t67 = 1752231824526993755LL;
static int8_t x290 = INT8_MIN;
int16_t x294 = INT16_MIN;
static int64_t t70 = 4376102078259913327LL;
volatile int16_t x299 = -1;
int16_t x304 = INT16_MAX;
static uint32_t x305 = 26263882U;
static volatile uint64_t t75 = 7966LLU;
volatile int8_t x325 = INT8_MIN;
volatile int64_t x330 = 520424LL;
static uint8_t x349 = 5U;
volatile int32_t t83 = 55;
static uint16_t x353 = 1U;
int16_t x354 = 7;
int64_t x359 = INT64_MIN;
uint8_t x370 = UINT8_MAX;
static int8_t x371 = INT8_MIN;
int8_t x378 = INT8_MIN;
uint64_t x381 = 6828622624047756LLU;
int64_t x383 = INT64_MIN;
volatile uint32_t x385 = 814381U;
int32_t t94 = -3;
int8_t x400 = INT8_MAX;
int16_t x401 = INT16_MIN;
int32_t t96 = 1084;
int32_t t98 = -195543620;


void f0(void) {
	volatile int16_t x1 = -1;
	static volatile uint16_t x2 = 19008U;
	int64_t x3 = -1LL;
	volatile int32_t t0 = 97323;

	t0 = (x1-(x2<(x3|x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 1650459795408274360LLU;
	uint32_t x6 = 42U;
	volatile int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 494LLU;

	t1 = (x5-(x6<(x7|x8)));

	if (t1 != 1650459795408274359LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	static uint8_t x11 = 19U;
	volatile int32_t t2 = 38924;

	t2 = (x9-(x10<(x11|x12)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 0U;
	volatile int32_t x16 = INT32_MAX;
	static int32_t t3 = -35112;

	t3 = (x13-(x14<(x15|x16)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 5;
	int32_t x18 = INT32_MIN;
	volatile uint32_t x19 = 171U;
	uint32_t x20 = 2670U;
	int32_t t4 = 2105;

	t4 = (x17-(x18<(x19|x20)));

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int16_t x22 = -1329;
	volatile uint64_t x24 = 27468203216749LLU;
	static volatile int32_t t5 = -1;

	t5 = (x21-(x22<(x23|x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 38U;
	uint64_t x27 = UINT64_MAX;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25-(x26<(x27|x28)));

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static volatile uint16_t x30 = 3436U;
	int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = -110940852;

	t7 = (x29-(x30<(x31|x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 989020720U;
	int8_t x34 = INT8_MIN;
	int16_t x35 = 1;
	volatile uint8_t x36 = UINT8_MAX;
	uint32_t t8 = 131757779U;

	t8 = (x33-(x34<(x35|x36)));

	if (t8 != 989020719U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1393326666963LLU;
	uint64_t x38 = 6211790833310669LLU;
	static int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;
	uint64_t t9 = 2277365LLU;

	t9 = (x37-(x38<(x39|x40)));

	if (t9 != 1393326666962LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 7U;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;

	t10 = (x41-(x42<(x43|x44)));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 23U;
	volatile int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	static volatile int16_t x48 = -1;
	volatile int32_t t11 = -1;

	t11 = (x45-(x46<(x47|x48)));

	if (t11 != 23) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1959U;
	static uint16_t x50 = 26192U;
	static int16_t x51 = INT16_MIN;
	uint64_t x52 = 415LLU;
	uint32_t t12 = 1832319847U;

	t12 = (x49-(x50<(x51|x52)));

	if (t12 != 1958U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int32_t t13 = 10;

	t13 = (x53-(x54<(x55|x56)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 17U;
	uint32_t x59 = 479U;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -16119764;

	t14 = (x57-(x58<(x59|x60)));

	if (t14 != 17) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = INT8_MIN;
	static int8_t x62 = 23;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 23;

	t15 = (x61-(x62<(x63|x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int32_t x68 = -1;
	int32_t t16 = 845319;

	t16 = (x65-(x66<(x67|x68)));

	if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 43;
	static int16_t x70 = -1;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 125;

	t17 = (x69-(x70<(x71|x72)));

	if (t17 != 43) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MAX;
	static volatile uint8_t x78 = 85U;
	uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 27255U;
	int32_t t18 = 12429;

	t18 = (x77-(x78<(x79|x80)));

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;

	t19 = (x81-(x82<(x83|x84)));

	if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 115U;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t20 = 11583;

	t20 = (x85-(x86<(x87|x88)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static volatile int32_t x90 = -85;
	int32_t x91 = -1;
	volatile uint16_t x92 = 7U;
	int32_t t21 = 230821;

	t21 = (x89-(x90<(x91|x92)));

	if (t21 != -32769) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 4831350U;
	volatile uint64_t x96 = UINT64_MAX;
	volatile uint32_t t22 = 45U;

	t22 = (x93-(x94<(x95|x96)));

	if (t22 != 4831350U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 94497594LLU;
	static int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;
	uint64_t t23 = 168LLU;

	t23 = (x97-(x98<(x99|x100)));

	if (t23 != 94497593LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	static uint32_t x102 = 3U;
	volatile int32_t x103 = INT32_MIN;
	volatile uint32_t x104 = 63968763U;

	t24 = (x101-(x102<(x103|x104)));

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -327LL;
	volatile int32_t x106 = -8328423;
	volatile int16_t x107 = INT16_MAX;
	int16_t x108 = INT16_MAX;
	volatile int64_t t25 = 1254452628988LL;

	t25 = (x105-(x106<(x107|x108)));

	if (t25 != -328LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x109 = 15LLU;
	int16_t x110 = INT16_MIN;
	volatile int8_t x111 = 2;
	static volatile uint64_t x112 = UINT64_MAX;

	t26 = (x109-(x110<(x111|x112)));

	if (t26 != 14LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = -1;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;
	volatile uint64_t t27 = 18229855695LLU;

	t27 = (x113-(x114<(x115|x116)));

	if (t27 != 3798LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -797833241112199LL;
	uint64_t x119 = UINT64_MAX;
	uint32_t x120 = 371544U;

	t28 = (x117-(x118<(x119|x120)));

	if (t28 != -797833241112199LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -5;
	uint8_t x122 = 1U;
	volatile int16_t x123 = -1;
	int32_t t29 = 3614;

	t29 = (x121-(x122<(x123|x124)));

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 384U;
	volatile uint8_t x126 = 104U;
	int16_t x127 = -11797;
	static uint32_t t30 = 741U;

	t30 = (x125-(x126<(x127|x128)));

	if (t30 != 384U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	int16_t x131 = 3552;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t31 = 1;

	t31 = (x129-(x130<(x131|x132)));

	if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 3640468U;
	uint16_t x135 = 4U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 1215975;

	t32 = (x133-(x134<(x135|x136)));

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = INT32_MIN;
	static uint64_t x139 = UINT64_MAX;
	volatile int8_t x140 = -1;

	t33 = (x137-(x138<(x139|x140)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = 2096U;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	int32_t t34 = INT32_MIN;

	t34 = (x141-(x142<(x143|x144)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint64_t x146 = 61LLU;
	int16_t x147 = INT16_MIN;
	static int32_t x148 = INT32_MIN;
	static uint32_t t35 = 52492353U;

	t35 = (x145-(x146<(x147|x148)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x151 = INT32_MIN;
	int32_t t36 = 79;

	t36 = (x149-(x150<(x151|x152)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = INT16_MIN;
	int32_t x155 = -11;
	int8_t x156 = INT8_MAX;
	volatile int32_t t37 = 11344;

	t37 = (x153-(x154<(x155|x156)));

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MIN;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MAX;
	static int64_t t38 = INT64_MIN;

	t38 = (x157-(x158<(x159|x160)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 201LLU;
	uint32_t x162 = 2142566329U;
	int8_t x163 = INT8_MIN;
	uint64_t t39 = 4016432568846554LLU;

	t39 = (x161-(x162<(x163|x164)));

	if (t39 != 200LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 253372647657478022LLU;
	int8_t x166 = 1;
	uint32_t x167 = 1103216U;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t40 = 194523110366794LLU;

	t40 = (x165-(x166<(x167|x168)));

	if (t40 != 253372647657478022LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	volatile uint32_t x176 = UINT32_MAX;

	t41 = (x173-(x174<(x175|x176)));

	if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -74822275;
	int16_t x178 = -1;
	uint32_t x180 = 280685U;
	volatile int32_t t42 = -87013;

	t42 = (x177-(x178<(x179|x180)));

	if (t42 != -74822275) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 1450759LL;
	static int8_t x183 = -1;
	volatile int64_t t43 = 3329LL;

	t43 = (x181-(x182<(x183|x184)));

	if (t43 != 1450758LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = -1018864LL;
	int16_t x188 = INT16_MIN;

	t44 = (x185-(x186<(x187|x188)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	static uint8_t x190 = UINT8_MAX;
	int64_t x192 = -834980400021LL;
	volatile int32_t t45 = 146940;

	t45 = (x189-(x190<(x191|x192)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	static int16_t x194 = -1;
	uint8_t x195 = 77U;
	volatile uint64_t x196 = UINT64_MAX;

	t46 = (x193-(x194<(x195|x196)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = 4299U;
	volatile int32_t x199 = INT32_MAX;
	int32_t x200 = -1;
	volatile int32_t t47 = INT32_MIN;

	t47 = (x197-(x198<(x199|x200)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -851;
	int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;

	t48 = (x201-(x202<(x203|x204)));

	if (t48 != -852) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = INT16_MIN;
	volatile int32_t x206 = -1;
	static volatile int16_t x207 = INT16_MIN;
	int32_t x208 = -660;
	int32_t t49 = -60662178;

	t49 = (x205-(x206<(x207|x208)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 0U;
	uint32_t x210 = 79638U;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile int32_t t50 = 0;

	t50 = (x209-(x210<(x211|x212)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = 4167760533606772LLU;
	int8_t x215 = -1;
	volatile uint64_t x216 = UINT64_MAX;

	t51 = (x213-(x214<(x215|x216)));

	if (t51 != -32769) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = INT32_MIN;
	uint32_t t52 = UINT32_MAX;

	t52 = (x217-(x218<(x219|x220)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = 824258926469LLU;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MAX;
	volatile int32_t t53 = -4;

	t53 = (x221-(x222<(x223|x224)));

	if (t53 != -129) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x225 = 1803902LLU;
	int16_t x226 = -1;
	int16_t x227 = INT16_MAX;
	int64_t x228 = 285816851400948199LL;
	volatile uint64_t t54 = 1LLU;

	t54 = (x225-(x226<(x227|x228)));

	if (t54 != 1803901LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	int32_t x230 = -165233;
	int32_t x232 = 1;

	t55 = (x229-(x230<(x231|x232)));

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x233 = 3U;
	uint8_t x234 = 112U;
	static int8_t x235 = -5;
	int32_t x236 = INT32_MIN;
	volatile int32_t t56 = -1548189;

	t56 = (x233-(x234<(x235|x236)));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	static volatile uint64_t x238 = 9LLU;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t57 = -17;

	t57 = (x237-(x238<(x239|x240)));

	if (t57 != -129) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int16_t x243 = INT16_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t58 = -376;

	t58 = (x241-(x242<(x243|x244)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 3U;
	int16_t x246 = -7229;
	uint16_t x247 = 12165U;
	int8_t x248 = -1;
	volatile int32_t t59 = 8;

	t59 = (x245-(x246<(x247|x248)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	static uint64_t x250 = UINT64_MAX;
	volatile int64_t x251 = INT64_MAX;
	static int64_t x252 = -7257473897938LL;
	volatile int32_t t60 = 18;

	t60 = (x249-(x250<(x251|x252)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x253 = UINT8_MAX;
	volatile uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 658751U;

	t61 = (x253-(x254<(x255|x256)));

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 31U;
	int64_t x258 = 14017772152147726LL;
	uint32_t x259 = 1083586166U;
	int32_t x260 = INT32_MAX;
	volatile uint32_t t62 = 2650106U;

	t62 = (x257-(x258<(x259|x260)));

	if (t62 != 31U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = -984064768095239784LL;
	volatile int8_t x262 = -1;
	static volatile int32_t x263 = INT32_MAX;
	static int16_t x264 = 1;
	int64_t t63 = -20942886LL;

	t63 = (x261-(x262<(x263|x264)));

	if (t63 != -984064768095239785LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x269 = UINT64_MAX;
	uint32_t x270 = UINT32_MAX;
	volatile int8_t x271 = INT8_MIN;

	t64 = (x269-(x270<(x271|x272)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x274 = -494;
	int32_t x275 = INT32_MIN;

	t65 = (x273-(x274<(x275|x276)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 7U;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -1;
	uint32_t x280 = 198176U;
	volatile int32_t t66 = -1;

	t66 = (x277-(x278<(x279|x280)));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -629681LL;
	static volatile int16_t x282 = 9;
	int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;

	t67 = (x281-(x282<(x283|x284)));

	if (t67 != -629681LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -42;
	static int64_t x286 = INT64_MAX;
	uint32_t x287 = 133417457U;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 8;

	t68 = (x285-(x286<(x287|x288)));

	if (t68 != -42) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	uint32_t x291 = 434165557U;
	uint16_t x292 = 198U;
	int32_t t69 = INT32_MIN;

	t69 = (x289-(x290<(x291|x292)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = 766560897683706LL;
	int64_t x295 = INT64_MIN;
	volatile uint8_t x296 = 31U;

	t70 = (x293-(x294<(x295|x296)));

	if (t70 != 766560897683706LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x297 = 3744U;
	int16_t x298 = 861;
	static volatile int8_t x300 = -1;
	volatile int32_t t71 = -473;

	t71 = (x297-(x298<(x299|x300)));

	if (t71 != 3744) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int32_t t72 = -13;

	t72 = (x301-(x302<(x303|x304)));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x306 = 221642749822774921LLU;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;
	volatile uint32_t t73 = 393406313U;

	t73 = (x305-(x306<(x307|x308)));

	if (t73 != 26263881U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	volatile int16_t x310 = -1;
	static int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MAX;
	int32_t t74 = INT32_MIN;

	t74 = (x309-(x310<(x311|x312)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = INT32_MIN;
	volatile int64_t x315 = 68290691230LL;
	uint16_t x316 = UINT16_MAX;

	t75 = (x313-(x314<(x315|x316)));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = INT64_MAX;
	int64_t x319 = -478902525963519LL;
	static volatile int64_t x320 = INT64_MIN;
	volatile int32_t t76 = 2324;

	t76 = (x317-(x318<(x319|x320)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -13;
	int32_t x322 = INT32_MIN;
	int8_t x323 = 1;
	uint16_t x324 = 19U;
	volatile int32_t t77 = 11879;

	t77 = (x321-(x322<(x323|x324)));

	if (t77 != -14) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t78 = 119;

	t78 = (x325-(x326<(x327|x328)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 4117852LLU;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = 3U;
	uint64_t t79 = 22LLU;

	t79 = (x329-(x330<(x331|x332)));

	if (t79 != 4117852LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x333 = -1;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t80 = -15211373;

	t80 = (x333-(x334<(x335|x336)));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x341 = INT8_MAX;
	int32_t x342 = 1;
	int64_t x343 = INT64_MAX;
	volatile int16_t x344 = INT16_MIN;
	int32_t t81 = -192;

	t81 = (x341-(x342<(x343|x344)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 137LLU;
	uint64_t x346 = 494169850606LLU;
	static int32_t x347 = 5;
	static uint32_t x348 = 4700U;
	uint64_t t82 = 1051LLU;

	t82 = (x345-(x346<(x347|x348)));

	if (t82 != 137LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x350 = 4782807825979LLU;
	static uint8_t x351 = 3U;
	int8_t x352 = -29;

	t83 = (x349-(x350<(x351|x352)));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x355 = 7916LL;
	volatile int8_t x356 = INT8_MIN;
	static volatile int32_t t84 = 2;

	t84 = (x353-(x354<(x355|x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	static uint64_t x358 = 8141386LLU;
	volatile int32_t x360 = INT32_MIN;
	static int32_t t85 = -151984;

	t85 = (x357-(x358<(x359|x360)));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = 0;
	static volatile int32_t x362 = INT32_MIN;
	uint16_t x363 = 82U;
	int8_t x364 = INT8_MAX;
	int32_t t86 = -338497;

	t86 = (x361-(x362<(x363|x364)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = 5785621872962684LL;
	static int64_t x366 = INT64_MIN;
	uint16_t x367 = 20525U;
	static int64_t x368 = INT64_MIN;
	int64_t t87 = -354LL;

	t87 = (x365-(x366<(x367|x368)));

	if (t87 != 5785621872962683LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x369 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t88 = -6;

	t88 = (x369-(x370<(x371|x372)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = -11283;
	uint32_t x374 = 395087149U;
	int32_t x375 = INT32_MAX;
	static uint8_t x376 = UINT8_MAX;
	int32_t t89 = -18950;

	t89 = (x373-(x374<(x375|x376)));

	if (t89 != -11284) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile int32_t x380 = 15657;
	static volatile int32_t t90 = 14;

	t90 = (x377-(x378<(x379|x380)));

	if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x382 = UINT64_MAX;
	int64_t x384 = INT64_MIN;
	volatile uint64_t t91 = 531362374LLU;

	t91 = (x381-(x382<(x383|x384)));

	if (t91 != 6828622624047756LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x386 = -41;
	int8_t x387 = 0;
	static volatile uint16_t x388 = 37U;
	volatile uint32_t t92 = 650619825U;

	t92 = (x385-(x386<(x387|x388)));

	if (t92 != 814380U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x389 = 3;
	int32_t x390 = INT32_MIN;
	int64_t x391 = 994LL;
	static uint32_t x392 = 302U;
	volatile int32_t t93 = 6428;

	t93 = (x389-(x390<(x391|x392)));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = 1728U;
	volatile int32_t x394 = -1;
	uint16_t x395 = 45U;
	uint64_t x396 = 3758943926073LLU;

	t94 = (x393-(x394<(x395|x396)));

	if (t94 != 1728) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x397 = 6078U;
	static uint32_t x398 = 44U;
	volatile int8_t x399 = INT8_MIN;
	static uint32_t t95 = 80U;

	t95 = (x397-(x398<(x399|x400)));

	if (t95 != 6077U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x402 = 13891U;
	volatile int16_t x403 = 3002;
	static volatile uint16_t x404 = 942U;

	t96 = (x401-(x402<(x403|x404)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -106;
	static uint32_t x406 = 103305236U;
	int32_t x407 = -1;
	static uint16_t x408 = 1301U;
	int32_t t97 = -735;

	t97 = (x405-(x406<(x407|x408)));

	if (t97 != -107) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = INT8_MIN;
	volatile int16_t x410 = -1;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = 26U;

	t98 = (x409-(x410<(x411|x412)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = 1;
	uint32_t x414 = 3U;
	int16_t x415 = 7;
	int64_t x416 = INT64_MIN;
	volatile int32_t t99 = -4118;

	t99 = (x413-(x414<(x415|x416)));

	if (t99 != 1) { NG(); } else { ; }
	
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

