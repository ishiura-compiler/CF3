#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 1050420405;
int32_t t1 = -7;
static int8_t x9 = 1;
int16_t x20 = 0;
int8_t x31 = INT8_MIN;
int8_t x37 = INT8_MIN;
int64_t x41 = INT64_MIN;
int32_t x52 = -205;
int32_t t12 = -362;
uint64_t x55 = 4272LLU;
volatile uint64_t x56 = UINT64_MAX;
int8_t x69 = -21;
static volatile int64_t x73 = -1LL;
uint16_t x76 = UINT16_MAX;
volatile uint8_t x79 = 1U;
static uint64_t x80 = 349784LLU;
volatile int64_t x83 = 389766668814LL;
uint8_t x91 = 2U;
int8_t x92 = INT8_MAX;
uint8_t x95 = 3U;
volatile uint32_t t23 = 3539303U;
int32_t x97 = -1;
volatile uint16_t x101 = 345U;
volatile int16_t x102 = -3;
uint16_t x107 = 375U;
static int8_t x115 = 0;
volatile int32_t t28 = 15331444;
int8_t x124 = INT8_MAX;
int64_t x127 = -1LL;
volatile int32_t x128 = -1;
int64_t x136 = -1LL;
static int32_t x137 = 649378;
uint16_t x148 = UINT16_MAX;
int8_t x149 = INT8_MAX;
int8_t x150 = INT8_MAX;
int32_t t37 = -1565510;
volatile int32_t x168 = INT32_MAX;
uint16_t x169 = 0U;
int32_t x174 = 20540;
uint64_t t43 = 265442832842212LLU;
volatile int8_t x182 = -6;
int64_t x188 = INT64_MAX;
static uint8_t x195 = 121U;
int8_t x196 = INT8_MAX;
volatile int32_t t48 = 0;
volatile int32_t x197 = -1;
static int32_t x200 = INT32_MAX;
int16_t x201 = -1;
volatile uint8_t x205 = UINT8_MAX;
static volatile uint32_t x206 = 3U;
int16_t x207 = INT16_MAX;
static int64_t t51 = -193421672511LL;
int64_t x214 = 1967039LL;
int64_t x218 = -632105801864LL;
int16_t x227 = INT16_MIN;
int8_t x229 = INT8_MIN;
static int64_t t58 = -49031LL;
int64_t x243 = -19304038674220LL;
volatile int64_t x244 = INT64_MIN;
int64_t x247 = INT64_MAX;
uint8_t x264 = UINT8_MAX;
int8_t x272 = 1;
int32_t t70 = 3;
volatile int32_t t73 = 1525541;
volatile int8_t x305 = 0;
volatile int64_t x307 = 1357332626106LL;
static volatile int32_t t76 = -4767;
int16_t x309 = INT16_MAX;
volatile int32_t t77 = 239;
int32_t x322 = INT32_MIN;
volatile int32_t t80 = -2387243;
int8_t x325 = INT8_MIN;
int32_t x328 = INT32_MIN;
int16_t x333 = -2497;
int64_t x350 = 1225115829422LL;
int64_t x354 = 19690095LL;
static volatile uint16_t x357 = 3U;
volatile int16_t x361 = -1;
int64_t x369 = -1LL;
volatile uint8_t x374 = 0U;
int8_t x379 = INT8_MIN;
uint32_t x381 = 1764U;
uint8_t x382 = 2U;
static int16_t x392 = INT16_MAX;
volatile int64_t x393 = -1LL;
int8_t x394 = 3;
static int8_t x399 = INT8_MIN;
int32_t t99 = -75223050;


