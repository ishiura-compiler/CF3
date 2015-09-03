#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = -1LL;
volatile int64_t x16 = 21147077116LL;
int16_t x28 = INT16_MAX;
static volatile int32_t t6 = -44318155;
static int64_t x34 = INT64_MIN;
uint32_t t9 = 735U;
static int32_t x59 = INT32_MAX;
int64_t x65 = -1LL;
int8_t x70 = INT8_MIN;
int32_t x71 = -1;
uint64_t x74 = 1LLU;
int32_t x78 = INT32_MIN;
int32_t t19 = -40592477;
int8_t x89 = 3;
volatile int64_t x90 = -21780228LL;
volatile int32_t t21 = -833877405;
int64_t x94 = -1LL;
volatile int32_t t22 = 3352;
int16_t x99 = -1;
volatile uint16_t x112 = 95U;
volatile uint64_t x118 = 498243LLU;
volatile int32_t x124 = -993;
int64_t x126 = 51LL;
static int32_t x127 = INT32_MIN;
int8_t x135 = -6;
uint8_t x136 = 2U;
uint64_t t32 = 459211930561LLU;
int16_t x140 = INT16_MAX;
int64_t x142 = 1218456800LL;
volatile int32_t t34 = INT32_MIN;
uint32_t x152 = 1445U;
uint8_t x160 = 25U;
volatile int16_t x162 = 8521;
volatile uint8_t x166 = UINT8_MAX;
int32_t t39 = INT32_MIN;
uint64_t t40 = 18240564LLU;
volatile int32_t t41 = 1543528;
static volatile int16_t x194 = INT16_MAX;
int32_t x200 = -3230344;
volatile int32_t t45 = -1251352;
int32_t x205 = -5;
int32_t x206 = 1;
volatile uint32_t x210 = UINT32_MAX;
static uint64_t x213 = 17788678766348LLU;
int32_t x214 = INT32_MIN;
int32_t x221 = 94;
static int16_t x223 = -62;
int32_t t51 = 1008;
int64_t x227 = INT64_MAX;
static volatile uint8_t x228 = UINT8_MAX;
int32_t t52 = -950779;
static int32_t x230 = INT32_MIN;
volatile uint32_t x233 = 0U;
volatile int32_t t55 = -216557982;
volatile int32_t x248 = INT32_MAX;
volatile int32_t t57 = 1040467;
int32_t x249 = INT32_MIN;
static uint64_t x253 = 211LLU;
uint64_t x254 = 3801753LLU;
uint64_t t59 = 467621LLU;
int16_t x257 = 188;
uint8_t x258 = 9U;
static int16_t x260 = INT16_MIN;
static uint64_t t61 = 1088796755LLU;
int8_t x269 = INT8_MIN;
uint16_t x272 = 8U;
uint8_t x273 = 12U;
volatile int16_t x279 = 8;
int8_t x281 = 8;
static int64_t x286 = INT64_MIN;
int32_t x295 = -1;
volatile int64_t t70 = INT64_MAX;
int16_t x301 = INT16_MIN;
int8_t x303 = INT8_MAX;
static volatile int32_t t71 = 1;
volatile uint16_t x308 = UINT16_MAX;
uint32_t x310 = UINT32_MAX;
uint32_t x311 = 280350012U;
static int8_t x316 = INT8_MAX;
static int32_t t74 = -911;
static int64_t x321 = INT64_MIN;
int64_t x323 = INT64_MAX;
int32_t x329 = 223824;
uint32_t x332 = 69738745U;
int32_t x336 = 229522;
int64_t x337 = INT64_MIN;
volatile int64_t t80 = INT64_MIN;
int8_t x342 = -1;
int8_t x355 = -1;
static int16_t x364 = INT16_MIN;
uint32_t x370 = UINT32_MAX;
int32_t x382 = INT32_MIN;
static volatile int32_t t91 = -9265;
volatile int8_t x391 = INT8_MIN;
static uint16_t x395 = 902U;
int8_t x409 = 0;
uint16_t x413 = 141U;
int8_t x414 = 5;


