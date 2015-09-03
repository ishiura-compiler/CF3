#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MIN;
int32_t x11 = -1;
volatile uint16_t x16 = UINT16_MAX;
static uint32_t x22 = 10043849U;
static int64_t x25 = INT64_MIN;
uint64_t x31 = 3LLU;
int16_t x32 = -1;
volatile int8_t x41 = INT8_MAX;
int8_t x51 = -49;
int64_t x58 = INT64_MAX;
int64_t t16 = -116927704125LL;
int32_t x73 = INT32_MIN;
volatile int64_t t18 = 2489LL;
int8_t x78 = INT8_MAX;
static uint16_t x82 = 3420U;
volatile int8_t x96 = -1;
int32_t x98 = -1;
uint8_t x104 = UINT8_MAX;
volatile uint64_t t26 = 293LLU;
static int64_t x117 = INT64_MIN;
static int16_t x123 = 0;
int32_t t32 = 950098;
static int8_t x144 = INT8_MIN;
int8_t x151 = INT8_MIN;
uint64_t x158 = 4244773375096665LLU;
volatile uint32_t x159 = 682U;
int64_t x160 = 3247436LL;
static uint32_t x167 = 248330654U;
uint8_t x175 = 26U;
uint8_t x176 = 54U;
int32_t x186 = INT32_MIN;
volatile int32_t x190 = INT32_MAX;
volatile uint64_t t46 = 1594226809LLU;
uint64_t x194 = UINT64_MAX;
static int32_t x196 = 5084058;
volatile uint64_t t47 = 32804964634882721LLU;
static int64_t x200 = -1LL;
uint32_t x205 = 17U;
static int32_t t52 = -10;
int8_t x218 = INT8_MAX;
int32_t x220 = INT32_MIN;
static uint32_t t54 = 12929680U;
static volatile int64_t x227 = INT64_MIN;
int8_t x233 = -7;
static uint16_t x238 = 66U;
int8_t x239 = INT8_MIN;
int32_t x245 = INT32_MIN;
static uint32_t x248 = 169220U;
uint32_t x256 = UINT32_MAX;
volatile int64_t t62 = 60038773344709LL;
int64_t x258 = INT64_MIN;
volatile int64_t x260 = INT64_MAX;
volatile uint32_t x271 = 2U;
int32_t x285 = -39;
uint8_t x290 = 9U;
int64_t t71 = -6298168LL;
volatile int32_t x293 = 12436633;
static volatile int64_t x297 = -236281LL;
static volatile int16_t x304 = INT16_MIN;
uint8_t x307 = UINT8_MAX;
uint64_t x317 = UINT64_MAX;
int16_t x321 = -1;
uint32_t t78 = 54115977U;
int32_t t79 = 630759493;
int64_t x332 = -567LL;
uint64_t t80 = 17698761348LLU;
int16_t x334 = -1;
int8_t x335 = INT8_MIN;
volatile uint32_t t81 = 20473440U;
static uint8_t x345 = 9U;
uint64_t x347 = UINT64_MAX;
uint32_t x348 = 6795157U;
static uint32_t x352 = 2363944U;
int64_t t84 = 14286LL;
uint32_t x359 = 47195U;
int32_t x365 = -414459;
volatile uint8_t x366 = 4U;
uint8_t x383 = UINT8_MAX;
int32_t x385 = INT32_MIN;
uint16_t x389 = 2313U;
int16_t x390 = INT16_MIN;
volatile int64_t x391 = -22LL;
int16_t x399 = INT16_MAX;
volatile int16_t x401 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MAX;
	int16_t x4 = -11725;
	int32_t t0 = 88290;

	t0 = (((x1^x2)|x3)/x4);

	if (t0 != -183151) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	static volatile int64_t t1 = -7007904148LL;

	t1 = (((x5^x6)|x7)/x8);

	if (t1 != 72057594021150976LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 262822141LL;
	int8_t x10 = 12;
	int64_t x12 = -32904LL;
	volatile int64_t t2 = -479199848718LL;

	t2 = (((x9^x10)|x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int8_t x14 = INT8_MAX;
	static volatile int32_t x15 = -1;
	volatile int32_t t3 = 2370;

	t3 = (((x13^x14)|x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 1U;
	volatile uint64_t x18 = UINT64_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile int32_t x20 = INT32_MIN;
	volatile uint64_t t4 = 6747357LLU;

	t4 = (((x17^x18)|x19)/x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int64_t x23 = INT64_MAX;
	volatile int8_t x24 = INT8_MIN;
	volatile int64_t t5 = 2090148868LL;

	t5 = (((x21^x22)|x23)/x24);

	if (t5 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 2907LL;

	t6 = (((x25^x26)|x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = -1;
	volatile uint64_t t7 = 1877LLU;

	t7 = (((x29^x30)|x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 16000;
	volatile int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = 10241;

	t8 = (((x33^x34)|x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	uint16_t x38 = 456U;
	uint16_t x39 = 1329U;
	int8_t x40 = -1;
	static volatile int32_t t9 = -5574;

	t9 = (((x37^x38)|x39)/x40);

	if (t9 != 2147482119) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 3965U;
	volatile int32_t x44 = INT32_MAX;
	int64_t t10 = -5LL;

	t10 = (((x41^x42)|x43)/x44);

	if (t10 != -4294967297LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 9U;
	uint16_t x46 = 16567U;
	volatile int64_t x47 = 1712570219624387LL;
	int8_t x48 = 1;
	volatile int64_t t11 = 312850LL;

	t11 = (((x45^x46)|x47)/x48);

	if (t11 != 1712570219624447LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	static uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -44019;

	t12 = (((x49^x50)|x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static int16_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = -1LL;
	volatile uint64_t t13 = 245348716611LLU;

	t13 = (((x53^x54)|x55)/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MAX;
	int64_t t14 = -3434087517956542LL;

	t14 = (((x57^x58)|x59)/x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MAX;
	int8_t x64 = -1;
	volatile int64_t t15 = 533829438LL;

	t15 = (((x61^x62)|x63)/x64);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int32_t x66 = INT32_MIN;
	uint8_t x67 = UINT8_MAX;
	static int8_t x68 = 1;

	t16 = (((x65^x66)|x67)/x68);

	if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 1U;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = INT32_MAX;
	uint32_t x72 = 4052U;
	uint32_t t17 = 856251320U;

	t17 = (((x69^x70)|x71)/x72);

	if (t17 != 1059962U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x74 = -1;
	volatile uint8_t x75 = UINT8_MAX;
	int64_t x76 = -1942735LL;

	t18 = (((x73^x74)|x75)/x76);

	if (t18 != -1105LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x79 = 26U;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = 2;

	t19 = (((x77^x78)|x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = 236872065524LL;
	volatile int64_t t20 = 0LL;

	t20 = (((x81^x82)|x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 745547U;
	volatile uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = -1;
	uint32_t x88 = UINT32_MAX;
	static volatile uint32_t t21 = 1U;

	t21 = (((x85^x86)|x87)/x88);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint64_t x90 = 4318LLU;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t22 = 124LLU;

	t22 = (((x89^x90)|x91)/x92);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 24LL;
	uint64_t x94 = 742346697LLU;
	int16_t x95 = INT16_MAX;
	volatile uint64_t t23 = 6015337030507943LLU;

	t23 = (((x93^x94)|x95)/x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int64_t x99 = -105LL;
	int8_t x100 = -1;
	int64_t t24 = 26001LL;

	t24 = (((x97^x98)|x99)/x100);

	if (t24 != 105LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 14106;
	int16_t x102 = INT16_MIN;
	volatile uint16_t x103 = 123U;
	int32_t t25 = 13;

	t25 = (((x101^x102)|x103)/x104);

	if (t25 != -72) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -346;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 25656U;
	volatile uint64_t x108 = 1114496409980543LLU;

	t26 = (((x105^x106)|x107)/x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -2;
	volatile int16_t x110 = -1138;
	static uint16_t x111 = UINT16_MAX;
	static volatile int32_t x112 = -27748070;
	volatile int32_t t27 = 28094;

	t27 = (((x109^x110)|x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -115853024LL;
	int32_t x115 = -11689;
	int64_t x116 = INT64_MAX;
	int64_t t28 = 2088869LL;

	t28 = (((x113^x114)|x115)/x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	static volatile int16_t x120 = 3867;
	volatile int64_t t29 = 446881LL;

	t29 = (((x117^x118)|x119)/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint16_t x122 = 70U;
	int32_t x124 = 1275;
	int32_t t30 = -4857763;

	t30 = (((x121^x122)|x123)/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 2208;
	volatile int64_t x126 = INT64_MIN;
	static int64_t x127 = -1LL;
	uint32_t x128 = 57718U;
	volatile int64_t t31 = -752887595LL;

	t31 = (((x125^x126)|x127)/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 228U;
	uint8_t x130 = 6U;
	static int8_t x131 = -13;
	volatile int32_t x132 = INT32_MIN;

	t32 = (((x129^x130)|x131)/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = UINT8_MAX;
	static uint32_t x136 = 29067495U;
	volatile uint32_t t33 = 98522U;

	t33 = (((x133^x134)|x135)/x136);

	if (t33 != 147U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = 2U;
	int32_t x139 = -178;
	int64_t x140 = 262069677742211LL;
	volatile int64_t t34 = -35LL;

	t34 = (((x137^x138)|x139)/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 40U;
	uint16_t x142 = 1187U;
	int64_t x143 = INT64_MIN;
	static int64_t t35 = 22433LL;

	t35 = (((x141^x142)|x143)/x144);

	if (t35 != 72057594037927926LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 514668008302544134LLU;
	volatile uint8_t x146 = 47U;
	int8_t x147 = -1;
	static volatile uint64_t x148 = 195768179664008LLU;
	uint64_t t36 = 21LLU;

	t36 = (((x145^x146)|x147)/x148);

	if (t36 != 94227LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -25;
	int64_t x150 = -1LL;
	volatile uint64_t x152 = 7594266083LLU;
	volatile uint64_t t37 = 1280713LLU;

	t37 = (((x149^x150)|x151)/x152);

	if (t37 != 2429035784LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	volatile int32_t x154 = -1;
	static volatile int8_t x155 = INT8_MIN;
	static uint16_t x156 = 3U;
	volatile int32_t t38 = -55;

	t38 = (((x153^x154)|x155)/x156);

	if (t38 != -42) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 0U;
	volatile uint64_t t39 = 566539LLU;

	t39 = (((x157^x158)|x159)/x160);

	if (t39 != 1307115328LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 2927LL;
	uint16_t x166 = UINT16_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile int64_t t40 = 169215397959444LL;

	t40 = (((x165^x166)|x167)/x168);

	if (t40 != 974042LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x169 = 5U;
	uint16_t x170 = 3794U;
	static volatile int8_t x171 = INT8_MAX;
	int32_t x172 = 42323;
	static volatile int32_t t41 = 2;

	t41 = (((x169^x170)|x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 2264LLU;
	int16_t x174 = -593;
	uint64_t t42 = 345085498834682LLU;

	t42 = (((x173^x174)|x175)/x176);

	if (t42 != 341606371735362017LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -304554103LL;
	int32_t x178 = -1;
	volatile int32_t x179 = INT32_MAX;
	volatile uint64_t x180 = 6581747LLU;
	volatile uint64_t t43 = 2335317386161367LLU;

	t43 = (((x177^x178)|x179)/x180);

	if (t43 != 326LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 3626LLU;
	static uint32_t x182 = 56U;
	int16_t x183 = INT16_MAX;
	volatile int64_t x184 = -1LL;
	uint64_t t44 = 4144221884787875707LLU;

	t44 = (((x181^x182)|x183)/x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = INT64_MIN;
	int64_t x187 = -1LL;
	uint16_t x188 = 197U;
	int64_t t45 = -565702LL;

	t45 = (((x185^x186)|x187)/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x189 = UINT64_MAX;
	uint16_t x191 = 7840U;
	int16_t x192 = INT16_MIN;

	t46 = (((x189^x190)|x191)/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = INT64_MAX;
	int32_t x195 = INT32_MAX;

	t47 = (((x193^x194)|x195)/x196);

	if (t47 != 1814175219677LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = 7;
	volatile int64_t x199 = INT64_MIN;
	static volatile int64_t t48 = -1LL;

	t48 = (((x197^x198)|x199)/x200);

	if (t48 != 121LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = -2717582;
	uint32_t x202 = 22U;
	uint32_t x203 = 94070U;
	int16_t x204 = -1;
	uint32_t t49 = 14891181U;

	t49 = (((x201^x202)|x203)/x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x206 = INT64_MAX;
	static int8_t x207 = 1;
	uint16_t x208 = UINT16_MAX;
	volatile int64_t t50 = 197715460760919LL;

	t50 = (((x205^x206)|x207)/x208);

	if (t50 != 140739635871744LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = 1U;
	uint32_t x211 = 46U;
	static uint32_t x212 = 52U;
	uint32_t t51 = 2480828U;

	t51 = (((x209^x210)|x211)/x212);

	if (t51 != 41297763U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = 0;
	static uint16_t x214 = UINT16_MAX;
	uint8_t x215 = UINT8_MAX;
	static volatile int8_t x216 = INT8_MIN;

	t52 = (((x213^x214)|x215)/x216);

	if (t52 != -511) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -1;
	int64_t x219 = 111910277LL;
	volatile int64_t t53 = 1684LL;

	t53 = (((x217^x218)|x219)/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = UINT32_MAX;
	static uint8_t x222 = 7U;
	volatile int32_t x223 = -79687;
	int16_t x224 = INT16_MIN;

	t54 = (((x221^x222)|x223)/x224);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile int32_t x226 = INT32_MAX;
	static int64_t x228 = 14925LL;
	volatile int64_t t55 = 1863490803301683834LL;

	t55 = (((x225^x226)|x227)/x228);

	if (t55 != -143884LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	static int8_t x230 = -1;
	static int64_t x231 = 7221209318543LL;
	int32_t x232 = INT32_MIN;
	int64_t t56 = 267730960500635223LL;

	t56 = (((x229^x230)|x231)/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x234 = -56083280;
	uint64_t x235 = 134946LLU;
	int64_t x236 = INT64_MAX;
	static volatile uint64_t t57 = 147086985LLU;

	t57 = (((x233^x234)|x235)/x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 548673LL;
	uint16_t x240 = 212U;
	int64_t t58 = -111332768LL;

	t58 = (((x237^x238)|x239)/x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 20423U;
	uint16_t x242 = 987U;
	uint8_t x243 = 4U;
	int32_t x244 = INT32_MIN;
	uint32_t t59 = 99260U;

	t59 = (((x241^x242)|x243)/x244);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x246 = INT32_MIN;
	int16_t x247 = -1;
	uint32_t t60 = 8U;

	t60 = (((x245^x246)|x247)/x248);

	if (t60 != 25380U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int16_t x251 = 57;
	static int16_t x252 = 50;
	int32_t t61 = 9079;

	t61 = (((x249^x250)|x251)/x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 42523685U;
	static int64_t x254 = -902055828444986668LL;
	volatile int32_t x255 = 32649068;

	t62 = (((x253^x254)|x255)/x256);

	if (t62 != -210026239LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = 0LL;
	uint8_t x259 = 2U;
	int64_t t63 = 0LL;

	t63 = (((x257^x258)|x259)/x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 5989232104206128920LLU;
	uint8_t x262 = 13U;
	uint16_t x263 = UINT16_MAX;
	volatile uint32_t x264 = UINT32_MAX;
	uint64_t t64 = 44868237882018LLU;

	t64 = (((x261^x262)|x263)/x264);

	if (t64 != 1394476766LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	uint32_t x266 = 126453463U;
	uint16_t x267 = 596U;
	static uint8_t x268 = 3U;
	uint32_t t65 = 2694260U;

	t65 = (((x265^x266)|x267)/x268);

	if (t65 != 1389504809U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 379LLU;
	int64_t x270 = -434LL;
	int16_t x272 = 244;
	uint64_t t66 = 0LLU;

	t66 = (((x269^x270)|x271)/x272);

	if (t66 != 75601410138153899LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MAX;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MAX;
	int32_t x276 = -483;
	volatile int32_t t67 = -7;

	t67 = (((x273^x274)|x275)/x276);

	if (t67 != 4446135) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = INT32_MIN;
	static int64_t x278 = -1LL;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = INT32_MAX;
	volatile int64_t t68 = -561583LL;

	t68 = (((x277^x278)|x279)/x280);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	int64_t x282 = -1LL;
	static volatile uint32_t x283 = 109039U;
	uint8_t x284 = 16U;
	int64_t t69 = 33658387535303388LL;

	t69 = (((x281^x282)|x283)/x284);

	if (t69 != 6814LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x286 = 47;
	static int8_t x287 = -1;
	int16_t x288 = -1;
	volatile int32_t t70 = -4083583;

	t70 = (((x285^x286)|x287)/x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	int64_t x291 = -1LL;
	volatile int8_t x292 = -1;

	t71 = (((x289^x290)|x291)/x292);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x294 = 2U;
	int64_t x295 = -1450LL;
	uint32_t x296 = UINT32_MAX;
	volatile int64_t t72 = -181468078614856947LL;

	t72 = (((x293^x294)|x295)/x296);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x298 = 6;
	static volatile int32_t x299 = INT32_MAX;
	static uint8_t x300 = UINT8_MAX;
	int64_t t73 = 29450612781806379LL;

	t73 = (((x297^x298)|x299)/x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	static int64_t x302 = INT64_MAX;
	static uint64_t x303 = UINT64_MAX;
	static volatile uint64_t t74 = 1810334108454LLU;

	t74 = (((x301^x302)|x303)/x304);

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = INT32_MIN;
	static int64_t x308 = 46179480544070888LL;
	static int64_t t75 = 398LL;

	t75 = (((x305^x306)|x307)/x308);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = -67;
	static int64_t x312 = -1LL;
	volatile uint64_t t76 = 51623437808LLU;

	t76 = (((x309^x310)|x311)/x312);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x318 = -1LL;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 240U;
	volatile uint64_t t77 = 5150LLU;

	t77 = (((x317^x318)|x319)/x320);

	if (t77 != 38430716820228232LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x322 = UINT16_MAX;
	uint32_t x323 = 487U;
	int8_t x324 = -1;

	t78 = (((x321^x322)|x323)/x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -3830820;
	static int32_t x326 = INT32_MAX;
	int32_t x327 = INT32_MAX;
	static int16_t x328 = -1;

	t79 = (((x325^x326)|x327)/x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x330 = 9002800388603LLU;
	int16_t x331 = -76;

	t80 = (((x329^x330)|x331)/x332);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x336 = 3264926U;

	t81 = (((x333^x334)|x335)/x336);

	if (t81 != 1315U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = 0U;
	uint32_t x343 = 92499U;
	int8_t x344 = INT8_MIN;
	volatile int64_t t82 = 54285711778LL;

	t82 = (((x341^x342)|x343)/x344);

	if (t82 != 72057594037927213LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x346 = UINT32_MAX;
	volatile uint64_t t83 = 124857268994777LLU;

	t83 = (((x345^x346)|x347)/x348);

	if (t83 != 2714689899543LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 1802981363697LL;
	int32_t x350 = 1;
	int16_t x351 = INT16_MAX;

	t84 = (((x349^x350)|x351)/x352);

	if (t84 != 762700LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 103267U;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;
	static volatile int64_t t85 = 21782674865807LL;

	t85 = (((x353^x354)|x355)/x356);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x357 = -1460712;
	static volatile int8_t x358 = -1;
	int32_t x360 = -1;
	static uint32_t t86 = 10365838U;

	t86 = (((x357^x358)|x359)/x360);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = -1LL;
	volatile uint8_t x362 = 0U;
	volatile int8_t x363 = 5;
	static uint32_t x364 = 7878U;
	int64_t t87 = 240LL;

	t87 = (((x361^x362)|x363)/x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x367 = 24948557U;
	int32_t x368 = -1;
	volatile uint32_t t88 = 60457617U;

	t88 = (((x365^x366)|x367)/x368);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	volatile uint16_t x370 = 14U;
	static uint8_t x371 = 39U;
	static int32_t x372 = INT32_MIN;
	static int32_t t89 = 0;

	t89 = (((x369^x370)|x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = 385;
	volatile int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MAX;
	volatile int16_t x376 = INT16_MAX;
	int64_t t90 = 62355909LL;

	t90 = (((x373^x374)|x375)/x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = -1;
	int64_t x379 = -1040647LL;
	static uint64_t x380 = 4114919122342LLU;
	volatile uint64_t t91 = 259490166471590174LLU;

	t91 = (((x377^x378)|x379)/x380);

	if (t91 != 4482893LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = 2328067U;
	volatile int8_t x384 = INT8_MIN;
	volatile uint32_t t92 = 1821721958U;

	t92 = (((x381^x382)|x383)/x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x386 = 193U;
	volatile uint64_t x387 = 4LLU;
	volatile int64_t x388 = INT64_MIN;
	volatile uint64_t t93 = 3326732528989880355LLU;

	t93 = (((x385^x386)|x387)/x388);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x392 = INT64_MIN;
	int64_t t94 = -512150903235659LL;

	t94 = (((x389^x390)|x391)/x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x393 = INT32_MIN;
	volatile int32_t x394 = -14;
	volatile int64_t x395 = -1LL;
	int32_t x396 = INT32_MAX;
	static int64_t t95 = -364023LL;

	t95 = (((x393^x394)|x395)/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t96 = 17520;

	t96 = (((x397^x398)|x399)/x400);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x402 = -1;
	uint64_t x403 = 272160495LLU;
	int64_t x404 = INT64_MAX;
	static volatile uint64_t t97 = 4LLU;

	t97 = (((x401^x402)|x403)/x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 16U;
	int64_t x406 = -1LL;
	uint32_t x407 = 688106363U;
	static int16_t x408 = -1;
	int64_t t98 = -97LL;

	t98 = (((x405^x406)|x407)/x408);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MAX;
	uint64_t x410 = 163LLU;
	uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MAX;
	uint64_t t99 = 3276485271631580LLU;

	t99 = (((x409^x410)|x411)/x412);

	if (t99 != 2LLU) { NG(); } else { ; }
	
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

