#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint8_t x4 = UINT8_MAX;
static int8_t x11 = INT8_MIN;
uint32_t x20 = 111710833U;
int64_t x34 = -2158238047821915LL;
volatile int32_t t8 = -10;
volatile int8_t x45 = -1;
volatile int16_t x46 = INT16_MIN;
uint16_t x47 = 3561U;
int32_t t11 = 0;
int64_t x56 = -1522LL;
uint64_t t12 = 1LLU;
uint8_t x71 = UINT8_MAX;
int32_t x76 = INT32_MIN;
volatile uint64_t x77 = UINT64_MAX;
int16_t x85 = -695;
uint8_t x86 = UINT8_MAX;
static int32_t t18 = -29023;
int8_t x89 = -27;
volatile int32_t t19 = -252;
int16_t x97 = INT16_MIN;
int64_t x109 = -1LL;
int8_t x111 = -1;
volatile int16_t x112 = -1;
static int64_t t23 = -70779258LL;
uint32_t x116 = 25318589U;
int8_t x117 = -46;
static uint16_t x120 = UINT16_MAX;
uint16_t x125 = 50U;
volatile int32_t t27 = -557241;
static uint64_t x132 = UINT64_MAX;
uint8_t x137 = 24U;
volatile uint64_t x147 = 32151881466LLU;
uint8_t x148 = 3U;
int64_t x149 = INT64_MAX;
uint64_t x150 = 112601662225536883LLU;
volatile int32_t x156 = -299788226;
int16_t x158 = INT16_MAX;
volatile int64_t x159 = INT64_MIN;
int32_t x160 = INT32_MAX;
uint32_t x170 = UINT32_MAX;
static uint64_t x173 = UINT64_MAX;
int16_t x174 = 4;
uint32_t x175 = UINT32_MAX;
volatile int32_t t40 = -40137873;
volatile uint32_t x181 = 486709736U;
static int64_t x185 = 501LL;
volatile int32_t t43 = 0;
int32_t x207 = INT32_MAX;
uint32_t x216 = 6U;
uint64_t x220 = 95021986LLU;
volatile int16_t x222 = INT16_MIN;
int8_t x223 = INT8_MAX;
int8_t x226 = INT8_MAX;
volatile int32_t x227 = 329;
volatile int64_t x235 = -478380338221328271LL;
uint8_t x239 = 16U;
int32_t x243 = INT32_MIN;
static int64_t t56 = -5232528825LL;
int32_t x261 = 8770;
uint8_t x264 = 80U;
int8_t x265 = 0;
int64_t x267 = INT64_MIN;
int8_t x268 = INT8_MAX;
uint64_t x276 = 21233991LLU;
uint32_t t61 = 127487181U;
uint16_t x282 = 98U;
uint8_t x290 = UINT8_MAX;
static uint64_t x291 = UINT64_MAX;
int32_t t68 = 103894154;
uint32_t x320 = UINT32_MAX;
static int32_t x321 = 100696565;
volatile int32_t t71 = -293372;
uint32_t x331 = 253U;
volatile int32_t t72 = 2751;
volatile int32_t t73 = -31;
int8_t x338 = INT8_MIN;
uint8_t x343 = 2U;
uint64_t x344 = 824LLU;
volatile uint32_t t75 = 218384440U;
uint64_t x350 = 311697313257946LLU;
volatile int32_t x351 = -1;
uint32_t x357 = 342595U;
int16_t x368 = -1;
volatile int32_t t82 = 766738130;
static int16_t x380 = -3;
int16_t x383 = 3;
static int64_t x385 = 200070363943LL;
static uint32_t x395 = UINT32_MAX;
int32_t x398 = INT32_MIN;
static uint32_t x400 = 223U;
volatile int32_t t88 = -195247766;
static uint32_t x401 = UINT32_MAX;
uint64_t x403 = 310373607631342565LLU;
uint32_t x407 = UINT32_MAX;
static int32_t t90 = 26521506;
int32_t t93 = 1829981;
int32_t x427 = INT32_MIN;
volatile int16_t x435 = -491;
static volatile int8_t x436 = INT8_MIN;
int32_t x441 = INT32_MIN;
volatile int32_t x443 = 516;


