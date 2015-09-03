#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
int8_t x6 = INT8_MIN;
int16_t x12 = INT16_MAX;
static int64_t x13 = -1LL;
uint16_t x19 = 1969U;
int32_t t4 = -91;
static volatile uint32_t t5 = 6U;
int64_t x25 = 90LL;
int16_t x33 = -128;
static uint8_t x37 = 0U;
static int64_t x48 = -1LL;
volatile int64_t t13 = 7923072LL;
volatile int8_t x57 = INT8_MAX;
volatile int64_t t16 = 2833924089244LL;
uint64_t x73 = 989746LLU;
uint64_t t18 = 203339LLU;
int32_t t19 = 2221;
volatile int16_t x86 = -15;
int64_t x87 = -565454372095476LL;
volatile int32_t t21 = 110574412;
volatile int64_t t22 = 48450178837LL;
static volatile uint32_t t23 = 1550784157U;
volatile int64_t x100 = -1LL;
int8_t x109 = -1;
volatile uint64_t x110 = UINT64_MAX;
int32_t x111 = -168963743;
int8_t x112 = INT8_MAX;
volatile uint64_t t27 = 982462266450LLU;
int32_t t30 = -14715;
static volatile int32_t t33 = -938;
int8_t x138 = 13;
int64_t x140 = 7454188LL;
volatile int32_t t35 = 25285111;
uint32_t x156 = 2172852U;
static volatile int64_t t38 = -3366531828062LL;
int64_t x159 = 4078315520551LL;
int8_t x160 = INT8_MAX;
int32_t t40 = -827426;
static int16_t x165 = INT16_MAX;
uint16_t x168 = 6U;
static int64_t x170 = INT64_MIN;
static uint16_t x171 = 352U;
volatile int32_t x172 = INT32_MIN;
int64_t t42 = 282LL;
static uint32_t x178 = UINT32_MAX;
volatile uint8_t x179 = 6U;
int8_t x180 = -2;
int64_t x188 = -1LL;
volatile uint32_t t46 = 10U;
volatile uint8_t x189 = 1U;
int8_t x192 = -1;
static int32_t x193 = INT32_MIN;
uint32_t x196 = UINT32_MAX;
volatile int32_t t48 = 1033960431;
int8_t x204 = INT8_MIN;
int8_t x205 = INT8_MIN;
volatile uint64_t t51 = 104LLU;
static volatile int32_t t52 = 3988;
static int32_t x213 = -1;
uint16_t x215 = UINT16_MAX;
uint8_t x216 = UINT8_MAX;
volatile int16_t x218 = INT16_MIN;
static volatile uint16_t x226 = 1781U;
uint8_t x232 = 7U;
volatile int8_t x240 = INT8_MIN;
int64_t x246 = -2269558651751416291LL;
static int64_t x248 = -1LL;
uint32_t x251 = UINT32_MAX;
uint16_t x255 = 0U;
uint64_t x256 = 1970LLU;
static int64_t x260 = INT64_MIN;
int16_t x266 = INT16_MAX;
int64_t x267 = 13186905010643LL;
int32_t x269 = -3;
int16_t x276 = INT16_MAX;
volatile int64_t x280 = 330030247065LL;
volatile int64_t t69 = 3006510308121LL;
static int16_t x282 = 393;
int8_t x285 = 42;
int32_t t72 = 3236343;
uint8_t x315 = 23U;
int8_t x325 = -1;
int32_t t81 = 2965;
int32_t t82 = -610;
uint16_t x333 = 11630U;
static volatile int32_t x337 = INT32_MAX;
static uint8_t x340 = 95U;
volatile uint64_t t84 = 41775212722719LLU;
static int16_t x341 = INT16_MIN;
static int64_t t87 = -123LL;
volatile uint64_t x353 = 54080394191856LLU;
volatile uint8_t x356 = UINT8_MAX;
int32_t x357 = INT32_MAX;
uint8_t x359 = UINT8_MAX;
int16_t x363 = INT16_MIN;
int32_t x367 = 3;
int32_t x370 = 14072797;
int32_t x379 = 301280;
static int64_t x387 = 2004148204LL;
int32_t x388 = INT32_MIN;
uint64_t x389 = UINT64_MAX;
int64_t x398 = -27310LL;


