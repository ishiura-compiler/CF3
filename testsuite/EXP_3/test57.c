#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint8_t x4 = 20U;
uint32_t t0 = 5U;
uint64_t x5 = UINT64_MAX;
uint32_t x10 = 2131493705U;
int16_t x13 = -1;
volatile uint64_t t3 = 847569550766793689LLU;
int16_t x18 = INT16_MIN;
int64_t x30 = 5LL;
uint16_t x33 = 4603U;
volatile int32_t t9 = -7407;
int16_t x53 = INT16_MAX;
int64_t t12 = -25433369577387024LL;
uint64_t x67 = 13949920347297186LLU;
uint16_t x70 = 34U;
volatile int32_t x74 = -1;
static volatile int64_t t16 = 1LL;
volatile uint16_t x85 = 3U;
uint64_t x86 = 6384014041707932189LLU;
static int16_t x87 = -1;
uint16_t x99 = 3317U;
static int32_t x100 = -1;
int32_t x101 = 1712;
static int8_t x111 = INT8_MIN;
uint32_t t22 = 47893339U;
int8_t x118 = 57;
int64_t x128 = 1227939508364940LL;
uint64_t t25 = 1686815LLU;
int8_t x129 = INT8_MAX;
static int32_t x130 = INT32_MAX;
int32_t t26 = 4996192;
int32_t x134 = -2510826;
int8_t x143 = -6;
uint64_t t29 = 138LLU;
static uint16_t x156 = UINT16_MAX;
volatile uint64_t t31 = 1LLU;
static int16_t x176 = -1591;
uint32_t t33 = 16198U;
int16_t x210 = -3;
static int64_t x214 = 580041824568344453LL;
uint64_t x220 = UINT64_MAX;
volatile uint16_t x225 = UINT16_MAX;
uint32_t x226 = 982U;
static uint32_t x233 = 1554U;
int64_t x237 = INT64_MAX;
int16_t x242 = INT16_MAX;
int64_t x253 = INT64_MIN;
uint8_t x255 = 1U;
volatile int64_t t50 = 14966556LL;
uint32_t x260 = UINT32_MAX;
int8_t x263 = -1;
uint8_t x267 = UINT8_MAX;
volatile int64_t t54 = -166891848LL;
int16_t x273 = 4853;
uint16_t x287 = 0U;
int16_t x290 = -1;
static int16_t x292 = INT16_MIN;
static int64_t t58 = 28496LL;
static volatile uint64_t t60 = 1600991536664023LLU;
int32_t x302 = 95;
static volatile int16_t x314 = -3793;
uint64_t x319 = UINT64_MAX;
uint64_t t66 = 80783907562927727LLU;
int64_t x327 = 1LL;
volatile int64_t t67 = -17834964228LL;
int64_t x329 = 42943LL;
uint64_t t69 = 10710749LLU;
volatile uint16_t x341 = 1468U;
int8_t x348 = -1;
int16_t x355 = 14274;
volatile uint64_t t74 = 4862504826400484LLU;
uint32_t x357 = UINT32_MAX;
int32_t x362 = 1919625;
int32_t x364 = INT32_MAX;
uint16_t x366 = 3049U;
volatile int64_t t77 = 20804229845363LL;
volatile uint32_t x376 = 193U;
volatile uint64_t t81 = 19LLU;
int8_t x385 = INT8_MAX;
volatile uint16_t x387 = 9451U;
int32_t x401 = INT32_MAX;
volatile uint16_t x421 = 3541U;
int32_t t87 = -30484994;
static uint16_t x427 = UINT16_MAX;
int64_t x444 = INT64_MIN;
int16_t x451 = -1;
uint16_t x453 = 4U;
volatile int16_t x456 = INT16_MIN;
volatile int64_t x462 = 33807373272984654LL;
static uint8_t x467 = UINT8_MAX;
int16_t x470 = -1;
int16_t x474 = 1;
int8_t x476 = 6;


