#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x4 = -1;
uint8_t x8 = UINT8_MAX;
int32_t t1 = -2;
volatile int32_t x9 = -1;
int16_t x10 = -7678;
int8_t x22 = 3;
uint16_t x27 = 16568U;
static volatile int32_t t6 = -84967;
uint64_t x35 = 130009975741295LLU;
static volatile int32_t t8 = 52355;
static uint32_t x38 = 59024U;
volatile int32_t x40 = -1;
volatile int64_t x41 = INT64_MAX;
volatile uint8_t x44 = UINT8_MAX;
int8_t x60 = -1;
int8_t x62 = INT8_MIN;
int8_t x65 = INT8_MIN;
uint32_t x71 = 1764341U;
uint8_t x72 = 8U;
int16_t x74 = INT16_MAX;
uint32_t x75 = 2044912U;
static volatile int32_t t24 = -4844;
uint8_t x101 = UINT8_MAX;
static uint8_t x107 = UINT8_MAX;
int8_t x130 = INT8_MAX;
static int8_t x136 = -1;
volatile int32_t t35 = 15066;
static int8_t x146 = INT8_MIN;
volatile int16_t x154 = INT16_MAX;
int16_t x160 = INT16_MAX;
int64_t x164 = -1LL;
static int16_t x175 = INT16_MIN;
uint64_t x182 = UINT64_MAX;
int8_t x192 = 13;
int64_t x193 = INT64_MIN;
int32_t t48 = -2;
int16_t x200 = 1789;
static int32_t t49 = -47914;
int16_t x201 = INT16_MIN;
int32_t t50 = 0;
static int8_t x206 = 5;
static int32_t t52 = -1;
volatile int16_t x215 = -1;
int8_t x219 = -2;
volatile int32_t t54 = 0;
volatile int64_t x222 = INT64_MIN;
int8_t x241 = -1;
uint64_t x247 = 11841LLU;
volatile int32_t t61 = 8;
int16_t x255 = -1;
volatile int32_t t64 = -2;
uint32_t x264 = 685433U;
int32_t x275 = -1;
uint32_t x279 = 899U;
volatile int32_t t72 = -10108;
int16_t x293 = 6;
static int64_t x297 = 12911541LL;
int64_t x301 = 1027985724639LL;
int32_t t75 = -136630;
int32_t x306 = INT32_MIN;
uint32_t x307 = 252771989U;
volatile int64_t x312 = 322791771LL;
volatile int32_t t77 = 236;
int8_t x319 = INT8_MAX;
int32_t x324 = 8128894;
uint8_t x333 = 44U;
int32_t t84 = -3058569;
uint8_t x354 = UINT8_MAX;
int32_t x356 = INT32_MAX;
int32_t x357 = -1;
static volatile int16_t x360 = INT16_MIN;
int32_t x364 = INT32_MIN;
volatile int32_t t90 = -6;
volatile int32_t t91 = -51678315;
static int16_t x373 = INT16_MIN;
volatile uint16_t x374 = UINT16_MAX;
int8_t x376 = INT8_MAX;
int8_t x379 = INT8_MAX;
int8_t x383 = INT8_MAX;
uint32_t x385 = UINT32_MAX;
uint16_t x387 = 3U;
int32_t t96 = 1023;
int32_t x389 = -6;
uint8_t x396 = 47U;
static int32_t t98 = -3350826;
uint16_t x400 = UINT16_MAX;


