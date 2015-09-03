#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = -62342;
int32_t x14 = INT32_MIN;
int8_t x20 = -1;
uint16_t x24 = UINT16_MAX;
int32_t t5 = -1641291;
volatile int32_t x30 = INT32_MIN;
uint32_t x33 = UINT32_MAX;
static int64_t x34 = -1LL;
int8_t x36 = INT8_MIN;
volatile uint16_t x42 = 1U;
int32_t t12 = 4;
int32_t x57 = 104053377;
static uint16_t x63 = 242U;
int32_t x66 = INT32_MAX;
int16_t x70 = -1;
uint64_t x71 = 11873934LLU;
volatile uint32_t x73 = UINT32_MAX;
int32_t x78 = INT32_MIN;
int16_t x81 = -1;
volatile int64_t x84 = 141345528629LL;
volatile int64_t t19 = 3990561205683LL;
int16_t x96 = -41;
static int8_t x98 = -1;
int8_t x109 = 1;
volatile int32_t t27 = 112657370;
int16_t x119 = INT16_MIN;
int32_t t29 = 244;
int64_t x131 = -1LL;
static uint64_t x135 = 8999LLU;
volatile int32_t t33 = 10466;
static int8_t x144 = -1;
uint64_t x146 = UINT64_MAX;
volatile int64_t x149 = 60005572LL;
int64_t x151 = 1018917899095813215LL;
int16_t x152 = INT16_MAX;
int8_t x153 = -1;
static int8_t x159 = 1;
static uint64_t t39 = 30513783924LLU;
static volatile int16_t x170 = INT16_MIN;
int64_t t41 = -9887497080630088LL;
volatile uint64_t t42 = 3120LLU;
int64_t x178 = INT64_MIN;
uint64_t x179 = 924102LLU;
int16_t x181 = INT16_MAX;
static int32_t t46 = 12322;
uint8_t x197 = 12U;
int8_t x200 = INT8_MIN;
int8_t x209 = INT8_MAX;
int8_t x214 = -18;
volatile int8_t x215 = 0;
int32_t x216 = INT32_MIN;
int64_t x217 = 482676056490207LL;
int32_t x220 = INT32_MAX;
static int64_t t53 = 186338727LL;
int32_t x228 = 2895519;
uint32_t x230 = 8U;
volatile int32_t t56 = 1;
volatile int32_t t57 = -2443646;
volatile uint64_t x245 = 0LLU;
uint32_t x250 = 2996U;
volatile uint32_t x254 = UINT32_MAX;
int16_t x255 = -636;
static volatile uint32_t t60 = 3762824U;
int8_t x261 = INT8_MAX;
int64_t x267 = INT64_MIN;
uint32_t x270 = 28626U;
static int16_t x278 = INT16_MIN;
static int8_t x280 = INT8_MAX;
int64_t t68 = 106502531658LL;
uint16_t x293 = UINT16_MAX;
volatile uint64_t x296 = UINT64_MAX;
int64_t x304 = INT64_MIN;
int8_t x305 = 1;
int64_t x306 = INT64_MAX;
int32_t t73 = -1;
volatile uint64_t x326 = 30845830822495LLU;
volatile int32_t x327 = -2374;
volatile int32_t t78 = 922770;
int8_t x342 = -1;
int64_t t81 = -11967386309288LL;
int8_t x354 = INT8_MIN;
volatile int64_t t83 = 203532662370200135LL;
int64_t x357 = INT64_MAX;
volatile int32_t t88 = -132490;
static int64_t x385 = INT64_MIN;
int32_t x398 = -5295292;
int32_t t93 = -3363;
int32_t x411 = 14444434;
int8_t x412 = INT8_MIN;
volatile uint8_t x413 = 72U;
int16_t x415 = -1;
int16_t x416 = INT16_MAX;
int16_t x420 = INT16_MIN;
int8_t x425 = -57;


