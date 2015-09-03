#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x11 = 3685223491945251LLU;
int64_t x14 = INT64_MIN;
volatile int8_t x21 = 0;
static volatile int32_t x24 = INT32_MIN;
volatile int16_t x25 = INT16_MIN;
int32_t x27 = INT32_MIN;
volatile int8_t x32 = INT8_MIN;
volatile int32_t t8 = 1584332;
static volatile uint64_t t9 = 14LLU;
int32_t x43 = 57195383;
int32_t x45 = INT32_MAX;
static int64_t x46 = INT64_MIN;
static volatile int64_t x48 = -1LL;
volatile int64_t t15 = 224476819357213LL;
volatile uint32_t x65 = 363366U;
volatile int16_t x66 = INT16_MAX;
int32_t x68 = INT32_MIN;
uint32_t x70 = 195U;
uint64_t x75 = UINT64_MAX;
static volatile uint32_t x78 = 126908U;
static int32_t x79 = 8222404;
int64_t t19 = -2007251213847050LL;
int64_t x84 = INT64_MIN;
int16_t x86 = INT16_MIN;
volatile int64_t t21 = 2035627LL;
int32_t t22 = 76347;
int16_t x97 = -1;
uint16_t x98 = 712U;
int8_t x100 = INT8_MIN;
volatile int64_t t24 = 189LL;
uint16_t x101 = UINT16_MAX;
volatile int8_t x104 = 2;
int32_t x107 = INT32_MIN;
int8_t x113 = INT8_MAX;
int16_t x118 = 0;
static int8_t x136 = INT8_MAX;
uint16_t x138 = 24U;
static uint32_t x145 = UINT32_MAX;
uint64_t x147 = UINT64_MAX;
uint64_t t36 = 354985832010794623LLU;
uint8_t x154 = UINT8_MAX;
int32_t t40 = 467325310;
int32_t t41 = 17817008;
volatile int32_t t48 = -7461;
uint64_t x199 = UINT64_MAX;
int32_t x200 = INT32_MIN;
int64_t x206 = INT64_MIN;
static volatile int32_t t51 = -3965;
static volatile uint8_t x210 = UINT8_MAX;
int32_t x215 = INT32_MIN;
static int8_t x221 = -1;
volatile int64_t t54 = -107668992LL;
int64_t x225 = 1202663528842197LL;
uint8_t x229 = 54U;
int8_t x236 = INT8_MIN;
uint8_t x242 = 127U;
volatile int16_t x248 = 597;
volatile int32_t t61 = -880811;
static int16_t x253 = INT16_MIN;
int8_t x254 = -1;
static int16_t x255 = -1;
static uint32_t x265 = 505U;
static uint8_t x283 = 25U;
volatile int32_t t69 = -163401716;
uint8_t x287 = UINT8_MAX;
volatile uint8_t x288 = 10U;
static uint8_t x294 = UINT8_MAX;
int8_t x296 = 35;
int16_t x302 = INT16_MIN;
uint64_t t73 = 1528431LLU;
static int64_t x305 = 3701384488856410LL;
int32_t t75 = -101;
int16_t x322 = INT16_MIN;
uint8_t x326 = 41U;
static uint32_t x334 = UINT32_MAX;
volatile int32_t t82 = 1202387;
int64_t x342 = INT64_MIN;
uint16_t x343 = 20U;
volatile int8_t x351 = -35;
uint8_t x352 = 5U;
volatile uint64_t x371 = 7349806116LLU;
uint64_t t90 = 60732561643292719LLU;
int8_t x373 = INT8_MIN;
static int8_t x375 = 1;
int32_t t92 = 23140037;
volatile int64_t t93 = 2706LL;
uint16_t x385 = 288U;
uint8_t x386 = 3U;
int32_t x389 = 36672;
int32_t x394 = INT32_MIN;
int32_t t96 = 51919;


