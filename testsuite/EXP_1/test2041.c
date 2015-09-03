#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
static uint32_t x3 = 14U;
volatile int32_t x4 = INT32_MIN;
volatile uint16_t x9 = UINT16_MAX;
int64_t x10 = 1818LL;
int16_t x12 = -1;
int8_t x16 = -1;
static uint64_t t5 = 106LLU;
int64_t x33 = INT64_MIN;
volatile int64_t t8 = 1126916LL;
uint64_t x49 = 59LLU;
int32_t x50 = INT32_MIN;
int64_t x51 = INT64_MIN;
volatile int64_t x56 = -28327102819178535LL;
uint64_t x57 = 56568LLU;
int32_t x61 = 5;
volatile int8_t x64 = -1;
int8_t x67 = -1;
volatile int64_t t15 = 47LL;
static int8_t x71 = INT8_MIN;
int32_t x73 = INT32_MAX;
volatile int8_t x75 = INT8_MAX;
uint64_t x76 = 341743365551165681LLU;
int64_t x80 = -1LL;
static uint64_t t20 = 63788489485391311LLU;
int16_t x102 = -1;
uint64_t t27 = 1439263818890LLU;
int8_t x128 = INT8_MAX;
volatile int16_t x129 = INT16_MAX;
static uint64_t x136 = UINT64_MAX;
volatile uint64_t t32 = 121695886145LLU;
volatile uint64_t t33 = 599141202LLU;
static uint32_t x141 = UINT32_MAX;
volatile uint16_t x147 = 4208U;
int32_t t35 = 1;
int32_t x150 = INT32_MIN;
int8_t x155 = INT8_MAX;
int32_t x158 = INT32_MAX;
int32_t x163 = -96;
int32_t x164 = 1483;
volatile int16_t x169 = INT16_MIN;
volatile int64_t x170 = INT64_MAX;
volatile uint16_t x177 = UINT16_MAX;
static uint64_t x183 = 31948323813922LLU;
int64_t x200 = INT64_MIN;
uint32_t t48 = 1477526980U;
volatile uint32_t x222 = UINT32_MAX;
volatile uint32_t t52 = 12066U;
static int16_t x228 = -1;
static int16_t x229 = -270;
volatile uint16_t x231 = 37U;
int8_t x237 = INT8_MIN;
uint64_t x239 = UINT64_MAX;
volatile int8_t x241 = INT8_MAX;
static uint64_t x242 = UINT64_MAX;
volatile int8_t x250 = 1;
uint64_t x259 = 444LLU;
uint32_t x262 = 0U;
int8_t x270 = -1;
uint64_t x271 = UINT64_MAX;
int64_t x290 = -17050484670115LL;
int8_t x292 = 15;
volatile int64_t t64 = 4095573421347526LL;
volatile uint32_t x302 = 21112U;
int32_t x303 = -1;
static int64_t x313 = -135244LL;
int32_t x319 = -31;
int16_t x323 = INT16_MIN;
static int16_t x328 = INT16_MAX;
static int64_t x334 = INT64_MIN;
volatile int16_t x354 = 118;
static int64_t t81 = 1694817903663LL;
uint32_t x361 = 1167669561U;
int16_t x364 = INT16_MIN;
int32_t x369 = INT32_MIN;
volatile uint64_t t83 = 29530756LLU;
static int16_t x374 = INT16_MAX;
uint16_t x376 = 505U;
volatile uint64_t t85 = 73045070915LLU;
uint8_t x385 = UINT8_MAX;
uint8_t x386 = UINT8_MAX;
int8_t x387 = INT8_MIN;
volatile int32_t t86 = -89043;
volatile int8_t x390 = -1;
uint16_t x404 = 425U;
volatile uint16_t x410 = 21814U;
volatile int64_t t90 = 32535LL;
volatile int32_t t91 = 61;
static int8_t x423 = 14;
volatile int32_t x433 = INT32_MAX;
uint32_t x435 = 1578U;
volatile int64_t x437 = -11326LL;
volatile uint64_t t98 = 8606689211202LLU;
static int32_t x456 = -1;


