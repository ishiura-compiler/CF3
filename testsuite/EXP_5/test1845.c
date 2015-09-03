#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x17 = 0U;
uint16_t x20 = 67U;
static int32_t x22 = INT32_MAX;
volatile uint32_t x26 = 49456U;
static volatile int16_t x30 = -1;
uint16_t x44 = 7U;
static volatile int64_t t10 = 16307313908117LL;
uint8_t x45 = UINT8_MAX;
static int32_t x48 = INT32_MIN;
volatile int64_t t11 = -1292415913012151588LL;
int16_t x62 = -3;
volatile int64_t t15 = 14298590LL;
uint64_t x65 = 17851373204470018LLU;
uint64_t x68 = 255LLU;
static uint32_t x72 = UINT32_MAX;
static int64_t x74 = INT64_MAX;
int8_t x79 = INT8_MAX;
uint32_t x84 = UINT32_MAX;
volatile uint32_t t20 = UINT32_MAX;
static uint16_t x92 = 25185U;
int32_t x94 = INT32_MAX;
uint8_t x102 = 2U;
static volatile int64_t t26 = 282901619177215LL;
static int32_t x110 = INT32_MAX;
volatile int16_t x122 = 0;
int32_t x127 = INT32_MAX;
uint32_t t31 = UINT32_MAX;
int8_t x131 = INT8_MIN;
uint32_t x132 = 515728362U;
volatile int8_t x133 = -1;
int64_t x134 = INT64_MAX;
uint16_t x139 = 383U;
int32_t x141 = 40435185;
static uint16_t x147 = UINT16_MAX;
volatile int32_t x150 = -1;
int16_t x155 = INT16_MIN;
static int32_t x156 = INT32_MIN;
uint64_t x164 = 5079042623221505559LLU;
static int64_t x167 = INT64_MIN;
volatile uint32_t t42 = 0U;
static uint64_t t43 = UINT64_MAX;
int16_t x185 = INT16_MIN;
volatile int16_t x188 = -1;
int64_t x189 = INT64_MAX;
static volatile int32_t x190 = INT32_MIN;
int64_t x193 = 927181067949LL;
uint16_t x194 = 32581U;
int64_t x197 = -14801LL;
static int16_t x206 = INT16_MIN;
volatile int16_t x210 = INT16_MIN;
volatile uint16_t x213 = UINT16_MAX;
int8_t x216 = INT8_MIN;
uint8_t x218 = 19U;
static int64_t x221 = -1813186889224347LL;
int64_t t55 = 105235330844LL;
int32_t t58 = 4;
volatile int32_t t59 = 1105;
int32_t x244 = INT32_MIN;
uint64_t t60 = UINT64_MAX;
int64_t x245 = 1LL;
int16_t x246 = INT16_MIN;
int16_t x247 = -365;
static int8_t x250 = 49;
uint32_t x253 = 147134U;
int16_t x254 = -441;
uint8_t x255 = 29U;
volatile int64_t x260 = -1LL;
volatile int64_t t64 = -331296670547LL;
volatile uint64_t x263 = UINT64_MAX;
int32_t x269 = INT32_MAX;
uint16_t x271 = 312U;
volatile int32_t t67 = -393264;
int32_t x285 = -56090;
uint32_t x287 = 22887895U;
uint16_t x293 = UINT16_MAX;
volatile int32_t x295 = -292806993;
volatile int32_t x297 = INT32_MAX;
uint64_t t75 = 3693743642365074LLU;
int8_t x308 = -1;
static uint32_t t76 = UINT32_MAX;
int16_t x312 = INT16_MAX;
uint8_t x318 = UINT8_MAX;
int64_t x321 = -61874019028LL;
int32_t x322 = INT32_MIN;
int8_t x326 = INT8_MIN;
int8_t x331 = 0;
int32_t x339 = -1;
int64_t x341 = INT64_MIN;
int64_t x343 = 61621038484467LL;
static int64_t x346 = INT64_MIN;
static volatile int64_t t86 = 4530658LL;
static uint64_t x351 = UINT64_MAX;
int16_t x353 = INT16_MIN;
static volatile int64_t t88 = -1467808LL;
uint32_t x357 = 5410303U;
static int64_t x366 = INT64_MIN;
int8_t x367 = -1;
uint16_t x369 = UINT16_MAX;
int8_t x370 = INT8_MAX;
static int64_t x378 = -212741845LL;
int64_t t94 = -26LL;
static volatile uint32_t x383 = 791007U;
uint64_t x387 = 56618229781168380LLU;
int64_t x390 = -1LL;
int8_t x392 = -1;
volatile int32_t x397 = INT32_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = 13847879;
	static int8_t x3 = 61;
	uint16_t x4 = UINT16_MAX;
	static volatile int64_t t0 = 2301561LL;

	t0 = (x1|((x2&x3)|x4));

	if (t0 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -929LL;
	int64_t x6 = INT64_MIN;
	static volatile int8_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int64_t t1 = 791250LL;

	t1 = (x5|((x6&x7)|x8));

	if (t1 != -929LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = 9465;
	int16_t x11 = -1;
	volatile int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -229076;

	t2 = (x9|((x10&x11)|x12));

	if (t2 != 9471) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int8_t x14 = -1;
	int16_t x15 = -1;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -29532679;

	t3 = (x13|((x14&x15)|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 5U;
	int64_t x19 = -1LL;
	int64_t t4 = -4301901683525127480LL;

	t4 = (x17|((x18&x19)|x20));

	if (t4 != 71LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = -948LL;
	int64_t t5 = 3093265135LL;

	t5 = (x21|((x22&x23)|x24));

	if (t5 != -948LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	uint8_t x27 = 2U;
	uint64_t x28 = 12967572LLU;
	uint64_t t6 = 1028387LLU;

	t6 = (x25|((x26&x27)|x28));

	if (t6 != 18446744073709543060LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 376191LL;
	int8_t x31 = INT8_MIN;
	static volatile int8_t x32 = INT8_MIN;
	int64_t t7 = -336LL;

	t7 = (x29|((x30&x31)|x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -15125782;
	int8_t x34 = 2;
	volatile uint64_t x35 = UINT64_MAX;
	volatile uint64_t x36 = 548005208769974569LLU;
	static uint64_t t8 = 23819135840924211LLU;

	t8 = (x33|((x34&x35)|x36));

	if (t8 != 18446744073707287531LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 63U;
	int16_t x39 = INT16_MIN;
	static volatile int16_t x40 = -1;
	volatile int32_t t9 = -12124;

	t9 = (x37|((x38&x39)|x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -147LL;
	volatile int16_t x42 = INT16_MIN;
	uint16_t x43 = UINT16_MAX;

	t10 = (x41|((x42&x43)|x44));

	if (t10 != -145LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -2245183485LL;
	static uint8_t x47 = 6U;

	t11 = (x45|((x46&x47)|x48));

	if (t11 != -2147483393LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 273588;
	int64_t x50 = -1LL;
	uint64_t x51 = 18470106571LLU;
	volatile int64_t x52 = -1LL;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50&x51)|x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = 452404;
	volatile int64_t x55 = -625541325090308LL;
	volatile int8_t x56 = -1;
	volatile int64_t t13 = 1358653LL;

	t13 = (x53|((x54&x55)|x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int8_t x58 = -22;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = 14U;
	static volatile int32_t t14 = 1;

	t14 = (x57|((x58&x59)|x60));

	if (t14 != -2147418130) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x63 = 103323U;
	uint8_t x64 = 2U;

	t15 = (x61|((x62&x63)|x64));

	if (t15 != -9223372036854672485LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 23707LL;
	int64_t x67 = INT64_MAX;
	uint64_t t16 = 1047012499494016LLU;

	t16 = (x65|((x66&x67)|x68));

	if (t16 != 17851373204471295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile uint64_t x70 = 139593471966LLU;
	int32_t x71 = INT32_MIN;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = (x69|((x70&x71)|x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x75 = 306375;
	static int8_t x76 = INT8_MIN;
	int64_t t18 = 509596LL;

	t18 = (x73|((x74&x75)|x76));

	if (t18 != -57LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int8_t x78 = -1;
	volatile int64_t x80 = 500LL;
	static volatile uint64_t t19 = UINT64_MAX;

	t19 = (x77|((x78&x79)|x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 0U;
	static int32_t x82 = -2793;
	uint16_t x83 = 589U;

	t20 = (x81|((x82&x83)|x84));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 104;
	volatile int32_t x86 = -1;
	int64_t x87 = INT64_MIN;
	volatile int16_t x88 = INT16_MIN;
	volatile int64_t t21 = 19973588154420LL;

	t21 = (x85|((x86&x87)|x88));

	if (t21 != -32664LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -450295952471510LL;
	volatile uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 126U;
	volatile int64_t t22 = -650635363842262379LL;

	t22 = (x89|((x90&x91)|x92));

	if (t22 != -450295952446849LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 1U;
	int64_t x95 = -1LL;
	static int32_t x96 = INT32_MAX;
	volatile int64_t t23 = -1155941843988421LL;

	t23 = (x93|((x94&x95)|x96));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	volatile int16_t x98 = -6528;
	uint8_t x99 = 18U;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t24 = 1;

	t24 = (x97|((x98&x99)|x100));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 32;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 10U;
	static uint64_t t25 = 1810084701388019689LLU;

	t25 = (x101|((x102&x103)|x104));

	if (t25 != 42LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 4603U;
	int64_t x106 = INT64_MIN;
	int64_t x107 = -1LL;
	volatile int32_t x108 = INT32_MIN;

	t26 = (x105|((x106&x107)|x108));

	if (t26 != -2147479045LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile int32_t x111 = INT32_MIN;
	uint32_t x112 = 1046507174U;
	volatile uint32_t t27 = 31U;

	t27 = (x109|((x110&x111)|x112));

	if (t27 != 4294967206U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 5;
	int32_t x114 = -12994408;
	int64_t x115 = -1LL;
	static int8_t x116 = INT8_MIN;
	int64_t t28 = 22944603LL;

	t28 = (x113|((x114&x115)|x116));

	if (t28 != -99LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = 30841;
	int64_t x119 = INT64_MAX;
	int32_t x120 = -27;
	volatile int64_t t29 = -73984LL;

	t29 = (x117|((x118&x119)|x120));

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x123 = 26;
	int16_t x124 = -1;
	static volatile int32_t t30 = 791;

	t30 = (x121|((x122&x123)|x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	volatile uint32_t x126 = UINT32_MAX;
	int8_t x128 = INT8_MAX;

	t31 = (x125|((x126&x127)|x128));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 312701087U;
	static int8_t x130 = 0;
	static uint32_t t32 = 1448856U;

	t32 = (x129|((x130&x131)|x132));

	if (t32 != 515863551U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x135 = 210484LLU;
	uint16_t x136 = UINT16_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x133|((x134&x135)|x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	uint16_t x140 = 822U;
	volatile int32_t t34 = 0;

	t34 = (x137|((x138&x139)|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x142 = 7379U;
	static int64_t x143 = 7668573160612LL;
	volatile int64_t x144 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x141|((x142&x143)|x144));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MAX;
	uint64_t x148 = 219LLU;
	static volatile uint64_t t36 = 18058226117LLU;

	t36 = (x145|((x146&x147)|x148));

	if (t36 != 2147483647LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	volatile uint32_t x151 = 13646U;
	int8_t x152 = -1;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x149|((x150&x151)|x152));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 54;
	uint8_t x154 = 48U;
	volatile int32_t t38 = -1158231;

	t38 = (x153|((x154&x155)|x156));

	if (t38 != -2147483594) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x158 = -1;
	int64_t x159 = -1LL;
	volatile uint32_t x160 = 1U;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x157|((x158&x159)|x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MIN;
	static volatile uint8_t x163 = UINT8_MAX;
	uint64_t t40 = 2644634LLU;

	t40 = (x161|((x162&x163)|x164));

	if (t40 != 5079042627043590143LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int32_t x166 = INT32_MIN;
	int64_t x168 = INT64_MAX;
	static int64_t t41 = -1653651212LL;

	t41 = (x165|((x166&x167)|x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	uint32_t x170 = 93490521U;
	int8_t x171 = -1;
	int16_t x172 = 593;

	t42 = (x169|((x170&x171)|x172));

	if (t42 != 93491071U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 16536440U;
	int16_t x175 = INT16_MAX;
	uint64_t x176 = UINT64_MAX;

	t43 = (x173|((x174&x175)|x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 8341U;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	int64_t x180 = -1LL;
	volatile int64_t t44 = 821608800LL;

	t44 = (x177|((x178&x179)|x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 7U;
	int64_t x182 = -1LL;
	uint32_t x183 = 6U;
	int32_t x184 = -1;
	volatile int64_t t45 = -5916124391117LL;

	t45 = (x181|((x182&x183)|x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x186 = 5573;
	int32_t x187 = INT32_MAX;
	volatile int32_t t46 = -134;

	t46 = (x185|((x186&x187)|x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	volatile int64_t t47 = 272726296LL;

	t47 = (x189|((x190&x191)|x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x195 = -4;
	int32_t x196 = INT32_MIN;
	volatile int64_t t48 = -96196LL;

	t48 = (x193|((x194&x195)|x196));

	if (t48 != -531857427LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x198 = 24U;
	volatile uint8_t x199 = 106U;
	int64_t x200 = 2LL;
	volatile int64_t t49 = -706983533885075568LL;

	t49 = (x197|((x198&x199)|x200));

	if (t49 != -14801LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -13564;
	volatile int8_t x202 = INT8_MIN;
	int8_t x203 = 8;
	int64_t x204 = -1LL;
	static int64_t t50 = 6417758453LL;

	t50 = (x201|((x202&x203)|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = -1;
	int64_t t51 = 33221LL;

	t51 = (x205|((x206&x207)|x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 1;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;
	int64_t t52 = -1550LL;

	t52 = (x209|((x210&x211)|x212));

	if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 2116LLU;
	volatile int64_t x215 = -1LL;
	uint64_t t53 = UINT64_MAX;

	t53 = (x213|((x214&x215)|x216));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	int8_t x220 = 14;
	int32_t t54 = -24;

	t54 = (x217|((x218&x219)|x220));

	if (t54 != -2147483617) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x222 = INT64_MAX;
	static uint16_t x223 = UINT16_MAX;
	static int8_t x224 = INT8_MIN;

	t55 = (x221|((x222&x223)|x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	volatile int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;
	int32_t x228 = INT32_MAX;
	static int32_t t56 = -337040011;

	t56 = (x225|((x226&x227)|x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	static volatile int64_t x232 = -1LL;
	volatile int64_t t57 = 9LL;

	t57 = (x229|((x230&x231)|x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = 19U;
	int8_t x234 = INT8_MAX;
	static int16_t x235 = -8121;
	int8_t x236 = INT8_MIN;

	t58 = (x233|((x234&x235)|x236));

	if (t58 != -41) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 2;
	int16_t x238 = -649;
	int8_t x239 = -20;
	static uint16_t x240 = 110U;

	t59 = (x237|((x238&x239)|x240));

	if (t59 != -658) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;

	t60 = (x241|((x242&x243)|x244));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x248 = INT8_MIN;
	volatile int64_t t61 = -18589051LL;

	t61 = (x245|((x246&x247)|x248));

	if (t61 != -127LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	static volatile int8_t x251 = INT8_MIN;
	int8_t x252 = 0;
	static int32_t t62 = 492069;

	t62 = (x249|((x250&x251)|x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x256 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (x253|((x254&x255)|x256));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 0U;
	int32_t x258 = INT32_MAX;
	static int64_t x259 = -2778LL;

	t64 = (x257|((x258&x259)|x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 1;
	uint32_t x262 = UINT32_MAX;
	static int8_t x264 = 18;
	uint64_t t65 = 1LLU;

	t65 = (x261|((x262&x263)|x264));

	if (t65 != 4294967295LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	uint64_t x266 = 22436254LLU;
	int64_t x267 = -1LL;
	static volatile int64_t x268 = -9LL;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265|((x266&x267)|x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = -2023;
	int16_t x272 = INT16_MIN;

	t67 = (x269|((x270&x271)|x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int8_t x274 = -1;
	uint32_t x275 = 4U;
	uint32_t x276 = 40U;
	uint64_t t68 = UINT64_MAX;

	t68 = (x273|((x274&x275)|x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = -32062;
	int32_t x278 = -1;
	volatile int8_t x279 = INT8_MAX;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t69 = UINT64_MAX;

	t69 = (x277|((x278&x279)|x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -113;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	int64_t t70 = 292214999LL;

	t70 = (x281|((x282&x283)|x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -1;
	static uint8_t x288 = UINT8_MAX;
	volatile uint32_t t71 = 10686025U;

	t71 = (x285|((x286&x287)|x288));

	if (t71 != 4294917631U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	volatile uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 6429593U;
	static volatile int32_t x292 = INT32_MIN;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x289|((x290&x291)|x292));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -6214;
	uint32_t x296 = 579659U;
	uint32_t t73 = 359017U;

	t73 = (x293|((x294&x295)|x296));

	if (t73 != 4002217983U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = UINT8_MAX;
	int16_t x299 = -14;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = (x297|((x298&x299)|x300));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	static int32_t x302 = 545485920;
	uint64_t x303 = 389099332024966LLU;
	static int64_t x304 = INT64_MAX;

	t75 = (x301|((x302&x303)|x304));

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	volatile int32_t x306 = -1;
	uint32_t x307 = 7U;

	t76 = (x305|((x306&x307)|x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = 2922490625LLU;
	volatile uint64_t t77 = 81409717908286LLU;

	t77 = (x309|((x310&x311)|x312));

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 4U;
	uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = INT64_MAX;
	int64_t t78 = -2972988259833077LL;

	t78 = (x313|((x314&x315)|x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = -17925158409670501LL;
	int32_t x319 = -3357312;
	int16_t x320 = INT16_MIN;
	int64_t t79 = 9489804811659LL;

	t79 = (x317|((x318&x319)|x320));

	if (t79 != -3941LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x323 = INT16_MAX;
	int64_t x324 = 4055459001LL;
	volatile int64_t t80 = 1074668887283LL;

	t80 = (x321|((x322&x323)|x324));

	if (t80 != -60234570307LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = INT32_MAX;
	uint8_t x327 = 15U;
	int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = -21780464;

	t81 = (x325|((x326&x327)|x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 32;

	t82 = (x329|((x330&x331)|x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MIN;
	int64_t x334 = 117086157537738086LL;
	int8_t x335 = -9;
	int8_t x336 = INT8_MIN;
	int64_t t83 = 10614344113394032LL;

	t83 = (x333|((x334&x335)|x336));

	if (t83 != -26LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile int16_t x338 = 28;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = -644395LL;

	t84 = (x337|((x338&x339)|x340));

	if (t84 != -32740LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x342 = -1LL;
	static int64_t x344 = INT64_MAX;
	int64_t t85 = 1087644289350237327LL;

	t85 = (x341|((x342&x343)|x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = -1LL;
	uint8_t x347 = 2U;
	static int64_t x348 = 589911396566LL;

	t86 = (x345|((x346&x347)|x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = 63;
	uint8_t x350 = 108U;
	volatile uint32_t x352 = 504246U;
	uint64_t t87 = 128810147734668LLU;

	t87 = (x349|((x350&x351)|x352));

	if (t87 != 504319LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x354 = 16U;
	int64_t x355 = -1LL;
	uint8_t x356 = 2U;

	t88 = (x353|((x354&x355)|x356));

	if (t88 != -32750LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MIN;
	static int8_t x359 = 2;
	uint8_t x360 = UINT8_MAX;
	volatile int64_t t89 = -59742884LL;

	t89 = (x357|((x358&x359)|x360));

	if (t89 != 5410303LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile int8_t x362 = -1;
	int16_t x363 = 393;
	static int16_t x364 = -1;
	volatile int64_t t90 = 1752000873LL;

	t90 = (x361|((x362&x363)|x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	static int64_t x368 = -21120590139369214LL;
	volatile int64_t t91 = -229042643308LL;

	t91 = (x365|((x366&x367)|x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x371 = -16;
	int8_t x372 = -1;
	int32_t t92 = 43022233;

	t92 = (x369|((x370&x371)|x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	static uint8_t x374 = 4U;
	volatile uint16_t x375 = 39U;
	volatile int16_t x376 = -1;
	int32_t t93 = -177;

	t93 = (x373|((x374&x375)|x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	int64_t x379 = 27353897260479407LL;
	uint8_t x380 = UINT8_MAX;

	t94 = (x377|((x378&x379)|x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint16_t x382 = 11U;
	int8_t x384 = INT8_MAX;
	static uint32_t t95 = UINT32_MAX;

	t95 = (x381|((x382&x383)|x384));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = -9534110790877LL;
	static uint8_t x388 = 2U;
	volatile uint64_t t96 = 1755LLU;

	t96 = (x385|((x386&x387)|x388));

	if (t96 != 56617496393941119LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	static volatile int64_t t97 = 22012LL;

	t97 = (x389|((x390&x391)|x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile int32_t x394 = INT32_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	static int32_t t98 = 9695577;

	t98 = (x393|((x394&x395)|x396));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = -34;
	int8_t x399 = 3;
	int32_t x400 = -13559;
	volatile int32_t t99 = -1054085050;

	t99 = (x397|((x398&x399)|x400));

	if (t99 != -13557) { NG(); } else { ; }
	
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

