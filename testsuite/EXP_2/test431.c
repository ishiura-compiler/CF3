#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 56;
int8_t x3 = 37;
uint64_t x5 = 230081427267902462LLU;
volatile int16_t x10 = INT16_MAX;
static volatile int16_t x12 = 1921;
static int8_t x24 = INT8_MIN;
uint32_t x25 = UINT32_MAX;
int16_t x40 = -151;
int32_t t7 = 26348723;
int16_t x44 = INT16_MIN;
static int16_t x47 = 1;
int32_t t9 = 877;
int8_t x51 = -6;
int16_t x72 = INT16_MIN;
int32_t t12 = 57217;
static uint16_t x86 = 493U;
uint8_t x88 = 0U;
volatile int64_t t14 = 6080465LL;
uint64_t x93 = 599742070477442077LLU;
uint16_t x101 = 11148U;
static int16_t x106 = -1;
int32_t t18 = -1;
int8_t x119 = 2;
int8_t x122 = 1;
int16_t x143 = 7;
int16_t x146 = INT16_MIN;
static int64_t x166 = -1LL;
int8_t x189 = -1;
int8_t x191 = INT8_MIN;
static int32_t t31 = 531567631;
uint64_t x194 = UINT64_MAX;
static volatile int32_t x203 = INT32_MIN;
volatile int16_t x211 = -1;
volatile uint64_t x212 = 490065094331LLU;
int8_t x219 = -1;
int64_t x222 = -1LL;
volatile int8_t x224 = INT8_MIN;
volatile int32_t t38 = -33168744;
int32_t x228 = -1;
volatile int16_t x239 = -1;
volatile uint64_t x240 = 14931459144LLU;
volatile uint64_t t40 = 264901889824927177LLU;
static int64_t x254 = -1LL;
static int64_t x259 = -1LL;
uint64_t x260 = 2660276660221820896LLU;
int32_t x275 = -1;
uint64_t x277 = 3009173273656076LLU;
uint64_t x289 = 1366586LLU;
static int32_t x290 = INT32_MIN;
volatile uint32_t x294 = 6U;
volatile int64_t x298 = 21311LL;
volatile int32_t t49 = 7942;
int32_t x301 = -1;
static int16_t x303 = -1;
volatile int8_t x304 = INT8_MAX;
uint32_t x305 = 304289U;
int32_t t52 = -5;
static int16_t x325 = 13652;
static uint64_t x327 = 878598386LLU;
volatile int8_t x329 = INT8_MAX;
int16_t x330 = 934;
volatile uint32_t t55 = 3696400U;
static uint32_t x335 = 1528U;
int32_t x347 = -28;
int32_t x353 = INT32_MAX;
uint8_t x354 = 18U;
int16_t x356 = -103;
uint8_t x360 = 3U;
static int32_t t60 = 15;
uint16_t x376 = UINT16_MAX;
static volatile int64_t x381 = INT64_MAX;
int64_t x397 = INT64_MAX;
int16_t x400 = INT16_MAX;
int8_t x409 = INT8_MAX;
int8_t x414 = -22;
int8_t x416 = -7;
volatile int8_t x417 = 54;
uint64_t x421 = 3504365730397515LLU;
uint32_t x429 = 55U;
int16_t x432 = INT16_MIN;
int8_t x434 = -1;
uint64_t x437 = 30577402684896LLU;
volatile uint8_t x438 = UINT8_MAX;
volatile uint64_t x441 = 11827760747962997LLU;
int8_t x455 = INT8_MAX;
static volatile uint32_t t76 = 72595789U;
int16_t x461 = INT16_MIN;
static volatile uint16_t x464 = 65U;
int64_t x481 = -1LL;
int64_t x482 = -1208603620LL;
int32_t x483 = -117;
volatile uint8_t x487 = 3U;
volatile int32_t t80 = -7873;
uint8_t x505 = UINT8_MAX;
volatile uint32_t t84 = 0U;
static uint32_t x521 = 599670U;
static int16_t x523 = 38;
int32_t x524 = 35753;
int8_t x531 = INT8_MIN;
static uint64_t x535 = 861108656500582471LLU;
uint8_t x549 = 20U;
int32_t x560 = INT32_MAX;
volatile int64_t x561 = INT64_MIN;
uint64_t x564 = 3854091670957LLU;
uint64_t t92 = 31980498660812937LLU;
int64_t x583 = 232LL;
static uint16_t x602 = UINT16_MAX;
uint8_t x603 = UINT8_MAX;
static int8_t x609 = INT8_MAX;
uint32_t x612 = UINT32_MAX;
uint32_t t99 = 130274U;


