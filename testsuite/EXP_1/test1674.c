#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int32_t x12 = INT32_MIN;
int32_t t2 = 1;
static uint64_t x14 = 113815043560206LLU;
volatile int16_t x16 = INT16_MAX;
int16_t x18 = -1;
int16_t x20 = INT16_MIN;
volatile int32_t x22 = INT32_MAX;
volatile int64_t x24 = INT64_MIN;
volatile uint64_t x26 = 3870171217037839740LLU;
static volatile int32_t t8 = -198758;
int16_t x41 = 251;
int8_t x43 = -1;
volatile int8_t x48 = 2;
int32_t t11 = -58234;
static uint32_t x50 = UINT32_MAX;
volatile int16_t x56 = -1;
static int32_t t15 = -16387321;
volatile int32_t x66 = 1;
uint64_t x67 = 799244156527LLU;
int32_t t17 = 1798;
static uint16_t x73 = 205U;
int32_t x74 = -1;
int32_t t18 = 1271;
int8_t x79 = 0;
volatile int32_t t19 = 826;
int16_t x84 = -1;
int16_t x86 = INT16_MAX;
int32_t x87 = -1;
int16_t x91 = INT16_MAX;
uint8_t x94 = 45U;
int16_t x95 = 648;
volatile uint16_t x99 = UINT16_MAX;
uint64_t x102 = UINT64_MAX;
volatile int32_t t25 = -617889;
volatile int32_t t26 = 174546838;
static int16_t x116 = INT16_MIN;
int32_t t28 = -90880016;
int8_t x121 = INT8_MIN;
int32_t x122 = INT32_MIN;
int8_t x123 = -1;
int32_t x143 = INT32_MAX;
volatile uint64_t x149 = 3LLU;
volatile int32_t t37 = -477;
int8_t x156 = 1;
uint32_t x157 = 3011872U;
int64_t x164 = 3LL;
uint8_t x175 = 3U;
int8_t x182 = 4;
int8_t x201 = 1;
int64_t x207 = INT64_MIN;
int8_t x214 = INT8_MIN;
int64_t x217 = -1LL;
int8_t x225 = INT8_MIN;
uint32_t x228 = 2015767U;
int32_t t57 = -256969;
volatile int64_t x234 = -8123LL;
volatile int32_t t58 = -1874;
int16_t x244 = 0;
static volatile int32_t t60 = -5;
volatile uint8_t x246 = 36U;
int32_t x252 = -45696;
static volatile int32_t t62 = -1;
int8_t x259 = -1;
uint16_t x264 = 24257U;
int16_t x267 = -1;
int32_t t66 = 66065;
volatile int32_t x272 = -114290139;
volatile int32_t t68 = 601131885;
volatile uint64_t x281 = 551LLU;
volatile int64_t x298 = INT64_MIN;
int32_t t74 = 3;
static int64_t x302 = INT64_MIN;
int16_t x307 = -1;
static uint32_t x308 = 45234U;
int32_t x312 = INT32_MAX;
int32_t t77 = -114;
uint8_t x314 = 0U;
uint8_t x316 = 23U;
int8_t x317 = INT8_MIN;
int64_t x322 = INT64_MAX;
uint8_t x326 = 3U;
static int16_t x331 = -1;
int32_t t82 = 255354;
static volatile int32_t x339 = INT32_MIN;
static uint64_t x340 = UINT64_MAX;
volatile int32_t t84 = 0;
uint8_t x342 = UINT8_MAX;
int64_t x349 = -1LL;
uint16_t x350 = 15178U;
int64_t x353 = -3639LL;
volatile int32_t x354 = INT32_MIN;
volatile int16_t x359 = -926;
int16_t x362 = 906;
static int16_t x367 = 453;
int8_t x369 = -30;
uint64_t x378 = 3LLU;
uint16_t x383 = 13860U;
static volatile int32_t t95 = 6890;
int64_t x386 = 261404LL;
int64_t x389 = INT64_MAX;
uint32_t x390 = 13U;
int32_t t97 = 8;
int8_t x395 = -1;


