#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x7 = UINT8_MAX;
volatile int32_t t3 = 104113975;
volatile uint64_t x22 = 484597LLU;
static int8_t x27 = INT8_MIN;
uint64_t x32 = 6707669941837LLU;
int8_t x43 = INT8_MIN;
int32_t t9 = 146313969;
int8_t x53 = INT8_MIN;
int64_t x56 = INT64_MIN;
static int64_t x58 = -3LL;
int32_t x66 = -20300;
static int8_t x68 = INT8_MAX;
int16_t x71 = -1;
uint64_t x74 = UINT64_MAX;
uint8_t x75 = 2U;
int16_t x76 = -1;
volatile int64_t x78 = INT64_MIN;
volatile uint16_t x80 = 4360U;
static volatile int32_t t17 = -82402;
static int32_t x81 = -1;
volatile int16_t x83 = INT16_MIN;
static volatile int32_t t19 = 1;
int16_t x95 = -20;
volatile int32_t t21 = 0;
int8_t x105 = -1;
uint16_t x108 = 1982U;
volatile int32_t t25 = -3854162;
uint16_t x113 = 289U;
int64_t x117 = INT64_MAX;
volatile int8_t x118 = -1;
int8_t x122 = -7;
static volatile uint16_t x127 = 4U;
int16_t x132 = INT16_MIN;
volatile int32_t t31 = 0;
volatile uint64_t x147 = 141595221348036LLU;
static int64_t x150 = INT64_MAX;
static int8_t x153 = -6;
int8_t x155 = 15;
static int32_t x163 = 806552669;
uint16_t x168 = 4416U;
int8_t x170 = INT8_MIN;
static int32_t x171 = -43;
int8_t x189 = -1;
int32_t t42 = 17;
int8_t x196 = INT8_MAX;
int8_t x198 = 9;
volatile int32_t t45 = 4619295;
volatile int8_t x210 = -1;
int32_t x213 = INT32_MAX;
uint8_t x215 = 0U;
int32_t x217 = -1;
int8_t x222 = INT8_MIN;
int32_t t50 = -41369;
int64_t x242 = INT64_MIN;
int16_t x244 = 4831;
static volatile int16_t x247 = INT16_MIN;
uint64_t x248 = UINT64_MAX;
uint32_t x252 = UINT32_MAX;
volatile int8_t x254 = -1;
uint16_t x257 = 356U;
int8_t x258 = INT8_MIN;
int32_t x259 = 0;
uint16_t x264 = UINT16_MAX;
volatile uint32_t x272 = 76570U;
static int32_t t65 = 1;
int32_t t66 = 1049;
uint64_t x305 = UINT64_MAX;
int64_t x314 = 148759236890LL;
int32_t x323 = 9496363;
static int32_t x328 = -1;
int64_t x331 = 46312LL;
int32_t x339 = -3;
static int32_t x348 = INT32_MAX;
volatile int16_t x352 = INT16_MIN;
static uint32_t x358 = UINT32_MAX;
volatile int32_t t84 = 1623;
int8_t x366 = INT8_MAX;
volatile uint64_t x368 = UINT64_MAX;
uint8_t x369 = UINT8_MAX;
static uint16_t x376 = 29694U;
int16_t x384 = INT16_MIN;
static uint16_t x390 = 10U;
int64_t x394 = INT64_MIN;
int8_t x396 = -1;
volatile int32_t t95 = -444818189;
volatile int16_t x406 = INT16_MIN;
int64_t x408 = -1LL;
volatile int32_t t96 = 20365056;
volatile int64_t x418 = -318LL;