void f0(void) {
	volatile int32_t x2 = -2762468;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = -37445205;

	t0 = ((x1==(x2*x3))-x4);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = UINT32_MAX;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = 1604933LL;
	int64_t t1 = -8542516322LL;

	t1 = ((x5==(x6*x7))-x8);

	if (t1 != -1604933LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MAX;
	static int32_t t2 = -647021451;

	t2 = ((x9==(x10*x11))-x12);

	if (t2 != -1921) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 1639;
	int16_t x18 = INT16_MAX;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t3 = -43849178;

	t3 = ((x17==(x18*x19))-x20);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MAX;
	int16_t x22 = -240;
	int64_t x23 = -6552177637782LL;
	int32_t t4 = 169;

	t4 = ((x21==(x22*x23))-x24);

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	volatile int64_t x27 = 568256LL;
	volatile int8_t x28 = INT8_MAX;
	static int32_t t5 = 5;

	t5 = ((x25==(x26*x27))-x28);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = -46;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = -1;
	int32_t t6 = -3781;

	t6 = ((x29==(x30*x31))-x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 1;
	int8_t x38 = -1;
	uint32_t x39 = 31U;

	t7 = ((x37==(x38*x39))-x40);

	if (t7 != 151) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	static uint32_t x42 = UINT32_MAX;
	static int8_t x43 = 31;
	int32_t t8 = 4152931;

	t8 = ((x41==(x42*x43))-x44);

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 92U;
	uint16_t x46 = 0U;
	int32_t x48 = 13521288;

	t9 = ((x45==(x46*x47))-x48);

	if (t9 != -13521288) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 9646930894LL;
	volatile int8_t x50 = INT8_MAX;
	static uint32_t x52 = UINT32_MAX;
	uint32_t t10 = 49441078U;

	t10 = ((x49==(x50*x51))-x52);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = -1272;
	int16_t x66 = -101;
	static uint32_t x67 = UINT32_MAX;
	volatile int16_t x68 = -1;
	static volatile int32_t t11 = -2760;

	t11 = ((x65==(x66*x67))-x68);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -995;
	static int8_t x71 = INT8_MIN;

	t12 = ((x69==(x70*x71))-x72);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = -317742;
	int16_t x87 = INT16_MAX;
	int32_t t13 = -3536425;

	t13 = ((x85==(x86*x87))-x88);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x89 = INT16_MAX;
	int32_t x90 = -1;
	volatile int64_t x91 = 667615463534789LL;
	int64_t x92 = 880532453262LL;

	t14 = ((x89==(x90*x91))-x92);

	if (t14 != -880532453262LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x94 = 70U;
	uint64_t x95 = 66536331230436654LLU;
	uint8_t x96 = 2U;
	int32_t t15 = -116553;

	t15 = ((x93==(x94*x95))-x96);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t16 = -223898659;

	t16 = ((x101==(x102*x103))-x104);

	if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = INT32_MIN;
	int8_t x107 = -5;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t17 = 7480504;

	t17 = ((x105==(x106*x107))-x108);

	if (t17 != -255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = -30;
	uint64_t x114 = 11009892583004069LLU;
	volatile uint16_t x115 = 124U;
	uint16_t x116 = 2665U;

	t18 = ((x113==(x114*x115))-x116);

	if (t18 != -2665) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = 0;
	int8_t x118 = INT8_MIN;
	static int16_t x120 = -1703;
	int32_t t19 = 28;

	t19 = ((x117==(x118*x119))-x120);

	if (t19 != 1703) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = UINT64_MAX;
	static int64_t x123 = -1LL;
	static int8_t x124 = INT8_MIN;
	int32_t t20 = -74581581;

	t20 = ((x121==(x122*x123))-x124);

	if (t20 != 129) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	uint32_t x135 = 64U;
	uint16_t x136 = UINT16_MAX;
	static int32_t t21 = -187117;

	t21 = ((x133==(x134*x135))-x136);

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = -1;
	int8_t x139 = INT8_MIN;
	int64_t x140 = -1LL;
	volatile int64_t t22 = 106LL;

	t22 = ((x137==(x138*x139))-x140);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = 49;
	uint32_t x142 = UINT32_MAX;
	uint32_t x144 = 358U;
	volatile uint32_t t23 = 16615U;

	t23 = ((x141==(x142*x143))-x144);

	if (t23 != 4294966938U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x145 = 1;
	volatile int8_t x147 = INT8_MIN;
	int8_t x148 = -15;
	volatile int32_t t24 = 4;

	t24 = ((x145==(x146*x147))-x148);

	if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x149 = 34LL;
	uint32_t x150 = 1239283U;
	uint64_t x151 = 560786840005474560LLU;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t25 = 2766163737767462LLU;

	t25 = ((x149==(x150*x151))-x152);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 3U;
	static uint32_t x158 = 130713U;
	int16_t x159 = -1;
	static uint32_t x160 = 54513336U;
	volatile uint32_t t26 = 47U;

	t26 = ((x157==(x158*x159))-x160);

	if (t26 != 4240453960U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x165 = UINT8_MAX;
	static int64_t x167 = -315304762969LL;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t27 = 1LL;

	t27 = ((x165==(x166*x167))-x168);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x174 = 670;
	uint32_t x175 = 202028U;
	static volatile int64_t x176 = -1LL;
	volatile int64_t t28 = -1295593465LL;

	t28 = ((x173==(x174*x175))-x176);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x181 = -1;
	static volatile int16_t x182 = -1;
	int8_t x183 = -1;
	int64_t x184 = -17535927LL;
	int64_t t29 = 232677LL;

	t29 = ((x181==(x182*x183))-x184);

	if (t29 != 17535927LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = -1LL;
	int8_t x187 = INT8_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t30 = -1;

	t30 = ((x185==(x186*x187))-x188);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x190 = 0;
	int8_t x192 = INT8_MIN;

	t31 = ((x189==(x190*x191))-x192);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x193 = INT32_MAX;
	volatile int32_t x195 = 58211739;
	static uint16_t x196 = UINT16_MAX;
	int32_t t32 = -2;

	t32 = ((x193==(x194*x195))-x196);

	if (t32 != -65535) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x201 = -1LL;
	uint32_t x202 = 12932975U;
	static int16_t x204 = 1531;
	volatile int32_t t33 = -8044419;

	t33 = ((x201==(x202*x203))-x204);

	if (t33 != -1531) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x205 = 5;
	uint8_t x206 = UINT8_MAX;
	static int64_t x207 = -1LL;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t34 = 1015774;

	t34 = ((x205==(x206*x207))-x208);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x209 = INT8_MIN;
	volatile uint8_t x210 = UINT8_MAX;
	uint64_t t35 = 31019057LLU;

	t35 = ((x209==(x210*x211))-x212);

	if (t35 != 18446743583644457285LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = -22;
	static int64_t x214 = 565663590972043303LL;
	int32_t x215 = -1;
	static volatile int32_t x216 = -1;
	volatile int32_t t36 = -226921575;

	t36 = ((x213==(x214*x215))-x216);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile uint64_t x218 = 16546669571100LLU;
	uint64_t x220 = UINT64_MAX;
	static volatile uint64_t t37 = 13675940568024853LLU;

	t37 = ((x217==(x218*x219))-x220);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = 764856950LL;
	int8_t x223 = -1;

	t38 = ((x221==(x222*x223))-x224);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x225 = 6U;
	int16_t x226 = 15;
	int16_t x227 = INT16_MIN;
	int32_t t39 = 109683;

	t39 = ((x225==(x226*x227))-x228);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x237 = INT32_MIN;
	static uint8_t x238 = 20U;

	t40 = ((x237==(x238*x239))-x240);

	if (t40 != 18446744058778092472LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x241 = -38;
	static int16_t x242 = INT16_MIN;
	int32_t x243 = -1434;
	static int8_t x244 = INT8_MIN;
	int32_t t41 = 2;

	t41 = ((x241==(x242*x243))-x244);

	if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x253 = INT8_MIN;
	uint64_t x255 = 139863554389648510LLU;
	int16_t x256 = -1;
	volatile int32_t t42 = -507;

	t42 = ((x253==(x254*x255))-x256);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x257 = INT8_MAX;
	uint64_t x258 = 6914144673760158605LLU;
	static volatile uint64_t t43 = 17958646019544960LLU;

	t43 = ((x257==(x258*x259))-x260);

	if (t43 != 15786467413487730720LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -2LL;
	volatile int64_t t44 = -5437337LL;

	t44 = ((x265==(x266*x267))-x268);

	if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x273 = -1;
	static int32_t x274 = -464;
	uint16_t x276 = 494U;
	int32_t t45 = 8211079;

	t45 = ((x273==(x274*x275))-x276);

	if (t45 != -494) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x278 = -1LL;
	uint16_t x279 = 14U;
	volatile uint32_t x280 = 3449U;
	volatile uint32_t t46 = 11308U;

	t46 = ((x277==(x278*x279))-x280);

	if (t46 != 4294963847U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x291 = -1LL;
	static int8_t x292 = -5;
	static volatile int32_t t47 = 826;

	t47 = ((x289==(x290*x291))-x292);

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x293 = -1;
	int8_t x295 = -1;
	static uint8_t x296 = 7U;
	static volatile int32_t t48 = 43314;

	t48 = ((x293==(x294*x295))-x296);

	if (t48 != -7) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x297 = -1;
	uint32_t x299 = 2011374U;
	volatile int16_t x300 = INT16_MAX;

	t49 = ((x297==(x298*x299))-x300);

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x302 = 1U;
	volatile int32_t t50 = 363593;

	t50 = ((x301==(x302*x303))-x304);

	if (t50 != -126) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 463U;
	static int16_t x308 = 1668;
	int32_t t51 = -12;

	t51 = ((x305==(x306*x307))-x308);

	if (t51 != -1668) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x309 = -1LL;
	volatile int32_t x310 = INT32_MIN;
	uint64_t x311 = 1088LLU;
	int8_t x312 = -50;

	t52 = ((x309==(x310*x311))-x312);

	if (t52 != 50) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x321 = UINT8_MAX;
	volatile int8_t x322 = 1;
	static int64_t x323 = INT64_MIN;
	volatile uint32_t x324 = UINT32_MAX;
	uint32_t t53 = 209901070U;

	t53 = ((x321==(x322*x323))-x324);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x326 = INT64_MIN;
	static int64_t x328 = 6568LL;
	int64_t t54 = -128315603463626LL;

	t54 = ((x325==(x326*x327))-x328);

	if (t54 != -6568LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x331 = -15228LL;
	uint32_t x332 = 29860966U;

	t55 = ((x329==(x330*x331))-x332);

	if (t55 != 4265106330U) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x333 = INT32_MAX;
	int32_t x334 = INT32_MIN;
	int32_t x336 = -1;
	int32_t t56 = -21;

	t56 = ((x333==(x334*x335))-x336);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x345 = INT16_MIN;
	volatile uint64_t x346 = 1161194554LLU;
	int16_t x348 = INT16_MAX;
	int32_t t57 = -364704;

	t57 = ((x345==(x346*x347))-x348);

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x349 = 8080U;
	volatile int32_t x350 = -211;
	static int16_t x351 = INT16_MIN;
	volatile int8_t x352 = 31;
	static int32_t t58 = -2;

	t58 = ((x349==(x350*x351))-x352);

	if (t58 != -31) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x355 = 1U;
	volatile int32_t t59 = -7451;

	t59 = ((x353==(x354*x355))-x356);

	if (t59 != 103) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = 97178253515827440LL;

	t60 = ((x357==(x358*x359))-x360);

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x373 = -1LL;
	int16_t x374 = INT16_MIN;
	volatile uint8_t x375 = 2U;
	int32_t t61 = 10;

	t61 = ((x373==(x374*x375))-x376);

	if (t61 != -65535) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x377 = INT16_MAX;
	int32_t x378 = INT32_MIN;
	static uint64_t x379 = 8851513LLU;
	int64_t x380 = INT64_MAX;
	int64_t t62 = 15LL;

	t62 = ((x377==(x378*x379))-x380);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x382 = -1;
	volatile uint64_t x383 = 438LLU;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t63 = 1487316;

	t63 = ((x381==(x382*x383))-x384);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x389 = 56075068869LLU;
	static uint16_t x390 = 0U;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 5U;
	int32_t t64 = 2971630;

	t64 = ((x389==(x390*x391))-x392);

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x398 = INT8_MIN;
	int64_t x399 = -2122965730LL;
	int32_t t65 = 3878;

	t65 = ((x397==(x398*x399))-x400);

	if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	int16_t x412 = 44;
	int32_t t66 = 2584367;

	t66 = ((x409==(x410*x411))-x412);

	if (t66 != -44) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x413 = -1;
	int8_t x415 = -3;
	int32_t t67 = -829133651;

	t67 = ((x413==(x414*x415))-x416);

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x418 = INT16_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	volatile uint64_t t68 = 53810382127862LLU;

	t68 = ((x417==(x418*x419))-x420);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x422 = 4130U;
	uint8_t x423 = UINT8_MAX;
	static int8_t x424 = INT8_MIN;
	int32_t t69 = -205329;

	t69 = ((x421==(x422*x423))-x424);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x425 = 161845669091LLU;
	volatile int64_t x426 = -3LL;
	uint32_t x427 = 833519415U;
	int32_t x428 = -26;
	static volatile int32_t t70 = 0;

	t70 = ((x425==(x426*x427))-x428);

	if (t70 != 26) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x430 = 0;
	uint16_t x431 = 18U;
	static int32_t t71 = 1;

	t71 = ((x429==(x430*x431))-x432);

	if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x433 = INT32_MIN;
	int32_t x435 = INT32_MAX;
	int16_t x436 = INT16_MAX;
	int32_t t72 = -5;

	t72 = ((x433==(x434*x435))-x436);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x439 = UINT8_MAX;
	uint64_t x440 = 643LLU;
	uint64_t t73 = 14LLU;

	t73 = ((x437==(x438*x439))-x440);

	if (t73 != 18446744073709550973LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x442 = -18;
	uint64_t x443 = 31223511746928LLU;
	int16_t x444 = -1;
	volatile int32_t t74 = -78848;

	t74 = ((x441==(x442*x443))-x444);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x449 = -1;
	uint16_t x450 = UINT16_MAX;
	volatile uint64_t x451 = UINT64_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t75 = 5830;

	t75 = ((x449==(x450*x451))-x452);

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x453 = 1U;
	int64_t x454 = -1LL;
	uint32_t x456 = 69375U;

	t76 = ((x453==(x454*x455))-x456);

	if (t76 != 4294897921U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x462 = 1;
	uint64_t x463 = 6936491501389LLU;
	volatile int32_t t77 = 121459;

	t77 = ((x461==(x462*x463))-x464);

	if (t77 != -65) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x465 = 17;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = 495U;
	static int8_t x468 = 0;
	static volatile int32_t t78 = 1618893;

	t78 = ((x465==(x466*x467))-x468);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x484 = UINT32_MAX;
	static uint32_t t79 = 490U;

	t79 = ((x481==(x482*x483))-x484);

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x485 = INT32_MIN;
	int64_t x486 = 18657551365LL;
	uint8_t x488 = 94U;

	t80 = ((x485==(x486*x487))-x488);

	if (t80 != -94) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x489 = 184LL;
	int8_t x490 = INT8_MAX;
	int32_t x491 = -1;
	volatile int8_t x492 = INT8_MIN;
	static volatile int32_t t81 = 0;

	t81 = ((x489==(x490*x491))-x492);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x493 = 33U;
	int16_t x494 = -1;
	int8_t x495 = 1;
	int32_t x496 = -1;
	volatile int32_t t82 = 26;

	t82 = ((x493==(x494*x495))-x496);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x497 = INT64_MIN;
	uint16_t x498 = 466U;
	int16_t x499 = INT16_MIN;
	uint64_t x500 = 105081014466253923LLU;
	uint64_t t83 = 7546858609095LLU;

	t83 = ((x497==(x498*x499))-x500);

	if (t83 != 18341663059243297693LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x506 = INT16_MIN;
	static int16_t x507 = 12;
	uint32_t x508 = 1104U;

	t84 = ((x505==(x506*x507))-x508);

	if (t84 != 4294966192U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x517 = INT16_MIN;
	int16_t x518 = INT16_MAX;
	static int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MIN;
	volatile int32_t t85 = 57825;

	t85 = ((x517==(x518*x519))-x520);

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x522 = 0;
	volatile int32_t t86 = 2563;

	t86 = ((x521==(x522*x523))-x524);

	if (t86 != -35753) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MIN;
	int8_t x532 = -1;
	static int32_t t87 = 8114;

	t87 = ((x529==(x530*x531))-x532);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x533 = INT64_MAX;
	static int64_t x534 = INT64_MAX;
	uint16_t x536 = 165U;
	int32_t t88 = 415;

	t88 = ((x533==(x534*x535))-x536);

	if (t88 != -165) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x550 = -187686245;
	uint8_t x551 = 2U;
	volatile int64_t x552 = 9LL;
	int64_t t89 = 229743575584LL;

	t89 = ((x549==(x550*x551))-x552);

	if (t89 != -9LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x553 = -1;
	static volatile uint8_t x554 = 34U;
	uint32_t x555 = 493170U;
	uint64_t x556 = 8LLU;
	static volatile uint64_t t90 = 725209571203LLU;

	t90 = ((x553==(x554*x555))-x556);

	if (t90 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x557 = INT32_MIN;
	static int8_t x558 = INT8_MIN;
	volatile uint32_t x559 = 10U;
	volatile int32_t t91 = 43;

	t91 = ((x557==(x558*x559))-x560);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x562 = INT32_MIN;
	uint16_t x563 = 1U;

	t92 = ((x561==(x562*x563))-x564);

	if (t92 != 18446740219617880659LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x565 = UINT8_MAX;
	static int16_t x566 = -1;
	int64_t x567 = -8761613344975LL;
	int32_t x568 = INT32_MAX;
	int32_t t93 = 119331478;

	t93 = ((x565==(x566*x567))-x568);

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x577 = UINT32_MAX;
	uint8_t x578 = 1U;
	uint8_t x579 = 1U;
	uint32_t x580 = 2453U;
	uint32_t t94 = 6234U;

	t94 = ((x577==(x578*x579))-x580);

	if (t94 != 4294964843U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x581 = INT8_MIN;
	int32_t x582 = INT32_MIN;
	int8_t x584 = INT8_MAX;
	volatile int32_t t95 = -1;

	t95 = ((x581==(x582*x583))-x584);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x585 = -7LL;
	uint64_t x586 = UINT64_MAX;
	static volatile int16_t x587 = 0;
	volatile int8_t x588 = INT8_MIN;
	static volatile int32_t t96 = 8;

	t96 = ((x585==(x586*x587))-x588);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x589 = 913991512U;
	static int16_t x590 = -1;
	static int32_t x591 = -10873668;
	int64_t x592 = INT64_MAX;
	int64_t t97 = -107LL;

	t97 = ((x589==(x590*x591))-x592);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x601 = -1;
	volatile int32_t x604 = INT32_MAX;
	volatile int32_t t98 = 828026;

	t98 = ((x601==(x602*x603))-x604);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x610 = -1;
	int8_t x611 = -1;

	t99 = ((x609==(x610*x611))-x612);

	if (t99 != 1U) { NG(); } else { ; }
	
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

