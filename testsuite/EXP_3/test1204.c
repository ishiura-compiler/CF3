#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x9 = -1;
volatile uint32_t x19 = 985392410U;
int32_t t4 = 125217;
uint8_t x21 = UINT8_MAX;
int8_t x24 = 0;
volatile uint8_t x27 = UINT8_MAX;
volatile int64_t x30 = 311678625543LL;
volatile int32_t t8 = -14175;
int8_t x37 = INT8_MAX;
int32_t t10 = 414;
volatile int8_t x48 = 56;
static volatile int32_t t12 = -409433;
int8_t x53 = INT8_MIN;
int32_t t15 = -235064;
volatile uint64_t x77 = UINT64_MAX;
int8_t x79 = INT8_MAX;
int64_t x80 = -1LL;
uint32_t x81 = 24U;
int8_t x85 = INT8_MIN;
static volatile uint8_t x87 = 27U;
static int8_t x88 = 1;
int32_t t21 = 151735739;
int64_t x111 = INT64_MAX;
int16_t x113 = INT16_MIN;
volatile int32_t x114 = INT32_MIN;
uint64_t x120 = 110053650799893LLU;
volatile int8_t x124 = INT8_MIN;
int32_t t26 = 2856217;
int16_t x134 = INT16_MIN;
uint64_t x135 = 30113122LLU;
int32_t x139 = 846;
volatile uint16_t x140 = UINT16_MAX;
int32_t x148 = INT32_MAX;
static int64_t x153 = INT64_MIN;
uint64_t x165 = UINT64_MAX;
static volatile uint8_t x167 = 0U;
static uint8_t x168 = 8U;
int64_t x181 = 4758925LL;
static uint32_t x183 = 902965U;
static volatile int16_t x184 = INT16_MIN;
uint64_t x193 = 8434942893730630LLU;
int8_t x195 = 1;
int32_t x197 = INT32_MAX;
int32_t t43 = -2;
int32_t x202 = INT32_MIN;
int16_t x206 = INT16_MIN;
volatile int32_t x207 = INT32_MIN;
int32_t x225 = -47;
uint32_t x226 = 45U;
static volatile int8_t x228 = -37;
int32_t t49 = -11;
volatile int64_t x246 = -1LL;
int32_t x247 = INT32_MAX;
int32_t x252 = 615906;
uint8_t x254 = UINT8_MAX;
static int32_t t54 = 28713604;
static uint32_t x260 = 17722938U;
volatile int32_t t55 = 44087;
int32_t x261 = INT32_MIN;
volatile int8_t x264 = INT8_MIN;
static volatile uint32_t x268 = 16U;
uint16_t x277 = UINT16_MAX;
uint64_t x279 = UINT64_MAX;
int16_t x290 = -1;
volatile int64_t x292 = -41LL;
volatile int32_t t61 = -12;
uint8_t x298 = UINT8_MAX;
int64_t x309 = -397LL;
volatile int32_t t65 = -680564;
int64_t x315 = INT64_MIN;
uint8_t x327 = 14U;
volatile int16_t x328 = 46;
int32_t x340 = 0;
static uint8_t x343 = UINT8_MAX;
uint32_t x344 = 174318U;
int64_t x348 = -182150133481LL;
int32_t t75 = -21003;
int32_t x355 = 0;
int32_t t76 = -422324353;
static int8_t x357 = INT8_MAX;
uint16_t x358 = 2U;
volatile int8_t x360 = 17;
volatile int32_t t78 = 8063622;
int64_t x367 = INT64_MIN;
int64_t x370 = INT64_MAX;
int16_t x374 = -55;
static int32_t x376 = INT32_MAX;
static int32_t t81 = -938963;
uint8_t x378 = UINT8_MAX;
uint8_t x381 = UINT8_MAX;
volatile int32_t t83 = 47;
static volatile int32_t t85 = 1;
int8_t x396 = INT8_MIN;
uint16_t x398 = 15896U;
volatile uint16_t x410 = UINT16_MAX;
volatile uint64_t x411 = UINT64_MAX;
uint16_t x412 = UINT16_MAX;
int32_t t91 = 126725143;
volatile int32_t t92 = -78;
int16_t x437 = -1;
int32_t x444 = INT32_MIN;