void f0(void) {
	int8_t x1 = -1;
	uint8_t x2 = 29U;
	int64_t x3 = INT64_MAX;
	static int32_t x4 = INT32_MIN;

	t0 = ((x1%x2)-(x3==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile uint8_t x7 = 80U;
	volatile uint64_t x8 = 854873631LLU;
	volatile int32_t t1 = 0;

	t1 = ((x5%x6)-(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 7351631431724322133LLU;
	volatile int32_t t2 = -13670;

	t2 = ((x9%x10)-(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 18;
	int16_t x15 = 0;
	volatile int8_t x16 = INT8_MIN;
	int64_t t3 = -4306492644338777250LL;

	t3 = ((x13%x14)-(x15==x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 4268;
	int8_t x18 = INT8_MIN;
	volatile uint8_t x20 = 12U;

	t4 = ((x17%x18)-(x19==x20));

	if (t4 != 44) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 719206U;
	volatile uint32_t x22 = UINT32_MAX;
	int8_t x23 = -19;
	int16_t x24 = INT16_MIN;

	t5 = ((x21%x22)-(x23==x24));

	if (t5 != 719206U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = INT64_MIN;
	static int64_t t6 = 175LL;

	t6 = ((x25%x26)-(x27==x28));

	if (t6 != 90LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -19738633217LL;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	static volatile int8_t x32 = INT8_MAX;
	volatile int64_t t7 = -32995LL;

	t7 = ((x29%x30)-(x31==x32));

	if (t7 != -411280385LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -479;
	uint16_t x36 = 3U;
	volatile int32_t t8 = -22374;

	t8 = ((x33%x34)-(x35==x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	static int8_t x39 = -11;
	uint16_t x40 = 2307U;
	int64_t t9 = -124LL;

	t9 = ((x37%x38)-(x39==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = 3;
	int32_t x44 = 8770223;
	volatile int64_t t10 = 252827129532LL;

	t10 = ((x41%x42)-(x43==x44));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -1;
	uint64_t x46 = 11455576469LLU;
	uint64_t x47 = 8LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x45%x46)-(x47==x48));

	if (t11 != 8134969122LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int8_t x50 = -12;
	int64_t x51 = -3722LL;
	int8_t x52 = 0;
	volatile int32_t t12 = -1813825;

	t12 = ((x49%x50)-(x51==x52));

	if (t12 != -8) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	static int64_t x54 = -1LL;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = 5U;

	t13 = ((x53%x54)-(x55==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = 14844155;
	volatile int32_t t14 = -1076809;

	t14 = ((x57%x58)-(x59==x60));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x62 = 40U;
	uint32_t x63 = 952U;
	uint64_t x64 = UINT64_MAX;
	volatile int64_t t15 = 52LL;

	t15 = ((x61%x62)-(x63==x64));

	if (t15 != -8LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	volatile int64_t x66 = INT64_MIN;
	int8_t x67 = -1;
	int8_t x68 = -1;

	t16 = ((x65%x66)-(x67==x68));

	if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = -1LL;
	int32_t t17 = -5;

	t17 = ((x69%x70)-(x71==x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 15949606;
	uint64_t x75 = UINT64_MAX;
	volatile int32_t x76 = INT32_MAX;

	t18 = ((x73%x74)-(x75==x76));

	if (t18 != 989746LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	int32_t x79 = -5296;
	int32_t x80 = INT32_MIN;

	t19 = ((x77%x78)-(x79==x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	int32_t x82 = INT32_MAX;
	volatile int16_t x83 = 4;
	uint64_t x84 = UINT64_MAX;
	volatile int32_t t20 = -15083;

	t20 = ((x81%x82)-(x83==x84));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 1;
	int16_t x88 = INT16_MIN;

	t21 = ((x85%x86)-(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = 930;
	volatile int64_t x90 = -67685LL;
	volatile int64_t x91 = -239316LL;
	int64_t x92 = INT64_MAX;

	t22 = ((x89%x90)-(x91==x92));

	if (t22 != 930LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 52299231U;
	static uint16_t x95 = 3801U;
	int16_t x96 = -134;

	t23 = ((x93%x94)-(x95==x96));

	if (t23 != 6430226U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = INT16_MIN;
	static volatile int32_t t24 = 172669;

	t24 = ((x97%x98)-(x99==x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 0U;
	static int64_t x102 = -336LL;
	int16_t x103 = -1;
	int64_t x104 = -76642405082LL;
	int64_t t25 = 111203LL;

	t25 = ((x101%x102)-(x103==x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 13509U;
	volatile int64_t t26 = -1509100697133833043LL;

	t26 = ((x105%x106)-(x107==x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = ((x109%x110)-(x111==x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	static uint16_t x114 = 2185U;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = INT64_MIN;
	int64_t t28 = -495462858731763LL;

	t28 = ((x113%x114)-(x115==x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int32_t x118 = INT32_MIN;
	static volatile int32_t x119 = INT32_MIN;
	uint32_t x120 = 34U;
	uint64_t t29 = 344988508LLU;

	t29 = ((x117%x118)-(x119==x120));

	if (t29 != 2147483647LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int8_t x122 = -1;
	int16_t x123 = 5756;
	static int8_t x124 = -1;

	t30 = ((x121%x122)-(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 14;
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 0;

	t31 = ((x125%x126)-(x127==x128));

	if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	uint64_t x130 = 7316444043727071LLU;
	uint64_t x131 = 1080132267736036LLU;
	int64_t x132 = INT64_MIN;
	uint64_t t32 = 265LLU;

	t32 = ((x129%x130)-(x131==x132));

	if (t32 != 1988639473605624LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 119U;
	int32_t x134 = INT32_MAX;
	static uint16_t x135 = 7U;
	int64_t x136 = -1LL;

	t33 = ((x133%x134)-(x135==x136));

	if (t33 != 119) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x139 = 230;
	static volatile int32_t t34 = -107;

	t34 = ((x137%x138)-(x139==x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MIN;
	uint16_t x142 = 7721U;
	uint64_t x143 = 12663711331635229LLU;
	int16_t x144 = -1;

	t35 = ((x141%x142)-(x143==x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	volatile uint16_t x146 = UINT16_MAX;
	static int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 91552339;

	t36 = ((x145%x146)-(x147==x148));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 28275583LLU;
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MAX;
	static int16_t x152 = INT16_MAX;
	volatile uint64_t t37 = 317319853LLU;

	t37 = ((x149%x150)-(x151==x152));

	if (t37 != 30429LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	volatile int8_t x154 = -1;
	static uint16_t x155 = 5U;

	t38 = ((x153%x154)-(x155==x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 13U;
	static int8_t x158 = 13;
	int32_t t39 = 7;

	t39 = ((x157%x158)-(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	int16_t x162 = INT16_MIN;
	static volatile int64_t x163 = INT64_MIN;
	uint16_t x164 = 12U;

	t40 = ((x161%x162)-(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MIN;
	int32_t t41 = 24328663;

	t41 = ((x165%x166)-(x167==x168));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 30U;

	t42 = ((x169%x170)-(x171==x172));

	if (t42 != 30LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	static uint32_t x175 = UINT32_MAX;
	static int32_t x176 = -7017;
	static volatile int64_t t43 = -2949765896LL;

	t43 = ((x173%x174)-(x175==x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -7;
	volatile uint32_t t44 = 909U;

	t44 = ((x177%x178)-(x179==x180));

	if (t44 != 4294967289U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 9477241LLU;
	static int32_t x182 = -1;
	volatile int16_t x183 = INT16_MIN;
	static int8_t x184 = 1;
	static uint64_t t45 = 76276137294190LLU;

	t45 = ((x181%x182)-(x183==x184));

	if (t45 != 9477241LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 167243350U;
	volatile uint32_t x186 = 1941U;
	int8_t x187 = INT8_MIN;

	t46 = ((x185%x186)-(x187==x188));

	if (t46 != 967U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x190 = INT32_MIN;
	static volatile uint64_t x191 = 9439170413LLU;
	int32_t t47 = 6186;

	t47 = ((x189%x190)-(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MAX;

	t48 = ((x193%x194)-(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	volatile int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = 10U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -7069;

	t49 = ((x197%x198)-(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	int8_t x203 = 15;
	static volatile int32_t t50 = -152378386;

	t50 = ((x201%x202)-(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x206 = 505339730490803427LLU;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int16_t x208 = INT16_MIN;

	t51 = ((x205%x206)-(x207==x208));

	if (t51 != 254513776040628116LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint16_t x210 = 15053U;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = 1U;

	t52 = ((x209%x210)-(x211==x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = 14334LL;
	volatile int64_t t53 = -18779637866090985LL;

	t53 = ((x213%x214)-(x215==x216));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = -233LL;
	static int64_t x219 = INT64_MAX;
	int32_t x220 = INT32_MAX;
	static volatile int64_t t54 = 6615348819718LL;

	t54 = ((x217%x218)-(x219==x220));

	if (t54 != -233LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	volatile int8_t x224 = -42;
	int64_t t55 = 1451616LL;

	t55 = ((x221%x222)-(x223==x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -11;
	int32_t t56 = 99107855;

	t56 = ((x225%x226)-(x227==x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile int64_t x230 = -1LL;
	volatile int8_t x231 = 2;
	int64_t t57 = 4130LL;

	t57 = ((x229%x230)-(x231==x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 1414032245LL;
	int32_t x234 = 3;
	int32_t x235 = -1;
	int8_t x236 = -1;
	volatile int64_t t58 = 359014310812032963LL;

	t58 = ((x233%x234)-(x235==x236));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int32_t x238 = INT32_MIN;
	uint32_t x239 = 1U;
	int64_t t59 = 2691783883931755642LL;

	t59 = ((x237%x238)-(x239==x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 15271U;
	int8_t x242 = INT8_MIN;
	volatile int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t60 = 34444106;

	t60 = ((x241%x242)-(x243==x244));

	if (t60 != 39) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile int64_t t61 = 25163151LL;

	t61 = ((x245%x246)-(x247==x248));

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -6;
	static uint32_t x250 = 1035131757U;
	uint8_t x252 = 55U;
	uint32_t t62 = 7288250U;

	t62 = ((x249%x250)-(x251==x252));

	if (t62 != 154440262U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -12647133871LL;
	int32_t x254 = -4;
	int64_t t63 = 6434LL;

	t63 = ((x253%x254)-(x255==x256));

	if (t63 != -3LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 196U;
	uint32_t x258 = 1U;
	uint32_t x259 = 1202862638U;
	static uint32_t t64 = 113U;

	t64 = ((x257%x258)-(x259==x260));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 3U;
	int16_t x262 = -1841;
	static int64_t x263 = INT64_MIN;
	volatile uint16_t x264 = 13920U;
	volatile int32_t t65 = 1;

	t65 = ((x261%x262)-(x263==x264));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t66 = -14;

	t66 = ((x265%x266)-(x267==x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -1;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;
	int32_t t67 = 6;

	t67 = ((x269%x270)-(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 6U;
	int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	static volatile int32_t t68 = -1;

	t68 = ((x273%x274)-(x275==x276));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = INT64_MIN;
	volatile int64_t x279 = -9553LL;

	t69 = ((x277%x278)-(x279==x280));

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 5U;
	int32_t x283 = -2063053;
	static int16_t x284 = -1;
	int32_t t70 = -604836;

	t70 = ((x281%x282)-(x283==x284));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MAX;
	volatile uint8_t x287 = UINT8_MAX;
	uint32_t x288 = UINT32_MAX;
	static volatile int32_t t71 = -3438592;

	t71 = ((x285%x286)-(x287==x288));

	if (t71 != 42) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	uint8_t x290 = 6U;
	int64_t x291 = INT64_MAX;
	int16_t x292 = -630;

	t72 = ((x289%x290)-(x291==x292));

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 2U;
	int32_t x294 = -4890;
	int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MIN;
	static int32_t t73 = -951126310;

	t73 = ((x293%x294)-(x295==x296));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	volatile uint16_t x298 = 1U;
	volatile uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = 15687;

	t74 = ((x297%x298)-(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MAX;
	int16_t x303 = 180;
	int64_t x304 = 1163LL;
	volatile int32_t t75 = -440040;

	t75 = ((x301%x302)-(x303==x304));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	static volatile uint32_t x306 = 106474087U;
	volatile int32_t x307 = -114;
	volatile int16_t x308 = INT16_MAX;
	uint32_t t76 = 90071U;

	t76 = ((x305%x306)-(x307==x308));

	if (t76 != 18001908U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	uint32_t x310 = 247735U;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 106U;
	static uint32_t t77 = 130249663U;

	t77 = ((x309%x310)-(x311==x312));

	if (t77 != 233335U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint16_t x314 = 150U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 55526502;

	t78 = ((x313%x314)-(x315==x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 9561245283944864LLU;
	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = -1LL;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t79 = 2581LLU;

	t79 = ((x317%x318)-(x319==x320));

	if (t79 != 9561245283944864LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MAX;
	int64_t x322 = -3LL;
	int16_t x323 = INT16_MAX;
	volatile int64_t x324 = INT64_MIN;
	volatile int64_t t80 = 107551390LL;

	t80 = ((x321%x322)-(x323==x324));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x326 = -1;
	uint8_t x327 = UINT8_MAX;
	int64_t x328 = -205LL;

	t81 = ((x325%x326)-(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = -847;
	volatile int16_t x332 = -3;

	t82 = ((x329%x330)-(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = INT64_MAX;
	uint64_t x335 = 6609LLU;
	int32_t x336 = INT32_MIN;
	volatile int64_t t83 = 11747433770LL;

	t83 = ((x333%x334)-(x335==x336));

	if (t83 != 11630LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x338 = 233161272LLU;
	volatile uint8_t x339 = 22U;

	t84 = ((x337%x338)-(x339==x340));

	if (t84 != 49032199LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x342 = INT32_MIN;
	volatile int16_t x343 = INT16_MAX;
	int64_t x344 = -1LL;
	int32_t t85 = -3;

	t85 = ((x341%x342)-(x343==x344));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	volatile uint8_t x346 = 15U;
	uint16_t x347 = 28463U;
	static int32_t x348 = INT32_MAX;
	int64_t t86 = -59832885LL;

	t86 = ((x345%x346)-(x347==x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x349 = -1LL;
	int32_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	volatile int64_t x352 = INT64_MIN;

	t87 = ((x349%x350)-(x351==x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = -1;
	int16_t x355 = -1;
	uint64_t t88 = 1396059259930620737LLU;

	t88 = ((x353%x354)-(x355==x356));

	if (t88 != 54080394191856LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	static uint16_t x360 = 1889U;
	int32_t t89 = -95882349;

	t89 = ((x357%x358)-(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = 341U;
	volatile uint64_t x364 = UINT64_MAX;
	static int32_t t90 = -900626852;

	t90 = ((x361%x362)-(x363==x364));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = INT64_MIN;
	int16_t x366 = 71;
	int16_t x368 = INT16_MIN;
	static volatile int64_t t91 = 1591841202005067078LL;

	t91 = ((x365%x366)-(x367==x368));

	if (t91 != -5LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = -5758;
	uint8_t x371 = 27U;
	int64_t x372 = -1LL;
	int32_t t92 = -3;

	t92 = ((x369%x370)-(x371==x372));

	if (t92 != -5758) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	static volatile int16_t x374 = INT16_MAX;
	int64_t x375 = -1LL;
	volatile uint8_t x376 = 13U;
	volatile int32_t t93 = 5993;

	t93 = ((x373%x374)-(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	static int32_t x378 = -13331388;
	uint16_t x380 = 10U;
	uint64_t t94 = 3199978006050LLU;

	t94 = ((x377%x378)-(x379==x380));

	if (t94 != 13331387LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	static int16_t x383 = INT16_MAX;
	int32_t x384 = -1;
	static volatile uint64_t t95 = 1LLU;

	t95 = ((x381%x382)-(x383==x384));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	static uint8_t x386 = 15U;
	int32_t t96 = -5;

	t96 = ((x385%x386)-(x387==x388));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x390 = UINT32_MAX;
	uint32_t x391 = 58U;
	volatile uint32_t x392 = UINT32_MAX;
	static volatile uint64_t t97 = 965976159LLU;

	t97 = ((x389%x390)-(x391==x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = 25U;
	int8_t x395 = -2;
	int32_t x396 = INT32_MIN;
	int64_t t98 = -544525LL;

	t98 = ((x393%x394)-(x395==x396));

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 202542726U;
	uint64_t x399 = UINT64_MAX;
	uint16_t x400 = 7423U;
	volatile int64_t t99 = 495LL;

	t99 = ((x397%x398)-(x399==x400));

	if (t99 != 11766LL) { NG(); } else { ; }
	
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

