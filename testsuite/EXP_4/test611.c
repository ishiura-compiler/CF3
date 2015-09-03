#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x3 = 1766762355253235841LLU;
volatile int64_t t0 = -2949168575967121798LL;
int64_t x7 = INT64_MAX;
volatile uint32_t x17 = UINT32_MAX;
int64_t x21 = INT64_MIN;
static int64_t t9 = -455714037240676LL;
uint64_t x42 = 4559241954953LLU;
volatile uint8_t x48 = 35U;
uint32_t x50 = UINT32_MAX;
static uint32_t x51 = UINT32_MAX;
int32_t t12 = 9;
uint32_t x53 = 456213U;
int64_t x56 = -1LL;
volatile int16_t x59 = -1;
static int32_t t16 = -5;
uint16_t x70 = UINT16_MAX;
volatile int32_t x76 = 493;
int32_t x81 = -1;
uint16_t x85 = 15U;
int8_t x95 = 1;
static int32_t x98 = INT32_MIN;
static int16_t x106 = INT16_MIN;
int32_t t26 = 492033;
static int64_t t28 = 242802823935029LL;
static int16_t x129 = -694;
int8_t x131 = INT8_MIN;
static int64_t x132 = INT64_MIN;
static int64_t x133 = INT64_MIN;
uint8_t x134 = UINT8_MAX;
volatile int64_t t33 = INT64_MIN;
volatile int8_t x146 = 1;
volatile int32_t x147 = INT32_MIN;
int32_t x150 = INT32_MIN;
static int16_t x162 = INT16_MAX;
static int32_t t41 = 17785458;
volatile int32_t t42 = -126;
volatile uint64_t t43 = UINT64_MAX;
uint64_t x184 = UINT64_MAX;
static int32_t x187 = -22473;
uint32_t x189 = 610312U;
volatile int64_t x193 = -1LL;
volatile uint64_t x195 = 807663790925759651LLU;
uint16_t x196 = 9U;
int64_t x214 = INT64_MAX;
static volatile int64_t x217 = -1LL;
static uint32_t x219 = 725U;
int32_t x228 = INT32_MAX;
volatile int16_t x235 = INT16_MAX;
static volatile uint64_t t61 = UINT64_MAX;
static int32_t t62 = 925;
int8_t x254 = 1;
static int8_t x263 = 1;
static int32_t t68 = INT32_MAX;
volatile uint8_t x279 = UINT8_MAX;
int32_t t69 = -645452265;
volatile int32_t t70 = INT32_MAX;
int8_t x288 = -1;
volatile int32_t t72 = 1980;
int16_t x294 = -1;
volatile int32_t t73 = 5667284;
int8_t x300 = -1;
volatile int64_t t74 = INT64_MIN;
volatile int16_t x302 = -5;
static int64_t x304 = -64LL;
volatile int64_t t75 = INT64_MAX;
int64_t x314 = -1LL;
int64_t x315 = -128828971898731LL;
volatile int32_t t78 = 0;
volatile int32_t t79 = 71523129;
uint8_t x326 = UINT8_MAX;
int64_t x328 = INT64_MAX;
volatile uint16_t x330 = 46U;
int8_t x332 = INT8_MIN;
volatile int32_t t82 = 552777;
int16_t x333 = INT16_MIN;
volatile int64_t t84 = INT64_MAX;
int8_t x349 = -1;
int16_t x356 = 1;
volatile int32_t x357 = INT32_MAX;
int8_t x361 = -1;
int32_t x387 = -1;
static volatile int32_t x391 = INT32_MIN;
int32_t t96 = 51;
volatile int32_t t99 = 28;


