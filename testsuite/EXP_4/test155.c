#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 116;
uint8_t x12 = 22U;
static uint32_t x14 = UINT32_MAX;
int8_t x15 = INT8_MIN;
volatile uint64_t t3 = UINT64_MAX;
uint16_t x29 = 4385U;
int16_t x43 = -410;
volatile int8_t x46 = INT8_MAX;
uint64_t t10 = UINT64_MAX;
int32_t x54 = INT32_MIN;
int32_t x57 = -67081686;
uint8_t x69 = 50U;
int64_t x70 = INT64_MAX;
static uint16_t x71 = UINT16_MAX;
volatile uint64_t t15 = 6917LLU;
static int32_t x77 = 115;
static int16_t x79 = INT16_MAX;
uint16_t x81 = 3767U;
int8_t x83 = INT8_MIN;
int16_t x84 = 12;
volatile int32_t x96 = -110295716;
volatile int32_t t19 = 369691875;
volatile int32_t x98 = -1;
static int16_t x107 = 0;
volatile int64_t x108 = INT64_MIN;
static volatile int8_t x109 = 2;
int32_t x121 = -1;
int32_t t25 = -2244104;
int32_t x127 = 2;
int32_t t27 = 893415;
volatile int16_t x134 = -123;
int16_t x141 = -5256;
static uint32_t x142 = 50U;
int8_t x143 = 2;
volatile int16_t x144 = INT16_MIN;
static uint32_t x146 = UINT32_MAX;
uint64_t t31 = 158298LLU;
static int8_t x150 = INT8_MAX;
uint32_t x167 = 87838U;
volatile uint32_t t36 = UINT32_MAX;
static uint32_t x172 = 22202949U;
volatile int64_t x174 = 4401159674472916758LL;
static uint32_t x176 = 1891U;
static uint64_t t39 = 54968364963756992LLU;
int64_t t41 = -3687633513406095713LL;
static volatile uint64_t x193 = UINT64_MAX;
int32_t x196 = INT32_MIN;
volatile uint64_t t43 = UINT64_MAX;
int64_t x197 = INT64_MIN;
static uint16_t x198 = UINT16_MAX;
uint64_t x200 = 1LLU;
int64_t x206 = 69218569009279LL;
volatile uint32_t x211 = UINT32_MAX;
int8_t x217 = 1;
int8_t x228 = 1;
uint16_t x229 = UINT16_MAX;
volatile int64_t t50 = 155661381939936241LL;
int64_t x233 = -1LL;
int64_t x236 = -1LL;
int64_t t51 = 22072865LL;
int64_t x241 = -73150820LL;
int64_t t52 = 5371503LL;
uint32_t x251 = 50226777U;
int16_t x256 = -1;
int8_t x259 = -1;
int16_t x260 = INT16_MAX;
volatile int64_t x262 = INT64_MIN;
volatile int64_t t57 = 195091750173159497LL;
uint64_t x267 = UINT64_MAX;
static volatile uint64_t t58 = 8113293542743752069LLU;
volatile int16_t x279 = 869;
int64_t x286 = -1LL;
static uint64_t x289 = 52881566012381138LLU;
static volatile int16_t x299 = 0;
int16_t x320 = 1;
static int32_t x321 = 717867772;
int64_t x335 = -548975622024780LL;
int64_t x338 = -1LL;
uint32_t x341 = 48U;
uint32_t x344 = 466U;
volatile uint16_t x356 = 1358U;
uint64_t x367 = 21948162826516162LLU;
uint8_t x368 = 0U;
static int8_t x369 = INT8_MIN;
uint64_t x375 = 27LLU;
volatile int32_t x379 = 2;
uint16_t x385 = 109U;
int8_t x387 = INT8_MIN;
volatile int32_t t83 = -1;
volatile int64_t t84 = 130453030LL;
uint64_t x405 = 2681604433299434LLU;
volatile uint8_t x406 = UINT8_MAX;
int16_t x415 = INT16_MIN;
static uint16_t x418 = UINT16_MAX;
static int64_t x420 = -15LL;
volatile int64_t t90 = -1808535LL;
volatile int64_t x428 = 141863712LL;
int64_t x433 = -1LL;
volatile int8_t x436 = 20;
static volatile int64_t t93 = 1089227463LL;
volatile uint32_t x440 = UINT32_MAX;
static uint16_t x442 = 0U;
volatile uint16_t x443 = 20796U;
static int32_t t95 = -69831;
int32_t x454 = INT32_MIN;
uint8_t x457 = 1U;
volatile int16_t x460 = 179;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = -1;
	static uint32_t x4 = 3U;
	volatile int64_t t0 = 1201316000092383236LL;

	t0 = (x1|(x2|(x3+x4)));

	if (t0 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 36;
	int16_t x7 = INT16_MIN;
	static volatile int64_t x8 = -688529LL;
	int64_t t1 = 13424415769529LL;

	t1 = (x5|(x6|(x7+x8)));

	if (t1 != -721281LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int32_t x10 = INT32_MAX;
	uint32_t x11 = 64905240U;
	volatile uint32_t t2 = 2392597U;

	t2 = (x9|(x10|(x11+x12)));

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -3LL;
	uint64_t x16 = 6176951293770165311LLU;

	t3 = (x13|(x14|(x15+x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 515545U;
	int64_t x18 = -1LL;
	uint32_t x19 = 1118881U;
	int8_t x20 = 9;
	volatile int64_t t4 = -14071LL;

	t4 = (x17|(x18|(x19+x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 11;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 555U;
	static volatile uint64_t x28 = UINT64_MAX;
	static uint64_t t5 = 229869767991821LLU;

	t5 = (x25|(x26|(x27+x28)));

	if (t5 != 9223372036854776363LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 46485176731LL;
	static volatile uint16_t x31 = 12U;
	int8_t x32 = -1;
	static volatile int64_t t6 = -490LL;

	t6 = (x29|(x30|(x31+x32)));

	if (t6 != 46485180859LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	static volatile uint16_t x34 = UINT16_MAX;
	int32_t x35 = 116648549;
	uint32_t x36 = UINT32_MAX;
	int64_t t7 = INT64_MAX;

	t7 = (x33|(x34|(x35+x36)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	static int32_t x42 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t8 = -41;

	t8 = (x41|(x42|(x43+x44)));

	if (t8 != -283) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = -36;
	int64_t x47 = 2077837318428465LL;
	int8_t x48 = -1;
	int64_t t9 = -10071694458220058LL;

	t9 = (x45|(x46|(x47+x48)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	static int32_t x50 = -1;
	uint64_t x51 = 3736352678813981991LLU;
	int64_t x52 = -1LL;

	t10 = (x49|(x50|(x51+x52)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = -1;
	static int16_t x55 = 450;
	int64_t x56 = INT64_MIN;
	int64_t t11 = 6501596245792LL;

	t11 = (x53|(x54|(x55+x56)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x58 = -1;
	volatile int8_t x59 = -1;
	int16_t x60 = -1;
	volatile int32_t t12 = 40693153;

	t12 = (x57|(x58|(x59+x60)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x65 = 31893587LLU;
	int16_t x66 = INT16_MIN;
	static volatile int16_t x67 = INT16_MIN;
	uint16_t x68 = 1206U;
	uint64_t t13 = 139554752967043LLU;

	t13 = (x65|(x66|(x67+x68)));

	if (t13 != 18446744073709530359LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x72 = -1LL;
	int64_t t14 = INT64_MAX;

	t14 = (x69|(x70|(x71+x72)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MAX;
	uint64_t x75 = 9460023LLU;
	uint32_t x76 = 316638U;

	t15 = (x73|(x74|(x75+x76)));

	if (t15 != 9776767LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 14674LLU;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t16 = 93LLU;

	t16 = (x77|(x78|(x79+x80)));

	if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = 1U;
	int32_t t17 = 3306757;

	t17 = (x81|(x82|(x83+x84)));

	if (t17 != -65) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x85 = 3319223723833LLU;
	int64_t x86 = 239427726385355045LL;
	static int32_t x87 = -3695537;
	static int16_t x88 = INT16_MIN;
	volatile uint64_t t18 = 17192131LLU;

	t18 = (x85|(x86|(x87+x88)));

	if (t18 != 18446744073709010815LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	static int8_t x95 = INT8_MIN;

	t19 = (x93|(x94|(x95+x96)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	int8_t x100 = INT8_MAX;
	int64_t t20 = -695LL;

	t20 = (x97|(x98|(x99+x100)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = INT16_MIN;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = -1;
	int32_t x104 = -1;
	int32_t t21 = -7;

	t21 = (x101|(x102|(x103+x104)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	static int8_t x106 = -28;
	int64_t t22 = 25937683152297198LL;

	t22 = (x105|(x106|(x107+x108)));

	if (t22 != -28LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x110 = INT8_MAX;
	static uint64_t x111 = 283LLU;
	uint8_t x112 = UINT8_MAX;
	uint64_t t23 = 1017LLU;

	t23 = (x109|(x110|(x111+x112)));

	if (t23 != 639LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x117 = 3143U;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -214816974;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t24 = -6;

	t24 = (x117|(x118|(x119+x120)));

	if (t24 != -20489) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x122 = 5U;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = -1;

	t25 = (x121|(x122|(x123+x124)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x125 = UINT16_MAX;
	uint8_t x126 = 5U;
	int8_t x128 = 1;
	volatile int32_t t26 = 14268;

	t26 = (x125|(x126|(x127+x128)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	static uint8_t x130 = UINT8_MAX;
	int8_t x131 = -1;
	static int16_t x132 = INT16_MIN;

	t27 = (x129|(x130|(x131+x132)));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -2;
	static int64_t x135 = -1LL;
	int16_t x136 = INT16_MAX;
	volatile int64_t t28 = 172386LL;

	t28 = (x133|(x134|(x135+x136)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = INT64_MIN;
	static int64_t x138 = -1LL;
	volatile uint8_t x139 = UINT8_MAX;
	static int64_t x140 = 9LL;
	static volatile int64_t t29 = 42777478118LL;

	t29 = (x137|(x138|(x139+x140)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t t30 = 0U;

	t30 = (x141|(x142|(x143+x144)));

	if (t30 != 4294962042U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = 7;
	static uint64_t x147 = UINT64_MAX;
	volatile uint8_t x148 = UINT8_MAX;

	t31 = (x145|(x146|(x147+x148)));

	if (t31 != 4294967295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MIN;
	uint8_t x151 = 108U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t32 = 2;

	t32 = (x149|(x150|(x151+x152)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	int32_t x155 = 1;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t33 = -48;

	t33 = (x153|(x154|(x155+x156)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MIN;
	static int64_t x158 = 5914575089LL;
	int8_t x159 = INT8_MAX;
	int32_t x160 = -968;
	volatile int64_t t34 = 86LL;

	t34 = (x157|(x158|(x159+x160)));

	if (t34 != -777LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x162 = 6U;
	int16_t x163 = -1;
	int16_t x164 = INT16_MIN;
	volatile int32_t t35 = 1732066;

	t35 = (x161|(x162|(x163+x164)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MAX;
	static int8_t x166 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;

	t36 = (x165|(x166|(x167+x168)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = 6973377LL;
	int64_t x170 = INT64_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	volatile uint64_t t37 = 34205LLU;

	t37 = (x169|(x170|(x171+x172)));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 45152002700895LLU;
	int32_t x175 = INT32_MIN;
	volatile uint64_t t38 = 1073308385LLU;

	t38 = (x173|(x174|(x175+x176)));

	if (t38 != 4401194927581558655LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = UINT32_MAX;
	static uint32_t x178 = 255U;
	uint8_t x179 = 15U;
	uint64_t x180 = UINT64_MAX;

	t39 = (x177|(x178|(x179+x180)));

	if (t39 != 4294967295LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	volatile uint16_t x182 = 14826U;
	int32_t x183 = INT32_MIN;
	uint32_t x184 = 11U;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x181|(x182|(x183+x184)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	static int8_t x188 = INT8_MAX;

	t41 = (x185|(x186|(x187+x188)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 405485792263494496LLU;
	int16_t x190 = 6132;
	static int16_t x191 = -1;
	int8_t x192 = -1;
	static volatile uint64_t t42 = 15577135330LLU;

	t42 = (x189|(x190|(x191+x192)));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x194 = -44666728LL;
	int64_t x195 = INT64_MAX;

	t43 = (x193|(x194|(x195+x196)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x199 = INT8_MIN;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x197|(x198|(x199+x200)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 510LLU;
	int32_t x207 = 131595833;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t45 = 113046680408284961LLU;

	t45 = (x205|(x206|(x207+x208)));

	if (t45 != 69218631942143LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = -6;
	int8_t x210 = INT8_MAX;
	static int32_t x212 = INT32_MAX;
	uint32_t t46 = UINT32_MAX;

	t46 = (x209|(x210|(x211+x212)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x218 = 1U;
	int8_t x219 = INT8_MAX;
	volatile int64_t x220 = -154518398880LL;
	int64_t t47 = 227867645495LL;

	t47 = (x217|(x218|(x219+x220)));

	if (t47 != -154518398753LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = 5;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = -2;
	int32_t t48 = 312320559;

	t48 = (x221|(x222|(x223+x224)));

	if (t48 != -2147418115) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -2805825LL;
	int8_t x226 = 9;
	volatile int64_t x227 = -1LL;
	int64_t t49 = -2945316905473518LL;

	t49 = (x225|(x226|(x227+x228)));

	if (t49 != -2805825LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x230 = INT64_MIN;
	static volatile int8_t x231 = -1;
	int16_t x232 = 51;

	t50 = (x229|(x230|(x231+x232)));

	if (t50 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x234 = INT64_MAX;
	static int8_t x235 = INT8_MIN;

	t51 = (x233|(x234|(x235+x236)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x242 = 16U;
	static volatile uint16_t x243 = UINT16_MAX;
	int32_t x244 = -62;

	t52 = (x241|(x242|(x243+x244)));

	if (t52 != -73138211LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 1601541320593LLU;
	static volatile uint64_t x247 = 19712LLU;
	static int8_t x248 = -1;
	uint64_t t53 = 919108170445980656LLU;

	t53 = (x245|(x246|(x247+x248)));

	if (t53 != 9223373638396112895LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 79891506U;
	int16_t x250 = INT16_MIN;
	int8_t x252 = 2;
	volatile uint32_t t54 = 29U;

	t54 = (x249|(x250|(x251+x252)));

	if (t54 != 4294962811U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x253|(x254|(x255+x256)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -1LL;
	static int16_t x258 = INT16_MIN;
	int64_t t56 = -51771LL;

	t56 = (x257|(x258|(x259+x260)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x261 = 410179;
	volatile int32_t x263 = -1;
	static int8_t x264 = -1;

	t57 = (x261|(x262|(x263+x264)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = 226895216LL;
	volatile uint8_t x266 = 1U;
	uint16_t x268 = UINT16_MAX;

	t58 = (x265|(x266|(x267+x268)));

	if (t58 != 226951167LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -11784LL;
	int32_t x270 = INT32_MAX;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	int64_t t59 = -4040117810548075LL;

	t59 = (x269|(x270|(x271+x272)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = 2910621587640743LLU;
	volatile int64_t x274 = 42LL;
	int64_t x275 = 249440947612LL;
	volatile int32_t x276 = -1;
	uint64_t t60 = 2730LLU;

	t60 = (x273|(x274|(x275+x276)));

	if (t60 != 2910664840371647LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x277 = 0;
	int32_t x278 = INT32_MIN;
	volatile int8_t x280 = 2;
	static int32_t t61 = 901930046;

	t61 = (x277|(x278|(x279+x280)));

	if (t61 != -2147482777) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = 105U;
	int16_t x282 = -1;
	static int32_t x283 = -1;
	volatile int16_t x284 = 1069;
	volatile int32_t t62 = 406560743;

	t62 = (x281|(x282|(x283+x284)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 640U;
	int64_t x287 = INT64_MAX;
	static int16_t x288 = INT16_MIN;
	static volatile int64_t t63 = -15374526310350LL;

	t63 = (x285|(x286|(x287+x288)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	static int64_t x292 = 45095697LL;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x289|(x290|(x291+x292)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = -1LL;
	uint32_t x295 = 8923U;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t65 = 668905228197391LL;

	t65 = (x293|(x294|(x295+x296)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = 10;
	int32_t x298 = -183227778;
	int32_t x300 = -1;
	volatile int32_t t66 = 17204;

	t66 = (x297|(x298|(x299+x300)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = 314U;
	static volatile uint32_t x314 = UINT32_MAX;
	volatile int16_t x315 = -118;
	static uint32_t x316 = UINT32_MAX;
	uint32_t t67 = UINT32_MAX;

	t67 = (x313|(x314|(x315+x316)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	int32_t t68 = -774;

	t68 = (x317|(x318|(x319+x320)));

	if (t68 != -2147483393) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x322 = 1U;
	uint64_t x323 = 922LLU;
	static int64_t x324 = INT64_MIN;
	uint64_t t69 = 57894188600914129LLU;

	t69 = (x321|(x322|(x323+x324)));

	if (t69 != 9223372037572643839LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x325 = 34U;
	uint16_t x326 = 5091U;
	int64_t x327 = 278108310031445562LL;
	int64_t x328 = INT64_MIN;
	static volatile int64_t t70 = 25421499166LL;

	t70 = (x325|(x326|(x327+x328)));

	if (t70 != -8945263726823325701LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	volatile uint64_t x336 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x333|(x334|(x335+x336)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x337 = UINT8_MAX;
	static int8_t x339 = -1;
	static int32_t x340 = -1;
	volatile int64_t t72 = 1232889910LL;

	t72 = (x337|(x338|(x339+x340)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x342 = -16792901;
	int32_t x343 = 5389;
	volatile uint32_t t73 = 2157117U;

	t73 = (x341|(x342|(x343+x344)));

	if (t73 != 4278179583U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 56925678931884LLU;
	static uint16_t x346 = 79U;
	static uint8_t x347 = 3U;
	static volatile int32_t x348 = INT32_MIN;
	volatile uint64_t t74 = 1641298969LLU;

	t74 = (x345|(x346|(x347+x348)));

	if (t74 != 18446744071744458735LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = -1;
	static uint64_t x350 = 4104111860514733LLU;
	static uint32_t x351 = UINT32_MAX;
	static uint16_t x352 = UINT16_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x349|(x350|(x351+x352)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = UINT32_MAX;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -1;
	static uint32_t t76 = UINT32_MAX;

	t76 = (x353|(x354|(x355+x356)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = -1;
	int64_t x358 = 8935960146LL;
	int16_t x359 = INT16_MIN;
	int8_t x360 = 1;
	int64_t t77 = 30331436160386LL;

	t77 = (x357|(x358|(x359+x360)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	volatile int8_t x366 = 3;
	static volatile uint64_t t78 = 580LLU;

	t78 = (x365|(x366|(x367+x368)));

	if (t78 != 21948162826534911LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = 0LL;
	static uint16_t x372 = 477U;
	static int64_t t79 = -59555226977LL;

	t79 = (x369|(x370|(x371+x372)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x373 = -1LL;
	int64_t x374 = INT64_MIN;
	int8_t x376 = 1;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x373|(x374|(x375+x376)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x377 = 7U;
	uint16_t x378 = UINT16_MAX;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t81 = 36209;

	t81 = (x377|(x378|(x379+x380)));

	if (t81 != 131071) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x381 = INT8_MIN;
	static int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = 1357LL;
	volatile int64_t t82 = 774819966459LL;

	t82 = (x381|(x382|(x383+x384)));

	if (t82 != -51LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x386 = UINT16_MAX;
	static volatile int8_t x388 = 1;

	t83 = (x385|(x386|(x387+x388)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MAX;
	int8_t x390 = -1;
	volatile int8_t x391 = 1;
	static int16_t x392 = INT16_MIN;

	t84 = (x389|(x390|(x391+x392)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x397 = 1;
	int32_t x398 = 1022;
	uint8_t x399 = 0U;
	static int8_t x400 = INT8_MAX;
	volatile int32_t t85 = 1;

	t85 = (x397|(x398|(x399+x400)));

	if (t85 != 1023) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 1941497827LLU;
	volatile uint8_t x403 = 9U;
	volatile int16_t x404 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x401|(x402|(x403+x404)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x407 = 477422LL;
	uint32_t x408 = 0U;
	static uint64_t t87 = 4064687006LLU;

	t87 = (x405|(x406|(x407+x408)));

	if (t87 != 2681604433498111LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = -16;
	volatile int16_t x411 = -3903;
	int8_t x412 = -1;
	static volatile int32_t t88 = -30919422;

	t88 = (x409|(x410|(x411+x412)));

	if (t88 != -16) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = INT32_MIN;
	static volatile int64_t x414 = -1LL;
	volatile uint64_t x416 = 7LLU;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x413|(x414|(x415+x416)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x417 = 1;
	int8_t x419 = -1;

	t90 = (x417|(x418|(x419+x420)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = INT64_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MIN;
	volatile int64_t t91 = 741496LL;

	t91 = (x425|(x426|(x427+x428)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = UINT32_MAX;
	static volatile int64_t x430 = INT64_MIN;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = INT8_MIN;
	volatile int64_t t92 = 14695733LL;

	t92 = (x429|(x430|(x431+x432)));

	if (t92 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x434 = 701442U;
	int64_t x435 = 6554286LL;

	t93 = (x433|(x434|(x435+x436)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x437 = UINT32_MAX;
	volatile int8_t x438 = INT8_MAX;
	int32_t x439 = INT32_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x437|(x438|(x439+x440)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1;
	static int8_t x444 = -1;

	t95 = (x441|(x442|(x443+x444)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x445 = UINT16_MAX;
	int64_t x446 = 5999357627146056LL;
	static int8_t x447 = 15;
	int16_t x448 = INT16_MIN;
	static volatile int64_t t96 = 280575049083529LL;

	t96 = (x445|(x446|(x447+x448)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x449 = INT16_MIN;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 52U;
	volatile int32_t t97 = -4532;

	t97 = (x449|(x450|(x451+x452)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x453 = 13U;
	uint64_t x455 = UINT64_MAX;
	int32_t x456 = INT32_MAX;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x453|(x454|(x455+x456)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x458 = 203LL;
	int16_t x459 = -1;
	static volatile int64_t t99 = -20735060LL;

	t99 = (x457|(x458|(x459+x460)));

	if (t99 != 251LL) { NG(); } else { ; }
	
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

