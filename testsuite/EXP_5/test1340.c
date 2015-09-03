#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 1431231313U;
uint8_t x13 = 11U;
uint64_t t1 = 117312012466301LLU;
volatile int32_t x18 = 5;
uint8_t x19 = 60U;
uint64_t x25 = 161670LLU;
static uint8_t x39 = UINT8_MAX;
static int16_t x40 = -23;
int64_t x41 = INT64_MIN;
static uint32_t x54 = 175U;
int8_t x55 = INT8_MIN;
static int32_t x60 = INT32_MIN;
static int64_t t14 = 0LL;
volatile int16_t x79 = INT16_MIN;
uint64_t t16 = 221LLU;
static int16_t x91 = INT16_MIN;
uint8_t x93 = 3U;
uint8_t x101 = 0U;
uint8_t x103 = 97U;
volatile int64_t x105 = -1LL;
int32_t x107 = 1406;
volatile int16_t x108 = INT16_MIN;
int32_t x110 = INT32_MIN;
static uint32_t x113 = 1U;
uint32_t x114 = 789U;
int8_t x118 = -1;
volatile int64_t t24 = INT64_MAX;
int64_t x125 = INT64_MIN;
static volatile uint8_t x131 = UINT8_MAX;
int16_t x143 = -1;
int8_t x150 = -1;
volatile int16_t x151 = -16;
int32_t t32 = -11517;
volatile int8_t x157 = 14;
static int64_t x166 = INT64_MAX;
int8_t x168 = INT8_MIN;
int64_t x169 = -1323405937312600LL;
int64_t x170 = -1LL;
static int16_t x172 = -1;
volatile uint64_t t36 = 273LLU;
volatile int32_t x178 = -1;
int32_t x181 = -1;
volatile int32_t x192 = 25;
int32_t x216 = -1;
int16_t x217 = 9;
static int32_t x223 = INT32_MAX;
volatile uint16_t x235 = UINT16_MAX;
int32_t t50 = -18770701;
int8_t x245 = INT8_MIN;
int32_t x248 = INT32_MAX;
uint64_t x250 = UINT64_MAX;
volatile int32_t x268 = INT32_MIN;
int16_t x272 = -7;
static int16_t x277 = -383;
volatile int64_t x284 = INT64_MIN;
static int16_t x286 = 16193;
int8_t x288 = INT8_MIN;
uint64_t x289 = 0LLU;
uint64_t x292 = UINT64_MAX;
int16_t x296 = -1;
int64_t x304 = INT64_MAX;
volatile int64_t x308 = 321387377175LL;
volatile int16_t x310 = -13475;
int16_t x315 = -45;
volatile int64_t x322 = 168212094636LL;
uint32_t x323 = UINT32_MAX;
int32_t x324 = INT32_MIN;
volatile uint8_t x328 = 18U;
volatile uint64_t x333 = 1347292892651790976LLU;
int64_t x335 = -26223206LL;
int32_t t74 = 254422;
volatile int16_t x345 = INT16_MAX;
static int64_t x347 = INT64_MIN;
uint16_t x353 = UINT16_MAX;
static uint8_t x355 = 0U;
static volatile int64_t x357 = INT64_MIN;
volatile uint32_t x360 = 390915172U;
static int16_t x365 = INT16_MIN;
uint32_t t79 = 3679U;
static volatile int16_t x373 = INT16_MAX;
int64_t t82 = -1059718008722759857LL;
int32_t x385 = -1;
uint8_t x387 = 9U;
volatile int32_t t86 = 54;
volatile int32_t t87 = -27606230;
uint64_t x404 = 62407289603127836LLU;
int16_t x410 = 20;
static volatile int32_t t91 = -1;
uint64_t x422 = 31699LLU;
int32_t t92 = 483;
int32_t x425 = -3642879;
int32_t x426 = 0;
uint8_t x433 = 0U;
uint8_t x440 = UINT8_MAX;
static int64_t t96 = 3954352450022808305LL;
volatile uint64_t x441 = 44808885871230107LLU;
static int8_t x442 = INT8_MAX;
static uint64_t t97 = 2096135485LLU;