void f0(void) {
	int32_t x1 = -131061162;
	volatile uint32_t t0 = 187154U;

	t0 = (((x1^x2)+x3)^x4);

	if (t0 != 2278544823U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = -5;
	int16_t x7 = -1;
	volatile int16_t x8 = -1;
	volatile uint32_t t1 = 41U;

	t1 = (((x5^x6)+x7)^x8);

	if (t1 != 4294967292U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	int64_t t2 = 262003341359721673LL;

	t2 = (((x9^x10)+x11)^x12);

	if (t2 != -129253LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 52U;
	int64_t x14 = 115824113111084LL;
	static int64_t x15 = INT64_MIN;
	volatile int64_t t3 = -909594901364729635LL;

	t3 = (((x13^x14)+x15)^x16);

	if (t3 != 9223256212741664743LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1205;
	volatile uint8_t x18 = 11U;
	static int32_t x19 = INT32_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 0;

	t4 = (((x17^x18)+x19)^x20);

	if (t4 != -1217) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -23602407;
	volatile uint64_t x22 = 106543LLU;
	uint16_t x23 = 328U;
	uint32_t x24 = UINT32_MAX;

	t5 = (((x21^x22)+x23)^x24);

	if (t5 != 18446744069438276481LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 7668976128LLU;
	static uint16_t x30 = UINT16_MAX;
	int16_t x31 = INT16_MAX;
	int16_t x32 = 115;
	static volatile uint64_t t6 = 31LLU;

	t6 = (((x29^x30)+x31)^x32);

	if (t6 != 7669036429LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = UINT8_MAX;
	int16_t x36 = -709;
	volatile int64_t t7 = -691LL;

	t7 = (((x33^x34)+x35)^x36);

	if (t7 != 9223372036854774981LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x37 = 76U;
	int8_t x38 = 0;
	volatile int64_t x39 = 345888003943374LL;
	int64_t x40 = INT64_MIN;

	t8 = (((x37^x38)+x39)^x40);

	if (t8 != -9223026148850832358LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = INT64_MAX;
	uint32_t x42 = 1020571U;
	uint64_t x43 = 37111LLU;
	volatile int16_t x44 = -1;
	uint64_t t9 = 839LLU;

	t9 = (((x41^x42)+x43)^x44);

	if (t9 != 9223372036855759268LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	uint16_t x46 = 165U;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t10 = -708;

	t10 = (((x45^x46)+x47)^x48);

	if (t10 != -2147451047) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x52 = 36116741867997755LL;
	volatile uint64_t t11 = 928872790731LLU;

	t11 = (((x49^x50)+x51)^x52);

	if (t11 != 9187255295036656128LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	int16_t x55 = 588;
	int64_t t12 = 780042125275220883LL;

	t12 = (((x53^x54)+x55)^x56);

	if (t12 != -28327102819179115LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	int32_t x60 = 333793;
	uint64_t t13 = 2265LLU;

	t13 = (((x57^x58)+x59)^x60);

	if (t13 != 18446744071562447638LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MAX;
	volatile int32_t x63 = -1;
	int32_t t14 = 9;

	t14 = (((x61^x62)+x63)^x64);

	if (t14 != -32762) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 88743204255LL;
	volatile int16_t x66 = 1;
	static int16_t x68 = 40;

	t15 = (((x65^x66)+x67)^x68);

	if (t15 != 88743204277LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 55LLU;
	static int64_t x70 = INT64_MIN;
	int16_t x72 = INT16_MAX;
	uint64_t t16 = 10088LLU;

	t16 = (((x69^x70)+x71)^x72);

	if (t16 != 9223372036854743112LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x74 = UINT8_MAX;
	uint64_t t17 = 2222751115053LLU;

	t17 = (((x73^x74)+x75)^x76);

	if (t17 != 341743365416152974LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	uint16_t x78 = 0U;
	int32_t x79 = -1;
	volatile int64_t t18 = -444707813LL;

	t18 = (((x77^x78)+x79)^x80);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	static volatile int64_t x82 = INT64_MIN;
	int16_t x83 = -1516;
	uint64_t x84 = 5634683168331374895LLU;
	static volatile uint64_t t19 = 284172028943204285LLU;

	t19 = (((x81^x82)+x83)^x84);

	if (t19 != 3588688868523399355LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = UINT64_MAX;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;

	t20 = (((x85^x86)+x87)^x88);

	if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 1907LLU;
	int64_t x90 = INT64_MIN;
	volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = 0U;
	volatile uint64_t t21 = 384LLU;

	t21 = (((x89^x90)+x91)^x92);

	if (t21 != 1907LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	static uint32_t x94 = 749512424U;
	int16_t x95 = INT16_MAX;
	static volatile int64_t x96 = INT64_MIN;
	volatile int64_t t22 = 194LL;

	t22 = (((x93^x94)+x95)^x96);

	if (t22 != -9223372033309288170LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	static volatile int32_t x98 = -2490297;
	volatile int16_t x99 = -1;
	int16_t x100 = 7231;
	volatile int32_t t23 = -24571849;

	t23 = (((x97^x98)+x99)^x100);

	if (t23 != -2432120) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = -16445919;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	int64_t t24 = -98LL;

	t24 = (((x101^x102)+x103)^x104);

	if (t24 != 9223372036838355422LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x105 = 82U;
	uint8_t x106 = 14U;
	volatile int16_t x107 = INT16_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t25 = 127045847U;

	t25 = (((x105^x106)+x107)^x108);

	if (t25 != 4294934436U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = INT8_MAX;
	uint8_t x110 = 12U;
	int8_t x111 = -1;
	volatile int32_t x112 = -630635;
	volatile int32_t t26 = -7539377;

	t26 = (((x109^x110)+x111)^x112);

	if (t26 != -630553) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -530LL;
	volatile int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MAX;
	volatile uint64_t x116 = UINT64_MAX;

	t27 = (((x113^x114)+x115)^x116);

	if (t27 != 18446744073709551087LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = -1LL;
	uint32_t x118 = 49U;
	static int32_t x119 = INT32_MAX;
	volatile uint64_t x120 = 7646LLU;
	static uint64_t t28 = 185907266984LLU;

	t28 = (((x117^x118)+x119)^x120);

	if (t28 != 2147475987LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	volatile uint16_t x122 = UINT16_MAX;
	volatile uint8_t x123 = 81U;
	uint32_t x124 = 64512U;
	uint32_t t29 = 0U;

	t29 = (((x121^x122)+x123)^x124);

	if (t29 != 4294966353U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 334903287U;
	int8_t x126 = -8;
	volatile int32_t x127 = INT32_MAX;
	static volatile uint32_t t30 = 52680503U;

	t30 = (((x125^x126)+x127)^x128);

	if (t30 != 1812580465U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x130 = 13016U;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -1;
	uint32_t t31 = 4537U;

	t31 = (((x129^x130)+x131)^x132);

	if (t31 != 4294947672U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	volatile int8_t x135 = 3;

	t32 = (((x133^x134)+x135)^x136);

	if (t32 != 9223372039002259452LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MIN;

	t33 = (((x137^x138)+x139)^x140);

	if (t33 != 18446744071562100862LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = -1;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 1931U;
	uint32_t t34 = 24717983U;

	t34 = (((x141^x142)+x143)^x144);

	if (t34 != 4294936459U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -26;
	uint8_t x146 = 43U;
	uint8_t x148 = 14U;

	t35 = (((x145^x146)+x147)^x148);

	if (t35 != 4147) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	uint64_t x151 = 1037825181570484859LLU;
	int32_t x152 = INT32_MAX;
	static volatile uint64_t t36 = 322892086LLU;

	t36 = (((x149^x150)+x151)^x152);

	if (t36 != 1037825181353522565LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	volatile uint16_t x154 = UINT16_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t37 = 6032;

	t37 = (((x153^x154)+x155)^x156);

	if (t37 != -2147450753) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile uint16_t x159 = 110U;
	int32_t x160 = -7;
	static volatile int32_t t38 = 11002275;

	t38 = (((x157^x158)+x159)^x160);

	if (t38 != -108) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -1;
	int16_t x162 = INT16_MIN;
	static volatile int32_t t39 = 782580605;

	t39 = (((x161^x162)+x163)^x164);

	if (t39 != 31316) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x171 = 0U;
	uint32_t x172 = UINT32_MAX;
	int64_t t40 = -109LL;

	t40 = (((x169^x170)+x171)^x172);

	if (t40 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = -1LL;
	int64_t x174 = -2150791LL;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = INT64_MIN;
	static int64_t t41 = 2032837973789770067LL;

	t41 = (((x173^x174)+x175)^x176);

	if (t41 != -9223372032557657723LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x178 = INT8_MIN;
	volatile int64_t x179 = -384LL;
	uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 27LLU;

	t42 = (((x177^x178)+x179)^x180);

	if (t42 != 65792LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MAX;
	volatile uint64_t x182 = 5802186874303357381LLU;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t43 = 895808LLU;

	t43 = (((x181^x182)+x183)^x184);

	if (t43 != 12644525251082380323LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = -1;
	int8_t x192 = -30;
	int32_t t44 = 0;

	t44 = (((x189^x190)+x191)^x192);

	if (t44 != 156) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 7382U;
	uint8_t x194 = UINT8_MAX;
	static int8_t x195 = 5;
	uint16_t x196 = 10U;
	uint32_t t45 = 3228464U;

	t45 = (((x193^x194)+x195)^x196);

	if (t45 != 7204U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	static int64_t x198 = INT64_MIN;
	int64_t x199 = -1LL;
	volatile int64_t t46 = 111512393461843015LL;

	t46 = (((x197^x198)+x199)^x200);

	if (t46 != 4294967294LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = UINT16_MAX;
	int32_t x202 = -2733;
	int8_t x203 = INT8_MIN;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t47 = 1490089832076937111LLU;

	t47 = (((x201^x202)+x203)^x204);

	if (t47 != 62931LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = 1;
	volatile uint32_t x206 = UINT32_MAX;
	static volatile int16_t x207 = INT16_MAX;
	static int16_t x208 = -572;

	t48 = (((x205^x206)+x207)^x208);

	if (t48 != 4294935097U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = -15;
	uint32_t x210 = 379456391U;
	static volatile int64_t x211 = -791LL;
	volatile int32_t x212 = 408120184;
	volatile int64_t t49 = 178015014253LL;

	t49 = (((x209^x210)+x211)^x212);

	if (t49 != 4046625319LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -1;
	int32_t t50 = 4;

	t50 = (((x213^x214)+x215)^x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MAX;
	static volatile uint8_t x220 = 122U;
	int32_t t51 = 5379114;

	t51 = (((x217^x218)+x219)^x220);

	if (t51 != 2147483525) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = 3U;
	static volatile int32_t x223 = -762;
	int32_t x224 = -1;

	t52 = (((x221^x222)+x223)^x224);

	if (t52 != 765U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	static volatile uint8_t x226 = 0U;
	int32_t x227 = INT32_MAX;
	static volatile int32_t t53 = -26907;

	t53 = (((x225^x226)+x227)^x228);

	if (t53 != -2147483520) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t54 = 368010465016983339LL;

	t54 = (((x229^x230)+x231)^x232);

	if (t54 != -9223372034707292393LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x238 = -1LL;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t55 = 5394003992592LLU;

	t55 = (((x237^x238)+x239)^x240);

	if (t55 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;
	static volatile uint64_t t56 = 56937713712705LLU;

	t56 = (((x241^x242)+x243)^x244);

	if (t56 != 18446744071562100607LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	volatile int16_t x247 = -18;
	uint8_t x248 = 122U;
	static int64_t t57 = 2987LL;

	t57 = (((x245^x246)+x247)^x248);

	if (t57 != -9223372036854710377LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 45U;
	volatile uint32_t x251 = 228131U;
	volatile int64_t x252 = INT64_MIN;
	volatile int64_t t58 = -6211433LL;

	t58 = (((x249^x250)+x251)^x252);

	if (t58 != -9223372036854547633LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 1631U;
	static volatile int16_t x258 = -1;
	int16_t x260 = INT16_MAX;
	uint64_t t59 = 12545910037LLU;

	t59 = (((x257^x258)+x259)^x260);

	if (t59 != 4294935715LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	int64_t x264 = 333LL;
	int64_t t60 = 1540416904384140LL;

	t60 = (((x261^x262)+x263)^x264);

	if (t60 != 4294934221LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static volatile int32_t x267 = INT32_MIN;
	int16_t x268 = -1;
	static int32_t t61 = -2;

	t61 = (((x265^x266)+x267)^x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t62 = 570822772LLU;

	t62 = (((x269^x270)+x271)^x272);

	if (t62 != 98303LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x277 = 21U;
	static int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 63292U;
	volatile uint32_t t63 = 709712691U;

	t63 = (((x277^x278)+x279)^x280);

	if (t63 != 4294903849U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x289 = 2823;
	static uint16_t x291 = UINT16_MAX;

	t64 = (((x289^x290)+x291)^x292);

	if (t64 != -17050484602282LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = -54;
	uint64_t x294 = UINT64_MAX;
	static int8_t x295 = INT8_MAX;
	volatile uint64_t x296 = 6738008732LLU;
	volatile uint64_t t65 = 67428170426443LLU;

	t65 = (((x293^x294)+x295)^x296);

	if (t65 != 6738008616LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x297 = 0;
	uint32_t x298 = 2593U;
	int8_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	uint32_t t66 = 5867397U;

	t66 = (((x297^x298)+x299)^x300);

	if (t66 != 4294964703U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 7822262562956LL;
	int64_t x304 = -1LL;
	volatile int64_t t67 = 3103784654911424360LL;

	t67 = (((x301^x302)+x303)^x304);

	if (t67 != -7822262543092LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = -1;
	static int8_t x306 = INT8_MIN;
	int32_t x307 = 54641588;
	int32_t x308 = INT32_MIN;
	volatile int32_t t68 = 53606;

	t68 = (((x305^x306)+x307)^x308);

	if (t68 != -2092841933) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	static int32_t x311 = INT32_MIN;
	static uint8_t x312 = 1U;
	int32_t t69 = -5726220;

	t69 = (((x309^x310)+x311)^x312);

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 0U;
	uint32_t x316 = UINT32_MAX;
	int64_t t70 = -1317817743149966LL;

	t70 = (((x313^x314)+x315)^x316);

	if (t70 != -135244LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	int16_t x320 = INT16_MIN;
	volatile int32_t t71 = 345578;

	t71 = (((x317^x318)+x319)^x320);

	if (t71 != -32672) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x321 = UINT16_MAX;
	uint32_t x322 = 13U;
	uint64_t x324 = 479056025LLU;
	volatile uint64_t t72 = 8523046430646LLU;

	t72 = (((x321^x322)+x323)^x324);

	if (t72 != 479047531LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	static int64_t t73 = -4464290734160541LL;

	t73 = (((x325^x326)+x327)^x328);

	if (t73 != 9223372034707259519LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -2899;
	volatile int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t74 = -5;

	t74 = (((x329^x330)+x331)^x332);

	if (t74 != 2147480786) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	static uint64_t t75 = 21792220LLU;

	t75 = (((x333^x334)+x335)^x336);

	if (t75 != 9223372039002259327LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -29895;
	int64_t x340 = 0LL;
	volatile int64_t t76 = -50LL;

	t76 = (((x337^x338)+x339)^x340);

	if (t76 != 2147420985LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	static uint8_t x343 = 14U;
	int8_t x344 = -1;
	int32_t t77 = 1864099;

	t77 = (((x341^x342)+x343)^x344);

	if (t77 != 2147450866) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = INT64_MAX;
	uint8_t x346 = 24U;
	volatile int64_t x347 = -770611745386538LL;
	volatile uint32_t x348 = 28U;
	static int64_t t78 = -68909762LL;

	t78 = (((x345^x346)+x347)^x348);

	if (t78 != 9222601425109389217LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 5U;
	uint16_t x351 = UINT16_MAX;
	uint64_t x352 = 876LLU;
	static uint64_t t79 = 146620840844111300LLU;

	t79 = (((x349^x350)+x351)^x352);

	if (t79 != 64744LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -3;
	volatile int16_t x355 = INT16_MIN;
	int8_t x356 = 3;
	volatile int32_t t80 = -5946993;

	t80 = (((x353^x354)+x355)^x356);

	if (t80 != -32888) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MAX;

	t81 = (((x357^x358)+x359)^x360);

	if (t81 != -2147483521LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x362 = 2U;
	uint32_t x363 = UINT32_MAX;
	static uint32_t t82 = 86139464U;

	t82 = (((x361^x362)+x363)^x364);

	if (t82 != 3127294266U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x370 = 14877U;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = 120970537514LLU;

	t83 = (((x369^x370)+x371)^x372);

	if (t83 != 123118014518LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 52U;
	uint32_t x375 = 2584U;
	static volatile uint32_t t84 = 1U;

	t84 = (((x373^x374)+x375)^x376);

	if (t84 != 34842U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int16_t x382 = -1;
	uint64_t x383 = 1942LLU;
	static int8_t x384 = INT8_MIN;

	t85 = (((x381^x382)+x383)^x384);

	if (t85 != 18446744073709549590LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x388 = 51350840;

	t86 = (((x385^x386)+x387)^x388);

	if (t86 != -51350856) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x389 = 0;
	int32_t x391 = INT32_MAX;
	static volatile uint8_t x392 = 12U;
	int32_t t87 = 446514;

	t87 = (((x389^x390)+x391)^x392);

	if (t87 != 2147483634) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = -1;
	uint64_t x394 = 2LLU;
	int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t88 = 2619103LLU;

	t88 = (((x393^x394)+x395)^x396);

	if (t88 != 18446744073709518972LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MIN;
	uint8_t x403 = 1U;
	volatile int32_t t89 = 4;

	t89 = (((x401^x402)+x403)^x404);

	if (t89 != 424) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = -110539869LL;
	int16_t x411 = -1;
	static uint32_t x412 = UINT32_MAX;

	t90 = (((x409^x410)+x411)^x412);

	if (t90 != -4184415893LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x413 = INT8_MIN;
	volatile int32_t x414 = 506445;
	uint16_t x415 = 2433U;
	static volatile int32_t x416 = INT32_MIN;

	t91 = (((x413^x414)+x415)^x416);

	if (t91 != 2146979662) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t92 = 289;

	t92 = (((x421^x422)+x423)^x424);

	if (t92 != -2147450994) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = INT32_MAX;
	int64_t x426 = -1LL;
	int8_t x427 = INT8_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int64_t t93 = 17886LL;

	t93 = (((x425^x426)+x427)^x428);

	if (t93 != -2147549057LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 2U;
	int64_t x431 = -1LL;
	static volatile int64_t x432 = INT64_MIN;
	uint64_t t94 = 436067457161LLU;

	t94 = (((x429^x430)+x431)^x432);

	if (t94 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x434 = INT16_MIN;
	uint8_t x436 = 8U;
	volatile uint32_t t95 = 1008671U;

	t95 = (((x433^x434)+x435)^x436);

	if (t95 != 2147517985U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x438 = -8;
	uint32_t x439 = 208U;
	uint32_t x440 = 11282U;
	int64_t t96 = 9090918LL;

	t96 = (((x437^x438)+x439)^x440);

	if (t96 != 280LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x441 = INT16_MIN;
	uint64_t x442 = 11743593LLU;
	static int16_t x443 = 110;
	int32_t x444 = -1;
	volatile uint64_t t97 = 15082769LLU;

	t97 = (((x441^x442)+x443)^x444);

	if (t97 != 11750952LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x449 = 4LL;
	uint64_t x450 = 537652216340998676LLU;
	static int32_t x451 = -228502358;
	int32_t x452 = 4038;

	t98 = (((x449^x450)+x451)^x452);

	if (t98 != 537652216112492924LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = INT8_MAX;
	volatile int8_t x454 = INT8_MIN;
	int8_t x455 = 1;
	volatile int32_t t99 = -4;

	t99 = (((x453^x454)+x455)^x456);

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

