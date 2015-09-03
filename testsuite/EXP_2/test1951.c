#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = 408;
int32_t t1 = -55;
uint16_t x15 = 6773U;
int8_t x16 = -1;
volatile int32_t t3 = 2967133;
int32_t x22 = INT32_MIN;
static int64_t t5 = INT64_MIN;
static uint32_t x26 = 1675U;
uint16_t x29 = UINT16_MAX;
int16_t x33 = INT16_MIN;
int64_t x46 = INT64_MAX;
int32_t t11 = -126483;
int16_t x50 = -1;
volatile int16_t x54 = INT16_MIN;
uint8_t x55 = UINT8_MAX;
static int32_t x62 = -1;
volatile int32_t t15 = -324132;
int16_t x68 = INT16_MAX;
volatile uint32_t x76 = 26U;
int32_t x80 = INT32_MIN;
int8_t x92 = -1;
int8_t x93 = INT8_MAX;
uint16_t x94 = 18U;
int64_t x97 = -1286026LL;
int64_t x101 = -1LL;
uint8_t x102 = 2U;
volatile int32_t x103 = INT32_MIN;
static int64_t x105 = INT64_MAX;
volatile uint8_t x106 = 22U;
uint64_t x115 = 268009008562LLU;
int32_t x116 = -1;
static int16_t x123 = -1;
volatile int32_t x139 = 3986431;
uint32_t x143 = 1670U;
volatile int32_t x144 = 430266;
uint8_t x145 = 11U;
uint64_t x146 = 721960LLU;
volatile int32_t t37 = -12555;
static volatile int8_t x160 = INT8_MAX;
int16_t x163 = 636;
volatile int16_t x164 = -1;
uint64_t x168 = 8048LLU;
uint8_t x170 = 15U;
int16_t x172 = INT16_MIN;
volatile int32_t t43 = 25;
int8_t x178 = 1;
static int8_t x186 = -9;
volatile int64_t x187 = 3505676LL;
int32_t x193 = INT32_MIN;
int32_t x195 = -1;
int32_t x202 = -155;
static int8_t x210 = -3;
static int64_t x211 = INT64_MIN;
int32_t t52 = -84;
uint32_t x214 = 49693U;
static volatile int64_t x219 = -7395420762524LL;
static volatile int32_t t54 = -411612017;
int64_t x224 = INT64_MAX;
uint16_t x225 = 2U;
uint8_t x231 = UINT8_MAX;
int32_t t57 = 3200;
uint32_t x233 = 497U;
volatile int64_t t59 = -127LL;
volatile uint32_t t61 = 9U;
volatile int32_t t63 = 201549;
volatile int8_t x257 = INT8_MIN;
volatile int32_t t64 = -93;
volatile int32_t x264 = 253;
int8_t x277 = INT8_MIN;
volatile uint8_t x279 = 48U;
uint64_t x286 = 2291032289558LLU;
uint16_t x291 = 28U;
volatile int64_t x300 = -178LL;
int64_t x306 = INT64_MAX;
uint64_t x310 = 531994095280498512LLU;
int32_t t77 = INT32_MIN;
int64_t x322 = INT64_MIN;
int64_t t81 = -91796747500LL;
uint8_t x335 = UINT8_MAX;
volatile uint16_t x344 = 0U;
int32_t x348 = INT32_MAX;
int32_t x350 = -5;
int8_t x351 = 1;
int16_t x352 = 1029;
static uint64_t x353 = 3831671195079597LLU;
int16_t x354 = -1;
int32_t t89 = -7336;
uint64_t x368 = 179916734922426LLU;
int64_t x372 = -1LL;
volatile uint32_t t93 = UINT32_MAX;
int32_t x379 = -1;
int32_t x385 = INT32_MAX;
uint8_t x386 = UINT8_MAX;
volatile uint32_t x388 = 1156999U;
static volatile uint32_t t96 = 25406U;
uint8_t x389 = 99U;
int8_t x392 = -31;
volatile int32_t x395 = 591860279;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	static int32_t x3 = -2816;
	static int8_t x4 = 11;
	static volatile int32_t t0 = 6605808;

	t0 = ((x1==(x2|x3))+x4);

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int64_t x6 = -81640LL;
	uint8_t x8 = 40U;

	t1 = ((x5==(x6|x7))+x8);

	if (t1 != 40) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x10 = 183U;
	uint16_t x11 = 0U;
	uint16_t x12 = 0U;
	volatile int32_t t2 = 330609;

	t2 = ((x9==(x10|x11))+x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = UINT64_MAX;

	t3 = ((x13==(x14|x15))+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = -1;
	int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -1954704;

	t4 = ((x17==(x18|x19))+x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile uint64_t x23 = UINT64_MAX;
	static int64_t x24 = INT64_MIN;

	t5 = ((x21==(x22|x23))+x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile uint16_t x27 = 95U;
	int8_t x28 = 6;
	static volatile int32_t t6 = -244;

	t6 = ((x25==(x26|x27))+x28);

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 3466002U;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -12;
	volatile int32_t t7 = -31361;

	t7 = ((x29==(x30|x31))+x32);

	if (t7 != -12) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 219LLU;
	static uint8_t x35 = UINT8_MAX;
	static volatile int8_t x36 = -13;
	int32_t t8 = -774035;

	t8 = ((x33==(x34|x35))+x36);

	if (t8 != -13) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 58U;
	int64_t x38 = 40LL;
	uint8_t x39 = 1U;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = INT32_MAX;

	t9 = ((x37==(x38|x39))+x40);

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 0U;
	static int8_t x42 = INT8_MIN;
	uint32_t x43 = 16U;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x41==(x42|x43))+x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = -1;

	t11 = ((x45==(x46|x47))+x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	static uint64_t x51 = UINT64_MAX;
	int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

	t12 = ((x49==(x50|x51))+x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 19;
	volatile int32_t x56 = -20474735;
	volatile int32_t t13 = -4458;

	t13 = ((x53==(x54|x55))+x56);

	if (t13 != -20474735) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	volatile uint16_t x58 = UINT16_MAX;
	static volatile int32_t x59 = -95870386;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57==(x58|x59))+x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 9U;
	int8_t x63 = INT8_MIN;
	int16_t x64 = 3;

	t15 = ((x61==(x62|x63))+x64);

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MAX;
	int8_t x66 = 4;
	int64_t x67 = INT64_MAX;
	int32_t t16 = -255316641;

	t16 = ((x65==(x66|x67))+x68);

	if (t16 != 32768) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 25343309408LLU;
	static volatile uint8_t x70 = 1U;
	static int64_t x71 = 632LL;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = UINT32_MAX;

	t17 = ((x69==(x70|x71))+x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -7;
	uint16_t x74 = 806U;
	int8_t x75 = -8;
	volatile uint32_t t18 = 246U;

	t18 = ((x73==(x74|x75))+x76);

	if (t18 != 26U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 2LLU;
	int32_t x78 = INT32_MIN;
	int16_t x79 = 18;
	int32_t t19 = INT32_MIN;

	t19 = ((x77==(x78|x79))+x80);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = 2;
	volatile int64_t x84 = -1LL;
	volatile int64_t t20 = -4175LL;

	t20 = ((x81==(x82|x83))+x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -9413878LL;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 58U;
	volatile int64_t x88 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = ((x85==(x86|x87))+x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = 1U;
	int32_t t22 = -98339729;

	t22 = ((x89==(x90|x91))+x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x95 = -34;
	int16_t x96 = -1;
	volatile int32_t t23 = 3;

	t23 = ((x93==(x94|x95))+x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = ((x97==(x98|x99))+x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x104 = 34U;
	int32_t t25 = 13;

	t25 = ((x101==(x102|x103))+x104);

	if (t25 != 34) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x107 = 60U;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = -6725;

	t26 = ((x105==(x106|x107))+x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = 61;
	int16_t x111 = -9;
	static uint64_t x112 = 10079636LLU;
	static volatile uint64_t t27 = 99547LLU;

	t27 = ((x109==(x110|x111))+x112);

	if (t27 != 10079637LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int16_t x114 = -1;
	int32_t t28 = 2;

	t28 = ((x113==(x114|x115))+x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 0;
	volatile int8_t x118 = 3;
	int64_t x119 = -1LL;
	int16_t x120 = 1;
	int32_t t29 = -383821;

	t29 = ((x117==(x118|x119))+x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static uint8_t x122 = 15U;
	static volatile uint8_t x124 = 59U;
	int32_t t30 = -869776799;

	t30 = ((x121==(x122|x123))+x124);

	if (t30 != 59) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = -1;
	uint16_t x127 = UINT16_MAX;
	static uint32_t x128 = 722293U;
	uint32_t t31 = 1734U;

	t31 = ((x125==(x126|x127))+x128);

	if (t31 != 722293U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -9820;
	volatile int32_t t32 = -1;

	t32 = ((x129==(x130|x131))+x132);

	if (t32 != -9819) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x133 = -1;
	uint16_t x134 = 1U;
	volatile uint32_t x135 = 836U;
	uint8_t x136 = 1U;
	volatile int32_t t33 = -38;

	t33 = ((x133==(x134|x135))+x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int32_t x138 = -2819624;
	uint16_t x140 = 611U;
	volatile int32_t t34 = -10;

	t34 = ((x137==(x138|x139))+x140);

	if (t34 != 611) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 1U;
	int32_t x142 = -1;
	int32_t t35 = 5588612;

	t35 = ((x141==(x142|x143))+x144);

	if (t35 != 430266) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x147 = -9;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = ((x145==(x146|x147))+x148);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 6U;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = 25907U;
	volatile int8_t x152 = INT8_MIN;

	t37 = ((x149==(x150|x151))+x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 0U;
	uint64_t x154 = 3087LLU;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	static int64_t t38 = INT64_MIN;

	t38 = ((x153==(x154|x155))+x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int8_t x158 = 0;
	static int16_t x159 = INT16_MIN;
	volatile int32_t t39 = 28270;

	t39 = ((x157==(x158|x159))+x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = -4;
	int16_t x162 = INT16_MIN;
	int32_t t40 = -237512;

	t40 = ((x161==(x162|x163))+x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = -31991;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MAX;
	uint64_t t41 = 2LLU;

	t41 = ((x165==(x166|x167))+x168);

	if (t41 != 8048LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int16_t x171 = 1;
	int32_t t42 = 3;

	t42 = ((x169==(x170|x171))+x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	static uint32_t x174 = 27547981U;
	int64_t x175 = INT64_MIN;
	volatile int8_t x176 = INT8_MAX;

	t43 = ((x173==(x174|x175))+x176);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x179 = -1LL;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x177==(x178|x179))+x180);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = -396;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = 6;

	t45 = ((x181==(x182|x183))+x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -318658;
	int8_t x188 = 43;
	int32_t t46 = -4;

	t46 = ((x185==(x186|x187))+x188);

	if (t46 != 43) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MAX;
	int8_t x190 = 2;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = 6577LL;
	volatile int64_t t47 = 0LL;

	t47 = ((x189==(x190|x191))+x192);

	if (t47 != 6577LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = UINT32_MAX;
	static int64_t x196 = -342798500305892LL;
	int64_t t48 = 1LL;

	t48 = ((x193==(x194|x195))+x196);

	if (t48 != -342798500305892LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = UINT16_MAX;
	volatile int8_t x198 = INT8_MAX;
	volatile int16_t x199 = INT16_MIN;
	volatile int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = 2831;

	t49 = ((x197==(x198|x199))+x200);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -1;
	volatile int32_t t50 = 235;

	t50 = ((x201==(x202|x203))+x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	int16_t x206 = -1;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -3870;
	int32_t t51 = -38705;

	t51 = ((x205==(x206|x207))+x208);

	if (t51 != -3870) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	uint16_t x212 = 24U;

	t52 = ((x209==(x210|x211))+x212);

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	int32_t x215 = -1;
	int32_t x216 = INT32_MAX;
	int32_t t53 = INT32_MAX;

	t53 = ((x213==(x214|x215))+x216);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int8_t x220 = INT8_MIN;

	t54 = ((x217==(x218|x219))+x220);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 20U;
	int64_t x222 = INT64_MAX;
	static int32_t x223 = INT32_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x221==(x222|x223))+x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = 43;
	int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t56 = INT64_MIN;

	t56 = ((x225==(x226|x227))+x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = -285;
	int16_t x232 = INT16_MIN;

	t57 = ((x229==(x230|x231))+x232);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x234 = 7U;
	int64_t x235 = INT64_MIN;
	static int32_t x236 = 5102;
	volatile int32_t t58 = -4;

	t58 = ((x233==(x234|x235))+x236);

	if (t58 != 5102) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 0;
	uint32_t x238 = UINT32_MAX;
	volatile int16_t x239 = 2937;
	volatile int64_t x240 = -1LL;

	t59 = ((x237==(x238|x239))+x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -425185333;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t60 = -4596558;

	t60 = ((x241==(x242|x243))+x244);

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = UINT64_MAX;
	uint32_t x248 = 1827269U;

	t61 = ((x245==(x246|x247))+x248);

	if (t61 != 1827270U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	volatile int32_t x251 = INT32_MIN;
	int32_t x252 = -1;
	int32_t t62 = 557626;

	t62 = ((x249==(x250|x251))+x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	uint8_t x254 = UINT8_MAX;
	static int16_t x255 = INT16_MAX;
	static volatile int16_t x256 = INT16_MIN;

	t63 = ((x253==(x254|x255))+x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	static int8_t x260 = INT8_MIN;

	t64 = ((x257==(x258|x259))+x260);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t t65 = -1882594;

	t65 = ((x261==(x262|x263))+x264);

	if (t65 != 253) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MIN;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 28214379;

	t66 = ((x265==(x266|x267))+x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int64_t x270 = -1LL;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = 3;
	int32_t t67 = 52596129;

	t67 = ((x269==(x270|x271))+x272);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -242780;
	static int32_t x274 = 12023;
	volatile uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 1108212U;
	volatile uint32_t t68 = 922555180U;

	t68 = ((x273==(x274|x275))+x276);

	if (t68 != 1108212U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 166984;

	t69 = ((x277==(x278|x279))+x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 349U;
	int32_t x282 = -421393;
	volatile int64_t x283 = -232LL;
	uint16_t x284 = 49U;
	volatile int32_t t70 = 752271;

	t70 = ((x281==(x282|x283))+x284);

	if (t70 != 49) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	volatile int64_t x287 = -1LL;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = 365283163;

	t71 = ((x285==(x286|x287))+x288);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 55U;
	int64_t x290 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t72 = INT32_MIN;

	t72 = ((x289==(x290|x291))+x292);

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MAX;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = -54280;

	t73 = ((x293==(x294|x295))+x296);

	if (t73 != 256) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 168028625098739LLU;
	uint16_t x298 = 73U;
	int16_t x299 = -12;
	int64_t t74 = 2LL;

	t74 = ((x297==(x298|x299))+x300);

	if (t74 != -178LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = 1455293;
	int8_t x303 = -1;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 646;

	t75 = ((x301==(x302|x303))+x304);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -12399290LL;
	int64_t x307 = 22563LL;
	static int8_t x308 = 21;
	static volatile int32_t t76 = 267645;

	t76 = ((x305==(x306|x307))+x308);

	if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MIN;

	t77 = ((x309==(x310|x311))+x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	uint64_t x315 = 189526515538LLU;
	int32_t x316 = INT32_MIN;
	int32_t t78 = INT32_MIN;

	t78 = ((x313==(x314|x315))+x316);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	uint16_t x318 = 8U;
	static int8_t x319 = INT8_MIN;
	volatile int8_t x320 = -1;
	volatile int32_t t79 = 615;

	t79 = ((x317==(x318|x319))+x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x323 = INT64_MAX;
	int16_t x324 = 3403;
	volatile int32_t t80 = -105;

	t80 = ((x321==(x322|x323))+x324);

	if (t80 != 3403) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = -1;
	int16_t x326 = -2;
	static uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MIN;

	t81 = ((x325==(x326|x327))+x328);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int16_t x330 = 18;
	int64_t x331 = 2054359554LL;
	int16_t x332 = -1;
	volatile int32_t t82 = 1;

	t82 = ((x329==(x330|x331))+x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 7639089056579LLU;
	int64_t x334 = INT64_MAX;
	uint32_t x336 = 808888U;
	uint32_t t83 = 1233250634U;

	t83 = ((x333==(x334|x335))+x336);

	if (t83 != 808888U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 456361U;
	static int64_t x338 = -1LL;
	uint16_t x339 = 71U;
	static int32_t x340 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = ((x337==(x338|x339))+x340);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = UINT64_MAX;
	int64_t x342 = -968448LL;
	static uint8_t x343 = UINT8_MAX;
	volatile int32_t t85 = 14;

	t85 = ((x341==(x342|x343))+x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 1876U;
	uint8_t x346 = 29U;
	volatile int64_t x347 = -749677393323LL;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x345==(x346|x347))+x348);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -7;
	static int32_t t87 = -24244760;

	t87 = ((x349==(x350|x351))+x352);

	if (t87 != 1029) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = ((x353==(x354|x355))+x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 53956460;
	uint16_t x358 = 0U;
	int32_t x359 = -369998;
	uint8_t x360 = UINT8_MAX;

	t89 = ((x357==(x358|x359))+x360);

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int16_t x362 = -14;
	int32_t x363 = -3074;
	int16_t x364 = -1;
	int32_t t90 = -904991611;

	t90 = ((x361==(x362|x363))+x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 204U;
	int32_t x367 = INT32_MIN;
	uint64_t t91 = 3437860737LLU;

	t91 = ((x365==(x366|x367))+x368);

	if (t91 != 179916734922426LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MAX;
	static volatile int16_t x371 = INT16_MAX;
	int64_t t92 = 150137LL;

	t92 = ((x369==(x370|x371))+x372);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MAX;
	uint32_t x376 = UINT32_MAX;

	t93 = ((x373==(x374|x375))+x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 197028324U;
	int32_t x378 = INT32_MAX;
	int8_t x380 = 6;
	int32_t t94 = 107;

	t94 = ((x377==(x378|x379))+x380);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	int32_t x382 = -127422077;
	static int16_t x383 = INT16_MAX;
	volatile int8_t x384 = INT8_MIN;
	int32_t t95 = 3;

	t95 = ((x381==(x382|x383))+x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x387 = 315;

	t96 = ((x385==(x386|x387))+x388);

	if (t96 != 1156999U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile int32_t t97 = 2518;

	t97 = ((x389==(x390|x391))+x392);

	if (t97 != -31) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 38U;
	uint64_t x394 = UINT64_MAX;
	static int16_t x396 = INT16_MIN;
	static int32_t t98 = 27;

	t98 = ((x393==(x394|x395))+x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 218560277LLU;
	int16_t x400 = -215;
	int32_t t99 = 8;

	t99 = ((x397==(x398|x399))+x400);

	if (t99 != -215) { NG(); } else { ; }
	
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

