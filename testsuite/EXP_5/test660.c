#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
static int16_t x5 = -1;
int8_t x7 = INT8_MAX;
int8_t x9 = INT8_MAX;
int32_t x10 = -173;
int32_t t2 = 43695968;
static int64_t x17 = -6464LL;
int16_t x20 = INT16_MIN;
int8_t x26 = 1;
int8_t x27 = 7;
int16_t x33 = INT16_MIN;
static int64_t x35 = -1LL;
uint16_t x36 = UINT16_MAX;
uint64_t x37 = 12LLU;
volatile int32_t t13 = 59274057;
static int32_t t14 = -110155358;
static volatile int16_t x72 = -2701;
int32_t t16 = 23339867;
int64_t x84 = INT64_MAX;
volatile int32_t t20 = -451;
uint16_t x92 = 30214U;
int32_t t21 = -13976036;
uint16_t x94 = UINT16_MAX;
static volatile int8_t x95 = INT8_MAX;
int32_t t24 = 1;
int16_t x111 = INT16_MAX;
int16_t x112 = INT16_MIN;
volatile uint16_t x122 = 21U;
static int16_t x127 = -13891;
int32_t t30 = -41962;
int16_t x136 = 118;
int16_t x139 = -1;
static volatile int64_t x141 = -1LL;
volatile int32_t t34 = -9;
int64_t x151 = INT64_MAX;
int16_t x153 = 29;
int32_t x159 = INT32_MAX;
int64_t x160 = INT64_MIN;
int32_t t41 = -5593;
static int32_t x182 = -337476;
volatile int32_t t44 = 20;
int32_t x188 = -1;
int64_t x189 = INT64_MIN;
int32_t x191 = 34149522;
int32_t t46 = 3;
static volatile int32_t x197 = INT32_MIN;
int16_t x201 = -1;
int8_t x202 = INT8_MIN;
static int32_t x205 = -1;
uint64_t x215 = 5754677270LLU;
int32_t x216 = -1;
static uint64_t x219 = 20818257622900LLU;
int32_t t53 = -77;
int8_t x223 = 1;
static uint16_t x230 = 2339U;
int32_t x231 = -195260;
volatile int16_t x237 = INT16_MIN;
uint64_t x239 = 4694579498718751016LLU;
int32_t t58 = -1;
int32_t x242 = 123;
uint8_t x243 = 3U;
int32_t t59 = -981360675;
static int16_t x249 = 7897;
static volatile int64_t x251 = INT64_MIN;
int32_t x262 = 279539;
int64_t x268 = INT64_MIN;
static int32_t t64 = 378428156;
uint8_t x272 = 23U;
int8_t x281 = 1;
int8_t x282 = INT8_MIN;
int32_t x293 = 2264;
int16_t x297 = -1;
static uint8_t x300 = 0U;
volatile int32_t t73 = 362040270;
uint64_t x310 = UINT64_MAX;
uint32_t x314 = 1480974U;
int32_t x315 = -395463844;
int16_t x323 = -7;
static volatile int64_t x324 = INT64_MAX;
volatile int64_t x327 = -1712255941216LL;
uint8_t x328 = UINT8_MAX;
volatile int32_t t78 = 1;
static uint8_t x336 = 1U;
int32_t t79 = -465036;
int32_t x337 = -200711929;
int32_t t81 = 134139300;
int32_t x348 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
int32_t t83 = 232503609;
static int16_t x360 = 6010;
volatile int8_t x362 = INT8_MIN;
int8_t x363 = 1;
static int8_t x368 = INT8_MIN;
int32_t x372 = INT32_MAX;
int16_t x376 = INT16_MIN;
uint8_t x377 = UINT8_MAX;
static int64_t x378 = INT64_MIN;
int32_t x385 = 0;
int32_t t92 = -291254;
int32_t x392 = INT32_MAX;
uint8_t x395 = 32U;
uint64_t x400 = 1879459309089LLU;
volatile int32_t t95 = 4173951;
int8_t x403 = INT8_MIN;
uint64_t x408 = 136297261785667765LLU;
volatile int16_t x415 = INT16_MIN;