void f0(void) {
	volatile uint8_t x1 = 1U;
	uint32_t x2 = 521757U;
	int64_t x3 = -1LL;
	static uint8_t x4 = 74U;
	volatile int32_t t0 = 320;

	t0 = (x1-(x2<=(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -7;
	volatile int16_t x7 = INT16_MAX;
	volatile uint32_t x8 = 3317U;
	int32_t t1 = 75210;

	t1 = (x5-(x6<=(x7==x8)));

	if (t1 != -129) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	volatile int64_t x11 = INT64_MIN;
	static uint32_t x12 = UINT32_MAX;
	volatile int64_t t2 = -1182204LL;

	t2 = (x9-(x10<=(x11==x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 14U;
	uint32_t x14 = 5309876U;
	uint16_t x15 = 0U;
	volatile int32_t t3 = 1;

	t3 = (x13-(x14<=(x15==x16)));

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	uint8_t x18 = 10U;
	int64_t x19 = 1517112847LL;
	int32_t x20 = -1;
	volatile int32_t t4 = -2285068;

	t4 = (x17-(x18<=(x19==x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint16_t x22 = 0U;
	volatile int16_t x23 = -1;
	static int16_t x24 = -531;
	int32_t t5 = -268;

	t5 = (x21-(x22<=(x23==x24)));

	if (t5 != -32769) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 13U;
	uint32_t x26 = 24U;
	uint16_t x27 = 43U;

	t6 = (x25-(x26<=(x27==x28)));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 0U;
	static int64_t x30 = INT64_MAX;
	uint8_t x31 = 0U;
	int8_t x32 = 31;
	static uint32_t t7 = 52U;

	t7 = (x29-(x30<=(x31==x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	volatile int64_t x35 = -79LL;
	uint8_t x36 = 3U;
	volatile int32_t t8 = 27;

	t8 = (x33-(x34<=(x35==x36)));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 4975302U;
	static int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -10146827833045153LL;

	t9 = (x37-(x38<=(x39==x40)));

	if (t9 != 4975301U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MAX;
	int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -4;

	t10 = (x41-(x42<=(x43==x44)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 784LL;
	uint16_t x46 = 38U;
	int32_t x47 = 0;
	uint8_t x48 = UINT8_MAX;
	static int64_t t11 = 8401459207LL;

	t11 = (x45-(x46<=(x47==x48)));

	if (t11 != 784LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 64U;
	static int32_t x50 = -1;
	static int16_t x51 = 1;
	volatile uint16_t x52 = 1U;
	static int32_t t12 = 20401149;

	t12 = (x49-(x50<=(x51==x52)));

	if (t12 != 63) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	static int64_t x56 = INT64_MAX;
	volatile int32_t t13 = 726;

	t13 = (x53-(x54<=(x55==x56)));

	if (t13 != -129) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int64_t x58 = 1369788642902421948LL;
	static int32_t x60 = -3;
	volatile int32_t t14 = -12;

	t14 = (x57-(x58<=(x59==x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 0U;
	int32_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MIN;
	uint32_t t15 = UINT32_MAX;

	t15 = (x61-(x62<=(x63==x64)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 25728LLU;
	volatile int16_t x67 = INT16_MAX;
	int16_t x68 = -1;
	int64_t t16 = 34740587323732LL;

	t16 = (x65-(x66<=(x67==x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int16_t x72 = INT16_MAX;
	static volatile int64_t t17 = 31102LL;

	t17 = (x69-(x70<=(x71==x72)));

	if (t17 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 23;
	uint16_t x75 = 297U;
	int32_t x76 = 450276;
	int32_t t18 = -4929;

	t18 = (x73-(x74<=(x75==x76)));

	if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1765U;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MIN;

	t19 = (x77-(x78<=(x79==x80)));

	if (t19 != 1764) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = 133028103LLU;
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	static volatile uint64_t t20 = 3792230492558LLU;

	t20 = (x81-(x82<=(x83==x84)));

	if (t20 != 133028103LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x91 = INT16_MIN;
	uint16_t x92 = 1922U;

	t21 = (x89-(x90<=(x91==x92)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 4;
	volatile uint8_t x95 = 5U;
	static int8_t x96 = -1;

	t22 = (x93-(x94<=(x95==x96)));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 66U;
	int32_t x98 = -1436;
	static volatile int8_t x100 = -1;
	volatile int32_t t23 = -11226;

	t23 = (x97-(x98<=(x99==x100)));

	if (t23 != 65) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t24 = 490666115;

	t24 = (x101-(x102<=(x103==x104)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -23;
	int32_t x106 = -522726047;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -111;
	int32_t t25 = -5;

	t25 = (x105-(x106<=(x107==x108)));

	if (t25 != -24) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MIN;
	int16_t x110 = 1498;
	int64_t x111 = -1LL;
	static volatile int32_t t26 = -1040323936;

	t26 = (x109-(x110<=(x111==x112)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = -1;
	static int32_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	volatile int16_t x116 = -1;
	int32_t t27 = 11;

	t27 = (x113-(x114<=(x115==x116)));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	int16_t x119 = -74;
	int32_t x120 = -642022;
	int64_t t28 = INT64_MAX;

	t28 = (x117-(x118<=(x119==x120)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -221037024641LL;
	volatile int32_t x122 = INT32_MIN;
	static volatile int16_t x123 = -1;
	static volatile int64_t t29 = 1832LL;

	t29 = (x121-(x122<=(x123==x124)));

	if (t29 != -221037024642LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t30 = 5598630;

	t30 = (x125-(x126<=(x127==x128)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = -5;
	uint32_t x130 = 184U;
	static int16_t x131 = -56;
	volatile uint64_t x132 = UINT64_MAX;
	int32_t t31 = 7;

	t31 = (x129-(x130<=(x131==x132)));

	if (t31 != -5) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 34035LLU;
	static uint32_t x134 = UINT32_MAX;

	t32 = (x133-(x134<=(x135==x136)));

	if (t32 != 34035LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x137 = -1;
	volatile uint16_t x138 = 14889U;
	volatile int8_t x139 = -1;
	static volatile int32_t t33 = 18;

	t33 = (x137-(x138<=(x139==x140)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = INT32_MIN;
	static int64_t x143 = -757796166476901LL;
	static volatile int16_t x144 = INT16_MIN;

	t34 = (x141-(x142<=(x143==x144)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = 10U;
	int64_t x151 = -1LL;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x149-(x150<=(x151==x152)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = 3;
	int64_t x154 = INT64_MAX;
	uint64_t x155 = 129425894LLU;
	volatile int8_t x156 = INT8_MAX;
	int32_t t36 = -433;

	t36 = (x153-(x154<=(x155==x156)));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 2;
	int64_t x158 = -6144513881LL;
	uint64_t x159 = 5728832072LLU;
	volatile int32_t t37 = 1;

	t37 = (x157-(x158<=(x159==x160)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = INT8_MAX;
	uint8_t x163 = UINT8_MAX;
	static int8_t x164 = 0;
	volatile int32_t t38 = -372782043;

	t38 = (x161-(x162<=(x163==x164)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	static uint64_t x167 = UINT64_MAX;
	int64_t x168 = -920675455502LL;

	t39 = (x165-(x166<=(x167==x168)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x173 = 5857LLU;
	uint16_t x174 = 15U;
	volatile int32_t x175 = -1;
	int64_t x176 = 4141730708801LL;

	t40 = (x173-(x174<=(x175==x176)));

	if (t40 != 5857LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 3U;
	volatile int32_t x178 = INT32_MAX;
	int64_t x179 = -1LL;
	static int32_t x180 = INT32_MIN;

	t41 = (x177-(x178<=(x179==x180)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = -6;
	static uint64_t x182 = UINT64_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t42 = 465;

	t42 = (x181-(x182<=(x183==x184)));

	if (t42 != -6) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 6061215577LLU;
	int32_t x190 = -1078;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MAX;
	static volatile uint64_t t43 = 4231LLU;

	t43 = (x189-(x190<=(x191==x192)));

	if (t43 != 6061215576LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	int16_t x195 = -1;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t44 = 13;

	t44 = (x193-(x194<=(x195==x196)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = 3561;

	t45 = (x197-(x198<=(x199==x200)));

	if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	volatile uint32_t x202 = UINT32_MAX;
	int64_t x203 = -14448LL;
	volatile int16_t x204 = -59;
	volatile int32_t t46 = 17468;

	t46 = (x201-(x202<=(x203==x204)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x207 = -1;
	volatile int32_t x208 = 1;
	volatile int32_t t47 = -27;

	t47 = (x205-(x206<=(x207==x208)));

	if (t47 != -5) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile int64_t x211 = INT64_MIN;
	volatile uint64_t x212 = 96788784488895LLU;
	volatile int64_t t48 = INT64_MAX;

	t48 = (x209-(x210<=(x211==x212)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x215 = INT16_MIN;
	volatile int64_t x216 = INT64_MIN;
	volatile uint64_t t49 = 203634498LLU;

	t49 = (x213-(x214<=(x215==x216)));

	if (t49 != 17788678766347LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	static uint64_t x218 = 45888625LLU;
	int16_t x219 = -262;
	int64_t x220 = -1LL;
	volatile int32_t t50 = 126870880;

	t50 = (x217-(x218<=(x219==x220)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x222 = 0;
	uint8_t x224 = 49U;

	t51 = (x221-(x222<=(x223==x224)));

	if (t51 != 93) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = 6778U;
	int16_t x226 = 10873;

	t52 = (x225-(x226<=(x227==x228)));

	if (t52 != 6778) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x231 = -117;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t53 = 1;

	t53 = (x229-(x230<=(x231==x232)));

	if (t53 != -32769) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x234 = -1554181845213LL;
	volatile int64_t x235 = INT64_MIN;
	static int32_t x236 = INT32_MIN;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x233-(x234<=(x235==x236)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = 9446;
	static volatile int16_t x238 = -12;
	uint8_t x239 = 0U;
	int32_t x240 = 2;

	t55 = (x237-(x238<=(x239==x240)));

	if (t55 != 9445) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 7U;
	uint16_t x242 = 735U;
	volatile int16_t x243 = -1;
	uint8_t x244 = 10U;
	static int32_t t56 = 1;

	t56 = (x241-(x242<=(x243==x244)));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int64_t x246 = 401LL;
	int16_t x247 = INT16_MAX;

	t57 = (x245-(x246<=(x247==x248)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x250 = 29113U;
	static int8_t x251 = -20;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x249-(x250<=(x251==x252)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MAX;

	t59 = (x253-(x254<=(x255==x256)));

	if (t59 != 211LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x259 = -1;
	static volatile int32_t t60 = -16319;

	t60 = (x257-(x258<=(x259==x260)));

	if (t60 != 188) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 84889161344LLU;
	volatile int8_t x262 = -1;
	volatile int32_t x263 = -28855;
	uint16_t x264 = 408U;

	t61 = (x261-(x262<=(x263==x264)));

	if (t61 != 84889161343LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 17118579565996LLU;
	int32_t x266 = INT32_MAX;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MAX;
	static volatile uint64_t t62 = 64726LLU;

	t62 = (x265-(x266<=(x267==x268)));

	if (t62 != 17118579565996LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x270 = INT8_MIN;
	uint8_t x271 = 6U;
	volatile int32_t t63 = -1027848;

	t63 = (x269-(x270<=(x271==x272)));

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x274 = INT64_MIN;
	static int32_t x275 = 2352179;
	int8_t x276 = 1;
	int32_t t64 = 45370;

	t64 = (x273-(x274<=(x275==x276)));

	if (t64 != 11) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = -1094;
	uint8_t x278 = 21U;
	uint16_t x280 = 3142U;
	int32_t t65 = 6;

	t65 = (x277-(x278<=(x279==x280)));

	if (t65 != -1094) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x282 = 2;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MAX;
	static int32_t t66 = 1444;

	t66 = (x281-(x282<=(x283==x284)));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MAX;
	static int8_t x287 = -1;
	uint8_t x288 = 62U;
	static int64_t t67 = -296089LL;

	t67 = (x285-(x286<=(x287==x288)));

	if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	static volatile uint8_t x290 = 1U;
	uint8_t x291 = 8U;
	volatile uint64_t x292 = 273283LLU;
	volatile int32_t t68 = -4265;

	t68 = (x289-(x290<=(x291==x292)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x293 = 0U;
	static int64_t x294 = INT64_MIN;
	volatile int64_t x296 = 0LL;
	uint32_t t69 = UINT32_MAX;

	t69 = (x293-(x294<=(x295==x296)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = INT64_MAX;
	static int32_t x298 = 4;
	uint8_t x299 = 3U;
	int64_t x300 = -1LL;

	t70 = (x297-(x298<=(x299==x300)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x302 = 2U;
	static uint32_t x304 = 509316572U;

	t71 = (x301-(x302<=(x303==x304)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = -466345;
	int8_t x306 = -11;
	uint64_t x307 = 633634033177181LLU;
	int32_t t72 = -20;

	t72 = (x305-(x306<=(x307==x308)));

	if (t72 != -466346) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = -1;
	uint64_t x312 = UINT64_MAX;
	int32_t t73 = 58591594;

	t73 = (x309-(x310<=(x311==x312)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 39U;
	volatile uint16_t x314 = UINT16_MAX;
	volatile int32_t x315 = -306295;

	t74 = (x313-(x314<=(x315==x316)));

	if (t74 != 39) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -1;
	int16_t x318 = INT16_MAX;
	volatile int64_t x319 = -1LL;
	int64_t x320 = -238087962496421LL;
	volatile int32_t t75 = 2;

	t75 = (x317-(x318<=(x319==x320)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MAX;
	int64_t x324 = -1LL;
	int64_t t76 = INT64_MIN;

	t76 = (x321-(x322<=(x323==x324)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = UINT32_MAX;
	static int16_t x326 = INT16_MIN;
	int32_t x327 = 1103298;
	int64_t x328 = 6715722710LL;
	uint32_t t77 = 772039385U;

	t77 = (x325-(x326<=(x327==x328)));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x330 = -1;
	int8_t x331 = INT8_MIN;
	int32_t t78 = -17715;

	t78 = (x329-(x330<=(x331==x332)));

	if (t78 != 223823) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 269U;
	volatile uint8_t x334 = UINT8_MAX;
	int64_t x335 = -1LL;
	volatile int32_t t79 = 252;

	t79 = (x333-(x334<=(x335==x336)));

	if (t79 != 269) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x338 = 1U;
	static volatile int16_t x339 = INT16_MAX;
	uint8_t x340 = 0U;

	t80 = (x337-(x338<=(x339==x340)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	int64_t x343 = INT64_MAX;
	volatile uint32_t x344 = 1298311U;
	volatile int32_t t81 = 72730;

	t81 = (x341-(x342<=(x343==x344)));

	if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = 441U;
	static int8_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 2U;
	int32_t t82 = 23881430;

	t82 = (x345-(x346<=(x347==x348)));

	if (t82 != 440) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x349 = -1;
	volatile int32_t x350 = INT32_MIN;
	int32_t x351 = -1;
	static uint32_t x352 = 2484238U;
	volatile int32_t t83 = 206;

	t83 = (x349-(x350<=(x351==x352)));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 798962423813568LLU;
	volatile int16_t x354 = 4;
	int16_t x356 = -1;
	uint64_t t84 = 567148771LLU;

	t84 = (x353-(x354<=(x355==x356)));

	if (t84 != 798962423813568LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 49U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	int8_t x360 = 3;
	int32_t t85 = -2919;

	t85 = (x357-(x358<=(x359==x360)));

	if (t85 != 48) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x361 = UINT16_MAX;
	int32_t x362 = -28647;
	volatile uint8_t x363 = 2U;
	static volatile int32_t t86 = 0;

	t86 = (x361-(x362<=(x363==x364)));

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x365 = UINT16_MAX;
	int8_t x366 = -1;
	volatile int16_t x367 = INT16_MIN;
	static volatile uint64_t x368 = 51LLU;
	volatile int32_t t87 = -2;

	t87 = (x365-(x366<=(x367==x368)));

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	static volatile int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x369-(x370<=(x371==x372)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 59218885U;
	int32_t x374 = -12689256;
	volatile uint16_t x375 = 4U;
	volatile uint8_t x376 = 3U;
	uint32_t t89 = 252550430U;

	t89 = (x373-(x374<=(x375==x376)));

	if (t89 != 59218884U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x378 = 1874U;
	int32_t x379 = -1;
	int16_t x380 = -12123;
	int32_t t90 = 1899401;

	t90 = (x377-(x378<=(x379==x380)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = INT8_MIN;
	static int8_t x383 = -1;
	int16_t x384 = 1;

	t91 = (x381-(x382<=(x383==x384)));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x385 = INT8_MAX;
	uint32_t x386 = UINT32_MAX;
	volatile int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MAX;
	static volatile int32_t t92 = 526369;

	t92 = (x385-(x386<=(x387==x388)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = UINT16_MAX;
	static int32_t x390 = INT32_MIN;
	volatile uint32_t x392 = 6677U;
	volatile int32_t t93 = 44445;

	t93 = (x389-(x390<=(x391==x392)));

	if (t93 != 65534) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = 29;
	static volatile uint8_t x394 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t94 = 1;

	t94 = (x393-(x394<=(x395==x396)));

	if (t94 != 29) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MAX;
	uint64_t x399 = 46976693343701099LLU;
	int16_t x400 = 15506;
	int32_t t95 = -1967811;

	t95 = (x397-(x398<=(x399==x400)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = UINT16_MAX;
	int32_t x402 = INT32_MIN;
	static volatile uint16_t x403 = 14606U;
	int8_t x404 = -1;
	int32_t t96 = 1658842;

	t96 = (x401-(x402<=(x403==x404)));

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = -746628297916LL;
	uint32_t x406 = 103U;
	static uint8_t x407 = 0U;
	static uint8_t x408 = 7U;
	volatile int64_t t97 = -14468010217202LL;

	t97 = (x405-(x406<=(x407==x408)));

	if (t97 != -746628297916LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;
	volatile int32_t x412 = -39770112;
	int32_t t98 = -691010765;

	t98 = (x409-(x410<=(x411==x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x415 = INT8_MIN;
	uint32_t x416 = 78173939U;
	int32_t t99 = -7;

	t99 = (x413-(x414<=(x415==x416)));

	if (t99 != 141) { NG(); } else { ; }
	
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