void f0(void) {
	int64_t x1 = 338930LL;
	int64_t x2 = -1LL;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -19619159351956LL;

	t0 = ((x1<=x2)+(x3/x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 241U;
	volatile int8_t x6 = INT8_MAX;
	static uint8_t x7 = UINT8_MAX;
	static volatile int8_t x8 = 7;
	static int32_t t1 = -2242;

	t1 = ((x5<=x6)+(x7/x8));

	if (t1 != 36) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = 40;

	t2 = ((x9<=x10)+(x11/x12));

	if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = -1415;
	static volatile int32_t x16 = INT32_MAX;
	int32_t t3 = -363;

	t3 = ((x13<=x14)+(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1127144393300844690LL;
	uint64_t x18 = 2710091962548593LLU;
	uint32_t x19 = 3340U;
	static uint32_t t4 = 82402U;

	t4 = ((x17<=x18)+(x19/x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static uint64_t x22 = 2802439498362624LLU;
	uint16_t x23 = 4U;

	t5 = ((x21<=x22)+(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint16_t x26 = 6U;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t6 = -1136867286LL;

	t6 = ((x25<=x26)+(x27/x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	volatile int64_t x32 = INT64_MIN;
	static int64_t t7 = -42861903LL;

	t7 = ((x29<=x30)+(x31/x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = -1LL;
	int64_t t8 = -3119919LL;

	t8 = ((x33<=x34)+(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int32_t x38 = 19523;
	static int16_t x39 = INT16_MIN;
	int64_t x40 = -279181634728998LL;
	int64_t t9 = 28264018939771LL;

	t9 = ((x37<=x38)+(x39/x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -264;
	int32_t x43 = INT32_MIN;
	uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 70759;

	t10 = ((x41<=x42)+(x43/x44));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 34;
	uint32_t x46 = 3726U;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 227258;

	t11 = ((x45<=x46)+(x47/x48));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 2147U;
	static int16_t x50 = -1;
	int16_t x51 = INT16_MIN;
	static volatile int32_t x52 = -1;

	t12 = ((x49<=x50)+(x51/x52));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x58 = -1;
	int32_t x59 = -1;
	int8_t x60 = INT8_MAX;
	static int32_t t13 = -1;

	t13 = ((x57<=x58)+(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -20642;
	volatile int8_t x62 = -30;
	static int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 4;

	t14 = ((x61<=x62)+(x63/x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x67 = 136149727111329LL;
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 7047201737LLU;

	t15 = ((x65<=x66)+(x67/x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 35880354517LLU;
	int32_t x72 = INT32_MAX;
	uint64_t t16 = 2223345LLU;

	t16 = ((x69<=x70)+(x71/x72));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x74 = 265LLU;
	uint32_t x75 = 17772U;
	int16_t x76 = -208;
	uint32_t t17 = 58795U;

	t17 = ((x73<=x74)+(x75/x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MIN;
	int64_t x79 = -1LL;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -252626LL;

	t18 = ((x77<=x78)+(x79/x80));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = -1;
	static int64_t x83 = 903190571496LL;

	t19 = ((x81<=x82)+(x83/x84));

	if (t19 != 7LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -43464652LL;
	volatile int32_t x86 = -1;
	int16_t x87 = -11;
	int8_t x88 = -1;
	int32_t t20 = -66713;

	t20 = ((x85<=x86)+(x87/x88));

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	static uint32_t x90 = 2U;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MIN;
	int32_t t21 = -75;

	t21 = ((x89<=x90)+(x91/x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;
	volatile uint64_t x95 = 536420994107673LLU;
	volatile uint64_t t22 = 1932155875741848LLU;

	t22 = ((x93<=x94)+(x95/x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x99 = -48847381;
	int16_t x100 = INT16_MAX;
	int32_t t23 = -95;

	t23 = ((x97<=x98)+(x99/x100));

	if (t23 != -1489) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = 35381546LLU;
	static int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 27219U;
	volatile int32_t t24 = 170;

	t24 = ((x101<=x102)+(x103/x104));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = -1;
	static volatile int64_t x106 = INT64_MAX;
	uint8_t x107 = 30U;
	static int64_t x108 = INT64_MIN;
	int64_t t25 = -7LL;

	t25 = ((x105<=x106)+(x107/x108));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	static int8_t x112 = INT8_MIN;
	int64_t t26 = 8410111759LL;

	t26 = ((x109<=x110)+(x111/x112));

	if (t26 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = INT8_MIN;
	uint32_t x114 = 264254597U;
	int32_t x115 = -1;
	static int8_t x116 = 45;

	t27 = ((x113<=x114)+(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 6386087640344656LLU;
	int64_t x118 = -5LL;
	volatile uint64_t x120 = 2587749476082LLU;
	uint64_t t28 = 3868470761673LLU;

	t28 = ((x117<=x118)+(x119/x120));

	if (t28 != 7128490LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 2396819855LLU;
	volatile uint32_t x122 = 15404796U;
	int32_t x123 = 1;
	static int16_t x124 = INT16_MIN;

	t29 = ((x121<=x122)+(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = -458;
	int8_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;
	static volatile int32_t t30 = 13526662;

	t30 = ((x125<=x126)+(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int32_t x130 = -25658;
	int16_t x132 = INT16_MIN;
	int64_t t31 = -15LL;

	t31 = ((x129<=x130)+(x131/x132));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 15U;
	uint64_t x134 = 6560575208687083LLU;
	uint8_t x136 = 4U;
	volatile uint64_t t32 = 9LLU;

	t32 = ((x133<=x134)+(x135/x136));

	if (t32 != 2250LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -6012;
	uint8_t x138 = 3U;
	int8_t x139 = -27;
	int8_t x140 = -1;

	t33 = ((x137<=x138)+(x139/x140));

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 964686258155LLU;
	int64_t x142 = INT64_MIN;
	int8_t x143 = 62;
	int32_t t34 = 595222;

	t34 = ((x141<=x142)+(x143/x144));

	if (t34 != -61) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 75U;
	int16_t x147 = INT16_MIN;
	volatile int8_t x148 = -1;
	volatile int32_t t35 = 13674;

	t35 = ((x145<=x146)+(x147/x148));

	if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x150 = 815U;
	volatile int64_t t36 = -2LL;

	t36 = ((x149<=x150)+(x151/x152));

	if (t36 != 31095855558818LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = -16329;
	static uint16_t x156 = 696U;
	int32_t t37 = -29628;

	t37 = ((x153<=x154)+(x155/x156));

	if (t37 != -22) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 1819729969U;
	int8_t x158 = INT8_MIN;
	static int64_t x160 = INT64_MAX;
	int64_t t38 = -904699LL;

	t38 = ((x157<=x158)+(x159/x160));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = INT8_MAX;
	volatile int8_t x162 = -1;
	uint64_t x163 = 22LLU;
	int32_t x164 = 141849;

	t39 = ((x161<=x162)+(x163/x164));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = INT32_MIN;
	uint16_t x167 = 101U;
	volatile int8_t x168 = INT8_MIN;
	static volatile int32_t t40 = 11;

	t40 = ((x165<=x166)+(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	static uint16_t x171 = 406U;
	int64_t x172 = 85LL;

	t41 = ((x169<=x170)+(x171/x172));

	if (t41 != 4LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = 608400329U;
	int64_t x174 = -1LL;
	uint32_t x175 = 84U;
	volatile uint64_t x176 = UINT64_MAX;

	t42 = ((x173<=x174)+(x175/x176));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x177 = INT64_MIN;
	int16_t x180 = -1;
	volatile uint64_t t43 = 476260284LLU;

	t43 = ((x177<=x178)+(x179/x180));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	static uint64_t x184 = 34123714570LLU;
	uint64_t t44 = 2718392539116LLU;

	t44 = ((x181<=x182)+(x183/x184));

	if (t44 != 540584291LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	int32_t x187 = 231211782;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = 21;

	t45 = ((x185<=x186)+(x187/x188));

	if (t45 != -7056) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = -1;
	int16_t x190 = -2316;
	volatile int8_t x191 = 28;
	int8_t x192 = INT8_MAX;

	t46 = ((x189<=x190)+(x191/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x193 = UINT8_MAX;
	static int8_t x194 = INT8_MAX;
	volatile int32_t x195 = 5183838;
	uint64_t x196 = 426238894109LLU;
	uint64_t t47 = 49469139254LLU;

	t47 = ((x193<=x194)+(x195/x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 248203340644532LLU;
	volatile uint64_t t48 = 41917234438125LLU;

	t48 = ((x197<=x198)+(x199/x200));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -9;
	static int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 21U;
	volatile int32_t t49 = 35;

	t49 = ((x201<=x202)+(x203/x204));

	if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = -1;
	static int64_t x212 = INT64_MIN;
	static volatile int64_t t50 = -5530950594LL;

	t50 = ((x209<=x210)+(x211/x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	volatile int32_t t51 = -352;

	t51 = ((x213<=x214)+(x215/x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x218 = 3941U;
	int32_t x219 = INT32_MAX;
	static int32_t t52 = -1;

	t52 = ((x217<=x218)+(x219/x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = INT32_MIN;
	int64_t x223 = -1LL;
	static volatile int64_t x224 = INT64_MIN;

	t53 = ((x221<=x222)+(x223/x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 0;
	uint16_t x226 = UINT16_MAX;
	static int32_t x227 = -198422875;
	volatile int32_t t54 = -13;

	t54 = ((x225<=x226)+(x227/x228));

	if (t54 != -67) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	int8_t x231 = -22;
	static volatile int16_t x232 = INT16_MAX;
	static volatile int32_t t55 = 8578132;

	t55 = ((x229<=x230)+(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = -1;

	t56 = ((x233<=x234)+(x235/x236));

	if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -259591460;
	uint8_t x242 = 7U;
	static int32_t x243 = INT32_MAX;
	volatile int32_t x244 = 5;

	t57 = ((x241<=x242)+(x243/x244));

	if (t57 != 429496730) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = INT8_MIN;
	static uint8_t x247 = 15U;
	static uint16_t x248 = UINT16_MAX;
	volatile int32_t t58 = 0;

	t58 = ((x245<=x246)+(x247/x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = -1LL;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;
	uint64_t t59 = 587874260LLU;

	t59 = ((x249<=x250)+(x251/x252));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x253 = 0;
	uint32_t x256 = UINT32_MAX;

	t60 = ((x253<=x254)+(x255/x256));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 0U;
	uint8_t x258 = 36U;
	static int64_t x259 = INT64_MAX;
	uint32_t x260 = 568049U;
	int64_t t61 = 4880411360309LL;

	t61 = ((x257<=x258)+(x259/x260));

	if (t61 != 16236930329699LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = -1844301833905699260LL;
	int16_t x263 = INT16_MAX;
	volatile int64_t x264 = -1LL;
	volatile int64_t t62 = -210581822912LL;

	t62 = ((x261<=x262)+(x263/x264));

	if (t62 != -32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = 7LL;
	volatile uint16_t x268 = 219U;
	int64_t t63 = 8526391LL;

	t63 = ((x265<=x266)+(x267/x268));

	if (t63 != -42115854049565186LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 8U;
	volatile uint8_t x271 = UINT8_MAX;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t64 = 53LLU;

	t64 = ((x269<=x270)+(x271/x272));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x277 = 0;
	volatile uint64_t x279 = 958324910026753152LLU;
	uint64_t t65 = 23949113LLU;

	t65 = ((x277<=x278)+(x279/x280));

	if (t65 != 7545865433281520LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x281 = INT64_MIN;
	uint16_t x282 = 1782U;
	int64_t x283 = -22242495645090886LL;
	int64_t x284 = -1385LL;
	int64_t t66 = 6762551LL;

	t66 = ((x281<=x282)+(x283/x284));

	if (t66 != 16059563642665LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = 224009017007260401LLU;
	int16_t x288 = INT16_MAX;
	uint64_t t67 = 5020420274541540368LLU;

	t67 = ((x285<=x286)+(x287/x288));

	if (t67 != 6836421308245LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = -1LL;
	uint64_t x290 = 356991657353949LLU;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;

	t68 = ((x289<=x290)+(x291/x292));

	if (t68 != 281474976710656LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MAX;
	volatile uint64_t t69 = 783499385LLU;

	t69 = ((x293<=x294)+(x295/x296));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 2932U;
	uint64_t x298 = 26999767245LLU;
	uint32_t x299 = 4910U;
	uint64_t x300 = 29857508110327541LLU;
	volatile uint64_t t70 = 174417861LLU;

	t70 = ((x297<=x298)+(x299/x300));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	int8_t x302 = -44;
	static uint32_t x303 = UINT32_MAX;
	volatile int64_t t71 = 465946LL;

	t71 = ((x301<=x302)+(x303/x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x307 = 2;
	uint16_t x308 = 195U;
	static volatile int32_t t72 = 65062;

	t72 = ((x305<=x306)+(x307/x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 1U;
	int32_t x310 = INT32_MAX;
	int32_t x311 = -664581078;
	int16_t x312 = 248;

	t73 = ((x309<=x310)+(x311/x312));

	if (t73 != -2679761) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = 2U;
	int64_t x315 = INT64_MIN;
	static uint64_t x316 = 259151761LLU;
	volatile uint64_t t74 = 2LLU;

	t74 = ((x313<=x314)+(x315/x316));

	if (t74 != 35590620729LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = INT8_MIN;
	volatile int32_t x318 = INT32_MIN;
	int32_t x319 = 4;
	static uint32_t x320 = UINT32_MAX;
	uint32_t t75 = 11U;

	t75 = ((x317<=x318)+(x319/x320));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x321 = 7U;
	static int8_t x322 = -1;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = UINT32_MAX;
	static volatile int64_t t76 = -27LL;

	t76 = ((x321<=x322)+(x323/x324));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 433U;
	int16_t x328 = INT16_MAX;
	int32_t t77 = 36859;

	t77 = ((x325<=x326)+(x327/x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -64537580280252LL;
	static int32_t x334 = INT32_MAX;
	volatile int16_t x335 = -1;
	uint8_t x336 = 41U;

	t78 = ((x333<=x334)+(x335/x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x337 = 32529266;
	uint8_t x338 = 1U;
	uint32_t x339 = UINT32_MAX;
	static volatile int8_t x340 = INT8_MIN;
	uint32_t t79 = 7021715U;

	t79 = ((x337<=x338)+(x339/x340));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 78U;
	static uint64_t x343 = UINT64_MAX;
	uint32_t x344 = UINT32_MAX;
	uint64_t t80 = 280108812088321LLU;

	t80 = ((x341<=x342)+(x343/x344));

	if (t80 != 4294967297LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x345 = -1;
	volatile uint8_t x346 = 16U;
	volatile int16_t x347 = 1;
	int64_t x348 = -2848327937600811265LL;

	t81 = ((x345<=x346)+(x347/x348));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = -1;
	uint32_t x350 = 204437049U;
	int8_t x351 = INT8_MAX;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t82 = -27;

	t82 = ((x349<=x350)+(x351/x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	int64_t x355 = 23053036811511345LL;
	int64_t x356 = INT64_MIN;

	t83 = ((x353<=x354)+(x355/x356));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x358 = -1;
	static int16_t x359 = INT16_MAX;
	int16_t x360 = -4;
	int32_t t84 = -62515435;

	t84 = ((x357<=x358)+(x359/x360));

	if (t84 != -8191) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = 136393487043179LL;
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	volatile int16_t x364 = -1692;
	volatile int64_t t85 = 17129288792444LL;

	t85 = ((x361<=x362)+(x363/x364));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x369 = 5767965209LL;
	static int64_t x370 = -4LL;
	volatile uint8_t x371 = 0U;
	volatile uint16_t x372 = 1015U;
	int32_t t86 = 772540;

	t86 = ((x369<=x370)+(x371/x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = -1;
	int64_t x374 = -1LL;
	static int8_t x375 = 1;
	int8_t x376 = INT8_MAX;
	static volatile int32_t t87 = 1001;

	t87 = ((x373<=x374)+(x375/x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = UINT64_MAX;
	static int8_t x383 = -1;
	int32_t x384 = INT32_MIN;

	t88 = ((x381<=x382)+(x383/x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t89 = 2;

	t89 = ((x385<=x386)+(x387/x388));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = -200499371082LL;
	int8_t x391 = -1;
	int8_t x392 = 1;
	static volatile int32_t t90 = -1;

	t90 = ((x389<=x390)+(x391/x392));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x393 = 29U;
	int64_t x394 = 1286096052572104194LL;
	static volatile int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t91 = -15660;

	t91 = ((x393<=x394)+(x395/x396));

	if (t91 != -65534) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x397 = -1;
	int32_t x399 = -202614;
	static uint16_t x400 = 117U;
	volatile int32_t t92 = -219454451;

	t92 = ((x397<=x398)+(x399/x400));

	if (t92 != -1731) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = -1LL;
	volatile uint8_t x402 = 1U;
	volatile int16_t x403 = INT16_MAX;
	static uint16_t x404 = 3761U;

	t93 = ((x401<=x402)+(x403/x404));

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x405 = -1;
	int32_t x406 = INT32_MIN;
	static uint64_t x407 = 2535381604216715952LLU;
	int32_t x408 = 234841678;
	uint64_t t94 = 1001LLU;

	t94 = ((x405<=x406)+(x407/x408));

	if (t94 != 10796131358LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x409 = -1LL;
	uint32_t x410 = UINT32_MAX;
	volatile int32_t t95 = 758352;

	t95 = ((x409<=x410)+(x411/x412));

	if (t95 != -112846) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x414 = -689256568387LL;
	int32_t t96 = -58234544;

	t96 = ((x413<=x414)+(x415/x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x417 = 25U;
	int32_t x418 = -99706;
	uint8_t x419 = 1U;
	volatile int32_t t97 = -56878176;

	t97 = ((x417<=x418)+(x419/x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x421 = 1U;
	static int64_t x422 = INT64_MIN;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = INT32_MAX;
	int32_t t98 = 79816724;

	t98 = ((x421<=x422)+(x423/x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x426 = 875LL;
	int64_t x427 = INT64_MIN;
	uint64_t x428 = 367304055LLU;
	static volatile uint64_t t99 = 4286900834529LLU;

	t99 = ((x425<=x426)+(x427/x428));

	if (t99 != 25110999760LLU) { NG(); } else { ; }
	
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

