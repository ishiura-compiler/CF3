#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 3444338518042LLU;
int16_t x6 = INT16_MIN;
volatile int32_t t3 = 125;
int32_t x22 = -623784;
static int32_t x23 = -1;
volatile uint64_t x30 = 10052LLU;
int32_t x32 = 8291;
int32_t x35 = INT32_MIN;
uint64_t x60 = UINT64_MAX;
volatile int32_t x62 = 482;
int8_t x64 = INT8_MIN;
static int64_t x65 = INT64_MIN;
uint64_t x66 = UINT64_MAX;
uint32_t x71 = 12U;
volatile uint16_t x74 = UINT16_MAX;
static int8_t x75 = -54;
uint32_t x89 = 21U;
int64_t x90 = 14LL;
int8_t x93 = -1;
volatile uint64_t x100 = UINT64_MAX;
static volatile uint64_t t21 = 4247219118441383445LLU;
int32_t x104 = 1;
volatile int8_t x111 = INT8_MIN;
static uint16_t x114 = UINT16_MAX;
int32_t t25 = -23203606;
int64_t x126 = -13LL;
volatile uint64_t t28 = 386316314104LLU;
uint32_t x137 = UINT32_MAX;
int16_t x139 = INT16_MAX;
int32_t t31 = -723003;
uint8_t x141 = UINT8_MAX;
int16_t x144 = INT16_MAX;
int32_t t32 = -5;
uint32_t x153 = 67U;
int8_t x155 = INT8_MIN;
int8_t x164 = INT8_MIN;
static uint64_t x166 = 63LLU;
static volatile int16_t x169 = INT16_MAX;
uint64_t t40 = 2LLU;
int32_t x183 = -1;
int16_t x184 = -5;
volatile int32_t t41 = 11984;
volatile int32_t x204 = 354561772;
static uint32_t x208 = 194U;
uint32_t t46 = 18361U;
int64_t x210 = -57711389LL;
uint64_t x212 = 4938805568545LLU;
uint16_t x215 = UINT16_MAX;
static uint16_t x217 = 3153U;
static int16_t x219 = INT16_MAX;
int64_t x232 = 20572672LL;
uint32_t x235 = UINT32_MAX;
int32_t x237 = INT32_MAX;
uint32_t x241 = UINT32_MAX;
int16_t x243 = -1;
int32_t x259 = INT32_MIN;
volatile int8_t x260 = INT8_MIN;
static volatile int32_t t59 = -825;
static uint64_t x261 = 209181LLU;
volatile uint16_t x264 = UINT16_MAX;
volatile uint32_t t61 = 5U;
uint32_t x272 = 4656311U;
volatile uint32_t t62 = 195635U;
static uint64_t x278 = 0LLU;
static uint32_t x280 = 14U;
int16_t x282 = -1;
int32_t x283 = INT32_MIN;
volatile int32_t x288 = -13587643;
volatile uint8_t x289 = UINT8_MAX;
volatile int32_t t67 = 111863209;
uint16_t x296 = 46U;
int8_t x297 = INT8_MIN;
int64_t x301 = INT64_MAX;
int8_t x302 = INT8_MIN;
static int32_t t70 = 2700916;
volatile uint64_t x308 = UINT64_MAX;
volatile int8_t x313 = INT8_MIN;
int16_t x314 = INT16_MIN;
uint32_t x320 = 92397U;
int32_t x325 = INT32_MIN;
static int8_t x327 = INT8_MAX;
static int64_t x330 = INT64_MAX;
int16_t x331 = INT16_MAX;
volatile int32_t t80 = -10;
static int8_t x356 = INT8_MIN;
int32_t x371 = -11777829;
volatile int32_t x376 = -1;
static int32_t t90 = 1;
volatile int32_t x385 = -1;
static int32_t x390 = 0;
int32_t t93 = 1033840904;
int32_t x397 = INT32_MIN;
uint32_t x398 = 513U;
static int32_t t94 = -76;
static int64_t x401 = -128758533566114LL;
volatile int16_t x412 = INT16_MIN;
static volatile uint32_t t98 = 0U;
static uint8_t x420 = UINT8_MAX;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	uint64_t x3 = 8492336365721645973LLU;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 1327775LL;

	t0 = ((x1==(x2&x3))-x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = 6U;
	volatile int32_t t1 = 4725354;

	t1 = ((x5==(x6&x7))-x8);

	if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -90089022;
	int8_t x10 = INT8_MAX;
	int64_t x11 = -1LL;
	static int64_t x12 = -1LL;
	int64_t t2 = -15LL;

	t2 = ((x9==(x10&x11))-x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	static uint8_t x16 = 0U;

	t3 = ((x13==(x14&x15))-x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 63492;

	t4 = ((x17==(x18&x19))-x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 3250U;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t5 = 191;

	t5 = ((x21==(x22&x23))-x24);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1U;
	int16_t x31 = -1;
	int32_t t6 = 749674;

	t6 = ((x29==(x30&x31))-x32);

	if (t6 != -8291) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = -344;
	uint16_t x34 = 2U;
	int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -7569336;

	t7 = ((x33==(x34&x35))-x36);

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 10744LL;
	static int32_t x38 = -1;
	uint16_t x39 = 74U;
	volatile uint64_t x40 = 8552910253530531053LLU;
	uint64_t t8 = 8070117627503386124LLU;

	t8 = ((x37==(x38&x39))-x40);

	if (t8 != 9893833820179020563LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	volatile int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = 7U;
	static volatile int32_t t9 = -4;

	t9 = ((x45==(x46&x47))-x48);

	if (t9 != -7) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	volatile int8_t x50 = INT8_MIN;
	static uint16_t x51 = UINT16_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t10 = 126;

	t10 = ((x49==(x50&x51))-x52);

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	int16_t x54 = -5;
	static int16_t x55 = INT16_MIN;
	uint64_t x56 = 8497586LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x53==(x54&x55))-x56);

	if (t11 != 18446744073701054030LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 2053070LLU;
	int32_t x58 = -1;
	int8_t x59 = INT8_MAX;
	volatile uint64_t t12 = 1867LLU;

	t12 = ((x57==(x58&x59))-x60);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 14U;
	int8_t x63 = INT8_MIN;
	volatile int32_t t13 = 228395529;

	t13 = ((x61==(x62&x63))-x64);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x67 = INT32_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t14 = 604144062;

	t14 = ((x65==(x66&x67))-x68);

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = 21U;
	static int64_t x72 = -1LL;
	volatile int64_t t15 = -21633764851419545LL;

	t15 = ((x69==(x70&x71))-x72);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 2818905;
	static volatile int8_t x76 = INT8_MAX;
	static volatile int32_t t16 = 16613;

	t16 = ((x73==(x74&x75))-x76);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 80700696135LL;
	int64_t x82 = 34981998226759LL;
	int8_t x83 = INT8_MAX;
	uint32_t x84 = 118557370U;
	uint32_t t17 = 374U;

	t17 = ((x81==(x82&x83))-x84);

	if (t17 != 4176409926U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	int16_t x87 = -1;
	uint16_t x88 = 24934U;
	static int32_t t18 = -5263;

	t18 = ((x85==(x86&x87))-x88);

	if (t18 != -24934) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x91 = INT64_MAX;
	uint64_t x92 = 5635LLU;
	volatile uint64_t t19 = 102LLU;

	t19 = ((x89==(x90&x91))-x92);

	if (t19 != 18446744073709545981LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x94 = 1;
	uint32_t x95 = 15619U;
	int32_t x96 = 335219743;
	int32_t t20 = 3565;

	t20 = ((x93==(x94&x95))-x96);

	if (t20 != -335219743) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	volatile uint16_t x98 = UINT16_MAX;
	static int64_t x99 = 6LL;

	t21 = ((x97==(x98&x99))-x100);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 72LLU;
	static volatile uint8_t x102 = 0U;
	int64_t x103 = INT64_MIN;
	static volatile int32_t t22 = 6927861;

	t22 = ((x101==(x102&x103))-x104);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x105 = UINT32_MAX;
	int64_t x106 = -1LL;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = 8366943921377350LLU;
	static volatile uint64_t t23 = 3LLU;

	t23 = ((x105==(x106&x107))-x108);

	if (t23 != 18438377129788174266LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	static uint8_t x110 = UINT8_MAX;
	int64_t x112 = 322745087LL;
	int64_t t24 = -1194221LL;

	t24 = ((x109==(x110&x111))-x112);

	if (t24 != -322745087LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = UINT64_MAX;
	int32_t x115 = -1;
	uint8_t x116 = 14U;

	t25 = ((x113==(x114&x115))-x116);

	if (t25 != -14) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MIN;
	volatile uint32_t x118 = 2762U;
	int64_t x119 = -1LL;
	volatile uint64_t x120 = 1118114LLU;
	uint64_t t26 = 8377480130LLU;

	t26 = ((x117==(x118&x119))-x120);

	if (t26 != 18446744073708433502LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 850;
	static int16_t x122 = 15;
	uint16_t x123 = 23344U;
	int16_t x124 = INT16_MAX;
	int32_t t27 = 493;

	t27 = ((x121==(x122&x123))-x124);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x125 = 1;
	uint32_t x127 = 41U;
	uint64_t x128 = UINT64_MAX;

	t28 = ((x125==(x126&x127))-x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = 0;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;
	int32_t t29 = 871926;

	t29 = ((x129==(x130&x131))-x132);

	if (t29 != -65535) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = INT64_MIN;
	volatile uint32_t x135 = 296144005U;
	int8_t x136 = INT8_MIN;
	int32_t t30 = 1;

	t30 = ((x133==(x134&x135))-x136);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;

	t31 = ((x137==(x138&x139))-x140);

	if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MIN;

	t32 = ((x141==(x142&x143))-x144);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 7787724249271378036LLU;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = 1;
	int32_t t33 = 104;

	t33 = ((x145==(x146&x147))-x148);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x154 = -1;
	int32_t x156 = INT32_MAX;
	volatile int32_t t34 = 3;

	t34 = ((x153==(x154&x155))-x156);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MAX;
	static uint32_t x158 = 103999048U;
	int64_t x159 = -9822315LL;
	static uint8_t x160 = 2U;
	volatile int32_t t35 = -12188101;

	t35 = ((x157==(x158&x159))-x160);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = -14371;
	static volatile int32_t t36 = -56098769;

	t36 = ((x161==(x162&x163))-x164);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x167 = 29657U;
	int64_t x168 = -1045581245LL;
	static int64_t t37 = -296760048968783551LL;

	t37 = ((x165==(x166&x167))-x168);

	if (t37 != 1045581245LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x170 = 15445493112193LLU;
	volatile int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	int32_t t38 = -326206714;

	t38 = ((x169==(x170&x171))-x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MAX;
	volatile uint64_t x174 = 555LLU;
	int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	int32_t t39 = -757686;

	t39 = ((x173==(x174&x175))-x176);

	if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x177 = 20;
	uint64_t x178 = 2750148379302312LLU;
	volatile uint64_t x179 = 2646LLU;
	volatile uint64_t x180 = 1092157133896136256LLU;

	t40 = ((x177==(x178&x179))-x180);

	if (t40 != 17354586939813415360LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;

	t41 = ((x181==(x182&x183))-x184);

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t42 = 2628;

	t42 = ((x185==(x186&x187))-x188);

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	volatile int64_t x191 = INT64_MIN;
	static uint64_t x192 = 26235884LLU;
	static volatile uint64_t t43 = 4502909LLU;

	t43 = ((x189==(x190&x191))-x192);

	if (t43 != 18446744073683315732LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 0;
	volatile uint8_t x198 = UINT8_MAX;
	uint16_t x199 = 1276U;
	uint64_t x200 = 1457LLU;
	uint64_t t44 = 57566663117298LLU;

	t44 = ((x197==(x198&x199))-x200);

	if (t44 != 18446744073709550159LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x201 = UINT64_MAX;
	uint16_t x202 = 26U;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t t45 = 744;

	t45 = ((x201==(x202&x203))-x204);

	if (t45 != -354561772) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x205 = -1;
	volatile uint16_t x206 = 7658U;
	static int64_t x207 = -425742407LL;

	t46 = ((x205==(x206&x207))-x208);

	if (t46 != 4294967102U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x209 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	uint64_t t47 = 1895988322LLU;

	t47 = ((x209==(x210&x211))-x212);

	if (t47 != 18446739134903983071LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = INT64_MIN;
	static uint8_t x214 = 1U;
	int32_t x216 = -1;
	int32_t t48 = 60;

	t48 = ((x213==(x214&x215))-x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x218 = -2;
	volatile int16_t x220 = -1;
	volatile int32_t t49 = 765;

	t49 = ((x217==(x218&x219))-x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = -1;
	int64_t x222 = -46LL;
	static int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t50 = 1026725;

	t50 = ((x221==(x222&x223))-x224);

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MIN;
	volatile int32_t x227 = -5940;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t51 = 2332369;

	t51 = ((x225==(x226&x227))-x228);

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -18LL;
	volatile uint16_t x230 = 18U;
	int64_t x231 = INT64_MIN;
	static int64_t t52 = 893153121LL;

	t52 = ((x229==(x230&x231))-x232);

	if (t52 != -20572672LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x233 = UINT8_MAX;
	uint16_t x234 = 260U;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t53 = 7;

	t53 = ((x233==(x234&x235))-x236);

	if (t53 != 32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = INT64_MIN;
	int16_t x239 = -1;
	uint16_t x240 = 5689U;
	int32_t t54 = 15014980;

	t54 = ((x237==(x238&x239))-x240);

	if (t54 != -5689) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t55 = 1943;

	t55 = ((x241==(x242&x243))-x244);

	if (t55 != 32768) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 831U;
	static int64_t x246 = -1LL;
	volatile uint16_t x247 = 22U;
	int32_t x248 = -1;
	static int32_t t56 = -49;

	t56 = ((x245==(x246&x247))-x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static volatile int64_t x250 = -1LL;
	volatile int64_t x251 = 204449LL;
	volatile uint16_t x252 = 12313U;
	static volatile int32_t t57 = -347;

	t57 = ((x249==(x250&x251))-x252);

	if (t57 != -12313) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = -1;
	int32_t x255 = -14135;
	uint32_t x256 = 886099U;
	uint32_t t58 = 566U;

	t58 = ((x253==(x254&x255))-x256);

	if (t58 != 4294081197U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x257 = 0U;
	int32_t x258 = INT32_MIN;

	t59 = ((x257==(x258&x259))-x260);

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x262 = INT32_MIN;
	volatile int64_t x263 = 107LL;
	volatile int32_t t60 = 0;

	t60 = ((x261==(x262&x263))-x264);

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x265 = UINT32_MAX;
	uint64_t x266 = 62777437LLU;
	volatile int16_t x267 = INT16_MAX;
	uint32_t x268 = 15070456U;

	t61 = ((x265==(x266&x267))-x268);

	if (t61 != 4279896840U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	volatile int32_t x271 = INT32_MAX;

	t62 = ((x269==(x270&x271))-x272);

	if (t62 != 4290310985U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t63 = -1140;

	t63 = ((x273==(x274&x275))-x276);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x277 = UINT32_MAX;
	int32_t x279 = INT32_MAX;
	uint32_t t64 = 1325U;

	t64 = ((x277==(x278&x279))-x280);

	if (t64 != 4294967282U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 3U;
	static volatile int8_t x284 = INT8_MIN;
	int32_t t65 = -3193;

	t65 = ((x281==(x282&x283))-x284);

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	int32_t x286 = 77;
	uint16_t x287 = 86U;
	static int32_t t66 = 1887120;

	t66 = ((x285==(x286&x287))-x288);

	if (t66 != 13587643) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x290 = 1;
	static int8_t x291 = INT8_MIN;
	volatile int32_t x292 = -1058988538;

	t67 = ((x289==(x290&x291))-x292);

	if (t67 != 1058988538) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 1003;
	static volatile int8_t x294 = INT8_MIN;
	uint8_t x295 = 0U;
	volatile int32_t t68 = -30631;

	t68 = ((x293==(x294&x295))-x296);

	if (t68 != -46) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x298 = 7319U;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = 510455LLU;
	volatile uint64_t t69 = 0LLU;

	t69 = ((x297==(x298&x299))-x300);

	if (t69 != 18446744073709041161LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x303 = 1626218968855LL;
	static int8_t x304 = -33;

	t70 = ((x301==(x302&x303))-x304);

	if (t70 != 33) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = UINT16_MAX;
	int8_t x306 = -41;
	int8_t x307 = INT8_MAX;
	volatile uint64_t t71 = 356915LLU;

	t71 = ((x305==(x306&x307))-x308);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x309 = 48U;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	volatile uint32_t x312 = 74958U;
	uint32_t t72 = 736678U;

	t72 = ((x309==(x310&x311))-x312);

	if (t72 != 4294892338U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x315 = -1LL;
	uint32_t x316 = UINT32_MAX;
	uint32_t t73 = 801284386U;

	t73 = ((x313==(x314&x315))-x316);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x317 = INT8_MAX;
	static int8_t x318 = INT8_MIN;
	uint32_t x319 = 376U;
	uint32_t t74 = 3548U;

	t74 = ((x317==(x318&x319))-x320);

	if (t74 != 4294874899U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = 67004247435LL;
	int32_t x322 = -347885933;
	static int8_t x323 = 42;
	int32_t x324 = -293516;
	int32_t t75 = -773610;

	t75 = ((x321==(x322&x323))-x324);

	if (t75 != 293516) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x326 = 1648477626U;
	int64_t x328 = 10421638093150LL;
	int64_t t76 = 18408LL;

	t76 = ((x325==(x326&x327))-x328);

	if (t76 != -10421638093150LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x329 = INT8_MAX;
	int64_t x332 = 888348LL;
	int64_t t77 = -28256392LL;

	t77 = ((x329==(x330&x331))-x332);

	if (t77 != -888348LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	static volatile uint16_t x335 = 62U;
	uint16_t x336 = 26785U;
	volatile int32_t t78 = -12;

	t78 = ((x333==(x334&x335))-x336);

	if (t78 != -26785) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -25;
	uint16_t x338 = 529U;
	static int64_t x339 = -1LL;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t79 = 8148134400959LLU;

	t79 = ((x337==(x338&x339))-x340);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x341 = INT8_MIN;
	volatile int16_t x342 = 1;
	int16_t x343 = 4166;
	int8_t x344 = -1;

	t80 = ((x341==(x342&x343))-x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x345 = -2619114;
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 105359147137LLU;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t81 = 1047843U;

	t81 = ((x345==(x346&x347))-x348);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -581635261605LL;
	static uint8_t x350 = UINT8_MAX;
	volatile uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t82 = 429598663;

	t82 = ((x349==(x350&x351))-x352);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x353 = -8386537;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = INT8_MAX;
	static volatile int32_t t83 = 31428420;

	t83 = ((x353==(x354&x355))-x356);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = -1;
	static int8_t x360 = -1;
	volatile int32_t t84 = -52;

	t84 = ((x357==(x358&x359))-x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = 1;
	int64_t x363 = -1LL;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t85 = 29011405548LLU;

	t85 = ((x361==(x362&x363))-x364);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x365 = 3U;
	uint64_t x366 = 0LLU;
	int8_t x367 = -1;
	int16_t x368 = INT16_MAX;
	static int32_t t86 = 1502313;

	t86 = ((x365==(x366&x367))-x368);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x369 = 0LLU;
	uint8_t x370 = UINT8_MAX;
	static uint16_t x372 = 3853U;
	volatile int32_t t87 = -34872907;

	t87 = ((x369==(x370&x371))-x372);

	if (t87 != -3853) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = 226210;
	static volatile int64_t x374 = INT64_MIN;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int32_t t88 = -727;

	t88 = ((x373==(x374&x375))-x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = INT32_MIN;
	volatile int32_t x379 = -1;
	static uint64_t x380 = 5376320LLU;
	static uint64_t t89 = 133367673277198LLU;

	t89 = ((x377==(x378&x379))-x380);

	if (t89 != 18446744073704175296LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 443533697U;
	static int32_t x382 = INT32_MAX;
	int32_t x383 = 7126888;
	volatile uint16_t x384 = 35U;

	t90 = ((x381==(x382&x383))-x384);

	if (t90 != -35) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = UINT8_MAX;
	static volatile int64_t x388 = 3830291849LL;
	int64_t t91 = -6674498409043848LL;

	t91 = ((x385==(x386&x387))-x388);

	if (t91 != -3830291849LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x389 = INT16_MIN;
	static volatile int16_t x391 = -4921;
	static int16_t x392 = -1;
	int32_t t92 = 11528924;

	t92 = ((x389==(x390&x391))-x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = 2;
	uint64_t x394 = UINT64_MAX;
	static uint16_t x395 = UINT16_MAX;
	int8_t x396 = INT8_MIN;

	t93 = ((x393==(x394&x395))-x396);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = -1;

	t94 = ((x397==(x398&x399))-x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x402 = UINT16_MAX;
	int32_t x403 = -1;
	volatile int32_t x404 = -116805868;
	volatile int32_t t95 = 8157;

	t95 = ((x401==(x402&x403))-x404);

	if (t95 != 116805868) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = -13;
	volatile uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MAX;
	static volatile int32_t t96 = 2614;

	t96 = ((x405==(x406&x407))-x408);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = 694;
	int64_t x411 = -1LL;
	volatile int32_t t97 = 68365;

	t97 = ((x409==(x410&x411))-x412);

	if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x413 = INT32_MIN;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = UINT32_MAX;
	static uint32_t x416 = 85137566U;

	t98 = ((x413==(x414&x415))-x416);

	if (t98 != 4209829730U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x417 = INT16_MIN;
	static volatile int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int32_t t99 = 38099993;

	t99 = ((x417==(x418&x419))-x420);

	if (t99 != -255) { NG(); } else { ; }
	
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