void f0(void) {
	static int32_t x1 = -330453039;
	static int8_t x2 = -1;
	static int64_t x3 = -1LL;
	static volatile uint32_t x4 = UINT32_MAX;

	t0 = (x1+((x2==x3)^x4));

	if (t0 != 3964514255U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;

	t1 = (x13+((x14==x15)^x16));

	if (t1 != 10LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	uint16_t x20 = 859U;
	uint32_t t2 = 100490U;

	t2 = (x17+((x18==x19)^x20));

	if (t2 != 858U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 0U;
	static int64_t x22 = 1731796LL;
	uint64_t x23 = 752717LLU;
	volatile int32_t x24 = 653471816;
	int32_t t3 = -65143896;

	t3 = (x21+((x22==x23)^x24));

	if (t3 != 653471816) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x26 = INT64_MIN;
	int32_t x27 = -28;
	int32_t x28 = -6;
	uint64_t t4 = 12758LLU;

	t4 = (x25+((x26==x27)^x28));

	if (t4 != 161664LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MAX;
	volatile int16_t x35 = -1;
	uint8_t x36 = 0U;
	int32_t t5 = -1;

	t5 = (x33+((x34==x35)^x36));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	uint32_t x38 = 10878415U;
	int32_t t6 = -44795252;

	t6 = (x37+((x38==x39)^x40));

	if (t6 != -24) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = INT8_MAX;
	static int8_t x44 = INT8_MAX;
	static int64_t t7 = 503LL;

	t7 = (x41+((x42==x43)^x44));

	if (t7 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 0U;
	int32_t x47 = 912296;
	int32_t x48 = -382;
	int32_t t8 = 7133;

	t8 = (x45+((x46==x47)^x48));

	if (t8 != -33150) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x49 = 58588U;
	volatile uint16_t x50 = 6U;
	volatile int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	uint32_t t9 = 203U;

	t9 = (x49+((x50==x51)^x52));

	if (t9 != 58460U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = INT16_MAX;
	volatile int64_t x56 = -233277282LL;
	volatile int64_t t10 = -16003LL;

	t10 = (x53+((x54==x55)^x56));

	if (t10 != -233244515LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = 7;
	int8_t x58 = INT8_MIN;
	static volatile uint32_t x59 = 1U;
	volatile int32_t t11 = 1006;

	t11 = (x57+((x58==x59)^x60));

	if (t11 != -2147483641) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 0LLU;
	static int8_t x62 = 0;
	int64_t x63 = 1LL;
	volatile int32_t x64 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = (x61+((x62==x63)^x64));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MIN;
	static volatile int8_t x67 = INT8_MAX;
	int64_t x68 = 14650LL;
	static int64_t t13 = -7536737968LL;

	t13 = (x65+((x66==x67)^x68));

	if (t13 != 14905LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = -22495545896LL;
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 10U;

	t14 = (x69+((x70==x71)^x72));

	if (t14 != -22495545886LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	int8_t x75 = INT8_MAX;
	static int64_t x76 = INT64_MIN;
	int64_t t15 = -659749065766LL;

	t15 = (x73+((x74==x75)^x76));

	if (t15 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -1LL;
	uint8_t x78 = UINT8_MAX;
	uint64_t x80 = 924670771315LLU;

	t16 = (x77+((x78==x79)^x80));

	if (t16 != 924670771314LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 6U;
	int16_t x86 = INT16_MAX;
	int32_t x87 = -24689912;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t17 = 706229417462427LLU;

	t17 = (x85+((x86==x87)^x88));

	if (t17 != 5LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 7U;
	uint8_t x90 = 13U;
	int32_t x92 = -1;
	int32_t t18 = 688861;

	t18 = (x89+((x90==x91)^x92));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	volatile int32_t x96 = 843353846;
	int32_t t19 = 275;

	t19 = (x93+((x94==x95)^x96));

	if (t19 != 843353850) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = INT8_MAX;
	int32_t t20 = 11;

	t20 = (x101+((x102==x103)^x104));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x106 = 6U;
	static volatile int64_t t21 = 19618LL;

	t21 = (x105+((x106==x107)^x108));

	if (t21 != -32769LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x109 = -1;
	int16_t x111 = INT16_MAX;
	int8_t x112 = -1;
	static int32_t t22 = -47;

	t22 = (x109+((x110==x111)^x112));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x115 = 5U;
	int32_t x116 = INT32_MAX;
	uint32_t t23 = 499095U;

	t23 = (x113+((x114==x115)^x116));

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = 0;
	int8_t x119 = INT8_MAX;
	static int64_t x120 = INT64_MAX;

	t24 = (x117+((x118==x119)^x120));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -741421;
	int32_t x122 = 131432;
	uint8_t x123 = UINT8_MAX;
	static int32_t x124 = -1;
	int32_t t25 = -75788;

	t25 = (x121+((x122==x123)^x124));

	if (t25 != -741422) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x126 = INT32_MAX;
	volatile int64_t x127 = INT64_MIN;
	volatile int64_t x128 = 1060221488LL;
	volatile int64_t t26 = 2965687740849634434LL;

	t26 = (x125+((x126==x127)^x128));

	if (t26 != -9223372035794554320LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int8_t x132 = 62;
	volatile int32_t t27 = -180041216;

	t27 = (x129+((x130==x131)^x132));

	if (t27 != 61) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = 10;
	volatile int64_t x134 = 17064160531LL;
	volatile int64_t x135 = -31316LL;
	int8_t x136 = INT8_MAX;
	int32_t t28 = 4;

	t28 = (x133+((x134==x135)^x136));

	if (t28 != 137) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = -1LL;
	int8_t x144 = -1;
	int32_t t29 = -1231;

	t29 = (x141+((x142==x143)^x144));

	if (t29 != -130) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = -1;
	static int8_t x146 = INT8_MIN;
	volatile int8_t x147 = INT8_MAX;
	static int64_t x148 = -1LL;
	int64_t t30 = 113LL;

	t30 = (x145+((x146==x147)^x148));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	int64_t x152 = -129051LL;
	int64_t t31 = 3171048LL;

	t31 = (x149+((x150==x151)^x152));

	if (t31 != 9223372036854646756LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 116U;
	int32_t x154 = INT32_MAX;
	uint16_t x155 = 23667U;
	static int16_t x156 = -381;

	t32 = (x153+((x154==x155)^x156));

	if (t32 != -265) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x158 = 70921LLU;
	int16_t x159 = INT16_MAX;
	static int8_t x160 = -1;
	volatile int32_t t33 = -176;

	t33 = (x157+((x158==x159)^x160));

	if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x167 = 525115856393867770LLU;
	volatile int32_t t34 = -379901;

	t34 = (x165+((x166==x167)^x168));

	if (t34 != -32896) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x171 = -1;
	volatile int64_t t35 = 924LL;

	t35 = (x169+((x170==x171)^x172));

	if (t35 != -1323405937312602LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 8811383707LLU;
	int32_t x174 = INT32_MAX;
	uint8_t x175 = 0U;
	static uint32_t x176 = UINT32_MAX;

	t36 = (x173+((x174==x175)^x176));

	if (t36 != 13106351002LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = -1;
	int32_t x179 = -1;
	uint16_t x180 = UINT16_MAX;
	int32_t t37 = 39;

	t37 = (x177+((x178==x179)^x180));

	if (t37 != 65533) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x182 = UINT32_MAX;
	int8_t x183 = -1;
	static uint16_t x184 = 17U;
	static int32_t t38 = 737;

	t38 = (x181+((x182==x183)^x184));

	if (t38 != 15) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = 399U;
	static volatile uint16_t x188 = 3U;
	volatile int32_t t39 = -261859081;

	t39 = (x185+((x186==x187)^x188));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = 1;
	int64_t x190 = 6LL;
	static int8_t x191 = INT8_MAX;
	int32_t t40 = -7;

	t40 = (x189+((x190==x191)^x192));

	if (t40 != 26) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x193 = 1747U;
	int16_t x194 = 1903;
	int8_t x195 = 0;
	static uint64_t x196 = 3191917941LLU;
	volatile uint64_t t41 = 14901280LLU;

	t41 = (x193+((x194==x195)^x196));

	if (t41 != 3191919688LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = 3781385LL;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = 8U;
	volatile uint64_t x200 = UINT64_MAX;
	uint64_t t42 = 6248829LLU;

	t42 = (x197+((x198==x199)^x200));

	if (t42 != 3781384LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MAX;
	static int8_t x202 = -1;
	uint64_t x203 = 210515515408356LLU;
	int64_t x204 = INT64_MIN;
	volatile int64_t t43 = -110924LL;

	t43 = (x201+((x202==x203)^x204));

	if (t43 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -51;
	uint8_t x206 = 70U;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = 13;
	int32_t t44 = -126755;

	t44 = (x205+((x206==x207)^x208));

	if (t44 != -38) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	volatile int32_t x211 = -22700984;
	uint16_t x212 = 80U;
	int32_t t45 = 0;

	t45 = (x209+((x210==x211)^x212));

	if (t45 != -2147483568) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static int32_t x215 = -1;
	volatile int32_t t46 = -133;

	t46 = (x213+((x214==x215)^x216));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x218 = 1;
	int16_t x219 = 375;
	uint32_t x220 = 1U;
	uint32_t t47 = 1668754U;

	t47 = (x217+((x218==x219)^x220));

	if (t47 != 10U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = -1;
	int32_t x224 = 3039;
	static int32_t t48 = 36044344;

	t48 = (x221+((x222==x223)^x224));

	if (t48 != 2911) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x225 = INT64_MIN;
	volatile int32_t x226 = -1;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t49 = 1078898759049255LL;

	t49 = (x225+((x226==x227)^x228));

	if (t49 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	static uint16_t x234 = 546U;
	int8_t x236 = 53;

	t50 = (x233+((x234==x235)^x236));

	if (t50 != -2147483595) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x237 = -679;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = 2LLU;
	int8_t x240 = -47;
	volatile int32_t t51 = 129;

	t51 = (x237+((x238==x239)^x240));

	if (t51 != -726) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = 0;
	volatile uint32_t x242 = UINT32_MAX;
	static uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 124U;
	int32_t t52 = 0;

	t52 = (x241+((x242==x243)^x244));

	if (t52 != 124) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x246 = INT32_MIN;
	volatile int64_t x247 = INT64_MIN;
	volatile int32_t t53 = 2277;

	t53 = (x245+((x246==x247)^x248));

	if (t53 != 2147483519) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 12U;
	static int8_t x251 = -6;
	static int32_t x252 = -1;
	static uint32_t t54 = 22U;

	t54 = (x249+((x250==x251)^x252));

	if (t54 != 11U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 160U;
	int8_t x254 = 0;
	int32_t x255 = -36;
	static int8_t x256 = INT8_MAX;
	int32_t t55 = 80792913;

	t55 = (x253+((x254==x255)^x256));

	if (t55 != 287) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = 430;
	volatile uint64_t x258 = UINT64_MAX;
	volatile int8_t x259 = 0;
	uint32_t x260 = 6U;
	uint32_t t56 = 584U;

	t56 = (x257+((x258==x259)^x260));

	if (t56 != 436U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MIN;
	volatile int32_t x262 = -1;
	uint16_t x263 = 362U;
	int32_t x264 = 3708;
	volatile int64_t t57 = 231383425567042LL;

	t57 = (x261+((x262==x263)^x264));

	if (t57 != -9223372036854772100LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 1U;
	static uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	volatile int32_t t58 = -256984122;

	t58 = (x265+((x266==x267)^x268));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 378801183684051LLU;
	uint8_t x270 = 6U;
	volatile int8_t x271 = INT8_MIN;
	uint64_t t59 = 503330518664LLU;

	t59 = (x269+((x270==x271)^x272));

	if (t59 != 378801183684044LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x278 = 25405U;
	static int32_t x279 = -1;
	int32_t x280 = -319191;
	static volatile int32_t t60 = -12502116;

	t60 = (x277+((x278==x279)^x280));

	if (t60 != -319574) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = 1726304614599874LLU;
	volatile int64_t x282 = INT64_MAX;
	volatile int64_t x283 = INT64_MIN;
	volatile uint64_t t61 = 14023947LLU;

	t61 = (x281+((x282==x283)^x284));

	if (t61 != 9225098341469375682LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	uint32_t t62 = 87U;

	t62 = (x285+((x286==x287)^x288));

	if (t62 != 4294967167U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x290 = INT16_MIN;
	volatile int64_t x291 = INT64_MIN;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x289+((x290==x291)^x292));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = -1;
	static uint16_t x294 = 24U;
	int32_t x295 = INT32_MIN;
	int32_t t64 = -883;

	t64 = (x293+((x294==x295)^x296));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x301 = -1LL;
	int32_t x302 = INT32_MIN;
	uint32_t x303 = UINT32_MAX;
	static int64_t t65 = 7948698LL;

	t65 = (x301+((x302==x303)^x304));

	if (t65 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 45332884560157LLU;
	int8_t x307 = INT8_MIN;
	volatile uint64_t t66 = 1785967LLU;

	t66 = (x305+((x306==x307)^x308));

	if (t66 != 321387377174LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = -1;
	volatile uint8_t x311 = 55U;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t67 = -664;

	t67 = (x309+((x310==x311)^x312));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = -98490267253760506LL;
	uint16_t x314 = 4560U;
	int64_t x316 = INT64_MAX;
	static volatile int64_t t68 = 778891LL;

	t68 = (x313+((x314==x315)^x316));

	if (t68 != 9124881769601015301LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = 514387012LL;
	int16_t x318 = -1;
	uint16_t x319 = 3U;
	uint64_t x320 = 48132LLU;
	volatile uint64_t t69 = 486467LLU;

	t69 = (x317+((x318==x319)^x320));

	if (t69 != 514435144LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x321 = 99U;
	volatile int32_t t70 = -2826389;

	t70 = (x321+((x322==x323)^x324));

	if (t70 != -2147483549) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 2U;
	static int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MAX;
	volatile int32_t t71 = -543;

	t71 = (x325+((x326==x327)^x328));

	if (t71 != 20) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MIN;
	static int64_t x331 = 1619522420901LL;
	int16_t x332 = INT16_MAX;
	int32_t t72 = 3708;

	t72 = (x329+((x330==x331)^x332));

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x334 = UINT64_MAX;
	int32_t x336 = INT32_MAX;
	uint64_t t73 = 701105LLU;

	t73 = (x333+((x334==x335)^x336));

	if (t73 != 1347292894799274623LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = 1363;
	volatile int32_t x342 = INT32_MAX;
	static volatile int64_t x343 = INT64_MIN;
	volatile int8_t x344 = INT8_MAX;

	t74 = (x341+((x342==x343)^x344));

	if (t74 != 1490) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x346 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t75 = -44;

	t75 = (x345+((x346==x347)^x348));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x354 = 11167;
	uint32_t x356 = 4424U;
	uint32_t t76 = 12164U;

	t76 = (x353+((x354==x355)^x356));

	if (t76 != 69959U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x358 = -1LL;
	int64_t x359 = 52591454689499LL;
	static int64_t t77 = -175515525514387493LL;

	t77 = (x357+((x358==x359)^x360));

	if (t77 != -9223372036463860636LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	static uint32_t t78 = 4U;

	t78 = (x361+((x362==x363)^x364));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x366 = INT64_MAX;
	static uint8_t x367 = 0U;
	uint32_t x368 = UINT32_MAX;

	t79 = (x365+((x366==x367)^x368));

	if (t79 != 4294934527U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int8_t x370 = 7;
	int64_t x371 = INT64_MAX;
	static volatile uint16_t x372 = 1604U;
	int32_t t80 = -37138898;

	t80 = (x369+((x370==x371)^x372));

	if (t80 != 1859) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x374 = 1;
	int32_t x375 = -1;
	int64_t x376 = -1LL;
	volatile int64_t t81 = -58LL;

	t81 = (x373+((x374==x375)^x376));

	if (t81 != 32766LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x377 = -1LL;
	int64_t x378 = -82789932306003327LL;
	volatile uint32_t x379 = 3583511U;
	volatile int64_t x380 = -1LL;

	t82 = (x377+((x378==x379)^x380));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = 8U;
	volatile uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MIN;
	volatile uint8_t x384 = 3U;
	volatile int32_t t83 = -1992176;

	t83 = (x381+((x382==x383)^x384));

	if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x386 = 73U;
	static int16_t x388 = 0;
	int32_t t84 = 43963097;

	t84 = (x385+((x386==x387)^x388));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x389 = 2403U;
	uint64_t x390 = 17958542845385839LLU;
	int32_t x391 = -1;
	volatile int8_t x392 = 7;
	volatile int32_t t85 = 1646705;

	t85 = (x389+((x390==x391)^x392));

	if (t85 != 2410) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint8_t x394 = 1U;
	static int64_t x395 = INT64_MIN;
	int8_t x396 = -3;

	t86 = (x393+((x394==x395)^x396));

	if (t86 != 65532) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = INT16_MAX;
	uint16_t x398 = 960U;
	int8_t x399 = -12;
	volatile uint8_t x400 = 95U;

	t87 = (x397+((x398==x399)^x400));

	if (t87 != 32862) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MAX;
	volatile uint64_t x403 = 3636870402792809975LLU;
	uint64_t t88 = 417201253591780503LLU;

	t88 = (x401+((x402==x403)^x404));

	if (t88 != 9285779326457903644LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x409 = 118U;
	uint64_t x411 = 231139855LLU;
	uint16_t x412 = UINT16_MAX;
	int32_t t89 = 218;

	t89 = (x409+((x410==x411)^x412));

	if (t89 != 65653) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = -3;
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	static int32_t x416 = -4189347;
	int32_t t90 = -51;

	t90 = (x413+((x414==x415)^x416));

	if (t90 != -4189351) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MIN;
	uint32_t x418 = 7328885U;
	volatile uint8_t x419 = UINT8_MAX;
	int16_t x420 = -1;

	t91 = (x417+((x418==x419)^x420));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x421 = -1;
	volatile uint32_t x423 = 463988U;
	static int16_t x424 = INT16_MIN;

	t92 = (x421+((x422==x423)^x424));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x427 = 309113295U;
	static int16_t x428 = -1;
	volatile int32_t t93 = -59106457;

	t93 = (x425+((x426==x427)^x428));

	if (t93 != -3642880) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x429 = -14786451;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = INT32_MIN;
	int8_t x432 = -3;
	static volatile int32_t t94 = -442009;

	t94 = (x429+((x430==x431)^x432));

	if (t94 != -14786454) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x434 = 7;
	static uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 3LLU;
	uint64_t t95 = 867415LLU;

	t95 = (x433+((x434==x435)^x436));

	if (t95 != 3LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = -1;
	uint8_t x439 = UINT8_MAX;

	t96 = (x437+((x438==x439)^x440));

	if (t96 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x443 = -20842134042126LL;
	volatile int32_t x444 = -1;

	t97 = (x441+((x442==x443)^x444));

	if (t97 != 44808885871230106LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	int8_t x448 = 31;
	static volatile int64_t t98 = -9LL;

	t98 = (x445+((x446==x447)^x448));

	if (t98 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = 99766095476LL;
	int16_t x450 = INT16_MIN;
	uint32_t x451 = 1497185451U;
	int64_t x452 = INT64_MIN;
	int64_t t99 = 944544467618LL;

	t99 = (x449+((x450==x451)^x452));

	if (t99 != -9223371937088680332LL) { NG(); } else { ; }
	
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