void f0(void) {
	int32_t x1 = -31;
	static int16_t x2 = -1;
	static int64_t x3 = -254748023684931LL;
	static volatile int32_t t0 = 14179;

	t0 = (x1==((x2==x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = -410647915;
	uint32_t x7 = 477149236U;

	t1 = (x5==((x6==x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x11 = -1LL;
	uint8_t x12 = 3U;
	static int32_t t2 = -66;

	t2 = (x9==((x10==x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 0U;
	uint16_t x14 = 1717U;
	int32_t x15 = -55125202;
	static int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -25572;

	t3 = (x13==((x14==x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int64_t x18 = INT64_MIN;
	int8_t x19 = 1;
	volatile int32_t x20 = 18;
	static int32_t t4 = -349;

	t4 = (x17==((x18==x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	int32_t x23 = -1;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 132252475;

	t5 = (x21==((x22==x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2360U;
	volatile uint16_t x26 = UINT16_MAX;
	volatile int32_t x28 = 0;

	t6 = (x25==((x26==x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -158112162;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MIN;
	static volatile int32_t x32 = INT32_MAX;
	int32_t t7 = 1116;

	t7 = (x29==((x30==x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = -1;
	uint64_t x34 = 119474321904LLU;
	static int64_t x36 = INT64_MAX;

	t8 = (x33==((x34==x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x39 = UINT64_MAX;
	volatile int32_t t9 = -11396471;

	t9 = (x37==((x38==x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	static int8_t x43 = -7;
	int32_t t10 = -20;

	t10 = (x41==((x42==x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -11;
	uint32_t x46 = 95232U;
	int64_t x47 = -2162470127042796648LL;
	int32_t x48 = 48507159;
	int32_t t11 = 94;

	t11 = (x45==((x46==x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = 635712U;
	int64_t x52 = 22314LL;
	int32_t t12 = 703287;

	t12 = (x49==((x50==x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 2363782U;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	static volatile int32_t t13 = 9536444;

	t13 = (x53==((x54==x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	volatile int64_t x59 = INT64_MIN;
	int32_t t14 = -1013180714;

	t14 = (x57==((x58==x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x63 = -101453791033LL;
	int32_t x64 = -3;
	int32_t t15 = 20025;

	t15 = (x61==((x62==x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = INT8_MIN;
	int8_t x68 = 3;
	static int32_t t16 = -60222;

	t16 = (x65==((x66==x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	static int16_t x70 = -1;
	int32_t t17 = -64012973;

	t17 = (x69==((x70==x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 59U;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = -95;

	t18 = (x73==((x74==x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 3;
	uint32_t x78 = 326U;
	volatile uint16_t x79 = 18U;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 8564581;

	t19 = (x77==((x78==x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = INT64_MIN;
	uint8_t x82 = 42U;
	uint64_t x83 = 84448LLU;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -86530;

	t20 = (x81==((x82==x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 12U;
	static uint16_t x86 = UINT16_MAX;
	static int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t21 = 613199585;

	t21 = (x85==((x86==x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 49047256LLU;
	volatile int8_t x90 = -8;
	int32_t x91 = INT32_MIN;
	int16_t x92 = -2797;
	volatile int32_t t22 = 56012;

	t22 = (x89==((x90==x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	volatile int8_t x94 = INT8_MAX;
	volatile uint32_t x95 = 5841013U;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -503;

	t23 = (x93==((x94==x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 32744589968610979LLU;
	int32_t x98 = -1;
	uint32_t x99 = 92U;
	int64_t x100 = INT64_MIN;

	t24 = (x97==((x98==x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = INT16_MIN;
	static int16_t x103 = INT16_MAX;
	static int8_t x104 = INT8_MIN;
	static volatile int32_t t25 = -27049;

	t25 = (x101==((x102==x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = -37;
	int16_t x108 = -28;
	int32_t t26 = -1145;

	t26 = (x105==((x106==x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = -1;
	int8_t x111 = 18;
	int32_t x112 = -1;
	volatile int32_t t27 = -10926177;

	t27 = (x109==((x110==x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x114 = UINT64_MAX;
	static int8_t x115 = -2;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 37615;

	t28 = (x113==((x114==x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;
	static int32_t t29 = -6834732;

	t29 = (x117==((x118==x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile uint32_t x122 = 17658553U;
	uint32_t x123 = 12049398U;
	uint16_t x124 = 119U;
	static int32_t t30 = 25543;

	t30 = (x121==((x122==x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 7978U;
	static volatile int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -1;
	int32_t t31 = 1002;

	t31 = (x125==((x126==x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	static uint16_t x132 = 4867U;
	int32_t t32 = 14429290;

	t32 = (x129==((x130==x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int32_t x134 = 77604666;
	uint8_t x135 = 6U;
	int32_t t33 = -1808463;

	t33 = (x133==((x134==x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 222U;
	uint32_t x138 = UINT32_MAX;
	volatile uint8_t x139 = 18U;
	volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = -2113187;

	t34 = (x137==((x138==x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MAX;
	int8_t x142 = -1;
	uint64_t x143 = 52612005LLU;
	int32_t x144 = INT32_MIN;

	t35 = (x141==((x142==x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 219701149914280337LLU;
	volatile uint64_t x147 = 29LLU;
	static int64_t x148 = 6445004110LL;
	static int32_t t36 = 29625;

	t36 = (x145==((x146==x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	uint8_t x150 = UINT8_MAX;
	static volatile uint32_t x151 = 119014922U;
	int64_t x152 = -1LL;
	volatile int32_t t37 = 0;

	t37 = (x149==((x150==x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 36U;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -1;
	volatile int32_t t38 = -24989158;

	t38 = (x153==((x154==x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 8U;
	uint64_t x158 = 31LLU;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -857;

	t39 = (x157==((x158==x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 201353803441424778LLU;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x163 = 16873U;
	int32_t t40 = -46;

	t40 = (x161==((x162==x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 22U;
	int64_t x166 = INT64_MIN;
	volatile int64_t x167 = INT64_MIN;
	int64_t x168 = -935988905LL;
	int32_t t41 = -1719;

	t41 = (x165==((x166==x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 218395U;
	int32_t x170 = -1;
	int8_t x171 = -37;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -43937061;

	t42 = (x169==((x170==x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	uint8_t x174 = 4U;
	volatile uint8_t x176 = 3U;
	int32_t t43 = 0;

	t43 = (x173==((x174==x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	static uint32_t x178 = 535422U;
	int16_t x179 = INT16_MIN;
	static int32_t x180 = -1;
	static int32_t t44 = -121;

	t44 = (x177==((x178==x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 5U;
	static uint32_t x183 = UINT32_MAX;
	uint8_t x184 = 36U;
	volatile int32_t t45 = 67855;

	t45 = (x181==((x182==x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 69196260825482LL;
	volatile int32_t x186 = INT32_MIN;
	volatile uint32_t x187 = 20487U;
	volatile int32_t x188 = -4;
	volatile int32_t t46 = -1;

	t46 = (x185==((x186==x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int32_t t47 = -38317309;

	t47 = (x189==((x190==x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = UINT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	uint8_t x196 = UINT8_MAX;

	t48 = (x193==((x194==x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	uint8_t x198 = 60U;
	int32_t x199 = 7759130;

	t49 = (x197==((x198==x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static uint8_t x203 = 27U;
	int32_t x204 = -260002654;

	t50 = (x201==((x202==x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 73429435117159LLU;
	uint32_t x207 = UINT32_MAX;
	static int32_t x208 = -557;
	volatile int32_t t51 = -5;

	t51 = (x205==((x206==x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = -11;
	static uint64_t x210 = 17696787273125LLU;
	static int64_t x211 = -1LL;
	volatile int64_t x212 = -9021LL;

	t52 = (x209==((x210==x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MAX;
	uint16_t x214 = 388U;
	int32_t x216 = -1;
	volatile int32_t t53 = -20494181;

	t53 = (x213==((x214==x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = UINT64_MAX;
	int8_t x220 = INT8_MAX;

	t54 = (x217==((x218==x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int32_t x223 = INT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -12899;

	t55 = (x221==((x222==x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -5334496;
	uint32_t x226 = 583364U;
	static volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 0;

	t56 = (x225==((x226==x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x229 = INT32_MIN;
	uint8_t x230 = 52U;
	volatile int32_t x231 = -1;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 76;

	t57 = (x229==((x230==x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 309194066U;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t58 = -32462502;

	t58 = (x233==((x234==x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -13599;
	int16_t x238 = -1;
	volatile uint16_t x239 = 15034U;
	static uint8_t x240 = UINT8_MAX;
	static int32_t t59 = 6934;

	t59 = (x237==((x238==x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = UINT32_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -2736;

	t60 = (x241==((x242==x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	static volatile int32_t x248 = -1;

	t61 = (x245==((x246==x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x250 = 11824983LLU;
	static int32_t x251 = 3637380;
	int64_t x252 = INT64_MIN;
	int32_t t62 = 6643;

	t62 = (x249==((x250==x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	int64_t x256 = -1LL;
	int32_t t63 = -436984493;

	t63 = (x253==((x254==x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = -1;
	int64_t x258 = INT64_MIN;
	static uint8_t x259 = 23U;
	volatile int8_t x260 = INT8_MIN;

	t64 = (x257==((x258==x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	static int32_t x262 = 1;
	int64_t x263 = -433LL;
	volatile int32_t t65 = 0;

	t65 = (x261==((x262==x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -4084;
	int16_t x266 = -1;
	int8_t x267 = -18;
	int32_t x268 = -1;
	volatile int32_t t66 = -348;

	t66 = (x265==((x266==x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = -1;
	int32_t x270 = INT32_MAX;
	uint16_t x271 = UINT16_MAX;
	static int64_t x272 = INT64_MAX;
	volatile int32_t t67 = 26238;

	t67 = (x269==((x270==x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 6U;
	volatile int16_t x274 = INT16_MIN;
	volatile int64_t x276 = INT64_MIN;
	static volatile int32_t t68 = 93781;

	t68 = (x273==((x274==x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 19;
	int16_t x278 = INT16_MIN;
	int16_t x280 = -177;
	volatile int32_t t69 = 435;

	t69 = (x277==((x278==x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t70 = -327722577;

	t70 = (x281==((x282==x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 52;
	static int16_t x286 = INT16_MAX;
	uint16_t x287 = UINT16_MAX;
	static uint64_t x288 = 1972969108092179846LLU;
	int32_t t71 = 1038159;

	t71 = (x285==((x286==x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = -13;
	int16_t x292 = 14;

	t72 = (x289==((x290==x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MAX;
	volatile uint32_t x295 = 80020U;
	uint64_t x296 = 9LLU;
	volatile int32_t t73 = -712;

	t73 = (x293==((x294==x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	int8_t x299 = -3;
	static volatile int64_t x300 = -5LL;
	int32_t t74 = 146415;

	t74 = (x297==((x298==x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -472283733021LL;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = INT16_MAX;

	t75 = (x301==((x302==x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = UINT8_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 28576;

	t76 = (x305==((x306==x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -16298889;
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;

	t77 = (x309==((x310==x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int64_t x314 = -1LL;
	volatile int64_t x315 = -1LL;
	int8_t x316 = -13;
	volatile int32_t t78 = 460854986;

	t78 = (x313==((x314==x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 13LL;
	volatile int32_t x318 = -1;
	static int16_t x320 = -1;
	static int32_t t79 = -279797;

	t79 = (x317==((x318==x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 16008U;
	int8_t x322 = 2;
	static uint64_t x323 = 259LLU;
	int32_t t80 = -812;

	t80 = (x321==((x322==x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	uint32_t x326 = 18U;
	int64_t x327 = INT64_MIN;
	static uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = -3;

	t81 = (x325==((x326==x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MAX;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = 313;

	t82 = (x329==((x330==x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x334 = 1995;
	volatile uint8_t x335 = 5U;
	int32_t x336 = 170852568;
	int32_t t83 = 38061326;

	t83 = (x333==((x334==x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 119U;
	static int32_t x338 = INT32_MAX;
	static int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;

	t84 = (x337==((x338==x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = INT32_MIN;
	static int8_t x344 = 1;
	volatile int32_t t85 = 6;

	t85 = (x341==((x342==x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 271;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = -2;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t86 = 17;

	t86 = (x345==((x346==x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x349 = 7U;
	static int16_t x350 = INT16_MIN;
	static uint8_t x351 = UINT8_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 1274;

	t87 = (x349==((x350==x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	volatile int8_t x355 = INT8_MIN;
	int32_t t88 = -44;

	t88 = (x353==((x354==x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x358 = 5U;
	int64_t x359 = INT64_MIN;
	static int32_t t89 = -4;

	t89 = (x357==((x358==x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 330;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;

	t90 = (x361==((x362==x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int8_t x367 = INT8_MAX;
	int8_t x368 = 8;

	t91 = (x365==((x366==x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 11;
	uint16_t x372 = 2U;
	static volatile int32_t t92 = 3801;

	t92 = (x369==((x370==x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x375 = -3372;
	static volatile int32_t t93 = 56578;

	t93 = (x373==((x374==x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -90;
	volatile int64_t x378 = -282874032058089236LL;
	static int8_t x380 = INT8_MIN;
	static int32_t t94 = -79;

	t94 = (x377==((x378==x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	volatile int16_t x382 = -1;
	uint32_t x384 = 22999U;
	volatile int32_t t95 = -1;

	t95 = (x381==((x382==x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = 3915832188972113764LLU;
	uint8_t x388 = UINT8_MAX;

	t96 = (x385==((x386==x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = -34;
	static int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t97 = -11262;

	t97 = (x389==((x390==x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -32501070654LL;
	volatile int64_t x394 = -2111478663LL;
	uint8_t x395 = 14U;

	t98 = (x393==((x394==x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	volatile uint64_t x398 = 609528063LLU;
	uint64_t x399 = 213386183937807963LLU;
	int32_t t99 = 10868132;

	t99 = (x397==((x398==x399)|x400));

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

