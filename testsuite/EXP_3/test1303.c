#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 25U;
static int64_t x6 = -1001LL;
int16_t x8 = INT16_MAX;
uint64_t x11 = 221161490789625LLU;
uint64_t x12 = 617879LLU;
static uint16_t x14 = UINT16_MAX;
int64_t x17 = -1LL;
static uint16_t x25 = UINT16_MAX;
static uint64_t x33 = UINT64_MAX;
static int8_t x34 = INT8_MIN;
uint16_t x45 = UINT16_MAX;
volatile int32_t t12 = -21;
int8_t x53 = INT8_MIN;
static volatile uint16_t x54 = UINT16_MAX;
static volatile int8_t x55 = INT8_MIN;
volatile int32_t x57 = -9;
int16_t x64 = INT16_MIN;
static int8_t x66 = -10;
static int32_t t17 = -1;
int8_t x74 = INT8_MAX;
int32_t x76 = -1;
uint16_t x78 = 104U;
int16_t x79 = INT16_MIN;
int64_t x85 = INT64_MAX;
int16_t x96 = INT16_MIN;
int8_t x100 = -16;
uint16_t x101 = UINT16_MAX;
volatile int64_t x105 = -1LL;
volatile uint8_t x106 = 36U;
volatile int16_t x107 = 426;
volatile int64_t x109 = INT64_MIN;
int32_t t29 = 6566;
uint8_t x122 = UINT8_MAX;
uint8_t x127 = UINT8_MAX;
volatile uint8_t x128 = 8U;
int16_t x129 = 1;
int64_t x136 = INT64_MIN;
static int8_t x137 = 2;
volatile uint16_t x150 = 5349U;
int8_t x156 = INT8_MIN;
int64_t x158 = -1LL;
int32_t t39 = 1616299;
int32_t x163 = INT32_MIN;
int64_t x166 = INT64_MIN;
uint16_t x167 = 7766U;
volatile int32_t x169 = -4;
uint16_t x181 = 3996U;
int64_t x184 = INT64_MAX;
volatile int64_t x188 = 1040179037191562LL;
volatile int64_t x200 = 46926LL;
static int32_t x202 = INT32_MIN;
volatile uint32_t x205 = 0U;
int64_t x208 = INT64_MIN;
static volatile int32_t t51 = -2;
int64_t x213 = INT64_MIN;
int32_t x215 = INT32_MIN;
int64_t x218 = 54164481LL;
int32_t x221 = -1;
volatile int16_t x223 = INT16_MAX;
int8_t x232 = INT8_MIN;
static int16_t x237 = INT16_MIN;
int32_t x239 = INT32_MIN;
volatile int16_t x249 = INT16_MIN;
uint8_t x255 = 0U;
int32_t t63 = -384863979;
int64_t x258 = INT64_MIN;
int32_t x259 = INT32_MIN;
volatile int32_t t64 = 33729971;
volatile int32_t t65 = -43;
int16_t x268 = -1;
int32_t t66 = -26424794;
volatile uint16_t x275 = 365U;
volatile int32_t t68 = 72659712;
volatile uint32_t x282 = 2U;
int8_t x284 = -1;
int64_t x285 = INT64_MIN;
int16_t x288 = INT16_MAX;
int64_t x300 = 28896570382713180LL;
static int64_t x315 = INT64_MIN;
uint16_t x325 = 4926U;
volatile uint64_t x332 = UINT64_MAX;
int32_t t82 = -30687;
int8_t x333 = -2;
volatile int16_t x336 = 0;
int32_t t83 = -28550;
uint64_t x338 = 40264426839LLU;
uint16_t x339 = UINT16_MAX;
int32_t t84 = 1448595;
int32_t t85 = 1;
volatile int8_t x349 = -1;
int64_t x352 = -1LL;
uint8_t x359 = UINT8_MAX;
int8_t x360 = INT8_MAX;
volatile int32_t t89 = -1070295285;
static int16_t x363 = INT16_MIN;
static int32_t t90 = 56;
uint16_t x365 = UINT16_MAX;
static uint16_t x367 = 63U;
volatile int16_t x368 = INT16_MIN;
int32_t t93 = -59152;
int16_t x385 = INT16_MAX;
int64_t x386 = -1LL;
static volatile int64_t x387 = 66462890LL;


