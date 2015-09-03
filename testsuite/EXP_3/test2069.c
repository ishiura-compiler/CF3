#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 82275LL;
int16_t x10 = -24;
int16_t x18 = -1;
volatile int8_t x23 = INT8_MIN;
int64_t x29 = 40259737944458580LL;
int64_t x30 = INT64_MIN;
int16_t x31 = INT16_MIN;
static int32_t x47 = INT32_MAX;
volatile int8_t x51 = INT8_MIN;
static int16_t x56 = 2;
int32_t t12 = 9;
volatile int64_t x57 = -1LL;
volatile int64_t x58 = 2961455LL;
static int8_t x60 = -1;
static int8_t x64 = INT8_MIN;
static int32_t t14 = -499463830;
int16_t x73 = -4;
int64_t x74 = -1LL;
uint16_t x78 = 9U;
volatile int32_t t19 = 87655600;
volatile uint32_t t20 = 35U;
uint64_t x93 = 1833086692326082LLU;
int8_t x95 = -1;
static uint64_t t21 = 11848810872LLU;
static int8_t x97 = -1;
volatile uint16_t x98 = UINT16_MAX;
int64_t x102 = 43016120401731638LL;
int64_t x105 = INT64_MAX;
volatile int64_t t24 = -35809LL;
uint16_t x119 = 3011U;
int64_t t26 = -41365444964LL;
volatile int64_t x124 = INT64_MIN;
uint32_t x125 = 10U;
int64_t x130 = INT64_MIN;
uint8_t x132 = 19U;
int16_t x133 = -1;
volatile uint16_t x134 = UINT16_MAX;
static int32_t t32 = 178;
volatile uint64_t t33 = 2265731879134618232LLU;
volatile uint8_t x157 = 119U;
static uint8_t x161 = 1U;
uint32_t x163 = 1U;
static volatile int64_t x166 = INT64_MIN;
uint32_t x173 = 8835U;
uint64_t x174 = 722LLU;
uint8_t x176 = 3U;
static uint64_t t39 = 2697732376510LLU;
uint32_t t41 = 3U;
uint64_t x193 = 5647LLU;
static int32_t x200 = INT32_MIN;
int64_t x203 = -8282000951547LL;
int64_t t45 = -158LL;
volatile int32_t x207 = -18;
int16_t x208 = INT16_MIN;
volatile int32_t t48 = 235882822;
static int32_t x217 = -1;
volatile int64_t t52 = -253957720768151LL;
static uint64_t t53 = 8182585597855124529LLU;
int8_t x245 = INT8_MAX;
static int64_t x254 = INT64_MAX;
int32_t x258 = 106;
static uint16_t x261 = 2312U;
uint8_t x262 = UINT8_MAX;
uint16_t x269 = 1808U;
int32_t x270 = -1;
uint64_t x273 = UINT64_MAX;
volatile int64_t x281 = INT64_MIN;
uint16_t x290 = UINT16_MAX;
int16_t x292 = -1;
int32_t x295 = 18525575;
volatile int16_t x299 = -515;
uint64_t x330 = 1050767LLU;
int64_t x333 = INT64_MIN;
volatile int32_t x343 = INT32_MIN;
int64_t x347 = -2580879409501579LL;
uint64_t t76 = 291124728307382LLU;
int64_t x360 = -1LL;
volatile int8_t x361 = -2;
static volatile uint8_t x366 = 1U;
volatile int8_t x368 = INT8_MIN;
static uint64_t t83 = 55287LLU;
uint64_t t84 = 2737598164697LLU;
int8_t x386 = INT8_MIN;
volatile int16_t x388 = INT16_MIN;
uint64_t x389 = 3935669023574231088LLU;
static volatile int8_t x395 = -1;
int32_t x398 = INT32_MIN;
uint64_t t89 = 85031613822016901LLU;
volatile uint16_t x415 = 1010U;
static uint64_t x429 = UINT64_MAX;
volatile uint64_t t96 = 467LLU;
int32_t x434 = 183726;
int32_t x435 = -1;
int64_t x439 = -1LL;


