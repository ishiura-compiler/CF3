#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x3 = -1;
static int32_t t0 = -190637;
int32_t x5 = INT32_MIN;
uint64_t t1 = 2755862968210618969LLU;
int16_t x9 = INT16_MAX;
int64_t x15 = -1LL;
int16_t x24 = INT16_MIN;
int32_t x28 = -1;
volatile uint32_t x37 = 13U;
volatile int32_t t9 = 218814160;
int8_t x44 = -1;
volatile int8_t x48 = -1;
int64_t x49 = INT64_MIN;
int64_t t12 = -4437LL;
uint64_t x54 = UINT64_MAX;
int64_t t13 = 11957764681270LL;
int8_t x63 = INT8_MIN;
volatile int32_t t19 = -663768;
int64_t x83 = INT64_MIN;
static int16_t x90 = -30;
int8_t x92 = INT8_MIN;
int16_t x103 = INT16_MAX;
volatile int16_t x104 = -672;
volatile int32_t t25 = 1309716;
static uint64_t t26 = 24291134956179LLU;
int16_t x116 = 97;
uint8_t x119 = 0U;
static int8_t x123 = INT8_MAX;
volatile int64_t x124 = -14177LL;
static volatile int32_t x132 = INT32_MAX;
static int64_t x136 = -1LL;
int64_t t33 = 4533488398876420LL;
volatile int64_t t34 = 8677199LL;
volatile uint64_t x154 = 91LLU;
volatile uint64_t t38 = 197232135561796LLU;
uint16_t x160 = 109U;
volatile uint32_t x161 = 29U;
static int16_t x164 = 3;
static int64_t x166 = -1LL;
uint32_t x168 = 112570U;
uint8_t x171 = UINT8_MAX;
int32_t x172 = -26445109;
volatile int32_t t42 = -2457267;
uint32_t x174 = UINT32_MAX;
uint16_t x175 = 516U;
volatile uint64_t t44 = 6010544481378588LLU;
int8_t x181 = -1;
static int8_t x190 = -1;
volatile int8_t x207 = INT8_MIN;
int8_t x219 = 6;
int32_t t54 = 0;
volatile uint32_t x222 = 6639U;
uint64_t x229 = 219201602434LLU;
int16_t x231 = INT16_MAX;
volatile uint32_t t58 = 22U;
int32_t x240 = INT32_MIN;
volatile int32_t t59 = -38169;
int64_t t60 = 3092440396LL;
int8_t x245 = INT8_MAX;
int64_t x247 = INT64_MIN;
volatile int64_t x251 = -1LL;
static volatile int32_t t63 = 2753204;
volatile int16_t x258 = INT16_MIN;
static volatile uint32_t t65 = 50061246U;
uint8_t x278 = UINT8_MAX;
int32_t t69 = 32658;
static uint64_t x285 = 29LLU;
volatile int8_t x286 = INT8_MIN;
static uint8_t x289 = 122U;
volatile int32_t t72 = 3197;
static int8_t x293 = -1;
int16_t x294 = 0;
static int8_t x297 = -4;
volatile int8_t x302 = -1;
uint8_t x307 = 1U;
volatile int32_t t76 = -1;
static int32_t x319 = -903948009;
int64_t x322 = INT64_MIN;
uint64_t t81 = 0LLU;
int64_t x332 = 136688402439LL;
int8_t x336 = 60;
static int32_t x340 = INT32_MIN;
uint8_t x342 = 0U;
int32_t t85 = 49915;
uint16_t x346 = UINT16_MAX;
int64_t x347 = INT64_MIN;
volatile int64_t t86 = INT64_MIN;
uint64_t t87 = 408642340766LLU;
static int64_t x353 = 2787811LL;
int8_t x355 = -14;
volatile int64_t x358 = -7361307800745LL;
int64_t x361 = 1946393506652508675LL;
static volatile int64_t x363 = INT64_MAX;
uint8_t x367 = 4U;
int32_t t95 = 84664518;
int32_t t96 = 3;
int64_t x392 = INT64_MIN;
static volatile int64_t t97 = 2204285487573310873LL;
int64_t x393 = -1LL;
uint8_t x397 = 13U;
int64_t x400 = INT64_MIN;