void f0(void) {
	int32_t x1 = 1020110;
	uint8_t x3 = 5U;
	int32_t t0 = -377;

	t0 = (x1&(x2==(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	volatile int32_t x10 = INT32_MIN;
	uint16_t x12 = 3376U;
	static volatile int32_t t1 = -4080826;

	t1 = (x9&(x10==(x11+x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 1607275U;
	int16_t x14 = INT16_MIN;
	int8_t x15 = 1;
	volatile int64_t x16 = INT64_MIN;
	uint32_t t2 = 706424U;

	t2 = (x13&(x14==(x15+x16)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = -1LL;
	int8_t x18 = INT8_MIN;
	static uint8_t x19 = 3U;
	static int64_t t3 = 145LL;

	t3 = (x17&(x18==(x19+x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 0U;
	volatile uint32_t x22 = 815755973U;
	static int16_t x23 = 241;
	int8_t x24 = INT8_MIN;
	int32_t t4 = 0;

	t4 = (x21&(x22==(x23+x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = UINT64_MAX;
	volatile int32_t x26 = INT32_MIN;
	static uint8_t x27 = 1U;
	volatile uint64_t x28 = 1136911787390639018LLU;
	uint64_t t5 = 82LLU;

	t5 = (x25&(x26==(x27+x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	uint16_t x32 = UINT16_MAX;
	static uint64_t t6 = 43164875314962LLU;

	t6 = (x29&(x30==(x31+x32)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -10;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = UINT64_MAX;
	int32_t t7 = 7;

	t7 = (x33&(x34==(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = INT16_MAX;
	int32_t x38 = INT32_MIN;
	static int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;

	t8 = (x37&(x38==(x39+x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 9;
	int64_t x42 = -3579392618LL;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = -1;

	t9 = (x41&(x42==(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x48 = -410568827668LL;
	volatile int32_t t10 = -1003033;

	t10 = (x45&(x46==(x47+x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	static int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	int64_t x52 = 1657505687930485LL;

	t11 = (x49&(x50==(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 27206216LLU;
	uint32_t x54 = 1U;
	int16_t x55 = INT16_MIN;

	t12 = (x53&(x54==(x55+x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	int16_t x59 = 215;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = -60;

	t13 = (x57&(x58==(x59+x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = -1;
	uint8_t x66 = 28U;
	int16_t x67 = 14;
	static volatile int16_t x68 = -2;
	static volatile int32_t t14 = -253;

	t14 = (x65&(x66==(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 694511184LLU;
	volatile uint16_t x70 = 748U;
	static int8_t x72 = 0;
	uint64_t t15 = 154786766LLU;

	t15 = (x69&(x70==(x71+x72)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 0U;
	static int64_t x74 = -1LL;
	int64_t x75 = INT64_MAX;
	static volatile int32_t t16 = 1204;

	t16 = (x73&(x74==(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 6274U;
	int64_t x79 = -52128534591377LL;
	static int8_t x80 = INT8_MAX;
	volatile uint64_t t17 = 3732LLU;

	t17 = (x77&(x78==(x79+x80)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x87 = INT16_MAX;
	int16_t x88 = -1;

	t18 = (x85&(x86==(x87+x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t19 = (x89&(x90==(x91+x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x98 = 23;
	static uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MIN;
	static int32_t t20 = -405657;

	t20 = (x97&(x98==(x99+x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	static uint64_t x102 = 1668LLU;
	int64_t x103 = -21949087782LL;
	int32_t x104 = INT32_MIN;
	volatile int32_t t21 = -10771;

	t21 = (x101&(x102==(x103+x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x105 = 1U;
	int32_t x106 = -1;
	static int8_t x107 = INT8_MIN;
	volatile int32_t x108 = -1;
	volatile int32_t t22 = 13207883;

	t22 = (x105&(x106==(x107+x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = -1LL;

	t23 = (x109&(x110==(x111+x112)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 3591600880LLU;
	static volatile int64_t x114 = 7LL;
	static uint32_t x115 = 5191U;
	uint64_t t24 = 608131495142215576LLU;

	t24 = (x113&(x114==(x115+x116)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = 673344052405675033LLU;
	int16_t x119 = INT16_MIN;
	volatile int32_t t25 = 155230660;

	t25 = (x117&(x118==(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x121 = 45U;
	static int64_t x122 = INT64_MIN;
	uint64_t x123 = 3LLU;
	volatile uint64_t x124 = 1409LLU;
	int32_t t26 = -14028289;

	t26 = (x121&(x122==(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x126 = -1;
	static volatile int8_t x127 = -1;
	int32_t x128 = 0;

	t27 = (x125&(x126==(x127+x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 713765U;
	static volatile int8_t x130 = 18;
	uint32_t x131 = 113U;
	volatile uint32_t t28 = 417402U;

	t28 = (x129&(x130==(x131+x132)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -1LL;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MAX;
	volatile int64_t t29 = -321LL;

	t29 = (x133&(x134==(x135+x136)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x138 = UINT8_MAX;
	static volatile int64_t x139 = -9968LL;
	volatile int16_t x140 = INT16_MIN;
	static volatile int32_t t30 = 82393237;

	t30 = (x137&(x138==(x139+x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	static uint16_t x142 = 2153U;
	volatile int8_t x143 = 6;
	int8_t x144 = -1;
	static int32_t t31 = -474;

	t31 = (x141&(x142==(x143+x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x146 = 0;
	uint64_t t32 = 384821434598LLU;

	t32 = (x145&(x146==(x147+x148)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = 135226U;
	int64_t t33 = -21180LL;

	t33 = (x149&(x150==(x151+x152)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = INT64_MIN;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MAX;
	int64_t t34 = -1592150966117553LL;

	t34 = (x153&(x154==(x155+x156)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x157 = -168;
	static int32_t t35 = -1;

	t35 = (x157&(x158==(x159+x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 41;
	static uint32_t x162 = 25U;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = 3;
	int32_t t36 = -1;

	t36 = (x161&(x162==(x163+x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x165 = 32U;
	int64_t x166 = INT64_MIN;
	static int32_t x167 = -1;
	volatile int64_t x168 = -122433967992486633LL;
	static volatile uint32_t t37 = 138638U;

	t37 = (x165&(x166==(x167+x168)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x169 = 30U;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t38 = -1;

	t38 = (x169&(x170==(x171+x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x176 = 4U;
	volatile uint64_t t39 = 699LLU;

	t39 = (x173&(x174==(x175+x176)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = 968U;

	t40 = (x177&(x178==(x179+x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x182 = -444375000582288093LL;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 142501242514147LL;
	static volatile uint32_t t41 = 299U;

	t41 = (x181&(x182==(x183+x184)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = INT16_MAX;
	uint16_t x187 = 993U;
	int8_t x188 = 49;
	volatile int64_t t42 = -26LL;

	t42 = (x185&(x186==(x187+x188)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MAX;
	static int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MAX;

	t43 = (x189&(x190==(x191+x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x197 = 124101757LL;
	static int8_t x198 = -1;
	volatile int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	int64_t t44 = 22890LL;

	t44 = (x197&(x198==(x199+x200)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 115U;
	volatile int64_t x202 = -528873970910242663LL;
	int32_t x203 = -120;
	uint32_t x204 = 1701341U;
	static int32_t t45 = 91066;

	t45 = (x201&(x202==(x203+x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 3005;
	static uint16_t x206 = 5U;
	volatile int64_t x208 = -6059256721LL;
	int32_t t46 = -14539284;

	t46 = (x205&(x206==(x207+x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x209 = 6596U;
	static int8_t x210 = 46;
	static int16_t x211 = 4;
	int16_t x212 = INT16_MIN;
	volatile uint32_t t47 = 181U;

	t47 = (x209&(x210==(x211+x212)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x213 = INT32_MAX;
	volatile int32_t x214 = INT32_MAX;
	int16_t x215 = -588;
	int32_t t48 = -2;

	t48 = (x213&(x214==(x215+x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 50U;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 370U;
	volatile int32_t t49 = -253492;

	t49 = (x217&(x218==(x219+x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	static uint16_t x224 = 5U;
	int32_t t50 = 238;

	t50 = (x221&(x222==(x223+x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t51 = -4406541;

	t51 = (x225&(x226==(x227+x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -1LL;
	static int8_t x234 = -2;
	static volatile int64_t x236 = 1754326058257011LL;
	int64_t t52 = -11LL;

	t52 = (x233&(x234==(x235+x236)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x237 = 1U;
	int64_t x238 = 7LL;
	volatile int8_t x240 = -7;
	int32_t t53 = -7316003;

	t53 = (x237&(x238==(x239+x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = 250LLU;
	int8_t x242 = 1;
	uint16_t x244 = UINT16_MAX;
	uint64_t t54 = 2406LLU;

	t54 = (x241&(x242==(x243+x244)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 23722535LLU;
	uint64_t x246 = 3703258844717558769LLU;
	static int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	volatile uint64_t t55 = 1422249921964LLU;

	t55 = (x245&(x246==(x247+x248)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = INT64_MIN;
	volatile uint16_t x254 = 6U;
	static uint16_t x255 = 6U;
	int8_t x256 = INT8_MIN;

	t56 = (x253&(x254==(x255+x256)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x257 = 424651;
	int16_t x258 = INT16_MIN;
	volatile int8_t x259 = -1;
	int64_t x260 = INT64_MAX;
	volatile int32_t t57 = 7;

	t57 = (x257&(x258==(x259+x260)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x262 = INT64_MAX;
	int32_t x263 = 33;
	int32_t t58 = -49550;

	t58 = (x261&(x262==(x263+x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x266 = -1;
	int32_t t59 = 64599;

	t59 = (x265&(x266==(x267+x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x269 = 99U;
	uint16_t x270 = UINT16_MAX;
	static int16_t x271 = -1;
	static volatile int8_t x272 = INT8_MAX;
	int32_t t60 = -254;

	t60 = (x269&(x270==(x271+x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 0U;
	int16_t x274 = -1;
	int8_t x275 = INT8_MAX;

	t61 = (x273&(x274==(x275+x276)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x277 = 23U;
	volatile int32_t x278 = 469732;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t62 = 4148720;

	t62 = (x277&(x278==(x279+x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	int8_t x283 = 1;
	static volatile int16_t x284 = INT16_MAX;
	volatile int32_t t63 = 22;

	t63 = (x281&(x282==(x283+x284)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = INT64_MAX;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = -26;
	int8_t x288 = INT8_MAX;
	volatile int64_t t64 = -8LL;

	t64 = (x285&(x286==(x287+x288)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 1U;
	int16_t x292 = INT16_MIN;
	int32_t t65 = -8;

	t65 = (x289&(x290==(x291+x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x293 = 312831LLU;
	volatile int64_t x294 = INT64_MIN;
	volatile uint64_t x295 = 26126935758676LLU;
	static int64_t x296 = INT64_MIN;
	uint64_t t66 = 6071037970089727597LLU;

	t66 = (x293&(x294==(x295+x296)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	volatile int16_t x302 = 0;
	int8_t x303 = INT8_MIN;
	static uint16_t x304 = 9U;
	int64_t t67 = -350LL;

	t67 = (x301&(x302==(x303+x304)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = UINT8_MAX;
	static int8_t x307 = -15;
	volatile int16_t x308 = -12783;

	t68 = (x305&(x306==(x307+x308)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x309 = INT64_MIN;
	static int64_t x310 = -1604423590627LL;
	int8_t x311 = 29;
	static uint32_t x312 = 3080U;
	static int64_t t69 = 6273683291LL;

	t69 = (x309&(x310==(x311+x312)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = INT64_MAX;
	int8_t x318 = 10;
	uint32_t x319 = 12020921U;
	static volatile int64_t t70 = 33244057194491LL;

	t70 = (x317&(x318==(x319+x320)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x322 = INT8_MIN;
	static uint64_t x323 = 62LLU;
	static int8_t x324 = -1;

	t71 = (x321&(x322==(x323+x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 6U;
	int32_t x330 = -45562;
	int32_t x332 = 238800951;

	t72 = (x329&(x330==(x331+x332)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 169673336276LLU;

	t73 = (x333&(x334==(x335+x336)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 2U;
	int8_t x339 = INT8_MAX;
	volatile uint8_t x340 = 69U;
	volatile int32_t t74 = -702;

	t74 = (x337&(x338==(x339+x340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x341 = UINT32_MAX;
	static int64_t x342 = INT64_MIN;

	t75 = (x341&(x342==(x343+x344)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = -1;
	volatile int64_t x346 = INT64_MIN;
	volatile int32_t x347 = INT32_MIN;
	int32_t x348 = 222898320;
	int32_t t76 = -7344;

	t76 = (x345&(x346==(x347+x348)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	int8_t x352 = -19;
	static volatile int32_t t77 = 197737;

	t77 = (x349&(x350==(x351+x352)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x358 = 10U;
	static uint32_t x359 = 57U;
	volatile int16_t x360 = -1542;
	volatile uint32_t t78 = 15986U;

	t78 = (x357&(x358==(x359+x360)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = 4;
	int8_t x362 = INT8_MAX;
	int8_t x363 = 5;
	uint64_t x364 = 1170512918030589LLU;
	static int32_t t79 = -13177354;

	t79 = (x361&(x362==(x363+x364)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x365 = 1U;
	uint64_t x366 = 90524075250889909LLU;
	uint16_t x367 = 2557U;
	volatile int32_t t80 = 448531;

	t80 = (x365&(x366==(x367+x368)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x369 = 107U;
	uint8_t x370 = 115U;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = 297;
	int32_t t81 = 56485177;

	t81 = (x369&(x370==(x371+x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = 26145372;
	int32_t x374 = 19186962;
	int64_t x375 = INT64_MAX;
	int8_t x376 = INT8_MIN;

	t82 = (x373&(x374==(x375+x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MAX;
	int16_t x378 = -7718;
	uint64_t x379 = 3341989200015LLU;
	static volatile int32_t t83 = 49304;

	t83 = (x377&(x378==(x379+x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	uint64_t x382 = 1118LLU;
	int8_t x384 = 0;
	int32_t t84 = -933;

	t84 = (x381&(x382==(x383+x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x386 = 931U;
	volatile uint64_t x387 = 818726463726LLU;
	volatile uint64_t x388 = 106409LLU;
	volatile int64_t t85 = -516493LL;

	t85 = (x385&(x386==(x387+x388)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x389 = INT32_MIN;
	uint64_t x390 = 177121627787401LLU;
	static int16_t x391 = 113;
	static volatile uint8_t x392 = UINT8_MAX;
	int32_t t86 = 30498;

	t86 = (x389&(x390==(x391+x392)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = 17;
	volatile uint8_t x396 = 58U;
	volatile int32_t t87 = -1450695;

	t87 = (x393&(x394==(x395+x396)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = -1;
	int64_t x399 = INT64_MIN;

	t88 = (x397&(x398==(x399+x400)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x402 = INT16_MIN;
	uint64_t x404 = UINT64_MAX;
	uint32_t t89 = 1113915236U;

	t89 = (x401&(x402==(x403+x404)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x405 = INT8_MIN;
	volatile int8_t x406 = INT8_MAX;
	int64_t x408 = INT64_MIN;

	t90 = (x405&(x406==(x407+x408)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 0U;
	static int32_t x410 = INT32_MIN;
	static uint16_t x411 = 3U;
	uint32_t x412 = 35535U;
	static volatile int32_t t91 = -266;

	t91 = (x409&(x410==(x411+x412)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	volatile uint32_t x415 = 1743U;
	uint64_t x416 = 467647448LLU;
	volatile int32_t t92 = -2865742;

	t92 = (x413&(x414==(x415+x416)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = -1;
	volatile int64_t x422 = 1LL;
	volatile int8_t x423 = 33;
	volatile uint64_t x424 = 15572629836LLU;

	t93 = (x421&(x422==(x423+x424)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x425 = 10;
	int16_t x426 = INT16_MAX;
	static uint32_t x428 = UINT32_MAX;
	int32_t t94 = 1752984;

	t94 = (x425&(x426==(x427+x428)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x433 = -1;
	uint8_t x434 = 110U;
	volatile int32_t t95 = -15886;

	t95 = (x433&(x434==(x435+x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MAX;
	int32_t x440 = -1;
	static int32_t t96 = 3;

	t96 = (x437&(x438==(x439+x440)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x442 = INT64_MIN;
	static volatile int8_t x444 = -1;
	volatile int32_t t97 = 1;

	t97 = (x441&(x442==(x443+x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MIN;
	static int64_t x446 = 5717152090809LL;
	int32_t x447 = -1;
	volatile uint8_t x448 = UINT8_MAX;
	volatile int32_t t98 = -3788700;

	t98 = (x445&(x446==(x447+x448)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = 14727504780976LL;
	uint16_t x454 = 331U;
	uint8_t x455 = UINT8_MAX;
	volatile uint32_t x456 = UINT32_MAX;
	volatile int64_t t99 = 71749LL;

	t99 = (x453&(x454==(x455+x456)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

