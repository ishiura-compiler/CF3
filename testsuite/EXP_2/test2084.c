#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 33595;
static volatile uint64_t t2 = 6668056829345134618LLU;
int8_t x24 = -1;
uint32_t x26 = 40892U;
volatile int64_t x27 = INT64_MIN;
int8_t x32 = -59;
uint16_t x39 = 11902U;
volatile int32_t x44 = INT32_MIN;
volatile int16_t x47 = INT16_MAX;
uint8_t x57 = 8U;
int16_t x58 = -1;
int32_t x61 = 991645533;
int64_t x62 = INT64_MAX;
volatile int32_t t14 = -33375;
static uint8_t x74 = UINT8_MAX;
int32_t x75 = -9908;
int32_t x80 = 230;
int64_t x83 = -1LL;
volatile uint64_t t18 = 2LLU;
uint16_t x88 = 3187U;
uint16_t x89 = 940U;
static uint32_t x90 = UINT32_MAX;
int8_t x94 = -1;
int32_t x97 = INT32_MIN;
volatile int64_t x98 = INT64_MAX;
static int8_t x100 = INT8_MIN;
int32_t x104 = INT32_MIN;
static uint8_t x116 = UINT8_MAX;
uint16_t x126 = 5U;
volatile int64_t t28 = -255285LL;
volatile int16_t x134 = -1;
uint32_t x140 = 255U;
volatile int8_t x142 = INT8_MAX;
int64_t x152 = 523212416987660LL;
int64_t x160 = INT64_MIN;
int32_t x167 = INT32_MIN;
uint8_t x168 = 81U;
int32_t x170 = INT32_MIN;
volatile int64_t x172 = INT64_MAX;
volatile int64_t t38 = -21976LL;
volatile uint16_t x175 = 8U;
volatile uint64_t t39 = 1755549567LLU;
volatile uint64_t x177 = 412725227058LLU;
uint32_t x185 = 1370245U;
int8_t x187 = -1;
int32_t x188 = INT32_MAX;
uint8_t x189 = 0U;
static volatile int8_t x195 = 26;
int8_t x206 = INT8_MIN;
uint64_t x210 = UINT64_MAX;
volatile int32_t t48 = -175737629;
static volatile int16_t x225 = INT16_MIN;
int32_t x226 = INT32_MAX;
int32_t x235 = INT32_MIN;
int64_t x244 = 2968083878460859LL;
static volatile uint16_t x245 = 16488U;
int8_t x249 = 35;
volatile int32_t x255 = INT32_MIN;
int32_t t58 = 6691;
int32_t x258 = 140094;
uint16_t x259 = 30U;
static uint64_t t59 = 851513LLU;
uint64_t t60 = 30899LLU;
int64_t t61 = -3522794682005LL;
volatile uint64_t t62 = 1787338833202LLU;
int8_t x273 = -1;
uint8_t x274 = UINT8_MAX;
static int8_t x275 = -1;
static volatile int32_t t63 = 8348245;
int16_t x277 = INT16_MAX;
int32_t x279 = 1033008;
static int32_t x291 = 467451;
uint8_t x292 = UINT8_MAX;
uint64_t x294 = 312286373876125LLU;
volatile uint64_t t68 = 296184847775LLU;
static volatile int32_t x297 = -1;
static volatile uint8_t x299 = 3U;
int32_t t70 = 87227446;
uint64_t x311 = 204LLU;
volatile int8_t x322 = -1;
int8_t x341 = 1;
int64_t x353 = -560LL;
static uint16_t x356 = 5U;
static int8_t x369 = INT8_MIN;
int16_t x375 = INT16_MAX;
volatile uint32_t t84 = 10555977U;
int8_t x384 = 1;
uint64_t x396 = 1655328817991507263LLU;
volatile uint64_t t89 = 33669212787LLU;
int8_t x400 = 1;
uint32_t t90 = 1769U;
static int32_t x410 = -536;
uint8_t x417 = 33U;
int16_t x422 = INT16_MAX;
volatile uint64_t x423 = 1048472278123LLU;
static volatile int32_t x424 = 36763660;
volatile int32_t x429 = INT32_MIN;
volatile uint32_t x431 = 36467U;
static int32_t x435 = INT32_MIN;