void f0(void) {
	int64_t x1 = -1LL;
	int16_t x2 = 334;
	int64_t x3 = -122LL;
	static volatile int8_t x4 = INT8_MAX;
	volatile int64_t t0 = 471276LL;

	t0 = ((x1/x2)-(x3^x4));

	if (t0 != 7LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int8_t x6 = -5;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -1;

	t1 = ((x5/x6)-(x7^x8));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	uint64_t t2 = 47182766390950213LLU;

	t2 = ((x9/x10)-(x11^x12));

	if (t2 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -1;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = -1;
	int32_t x16 = 0;
	volatile int32_t t3 = -5411;

	t3 = ((x13/x14)-(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int32_t x19 = INT32_MIN;
	uint16_t x20 = 5U;
	static volatile uint32_t t4 = 10904278U;

	t4 = ((x17/x18)-(x19^x20));

	if (t4 != 2147483644U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1073;
	uint8_t x22 = 33U;
	static int32_t x24 = INT32_MAX;
	static volatile int32_t t5 = 2894;

	t5 = ((x21/x22)-(x23^x24));

	if (t5 != 2147483489) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MAX;
	int8_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	static int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 27641019LLU;

	t6 = ((x25/x26)-(x27^x28));

	if (t6 != 9223372034707292162LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x32 = -1;
	int64_t t7 = -8517246549695LL;

	t7 = ((x29/x30)-(x31^x32));

	if (t7 != -32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	int64_t t8 = -1LL;

	t8 = ((x33/x34)-(x35^x36));

	if (t8 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = 7;
	static int8_t x43 = -1;
	static uint16_t x44 = UINT16_MAX;
	int32_t t9 = -1;

	t9 = ((x41/x42)-(x43^x44));

	if (t9 != 60855) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = -149;
	uint64_t x46 = 36349265224155LLU;
	static int64_t x48 = INT64_MIN;
	uint64_t t10 = 342202462671098LLU;

	t10 = ((x45/x46)-(x47^x48));

	if (t10 != 9223372034707799647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = 3331189LLU;
	uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t11 = 1LLU;

	t11 = ((x49/x50)-(x51^x52));

	if (t11 != 5537585550126LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	static volatile uint8_t x54 = 36U;
	uint8_t x55 = 7U;

	t12 = ((x53/x54)-(x55^x56));

	if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x59 = 16029780673437176LL;
	int64_t t13 = 20033759039LL;

	t13 = ((x57/x58)-(x59^x60));

	if (t13 != 16029780673437177LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 16;
	static int32_t x62 = 1;
	volatile int32_t x63 = -1;

	t14 = ((x61/x62)-(x63^x64));

	if (t14 != -111) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 127285;
	int16_t x66 = -1;
	volatile int32_t x67 = INT32_MIN;
	int32_t x68 = 1043780807;
	int32_t t15 = 3365740;

	t15 = ((x65/x66)-(x67^x68));

	if (t15 != 1103575556) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x75 = 3619LL;
	volatile int32_t x76 = INT32_MIN;
	static int64_t t16 = 2520268LL;

	t16 = ((x73/x74)-(x75^x76));

	if (t16 != 2147480033LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 12U;
	int64_t x79 = -1LL;
	static int32_t x80 = INT32_MIN;
	volatile int64_t t17 = 15678506775LL;

	t17 = ((x77/x78)-(x79^x80));

	if (t17 != -2147483646LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int64_t x82 = -7364498LL;
	uint16_t x83 = 974U;
	static uint16_t x84 = UINT16_MAX;
	static volatile int64_t t18 = -16LL;

	t18 = ((x81/x82)-(x83^x84));

	if (t18 != -64561LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = -96;
	uint8_t x87 = 63U;
	int16_t x88 = INT16_MIN;

	t19 = ((x85/x86)-(x87^x88));

	if (t19 != 22402326) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = -1;
	volatile int8_t x91 = -1;
	static uint32_t x92 = UINT32_MAX;

	t20 = ((x89/x90)-(x91^x92));

	if (t20 != 128U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MIN;
	int16_t x96 = INT16_MIN;

	t21 = ((x93/x94)-(x95^x96));

	if (t21 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = 3U;
	int32_t t22 = 297042802;

	t22 = ((x97/x98)-(x99^x100));

	if (t22 != -65532) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 1078;
	static int32_t x103 = INT32_MAX;
	int64_t x104 = INT64_MIN;
	static int64_t t23 = 91LL;

	t23 = ((x101/x102)-(x103^x104));

	if (t23 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -2737983851506966904LL;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MAX;

	t24 = ((x105/x106)-(x107^x108));

	if (t24 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = -1;
	static uint8_t x110 = 124U;
	int32_t x111 = 8;
	volatile int16_t x112 = INT16_MIN;
	int32_t t25 = 5340650;

	t25 = ((x109/x110)-(x111^x112));

	if (t25 != 32760) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 3U;
	static int64_t x118 = -1LL;
	static int64_t x120 = INT64_MAX;

	t26 = ((x117/x118)-(x119^x120));

	if (t26 != -9223372036854772799LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 2U;
	int64_t x122 = INT64_MIN;
	int8_t x123 = -1;
	volatile int64_t t27 = 4071924132167784692LL;

	t27 = ((x121/x122)-(x123^x124));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = -463LL;
	volatile int16_t x127 = 1;
	static uint32_t x128 = 192U;
	int64_t t28 = 143260051996607828LL;

	t28 = ((x125/x126)-(x127^x128));

	if (t28 != -193LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int8_t x131 = -1;
	int64_t t29 = 151637387LL;

	t29 = ((x129/x130)-(x131^x132));

	if (t29 != 20LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x135 = 17;
	uint8_t x136 = 1U;
	volatile int32_t t30 = 59892035;

	t30 = ((x133/x134)-(x135^x136));

	if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	static int64_t x138 = INT64_MAX;
	uint8_t x139 = UINT8_MAX;
	volatile uint8_t x140 = 110U;
	volatile int64_t t31 = 206LL;

	t31 = ((x137/x138)-(x139^x140));

	if (t31 != -145LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	volatile uint16_t x142 = 75U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = -1;

	t32 = ((x141/x142)-(x143^x144));

	if (t32 != -563) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 31763900465LLU;
	int32_t x146 = 131772885;
	static int32_t x147 = -1;
	static uint64_t x148 = UINT64_MAX;

	t33 = ((x145/x146)-(x147^x148));

	if (t33 != 241LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = 152LLU;
	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile uint16_t x152 = 3707U;
	static volatile uint64_t t34 = 1363347696290098LLU;

	t34 = ((x149/x150)-(x151^x152));

	if (t34 != 18446744073709489788LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x158 = 4U;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = 56;
	volatile int32_t t35 = 29974;

	t35 = ((x157/x158)-(x159^x160));

	if (t35 != -65450) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x162 = UINT32_MAX;
	int32_t x164 = 39;
	volatile uint32_t t36 = 443604466U;

	t36 = ((x161/x162)-(x163^x164));

	if (t36 != 4294967258U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -2323;
	int8_t x167 = -1;
	int8_t x168 = INT8_MIN;
	static int64_t t37 = -8501LL;

	t37 = ((x165/x166)-(x167^x168));

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = -1LL;
	static uint8_t x170 = 123U;
	uint32_t x171 = 2671803U;
	volatile int64_t x172 = -1LL;
	volatile int64_t t38 = 4107187814LL;

	t38 = ((x169/x170)-(x171^x172));

	if (t38 != 2671804LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x175 = -1;

	t39 = ((x173/x174)-(x175^x176));

	if (t39 != 16LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = INT8_MAX;
	static volatile int32_t x178 = -624040;
	uint32_t x179 = 123U;
	static uint64_t x180 = 1153929723LLU;
	volatile uint64_t t40 = 1LLU;

	t40 = ((x177/x178)-(x179^x180));

	if (t40 != 18446744072555622016LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 0U;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MIN;
	static int32_t x184 = INT32_MIN;

	t41 = ((x181/x182)-(x183^x184));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 1U;
	int64_t x186 = 19578992749585953LL;
	int8_t x187 = 1;
	static uint32_t x188 = 10U;
	int64_t t42 = 7348580309702LL;

	t42 = ((x185/x186)-(x187^x188));

	if (t42 != -11LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = -1;
	int16_t x195 = INT16_MAX;
	volatile int8_t x196 = -1;
	volatile uint64_t t43 = 32LLU;

	t43 = ((x193/x194)-(x195^x196));

	if (t43 != 32768LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x197 = 0U;
	int64_t x198 = -129021LL;
	uint64_t x199 = UINT64_MAX;
	volatile uint64_t t44 = 2981836875764104LLU;

	t44 = ((x197/x198)-(x199^x200));

	if (t44 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -39019;
	int16_t x202 = 1;
	uint32_t x204 = UINT32_MAX;

	t45 = ((x201/x202)-(x203^x204));

	if (t45 != 8283687870107LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MIN;
	volatile int64_t t46 = 1301626093292416143LL;

	t46 = ((x205/x206)-(x207^x208));

	if (t46 != 4294934546LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = 2;
	static uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t47 = -19721828;

	t47 = ((x209/x210)-(x211^x212));

	if (t47 != 32896) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x213 = -829;
	int8_t x214 = 6;
	volatile int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MIN;

	t48 = ((x213/x214)-(x215^x216));

	if (t48 != 2147483383) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = 32180U;
	uint8_t x220 = 0U;
	volatile int32_t t49 = -93954861;

	t49 = ((x217/x218)-(x219^x220));

	if (t49 != -32180) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x221 = 24U;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	static int64_t t50 = 3887802255206LL;

	t50 = ((x221/x222)-(x223^x224));

	if (t50 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x225 = 2U;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	volatile int8_t x228 = INT8_MIN;
	int32_t t51 = 8;

	t51 = ((x225/x226)-(x227^x228));

	if (t51 != -32640) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	volatile uint8_t x230 = UINT8_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = 177416U;

	t52 = ((x229/x230)-(x231^x232));

	if (t52 != 9187201950435560056LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	static volatile uint64_t x234 = 1792207731830407825LLU;
	volatile int64_t x235 = -119037338LL;
	uint32_t x236 = 197565308U;

	t53 = ((x233/x234)-(x235^x236));

	if (t53 != 215926512LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MIN;
	static volatile int8_t x239 = 20;
	int64_t x240 = -1LL;
	volatile int64_t t54 = -95254LL;

	t54 = ((x237/x238)-(x239^x240));

	if (t54 != 21LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x246 = INT64_MIN;
	static volatile int32_t x247 = 17;
	int16_t x248 = -1;
	int64_t t55 = 10602301804LL;

	t55 = ((x245/x246)-(x247^x248));

	if (t55 != 18LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = 126075;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = 1862991500LLU;
	static uint64_t x252 = UINT64_MAX;
	uint64_t t56 = 33785724245209469LLU;

	t56 = ((x249/x250)-(x251^x252));

	if (t56 != 1862991501LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x253 = UINT8_MAX;
	uint16_t x255 = 3U;
	volatile int8_t x256 = -1;
	volatile int64_t t57 = -400419LL;

	t57 = ((x253/x254)-(x255^x256));

	if (t57 != 4LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = 13349193644LL;
	uint8_t x259 = 1U;
	static int8_t x260 = INT8_MAX;
	volatile int64_t t58 = -26306LL;

	t58 = ((x257/x258)-(x259^x260));

	if (t58 != 125935663LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 365U;
	volatile int64_t t59 = -568257LL;

	t59 = ((x261/x262)-(x263^x264));

	if (t59 != 9223372036854775452LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x271 = 0;
	int8_t x272 = 6;
	volatile int32_t t60 = 20203550;

	t60 = ((x269/x270)-(x271^x272));

	if (t60 != -1814) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x274 = INT16_MAX;
	int8_t x275 = 0;
	int64_t x276 = INT64_MIN;
	uint64_t t61 = 19318384050959820LLU;

	t61 = ((x273/x274)-(x275^x276));

	if (t61 != 9223935003988590608LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = 696036216;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = 1;
	volatile int32_t t62 = -178;

	t62 = ((x277/x278)-(x279^x280));

	if (t62 != -254) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x282 = 282159;
	int8_t x283 = -1;
	volatile int32_t x284 = INT32_MAX;
	volatile int64_t t63 = -25562385882965LL;

	t63 = ((x281/x282)-(x283^x284));

	if (t63 != -32686414769743LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x289 = 347528987189935LL;
	int32_t x291 = INT32_MAX;
	static int64_t t64 = -29626728470621LL;

	t64 = ((x289/x290)-(x291^x292));

	if (t64 != 7450436073LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x293 = INT8_MAX;
	uint64_t x294 = 793567950747255043LLU;
	uint8_t x296 = UINT8_MAX;
	static volatile uint64_t t65 = 324417360434LLU;

	t65 = ((x293/x294)-(x295^x296));

	if (t65 != 18446744073691026056LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 505;
	int8_t x298 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	int32_t t66 = 7;

	t66 = ((x297/x298)-(x299^x300));

	if (t66 != 32251) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -1877;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t67 = -1LL;

	t67 = ((x305/x306)-(x307^x308));

	if (t67 != -9223372036854743023LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 100161U;
	int8_t x314 = -1;
	int8_t x315 = -1;
	volatile int32_t x316 = -58664;
	uint32_t t68 = 18980256U;

	t68 = ((x313/x314)-(x315^x316));

	if (t68 != 4294908633U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = -1;
	int8_t x319 = 1;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t69 = 11897972U;

	t69 = ((x317/x318)-(x319^x320));

	if (t69 != 32770U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 192U;
	uint16_t x322 = UINT16_MAX;
	int8_t x323 = 2;
	uint16_t x324 = UINT16_MAX;
	static int32_t t70 = -452312;

	t70 = ((x321/x322)-(x323^x324));

	if (t70 != -65533) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x325 = UINT8_MAX;
	int32_t x326 = -1;
	volatile int32_t x327 = INT32_MIN;
	int32_t x328 = 25;
	int32_t t71 = -986399036;

	t71 = ((x325/x326)-(x327^x328));

	if (t71 != 2147483368) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = -17214822LL;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	uint64_t t72 = 485514972500LLU;

	t72 = ((x329/x330)-(x331^x332));

	if (t72 != 17553356360804LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = INT8_MAX;
	volatile int8_t x336 = -1;
	volatile int64_t t73 = 6712144LL;

	t73 = ((x333/x334)-(x335^x336));

	if (t73 != -140739635871616LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = INT32_MIN;
	int8_t x339 = 1;
	volatile int8_t x340 = INT8_MIN;
	int32_t t74 = -1930277;

	t74 = ((x337/x338)-(x339^x340));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x341 = 3;
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile int64_t t75 = 39958LL;

	t75 = ((x341/x342)-(x343^x344));

	if (t75 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x345 = -12;
	static int16_t x346 = INT16_MIN;
	uint64_t x348 = 3818514721549LLU;

	t76 = ((x345/x346)-(x347^x348));

	if (t76 != 2577473248165512LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;
	static uint64_t x352 = 1958871073142LLU;
	static uint64_t t77 = 77321321862212LLU;

	t77 = ((x349/x350)-(x351^x352));

	if (t77 != 1958871073034LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x353 = 5U;
	int64_t x354 = INT64_MAX;
	int64_t x355 = 2068222245LL;
	static volatile uint32_t x356 = UINT32_MAX;
	static volatile int64_t t78 = 29897LL;

	t78 = ((x353/x354)-(x355^x356));

	if (t78 != -2226745050LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = 6764LLU;
	volatile int16_t x358 = INT16_MIN;
	uint8_t x359 = 17U;
	static uint64_t t79 = 140688963LLU;

	t79 = ((x357/x358)-(x359^x360));

	if (t79 != 18LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x362 = INT16_MIN;
	int32_t x363 = -1;
	uint32_t x364 = UINT32_MAX;
	uint32_t t80 = 1482861227U;

	t80 = ((x361/x362)-(x363^x364));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = -1;
	static uint16_t x367 = 0U;
	static volatile int32_t t81 = -230;

	t81 = ((x365/x366)-(x367^x368));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 4U;
	volatile int32_t x370 = -1;
	uint8_t x371 = 10U;
	uint32_t x372 = 132945U;
	volatile uint32_t t82 = 505546U;

	t82 = ((x369/x370)-(x371^x372));

	if (t82 != 4294834337U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = -1LL;
	uint64_t x374 = 13LLU;
	int16_t x375 = -1644;
	uint8_t x376 = 3U;

	t83 = ((x373/x374)-(x375^x376));

	if (t83 != 1418980313362274842LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	volatile uint32_t x378 = UINT32_MAX;
	static uint64_t x379 = 116139309582378LLU;
	uint16_t x380 = UINT16_MAX;

	t84 = ((x377/x378)-(x379^x380));

	if (t84 != 18446627934400006187LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x381 = 3U;
	int32_t x382 = INT32_MIN;
	volatile int64_t x383 = 1120927085288334LL;
	int64_t x384 = INT64_MIN;
	int64_t t85 = 1934LL;

	t85 = ((x381/x382)-(x383^x384));

	if (t85 != 9222251109769487474LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x385 = INT8_MAX;
	static int8_t x387 = INT8_MIN;
	volatile int32_t t86 = 346977;

	t86 = ((x385/x386)-(x387^x388));

	if (t86 != -32640) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x390 = 16059U;
	int64_t x391 = -1LL;
	int16_t x392 = -4288;
	uint64_t t87 = 2LLU;

	t87 = ((x389/x390)-(x391^x392));

	if (t87 != 245075597702558LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 56LLU;
	int16_t x394 = -206;
	int64_t x396 = INT64_MAX;
	uint64_t t88 = 6817209521595LLU;

	t88 = ((x393/x394)-(x395^x396));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x397 = 495241411199952LLU;
	int16_t x399 = 26;
	uint8_t x400 = UINT8_MAX;

	t89 = ((x397/x398)-(x399^x400));

	if (t89 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MIN;
	static uint8_t x403 = 2U;
	volatile int8_t x404 = INT8_MIN;
	int32_t t90 = -27061;

	t90 = ((x401/x402)-(x403^x404));

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = -68548393091597832LL;
	static int16_t x406 = 1;
	int16_t x407 = -96;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t91 = -202811136796LL;

	t91 = ((x405/x406)-(x407^x408));

	if (t91 != -68548395239081384LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x409 = 7U;
	static int64_t x410 = 30200LL;
	int64_t x411 = 551063219822676643LL;
	uint8_t x412 = UINT8_MAX;
	volatile int64_t t92 = -2130523183LL;

	t92 = ((x409/x410)-(x411^x412));

	if (t92 != -551063219822676572LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = 1;
	static int16_t x414 = -1;
	static int8_t x416 = INT8_MAX;
	volatile int32_t t93 = 80902;

	t93 = ((x413/x414)-(x415^x416));

	if (t93 != -910) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x421 = INT16_MIN;
	int16_t x422 = 3162;
	uint8_t x423 = 14U;
	uint16_t x424 = 0U;
	volatile int32_t t94 = -248;

	t94 = ((x421/x422)-(x423^x424));

	if (t94 != -24) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x425 = INT32_MIN;
	static uint16_t x426 = UINT16_MAX;
	int16_t x427 = -1;
	int32_t x428 = INT32_MAX;
	int32_t t95 = 7063;

	t95 = ((x425/x426)-(x427^x428));

	if (t95 != 2147450880) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x430 = -1;
	static int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;

	t96 = ((x429/x430)-(x431^x432));

	if (t96 != 2147418114LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x433 = 12748U;
	volatile uint32_t x436 = UINT32_MAX;
	volatile uint32_t t97 = 759U;

	t97 = ((x433/x434)-(x435^x436));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = 3320LL;
	int64_t x438 = -1LL;
	int32_t x440 = INT32_MAX;
	int64_t t98 = 6531LL;

	t98 = ((x437/x438)-(x439^x440));

	if (t98 != 2147480328LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x441 = INT8_MIN;
	volatile int64_t x442 = -30527048LL;
	volatile uint64_t x443 = 43536LLU;
	int8_t x444 = 5;
	volatile uint64_t t99 = 13635706754LLU;

	t99 = ((x441/x442)-(x443^x444));

	if (t99 != 18446744073709508075LLU) { NG(); } else { ; }
	
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

