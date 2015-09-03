#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint64_t x3 = UINT64_MAX;
volatile int32_t t0 = -163740179;
int64_t x5 = INT64_MIN;
int32_t x15 = -1;
static int32_t x24 = -14174051;
volatile int32_t t5 = 229285;
uint64_t x26 = UINT64_MAX;
uint8_t x27 = UINT8_MAX;
volatile int32_t t6 = 1736;
static int32_t t7 = 103452366;
int8_t x34 = 2;
int32_t t9 = -15509912;
int16_t x42 = 197;
int16_t x51 = -1;
volatile uint32_t x53 = 788894095U;
volatile int64_t x57 = INT64_MIN;
int32_t x84 = INT32_MIN;
int16_t x88 = INT16_MIN;
static int8_t x90 = INT8_MAX;
uint64_t x92 = 34791LLU;
uint16_t x102 = UINT16_MAX;
volatile int16_t x104 = INT16_MIN;
volatile int32_t t25 = 1;
uint16_t x108 = 17513U;
uint16_t x111 = UINT16_MAX;
int16_t x113 = INT16_MAX;
int8_t x120 = -1;
uint16_t x121 = UINT16_MAX;
int32_t x122 = -205667723;
int8_t x123 = INT8_MIN;
uint8_t x127 = 50U;
uint64_t x128 = 108347146634420000LLU;
uint8_t x138 = UINT8_MAX;
int8_t x147 = INT8_MAX;
volatile int32_t t36 = -1;
uint64_t x160 = 14088595LLU;
int32_t x161 = INT32_MAX;
int32_t x171 = 174423;
volatile int16_t x177 = -25;
static int32_t x187 = -1;
int64_t x192 = INT64_MAX;
int8_t x204 = INT8_MIN;
volatile int32_t t49 = -1850;
int16_t x208 = -1;
volatile int32_t t50 = -4034;
static int64_t x215 = -226130LL;
volatile uint32_t x216 = UINT32_MAX;
int32_t t55 = -1;
static int64_t x230 = 2971899663LL;
volatile uint16_t x233 = UINT16_MAX;
static int32_t x234 = -4590526;
volatile int64_t x242 = -751724512904455LL;
int32_t t59 = -49718126;
int16_t x253 = INT16_MIN;
int64_t x257 = 928530005713LL;
volatile int64_t x266 = 613LL;
uint64_t x267 = UINT64_MAX;
static int16_t x273 = -151;
static int64_t x274 = INT64_MIN;
int64_t x278 = INT64_MAX;
volatile uint32_t x287 = 30742U;
int32_t t69 = -947698;
volatile int64_t x291 = -1LL;
uint64_t x295 = 7808371079362507LLU;
int32_t x308 = INT32_MIN;
volatile int16_t x311 = 3033;
volatile uint8_t x312 = 102U;
int32_t x319 = 80;
int64_t x321 = -25784769026308476LL;
int32_t x322 = -1;
int32_t t78 = -2;
int32_t x333 = -2012;
int32_t t83 = 2196100;
volatile uint8_t x349 = 26U;
int64_t x356 = INT64_MAX;
volatile int32_t t86 = -426864803;
volatile int32_t t89 = 7448;
int16_t x373 = INT16_MIN;
int16_t x381 = INT16_MAX;
volatile uint32_t x384 = UINT32_MAX;
int64_t x387 = -44657827337837772LL;
int32_t t94 = -555731;
int32_t x389 = INT32_MAX;
int64_t x396 = INT64_MIN;
int32_t t98 = 13;
uint64_t x405 = UINT64_MAX;
static volatile int64_t x407 = INT64_MIN;


