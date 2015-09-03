#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -5;
int32_t t1 = 709;
static volatile uint64_t x10 = 1LLU;
int32_t t2 = 20;
volatile uint16_t x16 = UINT16_MAX;
volatile int32_t t6 = -471423;
uint16_t x34 = 365U;
int16_t x38 = -11;
int8_t x41 = 1;
volatile uint8_t x42 = UINT8_MAX;
int16_t x47 = 0;
uint32_t x48 = 14617U;
volatile int64_t x49 = -1LL;
static volatile uint64_t x57 = 119705524017295LLU;
static int32_t x62 = INT32_MIN;
int32_t x63 = INT32_MIN;
uint8_t x68 = UINT8_MAX;
static volatile int8_t x71 = 18;
uint8_t x73 = 40U;
int16_t x80 = 8005;
int8_t x83 = 1;
static volatile int8_t x91 = INT8_MIN;
volatile uint32_t x93 = 30720U;
static int32_t x95 = INT32_MAX;
volatile uint32_t x101 = 92950U;
volatile int64_t x102 = INT64_MIN;
uint32_t x105 = 39U;
int32_t x106 = INT32_MIN;
int32_t x115 = -1;
uint64_t x117 = 118332021LLU;
static int8_t x118 = 0;
int64_t x125 = INT64_MAX;
int32_t x129 = INT32_MIN;
uint8_t x151 = 15U;
uint32_t x162 = 19397210U;
int8_t x168 = -1;
int8_t x171 = INT8_MAX;
static int8_t x173 = INT8_MAX;
volatile int32_t x178 = -1;
int32_t x183 = INT32_MIN;
volatile int32_t t46 = 2132;
int8_t x198 = INT8_MIN;
static int32_t x203 = 812;
uint8_t x205 = 16U;
int64_t x207 = 1880LL;
int32_t t51 = 584378;
int32_t x215 = -125;
int8_t x235 = -1;
uint64_t x237 = 467047789187081275LLU;
volatile int64_t x242 = -14231LL;
int64_t x243 = 7229864LL;
uint16_t x245 = 87U;
uint16_t x248 = UINT16_MAX;
uint32_t x249 = UINT32_MAX;
static int32_t t62 = 62147;
int32_t x253 = -1;
uint16_t x255 = UINT16_MAX;
int64_t x257 = INT64_MIN;
static uint8_t x259 = UINT8_MAX;
static int8_t x261 = -10;
volatile int32_t t65 = -1201231;
static volatile int32_t t66 = -17;
volatile uint32_t x273 = 4039U;
uint16_t x274 = 6U;
static int64_t x276 = INT64_MIN;
volatile int8_t x277 = -1;
int64_t x281 = INT64_MIN;
int64_t x284 = -1LL;
int32_t t72 = -72;
uint64_t x293 = UINT64_MAX;
int32_t x296 = -1;
volatile int64_t x299 = INT64_MAX;
volatile int32_t t76 = 23543612;
uint8_t x321 = 60U;
int8_t x323 = INT8_MAX;
static volatile int32_t t80 = 3;
int32_t x325 = INT32_MIN;
int32_t x329 = -47259;
volatile int32_t t82 = -147347;
volatile uint8_t x334 = 13U;
int64_t x342 = 28727337916755842LL;
uint8_t x346 = UINT8_MAX;
int32_t x351 = INT32_MIN;
int16_t x354 = INT16_MIN;
volatile int32_t t89 = 3617;
int64_t x368 = 0LL;
uint8_t x369 = 19U;
int16_t x370 = INT16_MIN;
uint32_t x374 = UINT32_MAX;
volatile int32_t x377 = INT32_MIN;
int32_t x378 = INT32_MIN;
int64_t x380 = 111LL;
volatile int16_t x382 = INT16_MIN;
int32_t x399 = 915;


