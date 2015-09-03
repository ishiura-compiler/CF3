#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int16_t x5 = -1;
int64_t x16 = INT64_MIN;
static int32_t x26 = INT32_MIN;
volatile uint8_t x50 = UINT8_MAX;
static int32_t x60 = INT32_MAX;
uint8_t x67 = 7U;
volatile int64_t t10 = INT64_MAX;
static uint8_t x78 = UINT8_MAX;
volatile uint64_t t12 = 82063872821LLU;
static int8_t x81 = 0;
int16_t x87 = 63;
uint64_t t14 = 29468876LLU;
volatile int32_t t15 = 49013;
int32_t x94 = -1;
uint16_t x95 = 2U;
static int16_t x97 = 31;
uint8_t x99 = 53U;
static uint32_t x111 = UINT32_MAX;
int64_t x115 = -6607LL;
static int32_t x120 = -456734443;
int8_t x125 = -59;
static uint64_t t24 = 183612013503LLU;
volatile int64_t t26 = INT64_MAX;
uint64_t x153 = 57LLU;
volatile uint64_t t27 = 2249923358643536222LLU;
int32_t x164 = INT32_MAX;
int32_t x169 = 59;
volatile int32_t x173 = -1;
static volatile int16_t x174 = -1;
static int8_t x183 = 1;
int64_t x184 = INT64_MAX;
int64_t x194 = INT64_MIN;
volatile uint64_t t33 = 1997106334LLU;
int8_t x198 = -3;
uint64_t t34 = 326858933LLU;
volatile uint64_t x206 = 10LLU;
int16_t x212 = INT16_MAX;
volatile uint8_t x214 = 76U;
int32_t x216 = INT32_MAX;
uint64_t x220 = 4345962031LLU;
volatile uint64_t t39 = 15045709449514LLU;
volatile int8_t x222 = -10;
int32_t t40 = -3706528;
int8_t x226 = INT8_MAX;
static uint8_t x231 = 101U;
int32_t x232 = INT32_MIN;
static volatile uint16_t x254 = 6U;
int32_t x256 = -99;
int32_t t44 = -8;
uint32_t x260 = UINT32_MAX;
int16_t x265 = -296;
uint32_t x267 = 1735U;
int8_t x268 = -1;
static int32_t x269 = INT32_MAX;
uint8_t x271 = 1U;
static uint32_t t48 = 5925U;
uint8_t x283 = 0U;
uint32_t x291 = UINT32_MAX;
static uint32_t x304 = UINT32_MAX;
static uint32_t t53 = 41899727U;
int8_t x307 = INT8_MIN;
int32_t x312 = INT32_MIN;
static int64_t t55 = 143LL;
int8_t x315 = -1;
uint32_t t56 = 290250U;
int8_t x322 = INT8_MIN;
volatile uint32_t x328 = UINT32_MAX;
volatile int64_t x330 = -1LL;
int8_t x334 = 1;
volatile int8_t x335 = INT8_MIN;
int8_t x338 = -1;
static int8_t x341 = -9;
int8_t x342 = -1;
int32_t t64 = -457232;
uint64_t x381 = 1398LLU;
int8_t x387 = INT8_MIN;
int16_t x388 = INT16_MIN;
uint16_t x393 = 67U;
uint16_t x394 = 11424U;
int64_t t75 = -34072791531592723LL;
int32_t x409 = -1;
static int8_t x424 = -1;
volatile int8_t x444 = 22;
int32_t t83 = -29050531;
int8_t x463 = INT8_MIN;
uint64_t x464 = 4810409202LLU;
int8_t x470 = INT8_MIN;
volatile int8_t x473 = INT8_MIN;
static uint64_t t90 = 202082LLU;
static volatile int8_t x497 = -5;
volatile int16_t x498 = INT16_MIN;
int16_t x499 = INT16_MIN;
static int8_t x501 = INT8_MIN;
uint32_t x503 = 247U;
volatile int8_t x504 = -15;
uint32_t x508 = 15U;
int64_t t94 = -2183778536689LL;
int32_t x524 = INT32_MIN;
int8_t x538 = 5;
int64_t x540 = INT64_MAX;
int32_t x546 = -1;
volatile int32_t x548 = INT32_MAX;
int8_t x551 = INT8_MIN;


