#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 49U;
volatile int32_t t2 = -5;
int8_t x14 = INT8_MIN;
volatile int32_t t3 = 4232325;
static int8_t x17 = 8;
int32_t t6 = -12;
uint32_t x30 = 231202U;
static int8_t x32 = -1;
static int8_t x33 = INT8_MAX;
uint64_t x41 = 431137162LLU;
static int16_t x56 = 2557;
static volatile int32_t t14 = -21196;
static int8_t x68 = -1;
static int64_t x78 = -1LL;
int32_t x85 = INT32_MIN;
uint8_t x88 = 109U;
int64_t x94 = -2394LL;
int32_t x97 = INT32_MAX;
int32_t x100 = INT32_MIN;
uint8_t x104 = UINT8_MAX;
uint64_t x107 = 66838423237747548LLU;
uint8_t x108 = 24U;
int64_t x110 = INT64_MAX;
int32_t t28 = -44;
uint32_t x118 = UINT32_MAX;
int32_t t29 = -3907309;
uint8_t x122 = 1U;
int32_t x125 = INT32_MIN;
int16_t x131 = INT16_MIN;
volatile int32_t t32 = 971;
uint8_t x134 = UINT8_MAX;
uint16_t x135 = 25432U;
int8_t x136 = -1;
volatile uint64_t x140 = 3988827433LLU;
int32_t t34 = -7656016;
int16_t x141 = INT16_MAX;
uint64_t x143 = 3LLU;
uint8_t x149 = 3U;
static uint32_t x152 = UINT32_MAX;
int64_t x164 = 15833782221LL;
volatile uint64_t x166 = 28160340873674033LLU;
int64_t x171 = INT64_MIN;
volatile int32_t t42 = 245474;
int16_t x174 = INT16_MAX;
volatile int64_t x176 = 13LL;
volatile int32_t t43 = 19;
static uint64_t x179 = 8958312650425LLU;
uint32_t x181 = 78852U;
volatile int16_t x184 = 0;
volatile int32_t t45 = -374060;
int64_t x198 = 3433592946641039LL;
static int32_t x208 = -1;
int8_t x214 = INT8_MAX;
int32_t x216 = 0;
int16_t x218 = -1;
static int64_t x222 = INT64_MIN;
uint16_t x230 = 19U;
volatile int32_t t58 = -100153;
volatile int32_t t59 = -580927701;
int8_t x247 = -11;
int16_t x248 = INT16_MIN;
uint16_t x249 = 163U;
uint8_t x256 = UINT8_MAX;
int8_t x260 = INT8_MIN;
static int8_t x266 = INT8_MIN;
volatile int32_t x269 = INT32_MIN;
uint32_t x271 = UINT32_MAX;
static int64_t x275 = -1LL;
int8_t x279 = -13;
uint32_t x286 = 1806U;
static int32_t x290 = INT32_MIN;
static int32_t t74 = 6253;
int32_t t75 = 510762;
volatile int32_t t76 = 38;
static volatile int8_t x313 = -1;
static uint32_t x315 = 106823U;
int8_t x318 = INT8_MIN;
int8_t x319 = -1;
int8_t x321 = INT8_MIN;
uint16_t x322 = 582U;
uint16_t x325 = 18U;
int32_t x327 = INT32_MAX;
static int64_t x338 = INT64_MAX;
int16_t x340 = -1;
volatile int32_t t85 = -109;
uint8_t x351 = UINT8_MAX;
volatile int32_t t87 = 5032;
int16_t x354 = INT16_MIN;
int32_t t88 = -34677307;
uint64_t x357 = UINT64_MAX;
uint8_t x373 = UINT8_MAX;
uint64_t x380 = 0LLU;
static volatile uint32_t x382 = UINT32_MAX;
static int8_t x383 = INT8_MIN;
volatile int32_t t95 = 163690826;
int8_t x385 = INT8_MAX;
static int64_t x386 = 34LL;
uint16_t x389 = UINT16_MAX;
int64_t x392 = -299600426031LL;
static volatile int32_t t97 = 3;


