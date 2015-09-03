#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int32_t x4 = INT32_MIN;
int8_t x7 = INT8_MIN;
int16_t x11 = 847;
int32_t t2 = -44837945;
int32_t t4 = 90337;
volatile int32_t t5 = -15903;
static uint8_t x26 = UINT8_MAX;
int32_t t6 = -37400607;
volatile uint64_t x29 = 14LLU;
static volatile uint32_t x31 = 7U;
volatile int16_t x32 = INT16_MIN;
int32_t x35 = 362097891;
static volatile int8_t x54 = INT8_MIN;
uint8_t x60 = 125U;
int64_t x64 = INT64_MAX;
int32_t x66 = 70424;
int32_t x67 = INT32_MAX;
volatile int64_t x68 = INT64_MAX;
volatile uint64_t x69 = UINT64_MAX;
int64_t x70 = INT64_MAX;
int16_t x71 = 60;
int16_t x73 = -1;
static volatile int16_t x77 = INT16_MAX;
uint8_t x83 = UINT8_MAX;
uint32_t x89 = 2639174U;
uint32_t x92 = 28003U;
volatile int32_t t22 = -19047262;
int32_t x98 = -1;
uint16_t x120 = 4681U;
static int32_t x146 = INT32_MIN;
volatile int32_t t34 = -2;
static int64_t x159 = INT64_MIN;
uint16_t x161 = UINT16_MAX;
volatile int32_t t38 = 33401797;
int32_t x165 = 63;
int64_t x169 = -2188127653950817091LL;
int32_t t40 = -30769820;
volatile int8_t x175 = -1;
static int32_t t41 = -897685755;
uint16_t x180 = 120U;
static volatile uint16_t x190 = 514U;
int8_t x191 = -7;
int32_t t45 = 3095907;
int32_t t47 = 804;
int32_t x206 = INT32_MIN;
uint8_t x209 = 25U;
uint16_t x212 = 1U;
static uint64_t x221 = 1523074LLU;
static int8_t x225 = -1;
int32_t x226 = -1;
uint8_t x229 = 1U;
volatile uint8_t x234 = 4U;
volatile int16_t x236 = -1;
uint16_t x237 = 94U;
int8_t x239 = -1;
volatile int32_t t57 = 14081;
static volatile uint16_t x250 = 1521U;
int8_t x251 = 48;
int32_t x252 = INT32_MIN;
int32_t x256 = INT32_MIN;
static int8_t x257 = -2;
static int8_t x258 = -44;
volatile int8_t x259 = -1;
volatile int32_t t62 = 0;
uint16_t x268 = 2720U;
int32_t t64 = 1785;
uint32_t x282 = UINT32_MAX;
volatile int8_t x287 = INT8_MAX;
int16_t x289 = -2;
uint64_t x290 = UINT64_MAX;
int16_t x293 = -46;
uint8_t x298 = UINT8_MAX;
int64_t x302 = 9784473183971526LL;
int32_t x308 = 26954270;
uint16_t x310 = 108U;
int64_t x311 = -366191865472LL;
volatile int32_t t78 = 43315;
uint16_t x325 = 4385U;
static uint8_t x331 = UINT8_MAX;
volatile int32_t t80 = -766;
int32_t t82 = 0;
uint8_t x344 = 3U;
static volatile int32_t t83 = -620321;
static uint16_t x347 = 217U;
volatile int32_t t85 = -456434;
int32_t t88 = -1;
int16_t x367 = INT16_MIN;
uint64_t x372 = 17028762658929LLU;
int32_t t91 = 71000;
int16_t x379 = 0;
static int64_t x380 = 199204150360344LL;
static int8_t x392 = -15;
static volatile int64_t x397 = INT64_MIN;
int32_t x406 = 625643;