void f0(void) {
	int32_t x2 = -1;
	int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 25075986;

	t0 = ((x1<=x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 21U;
	int64_t x7 = 0LL;
	volatile int32_t t1 = -20;

	t1 = ((x5<=x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MIN;
	int32_t t2 = 727;

	t2 = ((x9<=x10)*(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint16_t x15 = 619U;
	uint64_t x16 = 1791625628934954799LLU;
	static volatile int32_t t3 = 435;

	t3 = ((x13<=x14)*(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -4;

	t4 = ((x17<=x18)*(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int16_t x22 = 0;
	static int16_t x23 = INT16_MAX;
	static int64_t x24 = 4987LL;
	static int32_t t5 = -108369288;

	t5 = ((x21<=x22)*(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = -1LL;
	static int32_t t6 = -1;

	t6 = ((x25<=x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	int16_t x31 = -1;
	volatile int32_t x32 = 769;
	volatile int32_t t7 = -108706950;

	t7 = ((x29<=x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = -1;
	int32_t x36 = 939;
	volatile int32_t t8 = 21371;

	t8 = ((x33<=x34)*(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = INT32_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 7;

	t9 = ((x37<=x38)*(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = 1593439;
	int32_t x43 = -1;
	static int8_t x44 = -3;
	volatile int32_t t10 = 55318;

	t10 = ((x41<=x42)*(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 74749844LLU;
	volatile int32_t x47 = INT32_MIN;
	static int16_t x48 = INT16_MAX;
	static int32_t t11 = 3;

	t11 = ((x45<=x46)*(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = -4027;
	uint16_t x51 = 122U;
	volatile int8_t x52 = 1;

	t12 = ((x49<=x50)*(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x56 = 81;
	volatile int32_t t13 = 217394400;

	t13 = ((x53<=x54)*(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 42415163U;
	static uint16_t x59 = UINT16_MAX;
	static int32_t x60 = 0;
	int32_t t14 = -3;

	t14 = ((x57<=x58)*(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -15946;
	int8_t x62 = INT8_MIN;
	static int32_t x63 = -1;
	int32_t t15 = -613;

	t15 = ((x61<=x62)*(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = 651;

	t16 = ((x65<=x66)*(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -964601LL;
	int16_t x70 = 487;
	volatile int8_t x71 = -1;
	uint16_t x72 = 14769U;

	t17 = ((x69<=x70)*(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	int32_t t18 = -9;

	t18 = ((x73<=x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x80 = 9196610056182316LL;
	volatile int32_t t19 = -373;

	t19 = ((x77<=x78)*(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 9813LLU;
	int64_t x82 = 0LL;
	int64_t x83 = -254118282606501184LL;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = -2867;

	t20 = ((x81<=x82)*(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = 0;
	static int64_t x87 = INT64_MAX;
	volatile int16_t x88 = INT16_MAX;
	int32_t t21 = 0;

	t21 = ((x85<=x86)*(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	uint16_t x90 = 0U;
	volatile uint16_t x91 = UINT16_MAX;
	uint64_t x92 = 2113812210111LLU;
	volatile int32_t t22 = -21990;

	t22 = ((x89<=x90)*(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -2;
	uint64_t x94 = 131LLU;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int32_t t23 = -2831748;

	t23 = ((x93<=x94)*(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = 79627328LL;
	static volatile uint64_t x99 = 157454762174546LLU;
	static int32_t t24 = -322;

	t24 = ((x97<=x98)*(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = 15LLU;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -1070712041;

	t25 = ((x101<=x102)*(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x108 = 4250236241076LL;
	static volatile int32_t t26 = -238753749;

	t26 = ((x105<=x106)*(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 84U;
	uint8_t x111 = UINT8_MAX;
	static int8_t x112 = INT8_MAX;
	int32_t t27 = -2696600;

	t27 = ((x109<=x110)*(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = INT16_MAX;
	int16_t x115 = -858;
	uint8_t x116 = 1U;
	static int32_t t28 = -1249514;

	t28 = ((x113<=x114)*(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = INT32_MIN;

	t29 = ((x117<=x118)*(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int16_t x123 = -670;
	uint32_t x124 = 108320U;
	int32_t t30 = -601962;

	t30 = ((x121<=x122)*(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 17491871490997LLU;
	int8_t x126 = INT8_MIN;
	int32_t t31 = 6;

	t31 = ((x125<=x126)*(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -201405116;
	uint64_t x131 = 3441948LLU;
	uint16_t x132 = 472U;
	static int32_t t32 = -189;

	t32 = ((x129<=x130)*(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -869237;
	static int16_t x134 = -1;
	static volatile uint16_t x135 = 5U;
	int32_t t33 = 752;

	t33 = ((x133<=x134)*(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 3U;
	uint64_t x139 = 1LLU;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = 1282;

	t34 = ((x137<=x138)*(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	static int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MAX;
	int64_t x144 = 7LL;
	volatile int32_t t35 = -54;

	t35 = ((x141<=x142)*(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static uint16_t x146 = 479U;
	static int8_t x147 = INT8_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x145<=x146)*(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	int16_t x152 = -1;
	int32_t t37 = 1;

	t37 = ((x149<=x150)*(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 3U;
	volatile uint8_t x154 = 0U;
	int32_t x155 = 4600123;
	int32_t t38 = -31070;

	t38 = ((x153<=x154)*(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	int16_t x159 = -3803;
	int16_t x160 = 2901;

	t39 = ((x157<=x158)*(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint8_t x162 = 3U;
	uint32_t x164 = 114U;
	int32_t t40 = 85767;

	t40 = ((x161<=x162)*(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	static volatile int32_t x168 = -248023380;
	volatile int32_t t41 = 380756;

	t41 = ((x165<=x166)*(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 40860430;
	static uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = 3;
	static volatile int32_t t42 = 449;

	t42 = ((x169<=x170)*(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -164145807404209LL;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = -1;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 31480415;

	t43 = ((x173<=x174)*(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	volatile int32_t x178 = 106308;
	int64_t x179 = 55LL;
	volatile int8_t x180 = 1;
	int32_t t44 = 0;

	t44 = ((x177<=x178)*(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 4U;
	int32_t x183 = -326;
	volatile int32_t t45 = -9260879;

	t45 = ((x181<=x182)*(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -12590;
	int16_t x186 = 1668;
	uint8_t x187 = UINT8_MAX;
	int32_t t46 = 48;

	t46 = ((x185<=x186)*(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = -874830816110832172LL;
	volatile int32_t x191 = INT32_MIN;
	int32_t x192 = -1;
	int32_t t47 = 1;

	t47 = ((x189<=x190)*(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = INT8_MAX;
	volatile int64_t x195 = 2135904932LL;
	uint8_t x196 = 75U;
	volatile int32_t t48 = 17922050;

	t48 = ((x193<=x194)*(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = 6273766;
	int64_t x199 = INT64_MIN;
	int32_t t49 = 1;

	t49 = ((x197<=x198)*(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 13U;
	static int16_t x203 = -126;
	volatile uint8_t x204 = 0U;
	volatile int32_t t50 = 1841047;

	t50 = ((x201<=x202)*(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = 0;
	uint16_t x207 = UINT16_MAX;

	t51 = ((x205<=x206)*(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static uint64_t x210 = 445LLU;
	int64_t x211 = INT64_MIN;
	int8_t x212 = 1;
	volatile int32_t t52 = -78646186;

	t52 = ((x209<=x210)*(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x214 = INT32_MIN;
	int8_t x216 = -1;
	volatile int32_t t53 = 12450;

	t53 = ((x213<=x214)*(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -406905446;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MAX;
	int32_t t54 = 156721098;

	t54 = ((x217<=x218)*(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 725U;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t55 = 206532999;

	t55 = ((x221<=x222)*(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int32_t x226 = -22902991;
	uint32_t x227 = 13U;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 23663954;

	t56 = ((x225<=x226)*(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 103982LL;
	uint32_t x230 = 131536U;
	uint8_t x231 = 57U;
	volatile int32_t t57 = -59948640;

	t57 = ((x229<=x230)*(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	uint64_t x234 = 67266064LLU;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = 487U;
	static int32_t t58 = 252;

	t58 = ((x233<=x234)*(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = UINT8_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -4;

	t59 = ((x237<=x238)*(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	int32_t x243 = -44027;
	uint64_t x244 = 15125277963LLU;
	int32_t t60 = 343157;

	t60 = ((x241<=x242)*(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 2064437690730003770LL;
	int8_t x246 = INT8_MIN;
	int64_t x247 = 98LL;
	uint64_t x248 = 6812LLU;
	volatile int32_t t61 = -513897440;

	t61 = ((x245<=x246)*(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x250 = UINT32_MAX;
	uint16_t x251 = UINT16_MAX;
	uint8_t x252 = 31U;
	int32_t t62 = 150358764;

	t62 = ((x249<=x250)*(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = 0;
	static int16_t x254 = INT16_MIN;
	int32_t x256 = -30738;

	t63 = ((x253<=x254)*(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile uint64_t x260 = UINT64_MAX;

	t64 = ((x257<=x258)*(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	uint32_t x262 = UINT32_MAX;
	static int16_t x263 = 1988;
	static uint32_t x264 = 691028368U;

	t65 = ((x261<=x262)*(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = UINT64_MAX;
	static int32_t x266 = -1;
	int64_t x267 = 2197334063393060LL;

	t66 = ((x265<=x266)*(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -6;
	static int64_t x270 = 2LL;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;
	static int32_t t67 = 17;

	t67 = ((x269<=x270)*(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 1;
	int64_t x274 = -3896165540LL;
	uint8_t x276 = UINT8_MAX;

	t68 = ((x273<=x274)*(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 2U;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MAX;
	uint16_t x280 = 801U;
	int32_t t69 = 8665184;

	t69 = ((x277<=x278)*(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x283 = INT16_MIN;
	volatile int32_t t70 = 222030271;

	t70 = ((x281<=x282)*(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = INT32_MIN;
	static volatile uint32_t x287 = 38790832U;
	int32_t t71 = 1;

	t71 = ((x285<=x286)*(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -255364608;
	int8_t x290 = 1;
	int32_t x291 = -1;
	int8_t x292 = -1;
	volatile int32_t t72 = -178012;

	t72 = ((x289<=x290)*(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1957U;
	int16_t x294 = INT16_MAX;
	uint64_t x295 = 113LLU;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 1;

	t73 = ((x293<=x294)*(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MAX;
	volatile int64_t x299 = INT64_MIN;
	int32_t t74 = 42;

	t74 = ((x297<=x298)*(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = -7083998;
	static int8_t x303 = INT8_MIN;
	static volatile int16_t x304 = 26;
	static int32_t t75 = 103;

	t75 = ((x301<=x302)*(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 62U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = -1;
	volatile int32_t t76 = 232;

	t76 = ((x305<=x306)*(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = UINT8_MAX;
	int64_t x311 = -323073LL;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = -27740;

	t77 = ((x309<=x310)*(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	static uint64_t x314 = UINT64_MAX;
	volatile int8_t x316 = 21;
	static int32_t t78 = 1035;

	t78 = ((x313<=x314)*(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	static volatile int32_t x320 = -409;
	volatile int32_t t79 = -2;

	t79 = ((x317<=x318)*(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 2U;
	int16_t x322 = -3882;
	static int32_t x323 = INT32_MAX;
	uint16_t x324 = 648U;
	volatile int32_t t80 = 103;

	t80 = ((x321<=x322)*(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = UINT16_MAX;
	static volatile int64_t x327 = 8LL;
	int64_t x328 = -76515095LL;
	volatile int32_t t81 = -14;

	t81 = ((x325<=x326)*(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -9;
	int8_t x330 = 63;
	int32_t x331 = -1;

	t82 = ((x329<=x330)*(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x334 = 121LL;
	int32_t x335 = -1;

	t83 = ((x333<=x334)*(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 45U;
	volatile int8_t x340 = INT8_MAX;

	t84 = ((x337<=x338)*(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;

	t85 = ((x341<=x342)*(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 41472061U;
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = -1LL;
	int32_t x348 = -1;
	volatile int32_t t86 = -118231121;

	t86 = ((x345<=x346)*(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 25769LLU;
	int16_t x351 = -1;
	int32_t t87 = -27;

	t87 = ((x349<=x350)*(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -1;
	uint8_t x355 = 1U;
	int8_t x356 = INT8_MAX;
	volatile int32_t t88 = -16079;

	t88 = ((x353<=x354)*(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile int64_t x358 = 367680338LL;

	t89 = ((x357<=x358)*(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 9174;
	int64_t x362 = INT64_MAX;
	static int32_t x364 = -46244094;

	t90 = ((x361<=x362)*(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x366 = 25U;
	int32_t t91 = -398603914;

	t91 = ((x365<=x366)*(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 101U;
	int8_t x370 = 0;
	uint64_t x371 = 173894844400932581LLU;
	static uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 55116110;

	t92 = ((x369<=x370)*(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int32_t x374 = -1;
	static uint64_t x375 = 3305790560003036LLU;
	volatile int8_t x376 = -23;

	t93 = ((x373<=x374)*(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -14787;
	volatile int32_t x378 = INT32_MIN;
	static uint16_t x379 = 117U;
	volatile uint32_t x380 = 1U;
	static int32_t t94 = -226310812;

	t94 = ((x377<=x378)*(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 2990428U;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = 8471U;
	static volatile int16_t x384 = -1;
	static volatile int32_t t95 = 173;

	t95 = ((x381<=x382)*(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x388 = INT8_MIN;
	int32_t t96 = 1887498;

	t96 = ((x385<=x386)*(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 13;
	int8_t x390 = -53;
	int32_t x391 = INT32_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 1338560;

	t97 = ((x389<=x390)*(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 5U;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;
	volatile int32_t t98 = 13;

	t98 = ((x393<=x394)*(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MAX;
	uint32_t x399 = 1097U;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -5;

	t99 = ((x397<=x398)*(x399==x400));

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

