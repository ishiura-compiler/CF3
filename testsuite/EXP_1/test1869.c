#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x4 = -1;
static uint8_t x6 = 6U;
uint32_t x8 = 2382329U;
uint16_t x15 = 2194U;
static int32_t t3 = -20;
static int16_t x18 = INT16_MIN;
static uint64_t x19 = 6555772529281LLU;
int32_t x24 = INT32_MIN;
static uint8_t x30 = 59U;
static int16_t x34 = INT16_MAX;
volatile int16_t x35 = -1;
static int32_t x38 = INT32_MIN;
uint8_t x41 = 32U;
uint16_t x42 = 7U;
uint64_t x43 = 639802496701616LLU;
static uint8_t x45 = 17U;
int64_t x52 = 14LL;
int16_t x56 = 9;
int8_t x57 = 0;
int8_t x58 = INT8_MIN;
int16_t x60 = -1;
volatile int32_t t14 = 2677;
int32_t x63 = INT32_MIN;
int8_t x68 = INT8_MAX;
int8_t x69 = 11;
uint64_t x70 = 2871LLU;
int64_t x77 = -1LL;
uint8_t x84 = 3U;
volatile int32_t x89 = -1;
uint32_t x90 = 1949462U;
static volatile uint8_t x91 = 112U;
int16_t x95 = -2237;
uint64_t x98 = 1LLU;
uint64_t x108 = UINT64_MAX;
int32_t t27 = 1222153;
static volatile uint8_t x119 = 23U;
int16_t x122 = INT16_MIN;
static uint32_t x123 = UINT32_MAX;
int8_t x132 = -1;
int8_t x134 = -29;
uint32_t x137 = 3840763U;
int64_t x139 = 27730560LL;
static int32_t t34 = 18125;
uint32_t x143 = UINT32_MAX;
volatile int32_t t35 = 427;
int16_t x148 = INT16_MIN;
static int64_t x153 = -102603886297365963LL;
int32_t x158 = INT32_MIN;
volatile int8_t x159 = INT8_MAX;
int16_t x163 = -929;
volatile int32_t t40 = -9421;
int64_t x168 = -7484173LL;
int8_t x173 = -1;
static uint64_t x176 = 143569607006811LLU;
volatile uint32_t x180 = 1524538U;
volatile uint8_t x183 = 65U;
int32_t x194 = -1;
uint16_t x195 = UINT16_MAX;
int8_t x197 = INT8_MAX;
static uint32_t x198 = UINT32_MAX;
static volatile int32_t t49 = 4504;
int64_t x202 = 9831076020LL;
int16_t x204 = -1;
int16_t x207 = INT16_MAX;
uint8_t x208 = UINT8_MAX;
volatile int32_t t52 = -28241103;
uint64_t x220 = 42LLU;
static volatile int32_t x223 = INT32_MAX;
volatile int32_t t55 = -12;
int64_t x237 = INT64_MIN;
int8_t x243 = INT8_MAX;
int32_t t59 = -2;
uint32_t x245 = UINT32_MAX;
static int32_t x246 = 41765591;
uint32_t x257 = UINT32_MAX;
int32_t x258 = 137;
uint64_t x260 = UINT64_MAX;
int16_t x263 = -2;
int32_t x270 = 0;
int64_t x277 = -1LL;
volatile int32_t t66 = 2094390;
volatile uint64_t x282 = 6494172170117LLU;
int8_t x286 = -1;
int64_t x288 = -1LL;
int32_t x294 = 766123;
static uint16_t x305 = 1469U;
int8_t x306 = INT8_MIN;
static volatile uint64_t x316 = 37LLU;
volatile int32_t t74 = -55351;
static int16_t x322 = INT16_MAX;
int32_t t76 = -254456863;
int32_t x326 = -18252;
int16_t x343 = INT16_MIN;
volatile int8_t x362 = INT8_MAX;
static uint32_t x378 = 37U;
uint16_t x387 = UINT16_MAX;
int16_t x388 = -7;
int32_t t92 = -118287762;
volatile int32_t t93 = -1;
static uint16_t x393 = UINT16_MAX;
volatile uint8_t x398 = 7U;
static int8_t x400 = INT8_MIN;
static uint64_t x403 = 15LLU;
uint16_t x404 = UINT16_MAX;
int8_t x409 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MAX;
	static volatile int32_t t0 = 11941;

	t0 = (((x1|x2)+x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int32_t x7 = 30;
	int32_t t1 = -820268698;

	t1 = (((x5|x6)+x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	volatile int16_t x10 = -1;
	int16_t x11 = -1;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 569454844;

	t2 = (((x9|x10)+x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = -1LL;
	static uint16_t x16 = UINT16_MAX;

	t3 = (((x13|x14)+x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x20 = -15;
	volatile int32_t t4 = 227;

	t4 = (((x17|x18)+x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	uint8_t x22 = 1U;
	int64_t x23 = -1LL;
	int32_t t5 = 59929807;

	t5 = (((x21|x22)+x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = INT16_MIN;
	int8_t x28 = -1;
	int32_t t6 = 73637;

	t6 = (((x25|x26)+x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 20U;
	volatile uint8_t x31 = 4U;
	uint16_t x32 = 3277U;
	int32_t t7 = 178395;

	t7 = (((x29|x30)+x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -5;
	int32_t x36 = -1;
	volatile int32_t t8 = -2806;

	t8 = (((x33|x34)+x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int8_t x39 = INT8_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = -34940;

	t9 = (((x37|x38)+x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x44 = 1;
	int32_t t10 = -22904;

	t10 = (((x41|x42)+x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	volatile int64_t x47 = 220728027LL;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 0;

	t11 = (((x45|x46)+x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	int16_t x50 = -1;
	int32_t x51 = INT32_MAX;
	volatile int32_t t12 = -2903;

	t12 = (((x49|x50)+x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	static int8_t x54 = INT8_MAX;
	int16_t x55 = 10036;
	int32_t t13 = 5347157;

	t13 = (((x53|x54)+x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = 3285;

	t14 = (((x57|x58)+x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	static uint64_t x62 = 1120149330607580LLU;
	static volatile int16_t x64 = 15774;
	int32_t t15 = 1;

	t15 = (((x61|x62)+x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -152031206;
	static int8_t x66 = INT8_MAX;
	volatile int8_t x67 = -1;
	static volatile int32_t t16 = 1417;

	t16 = (((x65|x66)+x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = -18;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = 1418;

	t17 = (((x69|x70)+x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 203;
	int8_t x74 = -1;
	int32_t x75 = 2283;
	static int16_t x76 = -411;
	volatile int32_t t18 = 11;

	t18 = (((x73|x74)+x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = -491;
	static int64_t x79 = INT64_MAX;
	static volatile int8_t x80 = -1;
	int32_t t19 = -426202222;

	t19 = (((x77|x78)+x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 47260049LLU;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MAX;
	volatile int32_t t20 = -1;

	t20 = (((x81|x82)+x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -58;
	volatile int64_t x86 = INT64_MIN;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	static volatile int32_t t21 = 6995;

	t21 = (((x85|x86)+x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x92 = INT64_MAX;
	static int32_t t22 = 118458718;

	t22 = (((x89|x90)+x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 206529095U;
	uint32_t x94 = 4367U;
	static uint32_t x96 = 31569317U;
	volatile int32_t t23 = 217545;

	t23 = (((x93|x94)+x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 4031;

	t24 = (((x97|x98)+x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	volatile int8_t x102 = 0;
	int16_t x103 = 4;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -213;

	t25 = (((x101|x102)+x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = -1;
	static volatile int16_t x107 = 6;
	volatile int32_t t26 = 274015;

	t26 = (((x105|x106)+x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	static uint64_t x110 = 2725801367469LLU;
	uint16_t x111 = 1444U;
	int8_t x112 = 4;

	t27 = (((x109|x110)+x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = -69581LL;
	int8_t x116 = -1;
	int32_t t28 = 8;

	t28 = (((x113|x114)+x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = -819893962;
	int32_t x118 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -1489523;

	t29 = (((x117|x118)+x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 460;

	t30 = (((x121|x122)+x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile int8_t x126 = INT8_MAX;
	int16_t x127 = INT16_MIN;
	int64_t x128 = 12720000LL;
	int32_t t31 = -61268995;

	t31 = (((x125|x126)+x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	static volatile int16_t x131 = INT16_MIN;
	static int32_t t32 = 312935808;

	t32 = (((x129|x130)+x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	static uint32_t x135 = 7U;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -11554;

	t33 = (((x133|x134)+x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x138 = 61468370102452471LLU;
	volatile int32_t x140 = -83992783;

	t34 = (((x137|x138)+x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 90U;
	static int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MAX;

	t35 = (((x141|x142)+x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	uint8_t x146 = 2U;
	int16_t x147 = 8863;
	volatile int32_t t36 = 6364178;

	t36 = (((x145|x146)+x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MIN;
	uint16_t x150 = 12341U;
	uint16_t x151 = 491U;
	static uint16_t x152 = UINT16_MAX;
	int32_t t37 = 122230966;

	t37 = (((x149|x150)+x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 2U;
	uint64_t x156 = 0LLU;
	volatile int32_t t38 = 553373;

	t38 = (((x153|x154)+x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int8_t x160 = -22;
	volatile int32_t t39 = 5;

	t39 = (((x157|x158)+x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 17U;
	volatile int32_t x162 = -12755364;
	static int16_t x164 = INT16_MIN;

	t40 = (((x161|x162)+x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	volatile uint64_t x166 = 766582LLU;
	static int64_t x167 = INT64_MIN;
	static int32_t t41 = 24332944;

	t41 = (((x165|x166)+x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MIN;
	uint64_t x170 = 334311LLU;
	uint32_t x171 = 17U;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = -6280;

	t42 = (((x169|x170)+x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -877390505LL;
	int8_t x175 = INT8_MAX;
	int32_t t43 = 40159;

	t43 = (((x173|x174)+x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7010U;
	int8_t x178 = 48;
	int16_t x179 = INT16_MIN;
	static int32_t t44 = 181;

	t44 = (((x177|x178)+x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	volatile uint8_t x184 = 3U;
	int32_t t45 = -536299728;

	t45 = (((x181|x182)+x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x185 = INT32_MIN;
	volatile int16_t x186 = -1;
	int64_t x187 = INT64_MAX;
	uint16_t x188 = 3468U;
	volatile int32_t t46 = 728556;

	t46 = (((x185|x186)+x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	static uint32_t x190 = 50705U;
	int16_t x191 = -5194;
	uint32_t x192 = 15196U;
	int32_t t47 = 23623518;

	t47 = (((x189|x190)+x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x196 = -6729940;
	volatile int32_t t48 = 1601;

	t48 = (((x193|x194)+x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x199 = 62U;
	int16_t x200 = INT16_MIN;

	t49 = (((x197|x198)+x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 106667;
	int16_t x203 = -8187;
	volatile int32_t t50 = -868897;

	t50 = (((x201|x202)+x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 498892381482604LLU;
	static int64_t x206 = -1031095LL;
	volatile int32_t t51 = 28;

	t51 = (((x205|x206)+x207)<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	int64_t x211 = 478414856061125048LL;
	int8_t x212 = INT8_MIN;

	t52 = (((x209|x210)+x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 96304LL;
	uint64_t x218 = 1466LLU;
	int8_t x219 = INT8_MIN;
	volatile int32_t t53 = -7844369;

	t53 = (((x217|x218)+x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 144966461LLU;
	int32_t x222 = INT32_MAX;
	int32_t x224 = -107;
	volatile int32_t t54 = -1150228;

	t54 = (((x221|x222)+x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = 9565LLU;
	volatile int64_t x226 = -1095358042279LL;
	uint64_t x227 = 729770338637LLU;
	int8_t x228 = INT8_MAX;

	t55 = (((x225|x226)+x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x230 = 2195U;
	uint32_t x231 = 23U;
	int64_t x232 = INT64_MAX;
	volatile int32_t t56 = 61;

	t56 = (((x229|x230)+x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = 248921;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t x236 = -1;
	volatile int32_t t57 = 26;

	t57 = (((x233|x234)+x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x238 = 7459373951511LLU;
	int16_t x239 = 1;
	static volatile int32_t x240 = INT32_MIN;
	static volatile int32_t t58 = -6;

	t58 = (((x237|x238)+x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	uint16_t x242 = 6U;
	volatile uint16_t x244 = UINT16_MAX;

	t59 = (((x241|x242)+x243)<=x244);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x247 = 3528630759LLU;
	static uint32_t x248 = 1245277U;
	int32_t t60 = 517867;

	t60 = (((x245|x246)+x247)<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = 13635;
	int16_t x250 = 1683;
	int8_t x251 = INT8_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t61 = 47479297;

	t61 = (((x249|x250)+x251)<=x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x259 = 0U;
	static int32_t t62 = 469732891;

	t62 = (((x257|x258)+x259)<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 843366390LL;
	uint64_t x262 = UINT64_MAX;
	static int32_t x264 = -790874;
	int32_t t63 = 2924;

	t63 = (((x261|x262)+x263)<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	static uint8_t x266 = UINT8_MAX;
	int8_t x267 = 16;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t64 = 57;

	t64 = (((x265|x266)+x267)<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x271 = INT64_MAX;
	static int64_t x272 = -2308379LL;
	static volatile int32_t t65 = 1;

	t65 = (((x269|x270)+x271)<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x278 = 7834U;
	int32_t x279 = 32944581;
	volatile uint16_t x280 = 15U;

	t66 = (((x277|x278)+x279)<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MIN;
	volatile int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t67 = 1;

	t67 = (((x281|x282)+x283)<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	int32_t t68 = 2;

	t68 = (((x285|x286)+x287)<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -151;
	int16_t x290 = INT16_MIN;
	int8_t x291 = 1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t69 = -442636135;

	t69 = (((x289|x290)+x291)<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x293 = 145226482U;
	int64_t x295 = -446499293209LL;
	int32_t x296 = INT32_MIN;
	static int32_t t70 = 2;

	t70 = (((x293|x294)+x295)<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x301 = INT32_MAX;
	int64_t x302 = 4140776LL;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 14004U;
	int32_t t71 = -131051;

	t71 = (((x301|x302)+x303)<=x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x307 = INT32_MAX;
	static volatile uint8_t x308 = 0U;
	volatile int32_t t72 = -64208;

	t72 = (((x305|x306)+x307)<=x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -1;
	volatile int64_t x310 = -1LL;
	volatile int16_t x311 = INT16_MIN;
	static int32_t x312 = INT32_MIN;
	int32_t t73 = -121442;

	t73 = (((x309|x310)+x311)<=x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 1U;
	static int32_t x315 = -384;

	t74 = (((x313|x314)+x315)<=x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	static uint64_t x318 = 3316LLU;
	volatile int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MAX;
	int32_t t75 = -8811481;

	t75 = (((x317|x318)+x319)<=x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = UINT8_MAX;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = -179;

	t76 = (((x321|x322)+x323)<=x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -2;
	int64_t x327 = -1LL;
	int16_t x328 = 92;
	int32_t t77 = -103163;

	t77 = (((x325|x326)+x327)<=x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -91907721;
	static uint8_t x330 = UINT8_MAX;
	int32_t x331 = 86884032;
	int8_t x332 = INT8_MIN;
	volatile int32_t t78 = 192707;

	t78 = (((x329|x330)+x331)<=x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 175;
	static int64_t x334 = -1LL;
	int16_t x335 = 65;
	volatile int64_t x336 = INT64_MAX;
	volatile int32_t t79 = -87490673;

	t79 = (((x333|x334)+x335)<=x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -101LL;
	volatile uint32_t x338 = 4U;
	int8_t x339 = 63;
	int8_t x340 = INT8_MIN;
	volatile int32_t t80 = 2;

	t80 = (((x337|x338)+x339)<=x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x341 = 515006714LLU;
	static int32_t x342 = -1;
	int64_t x344 = -1LL;
	int32_t t81 = -460;

	t81 = (((x341|x342)+x343)<=x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MIN;
	int8_t x347 = -2;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t82 = -1451974;

	t82 = (((x345|x346)+x347)<=x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 7880U;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t83 = 108;

	t83 = (((x349|x350)+x351)<=x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -1;
	volatile uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = -1;
	static int64_t x356 = INT64_MAX;
	int32_t t84 = -64941;

	t84 = (((x353|x354)+x355)<=x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x357 = 973475U;
	int8_t x358 = -1;
	uint8_t x359 = 3U;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t85 = 13453186;

	t85 = (((x357|x358)+x359)<=x360);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int64_t x363 = -625890483914LL;
	int64_t x364 = INT64_MIN;
	static int32_t t86 = 3198;

	t86 = (((x361|x362)+x363)<=x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x365 = -1LL;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	int64_t x368 = -1LL;
	int32_t t87 = -52433890;

	t87 = (((x365|x366)+x367)<=x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = 785304357;
	int8_t x370 = INT8_MAX;
	static int16_t x371 = INT16_MIN;
	uint64_t x372 = 447626LLU;
	int32_t t88 = 1050917252;

	t88 = (((x369|x370)+x371)<=x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = -1;
	static int16_t x374 = -1;
	int8_t x375 = INT8_MAX;
	volatile uint64_t x376 = 8157402891536160LLU;
	volatile int32_t t89 = -95488;

	t89 = (((x373|x374)+x375)<=x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 2334652417958LLU;
	static uint16_t x379 = UINT16_MAX;
	int8_t x380 = -1;
	int32_t t90 = -2746;

	t90 = (((x377|x378)+x379)<=x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 5U;
	volatile int64_t x383 = INT64_MIN;
	uint32_t x384 = 2526398U;
	int32_t t91 = 4;

	t91 = (((x381|x382)+x383)<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	static int16_t x386 = INT16_MIN;

	t92 = (((x385|x386)+x387)<=x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x390 = 924;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -1;

	t93 = (((x389|x390)+x391)<=x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x394 = INT64_MIN;
	static volatile int16_t x395 = INT16_MAX;
	static volatile uint8_t x396 = 0U;
	int32_t t94 = -173;

	t94 = (((x393|x394)+x395)<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 348331375870LLU;
	uint16_t x399 = 2U;
	static int32_t t95 = 30;

	t95 = (((x397|x398)+x399)<=x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = 3174389737739952LL;
	uint64_t x402 = 3LLU;
	volatile int32_t t96 = -5993;

	t96 = (((x401|x402)+x403)<=x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x405 = 16209084;
	uint16_t x406 = UINT16_MAX;
	static volatile uint8_t x407 = 69U;
	uint32_t x408 = 1012U;
	int32_t t97 = -2;

	t97 = (((x405|x406)+x407)<=x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x410 = 33U;
	uint8_t x411 = 25U;
	uint8_t x412 = 2U;
	int32_t t98 = 215031;

	t98 = (((x409|x410)+x411)<=x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = INT32_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = 4570306;
	uint8_t x416 = UINT8_MAX;
	static int32_t t99 = -30755353;

	t99 = (((x413|x414)+x415)<=x416);

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

