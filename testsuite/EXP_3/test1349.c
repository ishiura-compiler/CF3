#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 563;
uint16_t x7 = 185U;
uint8_t x10 = 3U;
uint32_t x17 = UINT32_MAX;
int32_t x21 = INT32_MIN;
uint8_t x32 = 125U;
int64_t x35 = -1LL;
static volatile int32_t t9 = -3526;
static uint16_t x41 = 58U;
volatile int32_t t10 = -1;
static int64_t x49 = INT64_MAX;
int64_t x52 = INT64_MIN;
static volatile int32_t t14 = 546389883;
int64_t x66 = INT64_MIN;
static int64_t x71 = INT64_MIN;
int16_t x81 = -1;
int32_t x82 = 35596486;
int16_t x86 = -99;
int16_t x87 = INT16_MIN;
int16_t x89 = INT16_MAX;
uint8_t x97 = 28U;
uint16_t x98 = 5U;
volatile uint64_t x107 = 1048830018969036LLU;
static int16_t x108 = INT16_MAX;
static int8_t x113 = 6;
int8_t x115 = -1;
volatile int8_t x124 = INT8_MAX;
int32_t x128 = -1;
static int32_t t32 = -7798097;
volatile int32_t t35 = 5554909;
uint64_t x145 = 215524917770784604LLU;
static volatile uint64_t x147 = UINT64_MAX;
int16_t x157 = INT16_MIN;
uint64_t x160 = 1667918749884LLU;
volatile int32_t t40 = 172554783;
int8_t x167 = 5;
int32_t t41 = -2363603;
int32_t x175 = -1;
int8_t x176 = -8;
static int64_t x177 = 174531092924048LL;
volatile int32_t t44 = 3;
uint64_t x181 = 396LLU;
uint16_t x184 = UINT16_MAX;
uint32_t x187 = UINT32_MAX;
volatile int32_t t47 = 6;
static int16_t x194 = INT16_MIN;
int16_t x195 = INT16_MAX;
int32_t t48 = -93154;
int64_t x197 = INT64_MAX;
int64_t x199 = -64LL;
uint32_t x201 = UINT32_MAX;
int16_t x212 = 38;
uint8_t x213 = UINT8_MAX;
static int8_t x215 = -1;
int8_t x218 = 5;
int16_t x219 = -1;
int32_t t55 = 51696;
uint16_t x229 = UINT16_MAX;
volatile int32_t x230 = 3879;
volatile int32_t t57 = -21115;
uint32_t x238 = 45U;
uint64_t x241 = 86LLU;
int32_t x247 = INT32_MIN;
int32_t x251 = INT32_MIN;
volatile int32_t t62 = -432210160;
volatile uint64_t x254 = 120781477812387LLU;
int32_t t63 = 87026;
int32_t x260 = -1;
volatile int32_t t64 = -1808844;
uint8_t x261 = 12U;
static int32_t x264 = INT32_MIN;
static volatile int32_t t65 = 1;
int32_t t69 = 0;
volatile int64_t x281 = INT64_MIN;
volatile uint16_t x283 = UINT16_MAX;
volatile int32_t t70 = 13638824;
int32_t x287 = INT32_MIN;
volatile int32_t t71 = 476430;
uint8_t x294 = UINT8_MAX;
int32_t t73 = -567849457;
int64_t x301 = -47LL;
int16_t x306 = -1;
int8_t x309 = 1;
static uint8_t x314 = 94U;
uint64_t x319 = 259588523791773570LLU;
uint16_t x323 = 1775U;
static uint8_t x326 = 48U;
static uint64_t x330 = 2581029831131LLU;
static uint8_t x333 = 3U;
int32_t x338 = INT32_MAX;
int16_t x340 = INT16_MIN;
int64_t x356 = 5046LL;
volatile uint32_t x358 = UINT32_MAX;
volatile int32_t t89 = -2943;
static int16_t x364 = INT16_MAX;
volatile int32_t x368 = INT32_MIN;
int8_t x374 = 1;
int64_t x375 = -2921984791381441LL;
int32_t t94 = -15058894;
static int8_t x386 = INT8_MAX;
uint8_t x392 = UINT8_MAX;