void f0(void) {
	int64_t x1 = -1LL;
	uint64_t x2 = 40225151LLU;
	uint16_t x4 = 1026U;

	t0 = (x1^(x2==(x3/x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 3570337842854LL;
	volatile int64_t x6 = -1LL;
	static int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -167978365808LL;

	t1 = (x5^(x6==(x7/x8)));

	if (t1 != 3570337842854LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 19196;
	int32_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = 97266981;

	t2 = (x9^(x10==(x11/x12)));

	if (t2 != 19196) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 23;
	volatile int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = 18LLU;
	int32_t t3 = -26747;

	t3 = (x13^(x14==(x15/x16)));

	if (t3 != 23) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -2;
	int16_t x19 = INT16_MIN;
	int8_t x20 = 2;
	static volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17^(x18==(x19/x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 1140262U;
	volatile int16_t x24 = 858;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21^(x22==(x23/x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 63U;
	volatile int8_t x26 = 2;
	uint8_t x27 = 6U;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -4;

	t6 = (x25^(x26==(x27/x28)));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x30 = -60;
	volatile uint8_t x31 = 15U;
	volatile int64_t x32 = -11LL;
	int32_t t7 = -4543;

	t7 = (x29^(x30==(x31/x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MAX;
	static int8_t x36 = INT8_MAX;
	int32_t t8 = INT32_MIN;

	t8 = (x33^(x34==(x35/x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 30536LL;
	volatile uint32_t x38 = 49466884U;
	uint32_t x39 = 19798773U;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37^(x38==(x39/x40)));

	if (t9 != 30536LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int64_t x43 = -1LL;
	static int16_t x44 = INT16_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41^(x42==(x43/x44)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	volatile int32_t t11 = 55150082;

	t11 = (x45^(x46==(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 602U;
	int32_t x52 = 24754717;

	t12 = (x49^(x50==(x51/x52)));

	if (t12 != 602) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 12676;
	static volatile uint8_t x55 = 1U;
	static uint32_t t13 = 57273559U;

	t13 = (x53^(x54==(x55/x56)));

	if (t13 != 456213U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = 61;
	int16_t x60 = -1;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57^(x58==(x59/x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	uint64_t x62 = 1012002005LLU;
	int32_t x63 = -278;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x61^(x62==(x63/x64)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -74716273;
	static uint8_t x66 = UINT8_MAX;
	volatile int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 1115382667U;

	t16 = (x65^(x66==(x67/x68)));

	if (t16 != -74716273) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 0U;
	int16_t x71 = -1;
	int8_t x72 = -1;
	int32_t t17 = 1;

	t17 = (x69^(x70==(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73^(x74==(x75/x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 22452627U;
	int8_t x78 = INT8_MIN;
	static int16_t x79 = -1;
	uint64_t x80 = 440587476LLU;
	volatile uint32_t t19 = 1897U;

	t19 = (x77^(x78==(x79/x80)));

	if (t19 != 22452627U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MAX;
	static int64_t x83 = 501710300880LL;
	uint64_t x84 = 7361049LLU;
	int32_t t20 = 111490151;

	t20 = (x81^(x82==(x83/x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = 118U;
	uint8_t x88 = 35U;
	volatile int32_t t21 = 160221;

	t21 = (x85^(x86==(x87/x88)));

	if (t21 != 15) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 482036LLU;
	int8_t x90 = -12;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	volatile uint64_t t22 = 98910LLU;

	t22 = (x89^(x90==(x91/x92)));

	if (t22 != 482036LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 1;
	int16_t x94 = INT16_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -2552311;

	t23 = (x93^(x94==(x95/x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x99 = -1;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 11;

	t24 = (x97^(x98==(x99/x100)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -5651453906LL;
	volatile int64_t x102 = INT64_MAX;
	uint16_t x103 = 56U;
	int64_t x104 = -1LL;
	int64_t t25 = 17878927044716429LL;

	t25 = (x101^(x102==(x103/x104)));

	if (t25 != -5651453906LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 503U;
	int64_t x107 = INT64_MIN;
	volatile uint64_t x108 = UINT64_MAX;

	t26 = (x105^(x106==(x107/x108)));

	if (t26 != 503) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	int32_t x110 = -1;
	int16_t x111 = 1961;
	int16_t x112 = INT16_MAX;
	static uint32_t t27 = UINT32_MAX;

	t27 = (x109^(x110==(x111/x112)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 22740034364920808LL;
	volatile int32_t x114 = INT32_MIN;
	static uint32_t x115 = 216U;
	volatile uint16_t x116 = 93U;

	t28 = (x113^(x114==(x115/x116)));

	if (t28 != 22740034364920808LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 15U;
	int32_t x118 = 126962082;
	int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -1;

	t29 = (x117^(x118==(x119/x120)));

	if (t29 != 15) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 2205696018594LL;
	static int16_t x122 = INT16_MAX;
	int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MAX;
	volatile int64_t t30 = 82LL;

	t30 = (x121^(x122==(x123/x124)));

	if (t30 != 2205696018594LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 8122502U;
	int32_t x126 = INT32_MIN;
	int64_t x127 = INT64_MAX;
	int16_t x128 = INT16_MAX;
	volatile uint32_t t31 = 1644335010U;

	t31 = (x125^(x126==(x127/x128)));

	if (t31 != 8122502U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = 2;
	int32_t t32 = 55706684;

	t32 = (x129^(x130==(x131/x132)));

	if (t32 != -694) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x135 = 149233U;
	volatile uint32_t x136 = 214485U;

	t33 = (x133^(x134==(x135/x136)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x138 = 87748999405LLU;
	int8_t x139 = INT8_MAX;
	volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = 3;

	t34 = (x137^(x138==(x139/x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -397979347LL;
	static int8_t x142 = -63;
	static uint32_t x143 = 917441U;
	uint8_t x144 = 2U;
	int64_t t35 = 698887209LL;

	t35 = (x141^(x142==(x143/x144)));

	if (t35 != -397979347LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	int8_t x148 = -2;
	static volatile int32_t t36 = 815330;

	t36 = (x145^(x146==(x147/x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	uint32_t x151 = 31U;
	static int8_t x152 = 11;
	volatile int32_t t37 = 28998260;

	t37 = (x149^(x150==(x151/x152)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -15835933756LL;
	volatile int16_t x154 = -3178;
	static int8_t x155 = -15;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 13606418137313LL;

	t38 = (x153^(x154==(x155/x156)));

	if (t38 != -15835933756LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MAX;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	int64_t t39 = INT64_MAX;

	t39 = (x157^(x158==(x159/x160)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	uint16_t x163 = 218U;
	uint32_t x164 = 836769U;
	int64_t t40 = INT64_MIN;

	t40 = (x161^(x162==(x163/x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 90U;
	uint8_t x166 = 14U;
	static int64_t x167 = -1LL;
	volatile int16_t x168 = INT16_MIN;

	t41 = (x165^(x166==(x167/x168)));

	if (t41 != 90) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MIN;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = -56062466834LL;

	t42 = (x169^(x170==(x171/x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x173 = UINT64_MAX;
	static int16_t x174 = 83;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MAX;

	t43 = (x173^(x174==(x175/x176)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint64_t x178 = 121279599116903325LLU;
	int8_t x179 = INT8_MIN;
	static int8_t x180 = INT8_MIN;
	int32_t t44 = -16;

	t44 = (x177^(x178==(x179/x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -3342LL;
	int8_t x182 = -21;
	volatile int8_t x183 = INT8_MIN;
	int64_t t45 = 38504LL;

	t45 = (x181^(x182==(x183/x184)));

	if (t45 != -3342LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	int64_t x188 = 5LL;
	volatile int32_t t46 = -585558022;

	t46 = (x185^(x186==(x187/x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x190 = 134651281908665LLU;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile uint32_t t47 = 6U;

	t47 = (x189^(x190==(x191/x192)));

	if (t47 != 610312U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = -41;
	volatile int64_t t48 = 11675556536LL;

	t48 = (x193^(x194==(x195/x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 4491U;
	static volatile uint64_t x198 = 3142LLU;
	uint16_t x199 = 12746U;
	int64_t x200 = 11LL;
	int32_t t49 = 3;

	t49 = (x197^(x198==(x199/x200)));

	if (t49 != 4491) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = -2;
	int64_t x203 = -1LL;
	static uint16_t x204 = 2777U;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x201^(x202==(x203/x204)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 82U;
	volatile int16_t x206 = 0;
	static int16_t x207 = -15;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -72;

	t51 = (x205^(x206==(x207/x208)));

	if (t51 != 83) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	int32_t x212 = INT32_MAX;
	int32_t t52 = 3860;

	t52 = (x209^(x210==(x211/x212)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1221;
	volatile int16_t x215 = INT16_MIN;
	uint64_t x216 = 102684LLU;
	volatile int32_t t53 = 16471417;

	t53 = (x213^(x214==(x215/x216)));

	if (t53 != -1221) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 87U;
	uint32_t x220 = 3U;
	volatile int64_t t54 = -3245391026LL;

	t54 = (x217^(x218==(x219/x220)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 32610248067190LLU;
	volatile int16_t x222 = -1;
	int64_t x223 = INT64_MAX;
	int32_t x224 = -1;
	static volatile uint64_t t55 = 59654980492649117LLU;

	t55 = (x221^(x222==(x223/x224)));

	if (t55 != 32610248067190LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = 135724968269355LL;
	uint16_t x226 = 4291U;
	int32_t x227 = -53697931;
	volatile int64_t t56 = 71LL;

	t56 = (x225^(x226==(x227/x228)));

	if (t56 != 135724968269355LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 1110U;
	static int16_t x231 = -1;
	static int64_t x232 = -1LL;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x229^(x230==(x231/x232)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = 677238LL;
	int16_t x236 = -14;
	volatile int32_t t58 = 6577865;

	t58 = (x233^(x234==(x235/x236)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -1023271;
	volatile int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 33;

	t59 = (x237^(x238==(x239/x240)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	static int64_t x242 = INT64_MIN;
	uint64_t x243 = 310LLU;
	int64_t x244 = -1LL;
	int32_t t60 = INT32_MIN;

	t60 = (x241^(x242==(x243/x244)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 7U;
	volatile int32_t x247 = 21105;
	int64_t x248 = INT64_MAX;

	t61 = (x245^(x246==(x247/x248)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -1;
	volatile int64_t x251 = -1LL;
	uint64_t x252 = 104449938185933LLU;

	t62 = (x249^(x250==(x251/x252)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile uint32_t x255 = 1U;
	int8_t x256 = INT8_MIN;
	int32_t t63 = 4519478;

	t63 = (x253^(x254==(x255/x256)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 69;
	int16_t x258 = -1;
	static int16_t x259 = INT16_MIN;
	static int64_t x260 = INT64_MIN;
	int32_t t64 = 199;

	t64 = (x257^(x258==(x259/x260)));

	if (t64 != 69) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 230153991U;
	volatile uint16_t x262 = 2107U;
	int64_t x264 = INT64_MIN;
	uint32_t t65 = 2U;

	t65 = (x261^(x262==(x263/x264)));

	if (t65 != 230153991U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = -1;
	uint8_t x267 = 15U;
	uint16_t x268 = 126U;
	volatile int32_t t66 = 2;

	t66 = (x265^(x266==(x267/x268)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 45U;
	uint8_t x270 = 12U;
	int64_t x271 = INT64_MAX;
	int32_t x272 = 399;
	static volatile int32_t t67 = 280340690;

	t67 = (x269^(x270==(x271/x272)));

	if (t67 != 45) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	static uint64_t x274 = 3172LLU;
	static uint16_t x275 = 968U;
	int8_t x276 = INT8_MAX;

	t68 = (x273^(x274==(x275/x276)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int64_t x278 = 48255357154LL;
	static uint16_t x280 = UINT16_MAX;

	t69 = (x277^(x278==(x279/x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	static uint32_t x283 = UINT32_MAX;
	int16_t x284 = INT16_MIN;

	t70 = (x281^(x282==(x283/x284)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	static int32_t x286 = -1;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = -5413170;

	t71 = (x285^(x286==(x287/x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = INT32_MIN;
	int16_t x291 = -1;
	static volatile int8_t x292 = INT8_MIN;

	t72 = (x289^(x290==(x291/x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x295 = INT8_MAX;
	int64_t x296 = INT64_MAX;

	t73 = (x293^(x294==(x295/x296)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 1200U;

	t74 = (x297^(x298==(x299/x300)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MAX;
	int8_t x303 = INT8_MIN;

	t75 = (x301^(x302==(x303/x304)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static volatile int8_t x306 = -1;
	int32_t x307 = -1;
	int8_t x308 = 3;
	uint32_t t76 = UINT32_MAX;

	t76 = (x305^(x306==(x307/x308)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	static volatile int64_t x312 = -215LL;
	int64_t t77 = INT64_MIN;

	t77 = (x309^(x310==(x311/x312)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x316 = -1;

	t78 = (x313^(x314==(x315/x316)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static uint32_t x318 = 60U;
	uint16_t x319 = 0U;
	uint64_t x320 = 99353974737004818LLU;

	t79 = (x317^(x318==(x319/x320)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int16_t x322 = -1;
	int16_t x323 = 58;
	int32_t x324 = -832410617;
	int64_t t80 = INT64_MAX;

	t80 = (x321^(x322==(x323/x324)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 30U;
	uint8_t x327 = UINT8_MAX;
	int32_t t81 = 39;

	t81 = (x325^(x326==(x327/x328)));

	if (t81 != 30) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x329 = 1;
	uint16_t x331 = 22585U;

	t82 = (x329^(x330==(x331/x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	static uint16_t x336 = 21597U;
	int32_t t83 = 80;

	t83 = (x333^(x334==(x335/x336)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	uint8_t x338 = 7U;
	static int16_t x339 = INT16_MIN;
	volatile uint16_t x340 = 10656U;

	t84 = (x337^(x338==(x339/x340)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MIN;
	volatile uint64_t x343 = 30260526874LLU;
	volatile int32_t x344 = -1;
	int32_t t85 = INT32_MIN;

	t85 = (x341^(x342==(x343/x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MAX;
	volatile int8_t x352 = 15;
	volatile int32_t t86 = -1;

	t86 = (x349^(x350==(x351/x352)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = -8;
	int16_t x354 = 0;
	uint64_t x355 = 185616LLU;
	int32_t t87 = 3757;

	t87 = (x353^(x354==(x355/x356)));

	if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	static uint8_t x360 = 63U;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x357^(x358==(x359/x360)));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x362 = 6U;
	int64_t x363 = 1938558935393LL;
	int32_t x364 = -1;
	static int32_t t89 = -151477298;

	t89 = (x361^(x362==(x363/x364)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x365 = 4014762U;
	volatile uint64_t x366 = 12921485650157503LLU;
	int16_t x367 = INT16_MAX;
	static volatile uint64_t x368 = 55553LLU;
	volatile uint32_t t90 = 2008U;

	t90 = (x365^(x366==(x367/x368)));

	if (t90 != 4014762U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MIN;
	static int64_t x370 = INT64_MIN;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MAX;
	int32_t t91 = -862;

	t91 = (x369^(x370==(x371/x372)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int16_t x374 = -952;
	int64_t x375 = INT64_MIN;
	int8_t x376 = 1;
	int64_t t92 = INT64_MIN;

	t92 = (x373^(x374==(x375/x376)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = INT32_MAX;
	int16_t x378 = -345;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MAX;
	int32_t t93 = INT32_MAX;

	t93 = (x377^(x378==(x379/x380)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = -1;
	int8_t x382 = -1;
	int64_t x383 = 12476LL;
	static volatile int64_t x384 = INT64_MAX;
	static int32_t t94 = -20;

	t94 = (x381^(x382==(x383/x384)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -1;
	static uint64_t x386 = 4265LLU;
	uint32_t x388 = UINT32_MAX;
	static int32_t t95 = 13;

	t95 = (x385^(x386==(x387/x388)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x389 = -1776;
	volatile uint64_t x390 = 7072911LLU;
	uint8_t x392 = 18U;

	t96 = (x389^(x390==(x391/x392)));

	if (t96 != -1776) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x393 = UINT8_MAX;
	uint64_t x394 = UINT64_MAX;
	static uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t97 = 69553398;

	t97 = (x393^(x394==(x395/x396)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 1U;
	int64_t x398 = -13522237149LL;
	uint16_t x399 = 82U;
	int16_t x400 = -755;
	static volatile int32_t t98 = -15;

	t98 = (x397^(x398==(x399/x400)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x401 = -1;
	uint64_t x402 = 17736696LLU;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MAX;

	t99 = (x401^(x402==(x403/x404)));

	if (t99 != -1) { NG(); } else { ; }
	
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