void f0(void) {
	volatile int64_t x2 = INT64_MIN;
	uint16_t x3 = 2U;
	int32_t t0 = -30;

	t0 = (x1==((x2|x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -66747103LL;
	int64_t x6 = 13517LL;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 28279;

	t1 = (x5==((x6|x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 12U;
	uint64_t x10 = 298292497258823LLU;
	static volatile int8_t x12 = INT8_MIN;

	t2 = (x9==((x10|x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 23;
	volatile int16_t x14 = INT16_MIN;
	uint32_t x15 = UINT32_MAX;
	static uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -158377;

	t3 = (x13==((x14|x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x18 = 483U;
	int16_t x19 = 3;
	static int16_t x20 = INT16_MAX;

	t4 = (x17==((x18|x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int32_t x22 = -12360663;
	volatile int8_t x23 = INT8_MAX;
	uint16_t x24 = 1795U;

	t5 = (x21==((x22|x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	static uint8_t x27 = 47U;
	int64_t x28 = INT64_MAX;

	t6 = (x25==((x26|x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MIN;
	volatile int32_t t7 = -2;

	t7 = (x29==((x30|x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -33489311;
	volatile int8_t x34 = INT8_MIN;
	int16_t x36 = -6;
	static volatile int32_t t8 = 60;

	t8 = (x33==((x34|x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	static uint8_t x38 = UINT8_MAX;
	uint64_t x39 = 167432654721LLU;
	static int64_t x40 = -481754615727LL;
	int32_t t9 = -177;

	t9 = (x37==((x38|x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 664U;
	int8_t x46 = INT8_MIN;
	static uint32_t x47 = 1066U;
	volatile int64_t x48 = INT64_MAX;
	int32_t t10 = -63031275;

	t10 = (x45==((x46|x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 18U;
	uint8_t x50 = 0U;
	int64_t x51 = INT64_MIN;
	volatile int32_t x52 = INT32_MIN;
	int32_t t11 = -2;

	t11 = (x49==((x50|x51)%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = 14LL;
	volatile int32_t x55 = INT32_MAX;
	volatile int16_t x56 = -1;
	volatile int32_t t12 = 576724573;

	t12 = (x53==((x54|x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int64_t x58 = INT64_MAX;
	int32_t x59 = -1;
	static volatile int32_t t13 = -8389;

	t13 = (x57==((x58|x59)%x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = UINT16_MAX;
	static volatile int8_t x63 = -50;
	int32_t t14 = 426;

	t14 = (x61==((x62|x63)%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	static int32_t t15 = 433198946;

	t15 = (x65==((x66|x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x72 = 21373U;
	static volatile int32_t t16 = 790495242;

	t16 = (x69==((x70|x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	volatile int16_t x75 = 6;
	uint64_t x76 = 472LLU;
	int32_t t17 = -19129275;

	t17 = (x73==((x74|x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = 145221341136603LLU;
	int32_t t18 = 1;

	t18 = (x77==((x78|x79)%x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	int64_t x84 = -8587829219819028LL;
	volatile int32_t t19 = -6350725;

	t19 = (x81==((x82|x83)%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -79083999;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	int8_t x88 = 6;
	volatile int32_t t20 = -882;

	t20 = (x85==((x86|x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x90 = 0U;
	int8_t x91 = INT8_MAX;
	static int32_t t21 = -401814685;

	t21 = (x89==((x90|x91)%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 1507390949363654356LLU;
	int16_t x94 = -8;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;

	t22 = (x93==((x94|x95)%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	volatile int8_t x99 = 3;
	static int8_t x100 = INT8_MIN;
	int32_t t23 = 85593;

	t23 = (x97==((x98|x99)%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x101 = UINT8_MAX;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = 3998990608LLU;
	int32_t t24 = 543853523;

	t24 = (x101==((x102|x103)%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	volatile int32_t x106 = INT32_MAX;
	int8_t x107 = INT8_MAX;
	int32_t x108 = INT32_MAX;
	static int32_t t25 = -3942;

	t25 = (x105==((x106|x107)%x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = 28U;
	static int8_t x114 = INT8_MIN;
	volatile int64_t x115 = 889400955LL;
	uint64_t x116 = 541862060LLU;
	static int32_t t26 = 16;

	t26 = (x113==((x114|x115)%x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x117 = -1;
	uint64_t x118 = 90612148LLU;
	int32_t x119 = INT32_MIN;
	volatile int32_t t27 = 8279964;

	t27 = (x117==((x118|x119)%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = -1LL;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = -1;
	int32_t x124 = INT32_MAX;
	int32_t t28 = -153361511;

	t28 = (x121==((x122|x123)%x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -6;
	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = -234;
	int32_t x128 = -1;
	int32_t t29 = -12429985;

	t29 = (x125==((x126|x127)%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	int32_t x131 = 240192;
	int16_t x132 = INT16_MAX;
	volatile int32_t t30 = 1196890;

	t30 = (x129==((x130|x131)%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	uint64_t x134 = 2423853022286576109LLU;
	int64_t x135 = -28381562LL;
	int16_t x136 = 1;
	volatile int32_t t31 = -48;

	t31 = (x133==((x134|x135)%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -121254137;
	static int64_t x138 = -515466021037473373LL;
	int8_t x139 = INT8_MAX;
	int32_t x140 = -1465792;
	int32_t t32 = 1057;

	t32 = (x137==((x138|x139)%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = -1;
	int64_t x142 = INT64_MAX;
	static int16_t x143 = -1;
	int64_t x144 = INT64_MAX;
	static int32_t t33 = 57;

	t33 = (x141==((x142|x143)%x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	int64_t x147 = INT64_MIN;
	static volatile uint8_t x148 = 79U;

	t34 = (x145==((x146|x147)%x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 100;
	uint16_t x150 = 49U;
	volatile uint16_t x151 = UINT16_MAX;
	static uint64_t x152 = 75997LLU;
	volatile int32_t t35 = 289;

	t35 = (x149==((x150|x151)%x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x153 = INT32_MIN;
	int64_t x154 = -1LL;
	int32_t x155 = 75834;
	uint64_t x156 = 22LLU;
	static int32_t t36 = -6;

	t36 = (x153==((x154|x155)%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = 4133LL;
	uint32_t x158 = 6685807U;
	volatile int64_t x160 = -1LL;
	volatile int32_t t37 = 297;

	t37 = (x157==((x158|x159)%x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = INT64_MIN;
	uint16_t x163 = 2930U;
	uint8_t x164 = 7U;

	t38 = (x161==((x162|x163)%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = -1;
	volatile int32_t t39 = -14056;

	t39 = (x165==((x166|x167)%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x170 = 6388173;
	uint64_t x171 = 3761084LLU;
	int32_t x172 = INT32_MIN;

	t40 = (x169==((x170|x171)%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = 26;
	uint16_t x176 = 4309U;

	t41 = (x173==((x174|x175)%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = 4555;
	static int64_t x178 = INT64_MIN;
	uint8_t x179 = 43U;
	volatile int32_t t42 = 4;

	t42 = (x177==((x178|x179)%x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -6;
	int32_t x182 = -1;
	static int32_t x183 = INT32_MAX;
	volatile int32_t x184 = -1;
	volatile int32_t t43 = 455;

	t43 = (x181==((x182|x183)%x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MAX;
	uint64_t x187 = 910588851LLU;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = 439472177;

	t44 = (x185==((x186|x187)%x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x189 = 200U;
	uint64_t x192 = 46383LLU;

	t45 = (x189==((x190|x191)%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = 861;
	uint32_t x194 = 7390U;
	uint16_t x195 = 127U;
	int16_t x196 = INT16_MAX;
	static int32_t t46 = -1361;

	t46 = (x193==((x194|x195)%x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = -49180;
	uint16_t x198 = 10088U;
	int16_t x199 = 1226;
	uint16_t x200 = 527U;

	t47 = (x197==((x198|x199)%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = -39993400435206628LL;
	static int8_t x202 = 2;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = -235565511057998LL;
	volatile int32_t t48 = 90;

	t48 = (x201==((x202|x203)%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x205 = 38U;
	int8_t x207 = 2;
	volatile uint64_t x208 = UINT64_MAX;
	int32_t t49 = 40;

	t49 = (x205==((x206|x207)%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MAX;
	volatile int32_t t50 = -71567;

	t50 = (x209==((x210|x211)%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 56U;
	volatile int8_t x214 = -1;
	int32_t x215 = INT32_MAX;
	uint8_t x216 = 11U;
	static volatile int32_t t51 = -1737;

	t51 = (x213==((x214|x215)%x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 7U;
	volatile uint16_t x218 = UINT16_MAX;
	uint8_t x219 = 81U;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t52 = -1050478087;

	t52 = (x217==((x218|x219)%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x222 = -1LL;
	uint64_t x223 = 868148885887LLU;
	static int64_t x224 = INT64_MIN;
	volatile int32_t t53 = 972666727;

	t53 = (x221==((x222|x223)%x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MAX;
	static volatile int32_t t54 = 785437;

	t54 = (x225==((x226|x227)%x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x230 = -1;
	volatile int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t55 = -22551842;

	t55 = (x229==((x230|x231)%x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = INT32_MIN;
	int16_t x235 = -1;
	int32_t t56 = 13399;

	t56 = (x233==((x234|x235)%x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = INT64_MIN;
	int32_t x240 = INT32_MAX;

	t57 = (x237==((x238|x239)%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x241 = UINT32_MAX;
	int8_t x242 = INT8_MIN;
	static uint64_t x243 = UINT64_MAX;
	volatile int8_t x244 = -1;
	volatile int32_t t58 = 1543;

	t58 = (x241==((x242|x243)%x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 3068U;
	static int8_t x246 = 0;
	static uint8_t x247 = UINT8_MAX;
	int16_t x248 = -12361;
	static volatile int32_t t59 = 572296;

	t59 = (x245==((x246|x247)%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 29U;
	int32_t t60 = 438;

	t60 = (x249==((x250|x251)%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 9211U;
	static uint32_t x254 = UINT32_MAX;
	volatile uint8_t x255 = 2U;
	int32_t t61 = -38;

	t61 = (x253==((x254|x255)%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x260 = -3;

	t62 = (x257==((x258|x259)%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	volatile int8_t x262 = INT8_MAX;
	uint64_t x263 = 35LLU;
	int8_t x264 = INT8_MIN;
	int32_t t63 = 126;

	t63 = (x261==((x262|x263)%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	int32_t x266 = -1;
	int32_t x267 = INT32_MIN;

	t64 = (x265==((x266|x267)%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = UINT16_MAX;
	static uint8_t x270 = UINT8_MAX;
	uint16_t x271 = UINT16_MAX;
	uint32_t x272 = 344U;
	volatile int32_t t65 = 51;

	t65 = (x269==((x270|x271)%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = INT64_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint8_t x275 = 41U;
	int32_t x276 = INT32_MIN;
	int32_t t66 = 2;

	t66 = (x273==((x274|x275)%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MAX;
	int16_t x279 = -15713;
	static uint64_t x280 = 3825235299174017LLU;
	volatile int32_t t67 = 105744;

	t67 = (x277==((x278|x279)%x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = 64054LL;
	static int8_t x283 = INT8_MIN;
	int8_t x284 = 2;
	int32_t t68 = 13;

	t68 = (x281==((x282|x283)%x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -1;
	int16_t x286 = 21;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t69 = -98;

	t69 = (x285==((x286|x287)%x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x291 = INT16_MAX;
	static int32_t x292 = -1;
	int32_t t70 = -33021;

	t70 = (x289==((x290|x291)%x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x294 = INT16_MIN;
	int16_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t71 = -60317;

	t71 = (x293==((x294|x295)%x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	int16_t x299 = INT16_MAX;
	int32_t x300 = -2678;
	int32_t t72 = 32;

	t72 = (x297==((x298|x299)%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -1;
	volatile int32_t t73 = 3003;

	t73 = (x301==((x302|x303)%x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x305 = 13U;
	static uint8_t x306 = 54U;
	volatile int8_t x307 = INT8_MIN;
	int32_t t74 = -21;

	t74 = (x305==((x306|x307)%x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t75 = 1;

	t75 = (x309==((x310|x311)%x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x313 = 7791U;
	volatile int16_t x314 = -2;
	uint16_t x315 = 2145U;
	uint64_t x316 = 244905927LLU;
	int32_t t76 = -115946;

	t76 = (x313==((x314|x315)%x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = 3U;
	uint64_t x318 = 54768674LLU;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -336620918723LL;
	volatile int32_t t77 = -1;

	t77 = (x317==((x318|x319)%x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = -906117;
	int8_t x322 = -9;
	int16_t x323 = 49;
	int64_t x324 = -1LL;

	t78 = (x321==((x322|x323)%x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	volatile int32_t t79 = -5666718;

	t79 = (x325==((x326|x327)%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = 4U;
	uint8_t x330 = UINT8_MAX;
	int16_t x332 = INT16_MIN;

	t80 = (x329==((x330|x331)%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x333 = -1;
	int64_t x334 = 76201439353LL;
	volatile int32_t x335 = INT32_MIN;
	static volatile int8_t x336 = 56;
	volatile int32_t t81 = -25520743;

	t81 = (x333==((x334|x335)%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = 1;
	int32_t x338 = -1428;
	uint64_t x339 = 204310LLU;
	int8_t x340 = INT8_MIN;

	t82 = (x337==((x338|x339)%x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 0U;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;

	t83 = (x341==((x342|x343)%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	volatile int32_t x346 = -49581153;
	int8_t x348 = INT8_MIN;
	volatile int32_t t84 = -1;

	t84 = (x345==((x346|x347)%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	static volatile int64_t x350 = -19623012932174569LL;
	int32_t x351 = -6;
	int64_t x352 = -1469088521765154944LL;

	t85 = (x349==((x350|x351)%x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x353 = INT8_MAX;
	int32_t x354 = INT32_MIN;
	static uint64_t x355 = 2285011914775263555LLU;
	uint64_t x356 = 27461389LLU;
	static int32_t t86 = -96660;

	t86 = (x353==((x354|x355)%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MIN;
	uint16_t x360 = 13193U;
	int32_t t87 = -24;

	t87 = (x357==((x358|x359)%x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	volatile int16_t x364 = -1;

	t88 = (x361==((x362|x363)%x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	static int32_t x368 = -25;
	int32_t t89 = -92717;

	t89 = (x365==((x366|x367)%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x369 = INT64_MAX;
	volatile int64_t x370 = -1872929LL;
	int16_t x371 = 2;
	volatile int32_t t90 = 37118430;

	t90 = (x369==((x370|x371)%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = -7;
	volatile int8_t x374 = -1;
	int32_t x375 = -1740;
	int16_t x376 = -1;

	t91 = (x373==((x374|x375)%x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	static int32_t x378 = -5;
	volatile int32_t t92 = 0;

	t92 = (x377==((x378|x379)%x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	uint32_t x383 = 325U;
	int64_t x384 = INT64_MAX;
	volatile int32_t t93 = -1642235;

	t93 = (x381==((x382|x383)%x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x385 = -1;
	static volatile uint32_t x386 = 94U;
	static int32_t x387 = INT32_MIN;
	static uint32_t x388 = 18493410U;
	volatile int32_t t94 = 314899785;

	t94 = (x385==((x386|x387)%x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = 1;
	int32_t t95 = 5703;

	t95 = (x389==((x390|x391)%x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1;
	int16_t x394 = -3884;
	volatile int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	int32_t t96 = -62;

	t96 = (x393==((x394|x395)%x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x398 = INT16_MIN;
	int8_t x399 = 0;
	uint64_t x400 = UINT64_MAX;
	static int32_t t97 = -281937407;

	t97 = (x397==((x398|x399)%x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = -1;
	int8_t x402 = -1;
	static volatile int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MAX;
	int32_t t98 = 1177549;

	t98 = (x401==((x402|x403)%x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x405 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t99 = -1108409;

	t99 = (x405==((x406|x407)%x408));

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

