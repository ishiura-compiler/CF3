#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 33358LL;
static volatile int64_t x2 = -582965277LL;
volatile uint64_t t0 = 506046040604890LLU;
static int32_t x15 = -1;
int16_t x18 = INT16_MIN;
int16_t x20 = INT16_MIN;
int64_t x27 = -1LL;
volatile int64_t x29 = 325744497665167LL;
volatile uint64_t x31 = 34LLU;
volatile uint64_t x32 = 3868532LLU;
int32_t x39 = INT32_MIN;
int32_t x51 = INT32_MAX;
int32_t x56 = INT32_MAX;
int32_t x60 = -1;
int8_t x68 = INT8_MAX;
int32_t x72 = INT32_MIN;
static int16_t x78 = INT16_MIN;
uint32_t t20 = 41U;
static int64_t x87 = -1LL;
uint32_t x88 = 2U;
int32_t x89 = INT32_MIN;
uint32_t x92 = 17U;
static volatile int8_t x96 = 13;
int64_t t23 = -18722119LL;
static int32_t t24 = -313662542;
int32_t x104 = INT32_MIN;
uint16_t x117 = 1634U;
volatile int32_t t29 = -71755818;
int32_t x125 = 0;
int8_t x139 = -1;
static volatile int64_t t37 = 115LL;
uint16_t x158 = 89U;
volatile uint64_t x170 = 1319056645LLU;
static int16_t x171 = -1;
volatile uint64_t t42 = 177889LLU;
volatile int16_t x185 = 46;
uint16_t x187 = 9222U;
volatile int64_t t46 = 1LL;
int8_t x197 = INT8_MIN;
int64_t x201 = -1LL;
volatile int64_t x203 = -1LL;
static uint8_t x212 = 107U;
static volatile int64_t t50 = 43LL;
static int16_t x214 = INT16_MAX;
int64_t t52 = -115976LL;
uint32_t x224 = UINT32_MAX;
uint32_t x225 = 18183U;
volatile uint64_t t54 = 748362761053LLU;
int8_t x247 = -57;
volatile int64_t t59 = 79LL;
volatile int64_t x253 = INT64_MIN;
int16_t x255 = 29;
uint32_t x261 = 7983U;
int16_t x263 = 1;
volatile uint64_t t63 = UINT64_MAX;
int32_t x268 = -1;
static int64_t x273 = 0LL;
uint32_t x284 = 15U;
static volatile int64_t t68 = -480976LL;
int16_t x285 = -10;
int16_t x292 = INT16_MIN;
uint16_t x308 = UINT16_MAX;
static int64_t t74 = 0LL;
int16_t x309 = 0;
int16_t x313 = 2790;
volatile uint16_t x314 = 135U;
int64_t t77 = -1077110078LL;
int64_t t78 = INT64_MIN;
volatile int64_t x334 = INT64_MIN;
static int32_t x335 = -1;
int8_t x337 = INT8_MIN;
int8_t x339 = INT8_MIN;
uint32_t x345 = UINT32_MAX;
static volatile uint64_t t84 = 143LLU;
int64_t x364 = -1LL;
int64_t t86 = -512264528879LL;
int32_t x371 = -1;
int64_t t88 = 8167128LL;
volatile uint64_t x388 = 16008LLU;
int64_t x389 = INT64_MIN;
static int32_t x396 = -10883785;
static int32_t x399 = INT32_MAX;
volatile int64_t t95 = -160531717455480601LL;
int16_t x403 = INT16_MAX;
int64_t x404 = INT64_MAX;
volatile uint64_t t97 = UINT64_MAX;
volatile int16_t x410 = 273;
static int8_t x413 = INT8_MAX;


