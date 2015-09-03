#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 214145U;
volatile uint16_t x12 = 15612U;
int32_t x17 = INT32_MIN;
int64_t x18 = INT64_MIN;
volatile int16_t x30 = INT16_MAX;
int64_t x31 = 3956346LL;
uint64_t x33 = UINT64_MAX;
uint8_t x36 = 1U;
static int32_t x40 = INT32_MAX;
volatile int32_t x47 = INT32_MIN;
volatile int32_t x49 = -1;
static int32_t x54 = -1;
static uint8_t x56 = 9U;
uint32_t x60 = 104U;
uint16_t x62 = 2U;
int32_t x63 = INT32_MIN;
int32_t x66 = INT32_MIN;
int8_t x76 = 12;
int16_t x78 = INT16_MIN;
int32_t t19 = -25830;
int32_t x83 = INT32_MIN;
int32_t x85 = 0;
uint64_t x88 = 14576854051LLU;
static int32_t t21 = -16041765;
int16_t x93 = -1;
static volatile int32_t t23 = 623034;
static int8_t x107 = 15;
uint32_t x111 = UINT32_MAX;
static int32_t t27 = -36753014;
static uint16_t x116 = 0U;
uint16_t x120 = 6160U;
int64_t t29 = -1LL;
static int16_t x127 = INT16_MIN;
static volatile uint16_t x129 = 15460U;
int16_t x140 = -1;
int64_t x147 = INT64_MIN;
uint8_t x152 = 31U;
int64_t x153 = -1LL;
static volatile int32_t t39 = 57682;
uint64_t t40 = 23LLU;
uint32_t x166 = UINT32_MAX;
int16_t x167 = INT16_MAX;
static int64_t x169 = INT64_MAX;
int32_t x171 = INT32_MAX;
static volatile uint8_t x184 = 47U;
volatile int16_t x185 = INT16_MIN;
static int32_t x187 = 18864;
static volatile int64_t x188 = -1LL;
uint16_t x192 = UINT16_MAX;
static uint16_t x196 = UINT16_MAX;
int32_t x206 = INT32_MIN;
int64_t x212 = 5029644252918530LL;
int8_t x213 = -1;
volatile int32_t t53 = 1312723;
static int32_t t54 = -2828;
volatile int32_t t55 = -25019;
volatile uint16_t x231 = 1987U;
uint64_t x234 = UINT64_MAX;
int32_t t58 = 408379079;
volatile uint64_t x239 = UINT64_MAX;
uint8_t x240 = 9U;
int32_t x246 = INT32_MIN;
uint64_t x247 = UINT64_MAX;
uint32_t x251 = 121893U;
int64_t t65 = INT64_MIN;
int16_t x266 = INT16_MIN;
static volatile uint8_t x269 = 0U;
volatile uint32_t x272 = UINT32_MAX;
static int64_t x274 = -1LL;
volatile int32_t t69 = INT32_MAX;
int64_t x283 = INT64_MAX;
volatile int32_t t70 = 2;
int16_t x288 = -1;
int64_t x289 = INT64_MAX;
volatile int8_t x296 = INT8_MIN;
static int64_t x297 = INT64_MIN;
static int16_t x303 = -1;
uint64_t x314 = 26LLU;
int32_t t78 = -27;
int16_t x318 = -1257;
volatile int32_t t80 = INT32_MIN;
volatile int64_t x327 = 1701119473205014LL;
int64_t x329 = 0LL;
int64_t x330 = INT64_MIN;
int32_t x331 = INT32_MAX;
int64_t x332 = INT64_MIN;
static uint16_t x334 = 0U;
int64_t x342 = INT64_MIN;
int16_t x343 = -1;
int8_t x345 = INT8_MAX;
int16_t x350 = 1;
volatile int32_t x352 = 148405042;
int16_t x355 = -21;
int32_t x356 = INT32_MIN;
int32_t x358 = -658;
int16_t x359 = INT16_MAX;
uint16_t x368 = UINT16_MAX;
static uint16_t x371 = 19975U;
static volatile uint32_t t92 = 548671U;
int32_t x373 = INT32_MIN;
int8_t x375 = INT8_MIN;
static int32_t x377 = 14;
static int16_t x379 = INT16_MIN;
int8_t x384 = -7;
static volatile int64_t t95 = -16749210181884503LL;
int64_t x386 = INT64_MIN;
uint64_t x389 = 1740038LLU;
static uint32_t x394 = 6766156U;
volatile uint64_t t98 = 84740646LLU;
uint16_t x399 = 29264U;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	volatile int64_t x3 = 8379501537LL;
	int32_t x4 = -1;
	static uint32_t t0 = 1619592453U;

	t0 = (x1|((x2<=x3)<=x4));

	if (t0 != 214145U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	uint16_t x6 = 12U;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = UINT32_MAX;
	static volatile int64_t t1 = INT64_MAX;

	t1 = (x5|((x6<=x7)<=x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 376558U;
	int32_t x10 = INT32_MAX;
	static uint32_t x11 = 3U;
	volatile uint32_t t2 = 4382U;

	t2 = (x9|((x10<=x11)<=x12));

	if (t2 != 376559U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int64_t x14 = 1668LL;
	int16_t x15 = 16;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 191;

	t3 = (x13|((x14<=x15)<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x19 = UINT32_MAX;
	static int8_t x20 = 1;
	static volatile int32_t t4 = -12;

	t4 = (x17|((x18<=x19)<=x20));

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 44372009;
	volatile int64_t x22 = 325390245LL;
	volatile int16_t x23 = -1;
	volatile int32_t x24 = 6626;
	int32_t t5 = 26;

	t5 = (x21|((x22<=x23)<=x24));

	if (t5 != 44372009) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -8193212LL;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = 37203439LL;
	int32_t x28 = -1;
	volatile int64_t t6 = 1836149029LL;

	t6 = (x25|((x26<=x27)<=x28));

	if (t6 != -8193212LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30<=x31)<=x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	uint64_t x35 = 1583782LLU;
	uint64_t t8 = UINT64_MAX;

	t8 = (x33|((x34<=x35)<=x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -7128996LL;
	volatile uint64_t x38 = 161LLU;
	volatile int8_t x39 = -3;
	static int64_t t9 = 14144023233253768LL;

	t9 = (x37|((x38<=x39)<=x40));

	if (t9 != -7128995LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -29286355;

	t10 = (x41|((x42<=x43)<=x44));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MIN;
	int8_t x48 = 57;
	static int32_t t11 = 271;

	t11 = (x45|((x46<=x47)<=x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 5LLU;
	static uint64_t x52 = UINT64_MAX;
	static int32_t t12 = -47;

	t12 = (x49|((x50<=x51)<=x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x55 = 148912U;
	volatile int64_t t13 = 1411997020LL;

	t13 = (x53|((x54<=x55)<=x56));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	volatile uint32_t x59 = 0U;
	static int32_t t14 = -479;

	t14 = (x57|((x58<=x59)<=x60));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 11;
	uint16_t x64 = 13U;
	int32_t t15 = -2584759;

	t15 = (x61|((x62<=x63)<=x64));

	if (t15 != 11) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int64_t x67 = 287LL;
	int32_t x68 = -23;
	int32_t t16 = -6;

	t16 = (x65|((x66<=x67)<=x68));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = 2915U;
	volatile int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MAX;
	uint16_t x72 = 1273U;
	volatile int32_t t17 = 53653819;

	t17 = (x69|((x70<=x71)<=x72));

	if (t17 != 2915) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 18;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	volatile int32_t t18 = 290;

	t18 = (x73|((x74<=x75)<=x76));

	if (t18 != 19) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 552U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;

	t19 = (x77|((x78<=x79)<=x80));

	if (t19 != 552) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	static uint64_t x82 = 3529820977181872760LLU;
	int8_t x84 = -1;
	static int32_t t20 = -318;

	t20 = (x81|((x82<=x83)<=x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	static int8_t x87 = -20;

	t21 = (x85|((x86<=x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 8794008951LLU;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 203270719;

	t22 = (x89|((x90<=x91)<=x92));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -505;
	int16_t x95 = INT16_MIN;
	static uint64_t x96 = 503637197283502436LLU;

	t23 = (x93|((x94<=x95)<=x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static uint8_t x98 = 12U;
	static int64_t x99 = 539195LL;
	volatile int64_t x100 = INT64_MIN;
	uint32_t t24 = UINT32_MAX;

	t24 = (x97|((x98<=x99)<=x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -62098373;

	t25 = (x101|((x102<=x103)<=x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int16_t x106 = -1;
	uint16_t x108 = UINT16_MAX;
	int64_t t26 = -68272256476915LL;

	t26 = (x105|((x106<=x107)<=x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -5;
	int8_t x110 = INT8_MAX;
	int64_t x112 = INT64_MIN;

	t27 = (x109|((x110<=x111)<=x112));

	if (t27 != -5) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint64_t x114 = 113234269701327134LLU;
	static int8_t x115 = 25;
	int64_t t28 = INT64_MAX;

	t28 = (x113|((x114<=x115)<=x116));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	static uint8_t x119 = UINT8_MAX;

	t29 = (x117|((x118<=x119)<=x120));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 11508515LL;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;
	static int64_t t30 = -171080554212257881LL;

	t30 = (x121|((x122<=x123)<=x124));

	if (t30 != 11508515LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 0;
	uint8_t x126 = 2U;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -527;

	t31 = (x125|((x126<=x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = -55;
	uint8_t x131 = 66U;
	uint64_t x132 = 523186293LLU;
	static volatile int32_t t32 = -1;

	t32 = (x129|((x130<=x131)<=x132));

	if (t32 != 15461) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	static volatile int32_t x134 = INT32_MIN;
	int32_t x135 = 366;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -57;

	t33 = (x133|((x134<=x135)<=x136));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = 3;
	uint16_t x138 = UINT16_MAX;
	static int32_t x139 = -452620891;
	volatile int32_t t34 = 2183786;

	t34 = (x137|((x138<=x139)<=x140));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = UINT8_MAX;
	uint16_t x143 = 5U;
	int16_t x144 = INT16_MAX;
	static int32_t t35 = 31950580;

	t35 = (x141|((x142<=x143)<=x144));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int64_t x148 = INT64_MAX;
	int32_t t36 = -7319;

	t36 = (x145|((x146<=x147)<=x148));

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 123U;
	int32_t t37 = 1718;

	t37 = (x149|((x150<=x151)<=x152));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1;
	volatile int8_t x155 = -1;
	volatile int32_t x156 = 229532140;
	volatile int64_t t38 = -1678891063LL;

	t38 = (x153|((x154<=x155)<=x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 11;
	static uint64_t x158 = 9877550014251LLU;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MIN;

	t39 = (x157|((x158<=x159)<=x160));

	if (t39 != 11) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 330LLU;
	uint32_t x162 = 1348U;
	int64_t x163 = -1LL;
	int8_t x164 = -1;

	t40 = (x161|((x162<=x163)<=x164));

	if (t40 != 330LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x168 = -1542014662525061LL;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165|((x166<=x167)<=x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 99U;
	volatile int64_t x172 = INT64_MIN;
	static volatile int64_t t42 = INT64_MAX;

	t42 = (x169|((x170<=x171)<=x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = -1;
	int16_t x174 = -1;
	static int16_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 59;

	t43 = (x173|((x174<=x175)<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	static int32_t x178 = INT32_MIN;
	int8_t x179 = -1;
	volatile int16_t x180 = INT16_MAX;
	int32_t t44 = -203926656;

	t44 = (x177|((x178<=x179)<=x180));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = 12600995066LLU;
	volatile int32_t t45 = 553387;

	t45 = (x181|((x182<=x183)<=x184));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x186 = -1;
	volatile int32_t t46 = 217026536;

	t46 = (x185|((x186<=x187)<=x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	uint16_t x190 = 377U;
	int64_t x191 = 36894798996631498LL;
	int32_t t47 = 1;

	t47 = (x189|((x190<=x191)<=x192));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int16_t x194 = -623;
	static volatile uint16_t x195 = UINT16_MAX;
	uint32_t t48 = UINT32_MAX;

	t48 = (x193|((x194<=x195)<=x196));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	volatile int64_t x198 = INT64_MIN;
	static uint64_t x199 = 10853476933695LLU;
	int32_t x200 = -1;
	volatile int32_t t49 = 907236827;

	t49 = (x197|((x198<=x199)<=x200));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int64_t x202 = 19401662456678LL;
	volatile int8_t x203 = -1;
	static int64_t x204 = -3940742033231LL;
	volatile int32_t t50 = 15052;

	t50 = (x201|((x202<=x203)<=x204));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 127LLU;
	uint16_t x207 = 11703U;
	int16_t x208 = INT16_MAX;
	volatile uint64_t t51 = 3975784LLU;

	t51 = (x205|((x206<=x207)<=x208));

	if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int32_t x210 = 0;
	volatile uint32_t x211 = 7952U;
	int32_t t52 = 339549;

	t52 = (x209|((x210<=x211)<=x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;

	t53 = (x213|((x214<=x215)<=x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = 0U;
	uint32_t x218 = 737U;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;

	t54 = (x217|((x218<=x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	uint8_t x222 = 86U;
	volatile uint16_t x223 = 28477U;
	uint64_t x224 = 1049511540239LLU;

	t55 = (x221|((x222<=x223)<=x224));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MAX;
	uint64_t x226 = 5LLU;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = -13886;
	int32_t t56 = INT32_MAX;

	t56 = (x225|((x226<=x227)<=x228));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1928;
	static int32_t x230 = 0;
	int64_t x232 = INT64_MAX;
	int32_t t57 = 3237204;

	t57 = (x229|((x230<=x231)<=x232));

	if (t57 != -1927) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static uint8_t x235 = 57U;
	volatile int32_t x236 = INT32_MIN;

	t58 = (x233|((x234<=x235)<=x236));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	volatile uint64_t x238 = UINT64_MAX;
	volatile int32_t t59 = 914512;

	t59 = (x237|((x238<=x239)<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int64_t x242 = 18305136826958LL;
	static volatile uint8_t x243 = 1U;
	static int8_t x244 = 0;
	static volatile int32_t t60 = 784528954;

	t60 = (x241|((x242<=x243)<=x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = -1;
	volatile int16_t x248 = -244;
	volatile int32_t t61 = -272821;

	t61 = (x245|((x246<=x247)<=x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	int32_t x252 = INT32_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (x249|((x250<=x251)<=x252));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	uint64_t x254 = 1LLU;
	int32_t x255 = -399718;
	volatile uint8_t x256 = 40U;
	static volatile int32_t t63 = -919268763;

	t63 = (x253|((x254<=x255)<=x256));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 1387LL;
	volatile int32_t x258 = INT32_MAX;
	static int32_t x259 = INT32_MIN;
	volatile int8_t x260 = INT8_MAX;
	volatile int64_t t64 = -6863832LL;

	t64 = (x257|((x258<=x259)<=x260));

	if (t64 != 1387LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	static uint16_t x263 = 49U;
	static int16_t x264 = INT16_MIN;

	t65 = (x261|((x262<=x263)<=x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	int8_t x267 = -28;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -35551;

	t66 = (x265|((x266<=x267)<=x268));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -1;
	uint8_t x271 = 1U;
	volatile int32_t t67 = 27289482;

	t67 = (x269|((x270<=x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 15742U;
	int32_t x275 = -1;
	static int64_t x276 = -6687059LL;
	static volatile int32_t t68 = -12;

	t68 = (x273|((x274<=x275)<=x276));

	if (t68 != 15742) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = -1;
	uint32_t x279 = 1089084U;
	int32_t x280 = -251026;

	t69 = (x277|((x278<=x279)<=x280));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	uint16_t x282 = 0U;
	int16_t x284 = INT16_MIN;

	t70 = (x281|((x282<=x283)<=x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -16;
	uint32_t x286 = UINT32_MAX;
	static int64_t x287 = -1LL;
	volatile int32_t t71 = 183;

	t71 = (x285|((x286<=x287)<=x288));

	if (t71 != -16) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = 4841;
	int64_t t72 = INT64_MAX;

	t72 = (x289|((x290<=x291)<=x292));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	uint32_t t73 = UINT32_MAX;

	t73 = (x293|((x294<=x295)<=x296));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MAX;
	uint8_t x300 = 28U;
	int64_t t74 = 41251954LL;

	t74 = (x297|((x298<=x299)<=x300));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = INT8_MIN;
	uint64_t x302 = 0LLU;
	uint32_t x304 = 531U;
	volatile int32_t t75 = 60574;

	t75 = (x301|((x302<=x303)<=x304));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 13LLU;
	int16_t x306 = -968;
	static int64_t x307 = INT64_MAX;
	int32_t x308 = INT32_MAX;
	volatile uint64_t t76 = 6779547205924LLU;

	t76 = (x305|((x306<=x307)<=x308));

	if (t76 != 13LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MIN;
	static volatile uint8_t x311 = 28U;
	int32_t x312 = 3811617;
	volatile int32_t t77 = 3937172;

	t77 = (x309|((x310<=x311)<=x312));

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 4U;
	int32_t x315 = -1;
	uint8_t x316 = UINT8_MAX;

	t78 = (x313|((x314<=x315)<=x316));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 11608779004720LL;
	int16_t x319 = INT16_MIN;
	uint32_t x320 = 18210159U;
	static volatile int64_t t79 = -280056545052275LL;

	t79 = (x317|((x318<=x319)<=x320));

	if (t79 != 11608779004721LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	uint32_t x323 = 106757U;
	int64_t x324 = -24959120457993097LL;

	t80 = (x321|((x322<=x323)<=x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 1U;
	int16_t x326 = -1;
	volatile int8_t x328 = INT8_MIN;
	static volatile int32_t t81 = -243;

	t81 = (x325|((x326<=x327)<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t t82 = -6926032212LL;

	t82 = (x329|((x330<=x331)<=x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 44;
	static int16_t x335 = INT16_MIN;
	int16_t x336 = -2015;
	static int32_t t83 = 1003080959;

	t83 = (x333|((x334<=x335)<=x336));

	if (t83 != 44) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 72LLU;
	static uint8_t x338 = 14U;
	int64_t x339 = INT64_MAX;
	int8_t x340 = -2;
	static uint64_t t84 = 4LLU;

	t84 = (x337|((x338<=x339)<=x340));

	if (t84 != 72LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	static uint32_t x344 = UINT32_MAX;
	static int32_t t85 = -457718830;

	t85 = (x341|((x342<=x343)<=x344));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	static int16_t x347 = -14463;
	int32_t x348 = INT32_MIN;
	int32_t t86 = -4945490;

	t86 = (x345|((x346<=x347)<=x348));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x351 = 10886LL;
	static int32_t t87 = -56;

	t87 = (x349|((x350<=x351)<=x352));

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = 3;
	volatile int32_t t88 = 3;

	t88 = (x353|((x354<=x355)<=x356));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 110U;
	uint64_t x360 = 1874875307LLU;
	volatile int32_t t89 = 334505957;

	t89 = (x357|((x358<=x359)<=x360));

	if (t89 != 111) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	volatile uint64_t x362 = 4043706908811243LLU;
	volatile int8_t x363 = INT8_MIN;
	volatile int8_t x364 = 0;
	volatile int64_t t90 = -128768380868LL;

	t90 = (x361|((x362<=x363)<=x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 14U;
	int64_t x366 = -1LL;
	volatile uint64_t x367 = UINT64_MAX;
	static int32_t t91 = -6;

	t91 = (x365|((x366<=x367)<=x368));

	if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 40U;
	int8_t x370 = 63;
	volatile int32_t x372 = 27;

	t92 = (x369|((x370<=x371)<=x372));

	if (t92 != 41U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t93 = 30;

	t93 = (x373|((x374<=x375)<=x376));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	int16_t x380 = 3487;
	volatile int32_t t94 = -7762646;

	t94 = (x377|((x378<=x379)<=x380));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 8688871611129LL;
	int16_t x382 = 3;
	uint64_t x383 = 2046167343LLU;

	t95 = (x381|((x382<=x383)<=x384));

	if (t95 != 8688871611129LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1042404U;
	int64_t x387 = INT64_MIN;
	volatile int16_t x388 = -1;
	volatile uint32_t t96 = 258441224U;

	t96 = (x385|((x386<=x387)<=x388));

	if (t96 != 1042404U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = INT32_MIN;
	uint8_t x391 = 4U;
	static volatile int8_t x392 = 0;
	uint64_t t97 = 497016760716811150LLU;

	t97 = (x389|((x390<=x391)<=x392));

	if (t97 != 1740038LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 1LLU;
	int16_t x395 = -1;
	volatile int64_t x396 = INT64_MAX;

	t98 = (x393|((x394<=x395)<=x396));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 0U;
	volatile uint32_t x398 = UINT32_MAX;
	static int32_t x400 = INT32_MAX;
	volatile int32_t t99 = 952;

	t99 = (x397|((x398<=x399)<=x400));

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

