#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int8_t x9 = INT8_MIN;
int32_t x10 = INT32_MAX;
uint8_t x11 = UINT8_MAX;
volatile uint64_t x12 = UINT64_MAX;
int64_t x15 = INT64_MAX;
int16_t x18 = INT16_MAX;
int32_t x21 = -1;
static uint32_t x22 = UINT32_MAX;
static uint32_t x25 = UINT32_MAX;
int8_t x32 = 1;
volatile int16_t x35 = INT16_MAX;
int16_t x36 = INT16_MIN;
volatile int64_t t10 = 425503LL;
int32_t x45 = -1;
int8_t x55 = -6;
int8_t x56 = 3;
volatile int64_t t13 = 1231773LL;
volatile uint8_t x58 = UINT8_MAX;
volatile int32_t t14 = -12;
static uint8_t x69 = 1U;
int16_t x74 = INT16_MAX;
uint64_t x76 = 6738286717157018235LLU;
volatile int16_t x79 = 551;
uint64_t x80 = 334547930301259LLU;
int16_t x84 = INT16_MAX;
volatile int8_t x87 = INT8_MAX;
int64_t x95 = -125660599936LL;
volatile int64_t t22 = 414187131706LL;
uint16_t x98 = 0U;
static volatile int64_t x110 = -1LL;
int8_t x113 = INT8_MIN;
static volatile int16_t x116 = 1;
uint8_t x128 = UINT8_MAX;
uint64_t x129 = 20009607LLU;
uint32_t x130 = 83969U;
uint32_t x132 = 532452477U;
uint32_t x133 = 1U;
uint64_t x135 = 2963LLU;
static uint32_t x140 = 457343725U;
int8_t x143 = INT8_MIN;
int64_t x157 = INT64_MAX;
volatile uint64_t x165 = UINT64_MAX;
int32_t x167 = INT32_MIN;
volatile int32_t x169 = -147697;
volatile int32_t t40 = -1329644;
int16_t x184 = INT16_MIN;
int64_t t42 = 51LL;
volatile int8_t x188 = -1;
uint8_t x194 = 3U;
int8_t x197 = INT8_MIN;
uint16_t x198 = 48U;
static int32_t t47 = 3908;
uint16_t x207 = 121U;
int32_t t48 = -293;
static uint16_t x213 = 15U;
static volatile uint16_t x221 = 7U;
uint32_t x222 = 37725U;
uint32_t x232 = 3474U;
int64_t t54 = 800538LL;
uint8_t x242 = 0U;
uint64_t t56 = 1444579387LLU;
int32_t x246 = INT32_MAX;
uint32_t x247 = 268U;
volatile uint64_t t57 = 3902LLU;
int16_t x253 = INT16_MIN;
int16_t x262 = INT16_MIN;
volatile int32_t x266 = INT32_MAX;
uint64_t t61 = 97202428301607LLU;
volatile int64_t x270 = 426554931LL;
uint64_t t62 = 2563579LLU;
uint64_t x277 = 53LLU;
int32_t x278 = -1;
uint32_t x282 = 33U;
int32_t x288 = INT32_MIN;
int32_t x290 = INT32_MAX;
uint64_t x294 = UINT64_MAX;
int8_t x302 = -1;
int64_t x308 = INT64_MAX;
int64_t x309 = INT64_MAX;
int64_t x312 = INT64_MIN;
int32_t x313 = INT32_MAX;
static volatile uint8_t x316 = 127U;
static uint64_t t72 = 3LLU;
volatile int16_t x318 = INT16_MAX;
int16_t x326 = 2;
int16_t x330 = -1;
int16_t x333 = 177;
volatile int32_t t78 = -400177;
int64_t x344 = INT64_MAX;
static int32_t x354 = INT32_MAX;
int8_t x359 = INT8_MIN;
int64_t x360 = -1LL;
uint64_t x361 = 11657875LLU;
uint32_t t86 = 12971U;
uint64_t t87 = 9863LLU;
volatile int8_t x379 = -1;
volatile int32_t t89 = 13500178;
int32_t x385 = -196;
volatile int32_t t90 = -558302528;
int16_t x391 = -1;
uint8_t x394 = 40U;
int64_t x400 = INT64_MIN;
int32_t x402 = -1;
int16_t x404 = INT16_MIN;
static volatile int8_t x405 = INT8_MIN;
int32_t x406 = INT32_MIN;
volatile uint16_t x407 = 15U;
static int32_t x408 = INT32_MIN;
int32_t x421 = -1;
static int8_t x423 = INT8_MIN;


