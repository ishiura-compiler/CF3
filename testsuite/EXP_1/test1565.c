#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = INT32_MAX;
uint16_t x4 = 8781U;
uint64_t x5 = 132033163LLU;
int32_t t2 = -2067;
volatile uint64_t x15 = 1832344230LLU;
uint8_t x16 = 37U;
volatile uint16_t x17 = 1U;
uint64_t x27 = UINT64_MAX;
uint8_t x28 = 114U;
uint64_t t6 = 8006686262340851007LLU;
int16_t x39 = 943;
uint8_t x42 = 5U;
volatile uint64_t t11 = 464LLU;
int64_t x52 = INT64_MAX;
volatile int64_t x53 = -1LL;
volatile int32_t t13 = -904933087;
uint64_t x67 = 127585190704LLU;
volatile int64_t t17 = 829LL;
int16_t x87 = INT16_MIN;
static int32_t t19 = -2112;
uint8_t x94 = 1U;
volatile int32_t t20 = 9542837;
int16_t x100 = -1;
int64_t t21 = -14286081934LL;
int8_t x102 = -3;
int16_t x108 = -1;
uint64_t x113 = 6317699459198LLU;
int32_t x118 = INT32_MAX;
int16_t x121 = INT16_MIN;
int32_t x124 = INT32_MAX;
uint8_t x126 = UINT8_MAX;
uint8_t x133 = 3U;
int64_t x148 = INT64_MAX;
uint64_t x153 = 453342066597483351LLU;
int16_t x158 = -1;
int8_t x160 = -23;
int32_t t35 = 49968;
int64_t t37 = -154002389045961LL;
int16_t x171 = INT16_MIN;
int32_t x175 = -1;
int16_t x184 = -8;
static int32_t x190 = INT32_MIN;
static int64_t x192 = INT64_MIN;
int8_t x197 = -4;
uint32_t x199 = 168493U;
static volatile uint32_t t45 = 3468133U;
uint64_t x206 = 91607388120469464LLU;
static volatile uint32_t x210 = 106U;
static int64_t x212 = INT64_MIN;
volatile int64_t t48 = 2043375LL;
volatile int32_t x222 = -477105;
volatile uint32_t t51 = 1342U;
static volatile uint32_t t52 = 59259U;
uint64_t x232 = UINT64_MAX;
int16_t x234 = 1;
int64_t x237 = 1438599460LL;
int64_t x238 = INT64_MAX;
int32_t x243 = -435887553;
int32_t t57 = 0;
static uint16_t x262 = 79U;
int8_t x266 = -52;
static int8_t x269 = INT8_MAX;
static uint64_t x272 = UINT64_MAX;
uint64_t t62 = 14264LLU;
uint16_t x277 = UINT16_MAX;
static uint32_t x283 = 9059903U;
static int64_t x286 = INT64_MAX;
uint64_t x297 = 1553439448LLU;
static uint8_t x310 = UINT8_MAX;
volatile int32_t x311 = INT32_MAX;
static volatile int8_t x315 = -1;
int8_t x318 = 1;
static int64_t x319 = -6032LL;
int32_t x321 = INT32_MIN;
uint16_t x332 = 1U;
int64_t x336 = -15310259470641583LL;
volatile int16_t x337 = INT16_MIN;
uint32_t x338 = 64U;
static int32_t t80 = -62107;
int16_t x345 = -1;
volatile int16_t x346 = INT16_MAX;
int8_t x350 = INT8_MIN;
int16_t x355 = INT16_MIN;
int16_t x356 = INT16_MIN;
int32_t t83 = 27736;
static int16_t x366 = INT16_MIN;
volatile int32_t t86 = 308602;
int64_t x372 = -1LL;
volatile int64_t t87 = 7571529105568LL;
volatile int8_t x379 = 44;
int32_t x385 = -46;
int32_t x386 = -92578;
uint32_t x393 = UINT32_MAX;
static volatile uint64_t t93 = 16086057821443LLU;
uint64_t x399 = UINT64_MAX;
volatile int64_t t95 = -458LL;
int32_t x407 = -191760716;
uint32_t x408 = UINT32_MAX;
static int8_t x409 = 0;
static int32_t x412 = INT32_MAX;
static int32_t t99 = 16323198;


