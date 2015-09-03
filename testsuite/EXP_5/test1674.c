#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int32_t x7 = -1;
int64_t x13 = INT64_MIN;
static int16_t x15 = -1;
int8_t x18 = INT8_MIN;
int16_t x20 = INT16_MIN;
int32_t x22 = INT32_MIN;
int8_t x23 = INT8_MIN;
volatile int32_t t5 = -1791;
uint32_t x28 = 42949U;
uint64_t x31 = UINT64_MAX;
int64_t x34 = 3183LL;
static volatile uint8_t x45 = UINT8_MAX;
int32_t x50 = INT32_MIN;
int32_t x54 = INT32_MIN;
static int64_t x55 = INT64_MAX;
uint32_t x65 = UINT32_MAX;
volatile int32_t t16 = 6558566;
uint8_t x69 = 5U;
int8_t x71 = -1;
volatile int32_t t17 = 16;
uint64_t x74 = 5LLU;
int64_t x85 = INT64_MAX;
int64_t x86 = INT64_MIN;
uint64_t x90 = UINT64_MAX;
int32_t x91 = -1863893;
int32_t t22 = 2047;
volatile uint8_t x102 = UINT8_MAX;
int16_t x105 = INT16_MIN;
uint64_t x113 = UINT64_MAX;
static int32_t x116 = INT32_MIN;
int64_t x120 = INT64_MIN;
volatile int32_t t29 = 977596;
volatile int32_t t31 = 157982;
int32_t x134 = INT32_MIN;
uint64_t x136 = UINT64_MAX;
int32_t t33 = 12427205;
static uint64_t x138 = UINT64_MAX;
volatile int16_t x142 = INT16_MAX;
int32_t x150 = -1;
volatile int32_t t39 = -710115;
static volatile int64_t x164 = -8002881732433005LL;
int32_t t44 = -3122217;
int64_t x182 = INT64_MIN;
static volatile int32_t t45 = 4068208;
int64_t x185 = INT64_MAX;
volatile int8_t x196 = -1;
int16_t x200 = INT16_MAX;
static int16_t x207 = -1;
int16_t x208 = INT16_MIN;
int16_t x210 = INT16_MIN;
uint32_t x216 = UINT32_MAX;
int32_t x220 = INT32_MIN;
int64_t x222 = INT64_MIN;
uint64_t x226 = UINT64_MAX;
int8_t x232 = -1;
static int32_t t57 = 195983671;
static volatile int32_t t58 = -2;
int16_t x255 = INT16_MIN;
volatile int8_t x256 = INT8_MAX;
uint8_t x263 = UINT8_MAX;
int8_t x269 = -1;
int32_t t68 = -6;
volatile int32_t t69 = 157284;
uint32_t x290 = UINT32_MAX;
int16_t x291 = -1;
volatile int32_t t72 = 93;
int16_t x301 = 0;
int32_t t76 = -24;
int16_t x317 = INT16_MIN;
int64_t x320 = -1LL;
int8_t x322 = -1;
int16_t x323 = -1;
uint16_t x325 = 13022U;
int64_t x327 = -1LL;
volatile int32_t x334 = -735880295;
int32_t x335 = INT32_MIN;
static int32_t t83 = 283170;
int32_t x338 = INT32_MIN;
volatile int32_t t86 = 0;
int32_t x350 = 75401285;
int64_t x354 = INT64_MIN;
int32_t x365 = INT32_MIN;
int8_t x367 = INT8_MIN;
int32_t x373 = INT32_MAX;
uint32_t x374 = 682U;
int32_t x380 = INT32_MIN;
static int16_t x388 = -1;
int8_t x390 = 3;
volatile int8_t x392 = -22;
int32_t t97 = -1;
uint16_t x396 = 600U;


