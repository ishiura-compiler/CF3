#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int32_t t1 = -3140120;
uint16_t x10 = 13114U;
volatile int32_t t5 = -2;
static int32_t t6 = -4921479;
uint64_t x34 = UINT64_MAX;
uint32_t x35 = UINT32_MAX;
uint64_t x38 = 816639358LLU;
volatile int32_t t10 = 0;
uint16_t x61 = 0U;
int32_t t15 = -14;
static uint64_t x71 = 46272531986LLU;
int32_t t17 = 195;
int16_t x73 = INT16_MIN;
int32_t t18 = 1;
int32_t x78 = -1;
int16_t x79 = INT16_MIN;
volatile int32_t t19 = 1;
static volatile int32_t t24 = 7;
uint16_t x102 = 204U;
volatile uint8_t x103 = 33U;
int8_t x109 = 1;
int32_t t27 = -2;
volatile int8_t x121 = INT8_MIN;
volatile int64_t x122 = INT64_MIN;
int32_t t30 = 0;
static uint64_t x125 = 60949LLU;
int32_t x132 = INT32_MIN;
int32_t t34 = 2695;
int64_t x144 = INT64_MIN;
int64_t x156 = INT64_MAX;
static int32_t t40 = -188291;
uint8_t x166 = 15U;
int8_t x171 = INT8_MIN;
volatile uint64_t x173 = 9363126LLU;
int8_t x174 = -18;
int32_t x176 = INT32_MIN;
uint16_t x178 = 3480U;
volatile int32_t t45 = -1840;
uint32_t x187 = 29U;
uint16_t x191 = 8111U;
uint16_t x194 = UINT16_MAX;
int64_t x197 = INT64_MAX;
volatile int32_t t52 = 26821;
int32_t x216 = INT32_MIN;
static volatile int32_t t54 = -69462;
int16_t x221 = INT16_MAX;
int16_t x222 = -23;
volatile int32_t t55 = 43;
uint8_t x227 = 11U;
volatile int16_t x230 = -238;
static int16_t x238 = -1;
volatile int16_t x239 = 40;
uint8_t x240 = 88U;
int32_t t59 = 616731299;
static uint32_t x253 = 44470U;
uint8_t x254 = UINT8_MAX;
static int16_t x256 = INT16_MIN;
uint16_t x261 = 271U;
static int8_t x264 = 1;
int8_t x265 = 7;
static int64_t x268 = INT64_MAX;
uint64_t x271 = 589200LLU;
static uint64_t x276 = 162254615375276079LLU;
volatile int32_t t68 = -100981;
volatile int8_t x281 = INT8_MAX;
static int32_t x282 = INT32_MIN;
static volatile int64_t x283 = -38001723LL;
volatile int32_t t70 = -221972685;
int32_t x287 = INT32_MIN;
volatile int8_t x290 = INT8_MAX;
volatile int64_t x297 = 1004083407338991471LL;
volatile int64_t x301 = 1780087956LL;
int32_t t75 = -119965;
int16_t x310 = INT16_MAX;
int16_t x317 = INT16_MIN;
int64_t x323 = -679062836LL;
int64_t x327 = 1892459LL;
int32_t t84 = -229348387;
int32_t x345 = -1;
volatile int16_t x353 = INT16_MIN;
volatile int32_t x358 = INT32_MIN;
int64_t x359 = INT64_MAX;
uint32_t x368 = UINT32_MAX;
uint64_t x373 = 117503561996380633LLU;
int32_t x380 = INT32_MIN;
int32_t x382 = -7671;
int16_t x387 = INT16_MAX;
int32_t t96 = -3;
static volatile int32_t t97 = -4797;
int32_t x395 = 431;
int32_t x398 = INT32_MAX;
volatile int32_t t99 = -41;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = 794532418;

	t0 = (((x1<=x2)^x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -3189266439LL;
	int8_t x6 = 0;
	uint32_t x7 = UINT32_MAX;
	volatile int8_t x8 = -1;

	t1 = (((x5<=x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x11 = -1759;
	static int16_t x12 = INT16_MAX;
	static int32_t t2 = -1881;

	t2 = (((x9<=x10)^x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 7261855U;
	uint16_t x14 = 873U;
	int32_t x15 = 21;
	int64_t x16 = -1LL;
	int32_t t3 = 72400;

	t3 = (((x13<=x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2999289U;
	int32_t x18 = -2;
	uint16_t x19 = 25416U;
	static int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -425870163;

	t4 = (((x17<=x18)^x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MIN;
	volatile int16_t x23 = INT16_MIN;
	static int16_t x24 = INT16_MIN;

	t5 = (((x21<=x22)^x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = UINT64_MAX;
	static int32_t x26 = INT32_MIN;
	int64_t x27 = -1LL;
	int64_t x28 = INT64_MAX;

	t6 = (((x25<=x26)^x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	int32_t x30 = -566923;
	int8_t x31 = INT8_MIN;
	volatile uint8_t x32 = 18U;
	int32_t t7 = 3862;

	t7 = (((x29<=x30)^x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x36 = -1;
	static int32_t t8 = -36619;

	t8 = (((x33<=x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	static int8_t x39 = 10;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -7;

	t9 = (((x37<=x38)^x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x42 = 21U;
	static int64_t x43 = INT64_MIN;
	static volatile int64_t x44 = 100LL;

	t10 = (((x41<=x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	volatile int32_t x46 = 0;
	uint8_t x47 = UINT8_MAX;
	volatile uint32_t x48 = 2643656U;
	int32_t t11 = 950;

	t11 = (((x45<=x46)^x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 504U;
	int16_t x50 = INT16_MIN;
	static int8_t x51 = -2;
	static int16_t x52 = -4376;
	static int32_t t12 = 27;

	t12 = (((x49<=x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int8_t x54 = INT8_MAX;
	static volatile int8_t x55 = 20;
	uint64_t x56 = UINT64_MAX;
	static int32_t t13 = -8407890;

	t13 = (((x53<=x54)^x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	uint64_t x58 = 13537706293940LLU;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = -1;
	static volatile int32_t t14 = -77678;

	t14 = (((x57<=x58)^x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	static int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;

	t15 = (((x61<=x62)^x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -649;
	int64_t x66 = -1LL;
	volatile int64_t x67 = INT64_MIN;
	volatile int8_t x68 = -2;
	volatile int32_t t16 = 41091188;

	t16 = (((x65<=x66)^x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 1;
	uint32_t x70 = 115U;
	static int32_t x72 = -1;

	t17 = (((x69<=x70)^x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;

	t18 = (((x73<=x74)^x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static int32_t x80 = 51153;

	t19 = (((x77<=x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 0U;
	int16_t x82 = INT16_MIN;
	int16_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t20 = 121600;

	t20 = (((x81<=x82)^x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 738825;
	int16_t x86 = 73;
	uint32_t x87 = 149083906U;
	int32_t x88 = INT32_MAX;
	static volatile int32_t t21 = 668311235;

	t21 = (((x85<=x86)^x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = 13U;
	static int64_t x92 = INT64_MAX;
	int32_t t22 = 8351;

	t22 = (((x89<=x90)^x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -2;
	uint32_t x94 = 234U;
	int16_t x95 = INT16_MIN;
	static volatile uint8_t x96 = 24U;
	volatile int32_t t23 = -14372310;

	t23 = (((x93<=x94)^x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 13U;
	volatile uint16_t x98 = 1306U;
	uint16_t x99 = 0U;
	uint32_t x100 = 50594704U;

	t24 = (((x97<=x98)^x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -351LL;
	uint16_t x104 = 6650U;
	volatile int32_t t25 = -316;

	t25 = (((x101<=x102)^x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	volatile int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = -735557;

	t26 = (((x105<=x106)^x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	int64_t x112 = -1LL;

	t27 = (((x109<=x110)^x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 2771U;
	int32_t x114 = INT32_MAX;
	uint16_t x115 = 1U;
	static volatile int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = -26883;

	t28 = (((x113<=x114)^x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	uint8_t x118 = UINT8_MAX;
	static uint8_t x119 = 11U;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -240876;

	t29 = (((x117<=x118)^x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;

	t30 = (((x121<=x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MAX;
	int16_t x127 = -162;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t31 = -5;

	t31 = (((x125<=x126)^x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = 19;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	int32_t t32 = -2037;

	t32 = (((x129<=x130)^x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 186941U;
	int8_t x134 = -8;
	uint64_t x135 = 92LLU;
	int16_t x136 = -1;
	volatile int32_t t33 = -580;

	t33 = (((x133<=x134)^x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	static uint16_t x138 = 2912U;
	int16_t x139 = -1;
	uint8_t x140 = UINT8_MAX;

	t34 = (((x137<=x138)^x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 16691359U;
	int64_t x142 = INT64_MIN;
	int32_t x143 = 26108799;
	volatile int32_t t35 = 4986188;

	t35 = (((x141<=x142)^x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -7654275LL;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MAX;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t36 = -448;

	t36 = (((x145<=x146)^x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 203LLU;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	static int64_t x152 = INT64_MAX;
	static int32_t t37 = -114414;

	t37 = (((x149<=x150)^x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 652179LLU;
	volatile int16_t x154 = 209;
	volatile int64_t x155 = INT64_MIN;
	volatile int32_t t38 = -7320;

	t38 = (((x153<=x154)^x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MAX;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 909;

	t39 = (((x157<=x158)^x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = -28995;
	int32_t x163 = -1;
	static int16_t x164 = INT16_MAX;

	t40 = (((x161<=x162)^x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	uint32_t x168 = 46U;
	int32_t t41 = -5872594;

	t41 = (((x165<=x166)^x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 123U;
	uint32_t x170 = 97335135U;
	int32_t x172 = INT32_MAX;
	static volatile int32_t t42 = -1777790;

	t42 = (((x169<=x170)^x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x175 = 9U;
	volatile int32_t t43 = 530822945;

	t43 = (((x173<=x174)^x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = INT32_MAX;
	static int32_t x179 = -1;
	static volatile uint16_t x180 = 326U;
	int32_t t44 = 430;

	t44 = (((x177<=x178)^x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	static uint32_t x184 = UINT32_MAX;

	t45 = (((x181<=x182)^x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 4U;
	int64_t x186 = INT64_MIN;
	uint16_t x188 = UINT16_MAX;
	static volatile int32_t t46 = 1619361;

	t46 = (((x185<=x186)^x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int32_t x190 = 1686975;
	volatile int8_t x192 = INT8_MIN;
	volatile int32_t t47 = 55391;

	t47 = (((x189<=x190)^x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int16_t x195 = INT16_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	int32_t t48 = -3831031;

	t48 = (((x193<=x194)^x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = UINT16_MAX;
	int8_t x199 = 0;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -24;

	t49 = (((x197<=x198)^x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int64_t x203 = -16891329118341LL;
	volatile int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 2;

	t50 = (((x201<=x202)^x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 1U;
	int32_t x207 = -1;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = 23;

	t51 = (((x205<=x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	int8_t x210 = INT8_MIN;
	static int8_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;

	t52 = (((x209<=x210)^x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -7;
	int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MAX;
	volatile int32_t t53 = 1;

	t53 = (((x213<=x214)^x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 85U;
	uint16_t x218 = 3656U;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;

	t54 = (((x217<=x218)^x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x223 = 1U;
	uint8_t x224 = UINT8_MAX;

	t55 = (((x221<=x222)^x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = UINT64_MAX;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -19;

	t56 = (((x225<=x226)^x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 4684072;

	t57 = (((x229<=x230)^x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 54U;
	int64_t x234 = -1LL;
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = 1LLU;
	volatile int32_t t58 = 28;

	t58 = (((x233<=x234)^x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;

	t59 = (((x237<=x238)^x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 132130846730LLU;
	int32_t x243 = -1;
	int32_t x244 = 0;
	int32_t t60 = -2;

	t60 = (((x241<=x242)^x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	volatile int32_t x248 = INT32_MIN;
	static int32_t t61 = 4912;

	t61 = (((x245<=x246)^x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x250 = 1095U;
	int16_t x251 = INT16_MIN;
	volatile uint64_t x252 = 151880LLU;
	volatile int32_t t62 = 3181148;

	t62 = (((x249<=x250)^x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = -59;
	volatile int32_t t63 = 159;

	t63 = (((x253<=x254)^x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 1U;
	static uint64_t x258 = 2LLU;
	static int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 661;

	t64 = (((x257<=x258)^x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -10050;
	static int64_t x263 = INT64_MAX;
	static volatile int32_t t65 = -93204971;

	t65 = (((x261<=x262)^x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 6056U;
	volatile int64_t x267 = -1LL;
	int32_t t66 = 535;

	t66 = (((x265<=x266)^x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 779573640762LLU;
	uint8_t x270 = UINT8_MAX;
	volatile uint16_t x272 = 9921U;
	int32_t t67 = 6522694;

	t67 = (((x269<=x270)^x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile uint32_t x274 = 12U;
	static int16_t x275 = INT16_MAX;

	t68 = (((x273<=x274)^x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1979088831733747LL;
	uint8_t x278 = 14U;
	uint8_t x279 = 7U;
	uint8_t x280 = 9U;
	volatile int32_t t69 = -95;

	t69 = (((x277<=x278)^x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x284 = 38U;

	t70 = (((x281<=x282)^x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 0;

	t71 = (((x285<=x286)^x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 1;
	int8_t x291 = INT8_MIN;
	static int16_t x292 = 1;
	volatile int32_t t72 = -16953777;

	t72 = (((x289<=x290)^x291)<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 29495638590218LLU;
	volatile int64_t x294 = INT64_MIN;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = -20635;

	t73 = (((x293<=x294)^x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 0U;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 6;

	t74 = (((x297<=x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;

	t75 = (((x301<=x302)^x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = -947;
	static int32_t x307 = -1;
	uint64_t x308 = 98302945452590598LLU;
	volatile int32_t t76 = 0;

	t76 = (((x305<=x306)^x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -377;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -4093;
	int32_t t77 = 400086183;

	t77 = (((x309<=x310)^x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int32_t x314 = -1023357;
	int32_t x315 = -1;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -1212;

	t78 = (((x313<=x314)^x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -31770485;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -8871;

	t79 = (((x317<=x318)^x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	static int16_t x322 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t80 = -105060;

	t80 = (((x321<=x322)^x323)<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile uint16_t x326 = 316U;
	int16_t x328 = 7;
	static int32_t t81 = 256067814;

	t81 = (((x325<=x326)^x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 909;
	int8_t x330 = -1;
	volatile int8_t x331 = -1;
	static int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -1552;

	t82 = (((x329<=x330)^x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -72;
	volatile int8_t x334 = 3;
	int64_t x335 = INT64_MIN;
	volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = 1;

	t83 = (((x333<=x334)^x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = 61047173LLU;
	int64_t x339 = INT64_MIN;
	uint64_t x340 = 2045160732234LLU;

	t84 = (((x337<=x338)^x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int32_t x342 = -1669930;
	uint16_t x343 = 211U;
	uint32_t x344 = 161849U;
	static volatile int32_t t85 = -821;

	t85 = (((x341<=x342)^x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 7229386342LLU;
	static uint64_t x347 = UINT64_MAX;
	static int32_t x348 = 933604;
	static volatile int32_t t86 = 420258156;

	t86 = (((x345<=x346)^x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MAX;
	uint64_t x350 = 24772120648389LLU;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = 21168235U;
	int32_t t87 = -21;

	t87 = (((x349<=x350)^x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	uint16_t x355 = 6951U;
	int64_t x356 = INT64_MAX;
	int32_t t88 = 254081454;

	t88 = (((x353<=x354)^x355)<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	volatile int64_t x360 = -1LL;
	static int32_t t89 = -1773;

	t89 = (((x357<=x358)^x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 18U;
	volatile uint64_t x362 = UINT64_MAX;
	uint32_t x363 = 1600435U;
	uint8_t x364 = 8U;
	volatile int32_t t90 = 27;

	t90 = (((x361<=x362)^x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	volatile int16_t x367 = INT16_MAX;
	int32_t t91 = 7661;

	t91 = (((x365<=x366)^x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 14U;
	int32_t x370 = -1;
	int64_t x371 = INT64_MIN;
	static uint8_t x372 = 1U;
	static int32_t t92 = 547947;

	t92 = (((x369<=x370)^x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 27492316545LLU;
	int32_t t93 = 1689;

	t93 = (((x373<=x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	static uint16_t x378 = 9209U;
	int32_t x379 = INT32_MIN;
	volatile int32_t t94 = 1912;

	t94 = (((x377<=x378)^x379)<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	uint16_t x383 = 2078U;
	volatile int64_t x384 = INT64_MAX;
	volatile int32_t t95 = 3885333;

	t95 = (((x381<=x382)^x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MIN;
	static int16_t x386 = -8773;
	uint64_t x388 = 170461257641293LLU;

	t96 = (((x385<=x386)^x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -49LL;
	int8_t x390 = 8;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MIN;

	t97 = (((x389<=x390)^x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -3170621;

	t98 = (((x393<=x394)^x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static int16_t x399 = -1;
	int16_t x400 = INT16_MAX;

	t99 = (((x397<=x398)^x399)<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