void f0(void) {
	int64_t x1 = -54648148LL;
	static int8_t x2 = INT8_MIN;
	uint8_t x3 = 1U;
	int64_t t0 = 73521494242461LL;

	t0 = ((x1*(x2%x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint16_t x6 = 5U;
	static uint32_t x7 = 840U;
	volatile uint64_t x8 = 517449448LLU;
	static volatile uint64_t t1 = 2LLU;

	t1 = ((x5*(x6%x7))/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t t2 = 2123661770949079LLU;

	t2 = ((x9*(x10%x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MAX;
	volatile int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 2170331275627LL;

	t3 = ((x13*(x14%x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	int32_t x19 = INT32_MIN;
	volatile int8_t x20 = -1;
	static uint32_t t4 = 4510130U;

	t4 = ((x17*(x18%x19))/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x23 = INT8_MIN;
	volatile int16_t x24 = INT16_MIN;
	uint32_t t5 = 59U;

	t5 = ((x21*(x22%x23))/x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 16U;
	uint32_t x27 = 2325614U;
	static uint32_t x28 = 12588U;
	volatile uint32_t t6 = 0U;

	t6 = ((x25*(x26%x27))/x28);

	if (t6 != 341195U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = -1LL;
	uint64_t x31 = UINT64_MAX;
	uint64_t t7 = 1084965084767114LLU;

	t7 = ((x29*(x30%x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 29U;
	volatile int32_t t8 = -22062253;

	t8 = ((x33*(x34%x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 0;
	volatile int32_t x38 = INT32_MIN;
	static int8_t x39 = INT8_MIN;
	uint8_t x40 = 51U;
	volatile int32_t t9 = -5544034;

	t9 = ((x37*(x38%x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int32_t x42 = INT32_MIN;
	int8_t x43 = -1;
	uint16_t x44 = 183U;

	t10 = ((x41*(x42%x43))/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 2767885205849156LLU;
	int32_t x47 = INT32_MIN;
	volatile int32_t x48 = INT32_MIN;
	volatile uint64_t t11 = 8490666740787LLU;

	t11 = ((x45*(x46%x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	uint64_t x51 = 2978751LLU;
	static int64_t x52 = -390081242568LL;
	uint64_t t12 = 135446716996032LLU;

	t12 = ((x49*(x50%x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 641LL;
	int16_t x54 = -1;

	t13 = ((x53*(x54%x55))/x56);

	if (t13 != -213LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int32_t x59 = INT32_MAX;
	uint16_t x60 = 258U;

	t14 = ((x57*(x58%x59))/x60);

	if (t14 != -126) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 18425U;
	int64_t x62 = INT64_MAX;
	int32_t x63 = -1;
	uint32_t x64 = 1U;
	int64_t t15 = -923945810714092565LL;

	t15 = ((x61*(x62%x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x70 = -248;
	volatile int64_t x71 = INT64_MAX;
	int16_t x72 = -1;
	volatile int64_t t16 = -1LL;

	t16 = ((x69*(x70%x71))/x72);

	if (t16 != 248LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 106U;
	int8_t x75 = INT8_MAX;
	uint64_t t17 = 2220425414070203001LLU;

	t17 = ((x73*(x74%x75))/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 712017U;
	int16_t x78 = INT16_MIN;
	uint64_t t18 = 140LLU;

	t18 = ((x77*(x78%x79))/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	static uint32_t x82 = 4U;
	int64_t x83 = -194361610LL;
	int64_t t19 = -67808656712LL;

	t19 = ((x81*(x82%x83))/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 2184516438134851LL;
	volatile uint32_t x86 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	volatile int64_t t20 = 910832LL;

	t20 = ((x85*(x86%x87))/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x89 = 112U;
	uint8_t x90 = 0U;
	volatile int16_t x91 = 6;
	int32_t x92 = 3;
	volatile int32_t t21 = -47572;

	t21 = ((x89*(x90%x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	int64_t x96 = INT64_MIN;

	t22 = ((x93*(x94%x95))/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 2;
	static int32_t x99 = INT32_MIN;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t23 = -747729;

	t23 = ((x97*(x98%x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = -4;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 279U;
	int16_t x104 = -1;
	volatile int32_t t24 = 1782;

	t24 = ((x101*(x102%x103))/x104);

	if (t24 != 996) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = 74516137325711467LLU;
	volatile int32_t x111 = -7980;
	uint64_t x112 = UINT64_MAX;
	static uint64_t t25 = 49766316173525LLU;

	t25 = ((x109*(x110%x111))/x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x114 = 0U;
	static uint16_t x115 = 8974U;
	static int32_t t26 = 2;

	t26 = ((x113*(x114%x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 122U;
	int8_t x119 = -1;
	int16_t x120 = -6;
	volatile int32_t t27 = 384327122;

	t27 = ((x117*(x118%x119))/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 223544046328358LLU;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = 298556638938263273LLU;
	volatile uint64_t t28 = 149294237243LLU;

	t28 = ((x121*(x122%x123))/x124);

	if (t28 != 55LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 3851;
	volatile int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	uint64_t t29 = 398853538178550103LLU;

	t29 = ((x125*(x126%x127))/x128);

	if (t29 != 72340140406862835LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x131 = UINT32_MAX;
	uint64_t t30 = 5120085269048879562LLU;

	t30 = ((x129*(x130%x131))/x132);

	if (t30 != 3155LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = -1;
	static uint64_t x136 = 25820861224945200LLU;
	static uint64_t t31 = 2LLU;

	t31 = ((x133*(x134%x135))/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x137 = 3U;
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t32 = 355855LLU;

	t32 = ((x137*(x138%x139))/x140);

	if (t32 != 40334529731LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = -3;
	int8_t x142 = INT8_MIN;
	int8_t x144 = -1;
	int32_t t33 = -1673376;

	t33 = ((x141*(x142%x143))/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 23;
	int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t34 = 3255;

	t34 = ((x145*(x146%x147))/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -1270320926944LL;
	int8_t x156 = -6;
	static volatile int64_t t35 = -22780106896186LL;

	t35 = ((x153*(x154%x155))/x156);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x158 = 100323867358320LL;
	int8_t x159 = -1;
	int8_t x160 = 31;
	volatile int64_t t36 = -126337355LL;

	t36 = ((x157*(x158%x159))/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = UINT64_MAX;
	volatile uint32_t x162 = UINT32_MAX;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = -1;
	volatile uint64_t t37 = 6321198638LLU;

	t37 = ((x161*(x162%x163))/x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x166 = UINT32_MAX;
	volatile uint8_t x168 = 22U;
	volatile uint64_t t38 = 4834921268105486LLU;

	t38 = ((x165*(x166%x167))/x168);

	if (t38 != 838488366889184907LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x170 = UINT16_MAX;
	static volatile int8_t x171 = INT8_MAX;
	uint32_t x172 = UINT32_MAX;
	uint32_t t39 = 3107U;

	t39 = ((x169*(x170%x171))/x172);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = -1;
	volatile int16_t x174 = INT16_MAX;
	uint16_t x175 = 1U;
	int8_t x176 = 6;

	t40 = ((x173*(x174%x175))/x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MAX;
	int64_t x180 = -1LL;
	volatile int64_t t41 = -7LL;

	t41 = ((x177*(x178%x179))/x180);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MAX;
	uint32_t x182 = 999U;
	int64_t x183 = INT64_MAX;

	t42 = ((x181*(x182%x183))/x184);

	if (t42 != -3LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = UINT16_MAX;
	volatile uint16_t x187 = UINT16_MAX;
	static volatile int32_t t43 = 1505299;

	t43 = ((x185*(x186%x187))/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 405889073213038044LLU;
	int32_t x190 = -1;
	uint8_t x191 = 1U;
	int16_t x192 = INT16_MAX;
	uint64_t t44 = 5LLU;

	t44 = ((x189*(x190%x191))/x192);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = UINT64_MAX;
	static uint64_t x195 = 23LLU;
	static int64_t x196 = INT64_MIN;
	uint64_t t45 = 4LLU;

	t45 = ((x193*(x194%x195))/x196);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x199 = INT32_MAX;
	uint16_t x200 = 780U;
	volatile int32_t t46 = -66;

	t46 = ((x197*(x198%x199))/x200);

	if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x201 = INT32_MIN;
	static volatile uint8_t x202 = 0U;
	volatile int8_t x203 = INT8_MIN;
	int8_t x204 = -1;

	t47 = ((x201*(x202%x203))/x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	int32_t x208 = INT32_MAX;

	t48 = ((x205*(x206%x207))/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = -1LL;
	int32_t x210 = 9245672;
	static uint8_t x211 = UINT8_MAX;
	int64_t x212 = -1073556452925LL;
	int64_t t49 = 66285777LL;

	t49 = ((x209*(x210%x211))/x212);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x214 = UINT32_MAX;
	uint32_t x215 = 5U;
	volatile int32_t x216 = -153084;
	static uint32_t t50 = 294996U;

	t50 = ((x213*(x214%x215))/x216);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	uint32_t t51 = 72U;

	t51 = ((x221*(x222%x223))/x224);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 14256U;
	static uint64_t x226 = 656877LLU;
	static int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MAX;
	volatile uint64_t t52 = 1620037057437256LLU;

	t52 = ((x225*(x226%x227))/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = -1;
	uint32_t t53 = 2U;

	t53 = ((x229*(x230%x231))/x232);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = 0;
	int64_t x234 = INT64_MIN;
	volatile int32_t x235 = -1;
	int32_t x236 = INT32_MAX;

	t54 = ((x233*(x234%x235))/x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MAX;
	static volatile int64_t x238 = -1LL;
	static volatile int32_t x239 = -1;
	int16_t x240 = INT16_MAX;
	volatile int64_t t55 = 0LL;

	t55 = ((x237*(x238%x239))/x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 47924LLU;
	int8_t x243 = INT8_MAX;
	uint16_t x244 = 67U;

	t56 = ((x241*(x242%x243))/x244);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x248 = -1;

	t57 = ((x245*(x246%x247))/x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x254 = -1;
	int64_t x255 = INT64_MAX;
	uint32_t x256 = 3U;
	volatile int64_t t58 = 3LL;

	t58 = ((x253*(x254%x255))/x256);

	if (t58 != 10922LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = -67;
	uint8_t x260 = 15U;
	int32_t t59 = -6;

	t59 = ((x257*(x258%x259))/x260);

	if (t59 != -460) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	uint16_t x263 = 15U;
	uint16_t x264 = 3U;
	static volatile int32_t t60 = -3386;

	t60 = ((x261*(x262%x263))/x264);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = UINT16_MAX;

	t61 = ((x265*(x266%x267))/x268);

	if (t61 != 281479271710720LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 81LLU;
	static uint64_t x271 = UINT64_MAX;
	int8_t x272 = -8;

	t62 = ((x269*(x270%x271))/x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x273 = INT8_MIN;
	volatile uint16_t x274 = UINT16_MAX;
	volatile int32_t x275 = -1;
	int32_t x276 = INT32_MIN;
	int32_t t63 = 11;

	t63 = ((x273*(x274%x275))/x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 10U;
	uint64_t t64 = 4376378LLU;

	t64 = ((x277*(x278%x279))/x280);

	if (t64 != 1844674407370955156LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = 1;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 1U;
	static volatile uint32_t t65 = 20U;

	t65 = ((x281*(x282%x283))/x284);

	if (t65 != 33U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = UINT16_MAX;
	static volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	static int32_t t66 = 55;

	t66 = ((x285*(x286%x287))/x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint16_t x291 = UINT16_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	static uint32_t t67 = 129U;

	t67 = ((x289*(x290%x291))/x292);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 16643U;
	int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	static volatile uint64_t t68 = 6933LLU;

	t68 = ((x293*(x294%x295))/x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x301 = -1;
	uint64_t x303 = 28LLU;
	uint64_t x304 = 98090LLU;
	volatile uint64_t t69 = 115789337119LLU;

	t69 = ((x301*(x302%x303))/x304);

	if (t69 != 188059374795693LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = -2;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t70 = 1407LLU;

	t70 = ((x305*(x306%x307))/x308);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x310 = 181191961U;
	int16_t x311 = 3;
	volatile int64_t t71 = 3818LL;

	t71 = ((x309*(x310%x311))/x312);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x314 = UINT64_MAX;
	static uint32_t x315 = 1599U;

	t72 = ((x313*(x314%x315))/x316);

	if (t72 != 253639800LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MAX;
	int8_t x319 = -1;
	int8_t x320 = INT8_MAX;
	int32_t t73 = -5432;

	t73 = ((x317*(x318%x319))/x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	static int16_t x322 = INT16_MIN;
	volatile int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t74 = 387;

	t74 = ((x321*(x322%x323))/x324);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = -27250916;
	int64_t x327 = 15051LL;
	static int8_t x328 = 10;
	volatile int64_t t75 = 623LL;

	t75 = ((x325*(x326%x327))/x328);

	if (t75 != -5450183LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	int32_t x331 = -42759;
	int32_t x332 = INT32_MAX;
	volatile int32_t t76 = 353;

	t76 = ((x329*(x330%x331))/x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MAX;
	int16_t x336 = -1746;
	volatile int64_t t77 = -15284682810529845LL;

	t77 = ((x333*(x334%x335))/x336);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x337 = 127U;
	static int8_t x338 = -7;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MAX;

	t78 = ((x337*(x338%x339))/x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 5037705U;
	int64_t x342 = INT64_MIN;
	int16_t x343 = -14;
	volatile int64_t t79 = 1019250185585LL;

	t79 = ((x341*(x342%x343))/x344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x345 = -15652;
	volatile int8_t x346 = INT8_MIN;
	static int64_t x347 = -18980472824LL;
	volatile int16_t x348 = -4358;
	int64_t t80 = -41LL;

	t80 = ((x345*(x346%x347))/x348);

	if (t80 != -459LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = -2421;
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MIN;
	int16_t x352 = -52;
	volatile int64_t t81 = -328088513LL;

	t81 = ((x349*(x350%x351))/x352);

	if (t81 != -46LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x353 = INT16_MAX;
	int32_t x355 = -479;
	int16_t x356 = INT16_MIN;
	int32_t t82 = -492498;

	t82 = ((x353*(x354%x355))/x356);

	if (t82 != -190) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = 54;
	int64_t x358 = -1LL;
	int64_t t83 = 354371622LL;

	t83 = ((x357*(x358%x359))/x360);

	if (t83 != 54LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 146177315U;
	static uint64_t t84 = 19387426251474837LLU;

	t84 = ((x361*(x362%x363))/x364);

	if (t84 != 126194298285LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = 8;
	volatile int16_t x366 = 5602;
	static uint32_t x367 = 115816687U;
	uint64_t x368 = 115028999918377898LLU;
	volatile uint64_t t85 = 122479LLU;

	t85 = ((x365*(x366%x367))/x368);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 4258110U;
	static int32_t x371 = 1955;
	uint8_t x372 = UINT8_MAX;

	t86 = ((x369*(x370%x371))/x372);

	if (t86 != 16842948U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x373 = 8U;
	uint32_t x374 = 8U;
	volatile int32_t x375 = -42;
	uint64_t x376 = 25388949581LLU;

	t87 = ((x373*(x374%x375))/x376);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = -1;
	static volatile int8_t x378 = INT8_MIN;
	uint16_t x380 = 464U;
	volatile int32_t t88 = -187095549;

	t88 = ((x377*(x378%x379))/x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	static int8_t x384 = -1;

	t89 = ((x381*(x382%x383))/x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 31142U;
	volatile int16_t x388 = 1;

	t90 = ((x385*(x386%x387))/x388);

	if (t90 != 25088) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = -1;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t91 = 20581;

	t91 = ((x389*(x390%x391))/x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x393 = 0U;
	volatile uint32_t x395 = 24682U;
	uint8_t x396 = 12U;
	uint32_t t92 = 850940515U;

	t92 = ((x393*(x394%x395))/x396);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	static int64_t t93 = -3LL;

	t93 = ((x397*(x398%x399))/x400);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = -20162464;
	int16_t x403 = -1;
	volatile int32_t t94 = -24;

	t94 = ((x401*(x402%x403))/x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t t95 = 1;

	t95 = ((x405*(x406%x407))/x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	int64_t x411 = -663LL;
	static uint16_t x412 = 209U;
	volatile int64_t t96 = -353135065762498116LL;

	t96 = ((x409*(x410%x411))/x412);

	if (t96 != 20068LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = -45;
	uint64_t x418 = 121154655127627LLU;
	int32_t x419 = -1;
	int32_t x420 = INT32_MIN;
	volatile uint64_t t97 = 224307921212LLU;

	t97 = ((x417*(x418%x419))/x420);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x422 = UINT8_MAX;
	int8_t x424 = INT8_MIN;
	static int32_t t98 = -743420;

	t98 = ((x421*(x422%x423))/x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MIN;
	uint16_t x426 = 0U;
	int64_t x427 = -1LL;
	static uint8_t x428 = 19U;
	volatile int64_t t99 = 7459157830LL;

	t99 = ((x425*(x426%x427))/x428);

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