void f0(void) {
	int8_t x1 = 4;
	volatile int32_t x2 = INT32_MAX;
	int32_t x3 = -4;
	volatile int8_t x4 = -1;
	volatile int32_t t0 = 1;

	t0 = ((x1-x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint16_t x7 = UINT16_MAX;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -13;

	t1 = ((x5-x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 0U;
	int32_t t2 = -944948;

	t2 = ((x9-x10)==(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 496508;
	uint32_t x14 = UINT32_MAX;
	volatile uint64_t x15 = 0LLU;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 3;

	t3 = ((x13-x14)==(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 23057905724679LLU;
	int8_t x18 = INT8_MAX;
	static uint16_t x20 = UINT16_MAX;

	t4 = ((x17-x18)==(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = INT32_MAX;
	static int16_t x23 = 55;
	int32_t t5 = -130709;

	t5 = ((x21-x22)==(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 127435176;
	volatile uint32_t x26 = 115409U;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -2345;

	t6 = ((x25-x26)==(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 99653;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = 2LL;
	static volatile int32_t t7 = 1;

	t7 = ((x29-x30)==(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 11285U;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -1;

	t8 = ((x33-x34)==(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = -1;
	int32_t t9 = 123;

	t9 = ((x37-x38)==(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 176U;
	uint16_t x43 = 11757U;
	int16_t x44 = INT16_MIN;

	t10 = ((x41-x42)==(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 12401428U;
	static int8_t x46 = INT8_MIN;
	int16_t x47 = -18;
	volatile int32_t t11 = -42057938;

	t11 = ((x45-x46)==(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = 116168;
	volatile int64_t x50 = 2700946345862977LL;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49-x50)==(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 1LLU;
	int16_t x55 = INT16_MIN;
	int8_t x56 = 0;
	int32_t t13 = -44;

	t13 = ((x53-x54)==(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 737844U;
	volatile uint32_t x59 = 44U;
	volatile uint64_t x60 = 883LLU;
	int32_t t14 = 1129961;

	t14 = ((x57-x58)==(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = 1;
	static int64_t x70 = -425992279026LL;
	volatile uint64_t x71 = 760255803LLU;
	volatile int8_t x72 = INT8_MIN;

	t15 = ((x69-x70)==(x71==x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int32_t x75 = 0;
	static int8_t x76 = 3;
	int32_t t16 = -117;

	t16 = ((x73-x74)==(x75==x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = 42154;
	volatile int32_t t17 = -4760191;

	t17 = ((x77-x78)==(x79==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x82 = 5U;
	volatile int8_t x83 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	int32_t t18 = 576409;

	t18 = ((x81-x82)==(x83==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x86 = 75LL;
	volatile int32_t t19 = -224;

	t19 = ((x85-x86)==(x87==x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = 342935LL;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t20 = 33;

	t20 = ((x93-x94)==(x95==x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 1U;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MAX;

	t21 = ((x101-x102)==(x103==x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	uint16_t x107 = 671U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t22 = -490644;

	t22 = ((x105-x106)==(x107==x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 20879LLU;
	static int8_t x110 = 24;
	int64_t x112 = INT64_MAX;
	int32_t t23 = -2537;

	t23 = ((x109-x110)==(x111==x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x115 = INT16_MAX;
	static uint32_t x116 = 423727U;
	int32_t t24 = 4;

	t24 = ((x113-x114)==(x115==x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1LL;
	int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	volatile int32_t t25 = 3;

	t25 = ((x117-x118)==(x119==x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 1U;
	uint8_t x122 = 0U;
	static int8_t x123 = INT8_MAX;

	t26 = ((x121-x122)==(x123==x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 17U;
	int64_t x126 = -1898677372404906869LL;
	volatile uint32_t x127 = 167094337U;
	static volatile int8_t x128 = -27;
	static int32_t t27 = -24439811;

	t27 = ((x125-x126)==(x127==x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -50;
	uint64_t x130 = 111165899688LLU;
	volatile uint8_t x131 = 0U;
	uint64_t x132 = 1207230916359LLU;
	int32_t t28 = 267163390;

	t28 = ((x129-x130)==(x131==x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 369052916751LLU;
	int8_t x136 = -1;
	int32_t t29 = -243842717;

	t29 = ((x133-x134)==(x135==x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = 1;
	volatile int32_t t30 = -928;

	t30 = ((x137-x138)==(x139==x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -707655744;
	uint8_t x146 = 0U;
	int32_t x147 = INT32_MAX;
	int32_t t31 = 1467564;

	t31 = ((x145-x146)==(x147==x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 8U;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 1001U;
	static int64_t x152 = INT64_MAX;
	static int32_t t32 = -7157870;

	t32 = ((x149-x150)==(x151==x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x154 = INT16_MIN;
	volatile int16_t x155 = 1;
	int64_t x156 = -3180993581294963LL;
	static int32_t t33 = 0;

	t33 = ((x153-x154)==(x155==x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = INT16_MAX;
	volatile int32_t x158 = 3;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	int32_t t34 = 1837177;

	t34 = ((x157-x158)==(x159==x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x161 = INT16_MIN;
	static volatile int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MIN;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t35 = 220481;

	t35 = ((x161-x162)==(x163==x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x166 = 2381618U;
	int32_t t36 = -550;

	t36 = ((x165-x166)==(x167==x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MAX;
	volatile int8_t x170 = INT8_MAX;
	uint32_t x171 = UINT32_MAX;
	volatile int8_t x172 = 11;
	volatile int32_t t37 = 88983384;

	t37 = ((x169-x170)==(x171==x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 1346589U;
	int8_t x174 = INT8_MAX;
	int64_t x175 = INT64_MIN;
	int8_t x176 = -1;
	int32_t t38 = 1;

	t38 = ((x173-x174)==(x175==x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x182 = -2;
	volatile int32_t t39 = 31;

	t39 = ((x181-x182)==(x183==x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = -284144;
	int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	int32_t t40 = 2263;

	t40 = ((x185-x186)==(x187==x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x189 = 966U;
	int16_t x190 = -2964;
	uint16_t x191 = UINT16_MAX;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t41 = -29295465;

	t41 = ((x189-x190)==(x191==x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = INT16_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t42 = 2;

	t42 = ((x193-x194)==(x195==x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x198 = 237061608433725LLU;
	int8_t x199 = -59;
	volatile uint16_t x200 = 6U;

	t43 = ((x197-x198)==(x199==x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t44 = -416590;

	t44 = ((x201-x202)==(x203==x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MIN;
	int32_t x208 = 0;
	volatile int32_t t45 = 355158759;

	t45 = ((x205-x206)==(x207==x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = 49;
	int8_t x210 = -1;
	int8_t x211 = -1;
	int16_t x212 = -1;
	volatile int32_t t46 = 7316293;

	t46 = ((x209-x210)==(x211==x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x217 = -3;
	uint32_t x218 = 1U;
	int8_t x219 = INT8_MAX;
	volatile int8_t x220 = INT8_MIN;
	static int32_t t47 = 5887;

	t47 = ((x217-x218)==(x219==x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x227 = INT32_MIN;
	static int32_t t48 = 1433010;

	t48 = ((x225-x226)==(x227==x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = 14266LL;
	uint32_t x230 = 16701186U;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;

	t49 = ((x229-x230)==(x231==x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = -30;
	volatile int32_t x234 = INT32_MIN;
	static int32_t x235 = -1;
	uint32_t x236 = 687U;
	volatile int32_t t50 = 65029470;

	t50 = ((x233-x234)==(x235==x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 240547115U;
	int32_t x238 = 3341370;
	static int64_t x239 = INT64_MIN;
	volatile uint16_t x240 = UINT16_MAX;
	volatile int32_t t51 = 24;

	t51 = ((x237-x238)==(x239==x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x245 = INT32_MIN;
	volatile uint16_t x248 = 0U;
	volatile int32_t t52 = -14;

	t52 = ((x245-x246)==(x247==x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x249 = 40047140564LLU;
	int32_t x250 = -1;
	static uint32_t x251 = 7095318U;
	volatile int32_t t53 = -806;

	t53 = ((x249-x250)==(x251==x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = INT32_MAX;
	int32_t x255 = -165594377;
	int32_t x256 = -24;

	t54 = ((x253-x254)==(x255==x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = -1;
	int64_t x259 = INT64_MAX;

	t55 = ((x257-x258)==(x259==x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 14687683194848330LLU;
	static volatile int32_t t56 = -89;

	t56 = ((x261-x262)==(x263==x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x265 = UINT8_MAX;
	int16_t x266 = 7;
	int32_t x267 = INT32_MIN;
	volatile int32_t t57 = 5;

	t57 = ((x265-x266)==(x267==x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -1;
	volatile int32_t x274 = -3399536;
	static volatile int16_t x275 = INT16_MAX;
	static uint64_t x276 = 7587LLU;
	static volatile int32_t t58 = 13385;

	t58 = ((x273-x274)==(x275==x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x278 = -1;
	volatile int16_t x280 = -1;
	int32_t t59 = 64;

	t59 = ((x277-x278)==(x279==x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x285 = 1031955U;
	static int16_t x286 = INT16_MAX;
	int16_t x287 = 74;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t60 = 35;

	t60 = ((x285-x286)==(x287==x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = INT8_MIN;
	int64_t x291 = INT64_MAX;

	t61 = ((x289-x290)==(x291==x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x297 = 1415233898633467109LLU;
	volatile uint8_t x299 = 40U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t62 = -1;

	t62 = ((x297-x298)==(x299==x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x301 = INT8_MAX;
	static uint8_t x302 = UINT8_MAX;
	static int32_t x303 = -1;
	uint16_t x304 = 190U;
	int32_t t63 = 6;

	t63 = ((x301-x302)==(x303==x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = 0;
	int64_t x306 = -1LL;
	uint8_t x307 = UINT8_MAX;
	uint8_t x308 = 1U;
	int32_t t64 = -114422;

	t64 = ((x305-x306)==(x307==x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x310 = 76489772U;
	uint8_t x311 = 1U;
	int16_t x312 = -1;

	t65 = ((x309-x310)==(x311==x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x313 = UINT8_MAX;
	uint8_t x314 = 3U;
	int32_t x316 = 0;
	static int32_t t66 = 2845836;

	t66 = ((x313-x314)==(x315==x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = 355U;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	volatile int32_t t67 = 64161;

	t67 = ((x317-x318)==(x319==x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x321 = 14185U;
	static uint16_t x322 = UINT16_MAX;
	static int32_t x323 = 9093;
	int32_t x324 = INT32_MAX;
	volatile int32_t t68 = -78000;

	t68 = ((x321-x322)==(x323==x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x325 = INT8_MAX;
	volatile int8_t x326 = INT8_MAX;
	volatile int32_t t69 = -92513;

	t69 = ((x325-x326)==(x327==x328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = -1LL;
	static int16_t x330 = 3909;
	volatile int32_t x331 = 49;
	int8_t x332 = INT8_MAX;
	int32_t t70 = -3;

	t70 = ((x329-x330)==(x331==x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = 1U;
	static volatile int32_t x334 = -1;
	int64_t x335 = INT64_MAX;
	volatile int16_t x336 = -5;
	static volatile int32_t t71 = -184842557;

	t71 = ((x333-x334)==(x335==x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x337 = 1;
	static int8_t x338 = -3;
	volatile int64_t x339 = -2490131962267LL;
	static int32_t t72 = -13211;

	t72 = ((x337-x338)==(x339==x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 5U;
	static int16_t x342 = 371;
	int32_t t73 = -53609095;

	t73 = ((x341-x342)==(x343==x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = 1747813066194078743LLU;
	int64_t x346 = 44570LL;
	uint32_t x347 = 0U;
	int32_t t74 = 10;

	t74 = ((x345-x346)==(x347==x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = INT64_MIN;
	int32_t x350 = -1;
	volatile int8_t x351 = INT8_MIN;
	volatile uint64_t x352 = 28144LLU;

	t75 = ((x349-x350)==(x351==x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -105042;
	static uint16_t x354 = UINT16_MAX;
	int16_t x356 = -33;

	t76 = ((x353-x354)==(x355==x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t77 = -21;

	t77 = ((x357-x358)==(x359==x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = INT8_MIN;
	int64_t x362 = 19LL;
	uint32_t x363 = 2612U;
	int16_t x364 = INT16_MIN;

	t78 = ((x361-x362)==(x363==x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x365 = INT16_MIN;
	static uint32_t x366 = 3530461U;
	volatile int32_t x368 = 939577441;
	volatile int32_t t79 = 104;

	t79 = ((x365-x366)==(x367==x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x369 = 131U;
	int16_t x371 = 3191;
	volatile int64_t x372 = 21090LL;
	volatile int32_t t80 = -1036632;

	t80 = ((x369-x370)==(x371==x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x373 = -127020710;
	volatile int8_t x375 = -59;

	t81 = ((x373-x374)==(x375==x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 582551U;
	static int16_t x379 = 0;
	int16_t x380 = -350;
	volatile int32_t t82 = -362359;

	t82 = ((x377-x378)==(x379==x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x382 = -411;
	uint16_t x383 = 58U;
	int64_t x384 = 16063123LL;

	t83 = ((x381-x382)==(x383==x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x385 = 1U;
	static uint8_t x386 = 0U;
	volatile uint16_t x387 = 1U;
	volatile int8_t x388 = 0;
	int32_t t84 = -1;

	t84 = ((x385-x386)==(x387==x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = 15884836874LL;
	volatile uint64_t x390 = 2677243LLU;
	static uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1LL;

	t85 = ((x389-x390)==(x391==x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x393 = INT8_MIN;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	volatile int32_t t86 = 1611;

	t86 = ((x393-x394)==(x395==x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x397 = 47U;
	uint64_t x399 = 3156LLU;
	static int16_t x400 = INT16_MAX;
	int32_t t87 = 0;

	t87 = ((x397-x398)==(x399==x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x401 = UINT32_MAX;
	uint8_t x402 = UINT8_MAX;
	uint32_t x403 = 112117166U;
	volatile int8_t x404 = INT8_MAX;
	static volatile int32_t t88 = 133926545;

	t88 = ((x401-x402)==(x403==x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -1;
	uint8_t x406 = 24U;
	uint8_t x407 = 28U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t89 = -115030527;

	t89 = ((x405-x406)==(x407==x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x409 = 5U;
	volatile int32_t t90 = -56246184;

	t90 = ((x409-x410)==(x411==x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x413 = 2390U;
	static uint8_t x414 = 0U;
	int8_t x415 = INT8_MAX;
	volatile int8_t x416 = INT8_MIN;

	t91 = ((x413-x414)==(x415==x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;

	t92 = ((x417-x418)==(x419==x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MAX;
	int16_t x422 = INT16_MAX;
	static int16_t x423 = INT16_MIN;
	int8_t x424 = 1;
	volatile int32_t t93 = -56;

	t93 = ((x421-x422)==(x423==x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = 1U;
	static int64_t x426 = -1LL;
	uint64_t x427 = 274480798LLU;
	int8_t x428 = INT8_MIN;
	static int32_t t94 = 209623936;

	t94 = ((x425-x426)==(x427==x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = -40;
	volatile uint64_t x430 = 2765073802996384964LLU;
	uint8_t x431 = 11U;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t95 = 44938;

	t95 = ((x429-x430)==(x431==x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	static volatile int32_t x434 = -1;
	int32_t x435 = INT32_MIN;
	int64_t x436 = -1LL;
	int32_t t96 = -817601311;

	t96 = ((x433-x434)==(x435==x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	uint64_t x440 = 267LLU;
	volatile int32_t t97 = 17;

	t97 = ((x437-x438)==(x439==x440));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x441 = UINT16_MAX;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	int32_t t98 = -103403;

	t98 = ((x441-x442)==(x443==x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = -22;
	static int8_t x446 = 3;
	static volatile uint8_t x447 = UINT8_MAX;
	static int16_t x448 = INT16_MIN;
	volatile int32_t t99 = 39636;

	t99 = ((x445-x446)==(x447==x448));

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