void f0(void) {
	uint64_t x1 = 66850259LLU;
	static int16_t x2 = -1;
	uint32_t x3 = 3209U;
	uint64_t t0 = 6488699LLU;

	t0 = (x1|((x2*x3)^x4));

	if (t0 != 4294967259LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (x5|((x6*x7)^x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = -1;
	uint16_t x15 = UINT16_MAX;
	int64_t t2 = 79749893948LL;

	t2 = (x13|((x14*x15)^x16));

	if (t2 != 9223372036854710527LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 2380320;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = -298536174LL;
	uint8_t x20 = UINT8_MAX;
	volatile int64_t t3 = -22LL;

	t3 = (x17|((x18*x19)^x20));

	if (t3 != -19564566061519LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	volatile int64_t x27 = 304909097LL;
	static uint32_t x28 = 13955282U;
	volatile int64_t t4 = -5436546LL;

	t4 = (x25|((x26*x27)^x28));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -1;
	int32_t x39 = -1;
	int32_t x40 = INT32_MAX;
	int32_t t5 = INT32_MAX;

	t5 = (x37|((x38*x39)^x40));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x49 = 39U;
	int8_t x51 = INT8_MAX;
	uint16_t x52 = 3542U;
	volatile int32_t t6 = 27698702;

	t6 = (x49|((x50*x51)^x52));

	if (t6 != 29559) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x53 = 12U;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;
	static volatile int64_t t7 = -3999785LL;

	t7 = (x53|((x54*x55)^x56));

	if (t7 != -9223372036854775668LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x57 = INT64_MIN;
	uint16_t x58 = 188U;
	int64_t x59 = -1LL;
	int64_t t8 = 7393595550851LL;

	t8 = (x57|((x58*x59)^x60));

	if (t8 != -2147483461LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = -1LL;
	static int64_t x63 = INT64_MAX;
	uint8_t x64 = UINT8_MAX;
	int64_t t9 = 128290192701305720LL;

	t9 = (x61|((x62*x63)^x64));

	if (t9 != -32514LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x65 = INT64_MAX;
	uint32_t x66 = 222843U;
	uint32_t x68 = 200U;

	t10 = (x65|((x66*x67)^x68));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MIN;
	volatile uint64_t x74 = 1202727703149058284LLU;
	static uint64_t x75 = 2445994968295914148LLU;
	int8_t x76 = INT8_MAX;
	uint64_t t11 = 34193160280274618LLU;

	t11 = (x73|((x74*x75)^x76));

	if (t11 != 18446744073709547343LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 9846LLU;
	volatile int16_t x79 = -24;
	static uint16_t x80 = 390U;

	t12 = (x77|((x78*x79)^x80));

	if (t12 != 18446744073709547518LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x82 = INT16_MIN;
	static int16_t x83 = INT16_MIN;
	static int16_t x84 = -789;
	volatile int32_t t13 = -254;

	t13 = (x81|((x82*x83)^x84));

	if (t13 != -1073742613) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x85 = INT8_MIN;
	uint64_t x86 = 36023890056689712LLU;
	int8_t x88 = -1;

	t14 = (x85|((x86*x87)^x88));

	if (t14 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x89 = -2;
	volatile uint8_t x90 = 0U;
	int32_t x91 = INT32_MAX;
	int32_t x92 = INT32_MIN;

	t15 = (x89|((x90*x91)^x92));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 3382029928856406997LLU;
	int64_t x96 = INT64_MAX;
	volatile uint64_t t16 = 3629LLU;

	t16 = (x93|((x94*x95)^x96));

	if (t16 != 12605401965711182805LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = INT8_MIN;
	uint16_t x100 = 4831U;
	volatile int32_t t17 = 1303765;

	t17 = (x97|((x98*x99)^x100));

	if (t17 != -2209) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x101 = -1;
	uint32_t x102 = 2033903U;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = 1;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x101|((x102*x103)^x104));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MAX;
	static uint64_t x106 = UINT64_MAX;
	static uint64_t x107 = 817535LLU;
	uint16_t x108 = 205U;
	volatile uint64_t t19 = 28475262271286LLU;

	t19 = (x105|((x106*x107)^x108));

	if (t19 != 18446744073708734079LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x109 = UINT16_MAX;
	volatile int32_t x110 = INT32_MIN;
	uint16_t x112 = 13U;
	static volatile uint32_t t20 = 0U;

	t20 = (x109|((x110*x111)^x112));

	if (t20 != 2147549183U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = -6;
	static int16_t x114 = 15645;
	static uint8_t x116 = UINT8_MAX;
	volatile int64_t t21 = -2574220285LL;

	t21 = (x113|((x114*x115)^x116));

	if (t21 != -6LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x117 = 117012523302LLU;
	volatile int8_t x118 = -2;
	int16_t x119 = INT16_MIN;
	static volatile uint64_t t22 = 7634130167083318323LLU;

	t22 = (x117|((x118*x119)^x120));

	if (t22 != 18446744073692768567LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = 22514085003LL;
	volatile uint32_t x122 = 872U;
	int64_t x123 = -1LL;
	int64_t x124 = INT64_MAX;
	int64_t t23 = 21354LL;

	t23 = (x121|((x122*x123)^x124));

	if (t23 != -9223372014340689937LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MAX;
	volatile uint16_t x128 = 11U;

	t24 = (x125|((x126*x127)^x128));

	if (t24 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MAX;
	static int8_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	static uint8_t x140 = UINT8_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x137|((x138*x139)^x140));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x141 = INT64_MAX;
	volatile uint32_t x142 = 2131819642U;
	static int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;

	t26 = (x141|((x142*x143)^x144));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x154 = -1LL;
	uint32_t x155 = 18U;
	int8_t x156 = -1;

	t27 = (x153|((x154*x155)^x156));

	if (t27 != 57LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = -1;
	uint32_t x163 = 17194U;
	uint32_t t28 = 172399213U;

	t28 = (x161|((x162*x163)^x164));

	if (t28 != 2147500841U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = INT32_MIN;
	static volatile int64_t x166 = 2660801503982LL;
	int16_t x167 = 7;
	int16_t x168 = INT16_MIN;
	static int64_t t29 = 11045LL;

	t29 = (x165|((x166*x167)^x168));

	if (t29 != -484854654LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x170 = 1874597559726797288LLU;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = (x169|((x170*x171)^x172));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MIN;
	int64_t t31 = -385801154LL;

	t31 = (x173|((x174*x175)^x176));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x181 = INT64_MIN;
	static int8_t x182 = 27;
	int64_t t32 = -4675LL;

	t32 = (x181|((x182*x183)^x184));

	if (t32 != -28LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x193 = 29782794U;
	static volatile uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;

	t33 = (x193|((x194*x195)^x196));

	if (t33 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x197 = 15022415606LLU;
	uint64_t x199 = 365526059LLU;
	volatile int64_t x200 = INT64_MIN;

	t34 = (x197|((x198*x199)^x200));

	if (t34 != 9223372036853194751LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x201 = INT32_MIN;
	uint8_t x202 = UINT8_MAX;
	static int16_t x203 = -1;
	static uint16_t x204 = UINT16_MAX;
	static int32_t t35 = -44;

	t35 = (x201|((x202*x203)^x204));

	if (t35 != -65282) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x205 = 770U;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = 0;
	volatile uint64_t t36 = 0LLU;

	t36 = (x205|((x206*x207)^x208));

	if (t36 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x209 = -1;
	int8_t x210 = INT8_MIN;
	static uint64_t x211 = UINT64_MAX;
	uint64_t t37 = UINT64_MAX;

	t37 = (x209|((x210*x211)^x212));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x213 = -1;
	volatile int32_t x215 = -1;
	volatile int32_t t38 = 419422065;

	t38 = (x213|((x214*x215)^x216));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x217 = 621870130LLU;
	int8_t x218 = 8;
	int8_t x219 = INT8_MIN;

	t39 = (x217|((x218*x219)^x220));

	if (t39 != 18446744069380374079LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x221 = 481U;
	uint16_t x223 = 21U;
	static uint8_t x224 = UINT8_MAX;

	t40 = (x221|((x222*x223)^x224));

	if (t40 != -15) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x225 = -1895690;
	uint16_t x227 = 31U;
	volatile int64_t x228 = 56890328710LL;
	int64_t t41 = 59574650834062LL;

	t41 = (x225|((x226*x227)^x228));

	if (t41 != -1074185LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = INT8_MAX;
	volatile int16_t x230 = -307;
	int32_t t42 = 1009779934;

	t42 = (x229|((x230*x231)^x232));

	if (t42 != 2147452671) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 341858593LLU;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (x241|((x242*x243)^x244));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x253 = 109;
	volatile uint8_t x255 = UINT8_MAX;

	t44 = (x253|((x254*x255)^x256));

	if (t44 != -1425) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x257 = INT64_MIN;
	int8_t x258 = -1;
	int8_t x259 = -1;
	static int64_t t45 = -1825LL;

	t45 = (x257|((x258*x259)^x260));

	if (t45 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x261 = 0U;
	volatile uint32_t x262 = 38754U;
	int64_t x263 = -6847922072LL;
	int16_t x264 = 1;
	int64_t t46 = 6039624046LL;

	t46 = (x261|((x262*x263)^x264));

	if (t46 != -265384371978287LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x266 = INT32_MIN;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x265|((x266*x267)^x268));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x270 = UINT16_MAX;
	static volatile uint32_t x272 = 1357528538U;

	t48 = (x269|((x270*x271)^x272));

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x273 = INT64_MAX;
	static uint16_t x274 = 8U;
	int32_t x275 = 169494475;
	volatile uint16_t x276 = 0U;
	static volatile int64_t t49 = INT64_MAX;

	t49 = (x273|((x274*x275)^x276));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	int32_t x279 = -175793;
	int32_t x280 = -1068921057;
	volatile int32_t t50 = -42997430;

	t50 = (x277|((x278*x279)^x280));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MIN;
	volatile int16_t x284 = -1;
	volatile int64_t t51 = 1LL;

	t51 = (x281|((x282*x283)^x284));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	int64_t t52 = INT64_MAX;

	t52 = (x289|((x290*x291)^x292));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = 111U;
	int32_t x303 = -1;

	t53 = (x301|((x302*x303)^x304));

	if (t53 != 4294934638U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x305 = UINT16_MAX;
	uint8_t x306 = UINT8_MAX;
	int64_t x308 = INT64_MIN;
	int64_t t54 = INT64_MAX;

	t54 = (x305|((x306*x307)^x308));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x309 = 7236U;
	volatile int8_t x310 = INT8_MIN;
	int64_t x311 = 177577765851959LL;

	t55 = (x309|((x310*x311)^x312));

	if (t55 != 22729953369291972LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x313 = 348U;
	int8_t x314 = INT8_MIN;
	uint32_t x316 = 602510U;

	t56 = (x313|((x314*x315)^x316));

	if (t56 != 602462U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = -1;
	int32_t x323 = -1;
	static int8_t x324 = -1;
	volatile int32_t t57 = -5495;

	t57 = (x321|((x322*x323)^x324));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x325 = UINT32_MAX;
	static uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 0U;
	uint32_t t58 = UINT32_MAX;

	t58 = (x325|((x326*x327)^x328));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MIN;
	int32_t x331 = -1;
	int16_t x332 = 3085;
	int64_t t59 = 243941338413LL;

	t59 = (x329|((x330*x331)^x332));

	if (t59 != -29684LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x333 = 666896112;
	int16_t x336 = INT16_MAX;
	static int32_t t60 = -42208570;

	t60 = (x333|((x334*x335)^x336));

	if (t60 != -30977) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x337 = 8U;
	uint32_t x339 = 34597U;
	volatile uint32_t x340 = 287334836U;
	uint32_t t61 = 72672U;

	t61 = (x337|((x338*x339)^x340));

	if (t61 != 4007598447U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t62 = 19717921316LL;

	t62 = (x341|((x342*x343)^x344));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = 97U;
	uint8_t x347 = 18U;
	int16_t x348 = INT16_MIN;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x345|((x346*x347)^x348));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	static int16_t x351 = -1;
	int16_t x352 = -1;

	t64 = (x349|((x350*x351)^x352));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x357 = INT16_MIN;
	static int8_t x358 = 42;
	uint16_t x359 = 112U;
	static volatile uint16_t x360 = 474U;
	int32_t t65 = -347286;

	t65 = (x357|((x358*x359)^x360));

	if (t65 != -27718) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = -1LL;
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = 350452158937893LLU;
	int32_t x368 = INT32_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = (x365|((x366*x367)^x368));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 3;
	int64_t x371 = -45156LL;
	static int32_t x372 = -260435761;
	int64_t t67 = -61LL;

	t67 = (x369|((x370*x371)^x372));

	if (t67 != -101LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = 43;
	volatile int16_t x374 = -12;
	uint8_t x375 = 3U;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t68 = 8028083U;

	t68 = (x373|((x374*x375)^x376));

	if (t68 != 43U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x382 = 431U;
	uint64_t x383 = UINT64_MAX;
	static int64_t x384 = INT64_MIN;
	volatile uint64_t t69 = 380281671LLU;

	t69 = (x381|((x382*x383)^x384));

	if (t69 != 9223372036854775671LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x385 = INT64_MAX;
	uint8_t x386 = 73U;
	int64_t t70 = INT64_MAX;

	t70 = (x385|((x386*x387)^x388));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x389 = -1LL;
	volatile int16_t x390 = INT16_MIN;
	static uint32_t x391 = UINT32_MAX;
	static int16_t x392 = -11;
	static volatile int64_t t71 = 109222622554445065LL;

	t71 = (x389|((x390*x391)^x392));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x395 = -1LL;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t72 = 3209654783LL;

	t72 = (x393|((x394*x395)^x396));

	if (t72 != -11297LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x397 = 29390262LLU;
	int64_t x398 = -1LL;
	int16_t x399 = -1;
	int32_t x400 = INT32_MIN;
	uint64_t t73 = 45124000387486276LLU;

	t73 = (x397|((x398*x399)^x400));

	if (t73 != 18446744071591458231LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x401 = 141;
	static volatile int16_t x402 = INT16_MIN;
	volatile int8_t x403 = -50;
	uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t74 = 488974863354989LLU;

	t74 = (x401|((x402*x403)^x404));

	if (t74 != 18446744073707913215LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x405 = UINT16_MAX;
	uint16_t x406 = 1697U;
	static uint16_t x407 = 4U;
	static int64_t x408 = -58372703089080LL;

	t75 = (x405|((x406*x407)^x408));

	if (t75 != -58372703059969LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x410 = 0;
	int8_t x411 = INT8_MIN;
	volatile uint16_t x412 = 3U;
	volatile int32_t t76 = 12676820;

	t76 = (x409|((x410*x411)^x412));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x421 = -1535;
	static uint32_t x422 = 1963U;
	static int64_t x423 = -1LL;
	int64_t t77 = 8963443413047959LL;

	t77 = (x421|((x422*x423)^x424));

	if (t77 != -85LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	uint64_t x435 = 170602269655LLU;
	int64_t x436 = -1LL;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x433|((x434*x435)^x436));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x437 = INT8_MAX;
	int8_t x438 = -1;
	int8_t x439 = 0;
	uint8_t x440 = 7U;
	volatile int32_t t79 = 163;

	t79 = (x437|((x438*x439)^x440));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x441 = 23LLU;
	volatile uint32_t x442 = 154U;
	int8_t x443 = INT8_MIN;
	uint64_t t80 = 62711906062770LLU;

	t80 = (x441|((x442*x443)^x444));

	if (t80 != 4294947607LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x445 = 2U;
	int32_t x446 = -1;
	uint32_t x447 = 1133U;
	static int16_t x448 = INT16_MIN;
	volatile uint32_t t81 = 124500U;

	t81 = (x445|((x446*x447)^x448));

	if (t81 != 31635U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = 16334;
	int16_t x450 = 296;
	int16_t x451 = INT16_MIN;
	volatile uint64_t x452 = 14LLU;
	volatile uint64_t t82 = 165247LLU;

	t82 = (x449|((x450*x451)^x452));

	if (t82 != 18446744073699868622LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x453 = 32U;
	int8_t x454 = INT8_MIN;
	int8_t x455 = -1;
	int8_t x456 = -1;

	t83 = (x453|((x454*x455)^x456));

	if (t83 != -129) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x461 = INT8_MAX;
	static uint8_t x462 = 1U;
	uint64_t t84 = 1709034LLU;

	t84 = (x461|((x462*x463)^x464));

	if (t84 != 18446744068899142527LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x465 = 13;
	uint16_t x466 = 5U;
	int64_t x467 = -4011755330965339LL;
	uint16_t x468 = 1U;
	volatile int64_t t85 = 291283968702LL;

	t85 = (x465|((x466*x467)^x468));

	if (t85 != -20058776654826691LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x469 = 7795;
	int16_t x471 = INT16_MIN;
	static int32_t x472 = INT32_MIN;
	static int32_t t86 = -454925;

	t86 = (x469|((x470*x471)^x472));

	if (t86 != -2143281549) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x474 = 1U;
	uint32_t x475 = UINT32_MAX;
	uint32_t x476 = 14753U;
	uint32_t t87 = 0U;

	t87 = (x473|((x474*x475)^x476));

	if (t87 != 4294967262U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x477 = INT64_MAX;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MAX;
	static int16_t x480 = INT16_MIN;
	static volatile int64_t t88 = INT64_MAX;

	t88 = (x477|((x478*x479)^x480));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MIN;
	uint8_t x488 = UINT8_MAX;
	volatile int64_t t89 = -210582258345030132LL;

	t89 = (x485|((x486*x487)^x488));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x493 = 0U;
	volatile uint8_t x494 = 2U;
	int32_t x495 = -1;
	uint64_t x496 = 1350LLU;

	t90 = (x493|((x494*x495)^x496));

	if (t90 != 18446744073709550264LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x500 = INT16_MAX;
	volatile int32_t t91 = 26375;

	t91 = (x497|((x498*x499)^x500));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x502 = INT8_MIN;
	volatile uint32_t t92 = 280706725U;

	t92 = (x501|((x502*x503)^x504));

	if (t92 != 4294967281U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x505 = INT8_MIN;
	volatile uint64_t x506 = UINT64_MAX;
	uint32_t x507 = 40081U;
	uint64_t t93 = 428958301551LLU;

	t93 = (x505|((x506*x507)^x508));

	if (t93 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x509 = -1;
	static int64_t x510 = -1011LL;
	static int16_t x511 = INT16_MAX;
	int64_t x512 = -27847LL;

	t94 = (x509|((x510*x511)^x512));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = INT64_MIN;
	uint32_t x522 = UINT32_MAX;
	static int8_t x523 = -3;
	static volatile int64_t t95 = -771449LL;

	t95 = (x521|((x522*x523)^x524));

	if (t95 != -9223372034707292157LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x529 = -1LL;
	int16_t x530 = INT16_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	uint8_t x532 = UINT8_MAX;
	int64_t t96 = 1LL;

	t96 = (x529|((x530*x531)^x532));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x537 = -1;
	uint32_t x539 = UINT32_MAX;
	int64_t t97 = -12087543LL;

	t97 = (x537|((x538*x539)^x540));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x545 = 0U;
	int64_t x547 = -15LL;
	int64_t t98 = 2770LL;

	t98 = (x545|((x546*x547)^x548));

	if (t98 != 2147483632LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x549 = -1LL;
	volatile int8_t x550 = INT8_MAX;
	int8_t x552 = INT8_MIN;
	static volatile int64_t t99 = 12LL;

	t99 = (x549|((x550*x551)^x552));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

