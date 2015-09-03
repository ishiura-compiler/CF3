#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = UINT16_MAX;
int32_t x5 = -1;
volatile int32_t x26 = 1297;
uint32_t x32 = 15U;
int16_t x35 = INT16_MIN;
int8_t x52 = INT8_MIN;
int32_t t9 = -5414;
static volatile int32_t t11 = -11101141;
int32_t x65 = -10803;
static uint64_t x72 = UINT64_MAX;
int16_t x74 = INT16_MAX;
uint8_t x75 = 29U;
int32_t x77 = INT32_MIN;
static int32_t t16 = 0;
uint32_t x88 = 183U;
volatile uint32_t t18 = 173U;
int32_t x96 = INT32_MAX;
volatile int32_t t20 = -11;
int32_t t21 = -9821139;
static volatile int32_t t22 = 265337248;
uint32_t x120 = UINT32_MAX;
uint64_t x125 = 159343LLU;
volatile int16_t x127 = INT16_MIN;
volatile int16_t x130 = INT16_MAX;
static int16_t x132 = 0;
volatile int32_t t27 = 1;
uint32_t x146 = 4481366U;
int8_t x149 = -1;
uint16_t x152 = UINT16_MAX;
static int16_t x155 = 4092;
static volatile int64_t t34 = 2364LL;
int8_t x163 = INT8_MIN;
int32_t t36 = 38682;
int32_t x174 = -1;
uint16_t x187 = 198U;
volatile int64_t x189 = INT64_MAX;
int16_t x195 = INT16_MIN;
int16_t x203 = INT16_MIN;
int32_t x207 = -432918580;
uint8_t x213 = UINT8_MAX;
uint64_t x230 = 64311325234375607LLU;
uint64_t x234 = UINT64_MAX;
uint16_t x237 = 20477U;
int32_t x248 = INT32_MIN;
int64_t x251 = -1LL;
volatile uint8_t x253 = 0U;
static int64_t x254 = INT64_MAX;
uint32_t x257 = 92U;
int64_t x262 = 21LL;
int8_t x263 = INT8_MIN;
int32_t t61 = -57824282;
static int8_t x274 = 0;
int32_t t63 = 6445;
int16_t x286 = INT16_MIN;
uint64_t x292 = 282103207653441661LLU;
uint32_t x297 = 154017620U;
uint8_t x307 = 0U;
int16_t x309 = INT16_MIN;
static uint64_t x324 = 20230LLU;
static uint64_t x325 = UINT64_MAX;
int8_t x326 = INT8_MIN;
static volatile uint64_t x338 = UINT64_MAX;
static int16_t x341 = INT16_MIN;
int16_t x342 = INT16_MIN;
static volatile int8_t x343 = INT8_MIN;
volatile int32_t t74 = 607;
int32_t x350 = INT32_MIN;
static uint32_t x354 = 20U;
int32_t x361 = -1;
int16_t x377 = 1;
volatile uint32_t x382 = 29905846U;
static uint16_t x384 = 1U;
int64_t x395 = -1LL;
int32_t t84 = 230251229;
uint64_t x397 = 1925152068034LLU;
uint32_t x399 = 543176508U;
int32_t x403 = INT32_MIN;
volatile int64_t t86 = 110353509893193405LL;
uint8_t x405 = UINT8_MAX;
volatile int32_t t88 = -45857932;
int32_t x413 = 66520982;
static volatile int64_t x430 = -83615261550453820LL;
int16_t x432 = -1;
volatile int32_t t93 = -108743209;
int8_t x434 = -17;
int32_t x436 = 54566162;
uint16_t x440 = UINT16_MAX;
static int16_t x444 = -1;
volatile int32_t t96 = -1;
int8_t x451 = -1;
int64_t x460 = -2669077230134911161LL;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = INT32_MAX;
	static int8_t x3 = 1;
	int32_t t0 = 0;

	t0 = ((x1<=(x2-x3))&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 46;

	t1 = ((x5<=(x6-x7))&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = -1;
	uint64_t x12 = 16199LLU;
	volatile uint64_t t2 = 762641839425659346LLU;

	t2 = ((x9<=(x10-x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	static int64_t x15 = INT64_MIN;
	uint32_t x16 = 56U;
	uint32_t t3 = 1279626853U;

	t3 = ((x13<=(x14-x15))&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -40;
	int32_t x22 = 83219686;
	volatile int32_t x23 = -890199;
	int32_t x24 = INT32_MIN;
	static int32_t t4 = -13882;

	t4 = ((x21<=(x22-x23))&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 306873691317LLU;
	volatile uint32_t x27 = 8314536U;
	uint8_t x28 = 120U;
	int32_t t5 = 1976350;

	t5 = ((x25<=(x26-x27))&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	volatile uint64_t x30 = 795LLU;
	static volatile int64_t x31 = 5408370LL;
	uint32_t t6 = 1030471U;

	t6 = ((x29<=(x30-x31))&x32);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -12;
	uint64_t x34 = 432564LLU;
	static int8_t x36 = 1;
	int32_t t7 = -185797726;

	t7 = ((x33<=(x34-x35))&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 167045U;
	int32_t x38 = INT32_MIN;
	int16_t x39 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t8 = 29;

	t8 = ((x37<=(x38-x39))&x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 1088U;

	t9 = ((x49<=(x50-x51))&x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 34;
	int16_t x54 = -1607;
	static int8_t x55 = 1;
	int64_t x56 = -1LL;
	int64_t t10 = 856477714LL;

	t10 = ((x53<=(x54-x55))&x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -1;
	int8_t x60 = INT8_MIN;

	t11 = ((x57<=(x58-x59))&x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	volatile uint32_t x62 = 5U;
	static int32_t x63 = 6;
	volatile uint8_t x64 = UINT8_MAX;
	int32_t t12 = 27593;

	t12 = ((x61<=(x62-x63))&x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = 154U;
	static uint32_t x68 = 0U;
	uint32_t t13 = 1U;

	t13 = ((x65<=(x66-x67))&x68);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	volatile int32_t x71 = -1;
	volatile uint64_t t14 = 5187995LLU;

	t14 = ((x69<=(x70-x71))&x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 664U;
	static uint8_t x76 = 8U;
	int32_t t15 = 13249;

	t15 = ((x73<=(x74-x75))&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	int16_t x80 = -1;

	t16 = ((x77<=(x78-x79))&x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	static uint64_t x83 = 12714938LLU;
	int64_t x84 = -1LL;
	int64_t t17 = -1LL;

	t17 = ((x81<=(x82-x83))&x84);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	volatile int64_t x86 = -1LL;
	static int16_t x87 = -1;

	t18 = ((x85<=(x86-x87))&x88);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;
	static volatile int64_t x94 = 2004418187220620LL;
	uint32_t x95 = 0U;
	int32_t t19 = 58236321;

	t19 = ((x93<=(x94-x95))&x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = 4133LLU;
	volatile int8_t x98 = -1;
	uint64_t x99 = 23767609261711759LLU;
	int8_t x100 = 3;

	t20 = ((x97<=(x98-x99))&x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 2U;
	uint64_t x102 = 1709303966545LLU;
	static volatile int8_t x103 = INT8_MIN;
	volatile int8_t x104 = -1;

	t21 = ((x101<=(x102-x103))&x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	static uint32_t x110 = UINT32_MAX;
	int8_t x111 = -1;
	int8_t x112 = 1;

	t22 = ((x109<=(x110-x111))&x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 8542U;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = 1U;
	static int8_t x116 = -2;
	int32_t t23 = -12;

	t23 = ((x113<=(x114-x115))&x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	volatile int32_t x118 = -1;
	int32_t x119 = -1;
	uint32_t t24 = 16289489U;

	t24 = ((x117<=(x118-x119))&x120);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	static uint32_t x122 = 8U;
	static uint16_t x123 = UINT16_MAX;
	static uint16_t x124 = UINT16_MAX;
	volatile int32_t t25 = -885949;

	t25 = ((x121<=(x122-x123))&x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x126 = 15U;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t26 = 51616;

	t26 = ((x125<=(x126-x127))&x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MAX;
	uint64_t x131 = UINT64_MAX;

	t27 = ((x129<=(x130-x131))&x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = 200187203509263685LL;
	static volatile int32_t x134 = 29;
	int16_t x135 = -1555;
	int32_t x136 = INT32_MAX;
	static int32_t t28 = 178;

	t28 = ((x133<=(x134-x135))&x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -1LL;
	uint16_t x138 = 997U;
	uint8_t x139 = 6U;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t29 = -163790002;

	t29 = ((x137<=(x138-x139))&x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = 22;
	int64_t x142 = -1LL;
	int8_t x143 = -1;
	int16_t x144 = INT16_MIN;
	int32_t t30 = -431671;

	t30 = ((x141<=(x142-x143))&x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	volatile int8_t x147 = -1;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t31 = 446;

	t31 = ((x145<=(x146-x147))&x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x150 = 31015109;
	uint8_t x151 = UINT8_MAX;
	int32_t t32 = -265280776;

	t32 = ((x149<=(x150-x151))&x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = 13U;
	int8_t x154 = -1;
	uint32_t x156 = 8934U;
	static volatile uint32_t t33 = 61U;

	t33 = ((x153<=(x154-x155))&x156);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x157 = 1;
	int8_t x158 = -1;
	uint16_t x159 = 424U;
	int64_t x160 = INT64_MIN;

	t34 = ((x157<=(x158-x159))&x160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	int32_t x164 = 25;
	int32_t t35 = 38964;

	t35 = ((x161<=(x162-x163))&x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1159;
	static volatile uint16_t x166 = UINT16_MAX;
	int32_t x167 = 9035430;
	int16_t x168 = INT16_MIN;

	t36 = ((x165<=(x166-x167))&x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1;
	volatile uint16_t x171 = 1674U;
	static int8_t x172 = INT8_MAX;
	int32_t t37 = -39379112;

	t37 = ((x169<=(x170-x171))&x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	static int16_t x175 = -1;
	uint32_t x176 = 22U;
	volatile uint32_t t38 = 32606U;

	t38 = ((x173<=(x174-x175))&x176);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -2;
	volatile uint16_t x178 = UINT16_MAX;
	int32_t x179 = INT32_MAX;
	int32_t x180 = -1;
	volatile int32_t t39 = 240464;

	t39 = ((x177<=(x178-x179))&x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 1U;
	int16_t x182 = 1;
	uint64_t x183 = 2795704088253LLU;
	int8_t x184 = INT8_MAX;
	volatile int32_t t40 = -77296;

	t40 = ((x181<=(x182-x183))&x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 4765LL;
	int16_t x188 = 58;
	volatile int32_t t41 = 35;

	t41 = ((x185<=(x186-x187))&x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x190 = -17;
	volatile int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t42 = 222801LL;

	t42 = ((x189<=(x190-x191))&x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x193 = 2086583LLU;
	int16_t x194 = INT16_MIN;
	static uint64_t x196 = 381230LLU;
	volatile uint64_t t43 = 3920583996965LLU;

	t43 = ((x193<=(x194-x195))&x196);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = 58;
	uint8_t x199 = 0U;
	int32_t x200 = INT32_MAX;
	volatile int32_t t44 = -229;

	t44 = ((x197<=(x198-x199))&x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = -5;
	static int32_t x202 = -1;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t45 = 393539069;

	t45 = ((x201<=(x202-x203))&x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = INT64_MIN;
	volatile uint16_t x208 = 1103U;
	volatile int32_t t46 = -131;

	t46 = ((x205<=(x206-x207))&x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	volatile uint16_t x211 = 2078U;
	int64_t x212 = INT64_MIN;
	int64_t t47 = 21012177710LL;

	t47 = ((x209<=(x210-x211))&x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x214 = INT32_MAX;
	static volatile int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t48 = -1;

	t48 = ((x213<=(x214-x215))&x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MIN;
	int64_t x223 = -514136LL;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t49 = 59309151956985097LLU;

	t49 = ((x221<=(x222-x223))&x224);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MAX;
	static int64_t x226 = INT64_MIN;
	static uint64_t x227 = 19704874199205614LLU;
	static int16_t x228 = INT16_MIN;
	int32_t t50 = -2;

	t50 = ((x225<=(x226-x227))&x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -18;
	volatile uint64_t x231 = 238274LLU;
	uint32_t x232 = 42049U;
	volatile uint32_t t51 = 1397432415U;

	t51 = ((x229<=(x230-x231))&x232);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x233 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t52 = -23;

	t52 = ((x233<=(x234-x235))&x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x238 = -1LL;
	static uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	volatile int64_t t53 = 27622882LL;

	t53 = ((x237<=(x238-x239))&x240);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x241 = -1;
	volatile int32_t x242 = -1;
	static int64_t x243 = -21524002875LL;
	int64_t x244 = -1LL;
	volatile int64_t t54 = -813787140LL;

	t54 = ((x241<=(x242-x243))&x244);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 144274684520929958LLU;
	static volatile int16_t x247 = INT16_MIN;
	static int32_t t55 = 51504506;

	t55 = ((x245<=(x246-x247))&x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MAX;
	volatile int8_t x250 = -1;
	int64_t x252 = 1644800LL;
	int64_t t56 = -834641376761273919LL;

	t56 = ((x249<=(x250-x251))&x252);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x255 = 2847255932470159LLU;
	int8_t x256 = INT8_MIN;
	volatile int32_t t57 = -1201;

	t57 = ((x253<=(x254-x255))&x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = 0;
	int16_t x260 = 1;
	static int32_t t58 = -284078157;

	t58 = ((x257<=(x258-x259))&x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MAX;
	volatile int8_t x264 = INT8_MIN;
	int32_t t59 = 32;

	t59 = ((x261<=(x262-x263))&x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 41848443LLU;
	uint64_t t60 = 210301759LLU;

	t60 = ((x265<=(x266-x267))&x268);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -7;
	uint32_t x270 = UINT32_MAX;
	static volatile int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MIN;

	t61 = ((x269<=(x270-x271))&x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = 3;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = 9U;
	int32_t t62 = -570;

	t62 = ((x273<=(x274-x275))&x276);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -1;
	volatile int16_t x278 = 1;
	uint8_t x279 = 4U;
	static int32_t x280 = INT32_MIN;

	t63 = ((x277<=(x278-x279))&x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = 0;
	uint8_t x283 = 0U;
	volatile int64_t x284 = INT64_MAX;
	int64_t t64 = 582580260494245136LL;

	t64 = ((x281<=(x282-x283))&x284);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = -1LL;
	int8_t x287 = INT8_MAX;
	static int16_t x288 = -1;
	volatile int32_t t65 = -766;

	t65 = ((x285<=(x286-x287))&x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MAX;
	static volatile uint16_t x290 = 1U;
	volatile int8_t x291 = INT8_MIN;
	static uint64_t t66 = 1708919285851LLU;

	t66 = ((x289<=(x290-x291))&x292);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x298 = INT32_MAX;
	static int64_t x299 = -1LL;
	int64_t x300 = 37869296527LL;
	volatile int64_t t67 = -141624999LL;

	t67 = ((x297<=(x298-x299))&x300);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = 9961034657434LLU;
	int64_t x302 = -1LL;
	int16_t x303 = 354;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t68 = -1645608;

	t68 = ((x301<=(x302-x303))&x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	static uint32_t x308 = UINT32_MAX;
	uint32_t t69 = 14379169U;

	t69 = ((x305<=(x306-x307))&x308);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x310 = 1U;
	static volatile uint32_t x311 = 1228670U;
	uint32_t x312 = UINT32_MAX;
	static volatile uint32_t t70 = 23231U;

	t70 = ((x309<=(x310-x311))&x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = -1;
	int8_t x323 = INT8_MIN;
	static volatile uint64_t t71 = 42662916492LLU;

	t71 = ((x321<=(x322-x323))&x324);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x327 = INT16_MAX;
	uint32_t x328 = 943395975U;
	uint32_t t72 = 28U;

	t72 = ((x325<=(x326-x327))&x328);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x337 = 3533549427382LL;
	int32_t x339 = 270550;
	volatile int16_t x340 = 15;
	volatile int32_t t73 = -11743939;

	t73 = ((x337<=(x338-x339))&x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x344 = INT32_MIN;

	t74 = ((x341<=(x342-x343))&x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x345 = INT16_MIN;
	uint64_t x346 = 303886987457289703LLU;
	int8_t x347 = -1;
	int64_t x348 = INT64_MIN;
	int64_t t75 = -27881850260447138LL;

	t75 = ((x345<=(x346-x347))&x348);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = -9328047;
	int8_t x351 = -1;
	static int8_t x352 = INT8_MIN;
	static int32_t t76 = -137;

	t76 = ((x349<=(x350-x351))&x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x353 = 4U;
	uint8_t x355 = 73U;
	int8_t x356 = -1;
	static int32_t t77 = 4;

	t77 = ((x353<=(x354-x355))&x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = 16100095566LLU;
	static volatile uint64_t t78 = 2189892634LLU;

	t78 = ((x361<=(x362-x363))&x364);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x365 = INT64_MIN;
	uint16_t x366 = UINT16_MAX;
	uint32_t x367 = 70U;
	static uint8_t x368 = 0U;
	volatile int32_t t79 = 55205;

	t79 = ((x365<=(x366-x367))&x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 89U;
	int64_t x374 = 38313565849315331LL;
	static volatile int16_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	uint32_t t80 = 83131931U;

	t80 = ((x373<=(x374-x375))&x376);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x378 = -1;
	int64_t x379 = -562049112191469805LL;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t81 = -1935LL;

	t81 = ((x377<=(x378-x379))&x380);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x381 = 2U;
	int32_t x383 = -9970;
	static int32_t t82 = -11;

	t82 = ((x381<=(x382-x383))&x384);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = 27U;
	uint64_t x386 = 11543017440168LLU;
	static int64_t x387 = -510105593969890575LL;
	uint16_t x388 = 1835U;
	volatile int32_t t83 = -161;

	t83 = ((x385<=(x386-x387))&x388);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x393 = UINT64_MAX;
	volatile uint32_t x394 = 26U;
	int8_t x396 = INT8_MIN;

	t84 = ((x393<=(x394-x395))&x396);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x398 = 6U;
	int32_t x400 = 0;
	volatile int32_t t85 = 0;

	t85 = ((x397<=(x398-x399))&x400);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = 11;
	int8_t x402 = -1;
	int64_t x404 = INT64_MIN;

	t86 = ((x401<=(x402-x403))&x404);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	static uint64_t t87 = 230401583131599814LLU;

	t87 = ((x405<=(x406-x407))&x408);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = -38925725LL;
	int8_t x410 = -1;
	static int8_t x411 = 1;
	int32_t x412 = 65;

	t88 = ((x409<=(x410-x411))&x412);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = 18;
	int32_t t89 = 193672836;

	t89 = ((x413<=(x414-x415))&x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x417 = 100U;
	static uint64_t x418 = 183097LLU;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = -1;
	volatile int32_t t90 = -1;

	t90 = ((x417<=(x418-x419))&x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = INT32_MAX;
	uint32_t x423 = 34987122U;
	static uint32_t x424 = 0U;
	volatile uint32_t t91 = 9850U;

	t91 = ((x421<=(x422-x423))&x424);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = -9;
	static int64_t x426 = INT64_MIN;
	static volatile int16_t x427 = 0;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t92 = -155619;

	t92 = ((x425<=(x426-x427))&x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = -3;
	int32_t x431 = -2;

	t93 = ((x429<=(x430-x431))&x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x433 = INT64_MIN;
	int8_t x435 = 1;
	volatile int32_t t94 = 1305098;

	t94 = ((x433<=(x434-x435))&x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 589U;
	uint32_t x438 = UINT32_MAX;
	uint32_t x439 = 401852U;
	int32_t t95 = -1;

	t95 = ((x437<=(x438-x439))&x440);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x441 = 98374977U;
	int8_t x442 = INT8_MIN;
	uint64_t x443 = 3LLU;

	t96 = ((x441<=(x442-x443))&x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = 4;
	int16_t x450 = -12;
	static uint16_t x452 = 1U;
	static int32_t t97 = -43;

	t97 = ((x449<=(x450-x451))&x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MAX;
	static int16_t x454 = INT16_MIN;
	volatile int64_t x455 = INT64_MIN;
	static uint8_t x456 = UINT8_MAX;
	int32_t t98 = 2447;

	t98 = ((x453<=(x454-x455))&x456);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = -210522799;
	static int32_t x458 = INT32_MIN;
	int32_t x459 = -776824;
	volatile int64_t t99 = -58645185LL;

	t99 = ((x457<=(x458-x459))&x460);

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