void f0(void) {
	volatile int8_t x1 = 3;
	static int16_t x2 = 917;
	int64_t x3 = -1LL;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -5662132937LL;

	t0 = ((x1%(x2^x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint8_t x6 = 4U;
	static int16_t x7 = 0;
	int16_t x8 = INT16_MAX;

	t1 = ((x5%(x6^x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 2LLU;
	static int32_t x12 = INT32_MAX;

	t2 = ((x9%(x10^x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	volatile int16_t x14 = INT16_MIN;
	volatile int32_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -7;

	t3 = ((x13%(x14^x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = 17786LLU;
	uint16_t x19 = 1321U;
	int16_t x20 = -1;
	volatile uint64_t t4 = 15227853555LLU;

	t4 = ((x17%(x18^x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -28;
	static volatile int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	int64_t t5 = -1LL;

	t5 = ((x21%(x22^x23))/x24);

	if (t5 != 28LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 11;
	static int64_t x28 = INT64_MAX;
	static int64_t t6 = -3LL;

	t6 = ((x25%(x26^x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 94294423;
	uint64_t x30 = 16975602814LLU;
	int8_t x31 = INT8_MAX;
	volatile uint64_t t7 = 32993990143675158LLU;

	t7 = ((x29%(x30^x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -2684593;
	static int16_t x38 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;
	uint32_t t8 = 32U;

	t8 = ((x37%(x38^x39))/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = 41204014LL;
	int8_t x43 = -1;
	volatile int64_t t9 = -1821LL;

	t9 = ((x41%(x42^x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 6080LL;
	int64_t x46 = INT64_MAX;
	uint16_t x48 = 3956U;
	int64_t t10 = -36668083766634966LL;

	t10 = ((x45%(x46^x47))/x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int16_t x50 = -1;
	int32_t x51 = -620;
	static int32_t x52 = -1;
	volatile int32_t t11 = -10732954;

	t11 = ((x49%(x50^x51))/x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x59 = -905;
	static volatile int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 368529;

	t12 = ((x57%(x58^x59))/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x63 = 445U;
	uint64_t x64 = 1456800LLU;
	uint64_t t13 = 3927693305926471105LLU;

	t13 = ((x61%(x62^x63))/x64);

	if (t13 != 680LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	static int32_t x66 = INT32_MIN;
	int32_t x67 = 0;
	uint8_t x68 = UINT8_MAX;

	t14 = ((x65%(x66^x67))/x68);

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = -258;
	int64_t x70 = -1LL;
	int64_t x71 = 52LL;
	static int32_t x72 = INT32_MIN;
	int64_t t15 = 419772339623207LL;

	t15 = ((x69%(x70^x71))/x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x73 = INT32_MIN;
	int8_t x76 = -26;
	int32_t t16 = -592861319;

	t16 = ((x73%(x74^x75))/x76);

	if (t16 != 90) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = -103;
	int8_t x78 = -1;
	static int16_t x79 = 12;
	int32_t t17 = 507831270;

	t17 = ((x77%(x78^x79))/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = -5;
	static uint64_t x84 = 3200092586221LLU;

	t18 = ((x81%(x82^x83))/x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -1LL;
	static int16_t x86 = 0;
	int8_t x87 = INT8_MIN;
	int64_t t19 = -99LL;

	t19 = ((x85%(x86^x87))/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x91 = 301602U;
	static int32_t x92 = INT32_MIN;
	static volatile uint32_t t20 = 10512U;

	t20 = ((x89%(x90^x91))/x92);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = -1;
	int64_t x95 = INT64_MAX;
	static int32_t x96 = -1;
	int64_t t21 = 4383200497580307LL;

	t21 = ((x93%(x94^x95))/x96);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x99 = 159621119084347LL;
	volatile int64_t t22 = 15LL;

	t22 = ((x97%(x98^x99))/x100);

	if (t22 != 16777216LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 1U;
	uint16_t x102 = 3U;
	static int8_t x103 = 0;
	volatile int32_t t23 = -25;

	t23 = ((x101%(x102^x103))/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -1;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MAX;
	int64_t x108 = 245LL;
	volatile int64_t t24 = -3329188780313715LL;

	t24 = ((x105%(x106^x107))/x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = 52;
	int8_t x114 = -1;
	uint64_t x115 = 9022LLU;
	volatile uint64_t t25 = 444LLU;

	t25 = ((x113%(x114^x115))/x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	uint32_t x118 = 2781U;
	uint16_t x119 = 170U;
	static int8_t x120 = INT8_MIN;
	uint32_t t26 = 3831U;

	t26 = ((x117%(x118^x119))/x120);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	uint64_t x122 = 103420LLU;
	int64_t x123 = -12389202635LL;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t27 = 1847677318211648143LLU;

	t27 = ((x121%(x122^x123))/x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x125 = UINT16_MAX;
	int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MIN;

	t28 = ((x125%(x126^x127))/x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	static uint16_t x130 = UINT16_MAX;
	int64_t x131 = -1LL;
	uint8_t x132 = 26U;
	int64_t t29 = -138637719859369043LL;

	t29 = ((x129%(x130^x131))/x132);

	if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -1LL;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = 5;
	int64_t t30 = -503LL;

	t30 = ((x133%(x134^x135))/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x137 = 6349065295595695LLU;
	int8_t x138 = INT8_MAX;
	volatile uint8_t x139 = 2U;
	volatile uint64_t t31 = 3397940638533027715LLU;

	t31 = ((x137%(x138^x139))/x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	uint8_t x143 = UINT8_MAX;
	static volatile int64_t x144 = INT64_MIN;
	int64_t t32 = -1693612458316553LL;

	t32 = ((x141%(x142^x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MAX;
	volatile int64_t x146 = 233LL;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = 1933237LL;
	volatile uint64_t t33 = 4LLU;

	t33 = ((x145%(x146^x147))/x148);

	if (t33 != 1110LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MAX;
	int32_t x150 = -6341245;
	uint16_t x151 = 29U;
	int64_t t34 = 2357926LL;

	t34 = ((x149%(x150^x151))/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x153 = 11236U;
	int8_t x154 = -1;
	uint8_t x155 = 7U;
	uint64_t x156 = 288LLU;
	uint64_t t35 = 43725353739578763LLU;

	t35 = ((x153%(x154^x155))/x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = -1LL;
	int64_t x159 = INT64_MAX;
	int64_t t36 = -2951LL;

	t36 = ((x157%(x158^x159))/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 263U;
	int64_t x166 = 934306314LL;
	volatile int64_t t37 = 199721734737828409LL;

	t37 = ((x165%(x166^x167))/x168);

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	int32_t x171 = -1;

	t38 = ((x169%(x170^x171))/x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x173 = 524LLU;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t x176 = INT32_MIN;

	t39 = ((x173%(x174^x175))/x176);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x178 = 1U;
	int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	static uint64_t t40 = 284478233132932646LLU;

	t40 = ((x177%(x178^x179))/x180);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = 0;
	uint32_t x182 = 420U;
	uint8_t x183 = 73U;
	int8_t x184 = INT8_MIN;
	volatile uint32_t t41 = 346689U;

	t41 = ((x181%(x182^x183))/x184);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x186 = 2U;
	volatile uint32_t t42 = 25654965U;

	t42 = ((x185%(x186^x187))/x188);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = -3;
	int32_t x191 = 23793628;
	int8_t x192 = INT8_MIN;
	volatile int32_t t43 = -16077;

	t43 = ((x189%(x190^x191))/x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MAX;
	int64_t x194 = -13LL;
	int8_t x196 = INT8_MAX;
	volatile int64_t t44 = -88794548LL;

	t44 = ((x193%(x194^x195))/x196);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 7685516;
	volatile int64_t x202 = INT64_MAX;
	int16_t x203 = -1;
	int64_t x204 = -1LL;
	volatile int64_t t45 = -28087967533LL;

	t45 = ((x201%(x202^x203))/x204);

	if (t45 != -7685516LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 737336U;
	static int8_t x207 = 3;
	int32_t x208 = INT32_MIN;
	volatile uint32_t t46 = 8U;

	t46 = ((x205%(x206^x207))/x208);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 27U;
	uint16_t x211 = 265U;
	volatile int16_t x212 = 150;
	volatile uint64_t t47 = 16751837710LLU;

	t47 = ((x209%(x210^x211))/x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x213 = -2;
	int16_t x214 = 1420;
	int8_t x215 = INT8_MAX;
	int16_t x216 = -1;

	t48 = ((x213%(x214^x215))/x216);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = -6770LL;
	volatile int8_t x218 = 10;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	int64_t t49 = 476709483621LL;

	t49 = ((x217%(x218^x219))/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = -33961;
	int32_t x222 = INT32_MIN;
	static int16_t x223 = INT16_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t50 = 329866635592450LLU;

	t50 = ((x221%(x222^x223))/x224);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x227 = INT8_MAX;
	int16_t x228 = INT16_MIN;
	static int32_t t51 = 7595684;

	t51 = ((x225%(x226^x227))/x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = 7989635806168LLU;
	static int64_t x230 = -1LL;
	int32_t x231 = -27141;
	int16_t x232 = -1;
	volatile uint64_t t52 = 97054LLU;

	t52 = ((x229%(x230^x231))/x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 6820043U;
	volatile int64_t x234 = -1159LL;
	volatile int64_t x236 = 1783444168511821LL;
	static int64_t t53 = -219441LL;

	t53 = ((x233%(x234^x235))/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int64_t x239 = -713LL;
	uint32_t x240 = UINT32_MAX;
	static volatile int64_t t54 = -30575045121741LL;

	t54 = ((x237%(x238^x239))/x240);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	uint8_t x242 = UINT8_MAX;
	uint32_t x243 = 28U;
	int64_t t55 = 3462755459789162850LL;

	t55 = ((x241%(x242^x243))/x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t x248 = 1463337409586LL;
	volatile int64_t t56 = 116788LL;

	t56 = ((x245%(x246^x247))/x248);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = INT64_MIN;
	uint32_t x251 = 839U;
	int32_t x252 = -1;
	int64_t t57 = 135140874597750697LL;

	t57 = ((x249%(x250^x251))/x252);

	if (t57 != -35LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x253 = 1;
	int8_t x254 = -1;
	volatile uint16_t x256 = 10U;

	t58 = ((x253%(x254^x255))/x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 3319U;
	uint64_t x260 = 14638228011973LLU;

	t59 = ((x257%(x258^x259))/x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x261 = 8U;
	static uint8_t x262 = 25U;
	int64_t x263 = INT64_MIN;
	volatile uint64_t x264 = 30934LLU;

	t60 = ((x261%(x262^x263))/x264);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = 30;
	static volatile int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MIN;

	t61 = ((x265%(x266^x267))/x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x269 = 61U;
	static int64_t x270 = -1LL;
	uint64_t x271 = 2072357918067406LLU;
	static volatile int16_t x272 = INT16_MIN;

	t62 = ((x269%(x270^x271))/x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x276 = UINT16_MAX;

	t63 = ((x273%(x274^x275))/x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x278 = 3545251464LLU;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t64 = 8LLU;

	t64 = ((x277%(x278^x279))/x280);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile uint16_t x282 = 0U;
	int64_t x283 = INT64_MIN;
	int64_t x284 = 2LL;
	int64_t t65 = -45738083984460LL;

	t65 = ((x281%(x282^x283))/x284);

	if (t65 != -64LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = 0;
	uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t66 = 38;

	t66 = ((x285%(x286^x287))/x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 7U;
	int8_t x290 = INT8_MAX;
	int32_t t67 = 652;

	t67 = ((x289%(x290^x291))/x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x293 = UINT8_MAX;
	uint32_t x295 = 1544865U;
	int32_t x296 = 38785;

	t68 = ((x293%(x294^x295))/x296);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x298 = 881U;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t69 = -7319;

	t69 = ((x297%(x298^x299))/x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = UINT16_MAX;
	static int32_t x302 = 1;
	int16_t x303 = -110;
	volatile uint8_t x304 = UINT8_MAX;

	t70 = ((x301%(x302^x303))/x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MIN;
	volatile int32_t x306 = -9981282;
	static volatile int64_t x307 = INT64_MAX;
	uint64_t x308 = 443458969559LLU;
	static uint64_t t71 = 2LLU;

	t71 = ((x305%(x306^x307))/x308);

	if (t71 != 41597408LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MAX;
	static int16_t x310 = 783;
	static int16_t x312 = INT16_MIN;
	volatile uint64_t t72 = 4861706698436LLU;

	t72 = ((x309%(x310^x311))/x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = -1;
	static int64_t x314 = INT64_MIN;
	static int16_t x315 = 177;
	uint16_t x316 = 8U;
	volatile int64_t t73 = 17081904291411LL;

	t73 = ((x313%(x314^x315))/x316);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	int8_t x318 = -1;
	uint8_t x319 = 5U;
	int32_t x320 = 1517;
	volatile int32_t t74 = 89373;

	t74 = ((x317%(x318^x319))/x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x321 = UINT32_MAX;
	static int64_t x323 = 377LL;
	uint32_t x324 = UINT32_MAX;
	static int64_t t75 = 31LL;

	t75 = ((x321%(x322^x323))/x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = 16008;
	int8_t x326 = 1;
	uint32_t x327 = 86U;
	int32_t x328 = -32;
	uint32_t t76 = 101U;

	t76 = ((x325%(x326^x327))/x328);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x333 = 17323U;
	volatile int64_t x334 = 314721384147LL;
	volatile int64_t x335 = -123186800743LL;
	int8_t x336 = INT8_MIN;
	int64_t t77 = -17094914422365806LL;

	t77 = ((x333%(x334^x335))/x336);

	if (t77 != -135LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = -1;
	int16_t x343 = INT16_MIN;
	static uint16_t x344 = 14U;
	volatile int32_t t78 = 1;

	t78 = ((x341%(x342^x343))/x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = INT16_MAX;
	static int32_t x346 = -1;
	int8_t x347 = 0;
	static int8_t x348 = 5;
	int32_t t79 = 7662411;

	t79 = ((x345%(x346^x347))/x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = 113407;
	uint16_t x350 = 134U;
	static volatile int64_t x351 = -1LL;
	int16_t x352 = -13;
	int64_t t80 = 3LL;

	t80 = ((x349%(x350^x351))/x352);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x354 = 1648;
	uint32_t x355 = 26U;
	volatile int64_t t81 = 616199LL;

	t81 = ((x353%(x354^x355))/x356);

	if (t81 != -112LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x365 = 45332393LLU;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = INT32_MIN;
	int8_t x368 = 1;
	static uint64_t t82 = 805461438LLU;

	t82 = ((x365%(x366^x367))/x368);

	if (t82 != 45332393LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x370 = 3U;
	uint8_t x371 = 31U;
	int32_t x372 = -1;
	int32_t t83 = -12831;

	t83 = ((x369%(x370^x371))/x372);

	if (t83 != 16) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = 0;
	uint32_t x374 = UINT32_MAX;
	uint16_t x376 = 93U;

	t84 = ((x373%(x374^x375))/x376);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = -1;
	uint8_t x378 = 92U;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = -165281;
	volatile int32_t t85 = -21;

	t85 = ((x377%(x378^x379))/x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x381 = -1LL;
	int64_t x382 = 4864876735LL;
	int8_t x383 = INT8_MIN;
	volatile int64_t t86 = -907468584126LL;

	t86 = ((x381%(x382^x383))/x384);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int64_t x386 = -29818LL;
	int8_t x387 = INT8_MAX;
	int32_t x388 = -1;
	static volatile int64_t t87 = 99LL;

	t87 = ((x385%(x386^x387))/x388);

	if (t87 != -6129LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -2634;
	static int32_t x390 = INT32_MAX;
	volatile uint64_t x391 = 377114LLU;
	int32_t x392 = -1;
	uint64_t t88 = 1731LLU;

	t88 = ((x389%(x390^x391))/x392);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = INT64_MAX;
	uint8_t x394 = 49U;
	uint32_t x395 = 0U;

	t89 = ((x393%(x394^x395))/x396);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	static int8_t x398 = INT8_MIN;
	volatile uint32_t x399 = 54U;

	t90 = ((x397%(x398^x399))/x400);

	if (t90 != 73U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = -49;
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MAX;
	volatile int64_t t91 = -33844138585293LL;

	t91 = ((x401%(x402^x403))/x404);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = INT16_MAX;
	volatile int8_t x406 = -1;
	int32_t x407 = INT32_MAX;
	static int32_t x408 = INT32_MIN;
	int32_t t92 = -162777;

	t92 = ((x405%(x406^x407))/x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x409 = UINT16_MAX;
	static int8_t x411 = -1;
	int16_t x412 = INT16_MIN;
	int32_t t93 = 4;

	t93 = ((x409%(x410^x411))/x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -14;
	volatile uint16_t x414 = UINT16_MAX;
	volatile int16_t x415 = 3;
	volatile uint64_t x416 = 3635LLU;
	static uint64_t t94 = 173723543748LLU;

	t94 = ((x413%(x414^x415))/x416);

	if (t94 != 5074757654390523LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x418 = 461;
	static int32_t x419 = 13396076;
	int16_t x420 = 110;
	int32_t t95 = 1958;

	t95 = ((x417%(x418^x419))/x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x421 = 26696267U;
	static uint64_t t96 = 4LLU;

	t96 = ((x421%(x422^x423))/x424);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = 54;
	int64_t x427 = INT64_MIN;
	static int8_t x428 = INT8_MIN;
	static int64_t t97 = -2044663LL;

	t97 = ((x425%(x426^x427))/x428);

	if (t97 != 16777216LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x430 = UINT16_MAX;
	static int8_t x432 = 29;
	uint32_t t98 = 945U;

	t98 = ((x429%(x430^x431))/x432);

	if (t98 != 931U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MIN;
	static int32_t x436 = -231669;
	volatile int32_t t99 = 4057;

	t99 = ((x433%(x434^x435))/x436);

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

