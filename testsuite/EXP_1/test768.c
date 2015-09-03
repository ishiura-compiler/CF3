#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -8;
volatile int32_t x10 = -63561889;
static uint64_t x23 = 67154730078LLU;
uint32_t x25 = 1605U;
static volatile int64_t t7 = -731233411186893LL;
int32_t t8 = -73741658;
static uint8_t x38 = UINT8_MAX;
volatile uint16_t x39 = 916U;
int64_t x48 = -43LL;
uint8_t x49 = 5U;
int16_t x50 = INT16_MIN;
static int8_t x51 = -1;
int64_t t12 = 27837114971271LL;
uint8_t x54 = UINT8_MAX;
uint32_t t13 = UINT32_MAX;
uint8_t x61 = 4U;
uint64_t x62 = UINT64_MAX;
static uint64_t x70 = 7LLU;
volatile int32_t t21 = -2;
volatile uint64_t t22 = UINT64_MAX;
int32_t x93 = INT32_MIN;
uint8_t x96 = UINT8_MAX;
int8_t x121 = -63;
volatile int32_t t30 = -13;
static int16_t x127 = INT16_MIN;
static int8_t x130 = INT8_MIN;
int64_t x131 = 10817824151236747LL;
volatile int32_t x133 = -26244;
static int16_t x139 = INT16_MIN;
uint32_t x143 = 1110U;
uint32_t x145 = 10496U;
volatile uint16_t x146 = UINT16_MAX;
int64_t x147 = -864030755427409LL;
static int64_t x153 = -966249LL;
static volatile uint64_t t37 = 1750513477091LLU;
static int32_t x160 = INT32_MIN;
volatile int32_t x164 = -1;
int8_t x171 = -13;
int8_t x177 = INT8_MIN;
uint32_t x180 = UINT32_MAX;
int32_t x181 = INT32_MIN;
uint16_t x192 = 262U;
int16_t x196 = INT16_MAX;
uint16_t x204 = 4089U;
int64_t x208 = INT64_MIN;
static int64_t t49 = INT64_MIN;
int64_t t50 = 19059437LL;
int16_t x219 = -1;
int32_t x220 = -1043888369;
uint8_t x221 = 3U;
int32_t x235 = 64953;
static uint16_t x237 = UINT16_MAX;
volatile int32_t t57 = -6;
uint64_t x243 = 30608469257LLU;
volatile int32_t t58 = -4916;
static int64_t x247 = -35358499909LL;
static volatile int32_t t59 = 936832969;
static int32_t x250 = INT32_MAX;
static int32_t x254 = INT32_MIN;
uint16_t x262 = UINT16_MAX;
uint64_t x273 = 939LLU;
uint32_t x274 = 13796219U;
volatile uint16_t x279 = 19U;
static volatile int32_t x286 = -790;
uint32_t x294 = 44143U;
volatile int64_t x298 = 185323LL;
static int64_t x308 = -3934079969260LL;
int8_t x309 = 6;
int32_t x313 = INT32_MIN;
int32_t t76 = 1260;
uint8_t x319 = 89U;
int8_t x324 = 0;
int64_t x325 = INT64_MAX;
volatile int16_t x333 = -1;
int16_t x337 = 328;
static volatile int64_t t83 = INT64_MIN;
volatile int16_t x346 = 6;
volatile uint16_t x351 = 396U;
static int16_t x356 = -47;
uint64_t x359 = 10937027435LLU;
volatile int32_t t89 = 15753864;
volatile int64_t x371 = INT64_MIN;
int32_t t90 = -755;
volatile int16_t x374 = -1;
int32_t x382 = INT32_MAX;
static int16_t x385 = -1;
int8_t x386 = INT8_MIN;
int32_t t93 = 72;
volatile int64_t t95 = INT64_MIN;
volatile uint64_t x398 = 3058287084766862297LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t x2 = 1533;
	int8_t x3 = INT8_MIN;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (((x1%x2)==x3)+x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	volatile uint16_t x6 = UINT16_MAX;
	int32_t x7 = -1;
	int32_t t1 = 993368;

	t1 = (((x5%x6)==x7)+x8);

	if (t1 != -8) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int32_t x11 = -26940525;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = INT64_MIN;

	t2 = (((x9%x10)==x11)+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	int8_t x14 = -1;
	int16_t x15 = -56;
	static uint8_t x16 = 0U;
	int32_t t3 = -1313;

	t3 = (((x13%x14)==x15)+x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 3;
	uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 416165U;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = INT32_MIN;

	t4 = (((x17%x18)==x19)+x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	uint32_t x22 = 1U;
	static int32_t x24 = -1;
	int32_t t5 = 0;

	t5 = (((x21%x22)==x23)+x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 92423462150LLU;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = INT32_MIN;

	t6 = (((x25%x26)==x27)+x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 19891310927447903LL;
	int8_t x30 = -1;
	int64_t x31 = -744763LL;
	int64_t x32 = -1LL;

	t7 = (((x29%x30)==x31)+x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 836410215LL;
	int64_t x34 = 7572280141133LL;
	static int32_t x35 = -1;
	int8_t x36 = INT8_MAX;

	t8 = (((x33%x34)==x35)+x36);

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = -2046;

	t9 = (((x37%x38)==x39)+x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 713U;
	volatile int32_t x42 = 280707;
	int16_t x43 = 10473;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = UINT64_MAX;

	t10 = (((x41%x42)==x43)+x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 179837350;
	int8_t x46 = -1;
	uint32_t x47 = 55366911U;
	volatile int64_t t11 = 3106305832LL;

	t11 = (((x45%x46)==x47)+x48);

	if (t11 != -43LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x52 = -34LL;

	t12 = (((x49%x50)==x51)+x52);

	if (t12 != -34LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 2U;
	volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = UINT32_MAX;

	t13 = (((x53%x54)==x55)+x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -8193578;
	int16_t x58 = -1;
	int64_t x59 = -1836LL;
	int64_t x60 = 5005504103121LL;
	int64_t t14 = 16661861201768LL;

	t14 = (((x57%x58)==x59)+x60);

	if (t14 != 5005504103121LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x63 = INT32_MIN;
	static volatile uint16_t x64 = 24U;
	volatile int32_t t15 = 13494;

	t15 = (((x61%x62)==x63)+x64);

	if (t15 != 24) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int8_t x67 = 4;
	static volatile int8_t x68 = 10;
	static volatile int32_t t16 = 72474;

	t16 = (((x65%x66)==x67)+x68);

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int16_t x71 = INT16_MAX;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -1869;

	t17 = (((x69%x70)==x71)+x72);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static int32_t x74 = -1;
	volatile uint16_t x75 = 1U;
	volatile int64_t x76 = -1LL;
	static volatile int64_t t18 = -282815194315LL;

	t18 = (((x73%x74)==x75)+x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = 600228536;

	t19 = (((x77%x78)==x79)+x80);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MIN;
	uint64_t x82 = 26LLU;
	uint32_t x83 = 84506U;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = INT64_MIN;

	t20 = (((x81%x82)==x83)+x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -316906942;
	int64_t x86 = INT64_MAX;
	int8_t x87 = 1;
	int16_t x88 = INT16_MAX;

	t21 = (((x85%x86)==x87)+x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 10U;
	volatile uint64_t x90 = UINT64_MAX;
	int64_t x91 = -1LL;
	volatile uint64_t x92 = UINT64_MAX;

	t22 = (((x89%x90)==x91)+x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = 94711;
	volatile int16_t x95 = INT16_MAX;
	int32_t t23 = -422864;

	t23 = (((x93%x94)==x95)+x96);

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	static volatile int16_t x98 = INT16_MAX;
	int8_t x99 = 0;
	static int64_t x100 = -1LL;
	int64_t t24 = 1084094416130LL;

	t24 = (((x97%x98)==x99)+x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 3310050U;
	static volatile uint32_t t25 = 337086938U;

	t25 = (((x101%x102)==x103)+x104);

	if (t25 != 3310051U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	volatile int32_t x106 = -1;
	static int32_t x107 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = (((x105%x106)==x107)+x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 203360767578LLU;
	int16_t x110 = 30;
	int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 549;

	t27 = (((x109%x110)==x111)+x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = 9;
	int8_t x114 = -1;
	int64_t x115 = INT64_MAX;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -3;

	t28 = (((x113%x114)==x115)+x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 73507;
	static int32_t x118 = INT32_MAX;
	volatile uint16_t x119 = 16040U;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t29 = 1251148;

	t29 = (((x117%x118)==x119)+x120);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MIN;
	int32_t x123 = -21;
	int8_t x124 = -1;

	t30 = (((x121%x122)==x123)+x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int8_t x126 = -6;
	static volatile int64_t x128 = INT64_MIN;
	int64_t t31 = INT64_MIN;

	t31 = (((x125%x126)==x127)+x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 4U;
	int32_t x132 = 1613498;
	static volatile int32_t t32 = -3877924;

	t32 = (((x129%x130)==x131)+x132);

	if (t32 != 1613498) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -58;
	int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 7;

	t33 = (((x133%x134)==x135)+x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	int16_t x140 = 2160;
	volatile int32_t t34 = -3359994;

	t34 = (((x137%x138)==x139)+x140);

	if (t34 != 2161) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x141%x142)==x143)+x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 172396869;

	t36 = (((x145%x146)==x147)+x148);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	volatile int16_t x155 = INT16_MIN;
	uint64_t x156 = 1090129LLU;

	t37 = (((x153%x154)==x155)+x156);

	if (t37 != 1090129LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = 1;
	int32_t x159 = -22;
	static volatile int32_t t38 = INT32_MIN;

	t38 = (((x157%x158)==x159)+x160);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	static int32_t t39 = -280;

	t39 = (((x161%x162)==x163)+x164);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = -5;
	volatile uint64_t x170 = 186170LLU;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t40 = 1;

	t40 = (((x169%x170)==x171)+x172);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -72;
	static int16_t x174 = -1;
	int32_t x175 = -1;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t41 = 260;

	t41 = (((x173%x174)==x175)+x176);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = 226602385LL;
	static uint32_t t42 = UINT32_MAX;

	t42 = (((x177%x178)==x179)+x180);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x182 = INT32_MIN;
	int32_t x183 = 4209467;
	int64_t x184 = -1LL;
	int64_t t43 = 33219575LL;

	t43 = (((x181%x182)==x183)+x184);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int16_t x186 = 105;
	int64_t x187 = INT64_MAX;
	static uint8_t x188 = 110U;
	volatile int32_t t44 = 722;

	t44 = (((x185%x186)==x187)+x188);

	if (t44 != 110) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 8748U;
	uint32_t x191 = UINT32_MAX;
	int32_t t45 = 1185168;

	t45 = (((x189%x190)==x191)+x192);

	if (t45 != 262) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = INT8_MIN;
	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = -1LL;
	volatile int32_t t46 = 12459;

	t46 = (((x193%x194)==x195)+x196);

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = 183394;
	static uint32_t x198 = 24061691U;
	static int16_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = (((x197%x198)==x199)+x200);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = 1211;
	int32_t x202 = INT32_MAX;
	int16_t x203 = 0;
	int32_t t48 = -1407;

	t48 = (((x201%x202)==x203)+x204);

	if (t48 != 4089) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x206 = -1;
	int8_t x207 = INT8_MIN;

	t49 = (((x205%x206)==x207)+x208);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 99U;
	int32_t x210 = -450796;
	int64_t x211 = 204936544759LL;
	int64_t x212 = 64862548220LL;

	t50 = (((x209%x210)==x211)+x212);

	if (t50 != 64862548220LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = 4;
	int64_t x216 = INT64_MIN;
	int64_t t51 = INT64_MIN;

	t51 = (((x213%x214)==x215)+x216);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x217 = 28U;
	int32_t x218 = INT32_MIN;
	static int32_t t52 = -26242;

	t52 = (((x217%x218)==x219)+x220);

	if (t52 != -1043888369) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x222 = 783587063U;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	static int32_t t53 = 32207399;

	t53 = (((x221%x222)==x223)+x224);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x225 = 4424U;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 7032381951377750LLU;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t54 = INT32_MIN;

	t54 = (((x225%x226)==x227)+x228);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1;
	int64_t x230 = -28713LL;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = 35U;
	static int32_t t55 = 213449719;

	t55 = (((x229%x230)==x231)+x232);

	if (t55 != 35) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -1;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t56 = -33375805;

	t56 = (((x233%x234)==x235)+x236);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = INT16_MIN;
	static volatile uint8_t x239 = UINT8_MAX;
	uint16_t x240 = UINT16_MAX;

	t57 = (((x237%x238)==x239)+x240);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int8_t x242 = -1;
	static uint8_t x244 = 0U;

	t58 = (((x241%x242)==x243)+x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x245 = 5U;
	uint8_t x246 = 9U;
	uint16_t x248 = UINT16_MAX;

	t59 = (((x245%x246)==x247)+x248);

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	volatile int16_t x251 = 1;
	int64_t x252 = INT64_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (((x249%x250)==x251)+x252);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	int32_t x255 = INT32_MAX;
	int16_t x256 = INT16_MAX;
	volatile int32_t t61 = 7392;

	t61 = (((x253%x254)==x255)+x256);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x257 = 787142116742919728LLU;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = 17396627U;
	static int64_t x260 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = (((x257%x258)==x259)+x260);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = -1;
	uint16_t x263 = 36U;
	uint64_t x264 = 18683LLU;
	uint64_t t63 = 45203075LLU;

	t63 = (((x261%x262)==x263)+x264);

	if (t63 != 18683LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = 3066;
	uint32_t x266 = UINT32_MAX;
	static int32_t x267 = 28;
	static int8_t x268 = INT8_MIN;
	int32_t t64 = -93499719;

	t64 = (((x265%x266)==x267)+x268);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = INT32_MAX;
	uint64_t x271 = UINT64_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t65 = 431478;

	t65 = (((x269%x270)==x271)+x272);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x275 = 2043U;
	int32_t x276 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (((x273%x274)==x275)+x276);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1;
	int16_t x278 = 135;
	int32_t x280 = -9;
	int32_t t67 = -5893057;

	t67 = (((x277%x278)==x279)+x280);

	if (t67 != -9) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x282 = -1;
	volatile uint32_t x283 = 2U;
	int16_t x284 = INT16_MIN;
	int32_t t68 = -131841358;

	t68 = (((x281%x282)==x283)+x284);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x285 = 51365069481585LLU;
	volatile int64_t x287 = -3160590080923298LL;
	int64_t x288 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = (((x285%x286)==x287)+x288);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = INT64_MIN;
	static int32_t x290 = INT32_MIN;
	int32_t x291 = -2;
	int64_t x292 = INT64_MAX;
	volatile int64_t t70 = INT64_MAX;

	t70 = (((x289%x290)==x291)+x292);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = 19602;
	int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MIN;
	static int32_t t71 = -4064;

	t71 = (((x293%x294)==x295)+x296);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = 7LLU;
	int32_t x299 = INT32_MIN;
	int64_t x300 = -9LL;
	int64_t t72 = 1697475LL;

	t72 = (((x297%x298)==x299)+x300);

	if (t72 != -9LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 2U;
	int8_t x302 = INT8_MAX;
	int64_t x303 = -18375010LL;
	int64_t x304 = -1LL;
	volatile int64_t t73 = -7379935LL;

	t73 = (((x301%x302)==x303)+x304);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 26U;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	int64_t t74 = -985137LL;

	t74 = (((x305%x306)==x307)+x308);

	if (t74 != -3934079969260LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x310 = 73U;
	uint8_t x311 = 27U;
	volatile int64_t x312 = -6LL;
	int64_t t75 = 17390440LL;

	t75 = (((x309%x310)==x311)+x312);

	if (t75 != -6LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x314 = -8741;
	static int32_t x315 = -1;
	int16_t x316 = INT16_MIN;

	t76 = (((x313%x314)==x315)+x316);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	static volatile int32_t x320 = 94660;
	int32_t t77 = 338;

	t77 = (((x317%x318)==x319)+x320);

	if (t77 != 94660) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	volatile int32_t t78 = -12092051;

	t78 = (((x321%x322)==x323)+x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x326 = 852U;
	volatile int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t79 = INT32_MIN;

	t79 = (((x325%x326)==x327)+x328);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = -7;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = 1;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

	t80 = (((x329%x330)==x331)+x332);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x334 = -1;
	volatile int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = (((x333%x334)==x335)+x336);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x338 = UINT32_MAX;
	int16_t x339 = INT16_MAX;
	volatile int64_t x340 = -1933374066387303LL;
	volatile int64_t t82 = -1518917448396323910LL;

	t82 = (((x337%x338)==x339)+x340);

	if (t82 != -1933374066387303LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	uint64_t x342 = 282LLU;
	volatile int32_t x343 = -24;
	int64_t x344 = INT64_MIN;

	t83 = (((x341%x342)==x343)+x344);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = 19586U;
	int64_t x347 = -56439107133LL;
	int64_t x348 = 440317211387711LL;
	static volatile int64_t t84 = -52297LL;

	t84 = (((x345%x346)==x347)+x348);

	if (t84 != 440317211387711LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	uint64_t x352 = 2LLU;
	volatile uint64_t t85 = 5064812719362729LLU;

	t85 = (((x349%x350)==x351)+x352);

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 780U;
	uint16_t x354 = 15U;
	int16_t x355 = -202;
	int32_t t86 = 11362;

	t86 = (((x353%x354)==x355)+x356);

	if (t86 != -47) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 129998LLU;
	int32_t x358 = INT32_MIN;
	uint8_t x360 = 32U;
	int32_t t87 = 10658947;

	t87 = (((x357%x358)==x359)+x360);

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x361 = INT64_MAX;
	static int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile int8_t x364 = INT8_MIN;
	int32_t t88 = -29152;

	t88 = (((x361%x362)==x363)+x364);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x365 = INT16_MIN;
	volatile int32_t x366 = 207;
	static int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;

	t89 = (((x365%x366)==x367)+x368);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x369 = 2583155379784LLU;
	static int64_t x370 = 106789LL;
	int8_t x372 = 1;

	t90 = (((x369%x370)==x371)+x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = -15;
	uint64_t x375 = 96618594352LLU;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t91 = 7860;

	t91 = (((x373%x374)==x375)+x376);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	volatile int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;
	int32_t t92 = -152978653;

	t92 = (((x381%x382)==x383)+x384);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x387 = 336U;
	uint16_t x388 = 9U;

	t93 = (((x385%x386)==x387)+x388);

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x389 = 8153U;
	int8_t x390 = INT8_MIN;
	static volatile int64_t x391 = -26634982657236LL;
	int8_t x392 = INT8_MAX;
	volatile int32_t t94 = 601;

	t94 = (((x389%x390)==x391)+x392);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;

	t95 = (((x393%x394)==x395)+x396);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = UINT16_MAX;
	int16_t x399 = 1;
	int8_t x400 = 1;
	volatile int32_t t96 = -4335270;

	t96 = (((x397%x398)==x399)+x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x401 = 15;
	uint32_t x402 = UINT32_MAX;
	static int64_t x403 = INT64_MIN;
	static int64_t x404 = -1LL;
	static volatile int64_t t97 = -11747983LL;

	t97 = (((x401%x402)==x403)+x404);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	static int8_t x407 = -1;
	int32_t x408 = -113;
	volatile int32_t t98 = 105056;

	t98 = (((x405%x406)==x407)+x408);

	if (t98 != -113) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -4;
	static int64_t x410 = INT64_MAX;
	int8_t x411 = 25;
	int8_t x412 = -1;
	volatile int32_t t99 = 54856;

	t99 = (((x409%x410)==x411)+x412);

	if (t99 != -1) { NG(); } else { ; }
	
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

