#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 0;
uint32_t x17 = 155810798U;
uint16_t x25 = 1U;
int16_t x27 = -169;
volatile int32_t t3 = 151;
volatile int16_t x35 = INT16_MIN;
int8_t x47 = INT8_MAX;
static uint8_t x55 = 0U;
volatile int32_t t9 = 1666;
int16_t x64 = INT16_MIN;
volatile int32_t t11 = 64992;
volatile int32_t t13 = -244562;
uint32_t x79 = UINT32_MAX;
static int32_t t15 = 13102216;
static int16_t x103 = INT16_MIN;
volatile uint64_t x108 = 1775296928217732LLU;
uint64_t x117 = 142128703947872631LLU;
int64_t x120 = INT64_MIN;
static int32_t x121 = INT32_MIN;
volatile int16_t x130 = INT16_MIN;
int16_t x132 = -1935;
uint8_t x135 = UINT8_MAX;
uint8_t x137 = 96U;
uint32_t x144 = UINT32_MAX;
int8_t x146 = INT8_MIN;
static volatile uint32_t x158 = UINT32_MAX;
uint8_t x159 = 3U;
static volatile int32_t t33 = -156;
int8_t x165 = -1;
int64_t x168 = INT64_MAX;
int16_t x175 = -1;
static int16_t x178 = INT16_MIN;
uint32_t x180 = UINT32_MAX;
static uint32_t x181 = UINT32_MAX;
int8_t x204 = INT8_MIN;
volatile int32_t t41 = 468;
int16_t x205 = -4;
int8_t x209 = INT8_MAX;
static int64_t x211 = -246889394308969LL;
static uint16_t x217 = 9632U;
int16_t x218 = -3810;
int32_t t45 = -25403;
int64_t x224 = INT64_MIN;
int8_t x236 = -2;
volatile int32_t t49 = 13;
int64_t x237 = 4929613405LL;
int64_t x238 = INT64_MIN;
uint64_t x239 = 8LLU;
volatile int32_t x244 = -468;
volatile int32_t x255 = 1;
volatile int64_t x258 = -156674210143LL;
volatile uint32_t x259 = 106438U;
int16_t x272 = INT16_MIN;
int16_t x282 = 1;
static int16_t x285 = 11;
static uint16_t x301 = 715U;
int8_t x302 = INT8_MIN;
static int16_t x304 = INT16_MIN;
volatile int16_t x307 = INT16_MIN;
volatile int32_t t63 = -1762;
static volatile int64_t x316 = -17988410687225319LL;
volatile int32_t t64 = 3274671;
static int8_t x319 = -1;
static int32_t t65 = -47;
volatile int64_t x333 = INT64_MIN;
volatile int8_t x335 = INT8_MAX;
static volatile int16_t x339 = INT16_MIN;
int16_t x340 = 10;
int8_t x364 = INT8_MIN;
int32_t t72 = 3684619;
int64_t x369 = INT64_MIN;
int16_t x373 = -166;
int8_t x385 = INT8_MIN;
static uint64_t x393 = 5427227275475LLU;
uint64_t x405 = 7147LLU;
uint64_t x407 = 671570LLU;
static uint32_t x409 = 93500U;
int16_t x410 = INT16_MAX;
int32_t t79 = -1705704;
int16_t x418 = -1;
static uint16_t x419 = UINT16_MAX;
int16_t x439 = 0;
static int32_t t85 = 1;
static volatile int32_t t86 = -2;
int8_t x479 = -1;
static int16_t x487 = INT16_MIN;
int16_t x488 = INT16_MAX;
volatile int64_t x492 = -773555LL;
volatile int32_t t90 = -1;
int16_t x494 = INT16_MIN;
uint32_t x495 = 13U;
int64_t x498 = -491261030241927427LL;
int8_t x499 = -6;
int8_t x500 = INT8_MIN;
int64_t x514 = 516298376780530LL;
static uint32_t x516 = 370850859U;
static volatile uint8_t x531 = 1U;
uint64_t x541 = 6576029295335763442LLU;
volatile uint32_t x550 = 3646561U;
int8_t x551 = INT8_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int16_t x2 = INT16_MAX;
	uint64_t x3 = 4051LLU;
	static int32_t x4 = INT32_MIN;

	t0 = ((x1==(x2*x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 810413;
	static int16_t x10 = 0;
	volatile uint16_t x11 = UINT16_MAX;
	static volatile int64_t x12 = INT64_MAX;
	static int32_t t1 = 14;

	t1 = ((x9==(x10*x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MIN;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t2 = 148331804;

	t2 = ((x17==(x18*x19))<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x26 = 917;
	static uint8_t x28 = 8U;

	t3 = ((x25==(x26*x27))<x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	static int16_t x30 = -1;
	static uint16_t x31 = UINT16_MAX;
	static int16_t x32 = -6;
	volatile int32_t t4 = -244748;

	t4 = ((x29==(x30*x31))<x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 48;
	volatile int32_t x34 = 1;
	uint8_t x36 = UINT8_MAX;
	static int32_t t5 = -324581;

	t5 = ((x33==(x34*x35))<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 15U;
	int8_t x38 = 1;
	static int8_t x39 = INT8_MIN;
	uint32_t x40 = 0U;
	int32_t t6 = 375662;

	t6 = ((x37==(x38*x39))<x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 3U;
	int16_t x42 = -1;
	uint64_t x43 = 1767775995703596LLU;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t7 = -24722;

	t7 = ((x41==(x42*x43))<x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	static uint16_t x46 = UINT16_MAX;
	static uint16_t x48 = 72U;
	volatile int32_t t8 = -57038;

	t8 = ((x45==(x46*x47))<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MAX;
	int64_t x54 = 73884042813LL;
	volatile uint32_t x56 = 134596459U;

	t9 = ((x53==(x54*x55))<x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = -1;
	uint16_t x58 = 0U;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t10 = 796;

	t10 = ((x57==(x58*x59))<x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = UINT64_MAX;
	uint64_t x62 = UINT64_MAX;
	static int8_t x63 = INT8_MAX;

	t11 = ((x61==(x62*x63))<x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x65 = 818LLU;
	int16_t x66 = -1;
	static uint64_t x67 = 805995348LLU;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t12 = 32;

	t12 = ((x65==(x66*x67))<x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = 86U;
	int16_t x71 = -1;
	static int64_t x72 = -1LL;

	t13 = ((x69==(x70*x71))<x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint32_t x75 = 9U;
	int32_t x76 = 42647553;
	int32_t t14 = 4;

	t14 = ((x73==(x74*x75))<x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x77 = 1;
	uint32_t x78 = 27459U;
	int16_t x80 = INT16_MIN;

	t15 = ((x77==(x78*x79))<x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x81 = 16826366927LLU;
	static uint8_t x82 = UINT8_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int32_t x84 = -1;
	static int32_t t16 = 105;

	t16 = ((x81==(x82*x83))<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MIN;
	int32_t x86 = 53188725;
	volatile uint8_t x87 = 31U;
	int64_t x88 = INT64_MIN;
	int32_t t17 = 31;

	t17 = ((x85==(x86*x87))<x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t18 = 1040859479;

	t18 = ((x89==(x90*x91))<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = 474LL;
	uint16_t x98 = 19547U;
	static uint8_t x99 = 10U;
	int8_t x100 = -1;
	int32_t t19 = -380;

	t19 = ((x97==(x98*x99))<x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = INT16_MAX;
	static int8_t x104 = INT8_MAX;
	volatile int32_t t20 = 1004904570;

	t20 = ((x101==(x102*x103))<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	volatile uint16_t x106 = 77U;
	volatile uint64_t x107 = 2172953112719296LLU;
	int32_t t21 = 25997;

	t21 = ((x105==(x106*x107))<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 9824374U;
	int32_t x110 = 1909854;
	int64_t x111 = -99331388LL;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t22 = 1325433;

	t22 = ((x109==(x110*x111))<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	static int16_t x114 = 165;
	volatile uint8_t x115 = 99U;
	volatile int8_t x116 = -1;
	int32_t t23 = 21;

	t23 = ((x113==(x114*x115))<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	int32_t t24 = -270428;

	t24 = ((x117==(x118*x119))<x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x122 = -59;
	static int8_t x123 = -13;
	volatile int64_t x124 = -1LL;
	int32_t t25 = 2468;

	t25 = ((x121==(x122*x123))<x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x125 = 2771U;
	int32_t x126 = 18429;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	static int32_t t26 = -759221683;

	t26 = ((x125==(x126*x127))<x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x129 = UINT32_MAX;
	uint64_t x131 = 942526883732486617LLU;
	int32_t t27 = -4;

	t27 = ((x129==(x130*x131))<x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = 103858465417834LL;
	uint32_t x134 = 16172U;
	volatile int32_t x136 = INT32_MAX;
	int32_t t28 = 203214546;

	t28 = ((x133==(x134*x135))<x136);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = 20117U;
	uint8_t x140 = 1U;
	static int32_t t29 = -3427;

	t29 = ((x137==(x138*x139))<x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = -271924652850LL;
	uint32_t x142 = 47448948U;
	int16_t x143 = -1;
	volatile int32_t t30 = -920675;

	t30 = ((x141==(x142*x143))<x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x145 = UINT16_MAX;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t31 = 1;

	t31 = ((x145==(x146*x147))<x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 662U;
	int32_t x150 = -1967834;
	volatile uint32_t x151 = 7111092U;
	volatile uint64_t x152 = 57LLU;
	volatile int32_t t32 = -7;

	t32 = ((x149==(x150*x151))<x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -364223142;
	int32_t x160 = INT32_MIN;

	t33 = ((x157==(x158*x159))<x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x161 = 874147672540445LLU;
	int16_t x162 = -224;
	static int8_t x163 = INT8_MIN;
	uint16_t x164 = 2278U;
	static volatile int32_t t34 = -14004;

	t34 = ((x161==(x162*x163))<x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = 39451293LL;
	static uint32_t x167 = 105532U;
	int32_t t35 = -14083;

	t35 = ((x165==(x166*x167))<x168);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = 4U;
	volatile int64_t x170 = -3LL;
	volatile uint16_t x171 = UINT16_MAX;
	static uint8_t x172 = UINT8_MAX;
	int32_t t36 = 35362828;

	t36 = ((x169==(x170*x171))<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = UINT8_MAX;
	volatile int64_t x174 = INT64_MAX;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t37 = 938358;

	t37 = ((x173==(x174*x175))<x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = 0;
	volatile int32_t x179 = 173;
	volatile int32_t t38 = -1290798;

	t38 = ((x177==(x178*x179))<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x182 = 230U;
	int32_t x183 = -23430771;
	static int64_t x184 = 140396843LL;
	int32_t t39 = 9;

	t39 = ((x181==(x182*x183))<x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x185 = 1U;
	static uint16_t x186 = 165U;
	static int16_t x187 = INT16_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t40 = -8;

	t40 = ((x185==(x186*x187))<x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = 126;
	int64_t x203 = 1848681LL;

	t41 = ((x201==(x202*x203))<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x206 = -1LL;
	int8_t x207 = INT8_MAX;
	static volatile uint16_t x208 = 6088U;
	static int32_t t42 = -150076620;

	t42 = ((x205==(x206*x207))<x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x210 = INT16_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t43 = 3036278;

	t43 = ((x209==(x210*x211))<x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = UINT64_MAX;
	volatile int32_t x214 = INT32_MAX;
	int32_t x215 = -1;
	int32_t x216 = -186;
	int32_t t44 = -862574815;

	t44 = ((x213==(x214*x215))<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x219 = 1351525453U;
	uint16_t x220 = UINT16_MAX;

	t45 = ((x217==(x218*x219))<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = -1;
	int64_t x222 = -332843787LL;
	static uint32_t x223 = 218574U;
	volatile int32_t t46 = -1;

	t46 = ((x221==(x222*x223))<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = UINT16_MAX;
	uint64_t x226 = 483188LLU;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MAX;
	static int32_t t47 = -118531456;

	t47 = ((x225==(x226*x227))<x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MAX;
	static uint16_t x231 = 61U;
	int16_t x232 = 3103;
	volatile int32_t t48 = 22;

	t48 = ((x229==(x230*x231))<x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 4067763LLU;
	int8_t x234 = INT8_MAX;
	volatile uint32_t x235 = UINT32_MAX;

	t49 = ((x233==(x234*x235))<x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x240 = INT64_MIN;
	static int32_t t50 = -370591910;

	t50 = ((x237==(x238*x239))<x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = 4;
	volatile uint16_t x242 = 2U;
	volatile int16_t x243 = -1821;
	int32_t t51 = -58757;

	t51 = ((x241==(x242*x243))<x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x245 = 2U;
	int64_t x246 = -1LL;
	static int64_t x247 = -557256127LL;
	int32_t x248 = 15719;
	int32_t t52 = -146;

	t52 = ((x245==(x246*x247))<x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = -1;
	volatile uint16_t x254 = UINT16_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	int32_t t53 = -791738;

	t53 = ((x253==(x254*x255))<x256);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x257 = 85U;
	int8_t x260 = -1;
	volatile int32_t t54 = -1;

	t54 = ((x257==(x258*x259))<x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	static volatile int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	static int32_t t55 = 265973967;

	t55 = ((x261==(x262*x263))<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 8U;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MAX;
	int32_t t56 = 24105345;

	t56 = ((x265==(x266*x267))<x268);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	int32_t t57 = -1651;

	t57 = ((x269==(x270*x271))<x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = -281375LL;
	int16_t x274 = INT16_MIN;
	static uint16_t x275 = 3U;
	uint64_t x276 = 1063070041652LLU;
	static volatile int32_t t58 = 88;

	t58 = ((x273==(x274*x275))<x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = -1;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 975U;
	int32_t t59 = -9237705;

	t59 = ((x281==(x282*x283))<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x286 = INT32_MIN;
	static uint64_t x287 = 7511285980885198LLU;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t60 = 3;

	t60 = ((x285==(x286*x287))<x288);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = -7;
	int32_t x290 = -1;
	volatile uint32_t x291 = 4U;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t61 = -102862477;

	t61 = ((x289==(x290*x291))<x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x303 = 50U;
	static int32_t t62 = 73354;

	t62 = ((x301==(x302*x303))<x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x305 = -2552;
	int32_t x306 = 52983;
	int8_t x308 = INT8_MIN;

	t63 = ((x305==(x306*x307))<x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	uint8_t x315 = UINT8_MAX;

	t64 = ((x313==(x314*x315))<x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x317 = 1584U;
	int8_t x318 = -36;
	int64_t x320 = INT64_MAX;

	t65 = ((x317==(x318*x319))<x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = INT32_MIN;
	static int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t66 = -15;

	t66 = ((x329==(x330*x331))<x332);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x334 = -509727LL;
	int16_t x336 = 27;
	int32_t t67 = 2;

	t67 = ((x333==(x334*x335))<x336);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = UINT16_MAX;
	static int32_t t68 = 332596;

	t68 = ((x337==(x338*x339))<x340);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x349 = 1U;
	static int8_t x350 = INT8_MAX;
	static volatile int8_t x351 = 1;
	uint16_t x352 = 3278U;
	volatile int32_t t69 = 1;

	t69 = ((x349==(x350*x351))<x352);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x353 = 18226U;
	int8_t x354 = INT8_MIN;
	int32_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t70 = -55;

	t70 = ((x353==(x354*x355))<x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = 499U;
	uint32_t x362 = 176U;
	volatile int64_t x363 = 0LL;
	int32_t t71 = -54;

	t71 = ((x361==(x362*x363))<x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = 3U;
	int32_t x366 = 1;
	int8_t x367 = INT8_MIN;
	static int32_t x368 = 15;

	t72 = ((x365==(x366*x367))<x368);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x370 = 37;
	volatile uint32_t x371 = 53992U;
	int8_t x372 = INT8_MIN;
	int32_t t73 = 54672031;

	t73 = ((x369==(x370*x371))<x372);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x374 = 11;
	volatile int32_t x375 = 2;
	uint16_t x376 = 6142U;
	volatile int32_t t74 = -42427;

	t74 = ((x373==(x374*x375))<x376);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x386 = INT64_MIN;
	volatile int8_t x387 = 1;
	uint64_t x388 = 15362576240LLU;
	static volatile int32_t t75 = 253;

	t75 = ((x385==(x386*x387))<x388);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x394 = 5212371963LLU;
	int16_t x395 = INT16_MIN;
	static uint32_t x396 = 851U;
	static volatile int32_t t76 = 473108109;

	t76 = ((x393==(x394*x395))<x396);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x406 = 124694813081LLU;
	static volatile int64_t x408 = -168LL;
	volatile int32_t t77 = 224854;

	t77 = ((x405==(x406*x407))<x408);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x411 = -1;
	static int64_t x412 = -4028870174LL;
	int32_t t78 = -5142800;

	t78 = ((x409==(x410*x411))<x412);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x413 = 1699028975U;
	volatile uint16_t x414 = 11061U;
	int8_t x415 = INT8_MAX;
	int64_t x416 = 136477131LL;

	t79 = ((x413==(x414*x415))<x416);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x420 = 31;
	volatile int32_t t80 = -4796814;

	t80 = ((x417==(x418*x419))<x420);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x429 = UINT8_MAX;
	uint8_t x430 = UINT8_MAX;
	volatile int64_t x431 = -4102488867LL;
	uint8_t x432 = 1U;
	static int32_t t81 = -1419;

	t81 = ((x429==(x430*x431))<x432);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = INT32_MIN;
	static int8_t x438 = 1;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t82 = 68902380;

	t82 = ((x437==(x438*x439))<x440);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MIN;
	int8_t x450 = -3;
	int16_t x451 = INT16_MAX;
	int64_t x452 = 10LL;
	static volatile int32_t t83 = 66668;

	t83 = ((x449==(x450*x451))<x452);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x461 = INT32_MIN;
	volatile int64_t x462 = 7LL;
	volatile uint32_t x463 = 2536U;
	int64_t x464 = 11753796LL;
	int32_t t84 = 35354;

	t84 = ((x461==(x462*x463))<x464);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x465 = -195617871292LL;
	int32_t x466 = 0;
	int32_t x467 = INT32_MIN;
	int16_t x468 = INT16_MAX;

	t85 = ((x465==(x466*x467))<x468);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x473 = UINT64_MAX;
	volatile int64_t x474 = -297LL;
	int8_t x475 = INT8_MIN;
	static int64_t x476 = -1LL;

	t86 = ((x473==(x474*x475))<x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = 0;
	volatile int32_t x478 = INT32_MAX;
	int64_t x480 = 2323LL;
	int32_t t87 = -16324;

	t87 = ((x477==(x478*x479))<x480);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x481 = 6713915U;
	uint16_t x482 = 1U;
	uint64_t x483 = 4343076LLU;
	int16_t x484 = INT16_MIN;
	volatile int32_t t88 = -34;

	t88 = ((x481==(x482*x483))<x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x485 = INT16_MAX;
	static int8_t x486 = INT8_MAX;
	volatile int32_t t89 = 101726546;

	t89 = ((x485==(x486*x487))<x488);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x489 = INT32_MAX;
	static uint8_t x490 = UINT8_MAX;
	uint8_t x491 = 35U;

	t90 = ((x489==(x490*x491))<x492);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x493 = 0U;
	int8_t x496 = 1;
	static int32_t t91 = 112194775;

	t91 = ((x493==(x494*x495))<x496);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x497 = 0U;
	int32_t t92 = 32;

	t92 = ((x497==(x498*x499))<x500);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x505 = 8223713U;
	int16_t x506 = INT16_MIN;
	uint32_t x507 = UINT32_MAX;
	uint32_t x508 = 82044U;
	int32_t t93 = 2876219;

	t93 = ((x505==(x506*x507))<x508);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x509 = -1;
	uint64_t x510 = UINT64_MAX;
	static uint16_t x511 = 3U;
	int32_t x512 = 666409;
	volatile int32_t t94 = -831;

	t94 = ((x509==(x510*x511))<x512);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x513 = 118U;
	int8_t x515 = -1;
	int32_t t95 = -2969;

	t95 = ((x513==(x514*x515))<x516);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x529 = INT32_MIN;
	uint16_t x530 = UINT16_MAX;
	int64_t x532 = INT64_MIN;
	int32_t t96 = 205968;

	t96 = ((x529==(x530*x531))<x532);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x542 = 770933167LLU;
	uint8_t x543 = 1U;
	uint8_t x544 = 1U;
	volatile int32_t t97 = 2050044;

	t97 = ((x541==(x542*x543))<x544);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x545 = 79;
	int64_t x546 = 1LL;
	static uint64_t x547 = 292117271LLU;
	volatile int32_t x548 = INT32_MIN;
	static int32_t t98 = 0;

	t98 = ((x545==(x546*x547))<x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x549 = UINT64_MAX;
	static volatile int16_t x552 = INT16_MIN;
	volatile int32_t t99 = 1866;

	t99 = ((x549==(x550*x551))<x552);

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