void f0(void) {
	uint8_t x1 = 6U;
	int8_t x2 = INT8_MIN;
	uint64_t x4 = 111738724556LLU;
	int32_t t0 = 1339;

	t0 = (x1<=((x2<=x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static uint16_t x6 = 57U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -83327962;

	t1 = (x5<=((x6<=x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = -1LL;
	static int16_t x11 = -151;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -4786617;

	t2 = (x9<=((x10<=x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -33;

	t3 = (x13<=((x14<=x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 333209565LL;
	int8_t x19 = 7;
	volatile int32_t t4 = 281;

	t4 = (x17<=((x18<=x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint8_t x24 = 6U;

	t5 = (x21<=((x22<=x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 5U;
	int32_t x26 = -1;
	int8_t x27 = -6;
	int32_t t6 = 4631511;

	t6 = (x25<=((x26<=x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x30 = -1;
	int32_t x32 = 170623876;
	volatile int32_t t7 = 12942;

	t7 = (x29<=((x30<=x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t x36 = 572885646;
	volatile int32_t t8 = 6958714;

	t8 = (x33<=((x34<=x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = -1;
	int32_t x39 = INT32_MIN;
	volatile int64_t x40 = -50013383079711LL;
	int32_t t9 = -1588;

	t9 = (x37<=((x38<=x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	int32_t x42 = INT32_MIN;
	static volatile int64_t x43 = -180057518498935LL;
	int8_t x44 = 9;
	volatile int32_t t10 = 10914;

	t10 = (x41<=((x42<=x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = -336056;
	volatile uint32_t x48 = UINT32_MAX;
	int32_t t11 = -4;

	t11 = (x45<=((x46<=x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3018U;
	volatile int8_t x51 = INT8_MIN;
	static uint16_t x52 = UINT16_MAX;
	int32_t t12 = 5;

	t12 = (x49<=((x50<=x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 4052U;
	int8_t x56 = -42;
	volatile int32_t t13 = -423;

	t13 = (x53<=((x54<=x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 699782LLU;
	int32_t x58 = -71;
	static int8_t x59 = INT8_MAX;
	int64_t x60 = 449043208LL;
	int32_t t14 = 26620466;

	t14 = (x57<=((x58<=x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 1969U;
	uint8_t x63 = UINT8_MAX;
	volatile uint8_t x64 = 1U;
	static volatile int32_t t15 = 64247886;

	t15 = (x61<=((x62<=x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 7U;
	uint32_t x67 = 3048910U;
	volatile uint16_t x68 = UINT16_MAX;

	t16 = (x65<=((x66<=x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 1163492U;
	int8_t x72 = INT8_MIN;

	t17 = (x69<=((x70<=x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 401782LL;
	int8_t x75 = 38;
	static int32_t x76 = -124539268;
	int32_t t18 = -342419;

	t18 = (x73<=((x74<=x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int64_t x78 = -5LL;
	int16_t x79 = -1;
	volatile int32_t x80 = -1;
	int32_t t19 = 292741;

	t19 = (x77<=((x78<=x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x82 = -31;
	int8_t x83 = -16;
	int16_t x84 = 0;
	volatile int32_t t20 = -64984;

	t20 = (x81<=((x82<=x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = 64;
	uint64_t x88 = UINT64_MAX;
	int32_t t21 = -608702;

	t21 = (x85<=((x86<=x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 19U;
	uint8_t x92 = UINT8_MAX;

	t22 = (x89<=((x90<=x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -914335093203732499LL;
	int64_t x94 = 69449LL;
	uint64_t x95 = 7619636006518330481LLU;
	volatile int8_t x96 = -1;
	static int32_t t23 = -529046256;

	t23 = (x93<=((x94<=x95)|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -1;

	t24 = (x97<=((x98<=x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	uint64_t x103 = 92137725282647014LLU;
	static uint32_t x104 = 6814U;
	volatile int32_t t25 = 120189;

	t25 = (x101<=((x102<=x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	static uint32_t x107 = UINT32_MAX;
	volatile int64_t x108 = -1LL;
	int32_t t26 = -63800;

	t26 = (x105<=((x106<=x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = 31288U;
	int32_t x111 = INT32_MIN;
	static uint8_t x112 = 95U;
	int32_t t27 = 10648;

	t27 = (x109<=((x110<=x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = 6534U;
	int64_t x115 = -3890LL;
	volatile int32_t t28 = -11847337;

	t28 = (x113<=((x114<=x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 36LLU;
	int64_t x118 = 107743647815729778LL;
	static int64_t x119 = -1LL;

	t29 = (x117<=((x118<=x119)|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 7337387570227551117LLU;
	int16_t x122 = INT16_MAX;
	int8_t x123 = 3;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = 2;

	t30 = (x121<=((x122<=x123)|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	int64_t x127 = -1LL;
	int32_t x128 = INT32_MIN;

	t31 = (x125<=((x126<=x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 153U;
	volatile uint32_t x130 = 6U;
	int16_t x131 = -271;
	volatile int32_t x132 = 63927501;
	int32_t t32 = -857799;

	t32 = (x129<=((x130<=x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MAX;
	volatile int32_t x135 = 10;

	t33 = (x133<=((x134<=x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 110U;
	uint8_t x139 = 11U;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -5130114;

	t34 = (x137<=((x138<=x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	volatile int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	static int32_t t35 = -10080695;

	t35 = (x141<=((x142<=x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	volatile int16_t x146 = 5;
	int32_t x147 = INT32_MAX;
	uint8_t x148 = 103U;
	static int32_t t36 = 182304713;

	t36 = (x145<=((x146<=x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 51;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -22;

	t37 = (x149<=((x150<=x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = -1;
	int32_t x155 = -4997;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = 10307;

	t38 = (x153<=((x154<=x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	uint64_t x158 = UINT64_MAX;
	static volatile uint8_t x159 = 0U;
	static int64_t x160 = INT64_MIN;

	t39 = (x157<=((x158<=x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1U;
	static int64_t x162 = -1LL;
	uint16_t x163 = 3774U;
	static int32_t t40 = -21165;

	t40 = (x161<=((x162<=x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	static volatile uint32_t x167 = 112747602U;
	int64_t x168 = INT64_MAX;
	static volatile int32_t t41 = -1;

	t41 = (x165<=((x166<=x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -7;
	int8_t x170 = INT8_MAX;
	static int8_t x171 = INT8_MIN;
	uint16_t x172 = 12U;
	static int32_t t42 = 107908;

	t42 = (x169<=((x170<=x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -15;
	static uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = UINT64_MAX;
	static uint32_t x176 = 13149U;
	volatile int32_t t43 = -26;

	t43 = (x173<=((x174<=x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = 46;
	int16_t x178 = -1;
	static uint16_t x179 = 14595U;
	uint8_t x180 = UINT8_MAX;

	t44 = (x177<=((x178<=x179)|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int32_t x183 = 49567987;
	int8_t x184 = INT8_MIN;

	t45 = (x181<=((x182<=x183)|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = 3;
	static volatile uint16_t x187 = UINT16_MAX;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = -9104170;

	t46 = (x185<=((x186<=x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 29U;
	volatile int8_t x190 = INT8_MAX;
	static int32_t x191 = -1;
	volatile int64_t x192 = 1528320592LL;
	static volatile int32_t t47 = 11613498;

	t47 = (x189<=((x190<=x191)|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MAX;
	int16_t x195 = 11617;
	volatile int32_t t48 = 0;

	t48 = (x193<=((x194<=x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MAX;
	static uint16_t x199 = 29367U;
	volatile int32_t t49 = -173;

	t49 = (x197<=((x198<=x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = -760116441;

	t50 = (x201<=((x202<=x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 1702U;
	static int32_t x206 = INT32_MIN;
	volatile int32_t t51 = -12176961;

	t51 = (x205<=((x206<=x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = 0U;
	static int32_t t52 = 1;

	t52 = (x209<=((x210<=x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MAX;
	uint8_t x214 = 1U;
	volatile uint32_t x215 = 123U;
	volatile int32_t t53 = 177291;

	t53 = (x213<=((x214<=x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 19;
	static uint64_t x218 = 318497196LLU;
	int16_t x219 = INT16_MIN;
	int32_t t54 = -87;

	t54 = (x217<=((x218<=x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 119092670U;
	uint16_t x223 = 3U;
	volatile int8_t x224 = INT8_MIN;
	int32_t t55 = 17413905;

	t55 = (x221<=((x222<=x223)|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	static int64_t x227 = -1LL;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t56 = 916;

	t56 = (x225<=((x226<=x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1856;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = 8U;

	t57 = (x229<=((x230<=x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	uint16_t x234 = 13U;
	uint8_t x235 = 6U;
	uint64_t x236 = UINT64_MAX;

	t58 = (x233<=((x234<=x235)|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 3301U;
	volatile uint8_t x238 = 116U;
	static int64_t x239 = -865600132498017LL;
	uint8_t x240 = 5U;
	static int32_t t59 = 45650503;

	t59 = (x237<=((x238<=x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = 261570985LL;
	uint8_t x243 = 12U;
	static int64_t x244 = INT64_MAX;
	volatile int32_t t60 = 0;

	t60 = (x241<=((x242<=x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 2U;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = INT32_MAX;
	static int32_t x248 = -1;
	int32_t t61 = 86;

	t61 = (x245<=((x246<=x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = -1;
	int16_t x250 = 1;
	uint16_t x251 = 7U;
	int64_t x252 = -1LL;
	int32_t t62 = 0;

	t62 = (x249<=((x250<=x251)|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 1;
	volatile int32_t t63 = 1290787;

	t63 = (x253<=((x254<=x255)|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int32_t x258 = -5169058;
	uint32_t x259 = 353972U;
	int64_t x260 = -1LL;
	static int32_t t64 = 220045;

	t64 = (x257<=((x258<=x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MIN;
	volatile int64_t x264 = -1LL;
	static int32_t t65 = 21;

	t65 = (x261<=((x262<=x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MAX;
	volatile uint64_t x268 = 1360549928622387LLU;
	int32_t t66 = 42;

	t66 = (x265<=((x266<=x267)|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MIN;
	static int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 183550;

	t67 = (x269<=((x270<=x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 120;
	uint8_t x274 = 52U;
	volatile int64_t x275 = INT64_MAX;
	static volatile int64_t x276 = 2054032137495469113LL;

	t68 = (x273<=((x274<=x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	static uint64_t x278 = UINT64_MAX;
	static uint16_t x279 = UINT16_MAX;
	int8_t x280 = 24;

	t69 = (x277<=((x278<=x279)|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	uint64_t x282 = 1950187446069487LLU;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = 4;
	volatile int32_t t70 = -2296;

	t70 = (x281<=((x282<=x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	int64_t x287 = -8112LL;
	uint8_t x288 = 93U;
	int32_t t71 = -1;

	t71 = (x285<=((x286<=x287)|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int16_t x292 = INT16_MIN;

	t72 = (x289<=((x290<=x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	static volatile int64_t x294 = INT64_MIN;
	static int64_t x295 = -1LL;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -23633392;

	t73 = (x293<=((x294<=x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 8U;
	uint8_t x298 = 101U;
	uint8_t x299 = 64U;
	int8_t x300 = 20;
	int32_t t74 = 80947;

	t74 = (x297<=((x298<=x299)|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	uint32_t x303 = UINT32_MAX;
	static int64_t x304 = -1LL;
	int32_t t75 = -635461;

	t75 = (x301<=((x302<=x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 16447354697020790LL;
	uint16_t x306 = 1U;
	static uint64_t x307 = UINT64_MAX;
	uint32_t x308 = 60U;

	t76 = (x305<=((x306<=x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	volatile int8_t x310 = 15;
	int32_t x311 = -1;
	int8_t x312 = 1;
	volatile int32_t t77 = -49441730;

	t77 = (x309<=((x310<=x311)|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 6;
	static volatile int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -89LL;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t78 = -1;

	t78 = (x313<=((x314<=x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = 36142U;
	static int8_t x319 = INT8_MIN;
	volatile int32_t t79 = -20;

	t79 = (x317<=((x318<=x319)|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = -1;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 2611322;

	t80 = (x321<=((x322<=x323)|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 57U;
	volatile int64_t x328 = -7367940LL;
	volatile int32_t t81 = -32871610;

	t81 = (x325<=((x326<=x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -895699531LL;
	uint8_t x330 = 11U;
	static int32_t x331 = -1;
	int32_t x332 = -1;
	volatile int32_t t82 = -4;

	t82 = (x329<=((x330<=x331)|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	int64_t x336 = INT64_MIN;

	t83 = (x333<=((x334<=x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 12488U;
	int32_t x339 = -166273;
	int64_t x340 = 455LL;
	volatile int32_t t84 = 19;

	t84 = (x337<=((x338<=x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = 40U;
	static uint16_t x342 = 670U;
	static volatile int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	static int32_t t85 = -19592;

	t85 = (x341<=((x342<=x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	volatile uint32_t x346 = 556517U;
	volatile int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MAX;

	t86 = (x345<=((x346<=x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static int32_t x351 = INT32_MIN;
	static int8_t x352 = -1;
	static int32_t t87 = 3797864;

	t87 = (x349<=((x350<=x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 420U;
	uint16_t x355 = 7381U;
	static uint8_t x356 = 6U;
	int32_t t88 = -95208836;

	t88 = (x353<=((x354<=x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = INT32_MIN;
	volatile int8_t x359 = -1;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -59;

	t89 = (x357<=((x358<=x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	int8_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 129324066;

	t90 = (x361<=((x362<=x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MAX;
	volatile uint8_t x368 = 0U;
	static volatile int32_t t91 = 877;

	t91 = (x365<=((x366<=x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 5074U;
	static uint8_t x370 = 1U;
	int8_t x371 = 1;
	uint32_t x372 = 93792U;
	int32_t t92 = -45;

	t92 = (x369<=((x370<=x371)|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x375 = 1629;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -23811;

	t93 = (x373<=((x374<=x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 24412U;
	uint64_t x378 = 14LLU;
	static int8_t x379 = -1;
	static volatile int32_t t94 = -22835;

	t94 = (x377<=((x378<=x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile uint8_t x382 = 28U;
	volatile int8_t x383 = -1;
	uint64_t x384 = 17LLU;
	static volatile int32_t t95 = 3;

	t95 = (x381<=((x382<=x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 420U;
	int64_t x386 = -388626935578452036LL;
	uint8_t x387 = 32U;
	int32_t t96 = 27;

	t96 = (x385<=((x386<=x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	int16_t x391 = 1;

	t97 = (x389<=((x390<=x391)|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	uint64_t x394 = 1455634LLU;
	static int16_t x395 = -1;
	int32_t t98 = -3336714;

	t98 = (x393<=((x394<=x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 2849U;
	int32_t x398 = -159082;
	static uint16_t x399 = 4U;
	volatile int32_t x400 = INT32_MAX;
	static int32_t t99 = -8142;

	t99 = (x397<=((x398<=x399)|x400));

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

