#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
uint8_t x2 = UINT8_MAX;
volatile uint32_t x5 = 5U;
volatile int32_t x7 = INT32_MIN;
uint64_t x11 = 1690LLU;
int64_t x13 = -1LL;
static volatile uint32_t x14 = 12U;
int64_t x16 = 6LL;
static volatile uint32_t x25 = 75367893U;
int8_t x27 = INT8_MAX;
static int32_t t6 = -53413;
volatile int8_t x31 = 0;
uint64_t x35 = UINT64_MAX;
uint64_t x37 = 119126618202LLU;
volatile uint8_t x38 = 0U;
static volatile int32_t t9 = 737949020;
volatile uint64_t x46 = 59497LLU;
int32_t x48 = INT32_MIN;
volatile int32_t t11 = -3;
uint8_t x49 = UINT8_MAX;
int16_t x52 = INT16_MIN;
static volatile uint64_t x56 = UINT64_MAX;
static int32_t t13 = -880;
int16_t x57 = 184;
uint64_t x72 = 257536LLU;
int32_t t19 = 2;
static int16_t x82 = -73;
static volatile uint32_t x85 = 309520U;
int32_t t21 = 644505;
int64_t x90 = -43997029850214LL;
int16_t x103 = -1;
uint8_t x104 = 5U;
volatile int16_t x110 = -1;
static int8_t x113 = INT8_MAX;
static int32_t x114 = INT32_MIN;
static int32_t t28 = 23;
uint8_t x117 = 2U;
volatile int32_t t29 = 14;
int32_t t30 = 39612;
volatile int32_t t31 = 282;
int32_t x129 = -173830708;
static int64_t x135 = INT64_MIN;
static volatile int32_t x138 = INT32_MAX;
uint64_t x139 = 2503317623072239LLU;
volatile int32_t t34 = -3600088;
int32_t t35 = 21870515;
int32_t x145 = INT32_MAX;
int32_t x154 = INT32_MIN;
uint32_t x156 = 55U;
int32_t t38 = 15089;
uint8_t x157 = 0U;
int32_t x160 = -5072676;
static int32_t t41 = -783006;
int32_t x171 = -84701715;
int64_t x172 = INT64_MAX;
static int32_t t42 = 721;
uint32_t x173 = 11213U;
int32_t x177 = -1;
volatile int8_t x178 = INT8_MAX;
uint64_t x179 = UINT64_MAX;
int16_t x180 = -1;
int64_t x183 = -1LL;
volatile uint64_t x184 = UINT64_MAX;
volatile uint8_t x187 = 3U;
static uint16_t x190 = UINT16_MAX;
uint64_t x195 = UINT64_MAX;
int16_t x197 = INT16_MIN;
int16_t x202 = INT16_MAX;
static int16_t x205 = INT16_MAX;
int8_t x206 = 1;
int16_t x207 = -48;
static volatile int64_t x209 = INT64_MIN;
uint16_t x212 = 4U;
static int8_t x214 = INT8_MAX;
uint16_t x217 = 6319U;
static int32_t t54 = 45434492;
int8_t x226 = -23;
int8_t x229 = -21;
static volatile uint64_t x232 = 968563722LLU;
int32_t x234 = -1;
volatile int32_t t59 = -72;
uint32_t x250 = 32645639U;
uint64_t x252 = 1526535LLU;
volatile int64_t x258 = -305965981898LL;
uint32_t x260 = 30064U;
int8_t x270 = INT8_MIN;
int64_t x273 = -154406290759LL;
int8_t x276 = INT8_MIN;
int32_t t69 = -1919334;
uint32_t x283 = 3791156U;
static uint16_t x285 = UINT16_MAX;
int32_t x286 = -3671541;
int32_t t71 = -1640067;
uint16_t x289 = 668U;
volatile int32_t x292 = INT32_MAX;
uint32_t x295 = UINT32_MAX;
static uint16_t x304 = 8U;
volatile int32_t t75 = 254;
int64_t x311 = 111771428550368LL;
static volatile int32_t x316 = INT32_MIN;
int64_t x326 = INT64_MIN;
static int8_t x339 = INT8_MIN;
int8_t x341 = 19;
int64_t x346 = 835998LL;
static int16_t x349 = 151;
int16_t x354 = INT16_MAX;
volatile int32_t t90 = -7;
uint8_t x366 = 0U;
int32_t t94 = -12877;
int32_t x386 = INT32_MAX;
uint64_t x387 = 76930791632LLU;
volatile int32_t t96 = -22426360;
int32_t x390 = -9799217;
int64_t x395 = -299137924472LL;
static uint8_t x399 = 2U;


