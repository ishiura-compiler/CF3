#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int32_t x5 = 439;
int8_t x8 = -4;
volatile int32_t t1 = -111920909;
uint16_t x9 = UINT16_MAX;
static uint32_t x10 = 50066U;
uint32_t x16 = 17U;
volatile uint32_t t3 = 14960524U;
uint8_t x26 = 3U;
uint16_t x33 = UINT16_MAX;
static int8_t x37 = INT8_MAX;
static int8_t x39 = -4;
int64_t x46 = INT64_MAX;
static int8_t x47 = -1;
int64_t x49 = 465003491817LL;
uint8_t x54 = UINT8_MAX;
static int32_t x56 = -1;
volatile uint64_t x61 = 90678089LLU;
volatile int32_t x62 = INT32_MIN;
int64_t x64 = INT64_MIN;
int32_t t16 = 170655;
static uint8_t x72 = 0U;
volatile uint32_t x76 = UINT32_MAX;
static uint32_t t18 = UINT32_MAX;
volatile int16_t x80 = -1;
uint8_t x83 = UINT8_MAX;
int8_t x85 = -1;
int32_t x87 = INT32_MIN;
static int8_t x93 = INT8_MAX;
int32_t x97 = -1;
int32_t x105 = INT32_MAX;
volatile int16_t x107 = INT16_MIN;
volatile uint64_t x109 = UINT64_MAX;
volatile int64_t x112 = INT64_MIN;
uint32_t x116 = 5U;
int32_t x120 = -1;
uint32_t x122 = 62074070U;
static int8_t x124 = -1;
volatile int32_t t30 = -250568;
int32_t x125 = INT32_MAX;
int8_t x128 = -57;
int64_t x130 = -375LL;
volatile int32_t t37 = -4989;
uint64_t x166 = UINT64_MAX;
volatile int32_t t42 = -1;
uint16_t x174 = UINT16_MAX;
uint32_t x181 = 1083252U;
int32_t x183 = -1;
int64_t x184 = INT64_MIN;
int16_t x185 = -1;
static int64_t x186 = -8030929375485LL;
static int64_t x200 = INT64_MIN;
static uint32_t x201 = 445701504U;
int8_t x203 = -7;
int32_t x212 = INT32_MAX;
uint32_t x216 = 587472U;
static uint8_t x220 = UINT8_MAX;
int32_t x221 = INT32_MAX;
int64_t t55 = INT64_MIN;
static uint8_t x226 = 80U;
volatile int16_t x229 = INT16_MIN;
int64_t x230 = 9LL;
static int16_t x235 = 435;
int32_t t58 = 1;
volatile int16_t x237 = INT16_MAX;
int16_t x246 = 1040;
int32_t x248 = INT32_MAX;
uint64_t x251 = UINT64_MAX;
static int64_t x252 = -1LL;
uint8_t x267 = 107U;
volatile int8_t x278 = INT8_MIN;
volatile int32_t x279 = INT32_MIN;
uint64_t x285 = UINT64_MAX;
int64_t x286 = INT64_MIN;
volatile int8_t x292 = INT8_MAX;
uint8_t x293 = 3U;
uint32_t x296 = 27U;
int8_t x297 = INT8_MIN;
uint32_t x300 = 272U;
uint32_t t74 = 6099U;
int64_t x302 = -17825315LL;
volatile uint64_t t76 = 298905866909819LLU;
uint64_t x309 = 10643506076440LLU;
static int8_t x327 = -2;
int16_t x328 = -1;
volatile int32_t t82 = -40913;
uint64_t x343 = 134736709109096LLU;
static volatile uint32_t x344 = 1683635544U;
int8_t x346 = -1;
volatile int32_t x351 = INT32_MIN;
uint64_t x353 = 26050776LLU;
int64_t x356 = INT64_MIN;
int8_t x365 = INT8_MIN;
int64_t x379 = -1LL;
volatile int64_t x381 = -1036041LL;
volatile int32_t t95 = 140;
int32_t x387 = INT32_MAX;
int64_t t96 = INT64_MAX;
int16_t x392 = 126;