void f0(void) {
	int64_t x1 = -88305059336LL;
	uint16_t x2 = 12U;
	int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -420887732;

	t0 = ((x1<=x2)|(x3/x4));

	if (t0 != -16909319) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	static int64_t x6 = INT64_MIN;
	uint8_t x7 = 112U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 319;

	t1 = ((x5<=x6)|(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 31U;
	int8_t x10 = -1;
	static volatile uint8_t x12 = UINT8_MAX;
	volatile uint64_t t2 = 468321705LLU;

	t2 = ((x9<=x10)|(x11/x12));

	if (t2 != 14451856831157LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 7207;
	int64_t x15 = INT64_MAX;
	int8_t x16 = 1;
	int64_t t3 = INT64_MAX;

	t3 = ((x13<=x14)|(x15/x16));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int16_t x18 = -757;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint32_t t4 = 49U;

	t4 = ((x17<=x18)|(x19/x20));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 6056U;
	uint64_t x23 = UINT64_MAX;
	uint64_t t5 = 447LLU;

	t5 = ((x21<=x22)|(x23/x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -705;

	t6 = ((x25<=x26)|(x27/x28));

	if (t6 != -8421503) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int8_t x30 = -1;
	int16_t x31 = INT16_MAX;
	int32_t t7 = 43794;

	t7 = ((x29<=x30)|(x31/x32));

	if (t7 != -255) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -206870269;
	static int64_t x34 = -1LL;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 1;

	t8 = ((x33<=x34)|(x35/x36));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -59251;
	uint8_t x38 = 1U;
	static uint64_t x39 = 178LLU;
	static int8_t x40 = INT8_MAX;

	t9 = ((x37<=x38)|(x39/x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 3778LLU;
	int64_t x42 = -12863LL;
	volatile int32_t x44 = 421084157;
	int32_t t10 = -61339384;

	t10 = ((x41<=x42)|(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MIN;
	volatile int64_t t11 = 2508404690782733526LL;

	t11 = ((x45<=x46)|(x47/x48));

	if (t11 != 128LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 91LL;
	uint32_t x50 = 191U;
	static int64_t x51 = INT64_MAX;
	uint16_t x52 = 535U;
	int64_t t12 = -63511574768938440LL;

	t12 = ((x49<=x50)|(x51/x52));

	if (t12 != 17239947732438833LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 29105237115605365LLU;
	volatile int16_t x54 = 1;
	static uint16_t x55 = 33U;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -10;

	t13 = ((x53<=x54)|(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = -766936217;
	int64_t x59 = INT64_MAX;
	uint16_t x60 = 40U;
	static volatile int64_t t14 = 13487391LL;

	t14 = ((x57<=x58)|(x59/x60));

	if (t14 != 230584300921369395LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 0LL;
	static volatile int8_t x62 = INT8_MIN;
	static int16_t x63 = -1;
	int64_t x64 = 8335730919189LL;

	t15 = ((x61<=x62)|(x63/x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x67 = UINT32_MAX;
	volatile uint32_t t16 = 942678106U;

	t16 = ((x65<=x66)|(x67/x68));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	static uint8_t x71 = 2U;
	volatile int32_t x72 = -1;
	volatile int32_t t17 = 684580791;

	t17 = ((x69<=x70)|(x71/x72));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 68U;
	volatile uint64_t x74 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile uint64_t t18 = 8350950LLU;

	t18 = ((x73<=x74)|(x75/x76));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 6U;
	int64_t x80 = -1LL;

	t19 = ((x77<=x78)|(x79/x80));

	if (t19 != -8222403LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -1;
	static uint64_t x82 = 305658032LLU;
	int8_t x83 = -1;
	volatile int64_t t20 = -3893LL;

	t20 = ((x81<=x82)|(x83/x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int64_t x87 = 107754750494LL;
	int64_t x88 = -1LL;

	t21 = ((x85<=x86)|(x87/x88));

	if (t21 != -107754750494LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static uint64_t x90 = 430392011895LLU;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = -26;

	t22 = ((x89<=x90)|(x91/x92));

	if (t22 != 1260) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 1U;
	static int16_t x94 = INT16_MAX;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = -1;
	volatile int32_t t23 = -425;

	t23 = ((x93<=x94)|(x95/x96));

	if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x99 = INT64_MAX;

	t24 = ((x97<=x98)|(x99/x100));

	if (t24 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -113;
	int8_t x103 = -2;
	volatile int32_t t25 = 11810;

	t25 = ((x101<=x102)|(x103/x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = 11LLU;
	static int64_t x108 = -52627434290328299LL;
	volatile int64_t t26 = -799473403945350465LL;

	t26 = ((x105<=x106)|(x107/x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 3U;
	static volatile uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	uint16_t x112 = 981U;
	volatile int32_t t27 = 1;

	t27 = ((x109<=x110)|(x111/x112));

	if (t27 != -33) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -7478207LL;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = -1;
	volatile uint32_t t28 = 1484258U;

	t28 = ((x113<=x114)|(x115/x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 0;
	uint32_t x119 = 366U;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 394832928LL;

	t29 = ((x117<=x118)|(x119/x120));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 25756865421861LL;
	static uint16_t x122 = 12U;
	static int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -47252;

	t30 = ((x121<=x122)|(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 333U;
	static int16_t x126 = -12959;
	volatile int32_t x127 = INT32_MAX;
	int16_t x128 = 2;
	volatile int32_t t31 = 5750;

	t31 = ((x125<=x126)|(x127/x128));

	if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int32_t x130 = -58;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = 783U;
	volatile int64_t t32 = -9568398LL;

	t32 = ((x129<=x130)|(x131/x132));

	if (t32 != -11779530059840071LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = INT8_MIN;
	volatile uint8_t x134 = 0U;
	int64_t x135 = INT64_MIN;
	int64_t t33 = 3162453869609806407LL;

	t33 = ((x133<=x134)|(x135/x136));

	if (t33 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = INT8_MAX;
	static uint16_t x139 = 28U;
	int16_t x140 = 139;
	int32_t t34 = -7918129;

	t34 = ((x137<=x138)|(x139/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 54U;
	int8_t x144 = -1;
	uint32_t t35 = 1U;

	t35 = ((x141<=x142)|(x143/x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = 1435;
	int32_t x148 = -1;

	t36 = ((x145<=x146)|(x147/x148));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -2074;
	int64_t x150 = -121396LL;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = 21173302;
	int32_t t37 = 507760;

	t37 = ((x149<=x150)|(x151/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -7;
	static uint16_t x155 = UINT16_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 56413738;

	t38 = ((x153<=x154)|(x155/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 417039;
	int32_t x158 = -1216516;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = 28834656LLU;
	volatile uint64_t t39 = 131395629LLU;

	t39 = ((x157<=x158)|(x159/x160));

	if (t39 != 319871061990LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x161 = 56U;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MAX;
	volatile int32_t x164 = INT32_MIN;

	t40 = ((x161<=x162)|(x163/x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = 1;
	uint32_t x166 = 10963U;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = 1U;

	t41 = ((x165<=x166)|(x167/x168));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 130;
	int16_t x170 = 147;
	uint64_t x171 = UINT64_MAX;
	volatile uint16_t x172 = 41U;
	uint64_t t42 = 118990117997LLU;

	t42 = ((x169<=x170)|(x171/x172));

	if (t42 != 449920587163647601LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = 27;
	uint32_t x174 = UINT32_MAX;
	uint8_t x175 = 2U;
	int32_t x176 = -673192;
	volatile int32_t t43 = 69842112;

	t43 = ((x173<=x174)|(x175/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 117398U;
	uint8_t x178 = 0U;
	volatile int8_t x179 = 1;
	static int32_t x180 = -5110;
	volatile int32_t t44 = 204812;

	t44 = ((x177<=x178)|(x179/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	volatile int8_t x182 = -1;
	static int64_t x183 = -1581757259512LL;
	volatile int16_t x184 = INT16_MIN;
	volatile int64_t t45 = -292125769049LL;

	t45 = ((x181<=x182)|(x183/x184));

	if (t45 != 48271401LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = UINT32_MAX;
	int16_t x186 = -824;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = 6;
	int32_t t46 = 0;

	t46 = ((x185<=x186)|(x187/x188));

	if (t46 != 42) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 1;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 7U;
	int32_t t47 = -516;

	t47 = ((x189<=x190)|(x191/x192));

	if (t47 != -306783378) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 2331390957372617210LLU;
	volatile uint32_t x194 = 1U;
	volatile int32_t x195 = INT32_MAX;
	uint8_t x196 = 4U;

	t48 = ((x193<=x194)|(x195/x196));

	if (t48 != 536870911) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 304U;
	int32_t x198 = 0;
	static volatile uint64_t t49 = 189577505285893648LLU;

	t49 = ((x197<=x198)|(x199/x200));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile int64_t x202 = INT64_MIN;
	volatile int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = -3;

	t50 = ((x201<=x202)|(x203/x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 56236LL;
	volatile int16_t x207 = -610;
	static uint16_t x208 = 218U;

	t51 = ((x205<=x206)|(x207/x208));

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 1U;
	static int32_t t52 = 941;

	t52 = ((x209<=x210)|(x211/x212));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = 6;
	int64_t x214 = INT64_MAX;
	volatile int16_t x216 = -4060;
	volatile int32_t t53 = 1713;

	t53 = ((x213<=x214)|(x215/x216));

	if (t53 != 528937) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x222 = INT16_MIN;
	int64_t x223 = 964906655963LL;
	uint16_t x224 = 1U;

	t54 = ((x221<=x222)|(x223/x224));

	if (t54 != 964906655963LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x226 = -1;
	volatile int8_t x227 = -1;
	int64_t x228 = INT64_MAX;
	volatile int64_t t55 = 23759128473329619LL;

	t55 = ((x225<=x226)|(x227/x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t56 = -133420085969LL;

	t56 = ((x229<=x230)|(x231/x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = 38;
	uint16_t x235 = 1631U;
	int32_t t57 = -11561973;

	t57 = ((x233<=x234)|(x235/x236));

	if (t57 != -11) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 45U;
	volatile int64_t x238 = INT64_MAX;
	volatile uint16_t x239 = 419U;
	int8_t x240 = INT8_MAX;
	volatile int32_t t58 = -80;

	t58 = ((x237<=x238)|(x239/x240));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MIN;
	volatile uint8_t x243 = 34U;
	int16_t x244 = INT16_MIN;
	volatile int32_t t59 = -267857;

	t59 = ((x241<=x242)|(x243/x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x245 = 664970U;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = UINT32_MAX;
	uint32_t t60 = 52240U;

	t60 = ((x245<=x246)|(x247/x248));

	if (t60 != 7194251U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MAX;
	volatile int8_t x250 = INT8_MAX;
	int32_t x251 = -260850;
	int16_t x252 = INT16_MIN;

	t61 = ((x249<=x250)|(x251/x252));

	if (t61 != 7) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x256 = INT8_MAX;
	int32_t t62 = -1;

	t62 = ((x253<=x254)|(x255/x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = 1;
	volatile uint8_t x258 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	static int16_t x260 = -1;
	volatile int32_t t63 = 138;

	t63 = ((x257<=x258)|(x259/x260));

	if (t63 != 129) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	static int8_t x262 = -1;
	static uint64_t x263 = 1472839LLU;
	static int32_t x264 = 16;
	volatile uint64_t t64 = 785909687836LLU;

	t64 = ((x261<=x262)|(x263/x264));

	if (t64 != 92052LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x266 = -1354136249933676279LL;
	volatile int64_t x267 = INT64_MIN;
	int32_t x268 = -13774242;
	int64_t t65 = 1798623987002LL;

	t65 = ((x265<=x266)|(x267/x268));

	if (t65 != 669610134398LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = INT16_MIN;
	uint16_t x271 = 5U;
	volatile uint16_t x272 = 16206U;
	volatile int32_t t66 = -254;

	t66 = ((x269<=x270)|(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	int64_t t67 = -48362363LL;

	t67 = ((x273<=x274)|(x275/x276));

	if (t67 != 281474976710656LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 7U;
	int32_t t68 = -1980;

	t68 = ((x277<=x278)|(x279/x280));

	if (t68 != -4681) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = 499;
	int8_t x284 = 1;

	t69 = ((x281<=x282)|(x283/x284));

	if (t69 != 25) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 33737449794LL;
	int64_t x286 = INT64_MIN;
	int32_t t70 = 237024;

	t70 = ((x285<=x286)|(x287/x288));

	if (t70 != 25) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x295 = 699222041LLU;
	static uint64_t t71 = 243105601835702LLU;

	t71 = ((x293<=x294)|(x295/x296));

	if (t71 != 19977773LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 0;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = INT16_MIN;
	static uint64_t x300 = 44696069555LLU;
	uint64_t t72 = 30135729816LLU;

	t72 = ((x297<=x298)|(x299/x300));

	if (t72 != 412715128LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	uint64_t x303 = UINT64_MAX;
	uint64_t x304 = UINT64_MAX;

	t73 = ((x301<=x302)|(x303/x304));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x306 = -1;
	static volatile uint8_t x307 = UINT8_MAX;
	uint64_t x308 = 725262LLU;
	static volatile uint64_t t74 = 24321LLU;

	t74 = ((x305<=x306)|(x307/x308));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = 0;
	uint32_t x310 = UINT32_MAX;
	static int32_t x311 = 1927494;
	volatile int32_t x312 = INT32_MIN;

	t75 = ((x309<=x310)|(x311/x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 7309U;
	int8_t x314 = -1;
	uint64_t x315 = 53517228185LLU;
	volatile int32_t x316 = 28769192;
	volatile uint64_t t76 = 62350LLU;

	t76 = ((x313<=x314)|(x315/x316));

	if (t76 != 1861LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x317 = 2;
	volatile int64_t x318 = INT64_MIN;
	uint16_t x319 = 59U;
	int32_t x320 = -1;
	volatile int32_t t77 = 87;

	t77 = ((x317<=x318)|(x319/x320));

	if (t77 != -59) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = 0;
	volatile uint8_t x323 = UINT8_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t78 = -91;

	t78 = ((x321<=x322)|(x323/x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile uint32_t x328 = 858841U;
	uint32_t t79 = 9575795U;

	t79 = ((x325<=x326)|(x327/x328));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x330 = 324U;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t80 = 9560914LL;

	t80 = ((x329<=x330)|(x331/x332));

	if (t80 != -65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	volatile int16_t x335 = 379;
	volatile uint8_t x336 = 1U;
	volatile int32_t t81 = 2125;

	t81 = ((x333<=x334)|(x335/x336));

	if (t81 != 379) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 0U;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -20;
	volatile int32_t x340 = INT32_MIN;

	t82 = ((x337<=x338)|(x339/x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MIN;
	int32_t x344 = 26;
	volatile int32_t t83 = 12523;

	t83 = ((x341<=x342)|(x343/x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 8276305126LLU;
	int16_t x346 = INT16_MIN;
	static uint32_t x347 = 1700416U;
	volatile int32_t x348 = -1;
	uint32_t t84 = 2826U;

	t84 = ((x345<=x346)|(x347/x348));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int8_t x350 = INT8_MIN;
	int32_t t85 = 16132637;

	t85 = ((x349<=x350)|(x351/x352));

	if (t85 != -7) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	uint8_t x354 = 0U;
	uint64_t x355 = 484699114LLU;
	int64_t x356 = INT64_MIN;
	uint64_t t86 = 440004895LLU;

	t86 = ((x353<=x354)|(x355/x356));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x357 = 23U;
	volatile int64_t x358 = -1845691357262747LL;
	int32_t x359 = 53226324;
	int8_t x360 = INT8_MIN;
	static int32_t t87 = 2027;

	t87 = ((x357<=x358)|(x359/x360));

	if (t87 != -415830) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = INT32_MIN;
	static int16_t x362 = -1;
	volatile int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t88 = 1473;

	t88 = ((x361<=x362)|(x363/x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = -35;
	int16_t x366 = INT16_MIN;
	uint16_t x367 = 1U;
	volatile int8_t x368 = INT8_MAX;
	int32_t t89 = -701659320;

	t89 = ((x365<=x366)|(x367/x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x369 = 0U;
	volatile int16_t x370 = -1;
	int64_t x372 = -39483979287461LL;

	t90 = ((x369<=x370)|(x371/x372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = -11;
	int16_t x376 = INT16_MAX;
	static int32_t t91 = -53;

	t91 = ((x373<=x374)|(x375/x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x377 = 27380527991115857LLU;
	int32_t x378 = INT32_MIN;
	int32_t x379 = 29147;
	static volatile int8_t x380 = -1;

	t92 = ((x377<=x378)|(x379/x380));

	if (t92 != -29147) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x381 = 120U;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 1025502U;
	volatile int64_t x384 = -926144169LL;

	t93 = ((x381<=x382)|(x383/x384));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x387 = INT16_MIN;
	int64_t x388 = -191LL;
	volatile int64_t t94 = 31664517LL;

	t94 = ((x385<=x386)|(x387/x388));

	if (t94 != 171LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x390 = 159647LL;
	uint16_t x391 = 12U;
	static int16_t x392 = -1;
	volatile int32_t t95 = 27208418;

	t95 = ((x389<=x390)|(x391/x392));

	if (t95 != -11) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = UINT32_MAX;
	int16_t x395 = 3598;
	static int32_t x396 = INT32_MAX;

	t96 = ((x393<=x394)|(x395/x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = 91U;
	static uint32_t x398 = 11U;
	uint64_t x399 = 198LLU;
	int8_t x400 = INT8_MIN;
	uint64_t t97 = 10576LLU;

	t97 = ((x397<=x398)|(x399/x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int64_t x403 = 7959973076684658LL;
	int8_t x404 = -1;
	volatile int64_t t98 = 209043976435LL;

	t98 = ((x401<=x402)|(x403/x404));

	if (t98 != -7959973076684658LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -5;
	static int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = INT16_MIN;
	int64_t t99 = -384LL;

	t99 = ((x405<=x406)|(x407/x408));

	if (t99 != 281474976710657LL) { NG(); } else { ; }
	
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