void f0(void) {
	uint16_t x3 = 4757U;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -29;

	t0 = (x1<=((x2^x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = UINT16_MAX;
	uint8_t x8 = 16U;
	volatile int32_t t1 = 6211654;

	t1 = (x5<=((x6^x7)|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	uint16_t x12 = 15U;
	int32_t t2 = 2258464;

	t2 = (x9<=((x10^x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x15 = 11U;
	volatile int32_t t3 = 2726366;

	t3 = (x13<=((x14^x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = 11951089;
	static int8_t x19 = -8;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 528102;

	t4 = (x17<=((x18^x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 3;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int64_t x24 = 7385650365LL;
	static volatile int32_t t5 = -16044212;

	t5 = (x21<=((x22^x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 31U;
	static volatile int8_t x28 = INT8_MAX;

	t6 = (x25<=((x26^x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 46932403U;
	volatile int64_t x30 = INT64_MAX;
	uint64_t x32 = 41400517LLU;
	static int32_t t7 = 3675;

	t7 = (x29<=((x30^x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	int64_t x36 = INT64_MIN;
	static int32_t t8 = 18461;

	t8 = (x33<=((x34^x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;

	t9 = (x37<=((x38^x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 32U;
	uint64_t x42 = 60079728LLU;
	static int16_t x43 = 227;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -55074371;

	t10 = (x41<=((x42^x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x47 = INT64_MIN;

	t11 = (x45<=((x46^x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -59LL;
	int16_t x51 = INT16_MAX;
	static volatile int32_t t12 = 6410072;

	t12 = (x49<=((x50^x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = -129157LL;

	t13 = (x53<=((x54^x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x58 = 1593640133U;
	static int64_t x59 = INT64_MIN;
	static int32_t x60 = INT32_MAX;
	int32_t t14 = 2725;

	t14 = (x57<=((x58^x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static uint32_t x62 = UINT32_MAX;
	static int8_t x63 = INT8_MIN;
	static volatile int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 149;

	t15 = (x61<=((x62^x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 55;
	uint16_t x66 = 12534U;
	uint64_t x67 = 43059LLU;
	static volatile int64_t x68 = -1LL;
	static int32_t t16 = -65386;

	t16 = (x65<=((x66^x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 54980074U;
	int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MAX;
	volatile int32_t t17 = -5714249;

	t17 = (x69<=((x70^x71)|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static uint64_t x74 = UINT64_MAX;
	int32_t x75 = -1;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 2046773;

	t18 = (x73<=((x74^x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 33U;
	volatile int8_t x78 = 4;
	volatile uint32_t x79 = 882469035U;
	static int32_t x80 = -1;

	t19 = (x77<=((x78^x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 15U;
	volatile int32_t x83 = 1;
	int32_t x84 = 49295;
	volatile int32_t t20 = -14050548;

	t20 = (x81<=((x82^x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -289789;
	static int16_t x87 = 1;
	static uint64_t x88 = 12032084929965313LLU;

	t21 = (x85<=((x86^x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int64_t x91 = 38008091280301761LL;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = -78;

	t22 = (x89<=((x90^x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -20894905534725459LL;
	int32_t x94 = INT32_MAX;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = 11;
	volatile int32_t t23 = 1316868;

	t23 = (x93<=((x94^x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 4864866716230272931LLU;
	int64_t x98 = 214852934LL;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -45;
	static int32_t t24 = -783987618;

	t24 = (x97<=((x98^x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 7722999LLU;
	uint16_t x102 = 28967U;
	volatile int32_t t25 = -178774;

	t25 = (x101<=((x102^x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int32_t x106 = -3;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 86745;

	t26 = (x105<=((x106^x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	static int8_t x111 = 6;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 447;

	t27 = (x109<=((x110^x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x115 = INT8_MIN;
	uint8_t x116 = UINT8_MAX;

	t28 = (x113<=((x114^x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	volatile int64_t x119 = -807428815896LL;
	uint16_t x120 = 52U;

	t29 = (x117<=((x118^x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = UINT32_MAX;
	static int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MIN;

	t30 = (x121<=((x122^x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 1517414579500LL;
	uint32_t x126 = 29437297U;
	static int8_t x127 = -1;
	int16_t x128 = INT16_MIN;

	t31 = (x125<=((x126^x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 0U;
	int8_t x131 = -1;
	volatile uint32_t x132 = 307032895U;
	volatile int32_t t32 = -17;

	t32 = (x129<=((x130^x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -1;
	int16_t x134 = -1;
	int16_t x136 = -2;
	int32_t t33 = 21229299;

	t33 = (x133<=((x134^x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -11;
	int8_t x140 = INT8_MIN;

	t34 = (x137<=((x138^x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	static int64_t x142 = -1LL;
	static int16_t x143 = -26;
	uint64_t x144 = UINT64_MAX;

	t35 = (x141<=((x142^x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = -1;
	uint8_t x148 = 2U;
	static volatile int32_t t36 = 258;

	t36 = (x145<=((x146^x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 12;
	static int8_t x150 = 13;
	int8_t x151 = -28;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -3;

	t37 = (x149<=((x150^x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	int32_t x155 = INT32_MAX;

	t38 = (x153<=((x154^x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x158 = 514U;
	uint32_t x159 = 41U;
	volatile int32_t t39 = 5701120;

	t39 = (x157<=((x158^x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 0;

	t40 = (x161<=((x162^x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	uint16_t x166 = 8914U;
	int8_t x167 = -1;
	int8_t x168 = INT8_MAX;

	t41 = (x165<=((x166^x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	volatile int16_t x170 = INT16_MAX;

	t42 = (x169<=((x170^x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MIN;
	int32_t x175 = 55;
	uint8_t x176 = 7U;
	int32_t t43 = 1474;

	t43 = (x173<=((x174^x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t t44 = 32590;

	t44 = (x177<=((x178^x179)|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MAX;
	static uint64_t x182 = 10853LLU;
	int32_t t45 = -62575;

	t45 = (x181<=((x182^x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 68U;
	uint16_t x186 = UINT16_MAX;
	int64_t x188 = -4748787LL;
	static volatile int32_t t46 = 36;

	t46 = (x185<=((x186^x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 1U;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = 1;
	volatile int32_t t47 = -78;

	t47 = (x189<=((x190^x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	uint16_t x194 = 341U;
	static uint16_t x196 = UINT16_MAX;
	int32_t t48 = 66076711;

	t48 = (x193<=((x194^x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x198 = 1U;
	static uint32_t x199 = 970U;
	static volatile uint64_t x200 = 46489046870910LLU;
	int32_t t49 = -101184;

	t49 = (x197<=((x198^x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -1;

	t50 = (x201<=((x202^x203)|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = 1;

	t51 = (x205<=((x206^x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x210 = UINT8_MAX;
	volatile int16_t x211 = 20;
	int32_t t52 = -11490650;

	t52 = (x209<=((x210^x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 6U;
	uint64_t x215 = 1048757345857843LLU;
	uint16_t x216 = 29U;
	static int32_t t53 = -1;

	t53 = (x213<=((x214^x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = -1851114761LL;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MIN;

	t54 = (x217<=((x218^x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -3;
	volatile int16_t x223 = -1;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = -2719;

	t55 = (x221<=((x222^x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	int32_t x227 = INT32_MIN;
	int8_t x228 = -1;
	volatile int32_t t56 = 37818;

	t56 = (x225<=((x226^x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x230 = 1465074;
	static int32_t x231 = -1;
	int32_t t57 = -678281;

	t57 = (x229<=((x230^x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 46;

	t58 = (x233<=((x234^x235)|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	volatile int64_t x238 = INT64_MIN;
	static int16_t x239 = -1;
	int32_t x240 = 49;

	t59 = (x237<=((x238^x239)|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t60 = 10247;

	t60 = (x241<=((x242^x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MIN;
	int8_t x247 = -30;
	uint32_t x248 = 579360U;
	int32_t t61 = 4222;

	t61 = (x245<=((x246^x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static int32_t x251 = INT32_MIN;
	int32_t t62 = 5;

	t62 = (x249<=((x250^x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	static volatile int16_t x255 = -6;
	static int16_t x256 = 1426;
	int32_t t63 = -301573;

	t63 = (x253<=((x254^x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 9;
	uint8_t x259 = 1U;
	int32_t t64 = -22;

	t64 = (x257<=((x258^x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 11U;
	volatile int16_t x262 = INT16_MAX;
	int8_t x263 = 6;
	int32_t x264 = 156530;
	int32_t t65 = -8657240;

	t65 = (x261<=((x262^x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 510U;
	uint8_t x266 = 42U;
	volatile int16_t x267 = INT16_MAX;
	uint8_t x268 = 67U;
	int32_t t66 = -2;

	t66 = (x265<=((x266^x267)|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int8_t x271 = 12;
	int32_t x272 = INT32_MAX;
	int32_t t67 = 25274883;

	t67 = (x269<=((x270^x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -625;
	int16_t x275 = 12492;
	static volatile int32_t t68 = -758834;

	t68 = (x273<=((x274^x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int64_t x278 = 4LL;
	static int32_t x279 = -1;
	volatile int16_t x280 = -219;

	t69 = (x277<=((x278^x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	static int16_t x282 = -6;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = 3836386;

	t70 = (x281<=((x282^x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x287 = 663219470728494LLU;
	static volatile uint8_t x288 = 16U;

	t71 = (x285<=((x286^x287)|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = UINT32_MAX;
	static volatile uint64_t x291 = 343918013588188LLU;
	int32_t t72 = -1979;

	t72 = (x289<=((x290^x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 10201;
	static volatile int8_t x294 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 78505;

	t73 = (x293<=((x294^x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 260U;
	volatile uint64_t x298 = 927620960243251LLU;
	static volatile int16_t x299 = -1;
	static int32_t x300 = -1;
	int32_t t74 = -84;

	t74 = (x297<=((x298^x299)|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 107U;
	volatile int8_t x302 = 14;
	uint16_t x303 = UINT16_MAX;

	t75 = (x301<=((x302^x303)|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 21U;
	uint16_t x306 = 18U;
	static int16_t x307 = -8;
	static int32_t x308 = -579644;
	volatile int32_t t76 = -12;

	t76 = (x305<=((x306^x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	int8_t x310 = 8;
	int64_t x312 = -457448LL;
	int32_t t77 = 6979;

	t77 = (x309<=((x310^x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3U;
	int32_t x314 = 6;
	int32_t x315 = -1;
	int32_t t78 = 7;

	t78 = (x313<=((x314^x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 1061564U;
	int16_t x319 = 4;
	static int64_t x320 = -1LL;
	volatile int32_t t79 = 123344312;

	t79 = (x317<=((x318^x319)|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 1377967643LL;
	int64_t x322 = -108715065409316307LL;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t x324 = -1LL;
	int32_t t80 = -35013;

	t80 = (x321<=((x322^x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	static int32_t x328 = 21645099;
	volatile int32_t t81 = 1;

	t81 = (x325<=((x326^x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 49060549403LLU;
	int64_t x330 = -1LL;
	volatile uint16_t x331 = UINT16_MAX;
	volatile int8_t x332 = 0;
	int32_t t82 = -3988;

	t82 = (x329<=((x330^x331)|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = UINT16_MAX;
	uint64_t x335 = 15471744440954LLU;
	int16_t x336 = -1;
	int32_t t83 = 41407754;

	t83 = (x333<=((x334^x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 4840535U;
	volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = 1;

	t84 = (x337<=((x338^x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = -4619284931213LL;
	int8_t x343 = -14;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t85 = 186;

	t85 = (x341<=((x342^x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 16LLU;
	volatile int32_t t86 = 492187;

	t86 = (x345<=((x346^x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 7637624389518494LL;
	int16_t x351 = INT16_MIN;
	volatile int8_t x352 = 45;
	static volatile int32_t t87 = 442664532;

	t87 = (x349<=((x350^x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 419U;
	volatile uint8_t x355 = 0U;
	static uint16_t x356 = 159U;
	volatile int32_t t88 = -7061168;

	t88 = (x353<=((x354^x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile int8_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -173587912;

	t89 = (x357<=((x358^x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	uint16_t x362 = 6028U;
	static uint8_t x363 = UINT8_MAX;
	int8_t x364 = -1;

	t90 = (x361<=((x362^x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x365 = UINT32_MAX;
	int16_t x367 = INT16_MAX;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -38671;

	t91 = (x365<=((x366^x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 0;
	int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MAX;
	uint8_t x372 = 12U;
	volatile int32_t t92 = -7729355;

	t92 = (x369<=((x370^x371)|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 2;
	int32_t x374 = 28283710;
	static volatile uint32_t x375 = UINT32_MAX;
	volatile int32_t x376 = 42;
	volatile int32_t t93 = 21155832;

	t93 = (x373<=((x374^x375)|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x378 = -35;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = INT32_MAX;

	t94 = (x377<=((x378^x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -380;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 181U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 1839052;

	t95 = (x381<=((x382^x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -7;
	volatile uint64_t x388 = UINT64_MAX;

	t96 = (x385<=((x386^x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 31767276078LLU;
	volatile uint32_t x391 = 20123637U;
	int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 0;

	t97 = (x389<=((x390^x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 11483928;
	int16_t x394 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	static int32_t t98 = 11;

	t98 = (x393<=((x394^x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -1;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 612178471;

	t99 = (x397<=((x398^x399)|x400));

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

