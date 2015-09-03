#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 818980066;
volatile uint32_t x9 = 0U;
int8_t x12 = INT8_MAX;
volatile int32_t t2 = -497398150;
int16_t x15 = INT16_MIN;
volatile int16_t x21 = -3;
static volatile uint8_t x22 = 4U;
int64_t x26 = INT64_MIN;
int64_t x27 = 15961LL;
static int32_t t6 = 49610;
int64_t x34 = INT64_MIN;
static volatile int32_t t7 = -378;
int16_t x45 = 0;
uint16_t x53 = UINT16_MAX;
uint32_t x54 = 77U;
int8_t x55 = -1;
volatile int64_t x59 = -1LL;
int32_t t12 = 198;
int8_t x61 = INT8_MIN;
static int32_t x68 = INT32_MIN;
int64_t x72 = -814LL;
int32_t x73 = -41418;
volatile int64_t x75 = INT64_MAX;
volatile int32_t t17 = -5;
int8_t x81 = -1;
int8_t x83 = INT8_MIN;
int64_t x86 = 5LL;
volatile int32_t t19 = -33539358;
uint16_t x90 = 367U;
int32_t x92 = INT32_MIN;
static uint32_t x94 = 4327427U;
uint16_t x100 = 559U;
uint8_t x105 = UINT8_MAX;
int8_t x115 = 0;
int16_t x122 = INT16_MIN;
static uint16_t x124 = 1U;
int32_t x126 = INT32_MAX;
int64_t x130 = INT64_MAX;
static int32_t t30 = 6137;
volatile int8_t x137 = -18;
int32_t t31 = 51982324;
int16_t x146 = -1995;
int64_t x147 = 39931346853703613LL;
int16_t x148 = INT16_MIN;
int32_t x163 = INT32_MAX;
uint64_t x169 = 6LLU;
int32_t t39 = -96;
uint16_t x175 = 8U;
static uint32_t x178 = UINT32_MAX;
int32_t x180 = INT32_MAX;
int8_t x181 = -1;
volatile uint32_t x182 = 1861U;
volatile int64_t x184 = -2800199LL;
volatile int32_t t42 = 6085511;
static volatile int16_t x185 = INT16_MAX;
static volatile int32_t x190 = 25684;
int64_t x209 = INT64_MIN;
int64_t x211 = INT64_MAX;
static uint8_t x214 = UINT8_MAX;
int32_t x216 = -5157105;
int8_t x219 = INT8_MIN;
volatile int16_t x220 = INT16_MIN;
int8_t x223 = INT8_MAX;
int8_t x233 = INT8_MIN;
int32_t x237 = -351;
int16_t x244 = -1;
volatile uint64_t x254 = 5026640752841886LLU;
int64_t x257 = -105363626LL;
int64_t x266 = INT64_MIN;
int32_t t62 = -102;
volatile int8_t x272 = 3;
uint8_t x280 = 53U;
int32_t t65 = 6179468;
int32_t x284 = -4973;
volatile int32_t t66 = 854593037;
uint16_t x287 = 21892U;
static int16_t x289 = INT16_MAX;
uint16_t x291 = 45U;
volatile int64_t x295 = -1122831956638108342LL;
volatile int32_t t69 = 37;
int32_t x304 = 10974929;
uint8_t x311 = 0U;
int32_t t72 = 15728142;
uint8_t x319 = 1U;
int32_t t74 = 5460789;
volatile int32_t t75 = 3;
volatile int64_t x328 = 142LL;
static int32_t t76 = 5237709;
int32_t t78 = -3673735;
static uint32_t x337 = 1785733U;
int64_t x342 = INT64_MIN;
volatile uint64_t x348 = UINT64_MAX;
uint64_t x354 = 7409799068000261595LLU;
uint32_t x356 = 27731U;
uint8_t x359 = UINT8_MAX;
volatile int32_t t84 = -8;
uint8_t x367 = 7U;
volatile uint32_t x368 = 125690U;
int64_t x375 = INT64_MIN;
int32_t t88 = -668;
uint8_t x380 = 22U;
int16_t x383 = -21;
volatile int8_t x386 = -6;
int16_t x387 = -1;
int32_t x388 = INT32_MIN;
uint64_t x396 = 5527250042334152141LLU;
int16_t x400 = INT16_MIN;
int32_t x413 = INT32_MAX;
volatile int32_t t97 = 6;
static int16_t x421 = INT16_MIN;
int32_t x422 = 324176278;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = -9;

	t0 = ((x1%x2)==(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	static int64_t x6 = INT64_MIN;
	uint64_t x7 = 933666495726351LLU;
	int32_t x8 = -272280;
	static volatile int32_t t1 = 1;

	t1 = ((x5%x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	static int8_t x11 = INT8_MIN;

	t2 = ((x9%x10)==(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 2926U;
	int16_t x14 = INT16_MIN;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 3884;

	t3 = ((x13%x14)==(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x23 = -56;
	volatile int64_t x24 = -905455576707707140LL;
	volatile int32_t t4 = 24293;

	t4 = ((x21%x22)==(x23==x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = UINT32_MAX;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t5 = 388493;

	t5 = ((x25%x26)==(x27==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x29 = INT32_MIN;
	static volatile int32_t x30 = INT32_MAX;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = INT8_MIN;

	t6 = ((x29%x30)==(x31==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MAX;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = INT16_MIN;

	t7 = ((x33%x34)==(x35==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = 13858;
	int8_t x38 = -1;
	static uint8_t x39 = 1U;
	static int32_t x40 = -21631755;
	int32_t t8 = 151914;

	t8 = ((x37%x38)==(x39==x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x46 = UINT32_MAX;
	uint8_t x47 = 14U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t9 = 187619;

	t9 = ((x45%x46)==(x47==x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 863521991U;
	uint32_t x50 = 1U;
	uint64_t x51 = 198669583897964279LLU;
	int8_t x52 = -1;
	int32_t t10 = -6076608;

	t10 = ((x49%x50)==(x51==x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x56 = -1;
	volatile int32_t t11 = 1529254;

	t11 = ((x53%x54)==(x55==x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	volatile uint32_t x58 = 57146U;
	int64_t x60 = -3640662467LL;

	t12 = ((x57%x58)==(x59==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = 132126293U;
	volatile uint16_t x63 = 26936U;
	uint16_t x64 = 1961U;
	int32_t t13 = -1521;

	t13 = ((x61%x62)==(x63==x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 56;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = 15847802283968531LL;
	volatile int32_t t14 = 1;

	t14 = ((x65%x66)==(x67==x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	volatile int8_t x70 = -1;
	int64_t x71 = -2005586LL;
	int32_t t15 = -4752588;

	t15 = ((x69%x70)==(x71==x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	uint8_t x76 = 10U;
	volatile int32_t t16 = 1051627056;

	t16 = ((x73%x74)==(x75==x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int32_t x78 = INT32_MIN;
	int32_t x79 = 216;
	volatile int8_t x80 = INT8_MIN;

	t17 = ((x77%x78)==(x79==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x82 = 5;
	static uint8_t x84 = UINT8_MAX;
	int32_t t18 = -5722187;

	t18 = ((x81%x82)==(x83==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 5106078LLU;
	int8_t x87 = INT8_MIN;
	volatile int8_t x88 = -1;

	t19 = ((x85%x86)==(x87==x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int64_t x91 = -1LL;
	int32_t t20 = -536;

	t20 = ((x89%x90)==(x91==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x95 = UINT64_MAX;
	volatile int16_t x96 = -15;
	volatile int32_t t21 = -45;

	t21 = ((x93%x94)==(x95==x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 14332056523193535LLU;
	int16_t x98 = -1;
	int32_t x99 = INT32_MAX;
	volatile int32_t t22 = 119;

	t22 = ((x97%x98)==(x99==x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 523108U;
	static int16_t x104 = -1;
	static volatile int32_t t23 = 117005966;

	t23 = ((x101%x102)==(x103==x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = -27604353427LL;
	volatile int32_t x107 = -1;
	uint64_t x108 = 26155907LLU;
	static volatile int32_t t24 = 2;

	t24 = ((x105%x106)==(x107==x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 45U;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	uint16_t x112 = 80U;
	int32_t t25 = -654;

	t25 = ((x109%x110)==(x111==x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	static uint8_t x116 = 27U;
	int32_t t26 = -5776481;

	t26 = ((x113%x114)==(x115==x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 13210074;
	static uint8_t x123 = 1U;
	volatile int32_t t27 = -220;

	t27 = ((x121%x122)==(x123==x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -1;
	int64_t x127 = -1LL;
	volatile uint8_t x128 = 1U;
	int32_t t28 = 102;

	t28 = ((x125%x126)==(x127==x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x129 = 458941U;
	int16_t x131 = INT16_MIN;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t29 = -9;

	t29 = ((x129%x130)==(x131==x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	static int8_t x136 = INT8_MIN;

	t30 = ((x133%x134)==(x135==x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x138 = INT16_MIN;
	uint64_t x139 = 12859898719LLU;
	int64_t x140 = -26015197995710387LL;

	t31 = ((x137%x138)==(x139==x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = INT8_MIN;
	uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 111U;
	static uint64_t x144 = UINT64_MAX;
	int32_t t32 = 265927;

	t32 = ((x141%x142)==(x143==x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = INT8_MAX;
	static volatile int32_t t33 = -8;

	t33 = ((x145%x146)==(x147==x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MAX;
	uint16_t x150 = 1U;
	volatile int8_t x151 = -1;
	static uint8_t x152 = 60U;
	static volatile int32_t t34 = 13453495;

	t34 = ((x149%x150)==(x151==x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = 5U;
	uint32_t x154 = 227622U;
	static uint64_t x155 = 43590757LLU;
	volatile uint16_t x156 = 9742U;
	static int32_t t35 = 7214954;

	t35 = ((x153%x154)==(x155==x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -13LL;
	int32_t x158 = -1;
	static int64_t x159 = INT64_MIN;
	int64_t x160 = 112402370924LL;
	volatile int32_t t36 = 14497;

	t36 = ((x157%x158)==(x159==x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = -1;
	int32_t x162 = INT32_MAX;
	int16_t x164 = -1;
	int32_t t37 = 3799;

	t37 = ((x161%x162)==(x163==x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MAX;
	static int8_t x167 = -15;
	static int16_t x168 = 2181;
	int32_t t38 = 0;

	t38 = ((x165%x166)==(x167==x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 30150U;

	t39 = ((x169%x170)==(x171==x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MIN;
	int64_t x174 = -132446360299447LL;
	int64_t x176 = INT64_MAX;
	volatile int32_t t40 = -31;

	t40 = ((x173%x174)==(x175==x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 39761041804510676LLU;
	static volatile int8_t x179 = INT8_MAX;
	int32_t t41 = -1139;

	t41 = ((x177%x178)==(x179==x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x183 = INT8_MAX;

	t42 = ((x181%x182)==(x183==x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = 381548939151191996LL;
	static uint16_t x187 = 24964U;
	int16_t x188 = -316;
	volatile int32_t t43 = -33358;

	t43 = ((x185%x186)==(x187==x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x189 = 92U;
	uint32_t x191 = 8218970U;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t44 = -710710798;

	t44 = ((x189%x190)==(x191==x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = INT32_MIN;
	uint8_t x194 = 61U;
	int32_t x195 = INT32_MIN;
	uint64_t x196 = 274844931451771022LLU;
	int32_t t45 = 19400;

	t45 = ((x193%x194)==(x195==x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 298457055389229LLU;
	uint32_t x198 = UINT32_MAX;
	static int64_t x199 = -129LL;
	uint16_t x200 = 4633U;
	int32_t t46 = -472;

	t46 = ((x197%x198)==(x199==x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	volatile int64_t x202 = -215989476335614835LL;
	static int32_t x203 = -1;
	uint64_t x204 = 863LLU;
	int32_t t47 = 7;

	t47 = ((x201%x202)==(x203==x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x210 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t48 = 156;

	t48 = ((x209%x210)==(x211==x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 51436LL;
	int8_t x215 = INT8_MAX;
	static volatile int32_t t49 = -26908;

	t49 = ((x213%x214)==(x215==x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	static int8_t x218 = INT8_MAX;
	volatile int32_t t50 = 16078;

	t50 = ((x217%x218)==(x219==x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = 882248751;
	static volatile uint64_t x222 = 117828819476596330LLU;
	uint32_t x224 = 4548101U;
	int32_t t51 = -47;

	t51 = ((x221%x222)==(x223==x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 29U;
	int32_t t52 = -501016;

	t52 = ((x225%x226)==(x227==x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = 2724U;
	int64_t x231 = 50651795918418LL;
	volatile int64_t x232 = INT64_MAX;
	int32_t t53 = -412232;

	t53 = ((x229%x230)==(x231==x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x234 = 11U;
	uint8_t x235 = UINT8_MAX;
	int32_t x236 = INT32_MAX;
	volatile int32_t t54 = -1799;

	t54 = ((x233%x234)==(x235==x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = 3302017266655553426LL;
	static volatile int16_t x239 = INT16_MIN;
	volatile uint32_t x240 = 101558062U;
	static volatile int32_t t55 = -1;

	t55 = ((x237%x238)==(x239==x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = INT64_MAX;
	volatile uint16_t x242 = 11495U;
	int16_t x243 = 1559;
	int32_t t56 = -109177;

	t56 = ((x241%x242)==(x243==x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = 549;
	static int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = 548U;
	volatile int32_t t57 = 4592325;

	t57 = ((x245%x246)==(x247==x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 12322U;
	int64_t x251 = -5108359096LL;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t58 = 100;

	t58 = ((x249%x250)==(x251==x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x253 = INT32_MIN;
	static int32_t x255 = -11825330;
	static int64_t x256 = INT64_MIN;
	int32_t t59 = 2455185;

	t59 = ((x253%x254)==(x255==x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x258 = INT8_MIN;
	int32_t x259 = -4431075;
	int16_t x260 = -1;
	int32_t t60 = -33;

	t60 = ((x257%x258)==(x259==x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = 8;
	volatile int64_t x262 = 882620301823049401LL;
	uint32_t x263 = 92U;
	int16_t x264 = INT16_MIN;
	static int32_t t61 = -128070;

	t61 = ((x261%x262)==(x263==x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;

	t62 = ((x265%x266)==(x267==x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = -3515;
	int32_t x271 = INT32_MAX;
	static int32_t t63 = 2;

	t63 = ((x269%x270)==(x271==x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -1;
	int64_t x274 = -42430823500543LL;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = -1264;
	int32_t t64 = -41;

	t64 = ((x273%x274)==(x275==x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MAX;
	static uint32_t x278 = 5679U;
	int8_t x279 = -1;

	t65 = ((x277%x278)==(x279==x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = -1;
	int32_t x282 = -1;
	volatile int64_t x283 = INT64_MIN;

	t66 = ((x281%x282)==(x283==x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MIN;
	int64_t x288 = 272472251446947LL;
	static int32_t t67 = 0;

	t67 = ((x285%x286)==(x287==x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x290 = INT32_MAX;
	static int64_t x292 = INT64_MAX;
	volatile int32_t t68 = 11037;

	t68 = ((x289%x290)==(x291==x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = INT32_MIN;
	volatile int64_t x294 = INT64_MAX;
	int8_t x296 = INT8_MAX;

	t69 = ((x293%x294)==(x295==x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	uint32_t x298 = 2974U;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MAX;
	volatile int32_t t70 = -62;

	t70 = ((x297%x298)==(x299==x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x301 = 839675LLU;
	uint64_t x302 = 362914234154754LLU;
	uint64_t x303 = UINT64_MAX;
	static int32_t t71 = -14681289;

	t71 = ((x301%x302)==(x303==x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = 61;
	uint64_t x310 = 140437316342305591LLU;
	int8_t x312 = -3;

	t72 = ((x309%x310)==(x311==x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = 366;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = -1;
	int8_t x316 = INT8_MIN;
	int32_t t73 = -2792;

	t73 = ((x313%x314)==(x315==x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = -1;
	static uint64_t x320 = UINT64_MAX;

	t74 = ((x317%x318)==(x319==x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = 16LL;
	int16_t x322 = -1;
	static volatile uint8_t x323 = 3U;
	uint8_t x324 = 15U;

	t75 = ((x321%x322)==(x323==x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = INT8_MIN;
	static uint32_t x326 = 33415U;
	uint16_t x327 = 0U;

	t76 = ((x325%x326)==(x327==x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 78279622967026LLU;
	static int16_t x331 = 22;
	int64_t x332 = 129261565LL;
	volatile int32_t t77 = 581110529;

	t77 = ((x329%x330)==(x331==x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = -75;
	int8_t x334 = 28;
	static volatile uint16_t x335 = UINT16_MAX;
	int16_t x336 = INT16_MIN;

	t78 = ((x333%x334)==(x335==x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x338 = UINT64_MAX;
	static volatile int16_t x339 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t79 = -42;

	t79 = ((x337%x338)==(x339==x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	int64_t x343 = -1LL;
	uint64_t x344 = UINT64_MAX;
	int32_t t80 = -78;

	t80 = ((x341%x342)==(x343==x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 3046835935LLU;
	uint64_t x346 = 732369844402319LLU;
	int16_t x347 = 5700;
	volatile int32_t t81 = -276119812;

	t81 = ((x345%x346)==(x347==x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x349 = INT16_MIN;
	volatile uint64_t x350 = 23989791LLU;
	uint64_t x351 = 500903491866037446LLU;
	static volatile int64_t x352 = INT64_MAX;
	int32_t t82 = 11474;

	t82 = ((x349%x350)==(x351==x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = 3U;
	int8_t x355 = -1;
	volatile int32_t t83 = -1462;

	t83 = ((x353%x354)==(x355==x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x357 = 6U;
	int8_t x358 = INT8_MAX;
	int64_t x360 = INT64_MIN;

	t84 = ((x357%x358)==(x359==x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = -261;
	int16_t x362 = 328;
	int64_t x363 = -1LL;
	volatile int8_t x364 = -1;
	static int32_t t85 = 2671172;

	t85 = ((x361%x362)==(x363==x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile int16_t x366 = INT16_MIN;
	int32_t t86 = 2276;

	t86 = ((x365%x366)==(x367==x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = 156167792726928LLU;
	static volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t87 = -743;

	t87 = ((x369%x370)==(x371==x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x373 = -1;
	int16_t x374 = INT16_MIN;
	int32_t x376 = 204538;

	t88 = ((x373%x374)==(x375==x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = 27U;
	int8_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	static int32_t t89 = -5153428;

	t89 = ((x377%x378)==(x379==x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x381 = 6114954U;
	int8_t x382 = INT8_MIN;
	int16_t x384 = INT16_MIN;
	volatile int32_t t90 = 1321;

	t90 = ((x381%x382)==(x383==x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x385 = UINT16_MAX;
	static int32_t t91 = -28;

	t91 = ((x385%x386)==(x387==x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 7;
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 2585U;
	int16_t x392 = 4541;
	volatile int32_t t92 = -41;

	t92 = ((x389%x390)==(x391==x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MAX;
	volatile int32_t t93 = -102410556;

	t93 = ((x393%x394)==(x395==x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 443049928568LL;
	uint32_t x398 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t t94 = -3249;

	t94 = ((x397%x398)==(x399==x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 10486U;
	uint32_t x402 = 1640468492U;
	int16_t x403 = INT16_MIN;
	int64_t x404 = -400226681065LL;
	volatile int32_t t95 = -10745023;

	t95 = ((x401%x402)==(x403==x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = -125;
	int16_t x411 = -1;
	int16_t x412 = INT16_MAX;
	static int32_t t96 = -72761;

	t96 = ((x409%x410)==(x411==x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x414 = 2U;
	volatile int8_t x415 = 3;
	volatile int32_t x416 = 55;

	t97 = ((x413%x414)==(x415==x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MAX;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 269251239889072LLU;
	int32_t x420 = INT32_MAX;
	volatile int32_t t98 = 130;

	t98 = ((x417%x418)==(x419==x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x423 = INT16_MIN;
	int64_t x424 = 1123438495192354142LL;
	volatile int32_t t99 = 13500;

	t99 = ((x421%x422)==(x423==x424));

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