void f0(void) {
	uint16_t x1 = 9961U;
	uint32_t x3 = 8325567U;

	t0 = ((x1%x2)%(x3+x4));

	if (t0 != 105U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -64481;
	int32_t x7 = -1;
	int16_t x8 = 0;
	volatile uint64_t t1 = 507951621538024620LLU;

	t1 = ((x5%x6)%(x7+x8));

	if (t1 != 64480LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4LLU;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = 6U;
	volatile uint64_t t2 = 10LLU;

	t2 = ((x9%x10)%(x11+x12));

	if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 83553LLU;
	volatile uint8_t x15 = 45U;
	int64_t x16 = INT64_MIN;

	t3 = ((x13%x14)%(x15+x16));

	if (t3 != 51423LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 55148371942097033LLU;

	t4 = ((x17%x18)%(x19+x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	volatile int16_t x26 = 1208;
	volatile uint16_t x27 = 1U;
	volatile uint64_t x28 = 25LLU;
	volatile uint64_t t5 = 48367734370LLU;

	t5 = ((x25%x26)%(x27+x28));

	if (t5 != 15LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int8_t x31 = -5;
	uint64_t x32 = 219710746168LLU;
	volatile uint64_t t6 = 1LLU;

	t6 = ((x29%x30)%(x31+x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x34 = 3U;
	int16_t x35 = -1;
	int32_t x36 = -1;
	volatile uint32_t t7 = 18U;

	t7 = ((x33%x34)%(x35+x36));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int64_t x38 = -12255897664LL;
	int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	static volatile int64_t t8 = 105613655884LL;

	t8 = ((x37%x38)%(x39+x40));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 2801;
	volatile int32_t x42 = INT32_MIN;
	static int32_t x43 = INT32_MAX;
	static int32_t x44 = -1;

	t9 = ((x41%x42)%(x43+x44));

	if (t9 != 2801) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -1;
	int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MAX;
	uint16_t x48 = 14352U;
	volatile int32_t t10 = -6977750;

	t10 = ((x45%x46)%(x47+x48));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 6272U;
	int16_t x50 = INT16_MAX;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1LL;
	int64_t t11 = 36585588642315LL;

	t11 = ((x49%x50)%(x51+x52));

	if (t11 != 80LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -1;
	int64_t x55 = -6161049342674LL;
	int8_t x56 = INT8_MAX;

	t12 = ((x53%x54)%(x55+x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MAX;
	static int16_t x59 = -1;
	uint8_t x60 = 59U;
	volatile int32_t t13 = 124614791;

	t13 = ((x57%x58)%(x59+x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1861252;
	static int64_t x66 = INT64_MIN;
	uint32_t x68 = 101U;
	volatile uint64_t t14 = 17176439279671315LLU;

	t14 = ((x65%x66)%(x67+x68));

	if (t14 != 4949374580676950LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 8114558708836LL;
	int8_t x71 = INT8_MIN;
	volatile int8_t x72 = -1;
	static volatile int64_t t15 = 533880865157752LL;

	t15 = ((x69%x70)%(x71+x72));

	if (t15 != 12LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x75 = 98U;
	int64_t x76 = -3526450187LL;

	t16 = ((x73%x74)%(x75+x76));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = 5951941;
	static int64_t x82 = -1LL;
	int16_t x83 = INT16_MIN;
	volatile int8_t x84 = 36;
	int64_t t17 = 44796157516LL;

	t17 = ((x81%x82)%(x83+x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x88 = INT16_MIN;
	volatile uint64_t t18 = 4202880808013367478LLU;

	t18 = ((x85%x86)%(x87+x88));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 24334519526LLU;
	static int16_t x94 = 1504;
	int64_t x95 = 39290544326932LL;
	uint32_t x96 = 344U;
	volatile uint64_t t19 = 1945683449LLU;

	t19 = ((x93%x94)%(x95+x96));

	if (t19 != 1062LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = INT32_MIN;
	int32_t t20 = -1;

	t20 = ((x97%x98)%(x99+x100));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = -3;
	int8_t x103 = INT8_MAX;
	static int64_t x104 = INT64_MIN;
	int64_t t21 = 446LL;

	t21 = ((x101%x102)%(x103+x104));

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MAX;
	static uint32_t x110 = 77243903U;
	int8_t x112 = -1;

	t22 = ((x109%x110)%(x111+x112));

	if (t22 != 61898266U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = INT8_MIN;
	uint8_t x115 = 1U;
	volatile uint64_t x116 = 157583636009706LLU;
	static volatile uint64_t t23 = 660LLU;

	t23 = ((x113%x114)%(x115+x116));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x119 = 2249LLU;
	static int8_t x120 = INT8_MIN;
	volatile uint64_t t24 = 489LLU;

	t24 = ((x117%x118)%(x119+x120));

	if (t24 != 65LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x125 = INT16_MAX;
	volatile uint64_t x126 = 15102292380LLU;
	int64_t x127 = 3772102075755535984LL;

	t25 = ((x125%x126)%(x127+x128));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x131 = INT8_MIN;
	static int8_t x132 = INT8_MAX;

	t26 = ((x129%x130)%(x131+x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int32_t x136 = 449;
	static int32_t t27 = 7238156;

	t27 = ((x133%x134)%(x135+x136));

	if (t27 != -32) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x141 = 22348106U;
	static volatile uint8_t x142 = 2U;
	volatile int32_t x144 = -1;
	volatile uint32_t t28 = 15U;

	t28 = ((x141%x142)%(x143+x144));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 1U;
	int16_t x150 = INT16_MAX;
	static int8_t x151 = INT8_MAX;
	static volatile uint64_t x152 = 1228LLU;

	t29 = ((x149%x150)%(x151+x152));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = 47;
	uint32_t x154 = 205597U;
	volatile int16_t x155 = INT16_MIN;
	volatile uint32_t t30 = 1011385409U;

	t30 = ((x153%x154)%(x155+x156));

	if (t30 != 47U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 24LLU;
	static int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;

	t31 = ((x157%x158)%(x159+x160));

	if (t31 != 24LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x165 = INT32_MAX;
	static uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	int32_t x168 = -14703;
	int32_t t32 = -1;

	t32 = ((x165%x166)%(x167+x168));

	if (t32 != 3359) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MAX;
	uint16_t x174 = 11U;
	uint32_t x175 = UINT32_MAX;

	t33 = ((x173%x174)%(x175+x176));

	if (t33 != 9U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = -1;
	static int16_t x178 = 2;
	volatile uint8_t x179 = 100U;
	volatile int8_t x180 = 1;
	static int32_t t34 = -833022;

	t34 = ((x177%x178)%(x179+x180));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x181 = INT64_MIN;
	uint64_t x182 = 4449396469223842LLU;
	volatile int32_t x183 = INT32_MAX;
	static int16_t x184 = INT16_MIN;
	uint64_t t35 = 483LLU;

	t35 = ((x181%x182)%(x183+x184));

	if (t35 != 632539573LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	uint64_t x188 = 4284287028540403768LLU;
	volatile uint64_t t36 = 254181324091694803LLU;

	t36 = ((x185%x186)%(x187+x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 472U;
	int32_t x190 = -63788;
	int16_t x191 = -1;
	int16_t x192 = INT16_MAX;
	volatile int32_t t37 = -1;

	t37 = ((x189%x190)%(x191+x192));

	if (t37 != 472) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = -1;
	uint16_t x200 = 3869U;
	volatile int32_t t38 = 2;

	t38 = ((x197%x198)%(x199+x200));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = 14;
	static uint16_t x202 = 105U;
	static int32_t x203 = 125218;
	static uint16_t x204 = 1722U;
	int32_t t39 = 0;

	t39 = ((x201%x202)%(x203+x204));

	if (t39 != 14) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x205 = 46;
	uint32_t x206 = 261625689U;
	uint32_t x207 = UINT32_MAX;
	uint8_t x208 = UINT8_MAX;
	uint32_t t40 = 7U;

	t40 = ((x205%x206)%(x207+x208));

	if (t40 != 46U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x209 = 41134;
	int64_t x211 = 14481783LL;
	int16_t x212 = INT16_MIN;
	int64_t t41 = -4360615LL;

	t41 = ((x209%x210)%(x211+x212));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = -29;
	uint64_t x215 = 60916037184288812LLU;
	int32_t x216 = -1;
	uint64_t t42 = 6566962360LLU;

	t42 = ((x213%x214)%(x215+x216));

	if (t42 != 50100844054330665LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = UINT8_MAX;
	uint64_t x218 = 78LLU;
	int8_t x219 = INT8_MAX;
	uint64_t t43 = 31501207162798LLU;

	t43 = ((x217%x218)%(x219+x220));

	if (t43 != 21LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 9960LLU;
	uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = 31U;
	int8_t x224 = INT8_MAX;
	static uint64_t t44 = 476875424062714LLU;

	t44 = ((x221%x222)%(x223+x224));

	if (t44 != 6LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x227 = 1U;
	int16_t x228 = 11;
	volatile uint32_t t45 = 0U;

	t45 = ((x225%x226)%(x227+x228));

	if (t45 != 3U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	volatile uint32_t x230 = 600400U;
	static int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MAX;
	volatile uint32_t t46 = 20440U;

	t46 = ((x229%x230)%(x231+x232));

	if (t46 != 305968U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x234 = -538LL;
	uint64_t x235 = 21056800LLU;
	static uint64_t x236 = 19850365211LLU;
	uint64_t t47 = 2251270353064LLU;

	t47 = ((x233%x234)%(x235+x236));

	if (t47 != 478LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MIN;
	int64_t t48 = 216LL;

	t48 = ((x237%x238)%(x239+x240));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 7903698U;
	volatile uint32_t t49 = 2114564709U;

	t49 = ((x241%x242)%(x243+x244));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x254 = UINT32_MAX;
	int8_t x256 = INT8_MIN;

	t50 = ((x253%x254)%(x255+x256));

	if (t50 != -8LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x257 = 24U;
	uint32_t x258 = UINT32_MAX;
	uint32_t x259 = UINT32_MAX;
	uint32_t t51 = 151570262U;

	t51 = ((x257%x258)%(x259+x260));

	if (t51 != 24U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x261 = 21U;
	volatile uint64_t x262 = UINT64_MAX;
	int64_t x264 = 0LL;
	volatile uint64_t t52 = 103911695640LLU;

	t52 = ((x261%x262)%(x263+x264));

	if (t52 != 21LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x265 = -1;
	int8_t x266 = -5;
	volatile int64_t x268 = -20875925LL;
	volatile int64_t t53 = -38LL;

	t53 = ((x265%x266)%(x267+x268));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	static volatile uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;

	t54 = ((x269%x270)%(x271+x272));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = -1;
	int64_t x276 = 36LL;
	int64_t t55 = -403174585955163LL;

	t55 = ((x273%x274)%(x275+x276));

	if (t55 != 23LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x277 = -30050470618726LL;
	uint64_t x278 = 173128223590LLU;
	static int16_t x279 = 3519;
	static volatile int32_t x280 = INT32_MIN;
	volatile uint64_t t56 = 7147257404232LLU;

	t56 = ((x277%x278)%(x279+x280));

	if (t56 != 136555432010LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = -1;
	int64_t x286 = INT64_MIN;
	int8_t x288 = -2;
	int64_t t57 = -15961868637386LL;

	t57 = ((x285%x286)%(x287+x288));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = INT64_MIN;
	static int64_t x291 = INT64_MAX;

	t58 = ((x289%x290)%(x291+x292));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x293 = INT16_MAX;
	uint32_t x294 = 302217U;
	volatile int64_t x295 = -11414365027LL;
	volatile uint16_t x296 = 16U;
	int64_t t59 = 5520230864LL;

	t59 = ((x293%x294)%(x295+x296));

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = -1;
	static volatile uint16_t x298 = 201U;
	static int16_t x299 = INT16_MIN;
	static volatile uint64_t x300 = 180105LLU;

	t60 = ((x297%x298)%(x299+x300));

	if (t60 != 102476LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x301 = INT64_MIN;
	volatile int64_t x303 = -224688036LL;
	uint8_t x304 = UINT8_MAX;
	int64_t t61 = 0LL;

	t61 = ((x301%x302)%(x303+x304));

	if (t61 != -18LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	volatile int16_t x307 = -1;
	int64_t x308 = -38573076978229526LL;
	static int64_t t62 = -108242351878LL;

	t62 = ((x305%x306)%(x307+x308));

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x309 = -1;
	int64_t x310 = -47LL;
	uint16_t x311 = 3U;
	int16_t x312 = 1;
	int64_t t63 = -5516761878943713LL;

	t63 = ((x309%x310)%(x311+x312));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x313 = 4229463196LL;
	volatile int16_t x315 = INT16_MIN;
	int32_t x316 = 2;
	volatile int64_t t64 = -5228137803802429LL;

	t64 = ((x313%x314)%(x315+x316));

	if (t64 != 2686LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = -18;
	int16_t x318 = -2793;
	volatile uint64_t x320 = 37990552290762LLU;
	volatile uint64_t t65 = 19903133498574986LLU;

	t65 = ((x317%x318)%(x319+x320));

	if (t65 != 13512855349677LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	uint64_t x323 = 5280188832249760174LLU;
	int16_t x324 = 5869;

	t66 = ((x321%x322)%(x323+x324));

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x325 = INT64_MAX;
	static volatile int64_t x326 = -9718LL;
	uint8_t x328 = UINT8_MAX;

	t67 = ((x325%x326)%(x327+x328));

	if (t67 != 127LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x330 = 23231LLU;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = INT8_MAX;
	uint64_t t68 = 1490323LLU;

	t68 = ((x329%x330)%(x331+x332));

	if (t68 != 19712LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x333 = 1085138715550039LLU;
	int64_t x334 = 518777LL;
	int8_t x335 = INT8_MAX;
	static volatile int8_t x336 = 5;

	t69 = ((x333%x334)%(x335+x336));

	if (t69 != 41LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x337 = 49;
	static uint64_t x338 = 44796470874LLU;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = -67699053573LL;
	uint64_t t70 = 2441LLU;

	t70 = ((x337%x338)%(x339+x340));

	if (t70 != 49LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	int8_t x344 = 0;
	int64_t t71 = 970509492LL;

	t71 = ((x341%x342)%(x343+x344));

	if (t71 != 60LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x345 = 1933U;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = 37142U;
	static int64_t t72 = 55859LL;

	t72 = ((x345%x346)%(x347+x348));

	if (t72 != 1933LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x349 = 1006319395048864LLU;
	volatile int32_t x350 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	volatile uint32_t x352 = 450694U;
	volatile uint64_t t73 = 2790920825855LLU;

	t73 = ((x349%x350)%(x351+x352));

	if (t73 != 47947LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint64_t x354 = 37866LLU;
	int16_t x356 = INT16_MIN;

	t74 = ((x353%x354)%(x355+x356));

	if (t74 != 16245LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	volatile uint32_t x360 = 0U;
	volatile uint32_t t75 = 47532U;

	t75 = ((x357%x358)%(x359+x360));

	if (t75 != 127U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int32_t x363 = INT32_MIN;
	volatile uint32_t t76 = 542U;

	t76 = ((x361%x362)%(x363+x364));

	if (t76 != 766170U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = 23666LL;

	t77 = ((x365%x366)%(x367+x368));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = 920;
	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	uint32_t x372 = 1376U;
	uint32_t t78 = 7U;

	t78 = ((x369%x370)%(x371+x372));

	if (t78 != 920U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MIN;
	volatile int64_t x375 = 1386483LL;
	volatile int64_t t79 = -11LL;

	t79 = ((x373%x374)%(x375+x376));

	if (t79 != 431723LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = -52;
	uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 611U;
	int32_t t80 = 99965948;

	t80 = ((x377%x378)%(x379+x380));

	if (t80 != -24) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x381 = 58U;
	static int16_t x382 = -1;
	volatile uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 3U;

	t81 = ((x381%x382)%(x383+x384));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x386 = -174;
	static int32_t x388 = INT32_MIN;
	int32_t t82 = 11134112;

	t82 = ((x385%x386)%(x387+x388));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = 3231U;
	int32_t x394 = INT32_MAX;
	volatile int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	volatile int64_t t83 = -447433155273LL;

	t83 = ((x393%x394)%(x395+x396));

	if (t83 != 3231LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x402 = -1LL;
	volatile uint64_t x403 = UINT64_MAX;
	volatile int16_t x404 = INT16_MIN;
	static uint64_t t84 = 13533223LLU;

	t84 = ((x401%x402)%(x403+x404));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -1;
	int16_t x414 = -1;
	uint8_t x415 = 31U;
	int8_t x416 = INT8_MAX;
	volatile int32_t t85 = 165673;

	t85 = ((x413%x414)%(x415+x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = 16U;
	uint8_t x418 = 1U;
	uint16_t x419 = 6870U;
	uint64_t x420 = 32128572LLU;
	uint64_t t86 = 1886769107568LLU;

	t86 = ((x417%x418)%(x419+x420));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x422 = INT16_MIN;
	static volatile int16_t x423 = -1;
	volatile int8_t x424 = INT8_MIN;

	t87 = ((x421%x422)%(x423+x424));

	if (t87 != 58) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x425 = 31;
	int8_t x426 = INT8_MAX;
	int16_t x428 = INT16_MAX;
	int32_t t88 = 417051;

	t88 = ((x425%x426)%(x427+x428));

	if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x429 = 102U;
	int64_t x430 = -1LL;
	uint64_t x431 = 12LLU;
	static int64_t x432 = INT64_MAX;
	volatile uint64_t t89 = 601094339693LLU;

	t89 = ((x429%x430)%(x431+x432));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = -103;
	uint16_t x438 = 30732U;
	int32_t x439 = INT32_MIN;
	static volatile uint8_t x440 = 3U;
	int32_t t90 = -13462;

	t90 = ((x437%x438)%(x439+x440));

	if (t90 != -103) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x441 = -3301457;
	uint64_t x442 = 873981168079251696LLU;
	uint8_t x443 = 117U;
	uint64_t t91 = 2365484668883LLU;

	t91 = ((x441%x442)%(x443+x444));

	if (t91 != 93139544041964543LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x445 = -1;
	uint64_t x446 = 1219697LLU;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile uint64_t t92 = 29274LLU;

	t92 = ((x445%x446)%(x447+x448));

	if (t92 != 468473LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x449 = 39U;
	uint8_t x450 = 21U;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t93 = -11;

	t93 = ((x449%x450)%(x451+x452));

	if (t93 != 18) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x454 = INT8_MIN;
	uint16_t x455 = UINT16_MAX;
	volatile int32_t t94 = 1534;

	t94 = ((x453%x454)%(x455+x456));

	if (t94 != 4) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x461 = 8642LLU;
	volatile uint64_t x463 = 1LLU;
	uint8_t x464 = 3U;
	static volatile uint64_t t95 = 406605151555982LLU;

	t95 = ((x461%x462)%(x463+x464));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = -1LL;
	volatile int8_t x466 = INT8_MAX;
	uint8_t x468 = UINT8_MAX;
	int64_t t96 = -7654401LL;

	t96 = ((x465%x466)%(x467+x468));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x469 = INT16_MIN;
	volatile int32_t x471 = INT32_MIN;
	uint32_t x472 = 824U;
	uint32_t t97 = 60U;

	t97 = ((x469%x470)%(x471+x472));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x473 = 371U;
	uint64_t x475 = 729824576LLU;
	volatile uint64_t t98 = 2026871175587LLU;

	t98 = ((x473%x474)%(x475+x476));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = 111334LLU;
	int64_t x479 = 4206181117977946793LL;
	int64_t x480 = -133490251LL;
	uint64_t t99 = 2747LLU;

	t99 = ((x477%x478)%(x479+x480));

	if (t99 != 74586LLU) { NG(); } else { ; }
	
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