void f0(void) {
	volatile uint64_t x3 = 1929LLU;
	static uint16_t x4 = UINT16_MAX;

	t0 = ((x1|x2)|(x3/x4));

	if (t0 != 18446744073126586351LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 0;
	uint16_t x6 = 3980U;
	static int16_t x7 = INT16_MAX;
	uint32_t x8 = 9131265U;
	volatile uint32_t t1 = 1653729U;

	t1 = ((x5|x6)|(x7/x8));

	if (t1 != 3980U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = 0;
	volatile int16_t x11 = INT16_MIN;
	int8_t x12 = 31;
	static volatile int32_t t2 = -3221;

	t2 = ((x9|x10)|(x11/x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 25564720018LLU;
	int64_t x14 = INT64_MIN;
	int16_t x16 = INT16_MAX;
	volatile uint64_t t3 = 0LLU;

	t3 = ((x13|x14)|(x15/x16));

	if (t3 != 9223372062419495826LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int64_t x19 = INT64_MIN;
	volatile int64_t t4 = 123LL;

	t4 = ((x17|x18)|(x19/x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = 704;
	int64_t x24 = -1LL;
	volatile int64_t t5 = 0LL;

	t5 = ((x21|x22)|(x23/x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	static int32_t x26 = INT32_MAX;
	uint8_t x28 = 26U;
	int64_t t6 = -100604259384LL;

	t6 = ((x25|x26)|(x27/x28));

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -255312583;
	volatile uint64_t t7 = 3075885235509LLU;

	t7 = ((x29|x30)|(x31/x32));

	if (t7 != 18446744073673522623LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 0U;
	static volatile int8_t x34 = -1;
	int8_t x35 = -1;
	int64_t x36 = 25LL;
	int64_t t8 = -528393459LL;

	t8 = ((x33|x34)|(x35/x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int32_t x38 = -1;
	int8_t x40 = 16;
	static int32_t t9 = 1515;

	t9 = ((x37|x38)|(x39/x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	uint8_t x42 = 1U;
	static int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41|x42)|(x43/x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile uint64_t x46 = 16048794LLU;
	uint8_t x47 = 121U;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 3181376604847LLU;

	t11 = ((x45|x46)|(x47/x48));

	if (t11 != 18446744073709544090LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	uint64_t x50 = 55471LLU;
	static int16_t x52 = INT16_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x49|x50)|(x51/x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = -1;
	volatile int32_t t13 = -1362330;

	t13 = ((x53|x54)|(x55/x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MAX;
	static uint64_t t14 = UINT64_MAX;

	t14 = ((x57|x58)|(x59/x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -151703468835LL;
	volatile uint16_t x62 = 34U;
	uint32_t x63 = 22U;
	int16_t x64 = 713;
	volatile int64_t t15 = -101458147306LL;

	t15 = ((x61|x62)|(x63/x64));

	if (t15 != -151703468801LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = 31511U;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	static volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x65|x66)|(x67/x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 3966605190192641LL;
	volatile uint32_t x70 = UINT32_MAX;
	volatile int64_t x71 = 8LL;
	int64_t t17 = -4220529855879LL;

	t17 = ((x69|x70)|(x71/x72));

	if (t17 != 3966608456286207LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint32_t x74 = 712556U;
	volatile int8_t x75 = INT8_MAX;
	int64_t x76 = 674803272LL;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x73|x74)|(x75/x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	static uint64_t x79 = UINT64_MAX;
	int64_t x80 = -1135848501985889301LL;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x77|x78)|(x79/x80));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 109U;
	uint16_t x82 = 1407U;
	uint32_t x83 = 86U;
	volatile uint16_t x84 = 38U;

	t20 = ((x81|x82)|(x83/x84));

	if (t20 != 1407U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = 13139228;
	int64_t t21 = -1858659936LL;

	t21 = ((x85|x86)|(x87/x88));

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x90 = 6486497757887LLU;
	uint64_t x91 = UINT64_MAX;
	volatile uint64_t t22 = 180LLU;

	t22 = ((x89|x90)|(x91/x92));

	if (t22 != 18446744072894746559LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	volatile int16_t x94 = INT16_MIN;
	uint8_t x95 = 1U;

	t23 = ((x93|x94)|(x95/x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 1U;
	static int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	static int32_t x100 = -124265;

	t24 = ((x97|x98)|(x99/x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 53461211258229LLU;
	static int16_t x102 = -122;
	int16_t x103 = -1;
	uint64_t t25 = 4365023LLU;

	t25 = ((x101|x102)|(x103/x104));

	if (t25 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = 24U;
	uint32_t x107 = 95U;
	volatile int8_t x108 = INT8_MIN;
	static uint32_t t26 = 3336637U;

	t26 = ((x105|x106)|(x107/x108));

	if (t26 != 4294967192U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MAX;
	int8_t x110 = INT8_MAX;
	static uint16_t x111 = UINT16_MAX;
	uint16_t x112 = 2U;
	int64_t t27 = INT64_MAX;

	t27 = ((x109|x110)|(x111/x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x114 = INT32_MIN;
	static int16_t x115 = -1;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = ((x113|x114)|(x115/x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	static int8_t x119 = 1;
	int32_t x120 = -1;

	t29 = ((x117|x118)|(x119/x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = -1;
	uint16_t x124 = UINT16_MAX;
	int64_t t30 = 3LL;

	t30 = ((x121|x122)|(x123/x124));

	if (t30 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x126 = 15U;
	volatile int8_t x127 = 1;
	int64_t x128 = INT64_MAX;
	int64_t t31 = 250784500939437315LL;

	t31 = ((x125|x126)|(x127/x128));

	if (t31 != 15LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t32 = -10056363382031416LL;

	t32 = ((x129|x130)|(x131/x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	int64_t x136 = -855517149485089611LL;
	int64_t t33 = -97LL;

	t33 = ((x133|x134)|(x135/x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 6339;
	int64_t x138 = INT64_MAX;
	static volatile int8_t x140 = INT8_MIN;
	int64_t t34 = INT64_MAX;

	t34 = ((x137|x138)|(x139/x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -29;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = -1;
	static uint8_t x144 = UINT8_MAX;
	static int32_t t35 = 32089;

	t35 = ((x141|x142)|(x143/x144));

	if (t35 != -29) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile uint8_t x146 = 6U;
	int64_t x147 = INT64_MAX;
	uint32_t x148 = UINT32_MAX;
	int64_t t36 = 102183754LL;

	t36 = ((x145|x146)|(x147/x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 7296U;
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MAX;
	int64_t x152 = -1LL;

	t37 = ((x149|x150)|(x151/x152));

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -4839462000071LL;
	volatile uint16_t x154 = 1U;
	static int64_t x155 = INT64_MAX;
	static volatile int16_t x156 = INT16_MIN;
	int64_t t38 = 14470402568374LL;

	t38 = ((x153|x154)|(x155/x156));

	if (t38 != -4839462000071LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 117U;
	volatile int16_t x159 = INT16_MIN;
	int32_t x160 = -1;
	static int32_t t39 = -2;

	t39 = ((x157|x158)|(x159/x160));

	if (t39 != 32893) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	uint8_t x163 = UINT8_MAX;
	volatile int32_t x164 = -132927286;
	int64_t t40 = INT64_MIN;

	t40 = ((x161|x162)|(x163/x164));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 2U;
	uint64_t x168 = 926479510LLU;
	volatile uint64_t t41 = 1645354268465LLU;

	t41 = ((x165|x166)|(x167/x168));

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 111U;
	int32_t x172 = INT32_MIN;

	t42 = ((x169|x170)|(x171/x172));

	if (t42 != 1319056751LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = UINT64_MAX;
	int64_t x178 = 1847787237487330LL;
	int64_t x179 = INT64_MIN;
	static int64_t x180 = INT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x177|x178)|(x179/x180));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = 59;
	uint32_t x183 = UINT32_MAX;
	volatile uint16_t x184 = 2423U;
	volatile uint32_t t44 = 25U;

	t44 = ((x181|x182)|(x183/x184));

	if (t44 != 1772799U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = -1LL;
	int8_t x188 = -1;
	volatile int64_t t45 = -113762876187999LL;

	t45 = ((x185|x186)|(x187/x188));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = -7;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -31;
	uint32_t x192 = 27365U;

	t46 = ((x189|x190)|(x191/x192));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 498LLU;
	uint64_t x194 = 1040592867LLU;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MIN;
	uint64_t t47 = 6LLU;

	t47 = ((x193|x194)|(x195/x196));

	if (t47 != 18374686480712216563LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x198 = 119U;
	uint16_t x199 = 2U;
	volatile int8_t x200 = 1;
	static int32_t t48 = 61;

	t48 = ((x197|x198)|(x199/x200));

	if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = -2020133;
	volatile uint16_t x204 = 1408U;
	int64_t t49 = -57496297216995LL;

	t49 = ((x201|x202)|(x203/x204));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	uint32_t x210 = 927U;
	int32_t x211 = -915;

	t50 = ((x209|x210)|(x211/x212));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 110U;
	int8_t x215 = INT8_MIN;
	int64_t x216 = -1708562565859LL;
	volatile int64_t t51 = 18101544774136LL;

	t51 = ((x213|x214)|(x215/x216));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 115U;
	uint16_t x218 = 1U;
	int64_t x219 = INT64_MIN;
	volatile uint8_t x220 = UINT8_MAX;

	t52 = ((x217|x218)|(x219/x220));

	if (t52 != -36170086419038221LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	static uint64_t x222 = UINT64_MAX;
	int8_t x223 = INT8_MAX;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x221|x222)|(x223/x224));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = INT64_MIN;
	int16_t x227 = -9;
	uint64_t x228 = UINT64_MAX;

	t54 = ((x225|x226)|(x227/x228));

	if (t54 != 9223372036854793991LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	int16_t x231 = 2;
	int16_t x232 = INT16_MIN;
	int64_t t55 = INT64_MIN;

	t55 = ((x229|x230)|(x231/x232));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 31628004574286LLU;
	volatile uint8_t x234 = UINT8_MAX;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t56 = 36324LLU;

	t56 = ((x233|x234)|(x235/x236));

	if (t56 != 31628004574463LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x237 = 7144U;
	int64_t x238 = INT64_MIN;
	uint16_t x239 = UINT16_MAX;
	uint32_t x240 = 272369U;
	volatile int64_t t57 = 21636179LL;

	t57 = ((x237|x238)|(x239/x240));

	if (t57 != -9223372036854768664LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = 294623U;
	uint64_t x243 = 10LLU;
	static volatile int8_t x244 = -1;
	uint64_t t58 = 661333LLU;

	t58 = ((x241|x242)|(x243/x244));

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = -117;
	int16_t x246 = INT16_MIN;
	static int64_t x248 = INT64_MAX;

	t59 = ((x245|x246)|(x247/x248));

	if (t59 != -117LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	volatile uint8_t x252 = 1U;
	static int32_t t60 = -7;

	t60 = ((x249|x250)|(x251/x252));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = -108;
	int64_t x256 = INT64_MIN;
	int64_t t61 = -12LL;

	t61 = ((x253|x254)|(x255/x256));

	if (t61 != -108LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	static int32_t x258 = INT32_MAX;
	static uint32_t x259 = 111261557U;
	volatile int32_t x260 = INT32_MIN;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x257|x258)|(x259/x260));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x262 = UINT64_MAX;
	int8_t x264 = INT8_MIN;

	t63 = ((x261|x262)|(x263/x264));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x265 = INT64_MIN;
	static volatile uint16_t x266 = UINT16_MAX;
	static volatile uint32_t x267 = UINT32_MAX;
	int64_t t64 = 1379447LL;

	t64 = ((x265|x266)|(x267/x268));

	if (t64 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -782945448;
	int16_t x272 = -1;
	static volatile int32_t t65 = 517960129;

	t65 = ((x269|x270)|(x271/x272));

	if (t65 != -88) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = UINT64_MAX;
	volatile uint16_t x275 = 6U;
	uint16_t x276 = 25U;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x273|x274)|(x275/x276));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -739315748;
	uint32_t x278 = 2825U;
	uint64_t x279 = 4765273689LLU;
	int64_t x280 = INT64_MIN;
	static uint64_t t67 = 3373577LLU;

	t67 = ((x277|x278)|(x279/x280));

	if (t67 != 3555651549LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MIN;
	volatile int16_t x282 = INT16_MIN;
	volatile int8_t x283 = INT8_MIN;

	t68 = ((x281|x282)|(x283/x284));

	if (t68 != -28408LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x286 = -436303903LL;
	int16_t x287 = 919;
	static int16_t x288 = INT16_MAX;
	int64_t t69 = -132314702015344299LL;

	t69 = ((x285|x286)|(x287/x288));

	if (t69 != -9LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 8;
	volatile int32_t x290 = INT32_MIN;
	static uint8_t x291 = 1U;
	int32_t t70 = -99286;

	t70 = ((x289|x290)|(x291/x292));

	if (t70 != -2147483640) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MAX;
	uint64_t x295 = 48697393736898LLU;
	uint32_t x296 = UINT32_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = ((x293|x294)|(x295/x296));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 1U;
	volatile int8_t x299 = -7;
	uint32_t x300 = 3U;
	static uint32_t t72 = 458664576U;

	t72 = ((x297|x298)|(x299/x300));

	if (t72 != 4294956371U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x301 = 0;
	int8_t x302 = -55;
	volatile int16_t x303 = INT16_MAX;
	static uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t73 = 41838934390LLU;

	t73 = ((x301|x302)|(x303/x304));

	if (t73 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	static int32_t x307 = INT32_MIN;

	t74 = ((x305|x306)|(x307/x308));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = -26;
	int8_t x311 = -1;
	static int32_t x312 = -7865;
	volatile int32_t t75 = -1283;

	t75 = ((x309|x310)|(x311/x312));

	if (t75 != -26) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x315 = 904873110U;
	int16_t x316 = INT16_MAX;
	volatile uint32_t t76 = 2150883U;

	t76 = ((x313|x314)|(x315/x316));

	if (t76 != 27647U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	volatile uint16_t x318 = 59U;
	int64_t x319 = 1901002367371300884LL;
	volatile uint8_t x320 = 53U;

	t77 = ((x317|x318)|(x319/x320));

	if (t77 != -19397LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	static uint16_t x330 = 0U;
	static volatile int16_t x331 = 15220;
	int16_t x332 = INT16_MIN;

	t78 = ((x329|x330)|(x331/x332));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	static uint16_t x336 = 93U;
	int64_t t79 = -183LL;

	t79 = ((x333|x334)|(x335/x336));

	if (t79 != -128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = 5287;
	int64_t x340 = -2055381910344765LL;
	volatile int64_t t80 = 88263829LL;

	t80 = ((x337|x338)|(x339/x340));

	if (t80 != -89LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 106U;
	int16_t x342 = -49;
	uint16_t x343 = 0U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t81 = -125805296;

	t81 = ((x341|x342)|(x343/x344));

	if (t81 != -17) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x346 = 1U;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = 3945554220687698LLU;
	uint64_t t82 = 645974128699251089LLU;

	t82 = ((x345|x346)|(x347/x348));

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	static uint64_t x351 = 39LLU;
	int16_t x352 = INT16_MIN;
	uint64_t t83 = 1687193345528837124LLU;

	t83 = ((x349|x350)|(x351/x352));

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = 1;
	int64_t x354 = 12313182731442930LL;
	int8_t x355 = INT8_MAX;
	static uint64_t x356 = 152888LLU;

	t84 = ((x353|x354)|(x355/x356));

	if (t84 != 12313182731442931LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x357 = -1;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MAX;
	static volatile int32_t t85 = -111502;

	t85 = ((x357|x358)|(x359/x360));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -3022927LL;
	int16_t x362 = -1;
	static int8_t x363 = 26;

	t86 = ((x361|x362)|(x363/x364));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -123233464;
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = UINT64_MAX;
	uint16_t x368 = 269U;
	volatile uint64_t t87 = 16758154620763LLU;

	t87 = ((x365|x366)|(x367/x368));

	if (t87 != 18446744073655000939LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = -1;
	volatile int64_t x372 = -1LL;

	t88 = ((x369|x370)|(x371/x372));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = INT32_MIN;
	int32_t x374 = -24602;
	uint16_t x375 = 3U;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t89 = -3234;

	t89 = ((x373|x374)|(x375/x376));

	if (t89 != -24602) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x377 = 101U;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = -1;
	static uint32_t x380 = 4727U;
	int64_t t90 = 1LL;

	t90 = ((x377|x378)|(x379/x380));

	if (t90 != -9223372036853867137LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -33843LL;
	static int16_t x383 = INT16_MIN;
	static int64_t x384 = INT64_MAX;
	static volatile int64_t t91 = 1619185LL;

	t91 = ((x381|x382)|(x383/x384));

	if (t91 != -1075LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = 6U;
	int16_t x387 = -1;
	uint64_t t92 = 1900141007LLU;

	t92 = ((x385|x386)|(x387/x388));

	if (t92 != 18446744073709534734LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x390 = -211037LL;
	volatile int16_t x391 = -17;
	uint8_t x392 = 4U;
	int64_t t93 = -974LL;

	t93 = ((x389|x390)|(x391/x392));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	uint16_t x395 = UINT16_MAX;
	volatile int64_t t94 = 503886LL;

	t94 = ((x393|x394)|(x395/x396));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	int64_t x400 = INT64_MIN;

	t95 = ((x397|x398)|(x399/x400));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	static volatile int64_t t96 = -248578LL;

	t96 = ((x401|x402)|(x403/x404));

	if (t96 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 387542504991978013LLU;
	int8_t x406 = 10;
	uint8_t x407 = 16U;
	static int16_t x408 = -1;

	t97 = ((x405|x406)|(x407/x408));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x409 = INT16_MAX;
	volatile int64_t x411 = 1536878703941LL;
	static int8_t x412 = INT8_MAX;
	volatile int64_t t98 = -1042451262LL;

	t98 = ((x409|x410)|(x411/x412));

	if (t98 != 12101419007LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x414 = INT32_MAX;
	static int64_t x415 = -9489LL;
	uint16_t x416 = 298U;
	volatile int64_t t99 = 13701097667901263LL;

	t99 = ((x413|x414)|(x415/x416));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