void f0(void) {
	uint64_t x1 = 4599967LLU;
	int64_t x4 = 4418LL;

	t0 = ((x1==x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 7606;

	t1 = ((x5==x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 2055520U;
	volatile int32_t t2 = -832306;

	t2 = ((x9==x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int8_t x14 = 27;
	volatile uint8_t x16 = 11U;
	int32_t t3 = -15816246;

	t3 = ((x13==x14)==(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int8_t x18 = 38;
	uint64_t x19 = 4337546121441748795LLU;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 894;

	t4 = ((x17==x18)==(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static int32_t x22 = -51;
	int32_t x23 = -1;

	t5 = ((x21==x22)==(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int64_t x28 = 62381641LL;

	t6 = ((x25==x26)==(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	volatile int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 945U;

	t7 = ((x29==x30)==(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 40882101U;
	uint32_t x35 = 118U;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 21;

	t8 = ((x33==x34)==(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	volatile int32_t x38 = INT32_MIN;
	uint16_t x39 = 26379U;
	static uint8_t x40 = UINT8_MAX;

	t9 = ((x37==x38)==(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 617637393853LLU;
	int64_t x43 = INT64_MIN;
	int32_t x44 = -565244;
	int32_t t10 = 0;

	t10 = ((x41==x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -8100047958197229LL;
	uint16_t x46 = UINT16_MAX;
	volatile int32_t x47 = INT32_MAX;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = -4010;

	t11 = ((x45==x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = -1;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -36205249;

	t12 = ((x49==x50)==(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 31969886LLU;
	uint16_t x55 = 3U;
	volatile uint32_t x56 = 31469U;
	volatile int32_t t13 = -1984;

	t13 = ((x53==x54)==(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -2185148;
	int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;
	static int32_t t14 = -1;

	t14 = ((x57==x58)==(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -18;
	static uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1LL;
	uint32_t x64 = 160U;
	static volatile int32_t t15 = 358487;

	t15 = ((x61==x62)==(x63/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = -1LL;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -3;

	t16 = ((x65==x66)==(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1016408797930529LLU;
	uint8_t x70 = 81U;
	int64_t x71 = -1LL;
	int64_t x72 = INT64_MAX;
	static volatile int32_t t17 = 157;

	t17 = ((x69==x70)==(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	volatile int32_t x74 = -1;
	uint16_t x75 = 5U;
	static int32_t x76 = -3649;
	int32_t t18 = -559450502;

	t18 = ((x73==x74)==(x75/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 1231;
	static int32_t x78 = -11744010;
	int32_t x79 = 6327786;
	int16_t x80 = INT16_MAX;
	int32_t t19 = 882;

	t19 = ((x77==x78)==(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	static int8_t x82 = 1;
	static int32_t x83 = INT32_MIN;
	static volatile int32_t t20 = 509;

	t20 = ((x81==x82)==(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MAX;
	static int32_t x87 = -144;
	static volatile int32_t t21 = 0;

	t21 = ((x85==x86)==(x87/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint64_t x91 = UINT64_MAX;
	static volatile int32_t t22 = 0;

	t22 = ((x89==x90)==(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -44;
	volatile int16_t x94 = 828;
	int8_t x95 = 0;
	int64_t x96 = -1LL;
	volatile int32_t t23 = -158;

	t23 = ((x93==x94)==(x95/x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile uint32_t x98 = 480021045U;
	int32_t x99 = -438811;
	uint16_t x100 = 523U;
	volatile int32_t t24 = -6;

	t24 = ((x97==x98)==(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	static volatile int32_t x103 = -1;

	t25 = ((x101==x102)==(x103/x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	volatile int32_t x106 = INT32_MAX;
	int32_t x107 = INT32_MAX;
	static volatile int32_t t26 = -317;

	t26 = ((x105==x106)==(x107/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	int16_t x110 = -4;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -62833;

	t27 = ((x109==x110)==(x111/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x114 = INT64_MIN;
	uint64_t x115 = 210143LLU;
	volatile int16_t x116 = 2;
	int32_t t28 = -17;

	t28 = ((x113==x114)==(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MIN;
	static int64_t x119 = -13603381259LL;
	volatile int32_t t29 = 50452;

	t29 = ((x117==x118)==(x119/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x124 = 5991U;
	volatile int32_t t30 = 1;

	t30 = ((x121==x122)==(x123/x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	volatile int32_t t31 = 288;

	t31 = ((x125==x126)==(x127/x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 22LL;
	static int32_t x130 = INT32_MIN;
	static int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	int32_t t32 = -167438;

	t32 = ((x129==x130)==(x131/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 100553746U;
	int32_t t33 = -858102;

	t33 = ((x133==x134)==(x135/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x137 = INT16_MAX;
	uint16_t x139 = 2571U;
	int16_t x140 = INT16_MIN;
	int32_t t34 = 12402;

	t34 = ((x137==x138)==(x139/x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint16_t x142 = 2U;
	int64_t x143 = -320175LL;
	uint64_t x144 = UINT64_MAX;
	static int32_t t35 = -106819394;

	t35 = ((x141==x142)==(x143/x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	int16_t x146 = -1;
	static volatile int64_t x148 = INT64_MIN;

	t36 = ((x145==x146)==(x147/x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MAX;
	uint8_t x151 = 102U;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 0;

	t37 = ((x149==x150)==(x151/x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = 1298460041626079453LL;
	uint16_t x156 = 3712U;
	static int32_t t38 = 367677621;

	t38 = ((x153==x154)==(x155/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	uint16_t x158 = 23U;
	volatile uint16_t x159 = 1U;
	int32_t t39 = -61;

	t39 = ((x157==x158)==(x159/x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	uint64_t x163 = 39521162591LLU;
	volatile int8_t x164 = INT8_MIN;
	int32_t t40 = -2;

	t40 = ((x161==x162)==(x163/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = 0;
	int8_t x166 = -1;
	int32_t x167 = -1;
	uint16_t x168 = 36U;
	volatile int32_t t41 = -13;

	t41 = ((x165==x166)==(x167/x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint32_t x170 = 6251270U;
	int32_t x172 = -1;
	int32_t t42 = -8123;

	t42 = ((x169==x170)==(x171/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static uint8_t x174 = 85U;
	uint32_t x175 = 56707U;
	static int32_t x176 = INT32_MIN;
	int32_t t43 = 50;

	t43 = ((x173==x174)==(x175/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -425;
	uint16_t x179 = UINT16_MAX;
	static int16_t x180 = -1;
	volatile int32_t t44 = -2;

	t44 = ((x177==x178)==(x179/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = -1;
	static int16_t x183 = -249;
	int64_t x184 = INT64_MAX;
	volatile int32_t t45 = -4;

	t45 = ((x181==x182)==(x183/x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	static uint16_t x188 = 396U;
	static volatile int32_t t46 = -2;

	t46 = ((x185==x186)==(x187/x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x189 = 98U;
	volatile int16_t x190 = -14900;
	int8_t x191 = -1;
	volatile int32_t t47 = 14;

	t47 = ((x189==x190)==(x191/x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1;
	int16_t x194 = INT16_MAX;
	static uint16_t x195 = 1U;
	int16_t x196 = -1481;
	static int32_t t48 = 24;

	t48 = ((x193==x194)==(x195/x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x201 = 10964530598LL;
	int64_t x202 = -14879102246LL;
	int16_t x203 = INT16_MAX;

	t49 = ((x201==x202)==(x203/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = UINT8_MAX;

	t50 = ((x205==x206)==(x207/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 4801U;
	volatile int64_t x210 = 592827444110LL;
	uint64_t x211 = 56125122LLU;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = -53;

	t51 = ((x209==x210)==(x211/x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	uint32_t x214 = UINT32_MAX;
	int32_t t52 = 0;

	t52 = ((x213==x214)==(x215/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	volatile uint64_t x218 = 64081178888607LLU;
	int64_t x219 = 481798221304790048LL;
	int64_t x220 = -30958LL;
	int32_t t53 = -708744;

	t53 = ((x217==x218)==(x219/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	int32_t x222 = INT32_MAX;
	int32_t x223 = -1;
	int16_t x224 = -2673;
	volatile int32_t t54 = -3974;

	t54 = ((x221==x222)==(x223/x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = INT64_MIN;
	volatile int8_t x226 = INT8_MIN;
	int32_t x227 = 6296;
	uint32_t x228 = UINT32_MAX;

	t55 = ((x225==x226)==(x227/x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = -1LL;
	volatile uint64_t x231 = 436193751LLU;
	static int8_t x232 = INT8_MIN;
	static int32_t t56 = -1;

	t56 = ((x229==x230)==(x231/x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x235 = -1;
	int8_t x236 = INT8_MAX;
	volatile int32_t t57 = 17003;

	t57 = ((x233==x234)==(x235/x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = 2;
	uint64_t x239 = 73145LLU;
	static int16_t x240 = INT16_MIN;
	int32_t t58 = 6394220;

	t58 = ((x237==x238)==(x239/x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = 12;
	int16_t x243 = -1;
	uint8_t x244 = 82U;

	t59 = ((x241==x242)==(x243/x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -66048504;
	int64_t x246 = -306199685382LL;
	volatile int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	volatile int32_t t60 = 2656988;

	t60 = ((x245==x246)==(x247/x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 13U;
	int8_t x250 = INT8_MAX;
	static volatile int32_t x251 = -1;
	uint16_t x252 = 74U;
	volatile int32_t t61 = -24;

	t61 = ((x249==x250)==(x251/x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = 11877229443LL;
	static int64_t x256 = -1LL;
	volatile int32_t t62 = -1450368;

	t62 = ((x253==x254)==(x255/x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x258 = -101879915205LL;
	uint64_t x259 = UINT64_MAX;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t63 = -1753954;

	t63 = ((x257==x258)==(x259/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -1;
	volatile int8_t x262 = 3;
	uint64_t x263 = 98308925842516LLU;
	int64_t x264 = 6780535283LL;
	volatile int32_t t64 = 130888208;

	t64 = ((x261==x262)==(x263/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x265 = 258957923325LL;
	uint32_t x268 = 3370639U;
	int32_t t65 = 0;

	t65 = ((x265==x266)==(x267/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x269 = -2;
	int16_t x270 = -1;
	static uint64_t x271 = 27752786358070LLU;
	uint64_t x272 = 801578113LLU;
	int32_t t66 = 877433550;

	t66 = ((x269==x270)==(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x275 = 31494777278708LLU;
	uint64_t x276 = 566468786455524416LLU;
	int32_t t67 = -13599463;

	t67 = ((x273==x274)==(x275/x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = UINT64_MAX;
	static int16_t x279 = -1;
	static uint16_t x280 = 7924U;
	volatile int32_t t68 = -10;

	t68 = ((x277==x278)==(x279/x280));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 345786U;
	uint16_t x286 = 4533U;
	int8_t x288 = INT8_MAX;

	t69 = ((x285==x286)==(x287/x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = 158611912;
	int32_t x290 = INT32_MIN;
	int32_t x292 = -93804;
	int32_t t70 = 61182;

	t70 = ((x289==x290)==(x291/x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	uint64_t x296 = 28270LLU;
	static int32_t t71 = -228;

	t71 = ((x293==x294)==(x295/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	static uint32_t x299 = 26898890U;
	static uint64_t x300 = 41919802929871302LLU;
	volatile int32_t t72 = -737217459;

	t72 = ((x297==x298)==(x299/x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -1LL;
	int16_t x302 = INT16_MAX;
	static int64_t x303 = INT64_MIN;
	static int16_t x304 = -500;
	int32_t t73 = -19;

	t73 = ((x301==x302)==(x303/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = 3U;
	static int32_t t74 = 16005132;

	t74 = ((x305==x306)==(x307/x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = INT16_MIN;
	uint8_t x310 = 2U;
	volatile int32_t t75 = -266280370;

	t75 = ((x309==x310)==(x311/x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = -1;
	int64_t x314 = -123223641916LL;
	uint64_t x315 = 119126194916355LLU;
	int16_t x316 = 1;
	int32_t t76 = -378;

	t76 = ((x313==x314)==(x315/x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MAX;
	static uint64_t x320 = UINT64_MAX;
	volatile int32_t t77 = -45937448;

	t77 = ((x317==x318)==(x319/x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x323 = 4058437U;
	int8_t x324 = -1;

	t78 = ((x321==x322)==(x323/x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x326 = 971820054LLU;
	uint32_t x327 = 2U;
	static volatile int8_t x328 = INT8_MAX;
	static volatile int32_t t79 = 3;

	t79 = ((x325==x326)==(x327/x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = 12U;
	volatile uint32_t x330 = 6689U;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	int32_t t80 = -39582;

	t80 = ((x329==x330)==(x331/x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x334 = 14U;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t81 = 960078;

	t81 = ((x333==x334)==(x335/x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = INT16_MAX;
	static int8_t x338 = INT8_MAX;
	uint8_t x339 = 57U;
	int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 5999759;

	t82 = ((x337==x338)==(x339/x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	uint32_t x342 = 2031U;
	static int32_t x343 = -11;
	int32_t x344 = -1;

	t83 = ((x341==x342)==(x343/x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	uint8_t x347 = 6U;
	int16_t x348 = 1;
	static int32_t t84 = -662886;

	t84 = ((x345==x346)==(x347/x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MAX;
	volatile int8_t x352 = 1;
	static volatile int32_t t85 = 4011;

	t85 = ((x349==x350)==(x351/x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x353 = INT16_MIN;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = 844;

	t86 = ((x353==x354)==(x355/x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 54U;
	static int8_t x358 = 13;
	uint8_t x359 = UINT8_MAX;
	static uint32_t x360 = UINT32_MAX;
	static volatile int32_t t87 = -7233;

	t87 = ((x357==x358)==(x359/x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = UINT16_MAX;
	uint8_t x362 = UINT8_MAX;
	static int64_t x363 = -1LL;
	int16_t x364 = -1;
	int32_t t88 = 17762001;

	t88 = ((x361==x362)==(x363/x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x365 = UINT32_MAX;
	uint16_t x366 = 15197U;
	uint64_t x367 = 4019936690LLU;
	uint32_t x368 = 682U;

	t89 = ((x365==x366)==(x367/x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -1LL;
	int16_t x370 = INT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t90 = -17711;

	t90 = ((x369==x370)==(x371/x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 47925610185LLU;
	uint8_t x376 = 3U;
	int32_t t91 = -5879;

	t91 = ((x373==x374)==(x375/x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	static uint16_t x378 = 1U;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	volatile int32_t t92 = 43;

	t92 = ((x377==x378)==(x379/x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x382 = UINT16_MAX;
	static int8_t x383 = INT8_MIN;
	static int32_t t93 = 245;

	t93 = ((x381==x382)==(x383/x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	uint8_t x388 = 11U;

	t94 = ((x385==x386)==(x387/x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x390 = -1;
	volatile uint16_t x391 = 3U;
	int64_t x392 = INT64_MAX;
	volatile int32_t t95 = -2071878;

	t95 = ((x389==x390)==(x391/x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	volatile int64_t x394 = 8601463LL;
	uint16_t x395 = 2487U;
	volatile int32_t t96 = 1278;

	t96 = ((x393==x394)==(x395/x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x397 = 41U;
	int16_t x398 = -1;
	uint16_t x399 = 0U;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t97 = 38;

	t97 = ((x397==x398)==(x399/x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = -1;
	int16_t x402 = INT16_MAX;
	volatile int8_t x403 = -1;
	uint8_t x404 = UINT8_MAX;

	t98 = ((x401==x402)==(x403/x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x406 = -1LL;
	int32_t x408 = -77559363;
	static volatile int32_t t99 = 87688;

	t99 = ((x405==x406)==(x407/x408));

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

