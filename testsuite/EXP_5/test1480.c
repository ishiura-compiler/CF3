#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = -1LL;
int64_t t0 = 9611965LL;
int8_t x18 = INT8_MIN;
int16_t x19 = -1;
int64_t x21 = INT64_MAX;
volatile uint64_t x30 = 54364622152332550LLU;
int8_t x32 = -1;
volatile int64_t t8 = -1729233239LL;
static uint64_t x41 = 129909LLU;
int8_t x46 = INT8_MIN;
int16_t x47 = INT16_MAX;
int8_t x48 = -1;
volatile int64_t t14 = -119LL;
int32_t x68 = INT32_MAX;
uint16_t x77 = 10U;
int32_t x81 = -1;
int16_t x82 = INT16_MIN;
static uint64_t x93 = 70010851314LLU;
static int16_t x101 = INT16_MIN;
int32_t t25 = 938749;
int32_t t27 = 0;
int32_t t28 = -117469849;
volatile int8_t x124 = INT8_MIN;
int32_t x131 = INT32_MIN;
int32_t x133 = INT32_MIN;
int32_t t33 = -221236879;
int8_t x140 = 12;
uint16_t x151 = 320U;
volatile int16_t x155 = 3;
int8_t x156 = -1;
volatile int32_t x165 = -1;
volatile int32_t t41 = -5;
volatile uint64_t x174 = 7167LLU;
int32_t x179 = -54773602;
volatile int32_t x185 = INT32_MAX;
uint16_t x190 = 7914U;
int64_t x193 = INT64_MIN;
int64_t t48 = -7275745320612LL;
static uint8_t x203 = 81U;
static volatile int64_t t50 = 0LL;
int32_t t52 = 827902728;
static int16_t x213 = INT16_MIN;
volatile uint32_t x214 = 248U;
volatile int32_t x224 = INT32_MAX;
uint32_t t55 = 1285U;
int8_t x225 = INT8_MIN;
volatile uint64_t t57 = 4510079028146788LLU;
int32_t x234 = INT32_MIN;
volatile int64_t x235 = INT64_MIN;
volatile int32_t x236 = 1;
volatile int32_t t59 = -9319;
uint8_t x242 = UINT8_MAX;
int16_t x245 = INT16_MAX;
static uint16_t x249 = 21U;
int32_t x250 = 257510486;
static volatile int32_t t63 = 145586;
uint8_t x265 = 10U;
volatile int32_t t66 = -58;
uint16_t x269 = 28613U;
int8_t x270 = -1;
volatile uint8_t x276 = 119U;
int32_t x282 = -6;
uint64_t x289 = 8649087270015LLU;
int16_t x292 = INT16_MIN;
static volatile int64_t x298 = -1LL;
int64_t x304 = INT64_MIN;
volatile int64_t t77 = 5784138192989LL;
volatile int8_t x317 = INT8_MIN;
int64_t x328 = -1LL;
uint16_t x330 = UINT16_MAX;
int64_t x334 = -1LL;
uint32_t x336 = 311U;
volatile int8_t x340 = INT8_MAX;
int8_t x341 = INT8_MIN;
uint16_t x354 = UINT16_MAX;
uint8_t x360 = 0U;
int16_t x364 = 59;
uint32_t t92 = 1424U;
int32_t x374 = -7;
int64_t x376 = INT64_MIN;
uint16_t x383 = 3U;
volatile int8_t x384 = INT8_MIN;
int64_t t96 = 4750775140841LL;
volatile int16_t x389 = -18;
int32_t t97 = 42294;
int64_t x394 = 161LL;
volatile int32_t t98 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x3 = -5;
	int16_t x4 = INT16_MIN;

	t0 = (x1&((x2<x3)<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile uint8_t x6 = 0U;
	uint64_t x7 = UINT64_MAX;
	volatile int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 109304;

	t1 = (x5&((x6<x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = -7560;
	int32_t x11 = -1;
	int8_t x12 = -1;
	int32_t t2 = 1;

	t2 = (x9&((x10<x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 360819364LL;
	int64_t x14 = 227153071426LL;
	int8_t x15 = INT8_MAX;
	int32_t x16 = -108602204;
	int64_t t3 = -134551944944LL;

	t3 = (x13&((x14<x15)<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x20 = 123771662725LL;
	int32_t t4 = 6088201;

	t4 = (x17&((x18<x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 30968U;
	uint64_t x24 = 483995411149LLU;
	volatile int64_t t5 = -2083201638023LL;

	t5 = (x21&((x22<x23)<=x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint16_t x26 = 6586U;
	volatile int64_t x27 = INT64_MAX;
	static volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 732;

	t6 = (x25&((x26<x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static volatile int16_t x31 = 14409;
	volatile int32_t t7 = -61312705;

	t7 = (x29&((x30<x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint32_t x34 = UINT32_MAX;
	static uint32_t x35 = UINT32_MAX;
	int32_t x36 = 245;

	t8 = (x33&((x34<x35)<=x36));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 63LL;
	int16_t x38 = -1;
	static int16_t x39 = -1;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t9 = -38901976168LL;

	t9 = (x37&((x38<x39)<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MIN;
	static uint64_t t10 = 15901112LLU;

	t10 = (x41&((x42<x43)<=x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int32_t t11 = -35239;

	t11 = (x45&((x46<x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 3U;
	int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -4645;
	static uint32_t t12 = 1U;

	t12 = (x49&((x50<x51)<=x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 7494;
	volatile int8_t x54 = -1;
	int8_t x55 = INT8_MIN;
	static uint16_t x56 = UINT16_MAX;
	int32_t t13 = -104750058;

	t13 = (x53&((x54<x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -30722LL;
	static uint16_t x58 = UINT16_MAX;
	int8_t x59 = 21;
	static int16_t x60 = INT16_MIN;

	t14 = (x57&((x58<x59)<=x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	static int64_t x62 = 377704185304LL;
	uint64_t x63 = 13LLU;
	int64_t x64 = 2LL;
	volatile int32_t t15 = -61;

	t15 = (x61&((x62<x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = INT32_MIN;
	static volatile int32_t t16 = 45238976;

	t16 = (x65&((x66<x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	volatile int64_t x70 = -1LL;
	uint32_t x71 = 3877611U;
	volatile int32_t x72 = -158933;
	volatile int32_t t17 = 104;

	t17 = (x69&((x70<x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = 7;
	int32_t x75 = INT32_MIN;
	static uint8_t x76 = 4U;
	volatile int32_t t18 = 1;

	t18 = (x73&((x74<x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	uint32_t x79 = 96877623U;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = 10517;

	t19 = (x77&((x78<x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = 131020;

	t20 = (x81&((x82<x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 4773;
	uint16_t x86 = 51U;
	uint8_t x87 = UINT8_MAX;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = 395;

	t21 = (x85&((x86<x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 125024570;
	int8_t x90 = -17;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = -1;
	int32_t t22 = 56;

	t22 = (x89&((x90<x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	int8_t x96 = -1;
	uint64_t t23 = 3218203217460014963LLU;

	t23 = (x93&((x94<x95)<=x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int32_t x98 = 11;
	int8_t x99 = INT8_MAX;
	volatile uint8_t x100 = 0U;
	volatile uint32_t t24 = 4918063U;

	t24 = (x97&((x98<x99)<=x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = -1;
	static volatile int32_t x103 = 18;
	int64_t x104 = 236721623674284171LL;

	t25 = (x101&((x102<x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	int8_t x106 = -1;
	int8_t x107 = -29;
	uint16_t x108 = 11U;
	volatile int32_t t26 = 491;

	t26 = (x105&((x106<x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile int32_t x110 = -89;
	static int64_t x111 = -131672212343687LL;
	uint32_t x112 = 2U;

	t27 = (x109&((x110<x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = 25936320;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MAX;

	t28 = (x113&((x114<x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -969700;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -1;
	volatile int32_t t29 = 89;

	t29 = (x117&((x118<x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	int32_t t30 = -72;

	t30 = (x121&((x122<x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 49U;
	uint8_t x126 = 0U;
	int8_t x127 = -62;
	volatile int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = 0;

	t31 = (x125&((x126<x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -3;
	static int32_t x130 = INT32_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 29;

	t32 = (x129&((x130<x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x134 = 111U;
	int32_t x135 = INT32_MAX;
	volatile int64_t x136 = -54210937LL;

	t33 = (x133&((x134<x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MIN;
	uint32_t x138 = 129U;
	int64_t x139 = INT64_MIN;
	static int64_t t34 = 3140041250340LL;

	t34 = (x137&((x138<x139)<=x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 3;
	uint64_t x142 = 23517852886LLU;
	volatile int64_t x143 = -1LL;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -6582590;

	t35 = (x141&((x142<x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -198LL;
	uint64_t x146 = 63845233167959954LLU;
	int8_t x147 = INT8_MIN;
	int64_t x148 = -331936739812568855LL;
	volatile int64_t t36 = -6430LL;

	t36 = (x145&((x146<x147)<=x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = 0U;
	int16_t x152 = -9477;
	volatile int32_t t37 = 3903;

	t37 = (x149&((x150<x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -219LL;
	int16_t x154 = INT16_MIN;
	int64_t t38 = -9LL;

	t38 = (x153&((x154<x155)<=x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;
	volatile int8_t x159 = 26;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 39425234;

	t39 = (x157&((x158<x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x162 = 31416U;
	static int16_t x163 = 212;
	uint8_t x164 = 9U;
	int64_t t40 = 47022LL;

	t40 = (x161&((x162<x163)<=x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 0U;
	int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = 15037U;

	t41 = (x165&((x166<x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 39893552U;
	int32_t x170 = 143;
	static uint8_t x171 = 10U;
	uint8_t x172 = UINT8_MAX;
	volatile uint32_t t42 = 3U;

	t42 = (x169&((x170<x171)<=x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 23676630214LLU;
	volatile int64_t x175 = INT64_MAX;
	int64_t x176 = -1LL;
	uint64_t t43 = 7217773966695096LLU;

	t43 = (x173&((x174<x175)<=x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 8U;
	static int32_t x178 = -1;
	int16_t x180 = -6;
	int32_t t44 = 0;

	t44 = (x177&((x178<x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 59052029657608653LL;
	int16_t x182 = -26;
	uint64_t x183 = 1278683LLU;
	uint8_t x184 = 3U;
	static int64_t t45 = -1LL;

	t45 = (x181&((x182<x183)<=x184));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 3841947129LLU;
	int16_t x187 = -1298;
	int8_t x188 = INT8_MIN;
	static int32_t t46 = -11382;

	t46 = (x185&((x186<x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	int32_t x192 = INT32_MIN;
	volatile int64_t t47 = 614LL;

	t47 = (x189&((x190<x191)<=x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x194 = -1;
	int32_t x195 = -1;
	uint8_t x196 = 43U;

	t48 = (x193&((x194<x195)<=x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 48;
	int32_t x198 = -1;
	static volatile int16_t x199 = INT16_MAX;
	volatile int16_t x200 = -6;
	int32_t t49 = 13;

	t49 = (x197&((x198<x199)<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = -825;
	uint8_t x204 = 9U;

	t50 = (x201&((x202<x203)<=x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MIN;
	static volatile uint64_t x207 = UINT64_MAX;
	volatile uint32_t x208 = 306459U;
	static volatile int32_t t51 = 1309170;

	t51 = (x205&((x206<x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	uint32_t x212 = 187566U;

	t52 = (x209&((x210<x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = -3207502355LL;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = -128600640;

	t53 = (x213&((x214<x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 23352738176426LLU;
	static int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	volatile uint64_t t54 = 1889832816951836659LLU;

	t54 = (x217&((x218<x219)<=x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	volatile int64_t x222 = INT64_MIN;
	uint16_t x223 = 7582U;

	t55 = (x221&((x222<x223)<=x224));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = INT16_MIN;
	static uint32_t x227 = 764U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -15;

	t56 = (x225&((x226<x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = UINT64_MAX;
	volatile int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MIN;
	uint64_t x232 = UINT64_MAX;

	t57 = (x229&((x230<x231)<=x232));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MAX;
	volatile int32_t t58 = -840039;

	t58 = (x233&((x234<x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 26U;
	uint8_t x238 = 38U;
	uint16_t x239 = UINT16_MAX;
	static uint16_t x240 = UINT16_MAX;

	t59 = (x237&((x238<x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int64_t x243 = -4811827910LL;
	uint16_t x244 = 23U;
	static volatile int32_t t60 = -209340721;

	t60 = (x241&((x242<x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x246 = -1;
	static int8_t x247 = 0;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 36926;

	t61 = (x245&((x246<x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x251 = 14U;
	int64_t x252 = -1LL;
	int32_t t62 = 95;

	t62 = (x249&((x250<x251)<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	static int32_t x256 = 5530;

	t63 = (x253&((x254<x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int64_t x258 = -7318796011LL;
	int64_t x259 = INT64_MIN;
	volatile int64_t x260 = -1LL;
	uint64_t t64 = 366532969109282LLU;

	t64 = (x257&((x258<x259)<=x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 0;
	uint8_t x262 = UINT8_MAX;
	volatile int64_t x263 = INT64_MIN;
	static int16_t x264 = -5511;
	static int32_t t65 = -7595;

	t65 = (x261&((x262<x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MIN;
	uint8_t x268 = 9U;

	t66 = (x265&((x266<x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x271 = 198300U;
	volatile int16_t x272 = INT16_MAX;
	int32_t t67 = 8254451;

	t67 = (x269&((x270<x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 1U;
	uint32_t x275 = 0U;
	static int32_t t68 = 49;

	t68 = (x273&((x274<x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MAX;
	uint32_t x278 = 124338715U;
	int64_t x279 = 234512260LL;
	int64_t x280 = INT64_MAX;
	volatile int32_t t69 = -2327;

	t69 = (x277&((x278<x279)<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	volatile uint16_t x283 = 231U;
	static int64_t x284 = -1LL;
	int64_t t70 = -17LL;

	t70 = (x281&((x282<x283)<=x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -214158LL;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	volatile int64_t t71 = 14104834LL;

	t71 = (x285&((x286<x287)<=x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x290 = -5;
	volatile uint16_t x291 = UINT16_MAX;
	uint64_t t72 = 3622301448292LLU;

	t72 = (x289&((x290<x291)<=x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -90;
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MIN;
	int32_t x296 = 0;
	static int32_t t73 = 2257;

	t73 = (x293&((x294<x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int8_t x299 = -1;
	int32_t x300 = -7450962;
	volatile int32_t t74 = 110;

	t74 = (x297&((x298<x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 13;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int32_t t75 = 334;

	t75 = (x301&((x302<x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -1;
	int32_t x306 = INT32_MAX;
	uint8_t x307 = 0U;
	volatile int64_t x308 = 11797628189183410LL;
	volatile int32_t t76 = 387353065;

	t76 = (x305&((x306<x307)<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 1022013020415LL;
	volatile uint64_t x310 = UINT64_MAX;
	int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;

	t77 = (x309&((x310<x311)<=x312));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int32_t x314 = INT32_MAX;
	int8_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int32_t t78 = 70598946;

	t78 = (x313&((x314<x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -1LL;
	volatile int8_t x319 = -1;
	uint16_t x320 = 2683U;
	volatile int32_t t79 = -112707;

	t79 = (x317&((x318<x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 265328LLU;
	uint16_t x322 = 21U;
	volatile int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t80 = 83881038LLU;

	t80 = (x321&((x322<x323)<=x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	static int16_t x326 = INT16_MAX;
	static volatile int64_t x327 = 1143278793LL;
	volatile int32_t t81 = 1;

	t81 = (x325&((x326<x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = 2049;
	volatile int16_t x331 = 29;
	uint16_t x332 = 344U;
	static int32_t t82 = 0;

	t82 = (x329&((x330<x331)<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	static int64_t t83 = 114099494879032LL;

	t83 = (x333&((x334<x335)<=x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int64_t x339 = INT64_MIN;
	static int32_t t84 = -3;

	t84 = (x337&((x338<x339)<=x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	int64_t x344 = 8879LL;
	int32_t t85 = 607178222;

	t85 = (x341&((x342<x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 76U;
	uint32_t x346 = 8810U;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 0LL;
	static int32_t t86 = -218;

	t86 = (x345&((x346<x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 3781;
	int8_t x350 = -30;
	int32_t x351 = -2229323;
	int16_t x352 = -28;
	static volatile int32_t t87 = -31454859;

	t87 = (x349&((x350<x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	uint64_t x355 = 12183588710156355LLU;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -556;

	t88 = (x353&((x354<x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int16_t x358 = -12;
	int8_t x359 = INT8_MAX;
	int32_t t89 = 1996;

	t89 = (x357&((x358<x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	int16_t x362 = 10828;
	int32_t x363 = -1;
	int64_t t90 = -11625531554LL;

	t90 = (x361&((x362<x363)<=x364));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 599U;
	uint8_t x366 = 30U;
	uint8_t x367 = 6U;
	static int8_t x368 = 11;
	uint32_t t91 = 507476U;

	t91 = (x365&((x366<x367)<=x368));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = 12061U;
	int64_t x371 = 0LL;
	int8_t x372 = INT8_MIN;

	t92 = (x369&((x370<x371)<=x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	int8_t x375 = -8;
	int32_t t93 = 4013;

	t93 = (x373&((x374<x375)<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = -1;
	volatile int64_t x380 = -1LL;
	volatile int32_t t94 = -551146053;

	t94 = (x377&((x378<x379)<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	volatile int32_t x382 = 54731625;
	int32_t t95 = 1699855;

	t95 = (x381&((x382<x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int32_t x386 = INT32_MIN;
	int32_t x387 = -361;
	volatile int16_t x388 = 6;

	t96 = (x385&((x386<x387)<=x388));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -1;
	int16_t x391 = INT16_MAX;
	int64_t x392 = -274LL;

	t97 = (x389&((x390<x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static int16_t x395 = 102;
	int64_t x396 = -1LL;

	t98 = (x393&((x394<x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -59;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = -11;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 1153897;

	t99 = (x397&((x398<x399)<=x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