void f0(void) {
	static volatile uint16_t x1 = UINT16_MAX;
	static int64_t x3 = INT64_MAX;
	int32_t x4 = -45690;
	int32_t t0 = 662119;

	t0 = (x1<=((x2/x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = -2;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -165;

	t1 = (x5<=((x6/x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = 16597U;
	int8_t x12 = INT8_MIN;

	t2 = (x9<=((x10/x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	volatile int8_t x14 = INT8_MAX;
	volatile int16_t x15 = 490;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 58;

	t3 = (x13<=((x14/x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -2;
	uint16_t x19 = 162U;
	int32_t t4 = 243005219;

	t4 = (x17<=((x18/x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 41U;
	int16_t x24 = -1;
	volatile int32_t t5 = -15271083;

	t5 = (x21<=((x22/x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	uint64_t x28 = UINT64_MAX;
	static volatile int32_t t6 = 1129980;

	t6 = (x25<=((x26/x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -1;
	volatile uint8_t x30 = 0U;
	int16_t x31 = -6;
	uint64_t x32 = 1458117767677521LLU;
	volatile int32_t t7 = 255;

	t7 = (x29<=((x30/x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	volatile int32_t t8 = -199777;

	t8 = (x33<=((x34/x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	static int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 30;

	t9 = (x37<=((x38/x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = UINT16_MAX;
	volatile int64_t x46 = INT64_MIN;
	int8_t x47 = -7;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = 250599;

	t10 = (x45<=((x46/x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t11 = 1;

	t11 = (x49<=((x50/x51)|x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static volatile int32_t x54 = -1;
	volatile int32_t x55 = -1;
	int32_t x56 = -1;
	volatile int32_t t12 = 12;

	t12 = (x53<=((x54/x55)|x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 111U;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 1590;

	t13 = (x57<=((x58/x59)|x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;

	t14 = (x61<=((x62/x63)|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 12946677LL;
	int16_t x66 = 28;
	volatile uint64_t x67 = 189LLU;
	int16_t x68 = INT16_MAX;
	int32_t t15 = -26494374;

	t15 = (x65<=((x66/x67)|x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 1;
	volatile int64_t x70 = -1LL;
	int64_t x71 = -1LL;

	t16 = (x69<=((x70/x71)|x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MIN;
	static int64_t x74 = 14050079313530LL;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 1LLU;
	volatile int32_t t17 = -4712;

	t17 = (x73<=((x74/x75)|x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -441;
	volatile int16_t x78 = -6749;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 11098U;
	static int32_t t18 = 1088752;

	t18 = (x77<=((x78/x79)|x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 792LLU;
	int16_t x82 = -459;
	int8_t x83 = -1;
	volatile int32_t t19 = -101662;

	t19 = (x81<=((x82/x83)|x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -1;
	volatile int64_t x86 = INT64_MAX;
	int64_t x87 = INT64_MIN;
	int8_t x88 = INT8_MIN;

	t20 = (x85<=((x86/x87)|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static int16_t x90 = INT16_MIN;
	volatile int16_t x91 = -1;

	t21 = (x89<=((x90/x91)|x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	static int32_t x96 = INT32_MIN;
	int32_t t22 = -1307;

	t22 = (x93<=((x94/x95)|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 15708U;
	int8_t x99 = INT8_MAX;
	static volatile uint8_t x100 = 12U;
	volatile int32_t t23 = -7795;

	t23 = (x97<=((x98/x99)|x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 1;
	volatile int8_t x102 = -1;
	int8_t x103 = 15;
	int8_t x104 = INT8_MIN;

	t24 = (x101<=((x102/x103)|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = 1295;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 39;
	int32_t t25 = -17819704;

	t25 = (x105<=((x106/x107)|x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x109 = UINT16_MAX;
	uint32_t x110 = 19U;
	static int32_t t26 = 9155326;

	t26 = (x109<=((x110/x111)|x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = INT8_MIN;
	static int64_t x114 = INT64_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int16_t x116 = -1019;
	int32_t t27 = -30;

	t27 = (x113<=((x114/x115)|x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = 5669342987526869LL;
	int16_t x118 = INT16_MIN;
	int8_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	int32_t t28 = -461392086;

	t28 = (x117<=((x118/x119)|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MAX;
	int8_t x123 = 55;
	int64_t x124 = 524111567997433322LL;
	static int32_t t29 = 5761;

	t29 = (x121<=((x122/x123)|x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 1999291U;
	int16_t x128 = INT16_MIN;

	t30 = (x125<=((x126/x127)|x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = -1;
	int64_t x130 = 13820LL;
	int64_t x131 = INT64_MAX;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t31 = 1;

	t31 = (x129<=((x130/x131)|x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -11;
	static uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	volatile int32_t t32 = -295002569;

	t32 = (x133<=((x134/x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = -1LL;
	static uint8_t x138 = UINT8_MAX;
	int8_t x140 = 1;
	int32_t t33 = -5410750;

	t33 = (x137<=((x138/x139)|x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = INT8_MIN;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MIN;

	t34 = (x141<=((x142/x143)|x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	uint64_t x146 = 1236759275342999525LLU;
	static int8_t x147 = INT8_MAX;
	uint16_t x148 = 10U;
	volatile int32_t t35 = -1849;

	t35 = (x145<=((x146/x147)|x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = UINT16_MAX;
	volatile uint16_t x150 = 1U;
	static int64_t x152 = INT64_MIN;
	int32_t t36 = -1;

	t36 = (x149<=((x150/x151)|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -1;
	int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	static volatile int32_t t37 = -1;

	t37 = (x153<=((x154/x155)|x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 11302U;
	int8_t x158 = INT8_MIN;
	static volatile int32_t t38 = 21;

	t38 = (x157<=((x158/x159)|x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x161 = UINT8_MAX;
	int8_t x162 = -3;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t39 = 883;

	t39 = (x161<=((x162/x163)|x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x165 = UINT16_MAX;
	int64_t x166 = -6642LL;
	volatile int8_t x167 = -9;
	volatile uint64_t x168 = 598313011441750LLU;
	int32_t t40 = -9676387;

	t40 = (x165<=((x166/x167)|x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -1LL;
	uint64_t x170 = 63774LLU;
	uint32_t x171 = UINT32_MAX;
	uint8_t x172 = 0U;

	t41 = (x169<=((x170/x171)|x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = INT64_MIN;
	int64_t x174 = -1LL;
	static uint16_t x175 = 8047U;
	int32_t x176 = INT32_MAX;
	int32_t t42 = 14557180;

	t42 = (x173<=((x174/x175)|x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 38U;
	uint64_t x178 = 482090LLU;
	int64_t x179 = 6941947157LL;
	static volatile uint16_t x180 = UINT16_MAX;
	int32_t t43 = -740299911;

	t43 = (x177<=((x178/x179)|x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int8_t x183 = 21;
	static int32_t x184 = INT32_MAX;

	t44 = (x181<=((x182/x183)|x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 0;
	volatile uint32_t x186 = 1510548351U;
	int64_t x187 = INT64_MIN;
	volatile int32_t t45 = 465762;

	t45 = (x185<=((x186/x187)|x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x190 = -1;
	volatile int64_t x192 = INT64_MIN;

	t46 = (x189<=((x190/x191)|x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x193 = UINT16_MAX;
	uint16_t x194 = 3U;
	int32_t x195 = INT32_MAX;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t47 = 61603;

	t47 = (x193<=((x194/x195)|x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MIN;
	static int32_t x199 = -191644231;
	uint16_t x200 = 0U;
	static int32_t t48 = 3758321;

	t48 = (x197<=((x198/x199)|x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MAX;
	volatile int32_t t49 = 0;

	t49 = (x201<=((x202/x203)|x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	int32_t t50 = -51;

	t50 = (x205<=((x206/x207)|x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = -1;
	static uint64_t x210 = 222209817843832237LLU;
	volatile uint32_t x211 = 23U;
	static uint32_t x212 = 141070U;
	static volatile int32_t t51 = 27627920;

	t51 = (x209<=((x210/x211)|x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MAX;
	uint8_t x214 = UINT8_MAX;
	int32_t t52 = 266569221;

	t52 = (x213<=((x214/x215)|x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x217 = UINT16_MAX;
	static int32_t x218 = INT32_MIN;
	int16_t x220 = INT16_MIN;

	t53 = (x217<=((x218/x219)|x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 152U;
	static int32_t x222 = 331462238;
	int16_t x224 = INT16_MIN;
	static int32_t t54 = -15;

	t54 = (x221<=((x222/x223)|x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x225 = -5582095012759762LL;
	uint32_t x226 = 916U;
	uint16_t x227 = UINT16_MAX;
	static volatile int64_t x228 = INT64_MIN;
	int32_t t55 = 9255;

	t55 = (x225<=((x226/x227)|x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x229 = UINT8_MAX;
	volatile int32_t x232 = INT32_MIN;
	int32_t t56 = -64902;

	t56 = (x229<=((x230/x231)|x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 17224U;
	int8_t x234 = -1;
	static uint32_t x235 = 79550U;
	static int64_t x236 = INT64_MAX;
	volatile int32_t t57 = 1035500583;

	t57 = (x233<=((x234/x235)|x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x238 = INT8_MIN;
	int64_t x240 = INT64_MIN;

	t58 = (x237<=((x238/x239)|x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 404266457672LLU;
	static volatile uint16_t x244 = 4832U;

	t59 = (x241<=((x242/x243)|x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = -38422858;
	uint8_t x246 = 7U;
	static int16_t x247 = 4;
	int16_t x248 = -1;
	static volatile int32_t t60 = 906;

	t60 = (x245<=((x246/x247)|x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x250 = INT16_MIN;
	uint16_t x252 = 1U;
	static volatile int32_t t61 = 2045501;

	t61 = (x249<=((x250/x251)|x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	volatile int8_t x254 = 1;
	static int8_t x255 = -2;
	int8_t x256 = -1;
	volatile int32_t t62 = -48;

	t62 = (x253<=((x254/x255)|x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	static int64_t x263 = INT64_MIN;
	static volatile int16_t x264 = INT16_MIN;
	int32_t t63 = -157981584;

	t63 = (x261<=((x262/x263)|x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = 75725;
	int16_t x266 = INT16_MIN;
	int64_t x267 = 1607117450596303LL;

	t64 = (x265<=((x266/x267)|x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = 4;
	int64_t x271 = INT64_MIN;
	int32_t t65 = -78952;

	t65 = (x269<=((x270/x271)|x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = 94594LL;
	volatile uint16_t x275 = 6425U;
	volatile uint8_t x276 = 0U;
	volatile int32_t t66 = 335;

	t66 = (x273<=((x274/x275)|x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = 32560LL;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 187U;
	uint64_t x280 = 3LLU;
	static int32_t t67 = 153009227;

	t67 = (x277<=((x278/x279)|x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x283 = INT8_MIN;
	static int16_t x284 = 0;
	int32_t t68 = -2;

	t68 = (x281<=((x282/x283)|x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x285 = 10258;
	int64_t x286 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 15U;
	int32_t t69 = 35892;

	t69 = (x285<=((x286/x287)|x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x294 = INT32_MAX;
	static int16_t x295 = -1;
	int64_t x296 = INT64_MAX;
	volatile int32_t t70 = 41;

	t70 = (x293<=((x294/x295)|x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x298 = 520U;
	int32_t x299 = 7;
	int32_t t71 = -15813004;

	t71 = (x297<=((x298/x299)|x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -1LL;
	uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 18U;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t72 = 804695227;

	t72 = (x301<=((x302/x303)|x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = INT16_MAX;
	int64_t x306 = INT64_MAX;
	volatile int8_t x307 = -1;
	int8_t x308 = -9;

	t73 = (x305<=((x306/x307)|x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x311 = -27;
	volatile int8_t x312 = INT8_MAX;
	static volatile int32_t t74 = -413;

	t74 = (x309<=((x310/x311)|x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x313 = INT16_MAX;
	int8_t x316 = 4;
	int32_t t75 = -1;

	t75 = (x313<=((x314/x315)|x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -1LL;
	uint64_t x318 = UINT64_MAX;
	static volatile uint8_t x319 = 77U;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t76 = 63573213;

	t76 = (x317<=((x318/x319)|x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = 5U;
	int16_t x322 = INT16_MIN;
	static volatile int32_t t77 = 858;

	t77 = (x321<=((x322/x323)|x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = -1;

	t78 = (x325<=((x326/x327)|x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x333 = INT8_MAX;
	int32_t x334 = -1;
	uint16_t x335 = 65U;

	t79 = (x333<=((x334/x335)|x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x338 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	static uint16_t x340 = 23048U;
	int32_t t80 = -630523;

	t80 = (x337<=((x338/x339)|x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x341 = INT64_MIN;
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = 141545LLU;

	t81 = (x341<=((x342/x343)|x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = UINT16_MAX;
	static int32_t x346 = INT32_MIN;
	int32_t x347 = INT32_MAX;
	volatile int32_t t82 = 3;

	t82 = (x345<=((x346/x347)|x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	int64_t x350 = INT64_MIN;
	static int64_t x352 = INT64_MIN;

	t83 = (x349<=((x350/x351)|x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 714374639U;
	static volatile uint16_t x354 = 2518U;
	static volatile uint16_t x355 = 9246U;
	int64_t x356 = INT64_MAX;
	int32_t t84 = -201;

	t84 = (x353<=((x354/x355)|x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x357 = -208524151348LL;
	uint8_t x358 = 5U;
	volatile int16_t x359 = -1;
	int32_t t85 = -4940857;

	t85 = (x357<=((x358/x359)|x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x361 = 56944U;
	int8_t x364 = -1;
	int32_t t86 = -15592;

	t86 = (x361<=((x362/x363)|x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x365 = 3954978167747805613LLU;
	int16_t x366 = -1;
	static uint16_t x367 = 11U;
	int32_t t87 = -399;

	t87 = (x365<=((x366/x367)|x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x369 = 1U;
	int8_t x370 = -2;
	int32_t x371 = INT32_MAX;
	static volatile int32_t t88 = -26;

	t88 = (x369<=((x370/x371)|x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x373 = -1;
	volatile int8_t x374 = -1;
	int32_t x375 = -3;
	static int32_t t89 = 79761767;

	t89 = (x373<=((x374/x375)|x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x379 = -65089899347212LL;
	int32_t x380 = INT32_MIN;
	int32_t t90 = 5904;

	t90 = (x377<=((x378/x379)|x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x381 = 3;
	int64_t x382 = 26629229251220925LL;
	uint16_t x383 = 505U;
	int32_t x384 = -27234;
	int32_t t91 = 636439893;

	t91 = (x381<=((x382/x383)|x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x386 = -1;
	static int32_t x387 = 3534;
	uint32_t x388 = 13278661U;

	t92 = (x385<=((x386/x387)|x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = INT64_MIN;
	volatile uint64_t x390 = 92104752072988209LLU;
	static int16_t x391 = 5790;
	int32_t t93 = 49;

	t93 = (x389<=((x390/x391)|x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x393 = 211U;
	uint16_t x394 = 37U;
	int32_t x396 = 932848008;
	static volatile int32_t t94 = -15575339;

	t94 = (x393<=((x394/x395)|x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MAX;
	static uint32_t x399 = UINT32_MAX;

	t95 = (x397<=((x398/x399)|x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x401 = INT16_MAX;
	int32_t x402 = 101533;
	volatile int16_t x404 = -44;
	volatile int32_t t96 = 19869;

	t96 = (x401<=((x402/x403)|x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x405 = INT8_MAX;
	uint8_t x406 = 6U;
	static uint32_t x407 = 226U;
	static volatile int32_t t97 = 220487;

	t97 = (x405<=((x406/x407)|x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MIN;
	int64_t x411 = -17280LL;
	int32_t x412 = -6082128;
	volatile int32_t t98 = 414708595;

	t98 = (x409<=((x410/x411)|x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = 26U;
	int32_t x414 = -1;
	volatile int8_t x416 = -1;
	volatile int32_t t99 = 270790579;

	t99 = (x413<=((x414/x415)|x416));

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

