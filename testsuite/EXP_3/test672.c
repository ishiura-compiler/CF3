#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int32_t x8 = INT32_MIN;
int32_t t4 = -11415;
uint64_t x22 = 376669318151550533LLU;
int16_t x23 = INT16_MAX;
int8_t x28 = INT8_MAX;
volatile uint32_t x30 = UINT32_MAX;
volatile int32_t t8 = 504;
volatile int32_t t13 = -2824;
int32_t t15 = -844;
int16_t x71 = INT16_MIN;
volatile uint8_t x75 = UINT8_MAX;
int64_t x79 = -295LL;
uint16_t x80 = 6235U;
volatile int32_t t20 = 253;
uint64_t x89 = 3LLU;
int16_t x100 = INT16_MIN;
int32_t x103 = -15270780;
uint64_t x104 = 3275497LLU;
int8_t x109 = -1;
static int8_t x111 = INT8_MIN;
int32_t x113 = 105045;
static int16_t x115 = INT16_MIN;
int8_t x117 = INT8_MIN;
static uint32_t x119 = 3212874U;
volatile int32_t t28 = -48;
int16_t x124 = -193;
int32_t t29 = 109;
static uint16_t x127 = UINT16_MAX;
uint8_t x130 = 13U;
int32_t x131 = -176589;
volatile uint8_t x134 = 13U;
int32_t t32 = 668;
static int64_t x141 = INT64_MIN;
static uint8_t x143 = 4U;
int8_t x146 = 19;
volatile int32_t t35 = 9;
int64_t x150 = -393072420991750LL;
uint16_t x153 = UINT16_MAX;
int16_t x156 = -1;
static int16_t x161 = 136;
int8_t x164 = INT8_MIN;
uint64_t x165 = UINT64_MAX;
int64_t x168 = -244621784577157LL;
int64_t x171 = INT64_MIN;
volatile int32_t t41 = 35777997;
uint16_t x187 = 0U;
int32_t t45 = -1;
static uint32_t x192 = 997641069U;
uint32_t x195 = 1040U;
static volatile int64_t x196 = -1LL;
int32_t x203 = INT32_MIN;
uint8_t x208 = UINT8_MAX;
static int32_t t50 = 1014218750;
uint16_t x219 = 642U;
static int8_t x231 = 1;
uint64_t x238 = 522392105477984234LLU;
int64_t x239 = -1LL;
int16_t x240 = INT16_MIN;
int32_t t57 = 13;
static volatile int16_t x244 = INT16_MIN;
int8_t x248 = 1;
uint8_t x251 = 2U;
uint64_t x253 = 742199LLU;
uint8_t x259 = 3U;
int16_t x265 = -151;
volatile int32_t t63 = 22;
int8_t x269 = -1;
int8_t x272 = INT8_MIN;
uint32_t x276 = UINT32_MAX;
uint64_t x279 = 878600LLU;
static uint8_t x298 = 15U;
int32_t x299 = -1972;
int16_t x304 = INT16_MAX;
volatile int32_t t71 = -214;
uint64_t x312 = 8533182776237940LLU;
volatile int16_t x314 = INT16_MIN;
static volatile int32_t t74 = -693;
volatile int64_t x319 = -7799306LL;
int64_t x326 = 204045LL;
static uint8_t x327 = 4U;
static int64_t x332 = INT64_MIN;
volatile int32_t t79 = 3;
int8_t x337 = INT8_MIN;
volatile uint16_t x338 = UINT16_MAX;
int64_t x339 = INT64_MIN;
uint8_t x340 = 1U;
volatile int16_t x343 = -1;
int64_t x348 = -132709613131880LL;
int8_t x351 = INT8_MAX;
static int8_t x356 = -1;
static uint8_t x357 = 0U;
volatile int8_t x358 = INT8_MIN;
volatile uint16_t x363 = UINT16_MAX;
int32_t x374 = INT32_MAX;
int32_t x375 = -1806630;
static volatile uint32_t x384 = 225U;
int64_t x388 = -1LL;
int8_t x399 = 0;
int64_t x403 = 27LL;
static int16_t x404 = INT16_MAX;
uint16_t x412 = 3278U;
int32_t t98 = 258;
volatile int32_t t99 = 111948849;