void f0(void) {
	int32_t x5 = 1215835;
	int8_t x6 = -1;
	uint8_t x8 = 16U;
	static int32_t t0 = -23078292;

	t0 = (((x5%x6)+x7)<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 22U;
	static int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MAX;
	volatile int64_t x12 = -1LL;
	volatile int32_t t1 = -29531;

	t1 = (((x9%x10)+x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;
	static int16_t x16 = INT16_MAX;
	int32_t t2 = 281731710;

	t2 = (((x13%x14)+x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int8_t x18 = -1;
	int64_t x19 = -3LL;
	int16_t x20 = -7960;

	t3 = (((x17%x18)+x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 24U;
	uint16_t x23 = 1U;
	static uint32_t x24 = 98U;
	int32_t t4 = -11919;

	t4 = (((x21%x22)+x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	volatile int16_t x26 = INT16_MIN;
	volatile uint32_t x28 = UINT32_MAX;
	static volatile int32_t t5 = 4752;

	t5 = (((x25%x26)+x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 0U;
	int64_t x30 = INT64_MAX;
	int8_t x31 = 42;
	volatile int32_t t6 = 1;

	t6 = (((x29%x30)+x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	static uint32_t x35 = 13U;
	static int16_t x36 = 5983;
	volatile int32_t t7 = 1011;

	t7 = (((x33%x34)+x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -1;
	int32_t x40 = INT32_MAX;
	int32_t t8 = 6509187;

	t8 = (((x37%x38)+x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 13U;
	int16_t x42 = 1530;
	static uint64_t x44 = 562155071598LLU;

	t9 = (((x41%x42)+x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int32_t x50 = 119425;
	volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = -115;

	t10 = (((x49%x50)+x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = -114180LL;
	static int8_t x55 = INT8_MIN;
	volatile int32_t t11 = -6905;

	t11 = (((x53%x54)+x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 16031U;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 0U;
	int32_t t12 = -1341;

	t12 = (((x57%x58)+x59)<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	uint32_t x63 = 16522406U;
	uint64_t x64 = 144510979386690193LLU;
	int32_t t13 = -7086377;

	t13 = (((x61%x62)+x63)<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MIN;
	volatile int64_t x67 = 1733126157053LL;
	static int32_t t14 = 291114;

	t14 = (((x65%x66)+x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = -1770413772LL;
	int64_t x70 = -63829LL;
	uint64_t x72 = 2614529894854393746LLU;
	int32_t t15 = 6916085;

	t15 = (((x69%x70)+x71)<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	volatile int32_t t16 = -23714;

	t16 = (((x73%x74)+x75)<=x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -450LL;
	static volatile int16_t x79 = 11929;

	t17 = (((x77%x78)+x79)<=x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = INT8_MIN;
	volatile int16_t x84 = -1;
	volatile int32_t t18 = 490480;

	t18 = (((x81%x82)+x83)<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int8_t x86 = -1;
	uint32_t x87 = 14246225U;
	int32_t x88 = INT32_MAX;

	t19 = (((x85%x86)+x87)<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = 496399147848454892LLU;
	uint8_t x92 = 26U;
	volatile int32_t t20 = -1;

	t20 = (((x89%x90)+x91)<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 14U;
	uint32_t x94 = UINT32_MAX;
	int8_t x96 = INT8_MAX;

	t21 = (((x93%x94)+x95)<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 895U;
	uint32_t x100 = UINT32_MAX;
	int32_t t22 = 275929;

	t22 = (((x97%x98)+x99)<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	static uint32_t x102 = 828008U;
	static int8_t x103 = -1;
	int8_t x104 = INT8_MIN;
	int32_t t23 = 780;

	t23 = (((x101%x102)+x103)<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 13541628LLU;
	int32_t x107 = 3630;
	int32_t t24 = 716923533;

	t24 = (((x105%x106)+x107)<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -14;
	static volatile int64_t x110 = -1LL;
	static int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MAX;

	t25 = (((x109%x110)+x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x114 = 60392096;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t26 = 3;

	t26 = (((x113%x114)+x115)<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x119 = -1LL;
	uint32_t x120 = 1U;
	int32_t t27 = 92742;

	t27 = (((x117%x118)+x119)<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	static int8_t x123 = INT8_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t28 = -19695719;

	t28 = (((x121%x122)+x123)<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x125 = -3841404901183LL;
	uint32_t x126 = 199543353U;
	int8_t x128 = 0;
	int32_t t29 = -182;

	t29 = (((x125%x126)+x127)<=x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	static int8_t x130 = INT8_MIN;
	int32_t x131 = 1523391;
	int32_t t30 = -346;

	t30 = (((x129%x130)+x131)<=x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 1205U;
	int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	int32_t x140 = INT32_MIN;

	t31 = (((x137%x138)+x139)<=x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = -1;
	int64_t x142 = INT64_MAX;
	uint16_t x143 = 49U;
	int16_t x144 = -1906;
	volatile int32_t t32 = -7709123;

	t32 = (((x141%x142)+x143)<=x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t33 = 491303421;

	t33 = (((x145%x146)+x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = 2103163LLU;
	int32_t t34 = 28;

	t34 = (((x149%x150)+x151)<=x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x154 = UINT8_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t35 = 1899581;

	t35 = (((x153%x154)+x155)<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x157 = 1U;
	int16_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t36 = -171846871;

	t36 = (((x157%x158)+x159)<=x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	static int8_t x162 = INT8_MIN;
	static int32_t x164 = INT32_MIN;
	int32_t t37 = -360735;

	t37 = (((x161%x162)+x163)<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x165 = 1U;
	int32_t x166 = 122010374;
	volatile uint16_t x167 = 0U;
	static volatile int32_t t38 = -8;

	t38 = (((x165%x166)+x167)<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 433087U;
	int16_t x172 = -3;
	int32_t t39 = 5;

	t39 = (((x169%x170)+x171)<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t40 = -208284268;

	t40 = (((x177%x178)+x179)<=x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x181 = 9U;
	int16_t x182 = -1;
	uint32_t x183 = 458U;
	int32_t x184 = -1;
	volatile int32_t t41 = 122;

	t41 = (((x181%x182)+x183)<=x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = INT64_MIN;
	volatile int8_t x191 = -2;
	volatile int16_t x192 = INT16_MIN;

	t42 = (((x189%x190)+x191)<=x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	int32_t t43 = 721981313;

	t43 = (((x193%x194)+x195)<=x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int64_t x199 = -1LL;
	volatile int16_t x200 = INT16_MAX;
	static int32_t t44 = -266;

	t44 = (((x197%x198)+x199)<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x201 = -1;
	uint8_t x202 = 16U;
	int16_t x203 = 5645;
	int16_t x204 = 3436;

	t45 = (((x201%x202)+x203)<=x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = -1;
	volatile int32_t x207 = -1;
	uint64_t x208 = 238549864LLU;
	volatile int32_t t46 = -570767032;

	t46 = (((x205%x206)+x207)<=x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	int64_t x211 = 347117949567548LL;
	static volatile uint16_t x212 = UINT16_MAX;
	static int32_t t47 = 0;

	t47 = (((x209%x210)+x211)<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x214 = INT32_MIN;
	uint32_t x216 = UINT32_MAX;
	static volatile int32_t t48 = 0;

	t48 = (((x213%x214)+x215)<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x218 = 88979LLU;
	uint16_t x219 = UINT16_MAX;
	uint16_t x220 = 153U;
	int32_t t49 = 180613355;

	t49 = (((x217%x218)+x219)<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x221 = -1;
	int32_t x223 = -21;
	int16_t x224 = INT16_MIN;

	t50 = (((x221%x222)+x223)<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x225 = 2821LLU;
	int8_t x226 = INT8_MIN;
	int32_t x227 = -1;
	uint8_t x228 = 17U;
	volatile int32_t t51 = -6;

	t51 = (((x225%x226)+x227)<=x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile int64_t x230 = -1LL;
	volatile int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t52 = 116611;

	t52 = (((x229%x230)+x231)<=x232);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -217;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = 13U;
	uint64_t x236 = 11723617LLU;
	volatile int32_t t53 = 5069;

	t53 = (((x233%x234)+x235)<=x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 153LLU;
	volatile int16_t x238 = -11934;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t54 = -2246;

	t54 = (((x237%x238)+x239)<=x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	volatile uint16_t x243 = UINT16_MAX;
	int32_t t55 = 1;

	t55 = (((x241%x242)+x243)<=x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MAX;
	volatile int32_t t56 = 15385;

	t56 = (((x245%x246)+x247)<=x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MAX;
	volatile int32_t t57 = -1198;

	t57 = (((x249%x250)+x251)<=x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = 1034002822U;
	int16_t x255 = -1;
	int8_t x256 = 0;
	volatile int32_t t58 = 24345521;

	t58 = (((x253%x254)+x255)<=x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x260 = 35539105888589233LLU;
	int32_t t59 = -891377130;

	t59 = (((x257%x258)+x259)<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = 2134417558272766LL;
	static volatile int32_t x263 = INT32_MAX;
	volatile int32_t t60 = 158;

	t60 = (((x261%x262)+x263)<=x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = UINT32_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	int32_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	int32_t t61 = 1019653;

	t61 = (((x265%x266)+x267)<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x269 = INT64_MIN;
	static uint8_t x270 = 91U;
	uint64_t x271 = 11831LLU;
	volatile int32_t t62 = 22;

	t62 = (((x269%x270)+x271)<=x272);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = UINT16_MAX;
	static int8_t x274 = INT8_MAX;
	volatile uint64_t x275 = 7184380472LLU;
	int8_t x276 = -3;
	static int32_t t63 = -37406559;

	t63 = (((x273%x274)+x275)<=x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x277 = 3U;
	static volatile int32_t x278 = -1;
	int16_t x279 = -3930;
	static int16_t x280 = -1;
	static volatile int32_t t64 = -4;

	t64 = (((x277%x278)+x279)<=x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MIN;
	volatile int8_t x282 = -1;
	int32_t x283 = -1;
	static int32_t x284 = INT32_MAX;

	t65 = (((x281%x282)+x283)<=x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x285 = 1U;
	int16_t x286 = INT16_MAX;
	volatile int64_t x287 = INT64_MIN;
	int16_t x288 = -1;

	t66 = (((x285%x286)+x287)<=x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = 4079;
	uint64_t x291 = 2LLU;
	uint8_t x292 = 2U;
	int32_t t67 = 60690771;

	t67 = (((x289%x290)+x291)<=x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x293 = 10035U;
	static int32_t x294 = -28323;
	static volatile uint32_t x295 = 108514858U;
	int32_t x296 = -1;
	static volatile int32_t t68 = 196728122;

	t68 = (((x293%x294)+x295)<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = 1455U;
	int32_t t69 = 2;

	t69 = (((x297%x298)+x299)<=x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int64_t x302 = 10962262LL;
	volatile int8_t x303 = INT8_MAX;
	static volatile uint64_t x304 = UINT64_MAX;
	int32_t t70 = 5167;

	t70 = (((x301%x302)+x303)<=x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = INT32_MAX;
	volatile int8_t x307 = -1;
	int32_t x308 = -8721;
	static volatile int32_t t71 = -17163;

	t71 = (((x305%x306)+x307)<=x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = 14U;
	uint16_t x311 = 7U;
	int16_t x312 = 3;
	int32_t t72 = 1;

	t72 = (((x309%x310)+x311)<=x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;
	int32_t t73 = 40270;

	t73 = (((x313%x314)+x315)<=x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x318 = 10U;
	uint8_t x319 = 1U;
	int32_t x320 = -140819233;
	int32_t t74 = 1;

	t74 = (((x317%x318)+x319)<=x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MIN;
	int16_t x324 = -1;
	volatile int32_t t75 = 101009;

	t75 = (((x321%x322)+x323)<=x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 409410675LLU;
	static int32_t x326 = INT32_MIN;
	uint8_t x327 = 15U;
	volatile int32_t t76 = 6;

	t76 = (((x325%x326)+x327)<=x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x329 = INT16_MIN;
	volatile int16_t x330 = INT16_MIN;
	int16_t x332 = -2;
	int32_t t77 = 1417927;

	t77 = (((x329%x330)+x331)<=x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MIN;
	static volatile int8_t x334 = 38;
	static uint64_t x335 = 50806898750LLU;
	uint32_t x336 = 401120241U;
	static int32_t t78 = 5577;

	t78 = (((x333%x334)+x335)<=x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = INT32_MIN;
	int32_t x338 = 1647821;
	int64_t x340 = INT64_MAX;
	int32_t t79 = 0;

	t79 = (((x337%x338)+x339)<=x340);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int16_t x344 = -25;
	volatile int32_t t80 = 151535728;

	t80 = (((x341%x342)+x343)<=x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x345 = -1;
	int16_t x346 = INT16_MIN;
	static uint64_t x347 = UINT64_MAX;
	int32_t t81 = 5774092;

	t81 = (((x345%x346)+x347)<=x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int32_t x350 = INT32_MIN;
	volatile int32_t x351 = -1;
	static volatile int32_t t82 = 25016067;

	t82 = (((x349%x350)+x351)<=x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x353 = 251592;
	int64_t x354 = 6321579381LL;
	uint64_t x355 = 12031404433LLU;
	uint8_t x356 = 4U;
	int32_t t83 = -42097685;

	t83 = (((x353%x354)+x355)<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = INT8_MIN;
	uint8_t x359 = 100U;
	int32_t x360 = INT32_MIN;

	t84 = (((x357%x358)+x359)<=x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -1;
	int16_t x362 = 1;
	volatile int32_t x363 = INT32_MAX;
	volatile uint8_t x364 = 75U;
	volatile int32_t t85 = 11628;

	t85 = (((x361%x362)+x363)<=x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x367 = -1LL;
	static volatile int32_t t86 = 34432926;

	t86 = (((x365%x366)+x367)<=x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x370 = INT8_MIN;
	uint64_t x371 = UINT64_MAX;
	volatile int8_t x372 = -1;
	static int32_t t87 = 496;

	t87 = (((x369%x370)+x371)<=x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	int32_t t88 = 841;

	t88 = (((x373%x374)+x375)<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -1LL;
	static volatile int64_t x378 = INT64_MIN;
	int64_t x379 = 379633838064LL;
	static volatile int16_t x380 = 3521;
	int32_t t89 = 3;

	t89 = (((x377%x378)+x379)<=x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -69392;
	static int8_t x382 = 1;
	int64_t x383 = -16LL;
	volatile int32_t t90 = 6931;

	t90 = (((x381%x382)+x383)<=x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x386 = -2534957600114704457LL;
	static int16_t x387 = INT16_MIN;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t91 = 17;

	t91 = (((x385%x386)+x387)<=x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = INT16_MAX;
	uint64_t x391 = 857LLU;
	int8_t x392 = INT8_MIN;
	int32_t t92 = 3634;

	t92 = (((x389%x390)+x391)<=x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 118707LL;
	static uint16_t x395 = 37U;
	volatile int32_t t93 = 1187379;

	t93 = (((x393%x394)+x395)<=x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	static uint32_t x398 = 56U;
	int32_t x399 = 704;
	int64_t x400 = INT64_MIN;
	volatile int32_t t94 = -49175;

	t94 = (((x397%x398)+x399)<=x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MAX;

	t95 = (((x401%x402)+x403)<=x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x405 = 0U;
	int8_t x407 = -4;

	t96 = (((x405%x406)+x407)<=x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = 42618LL;
	uint64_t x410 = 1142LLU;
	int32_t x411 = -248;
	static int8_t x412 = -1;
	volatile int32_t t97 = 13967451;

	t97 = (((x409%x410)+x411)<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x413 = INT32_MIN;
	static volatile int8_t x414 = 46;
	int16_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	static int32_t t98 = -1;

	t98 = (((x413%x414)+x415)<=x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x419 = 7552022988LLU;
	int64_t x420 = -12467865LL;
	int32_t t99 = -640417;

	t99 = (((x417%x418)+x419)<=x420);

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