void f0(void) {
	static int32_t x1 = -14811;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t x4 = -842651;
	int32_t t0 = -725539162;

	t0 = (x1==((x2<x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x7 = 12U;
	uint8_t x8 = 2U;
	int32_t t1 = -965;

	t1 = (x5==((x6<x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x10 = 6;
	static int32_t x11 = 213716;
	volatile int64_t x12 = 5015634246506LL;

	t2 = (x9==((x10<x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 147340474077619LLU;
	uint32_t x15 = 742434435U;
	static int8_t x16 = -1;

	t3 = (x13==((x14<x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = 4487U;
	int32_t t4 = 1;

	t4 = (x17==((x18<x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 298386163245380LLU;
	static volatile int64_t x22 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	uint8_t x24 = 12U;
	volatile int32_t t5 = -216406;

	t5 = (x21==((x22<x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	int32_t x26 = INT32_MIN;
	int16_t x27 = -1409;
	int32_t x28 = INT32_MIN;

	t6 = (x25==((x26<x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 0;
	int32_t x31 = INT32_MAX;
	int32_t t7 = 81;

	t7 = (x29==((x30<x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MAX;
	uint32_t x35 = 167U;
	uint16_t x36 = 1070U;
	static volatile int32_t t8 = 131;

	t8 = (x33==((x34<x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int64_t x38 = -711617428LL;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 1791540;

	t9 = (x37==((x38<x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	int8_t x43 = -1;
	uint64_t x44 = 8006LLU;
	volatile int32_t t10 = 3574455;

	t10 = (x41==((x42<x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int64_t x46 = -1LL;
	uint32_t x47 = 442988263U;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 15;

	t11 = (x45==((x46<x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	static int32_t t12 = 100280;

	t12 = (x49==((x50<x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int16_t x54 = INT16_MAX;
	volatile int8_t x55 = -1;
	static volatile int32_t t13 = -118869914;

	t13 = (x53==((x54<x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 367832U;
	static int8_t x60 = 26;

	t14 = (x57==((x58<x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	uint8_t x62 = 10U;
	int8_t x63 = -33;
	volatile int8_t x64 = INT8_MIN;
	static int32_t t15 = 7;

	t15 = (x61==((x62<x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	static uint8_t x66 = 57U;
	volatile uint32_t x67 = 6U;
	int32_t t16 = -116;

	t16 = (x65==((x66<x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int16_t x70 = INT16_MIN;
	static int8_t x71 = 1;
	int16_t x72 = -116;
	int32_t t17 = -423889650;

	t17 = (x69==((x70<x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = 1499050707225597103LLU;
	static int32_t t18 = 235839304;

	t18 = (x73==((x74<x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 360824122235136LLU;
	uint8_t x79 = 67U;
	static uint8_t x80 = 10U;
	volatile int32_t t19 = -1;

	t19 = (x77==((x78<x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint32_t x82 = 110U;
	uint16_t x83 = 13U;
	volatile uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 0;

	t20 = (x81==((x82<x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = 45U;
	int64_t x87 = INT64_MAX;
	int32_t t21 = 109654;

	t21 = (x85==((x86<x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	static int8_t x90 = 26;
	int32_t x91 = INT32_MAX;
	static int16_t x92 = -1;
	volatile int32_t t22 = 5514487;

	t22 = (x89==((x90<x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x95 = 338104930807648204LL;
	uint32_t x96 = 121613U;
	volatile int32_t t23 = -11779;

	t23 = (x93==((x94<x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;
	int32_t t24 = 3535;

	t24 = (x97==((x98<x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 38U;
	static int8_t x102 = -1;
	volatile int8_t x103 = -3;
	volatile int32_t t25 = 26723;

	t25 = (x101==((x102<x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 0;
	int32_t x106 = INT32_MAX;
	int32_t t26 = 14364948;

	t26 = (x105==((x106<x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int32_t x111 = -1;
	int32_t x112 = 2732;
	volatile int32_t t27 = -120833000;

	t27 = (x109==((x110<x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 192LLU;
	static volatile int32_t x114 = 5786341;
	volatile int16_t x115 = 11875;
	int64_t x116 = 364LL;

	t28 = (x113==((x114<x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	volatile int32_t x119 = 1;
	uint64_t x120 = 16084918864143LLU;

	t29 = (x117==((x118<x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint16_t x123 = 75U;
	volatile int16_t x124 = -251;
	int32_t t30 = -104623;

	t30 = (x121==((x122<x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MAX;
	static int32_t x127 = -1;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -50;

	t31 = (x125==((x126<x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int32_t x132 = -3962756;

	t32 = (x129==((x130<x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	volatile int32_t t33 = -1602;

	t33 = (x133==((x134<x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 3U;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 0U;

	t34 = (x137==((x138<x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = 3416LL;
	int32_t x144 = -5132503;
	int32_t t35 = -219523;

	t35 = (x141==((x142<x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -10210;
	uint16_t x146 = 7U;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -1;
	static int32_t t36 = -218;

	t36 = (x145==((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = INT8_MAX;
	volatile int32_t x151 = -252;
	int32_t t37 = -39;

	t37 = (x149==((x150<x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -40;
	static int8_t x154 = -48;
	static int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = -878358625;

	t38 = (x153==((x154<x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 114LLU;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = 194031LLU;
	volatile int32_t t39 = -46317;

	t39 = (x157==((x158<x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	uint64_t x162 = 202317LLU;
	int16_t x163 = INT16_MIN;
	int32_t t40 = 367546;

	t40 = (x161==((x162<x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -4170274332LL;
	volatile int32_t x167 = -1;
	uint16_t x168 = UINT16_MAX;
	static volatile int32_t t41 = -1;

	t41 = (x165==((x166<x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -2659677762381LL;
	uint8_t x170 = 46U;
	uint8_t x172 = 17U;

	t42 = (x169==((x170<x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int32_t x175 = 0;

	t43 = (x173==((x174<x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 29;
	int64_t x178 = INT64_MIN;
	static uint8_t x180 = 2U;
	static volatile int32_t t44 = -462858098;

	t44 = (x177==((x178<x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	volatile uint32_t x183 = UINT32_MAX;

	t45 = (x181==((x182<x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MAX;
	static int16_t x186 = INT16_MAX;
	uint16_t x187 = UINT16_MAX;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = 142240907;

	t46 = (x185==((x186<x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = 19U;
	int64_t x190 = 845666964642375LL;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	int32_t t47 = -1854301;

	t47 = (x189==((x190<x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -311;
	volatile uint64_t x194 = 14950LLU;
	int32_t x195 = 1436;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 1618;

	t48 = (x193==((x194<x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = UINT8_MAX;
	static volatile int64_t x199 = INT64_MAX;
	int64_t x200 = INT64_MAX;
	static int32_t t49 = -105555;

	t49 = (x197==((x198<x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = 320;
	static volatile int64_t x203 = -957LL;
	volatile int8_t x204 = -13;
	volatile int32_t t50 = 105;

	t50 = (x201==((x202<x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 47;
	uint8_t x206 = 33U;
	int8_t x207 = INT8_MAX;
	int32_t t51 = 617;

	t51 = (x205==((x206<x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -14;
	int64_t x210 = 6341LL;
	static int64_t x211 = INT64_MAX;
	int32_t x212 = 97;
	volatile int32_t t52 = -138006;

	t52 = (x209==((x210<x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = UINT32_MAX;
	int16_t x215 = -1;
	volatile int32_t t53 = -10415;

	t53 = (x213==((x214<x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x217 = INT32_MAX;
	int16_t x219 = -1;
	uint64_t x220 = 1835263176LLU;
	volatile int32_t t54 = -1;

	t54 = (x217==((x218<x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 24U;
	int8_t x223 = -1;
	uint32_t x224 = 1550040297U;
	volatile int32_t t55 = -6;

	t55 = (x221==((x222<x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 5U;
	uint64_t x226 = UINT64_MAX;
	volatile uint8_t x227 = UINT8_MAX;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = 10;

	t56 = (x225==((x226<x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = UINT32_MAX;
	int16_t x231 = -72;
	int32_t x232 = INT32_MAX;
	static int32_t t57 = 151;

	t57 = (x229==((x230<x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 44248;
	uint32_t x234 = UINT32_MAX;
	volatile int8_t x235 = -4;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233==((x234<x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 40U;
	int64_t x238 = -1LL;
	uint64_t x239 = 3183566LLU;
	static int16_t x240 = INT16_MIN;

	t59 = (x237==((x238<x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -1;
	int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 35090862359369639LLU;
	volatile int32_t t60 = 0;

	t60 = (x241==((x242<x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile uint16_t x246 = 54U;
	volatile int32_t t61 = 38914237;

	t61 = (x245==((x246<x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 1568;
	int64_t x251 = -895956497LL;
	int16_t x252 = 488;
	volatile int32_t t62 = 0;

	t62 = (x249==((x250<x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -88LL;
	uint8_t x254 = UINT8_MAX;
	uint8_t x255 = UINT8_MAX;
	static int32_t t63 = -1;

	t63 = (x253==((x254<x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile uint16_t x258 = 1U;
	int8_t x259 = INT8_MIN;
	int32_t t64 = -12;

	t64 = (x257==((x258<x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	static volatile int32_t x264 = INT32_MIN;
	int32_t t65 = -25;

	t65 = (x261==((x262<x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 0U;
	static int32_t x267 = INT32_MIN;
	volatile uint16_t x268 = 1U;
	int32_t t66 = 18875;

	t66 = (x265==((x266<x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 3805889587837LLU;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 203;

	t67 = (x269==((x270<x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 0;
	static uint16_t x274 = 501U;
	int16_t x276 = -1;
	int32_t t68 = 24313;

	t68 = (x273==((x274<x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -206LL;
	uint64_t x278 = 523LLU;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = -296564572;

	t69 = (x277==((x278<x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -1;
	static volatile int8_t x282 = -1;
	uint16_t x283 = 12144U;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -1;

	t70 = (x281==((x282<x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 246545865933LLU;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 119U;
	int32_t t71 = 33175114;

	t71 = (x285==((x286<x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 62;
	static uint16_t x291 = 47U;
	uint64_t x292 = 104665367891LLU;
	static int32_t t72 = 1331;

	t72 = (x289==((x290<x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = 7;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -417665188;

	t73 = (x293==((x294<x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static volatile uint64_t x298 = 4490971400508237702LLU;
	volatile int32_t x299 = -5;
	static uint32_t x300 = 41826U;

	t74 = (x297==((x298<x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 53;
	volatile uint64_t x302 = 7427979146552846649LLU;
	int16_t x303 = INT16_MAX;
	static uint8_t x304 = 3U;

	t75 = (x301==((x302<x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -13;
	uint64_t x306 = 24972178LLU;
	int32_t x307 = 8;
	uint32_t x308 = 187744U;

	t76 = (x305==((x306<x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	int8_t x312 = -1;
	volatile int32_t t77 = -3633;

	t77 = (x309==((x310<x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = 525792050U;
	int64_t x316 = INT64_MAX;
	int32_t t78 = 8;

	t78 = (x313==((x314<x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	uint8_t x320 = 13U;
	int32_t t79 = 2298;

	t79 = (x317==((x318<x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = 1;
	int32_t t80 = -1225;

	t80 = (x321==((x322<x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = UINT32_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -2840;

	t81 = (x325==((x326<x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile int8_t x330 = INT8_MIN;
	static uint32_t x331 = 119811U;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -1406;

	t82 = (x329==((x330<x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 13375960770996700LLU;
	int64_t x334 = INT64_MAX;
	static uint32_t x335 = 103834750U;
	uint32_t x336 = 22U;
	int32_t t83 = 12;

	t83 = (x333==((x334<x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	static int8_t x339 = 32;
	int32_t t84 = 95866864;

	t84 = (x337==((x338<x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	static int8_t x342 = -1;
	int8_t x343 = -13;
	uint64_t x344 = 13283LLU;

	t85 = (x341==((x342<x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 5327972LLU;
	volatile uint32_t x346 = 19U;
	int64_t x347 = 40657932610790LL;
	volatile uint32_t x348 = 0U;
	volatile int32_t t86 = 0;

	t86 = (x345==((x346<x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 561;
	int16_t x350 = INT16_MIN;
	uint8_t x352 = UINT8_MAX;

	t87 = (x349==((x350<x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	uint8_t x355 = UINT8_MAX;
	static int16_t x356 = -1;

	t88 = (x353==((x354<x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 16047395U;
	static uint16_t x359 = 15U;
	int64_t x360 = INT64_MAX;
	static int32_t t89 = -94547;

	t89 = (x357==((x358<x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	static volatile int8_t x362 = INT8_MAX;
	uint8_t x363 = 11U;
	int16_t x364 = -3022;
	volatile int32_t t90 = -42931;

	t90 = (x361==((x362<x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	volatile uint32_t x366 = 4657U;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;
	static int32_t t91 = 390876971;

	t91 = (x365==((x366<x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -2088;
	int8_t x370 = -38;
	int64_t x371 = -1LL;
	uint8_t x372 = 20U;
	int32_t t92 = 148913;

	t92 = (x369==((x370<x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MAX;
	volatile int16_t x375 = -1;
	uint16_t x376 = 23U;
	volatile int32_t t93 = 41591171;

	t93 = (x373==((x374<x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int8_t x378 = 26;
	static uint8_t x379 = 2U;
	int32_t t94 = 55;

	t94 = (x377==((x378<x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = 0;
	uint64_t x384 = UINT64_MAX;

	t95 = (x381==((x382<x383)==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = -15;
	static int16_t x388 = -201;
	int32_t t96 = 20;

	t96 = (x385==((x386<x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 0U;

	t97 = (x389==((x390<x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = 4U;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t98 = -1367;

	t98 = (x393==((x394<x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 3U;
	int32_t x398 = INT32_MIN;
	static int16_t x399 = 0;
	int64_t x400 = 6LL;
	int32_t t99 = -27865;

	t99 = (x397==((x398<x399)==x400));

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

