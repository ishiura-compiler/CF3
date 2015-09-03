#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MAX;
static volatile int32_t t4 = -1411;
uint8_t x21 = 3U;
int16_t x24 = INT16_MIN;
static int16_t x32 = 22;
static volatile int64_t x35 = -1655348794LL;
uint64_t x42 = UINT64_MAX;
static int8_t x45 = INT8_MAX;
static int16_t x47 = -5233;
int32_t x48 = 1;
int32_t t12 = -872785;
int16_t x61 = INT16_MAX;
int8_t x66 = INT8_MAX;
int16_t x71 = INT16_MIN;
static int8_t x72 = 0;
static int8_t x82 = INT8_MIN;
int16_t x85 = -1;
int32_t x90 = -865;
uint32_t x93 = 0U;
volatile uint32_t x98 = 75224U;
int64_t x99 = INT64_MIN;
int64_t x108 = 111310227844LL;
static uint64_t x109 = 159877802601LLU;
volatile int32_t x110 = INT32_MIN;
uint32_t x113 = 5U;
int32_t x116 = INT32_MIN;
int8_t x119 = INT8_MIN;
int16_t x125 = INT16_MAX;
int8_t x131 = INT8_MAX;
static volatile int32_t t32 = INT32_MIN;
volatile uint32_t x134 = 1949642835U;
uint64_t x152 = 806440176LLU;
volatile int32_t t39 = -993207;
static uint64_t x163 = 1096127918966LLU;
int16_t x173 = INT16_MAX;
static volatile int16_t x178 = -1;
volatile int8_t x180 = 7;
volatile uint16_t x187 = 2255U;
static volatile int32_t t46 = 606378;
static uint16_t x196 = 0U;
static int32_t x199 = 1297372;
volatile int64_t x214 = 249LL;
int32_t t53 = 0;
static int32_t x219 = INT32_MIN;
int8_t x223 = -1;
uint8_t x226 = UINT8_MAX;
static uint64_t x231 = UINT64_MAX;
volatile uint32_t t57 = 236393U;
static uint32_t x236 = 254U;
volatile uint32_t t61 = UINT32_MAX;
static int64_t x253 = INT64_MIN;
int64_t x254 = INT64_MAX;
int8_t x259 = 9;
uint64_t x264 = 2377755LLU;
volatile int64_t t66 = 239165LL;
int8_t x271 = -15;
uint32_t x273 = 25U;
int64_t x274 = INT64_MIN;
volatile int16_t x283 = -892;
int16_t x286 = INT16_MIN;
uint32_t x291 = 514046474U;
uint8_t x299 = 2U;
uint64_t x301 = 913700327469LLU;
volatile int32_t t75 = INT32_MIN;
int8_t x310 = -2;
int32_t t77 = 1917;
uint32_t t78 = 203064U;
int32_t x322 = INT32_MAX;
int8_t x330 = 40;
int16_t x337 = -1;
int16_t x341 = INT16_MIN;
int8_t x342 = 0;
volatile int32_t t86 = 806;
uint8_t x351 = 3U;
uint32_t x356 = 983932733U;
volatile uint32_t t88 = 19062U;
int64_t x358 = -759597399684051688LL;
uint32_t x371 = 220515U;
volatile int8_t x372 = -1;
int32_t x375 = INT32_MAX;
uint8_t x379 = 6U;
int8_t x380 = 3;
uint32_t x382 = UINT32_MAX;
int16_t x395 = -1;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint64_t x2 = 34435753700585LLU;
	uint8_t x3 = 7U;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 132;

	t0 = ((x1==(x2==x3))+x4);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint64_t x6 = 149494781377027923LLU;
	int8_t x7 = INT8_MAX;
	volatile int32_t x8 = INT32_MAX;
	int32_t t1 = INT32_MAX;

	t1 = ((x5==(x6==x7))+x8);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 55;
	static uint64_t x10 = UINT64_MAX;
	uint8_t x12 = UINT8_MAX;
	static volatile int32_t t2 = -5;

	t2 = ((x9==(x10==x11))+x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint8_t x14 = 14U;
	uint32_t x15 = 110U;
	volatile int32_t x16 = INT32_MIN;
	int32_t t3 = INT32_MIN;

	t3 = ((x13==(x14==x15))+x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	static int32_t x18 = INT32_MIN;
	volatile int8_t x19 = -1;
	static int16_t x20 = 3;

	t4 = ((x17==(x18==x19))+x20);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MAX;
	int32_t t5 = 36914;

	t5 = ((x21==(x22==x23))+x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 26632LL;
	uint8_t x26 = 5U;
	static uint8_t x27 = 41U;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -18;

	t6 = ((x25==(x26==x27))+x28);

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -5345;
	static int8_t x30 = INT8_MAX;
	int64_t x31 = 82580757LL;
	static int32_t t7 = 13611;

	t7 = ((x29==(x30==x31))+x32);

	if (t7 != 22) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 15U;
	uint64_t x34 = UINT64_MAX;
	static int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = 3;

	t8 = ((x33==(x34==x35))+x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 1864U;
	int32_t x38 = INT32_MAX;
	static uint8_t x39 = 2U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = -1932;

	t9 = ((x37==(x38==x39))+x40);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 239512;
	volatile int16_t x43 = INT16_MAX;
	volatile uint32_t x44 = 210U;
	uint32_t t10 = 156052U;

	t10 = ((x41==(x42==x43))+x44);

	if (t10 != 210U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	volatile int32_t t11 = 6943;

	t11 = ((x45==(x46==x47))+x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 6654U;
	int64_t x50 = -2579989796002591960LL;
	static volatile int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;

	t12 = ((x49==(x50==x51))+x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = INT32_MAX;

	t13 = ((x53==(x54==x55))+x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 5U;
	int16_t x58 = 13;
	volatile int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -185;

	t14 = ((x57==(x58==x59))+x60);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x62 = UINT16_MAX;
	volatile uint8_t x63 = 0U;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -3635180;

	t15 = ((x61==(x62==x63))+x64);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -27;
	uint16_t x67 = UINT16_MAX;
	uint64_t x68 = 53LLU;
	volatile uint64_t t16 = 1991083265754LLU;

	t16 = ((x65==(x66==x67))+x68);

	if (t16 != 53LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	volatile int8_t x70 = -1;
	int32_t t17 = 365554728;

	t17 = ((x69==(x70==x71))+x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 243555200555LL;
	static volatile uint64_t x74 = 6246741LLU;
	int32_t x75 = INT32_MIN;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = 7231872;

	t18 = ((x73==(x74==x75))+x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = -16;
	uint16_t x80 = 763U;
	static int32_t t19 = 48;

	t19 = ((x77==(x78==x79))+x80);

	if (t19 != 763) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int32_t x83 = -260;
	int32_t x84 = 1;
	volatile int32_t t20 = -740172880;

	t20 = ((x81==(x82==x83))+x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MIN;
	static volatile int64_t x87 = INT64_MIN;
	int16_t x88 = 1;
	static int32_t t21 = 1;

	t21 = ((x85==(x86==x87))+x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 57U;
	int16_t x91 = -1;
	volatile uint16_t x92 = 10296U;
	volatile int32_t t22 = -261844537;

	t22 = ((x89==(x90==x91))+x92);

	if (t22 != 10296) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 792U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = 7526564929LL;

	t23 = ((x93==(x94==x95))+x96);

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	uint8_t x100 = 10U;
	int32_t t24 = -712792099;

	t24 = ((x97==(x98==x99))+x100);

	if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 0;
	int8_t x102 = INT8_MAX;
	int32_t x103 = INT32_MAX;
	volatile int16_t x104 = 1;
	volatile int32_t t25 = -135;

	t25 = ((x101==(x102==x103))+x104);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = -12LL;
	int64_t x107 = INT64_MIN;
	int64_t t26 = -21923LL;

	t26 = ((x105==(x106==x107))+x108);

	if (t26 != 111310227844LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x111 = -1;
	uint8_t x112 = 98U;
	static volatile int32_t t27 = 3976174;

	t27 = ((x109==(x110==x111))+x112);

	if (t27 != 98) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 0U;
	uint64_t x115 = 33847615580040763LLU;
	static int32_t t28 = INT32_MIN;

	t28 = ((x113==(x114==x115))+x116);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 9950;

	t29 = ((x117==(x118==x119))+x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 301U;
	volatile uint32_t x122 = 105U;
	volatile int32_t x123 = 0;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 518;

	t30 = ((x121==(x122==x123))+x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	static volatile uint8_t x127 = 87U;
	volatile int32_t x128 = INT32_MIN;
	static int32_t t31 = INT32_MIN;

	t31 = ((x125==(x126==x127))+x128);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	int32_t x132 = INT32_MIN;

	t32 = ((x129==(x130==x131))+x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	static int32_t x135 = 224516620;
	int8_t x136 = -1;
	int32_t t33 = -132;

	t33 = ((x133==(x134==x135))+x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 337U;
	uint32_t x138 = 2U;
	static uint64_t x139 = 5540283LLU;
	static int16_t x140 = -1;
	int32_t t34 = -326917;

	t34 = ((x137==(x138==x139))+x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = 53096520236LL;
	int16_t x142 = INT16_MAX;
	uint64_t x143 = 2084282714803LLU;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x141==(x142==x143))+x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int32_t x146 = 60374;
	volatile int64_t x147 = 184206344202LL;
	uint16_t x148 = 2312U;
	volatile int32_t t36 = -9875227;

	t36 = ((x145==(x146==x147))+x148);

	if (t36 != 2312) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static int64_t x150 = 58LL;
	int8_t x151 = -27;
	volatile uint64_t t37 = 14595450989650218LLU;

	t37 = ((x149==(x150==x151))+x152);

	if (t37 != 806440176LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	int32_t x154 = 5642;
	volatile uint8_t x155 = UINT8_MAX;
	static uint8_t x156 = 1U;
	static int32_t t38 = -57806;

	t38 = ((x153==(x154==x155))+x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 488;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = -1;

	t39 = ((x157==(x158==x159))+x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 348784555313875LL;
	int16_t x162 = INT16_MAX;
	int32_t x164 = 14;
	volatile int32_t t40 = -1006112547;

	t40 = ((x161==(x162==x163))+x164);

	if (t40 != 14) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 0U;
	int64_t x166 = -526237817LL;
	int16_t x167 = -1;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = 768;

	t41 = ((x165==(x166==x167))+x168);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	volatile int16_t x170 = -2433;
	int32_t x171 = -1;
	int8_t x172 = 2;
	static int32_t t42 = 62;

	t42 = ((x169==(x170==x171))+x172);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = UINT16_MAX;
	static int64_t x175 = INT64_MIN;
	uint32_t x176 = 20237U;
	uint32_t t43 = 35U;

	t43 = ((x173==(x174==x175))+x176);

	if (t43 != 20237U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int8_t x179 = 10;
	volatile int32_t t44 = -3243463;

	t44 = ((x177==(x178==x179))+x180);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = 458926LL;
	int32_t x182 = -293004;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 0;
	int32_t t45 = 10178;

	t45 = ((x181==(x182==x183))+x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t x186 = 132321239700059092LLU;
	int32_t x188 = -1069521075;

	t46 = ((x185==(x186==x187))+x188);

	if (t46 != -1069521075) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MAX;
	volatile int64_t x191 = 1LL;
	uint32_t x192 = UINT32_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = ((x189==(x190==x191))+x192);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MAX;
	static int32_t x194 = -301315248;
	uint64_t x195 = 25413337700833LLU;
	static volatile int32_t t48 = 62647095;

	t48 = ((x193==(x194==x195))+x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	int8_t x200 = -60;
	volatile int32_t t49 = 0;

	t49 = ((x197==(x198==x199))+x200);

	if (t49 != -60) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	uint8_t x202 = 91U;
	static uint8_t x203 = 0U;
	uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x201==(x202==x203))+x204);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint8_t x206 = 12U;
	static volatile int8_t x207 = -1;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 824624;

	t51 = ((x205==(x206==x207))+x208);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	static int64_t x211 = INT64_MAX;
	static int64_t x212 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = ((x209==(x210==x211))+x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 0U;
	uint16_t x215 = 9U;
	static int8_t x216 = INT8_MAX;

	t53 = ((x213==(x214==x215))+x216);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -7;
	int32_t x220 = -35840490;
	int32_t t54 = 104;

	t54 = ((x217==(x218==x219))+x220);

	if (t54 != -35840490) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static int16_t x222 = 405;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t55 = 250752368;

	t55 = ((x221==(x222==x223))+x224);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 62431;
	int64_t x227 = 538804463134735528LL;
	volatile int32_t x228 = -156993918;
	volatile int32_t t56 = -14886;

	t56 = ((x225==(x226==x227))+x228);

	if (t56 != -156993918) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 4032020258LLU;
	uint8_t x230 = 3U;
	uint32_t x232 = 1247285U;

	t57 = ((x229==(x230==x231))+x232);

	if (t57 != 1247285U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 25568U;
	int8_t x234 = 31;
	volatile uint16_t x235 = 0U;
	volatile uint32_t t58 = 494125U;

	t58 = ((x233==(x234==x235))+x236);

	if (t58 != 254U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int16_t x238 = 38;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = -1;
	int32_t t59 = 1729;

	t59 = ((x237==(x238==x239))+x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 40188731467LLU;
	int16_t x242 = 11;
	int8_t x243 = 0;
	uint32_t x244 = 95U;
	volatile uint32_t t60 = 127U;

	t60 = ((x241==(x242==x243))+x244);

	if (t60 != 95U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x245 = 521382LL;
	uint16_t x246 = 247U;
	volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = UINT32_MAX;

	t61 = ((x245==(x246==x247))+x248);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	static int32_t x250 = INT32_MIN;
	static uint32_t x251 = 46171U;
	int64_t x252 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = ((x249==(x250==x251))+x252);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = -1505;
	volatile int32_t t63 = -5696;

	t63 = ((x253==(x254==x255))+x256);

	if (t63 != -1505) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 3U;
	int64_t x258 = -1365430946LL;
	int32_t x260 = INT32_MIN;
	int32_t t64 = INT32_MIN;

	t64 = ((x257==(x258==x259))+x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x261 = 315U;
	static uint8_t x262 = UINT8_MAX;
	int64_t x263 = 1LL;
	volatile uint64_t t65 = 8378307834626000469LLU;

	t65 = ((x261==(x262==x263))+x264);

	if (t65 != 2377755LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 17054LL;
	uint32_t x266 = 28U;
	static int64_t x267 = 311LL;
	volatile int64_t x268 = -20176073LL;

	t66 = ((x265==(x266==x267))+x268);

	if (t66 != -20176073LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = 1838U;
	int16_t x270 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = -822938828;

	t67 = ((x269==(x270==x271))+x272);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x275 = 2;
	volatile int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = INT32_MIN;

	t68 = ((x273==(x274==x275))+x276);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 0LL;
	uint64_t x278 = 33085882905LLU;
	volatile uint16_t x279 = 354U;
	static volatile uint16_t x280 = 551U;
	int32_t t69 = 84;

	t69 = ((x277==(x278==x279))+x280);

	if (t69 != 552) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int32_t x282 = -1;
	uint16_t x284 = 1553U;
	static volatile int32_t t70 = 2;

	t70 = ((x281==(x282==x283))+x284);

	if (t70 != 1553) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 7U;
	int64_t x287 = INT64_MAX;
	volatile int8_t x288 = -1;
	volatile int32_t t71 = 11353446;

	t71 = ((x285==(x286==x287))+x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = 3;
	int8_t x292 = -16;
	static int32_t t72 = -9112217;

	t72 = ((x289==(x290==x291))+x292);

	if (t72 != -16) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -3;
	uint32_t x294 = 138U;
	static uint64_t x295 = 80412LLU;
	static int16_t x296 = INT16_MIN;
	int32_t t73 = -8541;

	t73 = ((x293==(x294==x295))+x296);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MAX;
	static uint8_t x298 = UINT8_MAX;
	int8_t x300 = -1;
	int32_t t74 = -24311067;

	t74 = ((x297==(x298==x299))+x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 434046U;
	int8_t x303 = -3;
	int32_t x304 = INT32_MIN;

	t75 = ((x301==(x302==x303))+x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 5899976894310358775LLU;
	int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	static int32_t x308 = INT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = ((x305==(x306==x307))+x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 7;
	int8_t x311 = -1;
	int32_t x312 = 716795641;

	t77 = ((x309==(x310==x311))+x312);

	if (t77 != 716795641) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 1122380894324LLU;
	int16_t x314 = -1573;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 1158U;

	t78 = ((x313==(x314==x315))+x316);

	if (t78 != 1158U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1;
	int16_t x318 = INT16_MIN;
	static int64_t x319 = INT64_MIN;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -1;

	t79 = ((x317==(x318==x319))+x320);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = 0;
	static volatile int32_t t80 = 31244011;

	t80 = ((x321==(x322==x323))+x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 102936519742456LL;
	static uint64_t x326 = UINT64_MAX;
	static int64_t x327 = INT64_MAX;
	uint64_t x328 = 7071LLU;
	static volatile uint64_t t81 = 6395914724150674919LLU;

	t81 = ((x325==(x326==x327))+x328);

	if (t81 != 7071LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 135U;
	int64_t x331 = INT64_MAX;
	volatile int8_t x332 = INT8_MAX;
	static volatile int32_t t82 = 6915;

	t82 = ((x329==(x330==x331))+x332);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = 78U;
	uint32_t x336 = UINT32_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = ((x333==(x334==x335))+x336);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MAX;
	int64_t x339 = -1LL;
	static uint32_t x340 = 19346603U;
	uint32_t t84 = 5886U;

	t84 = ((x337==(x338==x339))+x340);

	if (t84 != 19346603U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x343 = 0LL;
	int64_t x344 = INT64_MAX;
	static int64_t t85 = INT64_MAX;

	t85 = ((x341==(x342==x343))+x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	volatile int64_t x346 = 27771LL;
	uint32_t x347 = 5U;
	int8_t x348 = INT8_MIN;

	t86 = ((x345==(x346==x347))+x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	static uint8_t x352 = 5U;
	volatile int32_t t87 = -170183;

	t87 = ((x349==(x350==x351))+x352);

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;

	t88 = ((x353==(x354==x355))+x356);

	if (t88 != 983932733U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	int64_t x360 = 31077987455333275LL;
	int64_t t89 = -85749722997300695LL;

	t89 = ((x357==(x358==x359))+x360);

	if (t89 != 31077987455333275LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -398;
	int32_t x362 = 1386424;
	static int32_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	static int32_t t90 = 7491884;

	t90 = ((x361==(x362==x363))+x364);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = 0;
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 25040;

	t91 = ((x365==(x366==x367))+x368);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MAX;
	uint8_t x370 = 0U;
	volatile int32_t t92 = 1;

	t92 = ((x369==(x370==x371))+x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	int64_t x374 = 512416676LL;
	static int8_t x376 = -3;
	volatile int32_t t93 = -6192;

	t93 = ((x373==(x374==x375))+x376);

	if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -1;
	uint8_t x378 = 1U;
	int32_t t94 = 52155;

	t94 = ((x377==(x378==x379))+x380);

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t95 = INT64_MIN;

	t95 = ((x381==(x382==x383))+x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x385 = UINT32_MAX;
	static volatile uint8_t x386 = UINT8_MAX;
	static volatile int32_t x387 = INT32_MIN;
	static int32_t x388 = -186865;
	volatile int32_t t96 = 1099;

	t96 = ((x385==(x386==x387))+x388);

	if (t96 != -186865) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 95U;
	int16_t x390 = 5392;
	uint32_t x391 = 1900460U;
	int8_t x392 = INT8_MIN;
	static int32_t t97 = -95726;

	t97 = ((x389==(x390==x391))+x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	uint32_t x394 = 4U;
	int16_t x396 = INT16_MIN;
	static int32_t t98 = 58370311;

	t98 = ((x393==(x394==x395))+x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	uint64_t x398 = 1266969618683739LLU;
	int64_t x399 = INT64_MAX;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -1362991;

	t99 = ((x397==(x398==x399))+x400);

	if (t99 != 255) { NG(); } else { ; }
	
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

