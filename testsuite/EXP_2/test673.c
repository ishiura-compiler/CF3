#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MIN;
int32_t t1 = 95122722;
int32_t t3 = -35152596;
static int8_t x17 = 0;
volatile int32_t t4 = -15;
uint64_t x24 = 144058654LLU;
uint8_t x25 = UINT8_MAX;
int16_t x29 = INT16_MIN;
int32_t x33 = -1;
uint64_t x36 = 19972565968660536LLU;
volatile int32_t t8 = -30377;
uint32_t x40 = UINT32_MAX;
static int16_t x44 = INT16_MIN;
volatile int32_t t10 = -112343142;
static volatile int8_t x47 = INT8_MIN;
int16_t x48 = INT16_MAX;
uint32_t x49 = 159U;
int32_t t14 = 102692253;
int32_t x72 = INT32_MAX;
static int32_t x73 = -1;
int16_t x77 = -1;
uint16_t x80 = UINT16_MAX;
volatile int32_t t19 = -427;
volatile uint8_t x84 = 20U;
int32_t x85 = -14751039;
int16_t x86 = INT16_MIN;
uint64_t x87 = UINT64_MAX;
uint32_t x90 = 948U;
int32_t x92 = 242796185;
volatile int32_t t23 = 21210;
int32_t x100 = -1;
static volatile int32_t t26 = -8;
uint16_t x110 = 22788U;
volatile uint16_t x124 = 1U;
volatile int32_t t30 = -759877998;
volatile uint16_t x134 = UINT16_MAX;
volatile int32_t t33 = -260;
int32_t t34 = 981963;
static int64_t x151 = INT64_MIN;
int16_t x153 = 696;
static int32_t t39 = 31013;
volatile uint16_t x164 = 75U;
static volatile int32_t t40 = -52;
uint8_t x177 = 15U;
int32_t t45 = -1063463;
int32_t x190 = 111432;
volatile uint64_t x193 = 702622LLU;
static uint16_t x204 = 5846U;
static uint8_t x207 = UINT8_MAX;
int32_t x216 = INT32_MIN;
int64_t x224 = -4514090464445076677LL;
int64_t x228 = INT64_MIN;
uint32_t x240 = UINT32_MAX;
int32_t x252 = INT32_MAX;
static int16_t x253 = 1026;
int32_t x258 = INT32_MIN;
volatile int32_t t66 = -7844;
int32_t x277 = INT32_MAX;
uint64_t x281 = 3999435958LLU;
volatile int64_t x283 = INT64_MIN;
volatile int32_t t69 = 279145736;
int32_t x287 = -31;
static int32_t t71 = 336763;
static volatile uint8_t x293 = UINT8_MAX;
volatile uint8_t x295 = 19U;
uint64_t x296 = 8410980871LLU;
volatile int32_t x299 = INT32_MIN;
int64_t x300 = -16170147524998199LL;
int8_t x303 = INT8_MAX;
int32_t x304 = INT32_MAX;
static int32_t t74 = -3653;
int32_t t77 = 534069;
static int16_t x317 = INT16_MAX;
int32_t x323 = INT32_MIN;
uint32_t x332 = 1356U;
int16_t x333 = -1;
int32_t x334 = -71589;
volatile uint16_t x356 = UINT16_MAX;
static volatile int32_t x358 = INT32_MAX;
int8_t x360 = 1;
int16_t x364 = -1266;
volatile int32_t t88 = 3;
int64_t x367 = INT64_MIN;
int32_t t89 = 102829;
static int32_t x371 = -1;
static int32_t t91 = 11669;
volatile int32_t t92 = 182008414;
int16_t x384 = 29;
int8_t x398 = INT8_MAX;
static int32_t x404 = 1362310;
uint8_t x405 = UINT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 10221U;
	static int8_t x3 = INT8_MIN;
	static int32_t t0 = -9;

	t0 = ((x1^(x2/x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static volatile uint32_t x6 = 510097U;
	static volatile int16_t x7 = -43;
	uint8_t x8 = UINT8_MAX;

	t1 = ((x5^(x6/x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1691U;
	uint32_t x10 = 738U;
	static int64_t x11 = 3997972950337040583LL;
	volatile uint16_t x12 = 236U;
	volatile int32_t t2 = -4587;

	t2 = ((x9^(x10/x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	static int32_t x14 = 1;
	volatile int64_t x15 = 134161587LL;
	volatile uint64_t x16 = 110409314486439355LLU;

	t3 = ((x13^(x14/x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 1;
	int32_t x19 = -284;
	static volatile int32_t x20 = INT32_MIN;

	t4 = ((x17^(x18/x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = 18;
	volatile uint32_t x22 = UINT32_MAX;
	int8_t x23 = -2;
	volatile int32_t t5 = 19997;

	t5 = ((x21^(x22/x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = INT32_MAX;
	static int32_t x27 = -31632052;
	int64_t x28 = -1LL;
	int32_t t6 = 0;

	t6 = ((x25^(x26/x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = UINT8_MAX;
	int32_t x31 = 762;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 1890498;

	t7 = ((x29^(x30/x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;

	t8 = ((x33^(x34/x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int16_t x38 = INT16_MIN;
	volatile uint16_t x39 = UINT16_MAX;
	int32_t t9 = 586;

	t9 = ((x37^(x38/x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = UINT32_MAX;
	uint16_t x43 = 286U;

	t10 = ((x41^(x42/x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint8_t x46 = 10U;
	volatile int32_t t11 = 359578390;

	t11 = ((x45^(x46/x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -72707561;
	uint32_t x51 = 4024514U;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 682;

	t12 = ((x49^(x50/x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x53 = 5008842U;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	volatile int64_t x56 = INT64_MIN;
	int32_t t13 = 258106287;

	t13 = ((x53^(x54/x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	uint64_t x58 = 579948LLU;
	uint16_t x59 = UINT16_MAX;
	uint8_t x60 = 0U;

	t14 = ((x57^(x58/x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	static uint64_t x62 = UINT64_MAX;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	static int32_t t15 = -61806506;

	t15 = ((x61^(x62/x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	volatile int32_t x66 = INT32_MIN;
	volatile int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -7646449;

	t16 = ((x65^(x66/x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 3906412U;
	int32_t x71 = INT32_MAX;
	static int32_t t17 = 433348552;

	t17 = ((x69^(x70/x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = 26744U;
	int64_t x75 = -3805LL;
	volatile int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 81694543;

	t18 = ((x73^(x74/x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x78 = 46708849667LLU;
	int64_t x79 = INT64_MIN;

	t19 = ((x77^(x78/x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 3;
	static int8_t x82 = INT8_MAX;
	uint64_t x83 = UINT64_MAX;
	int32_t t20 = -140727;

	t20 = ((x81^(x82/x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x88 = 1042103LLU;
	volatile int32_t t21 = -41507603;

	t21 = ((x85^(x86/x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	uint64_t x91 = 1723341282LLU;
	int32_t t22 = -120885;

	t22 = ((x89^(x90/x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	volatile int64_t x94 = -2649722583038931LL;
	uint32_t x95 = 47U;
	int32_t x96 = 4834356;

	t23 = ((x93^(x94/x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = INT32_MIN;
	int8_t x98 = 6;
	int32_t x99 = -61672808;
	int32_t t24 = -569261;

	t24 = ((x97^(x98/x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = -1;
	int32_t x104 = 6;
	static int32_t t25 = 432318029;

	t25 = ((x101^(x102/x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MAX;
	int16_t x106 = -858;
	int16_t x107 = -1;
	uint64_t x108 = UINT64_MAX;

	t26 = ((x105^(x106/x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -1;
	int32_t x111 = 822119;
	uint16_t x112 = 19U;
	volatile int32_t t27 = -552842;

	t27 = ((x109^(x110/x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 76U;
	static volatile int64_t x114 = 17111LL;
	uint8_t x115 = 22U;
	uint8_t x116 = 1U;
	volatile int32_t t28 = 1;

	t28 = ((x113^(x114/x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -54;
	uint16_t x118 = 7388U;
	static uint32_t x119 = 109262922U;
	static int16_t x120 = 2949;
	volatile int32_t t29 = -1;

	t29 = ((x117^(x118/x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 3U;
	uint16_t x123 = 1040U;

	t30 = ((x121^(x122/x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 5609;

	t31 = ((x125^(x126/x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	volatile uint8_t x130 = 123U;
	volatile int32_t x131 = INT32_MIN;
	static int16_t x132 = 232;
	int32_t t32 = -23377;

	t32 = ((x129^(x130/x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 3U;
	int16_t x135 = 106;
	static uint8_t x136 = 30U;

	t33 = ((x133^(x134/x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 257429449U;
	static int8_t x138 = INT8_MAX;
	volatile uint32_t x139 = 43225U;
	int32_t x140 = INT32_MIN;

	t34 = ((x137^(x138/x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	volatile uint16_t x142 = 1466U;
	int8_t x143 = INT8_MAX;
	int16_t x144 = 83;
	static volatile int32_t t35 = -1;

	t35 = ((x141^(x142/x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 506531722701120LL;
	uint16_t x146 = 7U;
	int16_t x147 = -152;
	uint32_t x148 = 6080U;
	int32_t t36 = -157702190;

	t36 = ((x145^(x146/x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 3984U;
	int16_t x150 = -1;
	static volatile int16_t x152 = 0;
	volatile int32_t t37 = 1;

	t37 = ((x149^(x150/x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = UINT64_MAX;
	static int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 10897550;

	t38 = ((x153^(x154/x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x158 = 1U;
	int16_t x159 = INT16_MIN;
	volatile uint16_t x160 = 3U;

	t39 = ((x157^(x158/x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint64_t x162 = 1LLU;
	int64_t x163 = INT64_MIN;

	t40 = ((x161^(x162/x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 551U;
	int32_t x166 = 1;
	volatile uint64_t x167 = 2193LLU;
	int32_t x168 = -1;
	volatile int32_t t41 = 331;

	t41 = ((x165^(x166/x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 13880643LLU;
	int64_t x170 = -1LL;
	uint16_t x171 = 30961U;
	volatile uint16_t x172 = 1468U;
	static int32_t t42 = -235577248;

	t42 = ((x169^(x170/x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = UINT32_MAX;
	static int32_t x176 = 1633936;
	volatile int32_t t43 = 213700410;

	t43 = ((x173^(x174/x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = 3285U;
	volatile uint64_t x179 = 1628306090584LLU;
	int64_t x180 = -1LL;
	static volatile int32_t t44 = -2799;

	t44 = ((x177^(x178/x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	static int64_t x183 = INT64_MAX;
	int16_t x184 = -1;

	t45 = ((x181^(x182/x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -152634458LL;
	static uint64_t x186 = 751700644813737542LLU;
	uint8_t x187 = UINT8_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 17315502;

	t46 = ((x185^(x186/x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x191 = -510693;
	volatile int32_t x192 = 0;
	int32_t t47 = -853297;

	t47 = ((x189^(x190/x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x194 = -441742;
	int32_t x195 = 12237;
	int16_t x196 = 9150;
	static volatile int32_t t48 = 0;

	t48 = ((x193^(x194/x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	volatile int8_t x198 = INT8_MAX;
	int64_t x199 = INT64_MAX;
	uint16_t x200 = UINT16_MAX;
	static int32_t t49 = 0;

	t49 = ((x197^(x198/x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 2;
	static uint16_t x202 = 0U;
	volatile int32_t x203 = -1;
	int32_t t50 = 951177396;

	t50 = ((x201^(x202/x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -4979;
	int16_t x206 = INT16_MIN;
	static int64_t x208 = INT64_MIN;
	static int32_t t51 = -98368;

	t51 = ((x205^(x206/x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 14573LL;
	static int64_t x210 = 25608066LL;
	int64_t x211 = INT64_MIN;
	static int64_t x212 = INT64_MIN;
	int32_t t52 = 127541045;

	t52 = ((x209^(x210/x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 3958075026950574707LL;
	static int64_t x214 = INT64_MAX;
	volatile int64_t x215 = 132480593579798476LL;
	int32_t t53 = -44;

	t53 = ((x213^(x214/x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	static int8_t x220 = -1;
	static int32_t t54 = -42;

	t54 = ((x217^(x218/x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 4255285959852405LL;
	static uint64_t x222 = 1890497606LLU;
	static volatile int8_t x223 = INT8_MIN;
	static int32_t t55 = 669325;

	t55 = ((x221^(x222/x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	uint8_t x226 = UINT8_MAX;
	static uint32_t x227 = 2801718U;
	volatile int32_t t56 = -16352;

	t56 = ((x225^(x226/x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	static int8_t x230 = -1;
	volatile uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 5U;
	static int32_t t57 = -1041;

	t57 = ((x229^(x230/x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -5;
	volatile int16_t x234 = INT16_MAX;
	volatile int64_t x235 = -1101314261595177LL;
	volatile int8_t x236 = 15;
	volatile int32_t t58 = -228;

	t58 = ((x233^(x234/x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MAX;
	volatile int32_t t59 = 490;

	t59 = ((x237^(x238/x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x242 = 1U;
	static int8_t x243 = -1;
	uint32_t x244 = 1215U;
	volatile int32_t t60 = -14582;

	t60 = ((x241^(x242/x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static uint8_t x246 = UINT8_MAX;
	int8_t x247 = -5;
	uint64_t x248 = 385714419LLU;
	int32_t t61 = 1088413;

	t61 = ((x245^(x246/x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	uint8_t x250 = 1U;
	static int64_t x251 = -1LL;
	int32_t t62 = 0;

	t62 = ((x249^(x250/x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = INT64_MIN;
	volatile int8_t x256 = -1;
	volatile int32_t t63 = 34807091;

	t63 = ((x253^(x254/x255))<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = -170746;
	int32_t t64 = 37;

	t64 = ((x257^(x258/x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -1LL;
	static volatile uint32_t x262 = 2197134U;
	int16_t x263 = 4;
	int8_t x264 = 1;
	volatile int32_t t65 = 1162;

	t65 = ((x261^(x262/x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	static int64_t x266 = -1LL;
	volatile uint32_t x267 = 11385U;
	uint32_t x268 = 658832U;

	t66 = ((x265^(x266/x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	uint32_t x271 = 1171721U;
	uint8_t x272 = 11U;
	volatile int32_t t67 = -63853;

	t67 = ((x269^(x270/x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x278 = UINT32_MAX;
	static volatile int32_t x279 = INT32_MIN;
	uint16_t x280 = 3U;
	static int32_t t68 = -2;

	t68 = ((x277^(x278/x279))<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x282 = INT32_MIN;
	int32_t x284 = INT32_MIN;

	t69 = ((x281^(x282/x283))<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 911850983364337898LL;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	static int32_t t70 = -31598510;

	t70 = ((x285^(x286/x287))<=x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = -1;
	uint32_t x290 = 76U;
	int64_t x291 = INT64_MAX;
	volatile int32_t x292 = 15644272;

	t71 = ((x289^(x290/x291))<=x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x294 = INT64_MAX;
	static int32_t t72 = -1;

	t72 = ((x293^(x294/x295))<=x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 3LLU;
	int32_t t73 = -2825;

	t73 = ((x297^(x298/x299))<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -1LL;
	volatile int16_t x302 = -1;

	t74 = ((x301^(x302/x303))<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = 9118450;
	static uint16_t x307 = 72U;
	int16_t x308 = -7;
	static volatile int32_t t75 = -127;

	t75 = ((x305^(x306/x307))<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = 1027015501684312LLU;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t76 = 1034184;

	t76 = ((x309^(x310/x311))<=x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = 29U;
	uint64_t x314 = 27875235628026LLU;
	uint32_t x315 = 156987U;
	volatile int8_t x316 = 1;

	t77 = ((x313^(x314/x315))<=x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x318 = INT16_MAX;
	uint8_t x319 = UINT8_MAX;
	static int64_t x320 = -1LL;
	int32_t t78 = 7965;

	t78 = ((x317^(x318/x319))<=x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t79 = 7922235;

	t79 = ((x321^(x322/x323))<=x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x326 = 41330;
	volatile int8_t x327 = INT8_MAX;
	static int16_t x328 = INT16_MIN;
	int32_t t80 = 3;

	t80 = ((x325^(x326/x327))<=x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 1;
	uint32_t x330 = UINT32_MAX;
	static int64_t x331 = INT64_MIN;
	volatile int32_t t81 = 0;

	t81 = ((x329^(x330/x331))<=x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x335 = 1743002173554836712LLU;
	volatile int64_t x336 = INT64_MAX;
	int32_t t82 = -64416;

	t82 = ((x333^(x334/x335))<=x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = 1803387;
	int16_t x338 = -1;
	int8_t x339 = INT8_MAX;
	uint32_t x340 = UINT32_MAX;
	static volatile int32_t t83 = -443641198;

	t83 = ((x337^(x338/x339))<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 1258251936LLU;
	static int64_t x342 = INT64_MAX;
	static uint32_t x343 = 587100U;
	volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t84 = -263684;

	t84 = ((x341^(x342/x343))<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 6U;
	volatile int32_t t85 = 369;

	t85 = ((x345^(x346/x347))<=x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	static volatile int32_t x355 = INT32_MIN;
	volatile int32_t t86 = -1;

	t86 = ((x353^(x354/x355))<=x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = 119580010;
	volatile int64_t x359 = INT64_MAX;
	int32_t t87 = 1027370;

	t87 = ((x357^(x358/x359))<=x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x361 = -730563441;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 62137LLU;

	t88 = ((x361^(x362/x363))<=x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -1;
	uint8_t x366 = 18U;
	volatile int32_t x368 = INT32_MAX;

	t89 = ((x365^(x366/x367))<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x369 = 55U;
	uint64_t x370 = UINT64_MAX;
	static uint16_t x372 = UINT16_MAX;
	int32_t t90 = -7233651;

	t90 = ((x369^(x370/x371))<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = INT16_MIN;
	static uint16_t x375 = 7816U;
	uint64_t x376 = 242272306149653LLU;

	t91 = ((x373^(x374/x375))<=x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x377 = UINT8_MAX;
	static int8_t x378 = -1;
	static volatile uint64_t x379 = 65LLU;
	int16_t x380 = 119;

	t92 = ((x377^(x378/x379))<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x381 = -219856733;
	int32_t x382 = -2100;
	int16_t x383 = INT16_MAX;
	volatile int32_t t93 = 14;

	t93 = ((x381^(x382/x383))<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = -1LL;
	volatile int8_t x386 = 1;
	int16_t x387 = 88;
	volatile int8_t x388 = 17;
	int32_t t94 = -795676387;

	t94 = ((x385^(x386/x387))<=x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 3355790508630LLU;
	int64_t x390 = -1LL;
	uint64_t x391 = 1107403503946278239LLU;
	int16_t x392 = INT16_MIN;
	volatile int32_t t95 = 621;

	t95 = ((x389^(x390/x391))<=x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 101U;
	static uint64_t x394 = 7234140LLU;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = -5747177166969LL;
	volatile int32_t t96 = 1;

	t96 = ((x393^(x394/x395))<=x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	int64_t x400 = -1LL;
	volatile int32_t t97 = 2972;

	t97 = ((x397^(x398/x399))<=x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x401 = INT16_MIN;
	uint64_t x402 = 225729114975081LLU;
	uint16_t x403 = UINT16_MAX;
	int32_t t98 = 270;

	t98 = ((x401^(x402/x403))<=x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x406 = 5029275752308313LLU;
	int64_t x407 = INT64_MIN;
	volatile int32_t x408 = 2;
	int32_t t99 = 14079127;

	t99 = ((x405^(x406/x407))<=x408);

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