void f0(void) {
	int8_t x1 = 3;
	int64_t x2 = INT64_MIN;
	volatile uint16_t x4 = 121U;

	t0 = (((x1==x2)|x3)&x4);

	if (t0 != 121) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = UINT8_MAX;
	uint64_t x7 = 37310428857LLU;
	uint32_t x8 = 41U;

	t1 = (((x5==x6)|x7)&x8);

	if (t1 != 41LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = UINT8_MAX;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 524318060U;
	static uint64_t t2 = 13170922917414LLU;

	t2 = (((x9==x10)|x11)&x12);

	if (t2 != 524318060LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 7371189U;
	int8_t x14 = INT8_MIN;
	static int16_t x16 = 0;
	volatile int64_t t3 = 354564281LL;

	t3 = (((x13==x14)|x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 7;
	int16_t x18 = -1;
	int32_t x19 = 6301;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 6;

	t4 = (((x17==x18)|x19)&x20);

	if (t4 != 6272) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int32_t x22 = INT32_MIN;
	int16_t x23 = -169;
	int32_t t5 = -2463;

	t5 = (((x21==x22)|x23)&x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	volatile int32_t x26 = -299065040;
	static volatile int16_t x27 = -61;
	volatile int32_t t6 = 44;

	t6 = (((x25==x26)|x27)&x28);

	if (t6 != -61) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x30 = 1U;
	int64_t x31 = INT64_MIN;
	static int32_t x32 = INT32_MAX;
	static int64_t t7 = 46846094LL;

	t7 = (((x29==x30)|x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int8_t x34 = -1;
	uint32_t x35 = 768485134U;
	static int8_t x36 = INT8_MAX;
	volatile uint32_t t8 = 103339U;

	t8 = (((x33==x34)|x35)&x36);

	if (t8 != 14U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	int16_t x39 = -1;
	int16_t x40 = INT16_MAX;

	t9 = (((x37==x38)|x39)&x40);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 632507054427782090LLU;
	int8_t x42 = -1;
	int64_t x43 = -39075882206451180LL;
	volatile int64_t t10 = 17204131825842319LL;

	t10 = (((x41==x42)|x43)&x44);

	if (t10 != -39075882206451180LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	uint16_t x47 = 1034U;
	volatile int32_t t11 = 17;

	t11 = (((x45==x46)|x47)&x48);

	if (t11 != 1035) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x50 = UINT8_MAX;
	int64_t x51 = -1017LL;
	static volatile int16_t x52 = INT16_MAX;

	t12 = (((x49==x50)|x51)&x52);

	if (t12 != 31751LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 233;
	int64_t x55 = 1350LL;
	int8_t x56 = INT8_MIN;

	t13 = (((x53==x54)|x55)&x56);

	if (t13 != 1280LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = -1LL;
	uint64_t x59 = UINT64_MAX;
	volatile int8_t x60 = -29;
	volatile uint64_t t14 = 448755777015150LLU;

	t14 = (((x57==x58)|x59)&x60);

	if (t14 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	int64_t x64 = INT64_MAX;
	int64_t t15 = -3265LL;

	t15 = (((x61==x62)|x63)&x64);

	if (t15 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 1U;
	volatile int8_t x66 = -1;
	static int8_t x67 = INT8_MIN;
	static volatile int8_t x68 = INT8_MIN;
	int32_t t16 = 12001;

	t16 = (((x65==x66)|x67)&x68);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 4004352851758LL;
	int16_t x70 = INT16_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	volatile int8_t x72 = 27;
	int32_t t17 = -3834125;

	t17 = (((x69==x70)|x71)&x72);

	if (t17 != 27) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -224129412;
	static int8_t x74 = INT8_MAX;
	int32_t x75 = -1;
	volatile int32_t x76 = INT32_MAX;
	volatile int32_t t18 = INT32_MAX;

	t18 = (((x73==x74)|x75)&x76);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	uint16_t x78 = 208U;
	static int32_t x79 = INT32_MIN;
	uint16_t x80 = 1283U;

	t19 = (((x77==x78)|x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	volatile uint16_t x82 = 0U;
	uint32_t x84 = UINT32_MAX;
	int64_t t20 = -432323LL;

	t20 = (((x81==x82)|x83)&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = 23574U;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	static int32_t t21 = INT32_MIN;

	t21 = (((x85==x86)|x87)&x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	uint64_t x91 = UINT64_MAX;
	uint64_t t22 = 8756LLU;

	t22 = (((x89==x90)|x91)&x92);

	if (t22 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint64_t x94 = 53818481292924581LLU;
	int32_t x95 = -1;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 1465;

	t23 = (((x93==x94)|x95)&x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 4122672274668843423LL;
	int32_t x98 = -361677;
	int16_t x99 = -1;
	int8_t x100 = -1;
	int32_t t24 = 6776165;

	t24 = (((x97==x98)|x99)&x100);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	int64_t x102 = INT64_MIN;

	t25 = (((x101==x102)|x103)&x104);

	if (t25 != 32096) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 22;
	int16_t x106 = INT16_MIN;
	static uint64_t x107 = UINT64_MAX;
	static uint32_t x108 = 92U;

	t26 = (((x105==x106)|x107)&x108);

	if (t26 != 92LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = 2604LLU;
	int8_t x112 = -1;
	uint64_t t27 = 115820469LLU;

	t27 = (((x109==x110)|x111)&x112);

	if (t27 != 2604LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 5U;
	uint64_t x114 = 1747066475799287LLU;
	static volatile int64_t x115 = -1LL;
	int64_t t28 = 2212512377070951035LL;

	t28 = (((x113==x114)|x115)&x116);

	if (t28 != 97LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 14;
	int64_t x118 = INT64_MIN;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = -1LL;

	t29 = (((x117==x118)|x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static uint16_t x122 = 3473U;
	volatile int64_t t30 = -203257503259222LL;

	t30 = (((x121==x122)|x123)&x124);

	if (t30 != 31LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 49;
	static int64_t x126 = -1LL;
	uint32_t x127 = 110443368U;
	volatile int32_t x128 = INT32_MAX;
	uint32_t t31 = 1624223206U;

	t31 = (((x125==x126)|x127)&x128);

	if (t31 != 110443368U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 2U;
	int64_t x131 = INT64_MAX;
	int64_t t32 = -109204567758366325LL;

	t32 = (((x129==x130)|x131)&x132);

	if (t32 != 2147483647LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -217860253247LL;
	static uint8_t x134 = 1U;
	int64_t x135 = 7125195179198LL;

	t33 = (((x133==x134)|x135)&x136);

	if (t33 != 7125195179198LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	int64_t x139 = -25858152593LL;
	volatile uint32_t x140 = 630U;

	t34 = (((x137==x138)|x139)&x140);

	if (t34 != 614LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	static volatile int32_t x143 = 0;
	int32_t x144 = INT32_MIN;
	int32_t t35 = -13;

	t35 = (((x141==x142)|x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = -572495828204LL;
	static int64_t x147 = INT64_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 1085220LLU;

	t36 = (((x145==x146)|x147)&x148);

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 49752857348505629LLU;
	static uint64_t x150 = 16389595404491LLU;
	int64_t x151 = INT64_MIN;
	int64_t x152 = -2154LL;
	volatile int64_t t37 = INT64_MIN;

	t37 = (((x149==x150)|x151)&x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -1LL;
	volatile int32_t x155 = INT32_MIN;
	static volatile uint64_t x156 = 114090LLU;

	t38 = (((x153==x154)|x155)&x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile int16_t x158 = -1003;
	uint8_t x159 = 56U;
	volatile int32_t t39 = -3;

	t39 = (((x157==x158)|x159)&x160);

	if (t39 != 40) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = -2;
	int64_t x163 = INT64_MAX;
	int64_t t40 = 178591120995495LL;

	t40 = (((x161==x162)|x163)&x164);

	if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int8_t x167 = INT8_MAX;
	static uint32_t t41 = 174944U;

	t41 = (((x165==x166)|x167)&x168);

	if (t41 != 58U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 0U;
	volatile int16_t x170 = -1;

	t42 = (((x169==x170)|x171)&x172);

	if (t42 != 203) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	uint8_t x176 = 60U;
	int32_t t43 = -58055425;

	t43 = (((x173==x174)|x175)&x176);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 40272467952LLU;
	uint64_t x180 = UINT64_MAX;

	t44 = (((x177==x178)|x179)&x180);

	if (t44 != 40272467952LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x182 = 35U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = 430008799579775319LL;
	volatile int64_t t45 = 3284735LL;

	t45 = (((x181==x182)|x183)&x184);

	if (t45 != 430008799223349248LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 0U;
	int16_t x186 = INT16_MAX;
	int32_t x187 = 53659;
	int16_t x188 = -1;
	volatile int32_t t46 = 3;

	t46 = (((x185==x186)|x187)&x188);

	if (t46 != 53659) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x191 = 32;
	int8_t x192 = -1;
	volatile int32_t t47 = -18;

	t47 = (((x189==x190)|x191)&x192);

	if (t47 != 33) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 99U;
	int8_t x194 = -1;
	uint64_t x195 = 1977623769787451504LLU;
	volatile uint16_t x196 = 3U;
	uint64_t t48 = 9569306618990795LLU;

	t48 = (((x193==x194)|x195)&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 80U;
	int16_t x198 = -1;
	static volatile uint16_t x199 = 218U;
	static uint16_t x200 = 19U;
	static int32_t t49 = -60;

	t49 = (((x197==x198)|x199)&x200);

	if (t49 != 18) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 1330601624U;
	uint64_t x202 = UINT64_MAX;
	uint64_t x203 = 2248807577825349625LLU;
	uint64_t x204 = 4LLU;
	uint64_t t50 = 118749221803LLU;

	t50 = (((x201==x202)|x203)&x204);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	static uint16_t x208 = 1850U;
	static int32_t t51 = 69;

	t51 = (((x205==x206)|x207)&x208);

	if (t51 != 1792) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MIN;
	volatile int8_t x211 = INT8_MIN;
	static int32_t x212 = INT32_MAX;
	int32_t t52 = 379880750;

	t52 = (((x209==x210)|x211)&x212);

	if (t52 != 2147483520) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 594U;
	int8_t x216 = 1;
	uint32_t t53 = 127824U;

	t53 = (((x213==x214)|x215)&x216);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 325U;
	static int32_t x218 = INT32_MAX;
	static uint16_t x220 = 3254U;

	t54 = (((x217==x218)|x219)&x220);

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	volatile uint64_t x223 = 6914343966LLU;
	int64_t x224 = INT64_MAX;
	uint64_t t55 = 800LLU;

	t55 = (((x221==x222)|x223)&x224);

	if (t55 != 6914343966LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 4970461419961810LLU;
	static int32_t x226 = INT32_MIN;
	int64_t x227 = -398436282003998LL;
	uint64_t x228 = 15848457007LLU;
	uint64_t t56 = 21426502LLU;

	t56 = (((x225==x226)|x227)&x228);

	if (t56 != 15311307042LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 3201122355LLU;
	volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = -2331234;

	t57 = (((x229==x230)|x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	static uint32_t x234 = UINT32_MAX;
	int8_t x235 = -2;
	uint32_t x236 = 1699429U;

	t58 = (((x233==x234)|x235)&x236);

	if (t58 != 1699428U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 127U;
	int8_t x238 = INT8_MAX;
	int8_t x239 = 3;

	t59 = (((x237==x238)|x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -1390;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = -1LL;
	volatile int16_t x244 = INT16_MAX;

	t60 = (((x241==x242)|x243)&x244);

	if (t60 != 32767LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = -3473;
	int32_t x248 = -770796;
	volatile int64_t t61 = INT64_MIN;

	t61 = (((x245==x246)|x247)&x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -48;
	int16_t x250 = INT16_MAX;
	volatile int32_t x252 = INT32_MAX;
	int64_t t62 = 0LL;

	t62 = (((x249==x250)|x251)&x252);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 12;
	int16_t x256 = -1;

	t63 = (((x253==x254)|x255)&x256);

	if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	volatile uint32_t t64 = 1767328U;

	t64 = (((x257==x258)|x259)&x260);

	if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int8_t x262 = 19;
	uint32_t x263 = 152U;
	int8_t x264 = INT8_MIN;

	t65 = (((x261==x262)|x263)&x264);

	if (t65 != 128U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = UINT32_MAX;
	static int8_t x266 = 4;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MIN;
	static volatile int32_t t66 = -158684;

	t66 = (((x265==x266)|x267)&x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = 2;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = INT8_MAX;
	volatile int64_t t67 = 1542147648294766LL;

	t67 = (((x269==x270)|x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x273 = 6367U;
	static int32_t x274 = INT32_MIN;
	uint64_t x275 = 1581197836527385LLU;
	uint16_t x276 = 19U;
	volatile uint64_t t68 = 90059209886LLU;

	t68 = (((x273==x274)|x275)&x276);

	if (t68 != 17LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 2648U;
	int16_t x279 = -1;
	volatile int16_t x280 = -6243;

	t69 = (((x277==x278)|x279)&x280);

	if (t69 != -6243) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = -11283744;
	int8_t x282 = -38;
	volatile uint32_t x283 = 73U;
	int16_t x284 = -1334;
	volatile uint32_t t70 = 545903U;

	t70 = (((x281==x282)|x283)&x284);

	if (t70 != 72U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x287 = UINT64_MAX;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x285==x286)|x287)&x288);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = 241LL;
	static int8_t x291 = 39;
	int8_t x292 = INT8_MAX;

	t72 = (((x289==x290)|x291)&x292);

	if (t72 != 39) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x295 = INT64_MAX;
	static uint16_t x296 = 20798U;
	int64_t t73 = 100LL;

	t73 = (((x293==x294)|x295)&x296);

	if (t73 != 20798LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	uint64_t x299 = 3033008320LLU;
	int64_t x300 = INT64_MAX;
	static uint64_t t74 = 5047287100840781LLU;

	t74 = (((x297==x298)|x299)&x300);

	if (t74 != 3033008320LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int32_t x304 = -179322126;
	int64_t t75 = INT64_MIN;

	t75 = (((x301==x302)|x303)&x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 815344U;
	int64_t x306 = INT64_MAX;
	int16_t x308 = INT16_MIN;

	t76 = (((x305==x306)|x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = 2;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 3089;

	t77 = (((x309==x310)|x311)&x312);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	uint64_t x315 = 0LLU;
	int16_t x316 = 26;
	volatile uint64_t t78 = 3201LLU;

	t78 = (((x313==x314)|x315)&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	static int32_t t79 = 9566877;

	t79 = (((x317==x318)|x319)&x320);

	if (t79 != 1243535639) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = 8;
	uint32_t x323 = 58193750U;
	int32_t x324 = INT32_MIN;
	volatile uint32_t t80 = 39014U;

	t80 = (((x321==x322)|x323)&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -596365547;
	uint64_t x326 = 119411LLU;
	static uint32_t x327 = UINT32_MAX;
	volatile uint64_t x328 = 44LLU;

	t81 = (((x325==x326)|x327)&x328);

	if (t81 != 44LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 1516694U;
	int8_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	volatile int64_t t82 = -1075172LL;

	t82 = (((x329==x330)|x331)&x332);

	if (t82 != 3544416263LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	static uint8_t x334 = 1U;
	uint8_t x335 = 98U;
	volatile int32_t t83 = 706525;

	t83 = (((x333==x334)|x335)&x336);

	if (t83 != 32) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (((x337==x338)|x339)&x340);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -7853781;
	uint16_t x343 = 248U;
	volatile int8_t x344 = -1;

	t85 = (((x341==x342)|x343)&x344);

	if (t85 != 248) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	int64_t x348 = INT64_MIN;

	t86 = (((x345==x346)|x347)&x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x349 = UINT8_MAX;
	static int32_t x350 = INT32_MAX;
	int32_t x351 = INT32_MIN;
	volatile uint64_t x352 = 63742158537516125LLU;

	t87 = (((x349==x350)|x351)&x352);

	if (t87 != 63742157248266240LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x354 = -1;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x353==x354)|x355)&x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t89 = 524;

	t89 = (((x357==x358)|x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	int16_t x364 = -1;
	int64_t t90 = INT64_MAX;

	t90 = (((x361==x362)|x363)&x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -66796089241LL;
	int64_t x366 = -1455835830LL;
	volatile uint64_t x368 = 2LLU;
	uint64_t t91 = 248880521131LLU;

	t91 = (((x365==x366)|x367)&x368);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 573LL;
	int8_t x370 = INT8_MIN;
	volatile int16_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (((x369==x370)|x371)&x372);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	static int16_t x374 = INT16_MIN;
	uint16_t x375 = 2944U;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t93 = 31278;

	t93 = (((x373==x374)|x375)&x376);

	if (t93 != 2945) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	int16_t x378 = -1;
	int64_t x379 = 1612458915460LL;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = 236763820LLU;

	t94 = (((x377==x378)|x379)&x380);

	if (t94 != 1612458915460LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	uint8_t x383 = 0U;
	int32_t x384 = 6;

	t95 = (((x381==x382)|x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 334884993121760581LLU;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 49U;
	int16_t x388 = INT16_MIN;

	t96 = (((x385==x386)|x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile uint8_t x390 = 26U;
	int8_t x391 = 57;

	t97 = (((x389==x390)|x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = 927;
	uint16_t x395 = 22195U;
	int16_t x396 = 12;
	static int32_t t98 = 66612043;

	t98 = (((x393==x394)|x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = -22824;
	int16_t x399 = INT16_MIN;
	int64_t t99 = INT64_MIN;

	t99 = (((x397==x398)|x399)&x400);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