void f0(void) {
	int8_t x2 = INT8_MAX;
	uint32_t x3 = 5U;
	static uint32_t t0 = 6138U;

	t0 = (((x1<=x2)/x3)%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x6 = 3540865009979LL;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 86384;

	t1 = (((x5<=x6)/x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 565684740LLU;
	volatile uint32_t x10 = 309U;
	volatile int8_t x11 = -1;
	uint8_t x12 = 68U;

	t2 = (((x9<=x10)/x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 441;
	volatile uint64_t x14 = 581352549LLU;
	uint64_t t3 = 1682850468270LLU;

	t3 = (((x13<=x14)/x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 1U;
	uint16_t x19 = 16125U;
	int32_t x20 = -1;
	static volatile int32_t t4 = -15724089;

	t4 = (((x17<=x18)/x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -9294997876LL;
	uint8_t x22 = 23U;
	static volatile int32_t x23 = INT32_MAX;
	uint16_t x24 = 467U;
	volatile int32_t t5 = -27226024;

	t5 = (((x21<=x22)/x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static int16_t x26 = INT16_MAX;

	t6 = (((x25<=x26)/x27)%x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = INT32_MIN;
	volatile uint8_t x31 = 6U;
	static volatile int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -2276;

	t7 = (((x29<=x30)/x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 50568577545440944LLU;
	int32_t x34 = 2569;
	int8_t x35 = -1;
	int16_t x36 = 6683;
	volatile int32_t t8 = 151698;

	t8 = (((x33<=x34)/x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 2LLU;
	uint64_t x38 = 12290LLU;
	int16_t x40 = INT16_MAX;
	static int32_t t9 = 5;

	t9 = (((x37<=x38)/x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = 3;
	static volatile uint32_t x43 = UINT32_MAX;
	int8_t x44 = -14;
	volatile uint32_t t10 = 1028041U;

	t10 = (((x41<=x42)/x43)%x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;

	t11 = (((x45<=x46)/x47)%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3470U;
	int32_t x50 = INT32_MAX;
	int8_t x51 = INT8_MIN;
	int64_t t12 = -96291441253LL;

	t12 = (((x49<=x50)/x51)%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	volatile int16_t x56 = -1;

	t13 = (((x53<=x54)/x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint16_t x58 = 145U;
	volatile int64_t x59 = 914666570LL;
	volatile int16_t x60 = -1;
	volatile int64_t t14 = -3089358666000728LL;

	t14 = (((x57<=x58)/x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 933U;
	int8_t x66 = 18;
	int32_t x68 = 407993;
	volatile uint64_t t15 = 5LLU;

	t15 = (((x65<=x66)/x67)%x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x69 = -7;
	volatile int32_t x70 = 12;
	uint64_t x71 = 26718452852615LLU;
	volatile int64_t x72 = INT64_MAX;
	volatile uint64_t t16 = 6709LLU;

	t16 = (((x69<=x70)/x71)%x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x81 = 43102LLU;
	uint64_t x82 = UINT64_MAX;
	static int8_t x83 = INT8_MIN;
	volatile int64_t x84 = -3636304502268LL;

	t17 = (((x81<=x82)/x83)%x84);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 13;
	int64_t x86 = -1LL;
	int32_t x88 = INT32_MIN;
	int32_t t18 = 23091;

	t18 = (((x85<=x86)/x87)%x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -66208259;
	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = -1;
	int8_t x92 = -38;

	t19 = (((x89<=x90)/x91)%x92);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -53LL;
	int8_t x95 = -1;
	int32_t x96 = INT32_MAX;

	t20 = (((x93<=x94)/x95)%x96);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x97 = 19;
	int64_t x98 = INT64_MIN;
	static int64_t x99 = INT64_MAX;

	t21 = (((x97<=x98)/x99)%x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 5U;
	int64_t x103 = -4059LL;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int64_t t22 = -47876079107003LL;

	t22 = (((x101<=x102)/x103)%x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = 1;
	volatile int32_t x107 = INT32_MIN;
	volatile int32_t t23 = -3485008;

	t23 = (((x105<=x106)/x107)%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	int16_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = -1;
	volatile int32_t t24 = 3543267;

	t24 = (((x109<=x110)/x111)%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 91U;
	static volatile int32_t t25 = 14;

	t25 = (((x113<=x114)/x115)%x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x117 = INT16_MIN;
	uint16_t x119 = 3U;
	static int64_t x120 = INT64_MAX;
	volatile int64_t t26 = 81316374LL;

	t26 = (((x117<=x118)/x119)%x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = 75359;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t t27 = 324315751;

	t27 = (((x121<=x122)/x123)%x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = INT8_MAX;
	volatile int16_t x127 = 46;
	int8_t x128 = -1;
	static int32_t t28 = -1375;

	t28 = (((x125<=x126)/x127)%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 84;
	volatile int64_t x130 = -1LL;
	uint8_t x131 = UINT8_MAX;
	volatile int32_t x132 = -3766;
	int32_t t29 = -6922464;

	t29 = (((x129<=x130)/x131)%x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x134 = 61;
	int8_t x135 = -1;
	uint16_t x136 = 25U;
	int32_t t30 = -103051138;

	t30 = (((x133<=x134)/x135)%x136);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	uint32_t x138 = 3658232U;
	volatile int64_t x139 = 3615LL;
	int64_t x140 = INT64_MAX;
	volatile int64_t t31 = 119751LL;

	t31 = (((x137<=x138)/x139)%x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = INT32_MAX;
	volatile uint64_t x146 = 43084631LLU;
	int64_t x147 = -1LL;
	static int64_t t32 = -146489LL;

	t32 = (((x145<=x146)/x147)%x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 83U;
	uint16_t x150 = 17U;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 15149U;
	static volatile uint32_t t33 = 27274U;

	t33 = (((x149<=x150)/x151)%x152);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 43794086049380665LLU;
	int16_t x156 = -1;
	volatile uint64_t t34 = 384087LLU;

	t34 = (((x153<=x154)/x155)%x156);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 1U;
	static int8_t x159 = -1;

	t35 = (((x157<=x158)/x159)%x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MAX;
	int64_t x162 = -1LL;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile int64_t t36 = 440604538LL;

	t36 = (((x161<=x162)/x163)%x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	int32_t x166 = -1;
	int64_t x167 = -92470LL;
	volatile uint8_t x168 = 3U;

	t37 = (((x165<=x166)/x167)%x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	static int64_t x172 = INT64_MIN;
	volatile int64_t t38 = 116864323729009848LL;

	t38 = (((x169<=x170)/x171)%x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MAX;
	int8_t x174 = INT8_MIN;
	static uint32_t x176 = 6370U;
	static uint32_t t39 = 13U;

	t39 = (((x173<=x174)/x175)%x176);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 9U;
	int64_t x178 = INT64_MIN;
	int64_t x179 = -1LL;
	int8_t x180 = INT8_MIN;
	volatile int64_t t40 = -171056756836593LL;

	t40 = (((x177<=x178)/x179)%x180);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1LL;
	static volatile int16_t x182 = -49;
	int64_t x183 = -1LL;
	volatile int64_t t41 = 48900919737944276LL;

	t41 = (((x181<=x182)/x183)%x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = UINT32_MAX;
	static int16_t x186 = INT16_MIN;
	static uint64_t x187 = UINT64_MAX;
	uint32_t x188 = 22069215U;
	volatile uint64_t t42 = 29077LLU;

	t42 = (((x185<=x186)/x187)%x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -7;
	static int32_t x191 = INT32_MAX;
	int64_t t43 = 1113031503088454LL;

	t43 = (((x189<=x190)/x191)%x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x193 = UINT8_MAX;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	static uint8_t x196 = 1U;
	int32_t t44 = -245346585;

	t44 = (((x193<=x194)/x195)%x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x198 = UINT8_MAX;
	int32_t x200 = INT32_MAX;

	t45 = (((x197<=x198)/x199)%x200);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 62LLU;
	int32_t x202 = INT32_MIN;
	int32_t x203 = -628;
	static int32_t x204 = 8164983;
	static int32_t t46 = -43912;

	t46 = (((x201<=x202)/x203)%x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t47 = -50193;

	t47 = (((x205<=x206)/x207)%x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	static uint16_t x211 = 7U;

	t48 = (((x209<=x210)/x211)%x212);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x213 = 671767588LLU;
	int8_t x214 = -1;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = 1578902448U;
	volatile uint32_t t49 = 346844U;

	t49 = (((x213<=x214)/x215)%x216);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = UINT8_MAX;
	static uint32_t x218 = 87060U;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -447;
	uint32_t t50 = 88473550U;

	t50 = (((x217<=x218)/x219)%x220);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = -1;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 1119U;

	t51 = (((x221<=x222)/x223)%x224);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	static uint64_t x226 = 33577646987LLU;
	static int8_t x227 = -1;
	volatile uint32_t x228 = 14692U;

	t52 = (((x225<=x226)/x227)%x228);

	if (t52 != 10859U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MAX;
	volatile uint64_t t53 = 179485332LLU;

	t53 = (((x229<=x230)/x231)%x232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = 3;
	int32_t x235 = INT32_MIN;
	static int64_t x236 = -1LL;
	volatile int64_t t54 = -284078966LL;

	t54 = (((x233<=x234)/x235)%x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x239 = 88U;
	int16_t x240 = -1;
	static volatile int32_t t55 = 6;

	t55 = (((x237<=x238)/x239)%x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = -1LL;
	static volatile int8_t x242 = INT8_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t56 = -15461;

	t56 = (((x241<=x242)/x243)%x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 126U;
	uint8_t x246 = 7U;
	static int16_t x247 = INT16_MAX;
	static int16_t x248 = -1;

	t57 = (((x245<=x246)/x247)%x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x249 = 14U;
	uint8_t x250 = 5U;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 30U;
	uint64_t t58 = 454144429459LLU;

	t58 = (((x249<=x250)/x251)%x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MAX;
	static int32_t x258 = 25;
	int64_t x259 = INT64_MIN;
	static int8_t x260 = 13;
	volatile int64_t t59 = 1835643781479LL;

	t59 = (((x257<=x258)/x259)%x260);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = -1;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = -4;
	static int32_t t60 = -31;

	t60 = (((x261<=x262)/x263)%x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 109U;
	int32_t x267 = -1707938;
	int32_t x268 = INT32_MIN;
	int32_t t61 = -393;

	t61 = (((x265<=x266)/x267)%x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x270 = 28U;
	static int8_t x271 = -2;

	t62 = (((x269<=x270)/x271)%x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x273 = 785U;
	volatile int8_t x274 = -1;
	volatile uint8_t x275 = 2U;
	uint16_t x276 = 31U;
	volatile int32_t t63 = 756675;

	t63 = (((x273<=x274)/x275)%x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x278 = 7U;
	uint8_t x279 = 1U;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t64 = 6;

	t64 = (((x277<=x278)/x279)%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = UINT8_MAX;
	static int8_t x282 = 34;
	int8_t x284 = -14;
	uint32_t t65 = 52U;

	t65 = (((x281<=x282)/x283)%x284);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 15U;
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = INT32_MIN;
	uint64_t t66 = 1624LLU;

	t66 = (((x285<=x286)/x287)%x288);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -1LL;
	int16_t x290 = INT16_MAX;
	volatile uint32_t x291 = 127922188U;
	int8_t x292 = INT8_MAX;
	volatile uint32_t t67 = 3611807U;

	t67 = (((x289<=x290)/x291)%x292);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x293 = UINT64_MAX;
	volatile int16_t x294 = -1;
	volatile uint16_t x295 = 11141U;
	static uint16_t x296 = 371U;
	int32_t t68 = -62515;

	t68 = (((x293<=x294)/x295)%x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MAX;
	volatile int64_t x300 = -6089LL;
	volatile int64_t t69 = -2265970LL;

	t69 = (((x297<=x298)/x299)%x300);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 1U;
	static int64_t x302 = INT64_MIN;
	uint32_t x303 = 909736777U;
	static uint8_t x304 = 36U;
	static uint32_t t70 = 504932U;

	t70 = (((x301<=x302)/x303)%x304);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	volatile int32_t x306 = -1;
	uint8_t x307 = UINT8_MAX;
	int32_t x308 = 25916;
	volatile int32_t t71 = 0;

	t71 = (((x305<=x306)/x307)%x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 2299;
	uint64_t x312 = UINT64_MAX;
	uint64_t t72 = 12918LLU;

	t72 = (((x309<=x310)/x311)%x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MIN;
	volatile int32_t x314 = INT32_MIN;
	int16_t x316 = -12;
	static volatile int32_t t73 = 49159094;

	t73 = (((x313<=x314)/x315)%x316);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x317 = -1;
	volatile uint64_t x320 = 21225968882LLU;
	uint64_t t74 = 10131041723LLU;

	t74 = (((x317<=x318)/x319)%x320);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x322 = UINT8_MAX;
	static int64_t x323 = -1LL;
	int32_t x324 = 30622892;
	static volatile int64_t t75 = 107891078320LL;

	t75 = (((x321<=x322)/x323)%x324);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x325 = 44018990287LL;
	static volatile int64_t x326 = 374417LL;
	int64_t x327 = INT64_MIN;
	int32_t x328 = 17;
	int64_t t76 = -957LL;

	t76 = (((x325<=x326)/x327)%x328);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	volatile int32_t t77 = 0;

	t77 = (((x329<=x330)/x331)%x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = 423;
	int32_t x334 = -158787930;
	uint64_t x335 = 225057LLU;
	volatile uint64_t t78 = 301412923LLU;

	t78 = (((x333<=x334)/x335)%x336);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x339 = -38402LL;
	static uint32_t x340 = UINT32_MAX;
	static volatile int64_t t79 = 5140170210LL;

	t79 = (((x337<=x338)/x339)%x340);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 13231U;
	volatile uint16_t x342 = 1756U;
	static int16_t x343 = INT16_MAX;
	volatile int16_t x344 = -1;

	t80 = (((x341<=x342)/x343)%x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x347 = INT32_MAX;
	static int16_t x348 = INT16_MAX;
	static int32_t t81 = 1670;

	t81 = (((x345<=x346)/x347)%x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	int32_t x351 = INT32_MIN;
	volatile uint16_t x352 = 1U;
	static volatile int32_t t82 = 0;

	t82 = (((x349<=x350)/x351)%x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 11320584394789756LLU;
	int32_t x354 = -1;

	t83 = (((x353<=x354)/x355)%x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = 0;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = 8884127;
	static volatile int32_t x360 = -784;
	volatile int32_t t84 = -36;

	t84 = (((x357<=x358)/x359)%x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	int32_t t85 = 944;

	t85 = (((x361<=x362)/x363)%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	int8_t x367 = -6;
	volatile uint8_t x368 = 28U;

	t86 = (((x365<=x366)/x367)%x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 43U;
	int8_t x370 = -56;
	uint32_t x371 = 14241304U;

	t87 = (((x369<=x370)/x371)%x372);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x373 = INT32_MAX;
	uint16_t x374 = 122U;
	uint64_t x375 = UINT64_MAX;
	static volatile uint32_t x376 = 17U;
	static uint64_t t88 = 32464883LLU;

	t88 = (((x373<=x374)/x375)%x376);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	volatile int64_t x378 = 318496467919304557LL;
	int8_t x380 = INT8_MAX;
	int32_t t89 = -2348903;

	t89 = (((x377<=x378)/x379)%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = -1;
	int32_t x382 = 0;
	uint64_t x383 = 46460333041LLU;
	int32_t x384 = INT32_MIN;
	volatile uint64_t t90 = 55135LLU;

	t90 = (((x381<=x382)/x383)%x384);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x387 = INT32_MIN;
	volatile int64_t x388 = -1LL;
	volatile int64_t t91 = 0LL;

	t91 = (((x385<=x386)/x387)%x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = 679;
	uint8_t x392 = 1U;
	int32_t t92 = 223272099;

	t92 = (((x389<=x390)/x391)%x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x394 = INT64_MIN;
	uint64_t x395 = 26837295LLU;
	uint32_t x396 = 92620417U;

	t93 = (((x393<=x394)/x395)%x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = 42;
	static int16_t x398 = 1;
	int8_t x400 = -1;
	volatile uint64_t t94 = 1588LLU;

	t94 = (((x397<=x398)/x399)%x400);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 46829LLU;
	volatile int64_t x402 = INT64_MIN;
	int16_t x403 = INT16_MAX;
	int64_t x404 = -1LL;

	t95 = (((x401<=x402)/x403)%x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 33U;
	volatile uint64_t x406 = 1944513LLU;
	uint32_t t96 = 40U;

	t96 = (((x405<=x406)/x407)%x408);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x410 = INT64_MIN;
	int32_t x411 = INT32_MIN;
	static int32_t t97 = -492091;

	t97 = (((x409<=x410)/x411)%x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x413 = INT32_MIN;
	static int64_t x414 = 435807227842119LL;
	volatile int64_t x415 = INT64_MIN;
	int32_t x416 = 3;
	volatile int64_t t98 = 141144414919LL;

	t98 = (((x413<=x414)/x415)%x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x417 = -1;
	int32_t x418 = 0;
	uint16_t x419 = 5U;
	volatile int16_t x420 = INT16_MIN;

	t99 = (((x417<=x418)/x419)%x420);

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

