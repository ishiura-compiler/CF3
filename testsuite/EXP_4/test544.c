#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -14784;
volatile int8_t x10 = -25;
static volatile uint16_t x13 = 22U;
static int16_t x14 = -1;
int32_t t3 = 684;
uint64_t x17 = UINT64_MAX;
int8_t x21 = INT8_MIN;
int16_t x27 = INT16_MIN;
static int64_t x33 = -12628674LL;
static uint8_t x35 = UINT8_MAX;
int32_t x40 = INT32_MIN;
uint8_t x52 = 10U;
volatile int16_t x58 = -1676;
volatile int16_t x59 = -1;
static uint8_t x61 = 59U;
int32_t x72 = INT32_MIN;
volatile int16_t x83 = -1;
int16_t x87 = 2897;
static int8_t x92 = -1;
int32_t x102 = -1;
int8_t x108 = INT8_MIN;
uint16_t x116 = UINT16_MAX;
int8_t x122 = INT8_MAX;
int8_t x130 = INT8_MIN;
int64_t x131 = -2LL;
int64_t t28 = 1468LL;
static int8_t x134 = INT8_MAX;
int64_t x141 = INT64_MIN;
uint64_t x143 = 628628450067LLU;
static int64_t x147 = -6706LL;
uint8_t x159 = 16U;
int64_t t34 = -95731357691358LL;
uint8_t x163 = UINT8_MAX;
volatile uint8_t x176 = UINT8_MAX;
int32_t x179 = -14383;
volatile int32_t t38 = 211;
static int16_t x181 = INT16_MIN;
int16_t x185 = INT16_MAX;
int32_t x209 = INT32_MAX;
uint32_t x211 = UINT32_MAX;
volatile int8_t x216 = -39;
int32_t x217 = INT32_MAX;
uint32_t x223 = UINT32_MAX;
uint8_t x224 = 1U;
uint32_t x225 = UINT32_MAX;
static volatile int8_t x227 = 3;
static int8_t x252 = INT8_MIN;
static volatile int32_t t52 = 96;
uint64_t x254 = UINT64_MAX;
volatile int64_t x272 = 1079024830LL;
static volatile int64_t t57 = -3777506646019790335LL;
int16_t x273 = INT16_MIN;
volatile uint32_t t58 = 1769600U;
int64_t x291 = INT64_MIN;
int64_t x294 = -1LL;
static volatile int32_t t63 = 0;
volatile uint64_t x303 = 9058123LLU;
uint64_t x305 = 2LLU;
int32_t x313 = INT32_MIN;
static volatile int32_t x314 = -1;
int64_t x322 = -1LL;
uint8_t x340 = UINT8_MAX;
static int16_t x343 = 815;
int64_t x349 = INT64_MIN;
int16_t x353 = INT16_MAX;
int64_t x361 = 4554651076691017LL;
int32_t x368 = 357028;
uint32_t x372 = 596735U;
volatile int16_t x376 = 3;
uint64_t x378 = UINT64_MAX;
int8_t x387 = 3;
volatile int8_t x393 = 22;
volatile uint64_t t84 = 3800153LLU;
static int8_t x416 = INT8_MIN;
uint32_t x417 = 270U;
static volatile int64_t x419 = 108723885LL;
uint16_t x420 = 581U;
int8_t x427 = 1;
uint32_t x431 = 177U;
int16_t x444 = INT16_MIN;
uint16_t x449 = 1220U;
static int16_t x451 = 53;
int8_t x454 = -1;
volatile uint32_t t99 = 363U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile uint8_t x3 = 14U;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -19954134;

	t0 = (x1&(x2*(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x6 = 4U;
	int64_t x7 = -11067LL;
	static int16_t x8 = INT16_MAX;
	volatile int64_t t1 = -123259LL;

	t1 = (x5&(x6*(x7/x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 259379;
	int16_t x11 = -2578;
	static uint64_t x12 = 1071LLU;
	uint64_t t2 = 1766775328081LLU;

	t2 = (x9&(x10*(x11/x12)));

	if (t2 != 192530LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = -541;
	static volatile int8_t x16 = INT8_MIN;

	t3 = (x13&(x14*(x15/x16)));

	if (t3 != 20) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 6574548U;
	int64_t x19 = 0LL;
	volatile int32_t x20 = -1;
	uint64_t t4 = 5LLU;

	t4 = (x17&(x18*(x19/x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	volatile int16_t x23 = -1;
	static int8_t x24 = INT8_MAX;
	int64_t t5 = -431199319995871LL;

	t5 = (x21&(x22*(x23/x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 6U;
	volatile int8_t x26 = INT8_MAX;
	volatile int64_t x28 = -1LL;
	volatile int64_t t6 = -7547065LL;

	t6 = (x25&(x26*(x27/x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = 330660893LL;

	t7 = (x33&(x34*(x35/x36)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MIN;
	volatile int32_t t8 = -14;

	t8 = (x37&(x38*(x39/x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 15;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 3799LLU;
	uint64_t x44 = UINT64_MAX;
	uint64_t t9 = 863160960372569607LLU;

	t9 = (x41&(x42*(x43/x44)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	static volatile int8_t x46 = INT8_MAX;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = 496435393;
	volatile int32_t t10 = 166849;

	t10 = (x45&(x46*(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 1U;
	static int16_t x50 = -1;
	static int16_t x51 = INT16_MIN;
	volatile int32_t t11 = -324976;

	t11 = (x49&(x50*(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int32_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t12 = -1439LL;

	t12 = (x53&(x54*(x55/x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	uint16_t x60 = 4054U;
	int32_t t13 = 4494;

	t13 = (x57&(x58*(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = 1862;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t14 = 357329025LLU;

	t14 = (x61&(x62*(x63/x64)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = 196;
	volatile int8_t x71 = 10;
	int32_t t15 = 3305;

	t15 = (x69&(x70*(x71/x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile uint64_t t16 = 11311LLU;

	t16 = (x73&(x74*(x75/x76)));

	if (t16 != 2147483136LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t17 = 168991237673194LL;

	t17 = (x77&(x78*(x79/x80)));

	if (t17 != 2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	static uint32_t x84 = 451003803U;
	volatile uint32_t t18 = 4849U;

	t18 = (x81&(x82*(x83/x84)));

	if (t18 != 4294967168U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static volatile int8_t x86 = -42;
	int64_t x88 = -1LL;
	volatile int64_t t19 = -36390108682LL;

	t19 = (x85&(x86*(x87/x88)));

	if (t19 != 121674LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = 1566;
	int8_t x90 = INT8_MAX;
	static int16_t x91 = 2805;
	volatile int32_t t20 = 370016;

	t20 = (x89&(x90*(x91/x92)));

	if (t20 != 20) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x97 = INT8_MAX;
	static int8_t x98 = 1;
	int32_t x99 = 14837;
	static volatile int16_t x100 = -1;
	int32_t t21 = -255377;

	t21 = (x97&(x98*(x99/x100)));

	if (t21 != 11) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x101 = INT32_MAX;
	int16_t x103 = -1;
	int16_t x104 = -12473;
	int32_t t22 = 133;

	t22 = (x101&(x102*(x103/x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = INT64_MAX;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int64_t t23 = 3909250744487LL;

	t23 = (x105&(x106*(x107/x108)));

	if (t23 != 2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = 223532095041LL;
	uint8_t x114 = 108U;
	uint16_t x115 = UINT16_MAX;
	volatile int64_t t24 = 7983037228391410LL;

	t24 = (x113&(x114*(x115/x116)));

	if (t24 != 64LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MAX;
	static int16_t x118 = INT16_MIN;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	volatile int64_t t25 = -8LL;

	t25 = (x117&(x118*(x119/x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 228U;
	volatile int8_t x123 = -3;
	int16_t x124 = INT16_MIN;
	static uint32_t t26 = 105U;

	t26 = (x121&(x122*(x123/x124)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -710;
	int64_t x126 = INT64_MIN;
	int8_t x127 = -3;
	int64_t x128 = 2936706270494970822LL;
	volatile int64_t t27 = 31576879240949LL;

	t27 = (x125&(x126*(x127/x128)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	volatile uint8_t x132 = UINT8_MAX;

	t28 = (x129&(x130*(x131/x132)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x135 = INT16_MAX;
	uint64_t x136 = 51374879297564LLU;
	uint64_t t29 = 32138091616875172LLU;

	t29 = (x133&(x134*(x135/x136)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 197117814393LLU;
	static int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 25U;
	static uint64_t t30 = 32150LLU;

	t30 = (x137&(x138*(x139/x140)));

	if (t30 != 1048LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = UINT8_MAX;
	uint8_t x144 = 28U;
	uint64_t t31 = 10414LLU;

	t31 = (x141&(x142*(x143/x144)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -1;
	int32_t x146 = INT32_MIN;
	static volatile int32_t x148 = -1;
	volatile int64_t t32 = 22051979962LL;

	t32 = (x145&(x146*(x147/x148)));

	if (t32 != -14401025343488LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int32_t x150 = -628243;
	int8_t x151 = 0;
	int8_t x152 = 10;
	volatile int32_t t33 = 0;

	t33 = (x149&(x150*(x151/x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = 43389012755327LL;
	int64_t x158 = -5150215LL;
	int8_t x160 = INT8_MIN;

	t34 = (x157&(x158*(x159/x160)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 58;
	int16_t x162 = INT16_MAX;
	volatile uint8_t x164 = 52U;
	volatile int32_t t35 = 425;

	t35 = (x161&(x162*(x163/x164)));

	if (t35 != 56) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x165 = 3181U;
	volatile int16_t x166 = INT16_MIN;
	static int16_t x167 = 480;
	volatile uint64_t x168 = 14497561LLU;
	static volatile uint64_t t36 = 2169464515128780LLU;

	t36 = (x165&(x166*(x167/x168)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = 20U;
	uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MIN;
	uint64_t t37 = 9716818928LLU;

	t37 = (x173&(x174*(x175/x176)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = 11;
	int16_t x180 = INT16_MIN;

	t38 = (x177&(x178*(x179/x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x182 = -56522512;
	int64_t x183 = -1LL;
	static uint32_t x184 = 10U;
	volatile int64_t t39 = -2100433500172471LL;

	t39 = (x181&(x182*(x183/x184)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MAX;
	static uint32_t x188 = UINT32_MAX;
	volatile uint32_t t40 = 4U;

	t40 = (x185&(x186*(x187/x188)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MAX;
	int32_t x198 = -76;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = -11;
	uint64_t t41 = 31595207533LLU;

	t41 = (x197&(x198*(x199/x200)));

	if (t41 != 32692LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = 272827163;
	int8_t x202 = INT8_MIN;
	int8_t x203 = 0;
	int32_t x204 = INT32_MIN;
	static int32_t t42 = -14858571;

	t42 = (x201&(x202*(x203/x204)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = INT16_MIN;
	uint32_t x206 = UINT32_MAX;
	volatile int8_t x207 = INT8_MAX;
	volatile int16_t x208 = INT16_MIN;
	volatile uint32_t t43 = 9316U;

	t43 = (x205&(x206*(x207/x208)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x210 = -1;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t44 = 135811U;

	t44 = (x209&(x210*(x211/x212)));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = -478767241LL;
	int8_t x215 = INT8_MIN;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x213&(x214*(x215/x216)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x218 = 655U;
	static uint8_t x219 = 3U;
	int8_t x220 = -1;
	volatile uint32_t t46 = 1634393017U;

	t46 = (x217&(x218*(x219/x220)));

	if (t46 != 2147481683U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -1;
	uint64_t x222 = UINT64_MAX;
	static uint64_t t47 = 113689LLU;

	t47 = (x221&(x222*(x223/x224)));

	if (t47 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x226 = INT64_MAX;
	uint32_t x228 = 73656U;
	volatile int64_t t48 = 200049LL;

	t48 = (x225&(x226*(x227/x228)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = 123U;
	int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t49 = 0LLU;

	t49 = (x233&(x234*(x235/x236)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x237 = INT32_MAX;
	volatile uint16_t x238 = 172U;
	uint16_t x239 = 23939U;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t50 = 131678659;

	t50 = (x237&(x238*(x239/x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = 231U;
	int16_t x242 = INT16_MAX;
	volatile int32_t x243 = -54964;
	int16_t x244 = INT16_MAX;
	int32_t t51 = -32765023;

	t51 = (x241&(x242*(x243/x244)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int8_t x250 = 9;
	int32_t x251 = INT32_MIN;

	t52 = (x249&(x250*(x251/x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 968U;
	volatile uint32_t x255 = UINT32_MAX;
	volatile int64_t x256 = -1LL;
	uint64_t t53 = 12476610002299LLU;

	t53 = (x253&(x254*(x255/x256)));

	if (t53 != 968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = 28689LL;
	int8_t x258 = -43;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 3572U;
	int64_t t54 = -241LL;

	t54 = (x257&(x258*(x259/x260)));

	if (t54 != 4112LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = INT64_MIN;
	static int8_t x262 = INT8_MAX;
	volatile uint32_t x263 = 239U;
	int8_t x264 = INT8_MAX;
	int64_t t55 = -42829709966LL;

	t55 = (x261&(x262*(x263/x264)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x265 = 2U;
	uint8_t x266 = 0U;
	int32_t x267 = INT32_MAX;
	volatile int8_t x268 = INT8_MAX;
	volatile int32_t t56 = -56;

	t56 = (x265&(x266*(x267/x268)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x269 = INT32_MIN;
	uint8_t x270 = UINT8_MAX;
	int8_t x271 = INT8_MIN;

	t57 = (x269&(x270*(x271/x272)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = 0;
	int8_t x276 = -9;

	t58 = (x273&(x274*(x275/x276)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = INT64_MAX;
	volatile int32_t x282 = -1;
	volatile int64_t x283 = INT64_MIN;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x281&(x282*(x283/x284)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x285 = 1724752U;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = 6;
	volatile int64_t x288 = INT64_MIN;
	volatile uint64_t t60 = 1128LLU;

	t60 = (x285&(x286*(x287/x288)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = -1LL;
	volatile int16_t x290 = -1;
	static int32_t x292 = INT32_MAX;
	int64_t t61 = 0LL;

	t61 = (x289&(x290*(x291/x292)));

	if (t61 != 4294967298LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = INT16_MAX;
	static volatile int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	static int64_t t62 = -308490987453LL;

	t62 = (x293&(x294*(x295/x296)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = INT32_MIN;
	volatile int8_t x298 = -3;
	int16_t x299 = -4;
	int16_t x300 = 674;

	t63 = (x297&(x298*(x299/x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	uint64_t t64 = 17074LLU;

	t64 = (x301&(x302*(x303/x304)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x306 = INT8_MIN;
	static uint16_t x307 = 3U;
	uint8_t x308 = 1U;
	volatile uint64_t t65 = 19570145087LLU;

	t65 = (x305&(x306*(x307/x308)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = -56;
	uint64_t x310 = 706LLU;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = 1;
	volatile uint64_t t66 = 2831543815944066663LLU;

	t66 = (x309&(x310*(x311/x312)));

	if (t66 != 23133448LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x315 = 0U;
	int32_t x316 = 1939;
	uint32_t t67 = 36U;

	t67 = (x313&(x314*(x315/x316)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x323 = -1;
	int8_t x324 = INT8_MIN;
	static int64_t t68 = 109721576811LL;

	t68 = (x321&(x322*(x323/x324)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = -31;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	int8_t x332 = 2;
	int32_t t69 = 3;

	t69 = (x329&(x330*(x331/x332)));

	if (t69 != -16320) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = 3955;
	uint64_t x334 = 384LLU;
	int8_t x335 = -1;
	static int64_t x336 = -509079988507748868LL;
	static volatile uint64_t t70 = 118943830LLU;

	t70 = (x333&(x334*(x335/x336)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	static volatile uint16_t x339 = UINT16_MAX;
	uint64_t t71 = 139203339962LLU;

	t71 = (x337&(x338*(x339/x340)));

	if (t71 != 18446744073701130240LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MIN;
	static int8_t x342 = INT8_MIN;
	uint16_t x344 = 50U;
	volatile int32_t t72 = 1004932614;

	t72 = (x341&(x342*(x343/x344)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MAX;
	static uint16_t x346 = 2632U;
	uint16_t x347 = 8163U;
	int32_t x348 = -1;
	static volatile int64_t t73 = 8267796157LL;

	t73 = (x345&(x346*(x347/x348)));

	if (t73 != 9223372036833290792LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = 6365809305186LL;
	static uint8_t x352 = UINT8_MAX;
	static int64_t t74 = INT64_MIN;

	t74 = (x349&(x350*(x351/x352)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x354 = 17063692073488LLU;
	uint64_t x355 = UINT64_MAX;
	static int64_t x356 = INT64_MAX;
	uint64_t t75 = 2155934004611LLU;

	t75 = (x353&(x354*(x355/x356)));

	if (t75 != 29728LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x362 = INT32_MIN;
	static uint64_t x363 = 26929499833LLU;
	int32_t x364 = -29237;
	uint64_t t76 = 422253826045282LLU;

	t76 = (x361&(x362*(x363/x364)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x365 = INT64_MAX;
	int8_t x366 = -2;
	uint8_t x367 = 117U;
	int64_t t77 = -36461908122LL;

	t77 = (x365&(x366*(x367/x368)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x369 = UINT16_MAX;
	int32_t x370 = 26584;
	uint16_t x371 = 730U;
	uint32_t t78 = 12952U;

	t78 = (x369&(x370*(x371/x372)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x373 = 101U;
	int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int64_t t79 = 57465386019327LL;

	t79 = (x373&(x374*(x375/x376)));

	if (t79 != 32LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 31852U;
	int32_t x379 = -681998002;
	volatile uint16_t x380 = 16U;
	uint64_t t80 = 1934369477873201LLU;

	t80 = (x377&(x378*(x379/x380)));

	if (t80 != 25704LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = UINT32_MAX;
	uint8_t x383 = 22U;
	uint32_t x384 = UINT32_MAX;
	int64_t t81 = 4113147321LL;

	t81 = (x381&(x382*(x383/x384)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x385 = -1LL;
	volatile uint64_t x386 = 66305578926LLU;
	int16_t x388 = INT16_MIN;
	uint64_t t82 = 23314LLU;

	t82 = (x385&(x386*(x387/x388)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t83 = -4227991;

	t83 = (x389&(x390*(x391/x392)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x394 = 54;
	volatile uint64_t x395 = 81153673579662LLU;
	int32_t x396 = INT32_MAX;

	t84 = (x393&(x394*(x395/x396)));

	if (t84 != 20LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = INT8_MIN;
	int64_t x398 = 24301633LL;
	int32_t x399 = INT32_MIN;
	int16_t x400 = -33;
	static int64_t t85 = 66963621LL;

	t85 = (x397&(x398*(x399/x400)));

	if (t85 != 1581435134502784LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x402 = UINT8_MAX;
	volatile uint32_t x403 = 46499U;
	int16_t x404 = 30;
	volatile uint32_t t86 = 239892444U;

	t86 = (x401&(x402*(x403/x404)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x405 = -1;
	volatile uint64_t x406 = 23185LLU;
	volatile uint32_t x407 = 95827U;
	volatile int64_t x408 = INT64_MAX;
	uint64_t t87 = 1552810LLU;

	t87 = (x405&(x406*(x407/x408)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = 0U;
	static int16_t x410 = -1;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = 180797789U;
	volatile uint32_t t88 = 11U;

	t88 = (x409&(x410*(x411/x412)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = 6982LLU;
	int16_t x414 = 1;
	int32_t x415 = -1;
	volatile uint64_t t89 = 217130293126394616LLU;

	t89 = (x413&(x414*(x415/x416)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x418 = 839946368U;
	int64_t t90 = -6655655752396LL;

	t90 = (x417&(x418*(x419/x420)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x421 = UINT8_MAX;
	volatile int8_t x422 = -1;
	static volatile int64_t x423 = INT64_MAX;
	static int32_t x424 = INT32_MAX;
	volatile int64_t t91 = -1LL;

	t91 = (x421&(x422*(x423/x424)));

	if (t91 != 254LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x425 = 1722861936137LL;
	uint32_t x426 = 11364U;
	int16_t x428 = 1173;
	static int64_t t92 = -107773761297834LL;

	t92 = (x425&(x426*(x427/x428)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = -1;
	volatile int64_t x430 = INT64_MIN;
	int16_t x432 = INT16_MIN;
	int64_t t93 = 101462642715LL;

	t93 = (x429&(x430*(x431/x432)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = -1LL;
	int64_t x434 = INT64_MAX;
	static volatile uint64_t x435 = 3333883225299522LLU;
	static int32_t x436 = -1;
	static volatile uint64_t t94 = 52782649594354853LLU;

	t94 = (x433&(x434*(x435/x436)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = INT32_MIN;
	uint64_t x438 = UINT64_MAX;
	volatile uint8_t x439 = 14U;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t95 = 196205329LLU;

	t95 = (x437&(x438*(x439/x440)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x442 = 3448515882269686049LLU;
	int64_t x443 = -2006LL;
	volatile uint64_t t96 = 26450LLU;

	t96 = (x441&(x442*(x443/x444)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x445 = INT32_MAX;
	uint8_t x446 = 70U;
	uint16_t x447 = UINT16_MAX;
	int8_t x448 = -6;
	int32_t t97 = -1672549;

	t97 = (x445&(x446*(x447/x448)));

	if (t97 != 2146719108) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x450 = UINT8_MAX;
	int64_t x452 = -647875355905LL;
	volatile int64_t t98 = -80686194760202901LL;

	t98 = (x449&(x450*(x451/x452)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = INT16_MIN;
	uint32_t x455 = 143U;
	int32_t x456 = INT32_MIN;

	t99 = (x453&(x454*(x455/x456)));

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