void f0(void) {
	int32_t x2 = INT32_MIN;
	uint64_t x3 = 18965660LLU;
	uint8_t x4 = 10U;
	volatile int32_t t0 = -86867876;

	t0 = (((x1<=x2)|x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static uint64_t x6 = 2342858182358671145LLU;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = -500865018;

	t1 = (((x5<=x6)|x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = -82LL;

	t2 = (((x9<=x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile int8_t x15 = INT8_MAX;
	volatile int32_t t3 = 33;

	t3 = (((x13<=x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 48372842;
	volatile int32_t x19 = INT32_MIN;
	int32_t t4 = 1078604;

	t4 = (((x17<=x18)|x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 3656LLU;
	uint64_t x23 = 1830LLU;
	static volatile int32_t t5 = 2910628;

	t5 = (((x21<=x22)|x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 523065;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 8;

	t6 = (((x25<=x26)|x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static int8_t x30 = 3;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -85;
	volatile int32_t t7 = 29;

	t7 = (((x29<=x30)|x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	uint64_t x35 = 15LLU;
	static int8_t x36 = -1;

	t8 = (((x33<=x34)|x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 187383LL;
	volatile uint8_t x38 = UINT8_MAX;
	static int16_t x39 = INT16_MIN;
	volatile int16_t x40 = -1212;
	volatile int32_t t9 = 992;

	t9 = (((x37<=x38)|x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	static int16_t x44 = INT16_MAX;
	int32_t t10 = -10;

	t10 = (((x41<=x42)|x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = -1LL;
	int64_t x47 = -1LL;

	t11 = (((x45<=x46)|x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = 1U;
	int32_t t12 = -477774061;

	t12 = (((x49<=x50)|x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 6334635019LLU;
	uint64_t x54 = 302712355723LLU;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t13 = 6739905;

	t13 = (((x53<=x54)|x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = -1;
	int16_t x59 = 9;
	static uint32_t x60 = 18U;
	volatile int32_t t14 = -1109;

	t14 = (((x57<=x58)|x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 371U;
	static int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = 23U;

	t15 = (((x61<=x62)|x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 987U;
	int32_t x68 = -1;
	volatile int32_t t16 = -2;

	t16 = (((x65<=x66)|x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -4;
	uint64_t x70 = 519349984468573LLU;
	int32_t x71 = INT32_MIN;
	volatile int64_t x72 = 45941868047480703LL;

	t17 = (((x69<=x70)|x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x75 = -1LL;
	static int16_t x76 = -5280;

	t18 = (((x73<=x74)|x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile int32_t x78 = INT32_MIN;
	int32_t x80 = INT32_MIN;

	t19 = (((x77<=x78)|x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int16_t x82 = 232;
	static uint16_t x83 = 3U;
	int32_t t20 = 712;

	t20 = (((x81<=x82)|x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	volatile uint16_t x88 = 125U;
	static volatile int32_t t21 = -52491952;

	t21 = (((x85<=x86)|x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = -1128;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 276249081;

	t22 = (((x89<=x90)|x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	static int8_t x96 = -17;
	int32_t t23 = 7;

	t23 = (((x93<=x94)|x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int32_t x98 = -1757;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 17078;

	t24 = (((x97<=x98)|x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;

	t25 = (((x101<=x102)|x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	volatile int64_t x106 = INT64_MIN;
	int16_t x107 = 180;
	uint8_t x108 = 27U;

	t26 = (((x105<=x106)|x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = -3;
	volatile int32_t x112 = -1;
	volatile int32_t t27 = 15713;

	t27 = (((x109<=x110)|x111)<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 28;
	static int8_t x114 = -1;
	int64_t x115 = -862565LL;

	t28 = (((x113<=x114)|x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = 99150LL;
	int32_t x118 = -729766511;
	int32_t x119 = INT32_MAX;
	volatile uint8_t x120 = 28U;
	int32_t t29 = 449642;

	t29 = (((x117<=x118)|x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = -1015;

	t30 = (((x121<=x122)|x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	int32_t x127 = -17;
	int16_t x128 = INT16_MAX;
	int32_t t31 = -2486;

	t31 = (((x125<=x126)|x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 10;
	int8_t x130 = -1;
	int32_t x131 = -1;
	int8_t x132 = -1;
	int32_t t32 = 4656821;

	t32 = (((x129<=x130)|x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 0U;
	uint64_t x134 = UINT64_MAX;
	uint16_t x135 = 3896U;
	static int64_t x136 = INT64_MIN;
	static int32_t t33 = 1;

	t33 = (((x133<=x134)|x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x138 = 61LLU;
	volatile uint64_t x139 = UINT64_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -1311759;

	t34 = (((x137<=x138)|x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	uint64_t x142 = 2266186165970476269LLU;
	static uint8_t x144 = 12U;
	volatile int32_t t35 = -5;

	t35 = (((x141<=x142)|x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 379U;
	int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	int32_t x148 = -1;
	int32_t t36 = 0;

	t36 = (((x145<=x146)|x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MAX;
	uint32_t x151 = 3548745U;
	volatile uint64_t x152 = UINT64_MAX;

	t37 = (((x149<=x150)|x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	volatile int32_t t38 = -5779253;

	t38 = (((x153<=x154)|x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = 19;
	int32_t x159 = 1940166;
	int8_t x160 = 17;
	volatile int32_t t39 = 54650;

	t39 = (((x157<=x158)|x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 1442U;
	int64_t x162 = -1LL;
	static int32_t x163 = -1;
	static int32_t t40 = 479122;

	t40 = (((x161<=x162)|x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x165 = 1115U;
	static volatile int64_t x166 = -16338LL;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = 826904702U;
	volatile int32_t t41 = -37;

	t41 = (((x165<=x166)|x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 9U;
	static int64_t x170 = -2042853284279081139LL;
	static volatile int32_t x171 = 3098234;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -4549720;

	t42 = (((x169<=x170)|x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MAX;
	uint64_t x176 = 879052647592726LLU;
	volatile int32_t t43 = -106;

	t43 = (((x173<=x174)|x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = -10783;
	static int16_t x179 = -15;
	volatile uint32_t x180 = 117698U;
	int32_t t44 = 667;

	t44 = (((x177<=x178)|x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 1;

	t45 = (((x181<=x182)|x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	uint8_t x186 = 64U;
	uint8_t x187 = 58U;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -3891;

	t46 = (((x185<=x186)|x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = INT32_MAX;
	int32_t t47 = 638839;

	t47 = (((x189<=x190)|x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 2;
	int16_t x194 = INT16_MIN;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = -591643335LL;
	int32_t t48 = -28679497;

	t48 = (((x193<=x194)|x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 4U;
	static int16_t x198 = -1;
	int32_t x199 = -1;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = -10;

	t49 = (((x197<=x198)|x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -1;
	static int32_t x203 = -1;
	int16_t x204 = 0;
	int32_t t50 = 1;

	t50 = (((x201<=x202)|x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 13;
	static int32_t x206 = INT32_MIN;
	volatile uint32_t x208 = 1757466U;
	static volatile int32_t t51 = 1;

	t51 = (((x205<=x206)|x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = -1;
	volatile int64_t x210 = INT64_MAX;
	int32_t x211 = 1619;
	int16_t x212 = 232;
	volatile int32_t t52 = 3599335;

	t52 = (((x209<=x210)|x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	volatile int32_t t53 = -27191;

	t53 = (((x213<=x214)|x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = -1021;
	static int16_t x219 = -15;
	static int16_t x220 = -3050;
	volatile int32_t t54 = -26;

	t54 = (((x217<=x218)|x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -880960567133388LL;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 66;

	t55 = (((x221<=x222)|x223)<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 9607U;
	volatile int8_t x227 = -1;
	int32_t t56 = 311598496;

	t56 = (((x225<=x226)|x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MIN;
	int64_t x231 = -49452LL;
	uint64_t x232 = UINT64_MAX;

	t57 = (((x229<=x230)|x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static volatile uint16_t x235 = UINT16_MAX;
	int8_t x236 = INT8_MAX;

	t58 = (((x233<=x234)|x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	volatile int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	int64_t x240 = -28LL;
	static volatile int32_t t59 = -3;

	t59 = (((x237<=x238)|x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	volatile int32_t x242 = INT32_MAX;
	static int64_t x243 = 10937705105072641LL;

	t60 = (((x241<=x242)|x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 1;
	int64_t x247 = INT64_MIN;
	volatile uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = 10132627;

	t61 = (((x245<=x246)|x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 10U;
	volatile uint8_t x250 = UINT8_MAX;
	static int32_t x251 = 3;

	t62 = (((x249<=x250)|x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	static int16_t x254 = INT16_MAX;
	static int16_t x255 = 31;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 53750203;

	t63 = (((x253<=x254)|x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int16_t x258 = -1;
	uint16_t x260 = 1052U;
	volatile int32_t t64 = 1;

	t64 = (((x257<=x258)|x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = 6U;
	static int8_t x263 = 6;
	int32_t t65 = 1535;

	t65 = (((x261<=x262)|x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	static int32_t x266 = INT32_MIN;
	uint32_t x268 = 6448150U;

	t66 = (((x265<=x266)|x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 0;
	volatile uint8_t x270 = 1U;
	volatile uint8_t x271 = UINT8_MAX;
	int32_t t67 = -38684235;

	t67 = (((x269<=x270)|x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	volatile int32_t x274 = 256136;
	static int32_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;

	t68 = (((x273<=x274)|x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 5U;
	int32_t x278 = 0;
	static int16_t x279 = 2787;
	volatile uint8_t x280 = 3U;
	int32_t t69 = -50755358;

	t69 = (((x277<=x278)|x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	volatile uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -14;

	t70 = (((x281<=x282)|x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 164U;
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 1687504922204486728LLU;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 267079254;

	t71 = (((x285<=x286)|x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	uint16_t x290 = 697U;
	int32_t x291 = 98285094;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -253887;

	t72 = (((x289<=x290)|x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	uint16_t x294 = 21U;
	int8_t x295 = -5;
	volatile int64_t x296 = -1LL;
	static volatile int32_t t73 = 6417;

	t73 = (((x293<=x294)|x295)<=x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	uint8_t x299 = 13U;
	int8_t x300 = 9;

	t74 = (((x297<=x298)|x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static uint64_t x303 = 12885621LLU;
	int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 12066;

	t75 = (((x301<=x302)|x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 7;
	uint64_t x306 = UINT64_MAX;
	volatile int32_t t76 = 11493898;

	t76 = (((x305<=x306)|x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 19U;
	int32_t x310 = INT32_MAX;
	uint32_t x311 = 2U;

	t77 = (((x309<=x310)|x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int64_t x315 = 381210533102529883LL;
	volatile int32_t t78 = 108;

	t78 = (((x313<=x314)|x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = UINT8_MAX;
	static volatile int16_t x319 = 44;
	static volatile uint8_t x320 = 28U;
	static volatile int32_t t79 = -92;

	t79 = (((x317<=x318)|x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = 50;
	uint64_t x323 = 1804163814LLU;
	volatile uint32_t x324 = 1483540731U;
	int32_t t80 = 967951982;

	t80 = (((x321<=x322)|x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile int32_t x327 = INT32_MIN;
	static uint8_t x328 = UINT8_MAX;
	static volatile int32_t t81 = -246;

	t81 = (((x325<=x326)|x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile int32_t x330 = INT32_MAX;
	volatile int32_t x332 = INT32_MIN;

	t82 = (((x329<=x330)|x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	volatile int32_t x335 = -1;
	volatile int64_t x336 = 190777615LL;
	volatile int32_t t83 = -5505;

	t83 = (((x333<=x334)|x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int32_t x338 = -1;

	t84 = (((x337<=x338)|x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = 2310;
	int64_t x343 = -22754880911735536LL;
	int32_t x344 = -202;
	volatile int32_t t85 = -5926;

	t85 = (((x341<=x342)|x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MAX;
	volatile int8_t x348 = -31;
	int32_t t86 = 23220;

	t86 = (((x345<=x346)|x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 94929;

	t87 = (((x349<=x350)|x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = INT32_MIN;
	int32_t t88 = -835923;

	t88 = (((x353<=x354)|x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = 0;
	int32_t x358 = INT32_MAX;
	int8_t x360 = -1;
	volatile int32_t t89 = 1260522;

	t89 = (((x357<=x358)|x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 0U;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;
	int32_t t90 = -9552;

	t90 = (((x361<=x362)|x363)<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -126;
	static int8_t x366 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = 5;

	t91 = (((x365<=x366)|x367)<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = 1;
	static uint16_t x371 = 2U;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 12971382;

	t92 = (((x369<=x370)|x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 6614868734LL;
	static int64_t x374 = -1237268LL;
	int8_t x375 = -1;
	int32_t x376 = INT32_MAX;
	int32_t t93 = 833077448;

	t93 = (((x373<=x374)|x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 5;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = -31;

	t94 = (((x377<=x378)|x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int8_t x382 = 0;
	static int64_t x384 = -489LL;

	t95 = (((x381<=x382)|x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int32_t x387 = -82911076;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -146748;

	t96 = (((x385<=x386)|x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x391 = UINT32_MAX;
	volatile int64_t x392 = INT64_MIN;

	t97 = (((x389<=x390)|x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = 749355U;
	static volatile int32_t t98 = -3940;

	t98 = (((x393<=x394)|x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MIN;
	static int64_t x400 = -400269LL;
	int32_t t99 = -1;

	t99 = (((x397<=x398)|x399)<=x400);

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

