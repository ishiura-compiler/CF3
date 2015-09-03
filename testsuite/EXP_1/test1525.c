#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int64_t x21 = INT64_MIN;
uint32_t x22 = 1347U;
int32_t x24 = INT32_MIN;
uint64_t x26 = UINT64_MAX;
uint32_t x41 = 12578U;
uint8_t x46 = 15U;
volatile uint16_t x61 = UINT16_MAX;
int16_t x62 = INT16_MAX;
uint32_t x64 = UINT32_MAX;
int8_t x70 = INT8_MIN;
volatile int32_t x71 = -1;
int32_t t17 = 915467513;
volatile uint64_t x78 = 4047831809LLU;
int64_t x80 = 5636208974LL;
int32_t x81 = -1;
volatile int32_t x84 = -20311;
volatile uint64_t x89 = UINT64_MAX;
volatile uint16_t x94 = 3U;
int32_t x96 = INT32_MAX;
uint16_t x99 = 795U;
volatile uint64_t x103 = 106460601173LLU;
uint32_t x106 = 594387516U;
int8_t x107 = -1;
int64_t x110 = INT64_MIN;
static uint32_t x114 = 0U;
volatile int16_t x119 = -1;
static volatile int64_t x120 = -1LL;
int16_t x123 = INT16_MIN;
int16_t x124 = INT16_MIN;
int8_t x128 = -29;
uint16_t x130 = 474U;
static int8_t x136 = INT8_MIN;
volatile int32_t t33 = 87458;
int16_t x142 = -1;
int8_t x143 = INT8_MIN;
uint64_t x149 = 8240210LLU;
static volatile uint64_t t35 = 18992LLU;
volatile int64_t t36 = -3352492184LL;
int32_t x157 = INT32_MIN;
static volatile int64_t x160 = INT64_MAX;
volatile int64_t t37 = -3257661869889268LL;
uint64_t t38 = 3926LLU;
int64_t x165 = -57457LL;
volatile int16_t x175 = -1;
volatile uint64_t t42 = 16482393LLU;
int8_t x185 = INT8_MIN;
uint16_t x191 = UINT16_MAX;
static volatile int16_t x192 = INT16_MIN;
uint16_t x194 = 1739U;
int64_t t47 = INT64_MAX;
uint8_t x201 = 14U;
static volatile int64_t x210 = INT64_MAX;
volatile int64_t x221 = INT64_MIN;
volatile int64_t x236 = 266926416LL;
volatile int64_t t56 = 196LL;
int16_t x238 = -1;
int64_t x240 = -1LL;
int32_t x242 = INT32_MAX;
int32_t x253 = INT32_MIN;
int16_t x254 = 703;
volatile uint16_t x256 = 8U;
uint32_t x291 = 7U;
int16_t x295 = -2;
volatile int32_t t70 = 19;
static uint16_t x307 = 22650U;
int32_t x308 = INT32_MAX;
int32_t x310 = INT32_MAX;
uint64_t x325 = 3710069LLU;
int32_t t76 = 249197826;
int16_t x337 = INT16_MIN;
int64_t t78 = -1905691173336435886LL;
int16_t x346 = INT16_MIN;
int16_t x352 = -1;
int32_t x357 = -19968;
volatile int32_t x358 = INT32_MIN;
volatile int8_t x366 = INT8_MIN;
int32_t t83 = 292228;
uint64_t x375 = UINT64_MAX;
uint16_t x378 = UINT16_MAX;
static int32_t x381 = -1;
static int32_t x382 = -744;
int8_t x383 = INT8_MIN;
int8_t x385 = 5;
int32_t t88 = 0;
int64_t x391 = 12628206647541559LL;
int16_t x398 = INT16_MIN;
int32_t x399 = INT32_MIN;
static uint64_t x402 = UINT64_MAX;
int64_t x405 = INT64_MAX;
static int32_t t93 = -325940003;
volatile uint8_t x410 = 14U;
volatile int16_t x416 = INT16_MAX;
uint16_t x423 = UINT16_MAX;
volatile int8_t x433 = INT8_MIN;
uint16_t x434 = 106U;