void f0(void) {
	int16_t x2 = 800;
	uint64_t x3 = UINT64_MAX;
	volatile int16_t x4 = INT16_MIN;
	int32_t t0 = 173962401;

	t0 = ((x1^x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t t1 = -11898351;

	t1 = ((x5^x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 13U;
	int8_t x10 = -1;
	int32_t x11 = -1;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -2628837;

	t2 = ((x9^x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -383084985975LL;
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -260611;

	t3 = ((x13^x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	uint64_t x20 = 42637536LLU;

	t4 = ((x17^x18)<(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x24 = INT64_MAX;
	int32_t t5 = 329;

	t5 = ((x21^x22)<(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static volatile uint8_t x26 = 4U;
	uint64_t x27 = 5352LLU;
	int32_t t6 = 40;

	t6 = ((x25^x26)<(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 2;
	uint16_t x31 = 939U;
	volatile uint32_t x32 = 6476U;
	static volatile int32_t t7 = 25544;

	t7 = ((x29^x30)<(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 45;
	static int8_t x34 = 14;
	uint32_t x35 = 9U;
	int16_t x36 = -1;

	t8 = ((x33^x34)<(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	int8_t x39 = 11;
	uint8_t x40 = 2U;
	volatile int32_t t9 = -1;

	t9 = ((x37^x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 0U;
	int32_t x42 = 772283;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 11;

	t10 = ((x41^x42)<(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	uint8_t x48 = 31U;
	volatile int32_t t11 = 2036512;

	t11 = ((x45^x46)<(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	int32_t x50 = -1;
	uint64_t x51 = UINT64_MAX;
	static int16_t x52 = INT16_MIN;
	int32_t t12 = -16;

	t12 = ((x49^x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 53967430LLU;
	int64_t x54 = INT64_MAX;
	uint64_t x55 = 2723730LLU;
	uint8_t x56 = 11U;

	t13 = ((x53^x54)<(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 5;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 0;

	t14 = ((x57^x58)<(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -6545101;
	static int16_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	volatile uint64_t x64 = 7523269LLU;

	t15 = ((x61^x62)<(x63/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int32_t x66 = -357169505;
	static volatile int64_t x67 = INT64_MIN;
	uint32_t x68 = UINT32_MAX;
	int32_t t16 = -1;

	t16 = ((x65^x66)<(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int8_t x70 = 2;
	uint64_t x72 = 3193LLU;
	int32_t t17 = -28145842;

	t17 = ((x69^x70)<(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 95034LLU;
	int16_t x74 = 147;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = 217479;

	t18 = ((x73^x74)<(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 8;
	volatile uint32_t x78 = 252U;
	static volatile int32_t t19 = -3;

	t19 = ((x77^x78)<(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MAX;
	uint32_t x82 = 22885900U;
	static uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 424U;

	t20 = ((x81^x82)<(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -844;
	int32_t x86 = INT32_MAX;
	uint16_t x87 = 55U;
	int64_t x88 = -420503617793LL;
	int32_t t21 = 0;

	t21 = ((x85^x86)<(x87/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = -5446766195143LL;
	int32_t x91 = -11773;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 6942;

	t22 = ((x89^x90)<(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 5737U;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	volatile int64_t x96 = INT64_MAX;
	int32_t t23 = 63649989;

	t23 = ((x93^x94)<(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 1;
	volatile uint32_t x98 = 45138U;
	int8_t x99 = INT8_MIN;
	int32_t t24 = 3;

	t24 = ((x97^x98)<(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = 1;
	int32_t t25 = -3544;

	t25 = ((x101^x102)<(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = -43;
	int64_t x112 = INT64_MIN;
	volatile int32_t t26 = -115;

	t26 = ((x109^x110)<(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = INT16_MAX;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t27 = -17660773;

	t27 = ((x113^x114)<(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x118 = INT32_MIN;
	uint64_t x120 = UINT64_MAX;

	t28 = ((x117^x118)<(x119/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	static int16_t x123 = INT16_MIN;

	t29 = ((x121^x122)<(x123/x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int64_t x126 = INT64_MAX;
	int8_t x128 = -2;
	volatile int32_t t30 = 385137629;

	t30 = ((x125^x126)<(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x129 = INT64_MAX;
	int16_t x132 = 1252;
	static int32_t t31 = -832504049;

	t31 = ((x129^x130)<(x131/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MAX;
	int64_t x135 = INT64_MIN;
	volatile uint32_t x136 = UINT32_MAX;

	t32 = ((x133^x134)<(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MAX;
	uint16_t x140 = 35U;
	volatile int32_t t33 = 17;

	t33 = ((x137^x138)<(x139/x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x142 = 65U;
	static volatile uint64_t x144 = 582LLU;
	int32_t t34 = 2385;

	t34 = ((x141^x142)<(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 17U;
	volatile int32_t x147 = INT32_MIN;
	uint8_t x148 = 14U;

	t35 = ((x145^x146)<(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x149 = UINT64_MAX;
	int8_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	int32_t t36 = -108;

	t36 = ((x149^x150)<(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	volatile int8_t x155 = INT8_MAX;
	int32_t t37 = 1;

	t37 = ((x153^x154)<(x155/x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int16_t x158 = INT16_MAX;
	uint32_t x159 = UINT32_MAX;
	static uint16_t x160 = 7125U;
	static volatile int32_t t38 = 26009;

	t38 = ((x157^x158)<(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x162 = 847U;
	volatile int64_t x163 = INT64_MIN;
	int32_t t39 = 692;

	t39 = ((x161^x162)<(x163/x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = 5;
	int16_t x167 = -524;
	int32_t t40 = -27004;

	t40 = ((x165^x166)<(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = 63;
	uint64_t x170 = 272155973249LLU;
	int8_t x172 = INT8_MIN;

	t41 = ((x169^x170)<(x171/x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 44718265626LL;
	uint64_t x174 = 90261192502727LLU;
	int16_t x175 = -1;
	volatile int32_t x176 = INT32_MAX;
	int32_t t42 = -258223704;

	t42 = ((x173^x174)<(x175/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -2;
	uint32_t x178 = 1421U;
	static int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t43 = 1;

	t43 = ((x177^x178)<(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = 216;
	static int64_t x182 = -41530308LL;
	volatile int16_t x183 = -12834;
	volatile int8_t x184 = -1;
	int32_t t44 = -91483214;

	t44 = ((x181^x182)<(x183/x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MAX;
	uint16_t x188 = UINT16_MAX;

	t45 = ((x185^x186)<(x187/x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	static int16_t x191 = -1;
	volatile int32_t t46 = -3;

	t46 = ((x189^x190)<(x191/x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	uint32_t x194 = 8743U;
	volatile int32_t t47 = -1;

	t47 = ((x193^x194)<(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x197 = 644U;
	volatile int32_t x198 = -1;
	int64_t x199 = 271377357710LL;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = -432182;

	t48 = ((x197^x198)<(x199/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x201 = 22031U;
	volatile int64_t x202 = -1LL;
	static volatile uint8_t x204 = 7U;
	volatile int32_t t49 = 16;

	t49 = ((x201^x202)<(x203/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	static volatile uint16_t x206 = 1587U;
	static int8_t x207 = -11;

	t50 = ((x205^x206)<(x207/x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	uint32_t x211 = 105U;
	uint32_t x212 = 13404856U;
	int32_t t51 = 12400;

	t51 = ((x209^x210)<(x211/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	volatile uint16_t x214 = 8683U;
	volatile uint16_t x215 = 103U;
	static int32_t x216 = -2;
	int32_t t52 = -346;

	t52 = ((x213^x214)<(x215/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	volatile uint32_t x218 = 1U;
	int16_t x220 = -6;
	int32_t t53 = 215;

	t53 = ((x217^x218)<(x219/x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = 22;
	uint16_t x227 = 1096U;
	static int16_t x228 = INT16_MAX;
	volatile int32_t t54 = 96207;

	t54 = ((x225^x226)<(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	static int8_t x230 = INT8_MIN;
	int64_t x232 = -496150602489192419LL;
	int32_t t55 = 2;

	t55 = ((x229^x230)<(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 122009682U;
	static int32_t x234 = INT32_MAX;
	int16_t x235 = 3;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t56 = -25657659;

	t56 = ((x233^x234)<(x235/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x237 = 1584505129U;

	t57 = ((x237^x238)<(x239/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -261770763704LL;
	uint64_t x242 = 30209416682008993LLU;
	uint64_t x243 = 87230969468461599LLU;
	int32_t t58 = 0;

	t58 = ((x241^x242)<(x243/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x245 = 7LL;
	static int64_t x246 = INT64_MIN;
	volatile int16_t x247 = INT16_MIN;
	volatile int32_t t59 = -401;

	t59 = ((x245^x246)<(x247/x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t60 = 43;

	t60 = ((x249^x250)<(x251/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = -1;
	volatile uint8_t x255 = UINT8_MAX;
	uint8_t x256 = 5U;
	volatile int32_t t61 = 873;

	t61 = ((x253^x254)<(x255/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x260 = -47;
	int32_t t62 = 0;

	t62 = ((x257^x258)<(x259/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x266 = 217U;
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = INT8_MAX;

	t63 = ((x265^x266)<(x267/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x270 = UINT16_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	volatile int32_t t64 = 0;

	t64 = ((x269^x270)<(x271/x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 24036472304LLU;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	volatile int32_t t65 = 30841482;

	t65 = ((x273^x274)<(x275/x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MAX;
	volatile int8_t x280 = -1;
	static int32_t t66 = 0;

	t66 = ((x277^x278)<(x279/x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 10U;
	int16_t x287 = 667;
	int8_t x288 = INT8_MAX;
	int32_t t67 = -31497199;

	t67 = ((x285^x286)<(x287/x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -12;
	volatile int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MAX;
	int16_t x292 = INT16_MAX;
	int32_t t68 = -194314720;

	t68 = ((x289^x290)<(x291/x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = INT32_MAX;
	static int32_t x294 = 775673456;
	int64_t x295 = 644359498829229LL;
	int64_t x296 = INT64_MAX;
	int32_t t69 = 1674;

	t69 = ((x293^x294)<(x295/x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x297 = UINT64_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t70 = -450658;

	t70 = ((x297^x298)<(x299/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = INT64_MAX;
	volatile int8_t x302 = -1;
	uint32_t x303 = 6U;

	t71 = ((x301^x302)<(x303/x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = 40U;
	volatile int32_t x306 = INT32_MAX;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t72 = -1513523;

	t72 = ((x305^x306)<(x307/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x309 = INT8_MIN;
	volatile int64_t x310 = 0LL;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t t73 = 6058;

	t73 = ((x309^x310)<(x311/x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x313 = 3512U;
	volatile int16_t x315 = -1;
	int32_t x316 = INT32_MAX;

	t74 = ((x313^x314)<(x315/x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	static uint8_t x318 = 43U;
	uint8_t x320 = UINT8_MAX;
	int32_t t75 = -997;

	t75 = ((x317^x318)<(x319/x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x321 = INT8_MIN;
	static uint32_t x322 = 25U;
	static uint32_t x323 = 38014661U;
	int32_t x324 = -5379;
	static int32_t t76 = -71806;

	t76 = ((x321^x322)<(x323/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 1U;
	uint32_t x328 = 298776983U;
	volatile int32_t t77 = -117212;

	t77 = ((x325^x326)<(x327/x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -1;
	int16_t x330 = 533;
	int32_t x331 = INT32_MIN;
	static volatile int32_t t78 = -54;

	t78 = ((x329^x330)<(x331/x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = -1LL;
	static uint8_t x335 = 5U;
	uint64_t x336 = 870104622074708109LLU;

	t79 = ((x333^x334)<(x335/x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t t80 = -3343865;

	t80 = ((x337^x338)<(x339/x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x341 = INT8_MIN;
	volatile uint8_t x342 = UINT8_MAX;
	uint32_t x344 = 79U;
	volatile int32_t t81 = 218;

	t81 = ((x341^x342)<(x343/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -7866190;
	int16_t x346 = -22;
	int16_t x347 = INT16_MAX;
	int32_t t82 = 809;

	t82 = ((x345^x346)<(x347/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x349 = 1U;
	static volatile uint16_t x350 = 1232U;
	uint32_t x352 = 121216888U;
	static volatile int32_t t83 = -1614;

	t83 = ((x349^x350)<(x351/x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = 188366202;
	int64_t x354 = -62265924768LL;
	int32_t x355 = 1744917;
	volatile int32_t t84 = 3967;

	t84 = ((x353^x354)<(x355/x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x359 = INT32_MIN;
	int64_t x360 = -1LL;
	int32_t t85 = 15;

	t85 = ((x357^x358)<(x359/x360));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	int32_t x362 = INT32_MIN;
	int64_t x364 = 361889401042LL;
	int32_t t86 = -403;

	t86 = ((x361^x362)<(x363/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 1466;
	int32_t x366 = INT32_MIN;
	static uint32_t x367 = UINT32_MAX;
	int16_t x368 = 3;
	volatile int32_t t87 = 7059777;

	t87 = ((x365^x366)<(x367/x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -95;
	static volatile uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	int32_t t88 = 376030362;

	t88 = ((x369^x370)<(x371/x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x373 = INT64_MIN;
	volatile int16_t x376 = INT16_MIN;
	int32_t t89 = 0;

	t89 = ((x373^x374)<(x375/x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 196U;
	static int16_t x380 = -4;
	int32_t t90 = -11599315;

	t90 = ((x377^x378)<(x379/x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 1229U;
	static int64_t x382 = 3592904997LL;
	int64_t x383 = INT64_MIN;
	volatile int32_t t91 = -4;

	t91 = ((x381^x382)<(x383/x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 939945844LLU;
	int64_t x387 = -1115892LL;
	volatile int32_t t92 = 20106872;

	t92 = ((x385^x386)<(x387/x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x389 = -1LL;
	volatile uint16_t x390 = UINT16_MAX;
	int32_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t93 = 528926705;

	t93 = ((x389^x390)<(x391/x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x393 = INT64_MIN;
	int16_t x394 = -218;
	int16_t x395 = 170;
	int16_t x396 = 261;
	static volatile int32_t t94 = 53469611;

	t94 = ((x393^x394)<(x395/x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x397 = 3158438722712LLU;
	int16_t x398 = -8161;
	int32_t x400 = -8026;
	int32_t t95 = -6;

	t95 = ((x397^x398)<(x399/x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 11283984LLU;
	uint16_t x402 = UINT16_MAX;
	static int32_t t96 = 4;

	t96 = ((x401^x402)<(x403/x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x405 = UINT8_MAX;
	uint16_t x406 = 19U;
	uint16_t x407 = UINT16_MAX;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t97 = 0;

	t97 = ((x405^x406)<(x407/x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = -1;
	static uint32_t x410 = 139096U;
	static int32_t x411 = INT32_MAX;

	t98 = ((x409^x410)<(x411/x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x413 = 57961424500105995LLU;
	static uint8_t x414 = 1U;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;

	t99 = ((x413^x414)<(x415/x416));

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