void f0(void) {
	uint16_t x1 = 49U;
	static int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;
	static volatile uint8_t x4 = 3U;
	int32_t t0 = -1;

	t0 = ((x1&x2)==(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int8_t x7 = -9;
	uint8_t x8 = 3U;

	t1 = ((x5&x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 1489U;

	t2 = ((x9&x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 303645U;
	int16_t x15 = INT16_MAX;
	static int32_t t3 = 1066236546;

	t3 = ((x13&x14)==(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = 56769224;
	static int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MAX;
	static int32_t t4 = -29747;

	t4 = ((x17&x18)==(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1783LL;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 1138220801U;
	int64_t x24 = -1LL;
	static volatile int32_t t5 = -12880;

	t5 = ((x21&x22)==(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	int8_t x26 = -1;
	int64_t x27 = INT64_MAX;
	volatile uint32_t x28 = UINT32_MAX;

	t6 = ((x25&x26)==(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 2966027349LLU;
	volatile uint64_t x30 = 2282399830LLU;
	int64_t x31 = INT64_MAX;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = -7711326;

	t7 = ((x29&x30)==(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	static uint16_t x35 = 15846U;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -53;

	t8 = ((x33&x34)==(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int8_t x39 = INT8_MIN;
	static int16_t x40 = 8;
	int32_t t9 = -84;

	t9 = ((x37&x38)==(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x43 = 13248816081LLU;
	int16_t x44 = -10338;
	static int32_t t10 = 19388627;

	t10 = ((x41&x42)==(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 6U;
	uint8_t x46 = UINT8_MAX;
	int32_t t11 = -10;

	t11 = ((x45&x46)==(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 24U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 3593;

	t12 = ((x49&x50)==(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 864046816U;
	volatile uint64_t x54 = UINT64_MAX;
	static int64_t x55 = 2813565123LL;
	int64_t x56 = -1LL;
	volatile int32_t t13 = -328508;

	t13 = ((x53&x54)==(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int32_t x59 = -380660158;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = -2685;

	t14 = ((x57&x58)==(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint8_t x64 = 0U;
	int32_t t15 = -703;

	t15 = ((x61&x62)==(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -7;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = -1;
	volatile int32_t t16 = -43;

	t16 = ((x65&x66)==(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int8_t x70 = 11;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -712659962;

	t17 = ((x69&x70)==(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = 1;
	volatile int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t18 = -84;

	t18 = ((x73&x74)==(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	uint16_t x78 = 145U;
	int64_t x79 = INT64_MIN;
	static int32_t t19 = -63856036;

	t19 = ((x77&x78)==(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = INT64_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t20 = -44714297;

	t20 = ((x81&x82)==(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -2;
	int32_t x86 = 28;
	int16_t x87 = -1;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 12630900;

	t21 = ((x85&x86)==(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	int64_t x90 = INT64_MAX;
	int64_t x92 = 3461584009686LL;
	int32_t t22 = -109997;

	t22 = ((x89&x90)==(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = UINT64_MAX;
	int64_t x96 = -112884664528054564LL;
	volatile int32_t t23 = 50;

	t23 = ((x93&x94)==(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	static volatile int16_t x99 = 23;
	int32_t x100 = -2028430;
	volatile int32_t t24 = 97;

	t24 = ((x97&x98)==(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = INT16_MIN;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t25 = -21801474;

	t25 = ((x101&x102)==(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = 3387;
	uint16_t x108 = 14U;
	static int32_t t26 = 1524429;

	t26 = ((x105&x106)==(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = 0U;
	int64_t x111 = 26122861041LL;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 11983;

	t27 = ((x109&x110)==(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = UINT32_MAX;
	static uint64_t x114 = 5LLU;
	int32_t x116 = -77911;
	volatile int32_t t28 = -7496060;

	t28 = ((x113&x114)==(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x119 = INT8_MIN;
	volatile int8_t x120 = INT8_MAX;
	int32_t t29 = -7217778;

	t29 = ((x117&x118)==(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 13;
	int32_t x122 = INT32_MIN;
	int64_t x123 = 23256993805533715LL;
	static int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 345388577;

	t30 = ((x121&x122)==(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 14U;
	static int16_t x127 = INT16_MAX;
	static volatile uint64_t x128 = 873916140165982LLU;
	int32_t t31 = 3;

	t31 = ((x125&x126)==(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	int8_t x132 = 0;
	int32_t t32 = -4862;

	t32 = ((x129&x130)==(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x133 = UINT64_MAX;
	int8_t x134 = 37;
	int32_t x135 = 3007;
	static volatile int16_t x136 = INT16_MIN;
	static int32_t t33 = 97639;

	t33 = ((x133&x134)==(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = 0;
	int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	static uint32_t x140 = 59U;
	volatile int32_t t34 = -1;

	t34 = ((x137&x138)==(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 23664U;
	int32_t x143 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -291799;

	t35 = ((x141&x142)==(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 4538U;
	uint64_t x146 = 13535967580LLU;
	static uint16_t x147 = 1U;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = -54;

	t36 = ((x145&x146)==(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = 329U;
	uint16_t x152 = 1U;
	int32_t t37 = -27;

	t37 = ((x149&x150)==(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MAX;
	int16_t x154 = 1656;
	int16_t x155 = 0;
	static volatile int8_t x156 = 6;
	int32_t t38 = 7757;

	t38 = ((x153&x154)==(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = 1;
	volatile int32_t t39 = 34;

	t39 = ((x157&x158)==(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 423U;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -120505;

	t40 = ((x161&x162)==(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 126U;
	int8_t x166 = -5;
	int16_t x167 = -1;
	static volatile int32_t t41 = -1;

	t41 = ((x165&x166)==(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	int32_t x170 = INT32_MIN;
	static int32_t x172 = -1;
	int32_t t42 = 421644;

	t42 = ((x169&x170)==(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MIN;
	volatile uint8_t x175 = 100U;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 16427985;

	t43 = ((x173&x174)==(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 23325904;

	t44 = ((x177&x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 53;
	volatile int32_t x182 = INT32_MIN;
	uint64_t x184 = UINT64_MAX;
	int32_t t45 = 5;

	t45 = ((x181&x182)==(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static volatile uint64_t x186 = 715855861155715771LLU;
	int32_t x187 = -1;
	uint16_t x188 = 6U;

	t46 = ((x185&x186)==(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 72142U;
	static uint8_t x190 = 77U;
	static uint8_t x191 = UINT8_MAX;
	volatile int8_t x192 = INT8_MAX;
	static int32_t t47 = -2968;

	t47 = ((x189&x190)==(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 822;
	static uint32_t x194 = 0U;
	static int16_t x195 = 7;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 693;

	t48 = ((x193&x194)==(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint8_t x199 = 16U;
	uint64_t x200 = 0LLU;
	volatile int32_t t49 = -252056913;

	t49 = ((x197&x198)==(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 1;
	int32_t x202 = -1;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = -23;

	t50 = ((x201&x202)==(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = UINT16_MAX;
	int16_t x208 = -39;

	t51 = ((x205&x206)==(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -25;
	static int32_t x210 = -10768492;
	volatile int16_t x211 = -1;
	int8_t x212 = 0;
	volatile int32_t t52 = -305229;

	t52 = ((x209&x210)==(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = UINT64_MAX;
	static volatile int64_t x216 = INT64_MAX;
	int32_t t53 = -96537;

	t53 = ((x213&x214)==(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = -38;
	int64_t x219 = 10592LL;
	static uint8_t x220 = UINT8_MAX;
	int32_t t54 = 68;

	t54 = ((x217&x218)==(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x221 = 1520263U;
	static int64_t x222 = -1LL;
	int32_t x223 = -1;
	int8_t x224 = -1;
	int32_t t55 = 52711;

	t55 = ((x221&x222)==(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 13835;
	int32_t x226 = INT32_MAX;
	int16_t x227 = 0;
	volatile uint16_t x228 = 28921U;
	volatile int32_t t56 = 91607;

	t56 = ((x225&x226)==(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MAX;
	int32_t x230 = 4684;
	volatile int8_t x231 = 0;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 3;

	t57 = ((x229&x230)==(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	int64_t x234 = 1561615763720168LL;
	int32_t x236 = -1;
	static volatile int32_t t58 = 1879203;

	t58 = ((x233&x234)==(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	uint16_t x239 = 2U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = 32147380;

	t59 = ((x237&x238)==(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int32_t x244 = -84398;
	static int32_t t60 = -631028490;

	t60 = ((x241&x242)==(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 2181629U;
	static volatile uint32_t x247 = UINT32_MAX;
	static int32_t t61 = 676629;

	t61 = ((x245&x246)==(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = 27447348U;
	static int16_t x252 = 1;

	t62 = ((x249&x250)==(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = 2736;
	uint16_t x256 = 0U;
	int32_t t63 = 100020379;

	t63 = ((x253&x254)==(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x258 = 1U;
	int16_t x260 = 1;
	int32_t t64 = 99866;

	t64 = ((x257&x258)==(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x262 = -2;
	uint8_t x263 = 3U;
	static int16_t x264 = -1;

	t65 = ((x261&x262)==(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -1567;
	volatile int8_t x266 = INT8_MIN;
	uint64_t x267 = 57127LLU;
	int16_t x268 = -1;

	t66 = ((x265&x266)==(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 13U;
	static int32_t x270 = INT32_MIN;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = 468;
	int32_t t67 = -5;

	t67 = ((x269&x270)==(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x275 = -70172911;
	int32_t t68 = -5685;

	t68 = ((x273&x274)==(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	int8_t x279 = 3;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 795;

	t69 = ((x277&x278)==(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 233U;
	uint8_t x283 = UINT8_MAX;
	int32_t t70 = -113;

	t70 = ((x281&x282)==(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 0;
	uint8_t x286 = 1U;
	uint64_t x287 = 102466574434839752LLU;
	volatile int32_t x288 = INT32_MIN;
	int32_t t71 = -120;

	t71 = ((x285&x286)==(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MAX;
	volatile int64_t x291 = 445927650LL;
	static int8_t x292 = INT8_MAX;

	t72 = ((x289&x290)==(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x294 = INT8_MAX;
	int16_t x295 = -1;
	static volatile int32_t t73 = -39054309;

	t73 = ((x293&x294)==(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	int8_t x298 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -8180;

	t74 = ((x297&x298)==(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 23LLU;
	int16_t x302 = 0;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -42510943330874LL;
	volatile int32_t t75 = -1;

	t75 = ((x301&x302)==(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1U;
	uint32_t x306 = UINT32_MAX;
	static uint64_t x307 = 2255LLU;
	uint8_t x308 = 2U;

	t76 = ((x305&x306)==(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	static uint8_t x310 = 0U;
	volatile uint16_t x311 = 101U;
	int16_t x312 = -196;
	int32_t t77 = 78;

	t77 = ((x309&x310)==(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MAX;
	int32_t x315 = INT32_MAX;
	static volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 8068066;

	t78 = ((x313&x314)==(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 3541412029LLU;
	int32_t x318 = 26038;
	int8_t x319 = INT8_MIN;
	static int16_t x320 = INT16_MIN;
	int32_t t79 = -6658;

	t79 = ((x317&x318)==(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -1;
	int32_t x324 = INT32_MIN;

	t80 = ((x321&x322)==(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -1LL;
	int32_t x327 = INT32_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t81 = -69719444;

	t81 = ((x325&x326)==(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = INT16_MAX;
	volatile uint64_t x331 = 2525166063795LLU;
	static volatile int8_t x332 = INT8_MIN;

	t82 = ((x329&x330)==(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 3141U;
	uint16_t x335 = 3U;
	uint8_t x336 = UINT8_MAX;
	int32_t t83 = 36581274;

	t83 = ((x333&x334)==(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	static uint32_t x338 = 10733945U;
	int64_t x339 = INT64_MIN;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -58775;

	t84 = ((x337&x338)==(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 7253628;

	t85 = ((x341&x342)==(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -53407;

	t86 = ((x345&x346)==(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 2597175LLU;
	int8_t x350 = INT8_MIN;
	static int16_t x352 = INT16_MIN;
	int32_t t87 = 1;

	t87 = ((x349&x350)==(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x353 = 142U;
	static int32_t x355 = -22;
	uint64_t x356 = 2059LLU;
	volatile int32_t t88 = -13174;

	t88 = ((x353&x354)==(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -4227037800LL;
	static volatile uint8_t x360 = UINT8_MAX;

	t89 = ((x357&x358)==(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	volatile int16_t x362 = -1;
	int16_t x363 = INT16_MIN;
	static volatile int64_t x364 = -1LL;
	int32_t t90 = 2972865;

	t90 = ((x361&x362)==(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	volatile int32_t x366 = INT32_MAX;
	int64_t x367 = -1LL;
	volatile int32_t t91 = -450;

	t91 = ((x365&x366)==(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x371 = INT16_MAX;
	volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t92 = -5002;

	t92 = ((x369&x370)==(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	volatile uint32_t x375 = 2062576954U;
	static uint32_t x376 = 4U;
	volatile int32_t t93 = 188;

	t93 = ((x373&x374)==(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x379 = 22U;
	int32_t t94 = 10;

	t94 = ((x377&x378)==(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 20;

	t95 = ((x381&x382)==(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 50U;
	int8_t x388 = -1;
	volatile int32_t t96 = 0;

	t96 = ((x385&x386)==(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 468;
	static int16_t x390 = -118;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	static int32_t t97 = -37;

	t97 = ((x389&x390)==(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MAX;
	int32_t x394 = INT32_MAX;
	volatile int32_t x395 = -45;
	int16_t x396 = -1;
	int32_t t98 = 55;

	t98 = ((x393&x394)==(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile int16_t x398 = 215;
	uint8_t x400 = UINT8_MAX;
	static int32_t t99 = 3724638;

	t99 = ((x397&x398)==(x399==x400));

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