void f0(void) {
	static uint8_t x1 = 1U;
	volatile int16_t x2 = -1;
	volatile int32_t x3 = 2653701;
	int64_t x4 = 95287563411416180LL;
	int64_t t0 = -50742171356134334LL;

	t0 = ((x1<(x2<=x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	int8_t x7 = -1;

	t1 = ((x5<(x6<=x7))&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 829738007LLU;
	int8_t x11 = -1;
	volatile int64_t x12 = -1LL;
	volatile int64_t t2 = -1294685890429590LL;

	t2 = ((x9<(x10<=x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = 207976350639992551LLU;
	int32_t x15 = -1;
	static uint16_t x16 = 3657U;
	volatile int32_t t3 = 4035;

	t3 = ((x13<(x14<=x15))&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int64_t x18 = -6848958930257LL;
	uint16_t x19 = 391U;
	volatile int32_t t4 = 1;

	t4 = ((x17<(x18<=x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1199U;
	volatile int32_t x22 = -54569;
	int64_t x23 = -1LL;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 90718;

	t5 = ((x21<(x22<=x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 7;
	volatile uint64_t x26 = 1350LLU;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -1182590698248LL;
	volatile int64_t t6 = 506582367000515133LL;

	t6 = ((x25<(x26<=x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint8_t x30 = 0U;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = -276797648;

	t7 = ((x29<(x30<=x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 2U;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	volatile uint64_t x36 = 443508750LLU;
	uint64_t t8 = 1481286165073LLU;

	t8 = ((x33<(x34<=x35))&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	volatile int64_t x39 = INT64_MIN;
	static uint32_t x40 = 522505U;
	volatile uint32_t t9 = 6112441U;

	t9 = ((x37<(x38<=x39))&x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	static int8_t x43 = -1;
	int32_t x44 = -110967495;
	volatile int32_t t10 = -15334288;

	t10 = ((x41<(x42<=x43))&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	uint16_t x46 = 918U;
	volatile uint8_t x47 = 1U;
	static int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = -1218387657LL;

	t11 = ((x45<(x46<=x47))&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static int32_t x50 = INT32_MAX;
	uint16_t x51 = 9390U;

	t12 = ((x49<(x50<=x51))&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = -1;
	volatile uint64_t t13 = 99957358622603LLU;

	t13 = ((x53<(x54<=x55))&x56);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -8060357512LL;
	int64_t x59 = -125291LL;
	static uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 294987309045LLU;

	t14 = ((x57<(x58<=x59))&x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -122910558095LL;
	static volatile int64_t x62 = -3700850216865LL;
	uint32_t x63 = UINT32_MAX;
	static uint16_t x64 = 825U;
	static volatile int32_t t15 = -1;

	t15 = ((x61<(x62<=x63))&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 285U;
	int32_t x66 = -1;
	volatile uint32_t x67 = 969678U;
	uint64_t x68 = 301459786474991LLU;
	volatile uint64_t t16 = 2815660894151757096LLU;

	t16 = ((x65<(x66<=x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 4249705127215827114LL;
	uint64_t x71 = 415833018135293431LLU;
	int64_t x72 = -1LL;
	int64_t t17 = -47666986565403LL;

	t17 = ((x69<(x70<=x71))&x72);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 39;
	volatile int8_t x75 = INT8_MIN;
	int32_t t18 = 20638;

	t18 = ((x73<(x74<=x75))&x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 1LL;
	static int64_t x78 = -1LL;
	volatile uint64_t t19 = 8940354942127234LLU;

	t19 = ((x77<(x78<=x79))&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = INT64_MIN;
	uint8_t x84 = 1U;
	static volatile int32_t t20 = -391076;

	t20 = ((x81<(x82<=x83))&x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 29U;
	volatile uint8_t x86 = 0U;
	volatile int32_t x87 = -135972259;
	volatile int16_t x88 = -1;
	int32_t t21 = 51748078;

	t21 = ((x85<(x86<=x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	uint16_t x90 = UINT16_MAX;
	volatile int32_t t22 = -3;

	t22 = ((x89<(x90<=x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = -29133;
	int16_t x94 = -1;
	uint32_t x96 = 538429U;

	t23 = ((x93<(x94<=x95))&x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MAX;
	volatile int16_t x99 = INT16_MAX;
	int8_t x100 = -1;
	static volatile int32_t t24 = -14818;

	t24 = ((x97<(x98<=x99))&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -5876457853453373LL;

	t25 = ((x101<(x102<=x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = 0;
	static volatile uint16_t x106 = UINT16_MAX;
	volatile int32_t x108 = 140201515;
	int32_t t26 = 539113078;

	t26 = ((x105<(x106<=x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static uint8_t x110 = 49U;
	uint16_t x111 = 54U;
	uint64_t x112 = 492638705415079LLU;
	uint64_t t27 = 13052756612674LLU;

	t27 = ((x109<(x110<=x111))&x112);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x114 = INT8_MIN;
	volatile uint8_t x116 = 43U;

	t28 = ((x113<(x114<=x115))&x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MAX;
	uint16_t x120 = 7122U;
	volatile int32_t t29 = -1;

	t29 = ((x117<(x118<=x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -19478958039665LL;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -1LL;
	int32_t t30 = -2776;

	t30 = ((x121<(x122<=x123))&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -14;
	static int32_t x126 = 12235;
	static int32_t t31 = 19568781;

	t31 = ((x125<(x126<=x127))&x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	int32_t x130 = INT32_MIN;
	static uint16_t x131 = UINT16_MAX;
	static int8_t x132 = INT8_MAX;
	static int32_t t32 = 2071235;

	t32 = ((x129<(x130<=x131))&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint32_t x134 = 897U;
	static volatile int8_t x135 = INT8_MIN;
	volatile int64_t t33 = -23102319227128LL;

	t33 = ((x133<(x134<=x135))&x136);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = INT32_MIN;
	int32_t x139 = -1;
	static uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = 85;

	t34 = ((x137<(x138<=x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MAX;
	static uint8_t x143 = 1U;
	uint16_t x144 = 75U;
	int32_t t35 = 1993;

	t35 = ((x141<(x142<=x143))&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -6;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = 0U;
	int32_t t36 = -165234105;

	t36 = ((x145<(x146<=x147))&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x151 = 1U;
	int8_t x152 = 5;

	t37 = ((x149<(x150<=x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	uint64_t x154 = 60079680LLU;
	static int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t38 = 2054439588983101LLU;

	t38 = ((x153<(x154<=x155))&x156);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 2650;
	uint8_t x158 = UINT8_MAX;
	volatile uint32_t x159 = 37U;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 195756;

	t39 = ((x157<(x158<=x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = 18108499518912669LLU;
	int16_t x162 = -710;
	volatile int16_t x163 = 194;
	int64_t x164 = -15652LL;
	int64_t t40 = -60316590LL;

	t40 = ((x161<(x162<=x163))&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	volatile int32_t x167 = INT32_MAX;
	int32_t t41 = 1;

	t41 = ((x165<(x166<=x167))&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	uint32_t x172 = 1281U;
	volatile uint32_t t42 = 5357017U;

	t42 = ((x169<(x170<=x171))&x172);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 3869251U;
	volatile int32_t x175 = INT32_MIN;
	uint64_t x176 = 634168830LLU;

	t43 = ((x173<(x174<=x175))&x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -4;
	uint32_t x178 = 139U;
	int64_t x179 = -264247503477LL;
	uint8_t x180 = 124U;
	int32_t t44 = -46160078;

	t44 = ((x177<(x178<=x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x183 = 61622129;
	volatile int32_t x184 = -1;
	volatile int32_t t45 = 562528847;

	t45 = ((x181<(x182<=x183))&x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 436U;
	uint32_t x186 = 126394255U;
	int8_t x187 = -1;
	int64_t t46 = -2354LL;

	t46 = ((x185<(x186<=x187))&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	int64_t x190 = -1LL;
	static uint16_t x191 = UINT16_MAX;
	int8_t x192 = 1;
	volatile int32_t t47 = -10849;

	t47 = ((x189<(x190<=x191))&x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 46U;
	uint8_t x194 = UINT8_MAX;

	t48 = ((x193<(x194<=x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -1LL;
	volatile int32_t x199 = -1;
	volatile int32_t t49 = -304;

	t49 = ((x197<(x198<=x199))&x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 1711U;
	static volatile int32_t x203 = -134249;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 1248330;

	t50 = ((x201<(x202<=x203))&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x208 = INT64_MIN;

	t51 = ((x205<(x206<=x207))&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1192;
	static int64_t x211 = 656693024481219778LL;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = -29996880503LL;

	t52 = ((x209<(x210<=x211))&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 8U;
	static int32_t x215 = 1;
	int32_t x216 = -223506;
	int32_t t53 = 434038361;

	t53 = ((x213<(x214<=x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -5313;
	volatile uint8_t x219 = 37U;
	int64_t x220 = -1LL;
	int64_t t54 = 4636734474LL;

	t54 = ((x217<(x218<=x219))&x220);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 73621;
	volatile int32_t x222 = -33017793;
	static uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -33781505;

	t55 = ((x221<(x222<=x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	volatile int16_t x226 = INT16_MIN;
	int32_t x228 = 434;
	static int32_t t56 = -81893;

	t56 = ((x225<(x226<=x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -3255875;

	t57 = ((x229<(x230<=x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 28372648U;
	volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = UINT8_MAX;
	volatile int64_t x236 = INT64_MIN;

	t58 = ((x233<(x234<=x235))&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 1;
	static int16_t x238 = -1;
	int16_t x239 = -30;
	static int16_t x240 = -1;
	static volatile int32_t t59 = -6155;

	t59 = ((x237<(x238<=x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 9956U;
	int16_t x242 = -1;
	volatile int64_t t60 = 283404003LL;

	t60 = ((x241<(x242<=x243))&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 435038U;
	int32_t x246 = 22;
	int8_t x248 = 0;
	static int32_t t61 = -3958585;

	t61 = ((x245<(x246<=x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = 6282167U;
	int64_t x252 = INT64_MAX;
	int64_t t62 = 29528LL;

	t62 = ((x249<(x250<=x251))&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 0;
	int16_t x254 = -247;
	volatile int16_t x255 = 928;
	int16_t x256 = INT16_MAX;
	static int32_t t63 = 28401;

	t63 = ((x253<(x254<=x255))&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	volatile uint16_t x260 = UINT16_MAX;
	static int32_t t64 = -28741;

	t64 = ((x257<(x258<=x259))&x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	volatile int32_t t65 = -32;

	t65 = ((x261<(x262<=x263))&x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 0LL;
	volatile uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	static uint32_t x268 = 374419U;
	volatile uint32_t t66 = 18945212U;

	t66 = ((x265<(x266<=x267))&x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	static volatile uint64_t x270 = UINT64_MAX;
	static int32_t x271 = INT32_MIN;
	volatile int32_t t67 = 2076;

	t67 = ((x269<(x270<=x271))&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = -822LL;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 553302455;

	t68 = ((x273<(x274<=x275))&x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int16_t x278 = INT16_MAX;
	uint8_t x279 = 9U;
	int8_t x280 = INT8_MIN;
	int32_t t69 = -5724848;

	t69 = ((x277<(x278<=x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int8_t x282 = -1;
	uint64_t x283 = 45584442LLU;
	volatile int16_t x284 = -1;

	t70 = ((x281<(x282<=x283))&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = INT64_MAX;
	static int16_t x286 = -1;
	int32_t x287 = -80952369;
	static volatile uint32_t x288 = 1558179U;
	uint32_t t71 = 68U;

	t71 = ((x285<(x286<=x287))&x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	volatile int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = 24120LL;

	t72 = ((x289<(x290<=x291))&x292);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = 87U;
	int8_t x295 = 0;
	int16_t x296 = -1;

	t73 = ((x293<(x294<=x295))&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	static uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 14U;
	volatile int16_t x300 = INT16_MAX;
	static int32_t t74 = 2345;

	t74 = ((x297<(x298<=x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t75 = 16;

	t75 = ((x301<(x302<=x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MAX;
	static uint16_t x308 = UINT16_MAX;

	t76 = ((x305<(x306<=x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x310 = INT16_MIN;
	volatile int16_t x311 = -1;
	int8_t x312 = INT8_MAX;

	t77 = ((x309<(x310<=x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 23U;
	volatile uint32_t x314 = 64227U;
	uint32_t x315 = 95U;
	uint32_t x316 = 163U;
	uint32_t t78 = 72U;

	t78 = ((x313<(x314<=x315))&x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	int32_t x318 = -1;
	static uint32_t x319 = 52490U;
	int8_t x320 = -35;
	static int32_t t79 = 8;

	t79 = ((x317<(x318<=x319))&x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	int8_t x323 = -14;
	uint16_t x324 = 110U;

	t80 = ((x321<(x322<=x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MAX;
	static int8_t x327 = -4;
	static int32_t t81 = -8874828;

	t81 = ((x325<(x326<=x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = INT32_MIN;
	static uint8_t x331 = 28U;
	volatile int64_t x332 = INT64_MIN;
	static int64_t t82 = 485752842204486876LL;

	t82 = ((x329<(x330<=x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	volatile uint16_t x335 = UINT16_MAX;
	int8_t x336 = 6;
	volatile int32_t t83 = 48792420;

	t83 = ((x333<(x334<=x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = 20334022LL;
	int32_t x338 = INT32_MIN;
	volatile uint64_t x339 = UINT64_MAX;
	uint16_t x340 = 7550U;
	int32_t t84 = -259;

	t84 = ((x337<(x338<=x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	volatile int64_t x342 = -69173591LL;
	static int32_t x343 = -1;
	volatile uint8_t x344 = 1U;
	static int32_t t85 = 1089995;

	t85 = ((x341<(x342<=x343))&x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int64_t x346 = -1LL;
	static int8_t x347 = -61;
	static volatile int32_t x348 = 173371;
	volatile int32_t t86 = -1;

	t86 = ((x345<(x346<=x347))&x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	static int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = 2U;
	volatile int32_t t87 = -1;

	t87 = ((x349<(x350<=x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	static uint64_t x355 = 258483875271539848LLU;
	uint8_t x356 = 0U;
	static volatile int32_t t88 = 874;

	t88 = ((x353<(x354<=x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 384318675U;
	volatile int32_t x359 = INT32_MIN;
	static uint64_t x360 = 53477342678LLU;
	static uint64_t t89 = 13000LLU;

	t89 = ((x357<(x358<=x359))&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = -1;
	uint64_t x364 = 38269242133191LLU;
	volatile uint64_t t90 = 8170278921971590LLU;

	t90 = ((x361<(x362<=x363))&x364);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MIN;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = -2;
	int32_t x368 = 1;
	int32_t t91 = 26720577;

	t91 = ((x365<(x366<=x367))&x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MIN;
	static int8_t x371 = INT8_MIN;
	int8_t x372 = -1;
	volatile int32_t t92 = -30314;

	t92 = ((x369<(x370<=x371))&x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 50U;
	volatile uint16_t x375 = UINT16_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t93 = 44522162764LLU;

	t93 = ((x373<(x374<=x375))&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 360060561939LL;
	volatile int16_t x378 = -5297;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = -14354886;

	t94 = ((x377<(x378<=x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -1;
	uint64_t x384 = 1LLU;
	volatile uint64_t t95 = 239209296269287084LLU;

	t95 = ((x381<(x382<=x383))&x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	uint64_t x388 = 110701472637LLU;
	static volatile uint64_t t96 = 97220083871797LLU;

	t96 = ((x385<(x386<=x387))&x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = 0U;
	int16_t x390 = -1;
	static int16_t x391 = 28;
	volatile int32_t t97 = 271761495;

	t97 = ((x389<(x390<=x391))&x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x395 = 3U;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -1;

	t98 = ((x393<(x394<=x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -6117389LL;
	static int64_t x398 = -26633485LL;
	volatile uint16_t x400 = UINT16_MAX;

	t99 = ((x397<(x398<=x399))&x400);

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