void f0(void) {
	static int32_t x1 = 1;
	int64_t x2 = -2LL;
	int8_t x3 = 7;
	int64_t x4 = 89581391306LL;

	t0 = ((x1^x2)<=(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3148U;
	uint16_t x6 = 124U;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = 3160;

	t1 = ((x5^x6)<=(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x11 = -1LL;
	uint16_t x12 = 87U;
	volatile int32_t t2 = -1506300;

	t2 = ((x9^x10)<=(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 482342221;
	volatile int8_t x14 = INT8_MIN;
	int32_t x15 = -238209;
	static uint8_t x16 = 53U;
	int32_t t3 = 2255384;

	t3 = ((x13^x14)<=(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	static volatile int64_t x20 = -688826083418971998LL;
	volatile int32_t t4 = -368680;

	t4 = ((x17^x18)<=(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 23677542U;
	uint16_t x23 = 29U;
	int32_t x24 = -54;
	volatile int32_t t5 = -51;

	t5 = ((x21^x22)<=(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 22;
	volatile uint16_t x26 = 15248U;
	static volatile int8_t x27 = 7;
	uint32_t x28 = 30354613U;
	int32_t t6 = -4449096;

	t6 = ((x25^x26)<=(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 14;
	static int8_t x30 = -17;
	int64_t x31 = 30LL;
	volatile int32_t t7 = -2766;

	t7 = ((x29^x30)<=(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 2U;
	static volatile int8_t x34 = INT8_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 199;

	t8 = ((x33^x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 5108221LL;
	int32_t x38 = 6;
	static volatile int8_t x39 = INT8_MAX;
	volatile int32_t x40 = INT32_MAX;

	t9 = ((x37^x38)<=(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MAX;
	static int64_t x43 = -1LL;
	uint8_t x44 = 10U;

	t10 = ((x41^x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 6U;
	int64_t x46 = INT64_MIN;
	int64_t x47 = -1159142LL;
	uint64_t x48 = 172337LLU;
	int32_t t11 = -4488401;

	t11 = ((x45^x46)<=(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int32_t x51 = INT32_MIN;
	volatile int32_t t12 = 252;

	t12 = ((x49^x50)<=(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x53 = 2U;
	static int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 1993320;

	t13 = ((x53^x54)<=(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 29U;
	volatile uint32_t x58 = 1U;
	static volatile int16_t x59 = INT16_MAX;
	int16_t x60 = -691;

	t14 = ((x57^x58)<=(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint16_t x62 = UINT16_MAX;
	int16_t x63 = -3;
	uint16_t x64 = 19U;
	int32_t t15 = -497765;

	t15 = ((x61^x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 0LL;
	static volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = -1;
	static int32_t t16 = 14264259;

	t16 = ((x65^x66)<=(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = 109501;

	t17 = ((x69^x70)<=(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 368U;
	int16_t x74 = INT16_MAX;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 2750U;
	int32_t t18 = 3924;

	t18 = ((x73^x74)<=(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -40;
	static uint32_t x78 = UINT32_MAX;
	uint32_t x79 = 17794264U;
	uint16_t x80 = 2994U;
	int32_t t19 = -9030;

	t19 = ((x77^x78)<=(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	static int32_t t20 = -102;

	t20 = ((x81^x82)<=(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -532;

	t21 = ((x85^x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = 154016238LLU;
	static int16_t x91 = INT16_MAX;
	int64_t x92 = -11LL;
	static int32_t t22 = 453215;

	t22 = ((x89^x90)<=(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	volatile int64_t x94 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	static uint8_t x96 = 5U;
	int32_t t23 = -14647;

	t23 = ((x93^x94)<=(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x99 = 747U;
	static volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 1;

	t24 = ((x97^x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 10U;
	static volatile uint32_t x102 = 287U;
	static int32_t x103 = -1;
	uint8_t x104 = 0U;
	volatile int32_t t25 = -4522;

	t25 = ((x101^x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	int32_t t26 = 160;

	t26 = ((x105^x106)<=(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = -1;
	static int8_t x111 = INT8_MIN;
	static volatile int64_t x112 = INT64_MAX;
	int32_t t27 = -3065262;

	t27 = ((x109^x110)<=(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x114 = 29013U;
	volatile int64_t x116 = INT64_MAX;
	static int32_t t28 = -70188;

	t28 = ((x113^x114)<=(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int16_t x118 = INT16_MIN;
	volatile int32_t x119 = 224;
	int32_t x120 = -1;
	int32_t t29 = 0;

	t29 = ((x117^x118)<=(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x122 = UINT8_MAX;
	static volatile int64_t x123 = 2700268693924LL;
	static volatile int32_t t30 = -175470;

	t30 = ((x121^x122)<=(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static int32_t t31 = 16207;

	t31 = ((x125^x126)<=(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 3358426107762LLU;
	int32_t x130 = INT32_MIN;
	int8_t x131 = 57;
	volatile int64_t x132 = 254854713LL;

	t32 = ((x129^x130)<=(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 20;
	volatile int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -41355829LL;
	int32_t t33 = -10;

	t33 = ((x133^x134)<=(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	int8_t x139 = -39;
	uint8_t x140 = 41U;
	int32_t t34 = -12845803;

	t34 = ((x137^x138)<=(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 489520044LL;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	static uint8_t x144 = UINT8_MAX;

	t35 = ((x141^x142)<=(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x146 = 2U;
	int32_t x148 = -6;
	static volatile int32_t t36 = -32463303;

	t36 = ((x145^x146)<=(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 243U;
	int32_t x150 = -395747;
	int16_t x151 = 7733;
	int8_t x152 = 34;
	int32_t t37 = -86835;

	t37 = ((x149^x150)<=(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 2U;
	int16_t x154 = -1;
	int64_t x155 = INT64_MIN;
	volatile int16_t x156 = -1;
	volatile int32_t t38 = -349;

	t38 = ((x153^x154)<=(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -34;
	static volatile int32_t x159 = INT32_MIN;
	static int32_t t39 = 53;

	t39 = ((x157^x158)<=(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -1;
	volatile uint32_t x163 = 4547769U;
	volatile int16_t x164 = INT16_MIN;

	t40 = ((x161^x162)<=(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 1962340088384LL;
	uint16_t x168 = 7567U;

	t41 = ((x165^x166)<=(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 5U;
	int8_t x170 = 14;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = INT16_MAX;
	int32_t t42 = 81;

	t42 = ((x169^x170)<=(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x173 = -1;
	static volatile int8_t x174 = INT8_MAX;
	static int32_t t43 = -40041;

	t43 = ((x173^x174)<=(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x178 = 912804582595893LLU;
	uint64_t x179 = 1558494691LLU;
	static uint32_t x180 = 1506994U;

	t44 = ((x177^x178)<=(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x182 = 710313693804LLU;
	volatile int64_t x183 = INT64_MIN;
	int32_t t45 = -40;

	t45 = ((x181^x182)<=(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -3975950551361016LL;
	int16_t x186 = -1;
	int16_t x188 = -1;
	volatile int32_t t46 = -1;

	t46 = ((x185^x186)<=(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -16158;
	volatile int64_t x190 = -1LL;
	uint8_t x191 = 7U;
	static int16_t x192 = -3652;

	t47 = ((x189^x190)<=(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	static int8_t x196 = INT8_MAX;

	t48 = ((x193^x194)<=(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -2;

	t49 = ((x197^x198)<=(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MIN;
	uint16_t x203 = 3U;
	int64_t x204 = INT64_MAX;
	int32_t t50 = 1002728439;

	t50 = ((x201^x202)<=(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	volatile int8_t x206 = -1;
	static uint32_t x207 = 429680770U;
	volatile int64_t x208 = -323453LL;
	volatile int32_t t51 = 717;

	t51 = ((x205^x206)<=(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	int32_t t52 = 115494338;

	t52 = ((x209^x210)<=(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	int16_t x216 = -1;
	int32_t t53 = 260370082;

	t53 = ((x213^x214)<=(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 0U;
	static volatile int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 981;

	t54 = ((x217^x218)<=(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = INT32_MIN;
	static int16_t x223 = 1736;
	int8_t x224 = INT8_MIN;

	t55 = ((x221^x222)<=(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = INT8_MIN;
	int64_t x226 = -1LL;
	static int16_t x227 = INT16_MIN;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = -129389811;

	t56 = ((x225^x226)<=(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x231 = 766;
	int16_t x232 = INT16_MIN;

	t57 = ((x229^x230)<=(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 81;
	static int64_t x234 = -11LL;
	static volatile int64_t x235 = INT64_MIN;
	int8_t x236 = 1;
	volatile int32_t t58 = 18;

	t58 = ((x233^x234)<=(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int16_t x239 = INT16_MIN;
	int64_t x240 = 7731LL;
	static volatile int32_t t59 = -9270;

	t59 = ((x237^x238)<=(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = INT16_MIN;
	uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MAX;
	static int32_t t60 = 15267311;

	t60 = ((x241^x242)<=(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static int8_t x246 = -1;
	volatile int16_t x248 = INT16_MAX;
	int32_t t61 = 43822;

	t61 = ((x245^x246)<=(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 62U;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x252 = INT16_MIN;

	t62 = ((x249^x250)<=(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = 135614851;
	volatile uint16_t x255 = 3562U;
	static int8_t x256 = INT8_MAX;

	t63 = ((x253^x254)<=(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x258 = INT16_MAX;
	int32_t x259 = INT32_MIN;

	t64 = ((x257^x258)<=(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = 1890771713U;
	static int32_t x263 = INT32_MIN;

	t65 = ((x261^x262)<=(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = 3907;

	t66 = ((x265^x266)<=(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -35;
	int32_t x270 = INT32_MAX;
	static uint64_t x271 = 782049182LLU;
	int64_t x272 = -36LL;
	volatile int32_t t67 = -27567327;

	t67 = ((x269^x270)<=(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static int32_t x274 = INT32_MAX;
	static int8_t x275 = -1;
	int8_t x276 = INT8_MAX;
	int32_t t68 = 14;

	t68 = ((x273^x274)<=(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MIN;
	static int32_t x280 = INT32_MAX;

	t69 = ((x277^x278)<=(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MIN;
	int8_t x284 = -3;

	t70 = ((x281^x282)<=(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -13;
	static volatile uint32_t x286 = UINT32_MAX;
	int32_t x288 = INT32_MAX;

	t71 = ((x285^x286)<=(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -6576560830LL;
	int16_t x290 = INT16_MAX;
	static uint16_t x291 = UINT16_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t72 = -438;

	t72 = ((x289^x290)<=(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x295 = 1413551762811869224LLU;
	int16_t x296 = -1;

	t73 = ((x293^x294)<=(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -1;
	int32_t x298 = -123;
	int64_t x299 = INT64_MAX;
	volatile uint32_t x300 = UINT32_MAX;
	int32_t t74 = 157;

	t74 = ((x297^x298)<=(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x302 = UINT8_MAX;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -1161959;

	t75 = ((x301^x302)<=(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	volatile int32_t x307 = -526318174;
	uint8_t x308 = 17U;
	volatile int32_t t76 = -818387;

	t76 = ((x305^x306)<=(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x310 = 153323LL;
	int32_t x311 = 1225606;
	int32_t x312 = 32951164;
	static int32_t t77 = 3;

	t77 = ((x309^x310)<=(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 29U;
	volatile int32_t x315 = -519272505;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = 23;

	t78 = ((x313^x314)<=(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static int8_t x318 = -1;
	int32_t x320 = 25833924;
	volatile int32_t t79 = 9;

	t79 = ((x317^x318)<=(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = 0U;
	int8_t x322 = -6;
	static volatile int16_t x324 = 8;
	int32_t t80 = 1;

	t80 = ((x321^x322)<=(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 3U;
	volatile int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 4638;

	t81 = ((x325^x326)<=(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x329 = 97U;
	int16_t x331 = -1;
	uint64_t x332 = 1481060300296LLU;
	static int32_t t82 = -268486;

	t82 = ((x329^x330)<=(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x334 = INT16_MIN;
	uint64_t x335 = 3LLU;
	int8_t x336 = -13;
	static int32_t t83 = -3691037;

	t83 = ((x333^x334)<=(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 1799838098473279LLU;
	uint64_t x339 = 3361756763LLU;
	volatile int32_t t84 = 663;

	t84 = ((x337^x338)<=(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t85 = 11;

	t85 = ((x341^x342)<=(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 1U;
	volatile int16_t x346 = INT16_MAX;
	volatile int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	int32_t t86 = 290;

	t86 = ((x345^x346)<=(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t87 = -240593;

	t87 = ((x349^x350)<=(x351==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	uint64_t x354 = 21LLU;
	int64_t x355 = -788LL;
	int32_t t88 = -2362;

	t88 = ((x353^x354)<=(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -1;

	t89 = ((x357^x358)<=(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = -1LL;
	static volatile int32_t x363 = INT32_MIN;
	static volatile int32_t t90 = -7914654;

	t90 = ((x361^x362)<=(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 1U;
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MAX;
	int32_t t91 = -2488;

	t91 = ((x365^x366)<=(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 1U;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = -1;
	volatile int32_t t92 = -3;

	t92 = ((x369^x370)<=(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	volatile uint8_t x376 = 2U;
	int32_t t93 = -4205;

	t93 = ((x373^x374)<=(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = 0;
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 1U;
	static int32_t x380 = INT32_MIN;

	t94 = ((x377^x378)<=(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -1LL;
	uint16_t x382 = 1645U;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = 22;
	volatile int32_t t95 = 1925;

	t95 = ((x381^x382)<=(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x387 = -3911971678704LL;
	static uint16_t x388 = 115U;
	volatile int32_t t96 = 63139;

	t96 = ((x385^x386)<=(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 4030;
	int32_t x390 = INT32_MIN;
	int16_t x391 = 486;
	volatile int32_t t97 = -164596306;

	t97 = ((x389^x390)<=(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 604499435U;
	volatile int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int32_t x396 = -506824834;
	volatile int32_t t98 = 431174977;

	t98 = ((x393^x394)<=(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	static uint64_t x399 = 1786805934LLU;
	static volatile int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -26187096;

	t99 = ((x397^x398)<=(x399==x400));

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