void f0(void) {
	int32_t x2 = -19819;
	static uint16_t x3 = 769U;
	int8_t x4 = 1;
	volatile int32_t t0 = 48;

	t0 = (((x1<=x2)+x3)/x4);

	if (t0 != 769) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -9;
	int8_t x6 = INT8_MIN;
	volatile uint8_t x7 = UINT8_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 3357;

	t1 = (((x5<=x6)+x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile uint8_t x10 = 24U;
	int32_t x11 = INT32_MAX;
	static volatile uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 5457275975417521051LLU;

	t2 = (((x9<=x10)+x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = 30950;
	volatile int16_t x19 = 228;
	static uint8_t x20 = 1U;
	volatile int32_t t3 = 66211403;

	t3 = (((x17<=x18)+x19)/x20);

	if (t3 != 228) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x23 = -7557LL;
	volatile int64_t t4 = 3923842509777LL;

	t4 = (((x21<=x22)+x23)/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 30U;
	static volatile int32_t x27 = INT32_MIN;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 44038;

	t5 = (((x25<=x26)+x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 537841849579LLU;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = 38967438;
	int16_t x32 = -647;
	static volatile int32_t t6 = 15;

	t6 = (((x29<=x30)+x31)/x32);

	if (t6 != -60227) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	uint32_t x34 = 5U;
	int16_t x35 = 5;
	int64_t x36 = -1LL;
	volatile int64_t t7 = 9909269LL;

	t7 = (((x33<=x34)+x35)/x36);

	if (t7 != -5LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -51230224;
	int32_t x38 = INT32_MIN;
	volatile int64_t x39 = 8LL;
	static volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t8 = 244529629793LLU;

	t8 = (((x37<=x38)+x39)/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = 14LLU;
	int16_t x43 = 5993;
	static int8_t x44 = -1;
	volatile int32_t t9 = -107919110;

	t9 = (((x41<=x42)+x43)/x44);

	if (t9 != -5993) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x47 = INT16_MIN;
	int8_t x48 = 6;
	static int32_t t10 = -237835;

	t10 = (((x45<=x46)+x47)/x48);

	if (t10 != -5461) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static volatile uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 9U;
	int32_t t11 = 521071;

	t11 = (((x49<=x50)+x51)/x52);

	if (t11 != -238609294) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 1904U;
	volatile uint32_t t12 = 538400970U;

	t12 = (((x53<=x54)+x55)/x56);

	if (t12 != 2255742U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	uint32_t x60 = 704676999U;
	uint32_t t13 = 404619U;

	t13 = (((x57<=x58)+x59)/x60);

	if (t13 != 3U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x63 = -1;
	uint32_t t14 = 12783390U;

	t14 = (((x61<=x62)+x63)/x64);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = 1U;
	static uint64_t x66 = UINT64_MAX;
	static int32_t x67 = -1;
	volatile int32_t x68 = INT32_MAX;
	static volatile int32_t t15 = 1193;

	t15 = (((x65<=x66)+x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 6LLU;
	uint16_t x72 = UINT16_MAX;
	int32_t t16 = -29352;

	t16 = (((x69<=x70)+x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = INT8_MAX;
	uint16_t x76 = 6746U;

	t17 = (((x73<=x74)+x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MIN;
	int64_t x79 = 47130729361LL;
	volatile int64_t t18 = -183651904716371LL;

	t18 = (((x77<=x78)+x79)/x80);

	if (t18 != 8LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	int32_t t19 = -375641;

	t19 = (((x81<=x82)+x83)/x84);

	if (t19 != -3) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	volatile int16_t x86 = INT16_MIN;
	int64_t x87 = -54962060707358020LL;
	static int64_t x88 = -2674935LL;
	volatile int64_t t20 = 78921805LL;

	t20 = (((x85<=x86)+x87)/x88);

	if (t20 != 20547064024LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x90 = 11184U;
	static int32_t x91 = INT32_MAX;
	int64_t x92 = 2006694153390096LL;
	volatile int64_t t21 = 1810740300394978LL;

	t21 = (((x89<=x90)+x91)/x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = -1;
	volatile uint32_t x95 = 2771202U;
	volatile uint32_t t22 = 19U;

	t22 = (((x93<=x94)+x95)/x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 4;
	uint32_t x98 = UINT32_MAX;
	uint32_t x100 = 173736U;
	static volatile uint32_t t23 = 0U;

	t23 = (((x97<=x98)+x99)/x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 1;
	uint32_t x102 = 2369U;
	static int16_t x104 = -1;
	volatile uint64_t t24 = 12067872414163510LLU;

	t24 = (((x101<=x102)+x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 125421097LLU;
	uint16_t x108 = 59U;
	int32_t t25 = 39614;

	t25 = (((x105<=x106)+x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x111 = INT16_MAX;
	int64_t x112 = INT64_MIN;
	volatile int64_t t26 = 245954265442LL;

	t26 = (((x109<=x110)+x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x115 = -1757;
	volatile int64_t x116 = INT64_MIN;
	int64_t t27 = -890LL;

	t27 = (((x113<=x114)+x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -1;
	uint8_t x118 = 12U;
	volatile int64_t t28 = -13904841593LL;

	t28 = (((x117<=x118)+x119)/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	static uint8_t x122 = 19U;
	volatile int32_t t29 = 409;

	t29 = (((x121<=x122)+x123)/x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = 210423470938804LL;
	int16_t x127 = -10990;
	volatile int32_t t30 = 0;

	t30 = (((x125<=x126)+x127)/x128);

	if (t30 != 378) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int8_t x132 = -1;
	volatile int32_t t31 = INT32_MAX;

	t31 = (((x129<=x130)+x131)/x132);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 0;
	int8_t x134 = 2;
	int8_t x135 = -1;
	int32_t t32 = 1667183;

	t32 = (((x133<=x134)+x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = 893LL;
	uint8_t x138 = 19U;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MAX;

	t33 = (((x137<=x138)+x139)/x140);

	if (t33 != 16909320) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	int32_t x144 = 1839;
	static int32_t t34 = -80333648;

	t34 = (((x141<=x142)+x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = INT16_MAX;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = -41;

	t35 = (((x149<=x150)+x151)/x152);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = INT64_MIN;
	static int32_t x154 = INT32_MIN;
	static volatile int64_t x155 = -917LL;
	int16_t x156 = INT16_MIN;

	t36 = (((x153<=x154)+x155)/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x158 = 0;
	int64_t x159 = -1LL;

	t37 = (((x157<=x158)+x159)/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = 4;
	uint64_t x163 = 8377764169153LLU;
	int8_t x164 = INT8_MIN;

	t38 = (((x161<=x162)+x163)/x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x166 = INT16_MIN;
	uint64_t x167 = 234166LLU;
	uint32_t x168 = 107188575U;
	volatile uint64_t t39 = 0LLU;

	t39 = (((x165<=x166)+x167)/x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = -1;
	volatile int64_t x171 = -69056685LL;
	uint8_t x172 = UINT8_MAX;
	int64_t t40 = -425924LL;

	t40 = (((x169<=x170)+x171)/x172);

	if (t40 != -270810LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	static int8_t x174 = INT8_MIN;
	static uint64_t x176 = 10733LLU;
	uint64_t t41 = 109395173037LLU;

	t41 = (((x173<=x174)+x175)/x176);

	if (t41 != 1718694127802995LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 45U;
	static uint32_t x178 = 822U;
	static int32_t x179 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;

	t42 = (((x177<=x178)+x179)/x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 46;
	uint64_t x183 = 2LLU;
	static uint8_t x184 = 31U;
	volatile uint64_t t43 = 440LLU;

	t43 = (((x181<=x182)+x183)/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	static volatile int64_t t44 = 13LL;

	t44 = (((x185<=x186)+x187)/x188);

	if (t44 != -4294967298LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = UINT64_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	static int32_t t45 = 50881197;

	t45 = (((x189<=x190)+x191)/x192);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 1220949;
	int8_t x195 = INT8_MIN;
	int8_t x196 = 31;
	volatile int32_t t46 = 3;

	t46 = (((x193<=x194)+x195)/x196);

	if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = 36U;
	static int64_t x199 = INT64_MIN;
	int16_t x200 = -1;

	t47 = (((x197<=x198)+x199)/x200);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x202 = 4468LL;
	static uint64_t x203 = 4171353LLU;
	static int8_t x204 = INT8_MAX;
	uint64_t t48 = 417LLU;

	t48 = (((x201<=x202)+x203)/x204);

	if (t48 != 32845LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	static int64_t t49 = -1406LL;

	t49 = (((x205<=x206)+x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -71LL;
	int64_t x211 = -1LL;
	static volatile int64_t x212 = -115784LL;
	volatile int64_t t50 = 701950LL;

	t50 = (((x209<=x210)+x211)/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 71U;
	uint64_t x214 = 925033916792804LLU;
	int16_t x215 = -2;
	uint16_t x216 = 31719U;
	volatile int32_t t51 = 2;

	t51 = (((x213<=x214)+x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	volatile uint64_t x220 = 4440LLU;
	static volatile uint64_t t52 = 8LLU;

	t52 = (((x217<=x218)+x219)/x220);

	if (t52 != 2077336044336661LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x222 = 17U;
	int32_t x223 = INT32_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	uint32_t t53 = 1134448281U;

	t53 = (((x221<=x222)+x223)/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = 14;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = UINT16_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t54 = 15845133354LLU;

	t54 = (((x225<=x226)+x227)/x228);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	volatile uint16_t x230 = 24351U;
	int32_t x231 = -1;
	static int8_t x232 = -1;
	static int32_t t55 = 0;

	t55 = (((x229<=x230)+x231)/x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int64_t x234 = -1LL;
	volatile int8_t x235 = -1;

	t56 = (((x233<=x234)+x235)/x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 2;
	static volatile int64_t x239 = 4LL;
	volatile int64_t t57 = 0LL;

	t57 = (((x237<=x238)+x239)/x240);

	if (t57 != -4LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t58 = -4;

	t58 = (((x241<=x242)+x243)/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 1;
	int16_t x246 = INT16_MIN;
	uint64_t x247 = 320856LLU;
	int8_t x248 = INT8_MIN;
	volatile uint64_t t59 = 15358686830LLU;

	t59 = (((x245<=x246)+x247)/x248);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x255 = -135876;
	volatile int32_t t60 = 232390842;

	t60 = (((x253<=x254)+x255)/x256);

	if (t60 != -16984) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MAX;
	int8_t x259 = INT8_MAX;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t61 = 1875;

	t61 = (((x257<=x258)+x259)/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = 1529319;
	static int16_t x262 = 915;
	static int16_t x263 = -1;
	volatile int64_t x264 = -1LL;
	int64_t t62 = -210135207711769814LL;

	t62 = (((x261<=x262)+x263)/x264);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 3;
	uint64_t x266 = 2758613LLU;
	uint16_t x267 = 121U;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t63 = -1;

	t63 = (((x265<=x266)+x267)/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MAX;
	static int16_t x274 = INT16_MIN;
	int64_t x275 = 287412148157044LL;
	int8_t x276 = -1;
	int64_t t64 = -1891324289101438LL;

	t64 = (((x273<=x274)+x275)/x276);

	if (t64 != -287412148157044LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -1LL;
	int8_t x282 = -1;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MAX;
	volatile int64_t t65 = 140LL;

	t65 = (((x281<=x282)+x283)/x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MAX;
	static int8_t x286 = 1;
	static volatile uint32_t x287 = 37U;
	volatile int8_t x288 = 61;
	uint32_t t66 = 1664U;

	t66 = (((x285<=x286)+x287)/x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	uint8_t x292 = 2U;
	uint32_t t67 = 65U;

	t67 = (((x289<=x290)+x291)/x292);

	if (t67 != 4U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = INT64_MIN;
	volatile int32_t x294 = INT32_MAX;
	volatile int64_t x296 = INT64_MIN;
	volatile int64_t t68 = 866276922LL;

	t68 = (((x293<=x294)+x295)/x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x297 = UINT32_MAX;
	int64_t x298 = 2395LL;
	uint32_t x299 = 1251153676U;
	uint32_t x300 = 209U;
	uint32_t t69 = 59436U;

	t69 = (((x297<=x298)+x299)/x300);

	if (t69 != 5986381U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = -2;
	int32_t x302 = INT32_MIN;
	static int8_t x303 = INT8_MAX;
	int8_t x304 = INT8_MIN;

	t70 = (((x301<=x302)+x303)/x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x305 = 1787333LLU;
	int32_t x306 = INT32_MAX;
	volatile int32_t t71 = -15;

	t71 = (((x305<=x306)+x307)/x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x311 = -1;
	volatile int32_t x312 = INT32_MIN;
	static volatile int32_t t72 = 846706937;

	t72 = (((x309<=x310)+x311)/x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 17;
	static int16_t x314 = INT16_MAX;
	static int32_t x315 = -4057958;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t73 = -225064;

	t73 = (((x313<=x314)+x315)/x316);

	if (t73 != -15913) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x321 = 11U;
	volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = 0U;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t74 = 8388218887037480120LLU;

	t74 = (((x321<=x322)+x323)/x324);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x326 = -9;
	static uint32_t x327 = 645U;
	int16_t x328 = INT16_MIN;
	uint32_t t75 = 1311U;

	t75 = (((x325<=x326)+x327)/x328);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = -39444553;
	int16_t x330 = INT16_MIN;
	static uint16_t x331 = 1216U;
	int16_t x332 = INT16_MIN;

	t76 = (((x329<=x330)+x331)/x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = 4U;
	volatile int32_t x334 = INT32_MAX;
	uint16_t x335 = 21U;
	static uint32_t x336 = 1U;
	uint32_t t77 = 135229U;

	t77 = (((x333<=x334)+x335)/x336);

	if (t77 != 22U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x338 = INT64_MIN;
	int64_t x339 = -1LL;
	int8_t x340 = -7;

	t78 = (((x337<=x338)+x339)/x340);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x347 = 63U;
	volatile int8_t x348 = INT8_MAX;
	volatile int32_t t79 = -3;

	t79 = (((x345<=x346)+x347)/x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 4660U;
	int32_t x350 = -2;
	volatile int8_t x351 = -1;
	static volatile int32_t t80 = 1223676;

	t80 = (((x349<=x350)+x351)/x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -1;
	int8_t x354 = 9;
	uint16_t x355 = 13097U;
	uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t81 = 223539033U;

	t81 = (((x353<=x354)+x355)/x356);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x359 = -1LL;
	int16_t x360 = 2010;
	volatile int64_t t82 = -17326LL;

	t82 = (((x357<=x358)+x359)/x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = -1;
	static uint16_t x367 = UINT16_MAX;
	volatile int32_t x368 = INT32_MIN;

	t83 = (((x365<=x366)+x367)/x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = -1;
	int16_t x370 = -120;
	int8_t x371 = INT8_MIN;
	static uint64_t x372 = 19061LLU;
	volatile uint64_t t84 = 4014961451LLU;

	t84 = (((x369<=x370)+x371)/x372);

	if (t84 != 967774202492500LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x373 = INT32_MAX;
	static volatile int32_t x374 = INT32_MIN;
	volatile int64_t x376 = 24LL;
	uint64_t t85 = 254LLU;

	t85 = (((x373<=x374)+x375)/x376);

	if (t85 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = -9898;
	int8_t x379 = INT8_MIN;
	int64_t x380 = -748443551LL;
	volatile int64_t t86 = -242247734295551250LL;

	t86 = (((x377<=x378)+x379)/x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x384 = 153427400;
	int32_t t87 = -415160;

	t87 = (((x381<=x382)+x383)/x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x386 = UINT16_MAX;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;

	t88 = (((x385<=x386)+x387)/x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x389 = INT32_MIN;
	uint64_t x390 = 9607LLU;
	int8_t x392 = 1;
	volatile int64_t t89 = -3153413735244LL;

	t89 = (((x389<=x390)+x391)/x392);

	if (t89 != 12628206647541559LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = UINT16_MAX;
	volatile int32_t x396 = -1;
	volatile int32_t t90 = 1073466322;

	t90 = (((x393<=x394)+x395)/x396);

	if (t90 != -65536) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x397 = UINT16_MAX;
	uint64_t x400 = 366483522359LLU;
	static volatile uint64_t t91 = 80077338542256LLU;

	t91 = (((x397<=x398)+x399)/x400);

	if (t91 != 50334443LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x401 = INT16_MIN;
	volatile int8_t x403 = 0;
	uint64_t x404 = 2129966719902665996LLU;
	uint64_t t92 = 2065123889625LLU;

	t92 = (((x401<=x402)+x403)/x404);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x406 = INT32_MIN;
	int16_t x407 = 1276;
	int16_t x408 = -34;

	t93 = (((x405<=x406)+x407)/x408);

	if (t93 != -37) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x409 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = 222U;
	int32_t t94 = -7337722;

	t94 = (((x409<=x410)+x411)/x412);

	if (t94 != -147) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 6283U;
	uint64_t x415 = 6158813593797006863LLU;
	static uint64_t t95 = 1870589LLU;

	t95 = (((x413<=x414)+x415)/x416);

	if (t95 != 187957811023194LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x417 = 2231796463900760LLU;
	static int8_t x418 = INT8_MIN;
	volatile int16_t x419 = INT16_MIN;
	static volatile int64_t x420 = -1LL;
	int64_t t96 = 129110129297478LL;

	t96 = (((x417<=x418)+x419)/x420);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = -1;
	int64_t x422 = INT64_MIN;
	static uint16_t x424 = 837U;
	int32_t t97 = -62528;

	t97 = (((x421<=x422)+x423)/x424);

	if (t97 != 78) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 517469721LLU;
	uint32_t x430 = 6U;
	static uint8_t x431 = UINT8_MAX;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t98 = 340U;

	t98 = (((x429<=x430)+x431)/x432);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x435 = -1LL;
	static int32_t x436 = -27567317;
	int64_t t99 = 269233655607LL;

	t99 = (((x433<=x434)+x435)/x436);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

