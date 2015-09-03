#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 0;
int64_t x11 = INT64_MIN;
int8_t x19 = 5;
uint32_t x20 = 3U;
static volatile uint32_t t4 = 1673077784U;
int8_t x25 = -1;
int32_t x35 = 0;
int8_t x41 = -1;
volatile uint8_t x46 = UINT8_MAX;
uint8_t x53 = 3U;
int8_t x69 = -2;
int8_t x72 = INT8_MAX;
uint32_t x81 = 33U;
uint64_t x83 = 4090673550702LLU;
uint8_t x88 = UINT8_MAX;
volatile int64_t t21 = 376LL;
int64_t x93 = -1LL;
uint32_t t24 = 112448203U;
int8_t x102 = INT8_MAX;
uint64_t x111 = 30LLU;
int32_t t28 = -422458;
static int32_t x118 = INT32_MIN;
volatile uint16_t x121 = 70U;
uint16_t x128 = 972U;
static volatile uint64_t t32 = 648998990354LLU;
static int32_t x134 = INT32_MAX;
uint32_t x142 = 1620681U;
static uint32_t x143 = 3U;
static volatile uint32_t t35 = 29U;
int8_t x146 = -1;
int8_t x150 = INT8_MIN;
volatile int64_t x156 = INT64_MAX;
volatile uint8_t x160 = 7U;
uint8_t x161 = 6U;
static uint32_t x163 = UINT32_MAX;
volatile uint32_t t40 = 19U;
uint32_t x165 = 13434481U;
uint32_t t41 = 536447507U;
int32_t x175 = INT32_MIN;
uint64_t x177 = 1778474806070721LLU;
uint16_t x179 = 10942U;
int64_t x189 = -1LL;
uint8_t x191 = 8U;
int32_t t48 = 109083775;
uint32_t x198 = 142U;
volatile int16_t x201 = 809;
volatile int8_t x204 = -1;
int64_t x211 = INT64_MIN;
uint8_t x227 = 0U;
static int64_t x228 = INT64_MIN;
int64_t t56 = 838483LL;
uint16_t x229 = 10030U;
static uint32_t x237 = UINT32_MAX;
int32_t x239 = INT32_MAX;
int8_t x242 = -1;
volatile uint16_t x252 = UINT16_MAX;
static uint8_t x255 = 5U;
int64_t x263 = -1LL;
static int64_t x269 = -1LL;
static int32_t x275 = INT32_MIN;
volatile int32_t t69 = 19;
int16_t x285 = INT16_MIN;
int16_t x288 = INT16_MIN;
int32_t t71 = 5490379;
int32_t x290 = -35745444;
volatile int8_t x294 = -9;
volatile uint32_t t74 = 598U;
static uint8_t x312 = 5U;
int64_t x315 = -5714LL;
int8_t x316 = INT8_MIN;
int8_t x317 = 22;
static int8_t x322 = INT8_MIN;
int32_t t80 = -168216;
uint16_t x326 = 582U;
static volatile uint8_t x328 = UINT8_MAX;
int32_t x329 = INT32_MAX;
static uint16_t x334 = 0U;
static int32_t x340 = 8221413;
volatile int32_t x345 = INT32_MIN;
uint16_t x346 = 664U;
volatile int8_t x347 = INT8_MAX;
static volatile uint16_t x363 = 37U;
uint64_t x374 = 26857918508101LLU;
int32_t x376 = 21405693;
int16_t x377 = -2;
static int8_t x380 = -1;
volatile uint32_t x382 = 4104U;
static int32_t x383 = INT32_MIN;
int16_t x387 = INT16_MIN;
uint64_t x390 = UINT64_MAX;
uint64_t x398 = UINT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint64_t x2 = 6273251704LLU;
	int32_t x3 = 4851;
	uint16_t x4 = UINT16_MAX;

	t0 = (((x1==x2)+x3)&x4);

	if (t0 != 4851) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 3U;
	uint8_t x6 = UINT8_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 6U;
	int32_t t1 = -793927;

	t1 = (((x5==x6)+x7)&x8);

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint64_t x10 = 30342049LLU;
	uint16_t x12 = 11493U;
	volatile int64_t t2 = -436490492246LL;

	t2 = (((x9==x10)+x11)&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int16_t x14 = -1;
	int8_t x15 = INT8_MAX;
	int32_t x16 = -1;
	int32_t t3 = 29159699;

	t3 = (((x13==x14)+x15)&x16);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static int16_t x18 = INT16_MIN;

	t4 = (((x17==x18)+x19)&x20);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int16_t x22 = 0;
	uint32_t x23 = 134869U;
	static int16_t x24 = INT16_MIN;
	uint32_t t5 = 15321933U;

	t5 = (((x21==x22)+x23)&x24);

	if (t5 != 131072U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = -353154137090672LL;
	static uint8_t x28 = 126U;
	int64_t t6 = 25839274191LL;

	t6 = (((x25==x26)+x27)&x28);

	if (t6 != 16LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x30 = 239719U;
	uint64_t x31 = 26885572072304921LLU;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t7 = 30579919991LLU;

	t7 = (((x29==x30)+x31)&x32);

	if (t7 != 217313561LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	static uint8_t x34 = UINT8_MAX;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = 11130530139966LL;

	t8 = (((x33==x34)+x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint32_t x38 = 37U;
	int16_t x39 = -6534;
	int16_t x40 = INT16_MAX;
	int32_t t9 = -1095;

	t9 = (((x37==x38)+x39)&x40);

	if (t9 != 26234) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	int16_t x43 = 0;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 618279;

	t10 = (((x41==x42)+x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 128U;
	uint64_t t11 = 176176LLU;

	t11 = (((x45==x46)+x47)&x48);

	if (t11 != 128LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 14887179562015LLU;
	int64_t x50 = 1165LL;
	uint64_t x51 = 5LLU;
	static int16_t x52 = INT16_MAX;
	static volatile uint64_t t12 = 32047082LLU;

	t12 = (((x49==x50)+x51)&x52);

	if (t12 != 5LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	volatile int64_t t13 = -16232148765596LL;

	t13 = (((x53==x54)+x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	static uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 37U;

	t14 = (((x57==x58)+x59)&x60);

	if (t14 != 127U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 7;
	volatile uint8_t x62 = UINT8_MAX;
	static int64_t x63 = INT64_MAX;
	uint64_t x64 = 19842307754116LLU;
	uint64_t t15 = 13LLU;

	t15 = (((x61==x62)+x63)&x64);

	if (t15 != 19842307754116LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 6;
	uint8_t x66 = 86U;
	uint64_t x67 = 94LLU;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = 643LLU;

	t16 = (((x65==x66)+x67)&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile int64_t t17 = -407202LL;

	t17 = (((x69==x70)+x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 111174677;

	t18 = (((x73==x74)+x75)&x76);

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 0U;
	uint16_t x78 = 52U;
	uint64_t x79 = 5639LLU;
	uint32_t x80 = UINT32_MAX;
	uint64_t t19 = 7460571866924258159LLU;

	t19 = (((x77==x78)+x79)&x80);

	if (t19 != 5639LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = -4;
	static uint64_t x84 = 5317736357LLU;
	uint64_t t20 = 191LLU;

	t20 = (((x81==x82)+x83)&x84);

	if (t20 != 740562212LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = -28757163443019260LL;

	t21 = (((x85==x86)+x87)&x88);

	if (t21 != 4LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	int16_t x92 = INT16_MAX;
	int64_t t22 = -6119394599216LL;

	t22 = (((x89==x90)+x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 196U;
	uint64_t x95 = 5457706648LLU;
	int32_t x96 = -1;
	uint64_t t23 = 36683297LLU;

	t23 = (((x93==x94)+x95)&x96);

	if (t23 != 5457706648LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	static uint8_t x99 = 9U;
	uint32_t x100 = 178182U;

	t24 = (((x97==x98)+x99)&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 5112401063LLU;
	static int16_t x103 = INT16_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = 916545455214LLU;

	t25 = (((x101==x102)+x103)&x104);

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -150045934LL;
	int8_t x106 = 1;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 194364LLU;
	static uint64_t t26 = 49431180885924LLU;

	t26 = (((x105==x106)+x107)&x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int64_t x110 = -1LL;
	uint16_t x112 = 809U;
	volatile uint64_t t27 = 9286370804644LLU;

	t27 = (((x109==x110)+x111)&x112);

	if (t27 != 9LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 5;
	volatile int16_t x114 = -116;
	volatile int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;

	t28 = (((x113==x114)+x115)&x116);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MIN;
	uint32_t x119 = 3780815U;
	int64_t x120 = 49981880LL;
	volatile int64_t t29 = -1045751451768979024LL;

	t29 = (((x117==x118)+x119)&x120);

	if (t29 != 3711120LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -3118;

	t30 = (((x121==x122)+x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int64_t x126 = INT64_MIN;
	volatile uint64_t x127 = 72220837LLU;
	volatile uint64_t t31 = 721586LLU;

	t31 = (((x125==x126)+x127)&x128);

	if (t31 != 132LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -946485046;
	volatile int8_t x130 = 0;
	volatile uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MIN;

	t32 = (((x129==x130)+x131)&x132);

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 2;
	int16_t x135 = -1;
	int8_t x136 = INT8_MAX;
	int32_t t33 = 7584201;

	t33 = (((x133==x134)+x135)&x136);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -14;
	int64_t x138 = INT64_MAX;
	int16_t x139 = -1;
	int32_t x140 = -1;
	int32_t t34 = 218;

	t34 = (((x137==x138)+x139)&x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	uint16_t x144 = 1U;

	t35 = (((x141==x142)+x143)&x144);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = -14986;
	uint8_t x147 = 27U;
	uint64_t x148 = UINT64_MAX;
	static uint64_t t36 = 1743LLU;

	t36 = (((x145==x146)+x147)&x148);

	if (t36 != 27LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile int32_t x151 = 77440355;
	int64_t x152 = INT64_MAX;
	static int64_t t37 = 3298143367283910LL;

	t37 = (((x149==x150)+x151)&x152);

	if (t37 != 77440355LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	volatile int64_t t38 = INT64_MAX;

	t38 = (((x153==x154)+x155)&x156);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1907U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	int32_t t39 = 91592;

	t39 = (((x157==x158)+x159)&x160);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 24954U;
	int8_t x164 = INT8_MAX;

	t40 = (((x161==x162)+x163)&x164);

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x166 = INT16_MAX;
	uint32_t x167 = 52408U;
	int8_t x168 = INT8_MAX;

	t41 = (((x165==x166)+x167)&x168);

	if (t41 != 56U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	static uint16_t x170 = UINT16_MAX;
	static int16_t x171 = INT16_MIN;
	static volatile uint32_t x172 = 116U;
	uint32_t t42 = 7129089U;

	t42 = (((x169==x170)+x171)&x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	uint32_t x174 = 28126103U;
	int16_t x176 = 2116;
	volatile int32_t t43 = 14;

	t43 = (((x173==x174)+x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = UINT16_MAX;
	uint32_t x180 = UINT32_MAX;
	uint32_t t44 = 44597U;

	t44 = (((x177==x178)+x179)&x180);

	if (t44 != 10942U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = -1;
	uint32_t t45 = UINT32_MAX;

	t45 = (((x181==x182)+x183)&x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int64_t x186 = INT64_MAX;
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	int64_t t46 = INT64_MIN;

	t46 = (((x185==x186)+x187)&x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x190 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 15059702U;

	t47 = (((x189==x190)+x191)&x192);

	if (t47 != 9U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 2U;
	int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;

	t48 = (((x193==x194)+x195)&x196);

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int32_t x199 = INT32_MIN;
	volatile uint64_t x200 = 197299752768658LLU;
	volatile uint64_t t49 = 180843467014158LLU;

	t49 = (((x197==x198)+x199)&x200);

	if (t49 != 197297912676352LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	int32_t t50 = 284;

	t50 = (((x201==x202)+x203)&x204);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 291U;
	static int16_t x206 = 7515;
	int8_t x207 = INT8_MIN;
	int16_t x208 = -51;
	static int32_t t51 = 24976;

	t51 = (((x205==x206)+x207)&x208);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 575;
	int64_t x210 = INT64_MIN;
	int16_t x212 = -51;
	static volatile int64_t t52 = INT64_MIN;

	t52 = (((x209==x210)+x211)&x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	uint64_t x214 = 127608LLU;
	uint64_t x215 = 270480145925245391LLU;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t53 = 14289LLU;

	t53 = (((x213==x214)+x215)&x216);

	if (t53 != 2511LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int8_t x218 = 1;
	volatile int8_t x219 = INT8_MAX;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = 896;

	t54 = (((x217==x218)+x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MAX;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 7LLU;
	static uint64_t t55 = 13811230LLU;

	t55 = (((x221==x222)+x223)&x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;

	t56 = (((x225==x226)+x227)&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = -28947833;
	int32_t x232 = INT32_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (((x229==x230)+x231)&x232);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 533900919LLU;
	static int64_t x234 = INT64_MIN;
	static int16_t x235 = -14377;
	int16_t x236 = INT16_MIN;
	int32_t t58 = 116;

	t58 = (((x233==x234)+x235)&x236);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -176181884;

	t59 = (((x237==x238)+x239)&x240);

	if (t59 != 2147450880) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int8_t x243 = -1;
	volatile int32_t x244 = -104924;
	volatile int32_t t60 = 29;

	t60 = (((x241==x242)+x243)&x244);

	if (t60 != -104924) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	uint8_t x247 = 108U;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t61 = 224618351746743LL;

	t61 = (((x245==x246)+x247)&x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 2LL;
	int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MAX;
	volatile int32_t t62 = 504542;

	t62 = (((x249==x250)+x251)&x252);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = -120LL;

	t63 = (((x253==x254)+x255)&x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -1;
	uint16_t x258 = 56U;
	volatile int32_t x259 = -181757;
	static int16_t x260 = 1;
	static volatile int32_t t64 = 1;

	t64 = (((x257==x258)+x259)&x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint8_t x262 = 23U;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t65 = -184680545564598LL;

	t65 = (((x261==x262)+x263)&x264);

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int16_t x266 = 210;
	static volatile int8_t x267 = 26;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -1821;

	t66 = (((x265==x266)+x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -10;
	uint8_t x271 = 0U;
	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t67 = 55038486383879521LLU;

	t67 = (((x269==x270)+x271)&x272);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 22465677283LLU;
	int64_t x274 = -730047306793323418LL;
	uint64_t x276 = 102315390LLU;
	uint64_t t68 = 67592519641LLU;

	t68 = (((x273==x274)+x275)&x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 37U;
	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = INT8_MAX;
	int8_t x280 = -1;

	t69 = (((x277==x278)+x279)&x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	static volatile int8_t x282 = 0;
	static uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MAX;
	volatile int64_t t70 = 37410LL;

	t70 = (((x281==x282)+x283)&x284);

	if (t70 != 4294967295LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	volatile int32_t x287 = -1;

	t71 = (((x285==x286)+x287)&x288);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int8_t x291 = -1;
	volatile int8_t x292 = -11;
	volatile int32_t t72 = -724;

	t72 = (((x289==x290)+x291)&x292);

	if (t72 != -11) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -175LL;
	uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = INT64_MAX;
	int64_t t73 = -3246553248362563LL;

	t73 = (((x293==x294)+x295)&x296);

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	static int64_t x298 = -5006854715548439LL;
	int8_t x299 = 7;
	volatile uint32_t x300 = 1U;

	t74 = (((x297==x298)+x299)&x300);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	uint8_t x302 = 2U;
	int32_t x303 = INT32_MAX;
	uint8_t x304 = 0U;
	volatile int32_t t75 = 5844;

	t75 = (((x301==x302)+x303)&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = INT8_MAX;
	static int16_t x306 = INT16_MIN;
	static int16_t x307 = INT16_MIN;
	static uint16_t x308 = 857U;
	static int32_t t76 = 7;

	t76 = (((x305==x306)+x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -12;
	static int8_t x310 = -1;
	int64_t x311 = INT64_MAX;
	volatile int64_t t77 = 46016049LL;

	t77 = (((x309==x310)+x311)&x312);

	if (t77 != 5LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	volatile int64_t t78 = 56031LL;

	t78 = (((x313==x314)+x315)&x316);

	if (t78 != -5760LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MAX;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	volatile uint32_t t79 = 225271U;

	t79 = (((x317==x318)+x319)&x320);

	if (t79 != 4294934528U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -233172857;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MAX;

	t80 = (((x321==x322)+x323)&x324);

	if (t80 != 32640) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	volatile int32_t x327 = INT32_MIN;
	volatile int32_t t81 = -14;

	t81 = (((x325==x326)+x327)&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x330 = UINT32_MAX;
	static uint32_t x331 = 459040537U;
	uint16_t x332 = 89U;
	uint32_t t82 = 1U;

	t82 = (((x329==x330)+x331)&x332);

	if (t82 != 25U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x335 = -1;
	uint64_t x336 = 211298448659119LLU;
	static uint64_t t83 = 2674271221LLU;

	t83 = (((x333==x334)+x335)&x336);

	if (t83 != 211298448659119LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int64_t x338 = -1LL;
	uint32_t x339 = 1901U;
	uint32_t t84 = 147728U;

	t84 = (((x337==x338)+x339)&x340);

	if (t84 != 613U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	static uint64_t x342 = UINT64_MAX;
	uint64_t x343 = 11328LLU;
	int16_t x344 = INT16_MIN;
	volatile uint64_t t85 = 190431610522995342LLU;

	t85 = (((x341==x342)+x343)&x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 55013;

	t86 = (((x345==x346)+x347)&x348);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = 7116341761LLU;
	static int64_t x350 = 2447LL;
	static int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	int64_t t87 = -3692057265LL;

	t87 = (((x349==x350)+x351)&x352);

	if (t87 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MAX;
	int8_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (((x353==x354)+x355)&x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 9423U;
	int64_t x358 = -4842052239484LL;
	int8_t x359 = 5;
	volatile uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = -713;

	t89 = (((x357==x358)+x359)&x360);

	if (t89 != 5) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = 249195710LLU;
	int64_t x364 = -1LL;
	volatile int64_t t90 = -2687916506169118LL;

	t90 = (((x361==x362)+x363)&x364);

	if (t90 != 37LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	volatile int8_t x366 = -1;
	int32_t x367 = INT32_MAX;
	int32_t x368 = -1;
	volatile int32_t t91 = INT32_MAX;

	t91 = (((x365==x366)+x367)&x368);

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 12;
	int16_t x370 = INT16_MIN;
	volatile uint32_t x371 = 56094851U;
	uint16_t x372 = 16U;
	static volatile uint32_t t92 = 1U;

	t92 = (((x369==x370)+x371)&x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	volatile int32_t t93 = -1756;

	t93 = (((x373==x374)+x375)&x376);

	if (t93 != 21405568) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 8U;
	int32_t t94 = -9726821;

	t94 = (((x377==x378)+x379)&x380);

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = -4025;
	uint8_t x384 = 0U;
	volatile int32_t t95 = -819131442;

	t95 = (((x381==x382)+x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	uint16_t x388 = UINT16_MAX;
	static int32_t t96 = -18417;

	t96 = (((x385==x386)+x387)&x388);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -13017581783256683LL;
	int64_t x391 = -6677434881859696LL;
	static int16_t x392 = 0;
	volatile int64_t t97 = 6601261442040LL;

	t97 = (((x389==x390)+x391)&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 959U;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile int32_t x396 = 195314;
	int32_t t98 = -1467;

	t98 = (((x393==x394)+x395)&x396);

	if (t98 != 163840) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 2U;
	volatile int64_t x399 = -333553648320264LL;
	uint8_t x400 = 69U;
	int64_t t99 = 123330758766920016LL;

	t99 = (((x397==x398)+x399)&x400);

	if (t99 != 64LL) { NG(); } else { ; }
	
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