void f0(void) {
	static uint64_t x2 = 4845493554351854LLU;
	volatile int8_t x3 = INT8_MAX;
	uint16_t x4 = 0U;
	static int32_t t0 = 0;

	t0 = (((x1<=x2)==x3)|x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	volatile int8_t x7 = -1;

	t1 = (((x5<=x6)==x7)|x8);

	if (t1 != -4) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MAX;
	static uint8_t x12 = 58U;
	static volatile int32_t t2 = 234;

	t2 = (((x9<=x10)==x11)|x12);

	if (t2 != 58) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int64_t x14 = 7662781198672032LL;
	static int64_t x15 = -4046653908914LL;

	t3 = (((x13<=x14)==x15)|x16);

	if (t3 != 17U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	static int16_t x18 = 206;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 560U;
	volatile int32_t t4 = -17004;

	t4 = (((x17<=x18)==x19)|x20);

	if (t4 != 560) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 6406;
	uint8_t x22 = UINT8_MAX;
	volatile int8_t x23 = INT8_MIN;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = 1115;

	t5 = (((x21<=x22)==x23)|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 97112352;

	t6 = (((x25<=x26)==x27)|x28);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint32_t x30 = 3330U;
	volatile int32_t x31 = INT32_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 182095;

	t7 = (((x29<=x30)==x31)|x32);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = 427;
	int8_t x35 = INT8_MAX;
	int16_t x36 = -108;
	volatile int32_t t8 = 71;

	t8 = (((x33<=x34)==x35)|x36);

	if (t8 != -108) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x38 = UINT32_MAX;
	int64_t x40 = -7660438LL;
	int64_t t9 = -234LL;

	t9 = (((x37<=x38)==x39)|x40);

	if (t9 != -7660438LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 0U;
	static int64_t x42 = -540530432692675LL;
	int64_t x43 = -19510931824LL;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 515393908;

	t10 = (((x41<=x42)==x43)|x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -3;
	int32_t x48 = -1;
	static int32_t t11 = -4772;

	t11 = (((x45<=x46)==x47)|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = 0;
	static int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = (((x49<=x50)==x51)|x52);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 0LL;
	uint8_t x55 = 1U;
	int32_t t13 = -118965;

	t13 = (((x53<=x54)==x55)|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	volatile int64_t x58 = -1LL;
	volatile uint16_t x59 = UINT16_MAX;
	volatile int64_t x60 = -1LL;
	volatile int64_t t14 = -134541990061997924LL;

	t14 = (((x57<=x58)==x59)|x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = -1;
	static volatile int64_t t15 = INT64_MIN;

	t15 = (((x61<=x62)==x63)|x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 38U;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = -1;

	t16 = (((x65<=x66)==x67)|x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile int16_t x70 = INT16_MAX;
	static uint8_t x71 = UINT8_MAX;
	volatile int32_t t17 = 648428;

	t17 = (((x69<=x70)==x71)|x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 676382399U;
	uint8_t x74 = 103U;
	uint16_t x75 = 4U;

	t18 = (((x73<=x74)==x75)|x76);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	volatile int16_t x78 = INT16_MIN;
	int16_t x79 = -8974;
	int32_t t19 = -1;

	t19 = (((x77<=x78)==x79)|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	static int8_t x82 = -1;
	volatile uint16_t x84 = 12267U;
	volatile int32_t t20 = -1;

	t20 = (((x81<=x82)==x83)|x84);

	if (t20 != 12267) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int16_t x88 = -1;
	int32_t t21 = 6;

	t21 = (((x85<=x86)==x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 166924608U;
	static int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -7906211;

	t22 = (((x89<=x90)==x91)|x92);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = UINT16_MAX;
	int32_t x95 = -1;
	static volatile uint16_t x96 = 152U;
	int32_t t23 = -45002;

	t23 = (((x93<=x94)==x95)|x96);

	if (t23 != 152) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 0LLU;
	int64_t x99 = INT64_MIN;
	volatile int32_t x100 = 0;
	int32_t t24 = -18760577;

	t24 = (((x97<=x98)==x99)|x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 844005674LL;
	volatile uint16_t x102 = 3639U;
	int16_t x103 = 13;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -1;

	t25 = (((x101<=x102)==x103)|x104);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	uint8_t x108 = 6U;
	int32_t t26 = 6408;

	t26 = (((x105<=x106)==x107)|x108);

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 196U;
	static int32_t x111 = -70552;
	volatile int64_t t27 = INT64_MIN;

	t27 = (((x109<=x110)==x111)|x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MAX;
	static int64_t x114 = INT64_MAX;
	uint64_t x115 = UINT64_MAX;
	static volatile uint32_t t28 = 6206194U;

	t28 = (((x113<=x114)==x115)|x116);

	if (t28 != 5U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	static int64_t x118 = INT64_MIN;
	static int32_t x119 = 2;
	volatile int32_t t29 = 0;

	t29 = (((x117<=x118)==x119)|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1568LL;
	uint8_t x123 = 5U;

	t30 = (((x121<=x122)==x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x126 = UINT32_MAX;
	uint64_t x127 = UINT64_MAX;
	volatile int32_t t31 = -558730333;

	t31 = (((x125<=x126)==x127)|x128);

	if (t31 != -57) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	uint32_t x131 = 1040561U;
	int64_t x132 = -17197351551690LL;
	static int64_t t32 = 1055428887069106827LL;

	t32 = (((x129<=x130)==x131)|x132);

	if (t32 != -17197351551690LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x134 = INT16_MIN;
	int32_t x135 = -371420757;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -1714;

	t33 = (((x133<=x134)==x135)|x136);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static int64_t x138 = -193LL;
	static int32_t x139 = 1;
	int16_t x140 = -11281;
	int32_t t34 = -852;

	t34 = (((x137<=x138)==x139)|x140);

	if (t34 != -11281) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = 44132LLU;
	int32_t x144 = -1;
	volatile int32_t t35 = -762;

	t35 = (((x141<=x142)==x143)|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 24;
	int64_t x146 = INT64_MIN;
	int32_t x147 = -1;
	int32_t x148 = -1;
	volatile int32_t t36 = 399;

	t36 = (((x145<=x146)==x147)|x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -1;
	int64_t x150 = -71296946867582LL;
	int32_t x151 = -145990;
	uint8_t x152 = UINT8_MAX;

	t37 = (((x149<=x150)==x151)|x152);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int64_t x154 = INT64_MIN;
	int32_t x155 = -21376;
	int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = INT32_MIN;

	t38 = (((x153<=x154)==x155)|x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -2187987223244LL;
	static int32_t x158 = -3;
	volatile int8_t x159 = 41;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = -20;

	t39 = (((x157<=x158)==x159)|x160);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 672U;
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	static int16_t x164 = -1;
	static volatile int32_t t40 = 148;

	t40 = (((x161<=x162)==x163)|x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -17684;

	t41 = (((x165<=x166)==x167)|x168);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	static uint64_t x170 = 564128918405915486LLU;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;

	t42 = (((x169<=x170)==x171)|x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	uint8_t x175 = 2U;
	uint64_t x176 = 15645LLU;
	uint64_t t43 = 133LLU;

	t43 = (((x173<=x174)==x175)|x176);

	if (t43 != 15645LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint32_t x178 = 1493U;
	static uint64_t x179 = 261272938138544355LLU;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 45781;

	t44 = (((x177<=x178)==x179)|x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x182 = -1;
	volatile int64_t t45 = INT64_MIN;

	t45 = (((x181<=x182)==x183)|x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x185<=x186)==x187)|x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile int16_t x190 = -248;
	int64_t x191 = INT64_MAX;
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = 1;

	t47 = (((x189<=x190)==x191)|x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 20487LLU;
	int32_t x194 = 1656300;
	int16_t x195 = -1;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -71658;

	t48 = (((x193<=x194)==x195)|x196);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -6890;
	int64_t x198 = -8085556LL;
	int64_t x199 = -1879LL;
	int64_t t49 = INT64_MIN;

	t49 = (((x197<=x198)==x199)|x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MAX;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -11260;

	t50 = (((x201<=x202)==x203)|x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = -4;
	int8_t x207 = INT8_MAX;
	volatile int16_t x208 = INT16_MAX;
	int32_t t51 = -51027459;

	t51 = (((x205<=x206)==x207)|x208);

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 107244069127673LLU;
	static int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (((x209<=x210)==x211)|x212);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 11U;
	int16_t x214 = INT16_MIN;
	int8_t x215 = 49;
	volatile uint32_t t53 = 0U;

	t53 = (((x213<=x214)==x215)|x216);

	if (t53 != 587472U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MIN;
	volatile int32_t x218 = 14084;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t54 = 1734;

	t54 = (((x217<=x218)==x219)|x220);

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	static int64_t x224 = INT64_MIN;

	t55 = (((x221<=x222)==x223)|x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 1528569017282271731LLU;
	uint64_t t56 = 1346410003LLU;

	t56 = (((x225<=x226)==x227)|x228);

	if (t56 != 1528569017282271731LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = INT64_MAX;
	volatile int64_t x232 = INT64_MAX;
	static int64_t t57 = INT64_MAX;

	t57 = (((x229<=x230)==x231)|x232);

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile int16_t x234 = -2;
	static int8_t x236 = 1;

	t58 = (((x233<=x234)==x235)|x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x237<=x238)==x239)|x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MAX;
	volatile int8_t x243 = INT8_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (((x241<=x242)==x243)|x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	static uint8_t x247 = UINT8_MAX;
	int32_t t61 = INT32_MAX;

	t61 = (((x245<=x246)==x247)|x248);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 20U;
	int8_t x250 = INT8_MIN;
	volatile int64_t t62 = -3564212314775201736LL;

	t62 = (((x249<=x250)==x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 660428U;
	volatile uint64_t x254 = UINT64_MAX;
	uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = -1;
	int32_t t63 = 279148;

	t63 = (((x253<=x254)==x255)|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 482959723U;
	uint8_t x259 = 8U;
	volatile int64_t x260 = INT64_MIN;
	static volatile int64_t t64 = INT64_MIN;

	t64 = (((x257<=x258)==x259)|x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int64_t x262 = INT64_MIN;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -142;

	t65 = (((x261<=x262)==x263)|x264);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 16U;
	int16_t x266 = INT16_MAX;
	static uint32_t x268 = 1477150805U;
	uint32_t t66 = 101551U;

	t66 = (((x265<=x266)==x267)|x268);

	if (t66 != 1477150805U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	static int64_t x271 = -34131668499086LL;
	int64_t x272 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = (((x269<=x270)==x271)|x272);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MAX;
	static int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t68 = INT32_MIN;

	t68 = (((x273<=x274)==x275)|x276);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x277 = 34143454585LLU;
	int32_t x280 = 30;
	int32_t t69 = 4932715;

	t69 = (((x277<=x278)==x279)|x280);

	if (t69 != 30) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MIN;
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = -912161;

	t70 = (((x281<=x282)==x283)|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = INT64_MIN;
	int16_t x288 = 37;
	int32_t t71 = 11495055;

	t71 = (((x285<=x286)==x287)|x288);

	if (t71 != 37) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = 21249U;
	int16_t x291 = INT16_MAX;
	int32_t t72 = 7475;

	t72 = (((x289<=x290)==x291)|x292);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	static volatile uint32_t t73 = 16U;

	t73 = (((x293<=x294)==x295)|x296);

	if (t73 != 27U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x298 = UINT16_MAX;
	uint64_t x299 = 7815011017826LLU;

	t74 = (((x297<=x298)==x299)|x300);

	if (t74 != 272U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = 3680;
	static int32_t t75 = 31261490;

	t75 = (((x301<=x302)==x303)|x304);

	if (t75 != 3680) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	volatile uint16_t x306 = UINT16_MAX;
	static volatile int64_t x307 = -23374178468LL;
	uint64_t x308 = 1LLU;

	t76 = (((x305<=x306)==x307)|x308);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = -1;
	static uint8_t x311 = 7U;
	uint16_t x312 = 14U;
	volatile int32_t t77 = -15;

	t77 = (((x309<=x310)==x311)|x312);

	if (t77 != 14) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 1847;
	int8_t x314 = INT8_MAX;
	volatile int64_t x315 = INT64_MIN;
	int8_t x316 = -1;
	int32_t t78 = 103;

	t78 = (((x313<=x314)==x315)|x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 37740;
	int64_t x318 = -1LL;
	static int64_t x319 = -1LL;
	int8_t x320 = -1;
	int32_t t79 = 64500;

	t79 = (((x317<=x318)==x319)|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = -1;
	volatile uint8_t x324 = 1U;
	volatile int32_t t80 = 2021105;

	t80 = (((x321<=x322)==x323)|x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 60147637U;
	int32_t x326 = -1;
	volatile int32_t t81 = -2;

	t81 = (((x325<=x326)==x327)|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 22U;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 19921U;
	static uint8_t x332 = 14U;

	t82 = (((x329<=x330)==x331)|x332);

	if (t82 != 14) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 0U;
	uint32_t x334 = 92876987U;
	int8_t x335 = INT8_MAX;
	volatile int32_t x336 = 1408;
	static int32_t t83 = -2;

	t83 = (((x333<=x334)==x335)|x336);

	if (t83 != 1408) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	uint8_t x338 = 1U;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -1;
	int32_t t84 = 22174870;

	t84 = (((x337<=x338)==x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 1;
	uint64_t x342 = 244213LLU;
	volatile uint32_t t85 = 1890336379U;

	t85 = (((x341<=x342)==x343)|x344);

	if (t85 != 1683635544U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 1LL;
	uint64_t x347 = UINT64_MAX;
	uint64_t x348 = 810594538782380LLU;
	volatile uint64_t t86 = 63669326681445LLU;

	t86 = (((x345<=x346)==x347)|x348);

	if (t86 != 810594538782380LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 6293390315LLU;
	int8_t x350 = INT8_MAX;
	static uint64_t x352 = 30301812665LLU;
	volatile uint64_t t87 = 112LLU;

	t87 = (((x349<=x350)==x351)|x352);

	if (t87 != 30301812665LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = 724;
	int64_t x355 = 4222242677922LL;
	int64_t t88 = INT64_MIN;

	t88 = (((x353<=x354)==x355)|x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = 0U;
	int32_t t89 = 3;

	t89 = (((x357<=x358)==x359)|x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 51U;
	volatile uint8_t x362 = 66U;
	static int32_t x363 = INT32_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = 6726;

	t90 = (((x361<=x362)==x363)|x364);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = 101578;
	int32_t x367 = -38942;
	uint32_t x368 = 83113U;
	uint32_t t91 = 1367467841U;

	t91 = (((x365<=x366)==x367)|x368);

	if (t91 != 83113U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1012;
	uint32_t x370 = 30918U;
	uint32_t x371 = 60861U;
	int32_t x372 = 0;
	volatile int32_t t92 = 893;

	t92 = (((x369<=x370)==x371)|x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 3125U;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = 388U;
	uint64_t x376 = 9791LLU;
	uint64_t t93 = 4792080646023608LLU;

	t93 = (((x373<=x374)==x375)|x376);

	if (t93 != 9791LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 21U;
	int32_t x378 = 551;
	int64_t x380 = INT64_MIN;
	int64_t t94 = INT64_MIN;

	t94 = (((x377<=x378)==x379)|x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MAX;
	volatile int32_t x383 = INT32_MAX;
	volatile int8_t x384 = 1;

	t95 = (((x381<=x382)==x383)|x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -61;
	static uint64_t x386 = UINT64_MAX;
	int64_t x388 = INT64_MAX;

	t96 = (((x385<=x386)==x387)|x388);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MAX;
	int32_t t97 = -1923;

	t97 = (((x389<=x390)==x391)|x392);

	if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	static volatile uint64_t x394 = UINT64_MAX;
	int16_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 123592468;

	t98 = (((x393<=x394)==x395)|x396);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 14U;
	volatile uint8_t x398 = 4U;
	volatile int8_t x399 = INT8_MIN;
	int16_t x400 = 16311;
	volatile int32_t t99 = 41411083;

	t99 = (((x397<=x398)==x399)|x400);

	if (t99 != 16311) { NG(); } else { ; }
	
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

