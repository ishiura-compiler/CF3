#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 1303030432U;
volatile int16_t x3 = -177;
int64_t x8 = -6759821280484302LL;
static uint64_t x9 = UINT64_MAX;
volatile uint64_t x10 = 72589848700388060LLU;
volatile int64_t x14 = -15LL;
volatile int32_t t3 = -3742;
static volatile uint8_t x19 = 2U;
uint16_t x21 = 5963U;
int64_t x23 = INT64_MIN;
volatile int32_t t5 = -1291;
volatile uint16_t x27 = 12U;
uint32_t x34 = 426301U;
int32_t x36 = -1;
static volatile int32_t t8 = -1;
int32_t x37 = INT32_MAX;
int8_t x38 = INT8_MIN;
uint8_t x41 = UINT8_MAX;
int32_t t11 = 7922;
volatile int16_t x49 = -1;
int16_t x50 = -1;
volatile int32_t t12 = 14715999;
int64_t x55 = INT64_MIN;
int16_t x75 = INT16_MIN;
int32_t x97 = INT32_MIN;
int32_t x100 = INT32_MIN;
int32_t x104 = -1;
volatile int32_t t25 = 82;
int32_t x108 = 31;
static int64_t x110 = 11LL;
int64_t x112 = INT64_MIN;
static int8_t x113 = -1;
int8_t x118 = INT8_MIN;
int32_t t30 = 654;
uint32_t x132 = 6U;
int32_t x133 = 1181;
static volatile int8_t x135 = INT8_MAX;
int8_t x145 = INT8_MIN;
int32_t x146 = -1;
int16_t x147 = INT16_MAX;
int64_t x151 = 98451930972LL;
int32_t t37 = -512719;
volatile int32_t t40 = -1727;
static int32_t t41 = -20;
int64_t x169 = -1LL;
int64_t x186 = 25LL;
int64_t x189 = 530109807LL;
int32_t x199 = INT32_MIN;
int16_t x211 = -5353;
int32_t t52 = 19737;
int32_t x220 = INT32_MAX;
int32_t t54 = -6;
uint16_t x224 = 4U;
int32_t x232 = -1;
int64_t x237 = -2166730193926297553LL;
int16_t x244 = INT16_MIN;
uint64_t x265 = 70LLU;
uint32_t x269 = 4U;
volatile int32_t t69 = 109413710;
int64_t x281 = INT64_MIN;
int16_t x308 = INT16_MAX;
volatile int8_t x323 = INT8_MIN;
volatile int32_t t80 = -173;
uint32_t x329 = 4261786U;
int32_t x350 = 579983611;
int32_t x352 = -149;
int8_t x354 = INT8_MIN;
volatile int32_t x355 = -6293;
static int16_t x358 = 221;
volatile int32_t t89 = 194210985;
int64_t x362 = INT64_MIN;
int16_t x371 = INT16_MIN;
int32_t t92 = 193999;
static int16_t x374 = INT16_MIN;
uint16_t x386 = 46U;
int8_t x397 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile uint32_t x4 = 921005932U;
	static int32_t t0 = -2058;

	t0 = ((x1==x2)+(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -3635;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	int32_t t1 = -1;

	t1 = ((x5==x6)+(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = 24;
	int64_t x12 = -799177080LL;
	volatile int32_t t2 = 122952000;

	t2 = ((x9==x10)+(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1685964231LLU;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -167;

	t3 = ((x13==x14)+(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 114;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = -1;
	volatile int32_t t4 = -867940030;

	t4 = ((x17==x18)+(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	uint8_t x24 = UINT8_MAX;

	t5 = ((x21==x22)+(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int64_t x26 = -14LL;
	volatile uint64_t x28 = 32426304102LLU;
	static int32_t t6 = 100672811;

	t6 = ((x25==x26)+(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 121U;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -827869788;
	int32_t t7 = 5;

	t7 = ((x29==x30)+(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	int16_t x35 = 6;

	t8 = ((x33==x34)+(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MAX;
	uint8_t x40 = 4U;
	volatile int32_t t9 = -8140863;

	t9 = ((x37==x38)+(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 7;

	t10 = ((x41==x42)+(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = -1;
	int32_t x48 = 23;

	t11 = ((x45==x46)+(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x51 = INT8_MAX;
	static int64_t x52 = INT64_MAX;

	t12 = ((x49==x50)+(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = UINT8_MAX;
	volatile uint64_t x56 = 167223910LLU;
	int32_t t13 = 0;

	t13 = ((x53==x54)+(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int64_t x58 = 2837LL;
	int16_t x59 = 73;
	static uint32_t x60 = 576U;
	int32_t t14 = -611756;

	t14 = ((x57==x58)+(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	volatile int16_t x62 = INT16_MAX;
	uint64_t x63 = 1123751899LLU;
	int16_t x64 = -9;
	int32_t t15 = -399;

	t15 = ((x61==x62)+(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint64_t x66 = 461373667274538645LLU;
	static int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -5730028;

	t16 = ((x65==x66)+(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	volatile uint16_t x70 = 1U;
	static uint32_t x71 = 523705U;
	static volatile uint8_t x72 = 92U;
	int32_t t17 = 11;

	t17 = ((x69==x70)+(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x74 = -1LL;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = -2500861;

	t18 = ((x73==x74)+(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 47492U;
	int8_t x78 = INT8_MIN;
	static int64_t x79 = INT64_MAX;
	volatile int16_t x80 = -8;
	int32_t t19 = -54843;

	t19 = ((x77==x78)+(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	volatile int8_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = -6;
	volatile int32_t t20 = -1;

	t20 = ((x81==x82)+(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int32_t x88 = -1;
	int32_t t21 = -3;

	t21 = ((x85==x86)+(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint64_t x90 = UINT64_MAX;
	uint8_t x91 = 0U;
	volatile uint16_t x92 = 7U;
	int32_t t22 = 635785422;

	t22 = ((x89==x90)+(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 49827812LL;
	int16_t x94 = 193;
	int16_t x95 = INT16_MAX;
	uint64_t x96 = 191467LLU;
	volatile int32_t t23 = 82129926;

	t23 = ((x93==x94)+(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MAX;
	static volatile uint8_t x99 = UINT8_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x97==x98)+(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = 14449;
	uint8_t x103 = 1U;

	t25 = ((x101==x102)+(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 1592594172050285LL;
	int32_t x106 = INT32_MIN;
	volatile int64_t x107 = -2172692LL;
	int32_t t26 = 26781;

	t26 = ((x105==x106)+(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	uint32_t x111 = 3667167U;
	volatile int32_t t27 = -1264578;

	t27 = ((x109==x110)+(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t28 = -9;

	t28 = ((x113==x114)+(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	static int32_t x119 = INT32_MIN;
	int64_t x120 = -4350319600306930LL;
	static int32_t t29 = 0;

	t29 = ((x117==x118)+(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -4;
	uint16_t x124 = 67U;

	t30 = ((x121==x122)+(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -39;
	uint64_t x126 = 429514052597LLU;
	int64_t x127 = INT64_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t31 = -14;

	t31 = ((x125==x126)+(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 3U;
	int64_t x130 = INT64_MAX;
	volatile uint16_t x131 = 6509U;
	int32_t t32 = 1;

	t32 = ((x129==x130)+(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	static uint16_t x136 = 152U;
	int32_t t33 = -571510729;

	t33 = ((x133==x134)+(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 1728U;
	uint64_t x138 = 226097802251LLU;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -50;

	t34 = ((x137==x138)+(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 395315LLU;
	volatile int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	volatile uint32_t x144 = 353U;
	volatile int32_t t35 = 12207865;

	t35 = ((x141==x142)+(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x148 = INT64_MIN;
	int32_t t36 = 121716;

	t36 = ((x145==x146)+(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 659U;
	int32_t x150 = INT32_MIN;
	uint32_t x152 = UINT32_MAX;

	t37 = ((x149==x150)+(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -4;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = -11947810;
	int16_t x156 = INT16_MAX;
	int32_t t38 = 1;

	t38 = ((x153==x154)+(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x158 = 109768;
	static int16_t x159 = INT16_MIN;
	volatile int16_t x160 = INT16_MIN;
	static volatile int32_t t39 = 6;

	t39 = ((x157==x158)+(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 4436U;
	int32_t x162 = 176615;
	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;

	t40 = ((x161==x162)+(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 32626U;
	static uint8_t x166 = UINT8_MAX;
	int64_t x167 = -1LL;
	int8_t x168 = -1;

	t41 = ((x165==x166)+(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 55972U;
	int32_t x171 = -6;
	uint64_t x172 = 13605828936811LLU;
	volatile int32_t t42 = -8955;

	t42 = ((x169==x170)+(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int8_t x174 = -10;
	static volatile uint16_t x175 = UINT16_MAX;
	uint8_t x176 = 1U;
	static int32_t t43 = -45;

	t43 = ((x173==x174)+(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 1;

	t44 = ((x177==x178)+(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -6;
	int64_t x182 = INT64_MAX;
	static int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 208527;

	t45 = ((x181==x182)+(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	int16_t x187 = INT16_MIN;
	volatile int16_t x188 = INT16_MIN;
	int32_t t46 = 57182388;

	t46 = ((x185==x186)+(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MAX;
	int64_t x192 = 711786LL;
	volatile int32_t t47 = -286738;

	t47 = ((x189==x190)+(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 7;
	volatile int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MIN;
	int8_t x196 = -1;
	static volatile int32_t t48 = 0;

	t48 = ((x193==x194)+(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = 1;
	uint16_t x198 = UINT16_MAX;
	int64_t x200 = INT64_MAX;
	int32_t t49 = 2205849;

	t49 = ((x197==x198)+(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = 17704928584465475LL;
	uint32_t x202 = 8269U;
	int64_t x203 = 65920772523770485LL;
	static int64_t x204 = INT64_MAX;
	volatile int32_t t50 = -4;

	t50 = ((x201==x202)+(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	static int32_t x206 = INT32_MAX;
	int32_t x207 = 5491;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = -5349;

	t51 = ((x205==x206)+(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x212 = INT64_MAX;

	t52 = ((x209==x210)+(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	volatile int16_t x215 = 13;
	uint64_t x216 = 367866LLU;
	int32_t t53 = 14071955;

	t53 = ((x213==x214)+(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	uint32_t x219 = 10284985U;

	t54 = ((x217==x218)+(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 6955848589850973730LLU;
	int32_t t55 = 189;

	t55 = ((x221==x222)+(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int64_t x226 = -862388826992LL;
	uint64_t x227 = 0LLU;
	int16_t x228 = 1;
	volatile int32_t t56 = 133542;

	t56 = ((x225==x226)+(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MAX;
	uint32_t x230 = 110U;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t57 = 3415;

	t57 = ((x229==x230)+(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 7267091200LLU;
	static uint16_t x235 = UINT16_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t58 = -1014;

	t58 = ((x233==x234)+(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 89U;
	uint64_t x239 = 28LLU;
	static volatile int64_t x240 = -1LL;
	static int32_t t59 = 6981;

	t59 = ((x237==x238)+(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MAX;
	volatile int32_t t60 = -882;

	t60 = ((x241==x242)+(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 9844U;
	int32_t x247 = INT32_MIN;
	int32_t x248 = 187768625;
	volatile int32_t t61 = 327;

	t61 = ((x245==x246)+(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -1;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	static int16_t x252 = 7;
	static int32_t t62 = -1002109;

	t62 = ((x249==x250)+(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	uint32_t x255 = 1950U;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -115675;

	t63 = ((x253==x254)+(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -1;
	int16_t x258 = INT16_MIN;
	volatile int8_t x259 = 17;
	static volatile int32_t x260 = 21996433;
	volatile int32_t t64 = 148364460;

	t64 = ((x257==x258)+(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	static uint64_t x262 = UINT64_MAX;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	volatile int32_t t65 = -1;

	t65 = ((x261==x262)+(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = 46U;
	int32_t x267 = -1;
	volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = -9491169;

	t66 = ((x265==x266)+(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 708929037748LL;
	uint64_t x271 = 30848695094702LLU;
	volatile int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = 9953;

	t67 = ((x269==x270)+(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = 6806386768071011LLU;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 491;

	t68 = ((x273==x274)+(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 1U;
	uint32_t x278 = 45396U;
	volatile int64_t x279 = -46013644LL;
	int32_t x280 = INT32_MAX;

	t69 = ((x277==x278)+(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -168;
	uint16_t x283 = 4873U;
	volatile int8_t x284 = -4;
	static int32_t t70 = -89;

	t70 = ((x281==x282)+(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x285 = 2074892LLU;
	static int32_t x286 = -70;
	volatile uint64_t x287 = 13500160LLU;
	int64_t x288 = 1121940LL;
	int32_t t71 = 1;

	t71 = ((x285==x286)+(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = -79;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -1;

	t72 = ((x289==x290)+(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 31LLU;
	int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	volatile int16_t x296 = -1;
	int32_t t73 = 14;

	t73 = ((x293==x294)+(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x299 = 8604285;
	int8_t x300 = INT8_MAX;
	int32_t t74 = 495531;

	t74 = ((x297==x298)+(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 4149706U;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 19864337U;
	int16_t x304 = 71;
	int32_t t75 = 10;

	t75 = ((x301==x302)+(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x305 = 3290U;
	static volatile int16_t x306 = INT16_MIN;
	static int32_t x307 = -27902283;
	int32_t t76 = -107;

	t76 = ((x305==x306)+(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 35004413;

	t77 = ((x309==x310)+(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	volatile uint64_t x314 = UINT64_MAX;
	uint32_t x315 = 399584U;
	int8_t x316 = 41;
	int32_t t78 = 14;

	t78 = ((x313==x314)+(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -57;
	int64_t x318 = -43068300771LL;
	uint64_t x319 = 386284LLU;
	static int16_t x320 = -1;
	int32_t t79 = -1787;

	t79 = ((x317==x318)+(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	static int16_t x322 = INT16_MIN;
	static int16_t x324 = 7;

	t80 = ((x321==x322)+(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MAX;
	int32_t x326 = 14198;
	static volatile int32_t x327 = 236253403;
	static uint32_t x328 = 15069U;
	volatile int32_t t81 = -1;

	t81 = ((x325==x326)+(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	int8_t x332 = -1;
	volatile int32_t t82 = 1044431;

	t82 = ((x329==x330)+(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint16_t x334 = UINT16_MAX;
	volatile int64_t x335 = -1LL;
	uint8_t x336 = 73U;
	volatile int32_t t83 = -26467713;

	t83 = ((x333==x334)+(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	static uint16_t x339 = 14U;
	uint16_t x340 = 9378U;
	volatile int32_t t84 = -442978218;

	t84 = ((x337==x338)+(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -657;
	int64_t x342 = -130LL;
	static volatile int8_t x343 = INT8_MAX;
	uint64_t x344 = 0LLU;
	static int32_t t85 = 377;

	t85 = ((x341==x342)+(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int32_t x346 = -1;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 17492U;
	volatile int32_t t86 = -128548;

	t86 = ((x345==x346)+(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static int32_t t87 = -83;

	t87 = ((x349==x350)+(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 4045985361844203235LLU;
	int8_t x356 = INT8_MAX;
	volatile int32_t t88 = 1;

	t88 = ((x353==x354)+(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static uint8_t x359 = 2U;
	uint64_t x360 = UINT64_MAX;

	t89 = ((x357==x358)+(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 201LLU;
	static int64_t x363 = INT64_MAX;
	int32_t x364 = -34;
	int32_t t90 = -118;

	t90 = ((x361==x362)+(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x366 = UINT32_MAX;
	volatile int8_t x367 = INT8_MAX;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 230267;

	t91 = ((x365==x366)+(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 17466771764LL;
	int32_t x370 = -7;
	int32_t x372 = 51160;

	t92 = ((x369==x370)+(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 2LL;
	int32_t t93 = 0;

	t93 = ((x373==x374)+(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	volatile int16_t x378 = -4740;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MIN;
	static int32_t t94 = -78110552;

	t94 = ((x377==x378)+(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile uint32_t x382 = UINT32_MAX;
	uint64_t x383 = 0LLU;
	int64_t x384 = -1LL;
	volatile int32_t t95 = 241;

	t95 = ((x381==x382)+(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	static int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;
	static int32_t t96 = -56149484;

	t96 = ((x385==x386)+(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = -1LL;
	volatile int64_t x391 = -4153979256818LL;
	volatile int8_t x392 = 0;
	volatile int32_t t97 = 326646548;

	t97 = ((x389==x390)+(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	volatile uint32_t x395 = 13491892U;
	uint64_t x396 = 11813442194LLU;
	int32_t t98 = -786001987;

	t98 = ((x393==x394)+(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -11720;
	volatile int32_t t99 = -723234015;

	t99 = ((x397==x398)+(x399==x400));

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

