#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x11 = 286996LLU;
volatile int64_t x13 = INT64_MAX;
uint32_t x17 = UINT32_MAX;
volatile uint64_t x18 = 83668LLU;
static uint8_t x22 = 0U;
volatile uint32_t x23 = 987U;
uint64_t x25 = 28LLU;
int16_t x29 = INT16_MAX;
volatile int32_t t7 = 9272131;
int32_t x37 = 163;
int8_t x38 = INT8_MIN;
volatile int32_t t9 = 99360;
static volatile uint16_t x43 = UINT16_MAX;
volatile int32_t x47 = INT32_MIN;
int64_t x57 = INT64_MAX;
int32_t t14 = -220;
int32_t x62 = INT32_MAX;
int16_t x63 = INT16_MIN;
int16_t x65 = INT16_MAX;
uint32_t x68 = 91U;
volatile int32_t t16 = -1291868;
int16_t x70 = -1;
int32_t x72 = INT32_MIN;
volatile int32_t t17 = 334;
static int32_t t18 = 335;
volatile int32_t t20 = 21230;
uint64_t x86 = UINT64_MAX;
volatile int32_t t21 = 65264270;
int32_t x89 = -1;
static int32_t x98 = -1;
volatile int32_t t24 = 218646;
uint64_t x111 = UINT64_MAX;
int32_t t27 = -973460490;
uint16_t x114 = 872U;
int16_t x117 = INT16_MIN;
volatile uint64_t x124 = UINT64_MAX;
volatile uint64_t x129 = 39323905934LLU;
int32_t x130 = 751;
static uint16_t x131 = 1U;
uint64_t x139 = UINT64_MAX;
int16_t x140 = -1;
static int16_t x142 = INT16_MAX;
static int32_t t36 = -265207218;
int32_t x149 = -1;
static volatile int32_t t37 = -120;
static uint16_t x154 = 2300U;
int64_t x155 = 173266549093998889LL;
volatile int8_t x157 = 28;
static volatile int64_t x159 = -1LL;
int16_t x163 = -49;
static int32_t t42 = -81;
int64_t x173 = INT64_MIN;
int64_t x175 = 175LL;
int16_t x178 = -38;
uint32_t x179 = 52U;
uint32_t x185 = 2U;
int16_t x192 = INT16_MIN;
int32_t t47 = 5;
int16_t x201 = INT16_MIN;
volatile uint64_t x206 = UINT64_MAX;
static int16_t x214 = INT16_MAX;
volatile int32_t x215 = -1959;
volatile int32_t t54 = -73659166;
uint16_t x221 = 37U;
static int64_t x238 = -1LL;
int8_t x239 = 52;
int32_t t59 = -808482867;
int32_t t61 = 525;
uint16_t x249 = UINT16_MAX;
static int8_t x254 = -1;
uint64_t x256 = UINT64_MAX;
int64_t x259 = INT64_MAX;
uint8_t x264 = 9U;
int32_t x268 = 61321830;
int8_t x269 = 55;
uint16_t x274 = UINT16_MAX;
volatile int32_t t68 = -645;
int64_t x278 = -1LL;
int32_t t69 = 11;
uint16_t x281 = 10U;
uint16_t x284 = 876U;
static int32_t t70 = 164784384;
int16_t x286 = INT16_MAX;
int64_t x287 = -193LL;
uint32_t x291 = 650473888U;
static int16_t x292 = INT16_MAX;
int32_t x295 = -14;
int32_t x300 = INT32_MIN;
int64_t x315 = -1LL;
int16_t x316 = INT16_MAX;
volatile int32_t t78 = 106048;
int64_t x319 = INT64_MAX;
uint16_t x330 = UINT16_MAX;
volatile int8_t x332 = INT8_MAX;
static int32_t t82 = -12;
uint8_t x345 = 9U;
int64_t x351 = INT64_MAX;
uint32_t x352 = UINT32_MAX;
int16_t x363 = INT16_MIN;
int16_t x374 = -1;
volatile int16_t x376 = -1;
static int32_t t93 = -473;
int64_t x387 = 123LL;
uint8_t x394 = UINT8_MAX;
uint64_t x396 = 2168317219363224LLU;
uint32_t x397 = UINT32_MAX;
static int64_t x400 = -21630172426431168LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 24573717LLU;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 944569;

	t0 = ((x1^(x2|x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 3;
	int8_t x6 = INT8_MAX;
	uint16_t x7 = 5U;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = 5;

	t1 = ((x5^(x6|x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint8_t x10 = UINT8_MAX;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = 1923956;

	t2 = ((x9^(x10|x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 607567LLU;
	static int8_t x15 = INT8_MAX;
	int64_t x16 = 2870290480131LL;
	int32_t t3 = 1299;

	t3 = ((x13^(x14|x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = 23;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -37;

	t4 = ((x17^(x18|x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = 950969;

	t5 = ((x21^(x22|x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	uint8_t x27 = 0U;
	uint16_t x28 = 6U;
	volatile int32_t t6 = -762008;

	t6 = ((x25^(x26|x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = 1647932U;
	int32_t x32 = 166139;

	t7 = ((x29^(x30|x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	static volatile int64_t x34 = INT64_MIN;
	static int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 0;

	t8 = ((x33^(x34|x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = 1LL;
	int8_t x40 = -1;

	t9 = ((x37^(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	uint8_t x42 = 89U;
	int64_t x44 = -1LL;
	static volatile int32_t t10 = 1;

	t10 = ((x41^(x42|x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	volatile int64_t x46 = -420977047678739LL;
	static int64_t x48 = 11114236296936LL;
	int32_t t11 = -78590;

	t11 = ((x45^(x46|x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 181U;
	int64_t x50 = -794LL;
	uint8_t x51 = 0U;
	volatile uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 1407;

	t12 = ((x49^(x50|x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 25775;

	t13 = ((x53^(x54|x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	uint8_t x59 = 15U;
	int16_t x60 = INT16_MIN;

	t14 = ((x57^(x58|x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint8_t x64 = 1U;
	int32_t t15 = 640;

	t15 = ((x61^(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x66 = 2272677503608384611LL;
	uint64_t x67 = 14414LLU;

	t16 = ((x65^(x66|x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	volatile int16_t x71 = -1;

	t17 = ((x69^(x70|x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = -13LL;
	int16_t x75 = -1;
	int32_t x76 = INT32_MIN;

	t18 = ((x73^(x74|x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = -1LL;
	volatile int32_t x79 = 498600;
	uint8_t x80 = 0U;
	int32_t t19 = 5521145;

	t19 = ((x77^(x78|x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 6116956U;
	int64_t x82 = INT64_MIN;
	int64_t x83 = 255566259710227LL;
	int64_t x84 = INT64_MAX;

	t20 = ((x81^(x82|x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = 6;
	int8_t x87 = INT8_MAX;
	static int64_t x88 = INT64_MIN;

	t21 = ((x85^(x86|x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	static volatile uint8_t x91 = 0U;
	int8_t x92 = -1;
	volatile int32_t t22 = 1;

	t22 = ((x89^(x90|x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = 853U;
	int64_t x95 = -89845LL;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = 48337;

	t23 = ((x93^(x94|x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	uint16_t x99 = 0U;
	volatile int32_t x100 = -1;

	t24 = ((x97^(x98|x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	static uint64_t x103 = 298018372LLU;
	uint16_t x104 = 26U;
	int32_t t25 = -1022127505;

	t25 = ((x101^(x102|x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = -1LL;
	static uint16_t x107 = 2327U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 14241;

	t26 = ((x105^(x106|x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 10U;
	int8_t x112 = INT8_MAX;

	t27 = ((x109^(x110|x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x113 = INT16_MAX;
	uint64_t x115 = 89962846771499LLU;
	uint32_t x116 = 1075U;
	int32_t t28 = -63275;

	t28 = ((x113^(x114|x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 414053464LLU;
	int16_t x119 = INT16_MIN;
	int8_t x120 = 4;
	static volatile int32_t t29 = -41;

	t29 = ((x117^(x118|x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 18234768U;
	static uint64_t x123 = 27421863LLU;
	volatile int32_t t30 = -3949261;

	t30 = ((x121^(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile uint16_t x126 = 2625U;
	int16_t x127 = INT16_MIN;
	static int16_t x128 = INT16_MAX;
	static int32_t t31 = -70;

	t31 = ((x125^(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x132 = INT32_MAX;
	int32_t t32 = -3922;

	t32 = ((x129^(x130|x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -7;
	static uint64_t x136 = 69408LLU;
	int32_t t33 = 196;

	t33 = ((x133^(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile uint32_t x138 = 1012149U;
	volatile int32_t t34 = -441;

	t34 = ((x137^(x138|x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	static uint32_t x143 = UINT32_MAX;
	static int8_t x144 = -23;
	int32_t t35 = 12242;

	t35 = ((x141^(x142|x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 1913U;
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = -2;
	int32_t x148 = 16;

	t36 = ((x145^(x146|x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 190534364U;
	static volatile uint8_t x152 = UINT8_MAX;

	t37 = ((x149^(x150|x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = UINT32_MAX;
	uint64_t x156 = 255315750799LLU;
	int32_t t38 = 0;

	t38 = ((x153^(x154|x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	uint8_t x160 = UINT8_MAX;
	static int32_t t39 = -2;

	t39 = ((x157^(x158|x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MAX;
	static int8_t x164 = -1;
	volatile int32_t t40 = 24;

	t40 = ((x161^(x162|x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 773048823;
	int32_t x166 = -226786;
	int32_t x167 = 80;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -1;

	t41 = ((x165^(x166|x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x169 = UINT64_MAX;
	int32_t x170 = -62;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -1;

	t42 = ((x169^(x170|x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x174 = UINT64_MAX;
	int16_t x176 = -1;
	volatile int32_t t43 = -7255;

	t43 = ((x173^(x174|x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 12478994LL;
	int16_t x180 = -380;
	static volatile int32_t t44 = 3207087;

	t44 = ((x177^(x178|x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 78597266;
	int16_t x182 = -3;
	uint16_t x183 = 508U;
	uint8_t x184 = 2U;
	volatile int32_t t45 = -762;

	t45 = ((x181^(x182|x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -98;
	uint32_t x187 = 478U;
	static uint8_t x188 = 7U;
	int32_t t46 = 63877;

	t46 = ((x185^(x186|x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	volatile uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = 1208;

	t47 = ((x189^(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	static volatile int32_t t48 = 6757;

	t48 = ((x193^(x194|x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -58LL;
	int64_t x198 = INT64_MIN;
	static uint8_t x199 = 2U;
	uint8_t x200 = 36U;
	volatile int32_t t49 = -4486796;

	t49 = ((x197^(x198|x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = -1;
	int32_t x203 = -1;
	int16_t x204 = -1;
	static int32_t t50 = 3824657;

	t50 = ((x201^(x202|x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x207 = 6012;
	static int8_t x208 = 1;
	static int32_t t51 = -94304;

	t51 = ((x205^(x206|x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -1221862880131586LL;
	int32_t t52 = -22823;

	t52 = ((x209^(x210|x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -13667032LL;
	static int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -1;

	t53 = ((x213^(x214|x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	static uint64_t x218 = 46522855259LLU;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = -1;

	t54 = ((x217^(x218|x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 468046931LLU;
	static int32_t x223 = -1;
	uint16_t x224 = 208U;
	volatile int32_t t55 = -7666;

	t55 = ((x221^(x222|x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	volatile uint64_t x226 = 72LLU;
	uint8_t x227 = 10U;
	volatile int16_t x228 = -1;
	volatile int32_t t56 = -88;

	t56 = ((x225^(x226|x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	static volatile int64_t x231 = -1LL;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t57 = -949560;

	t57 = ((x229^(x230|x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	volatile int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -4;
	int32_t t58 = 48038;

	t58 = ((x233^(x234|x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -1;
	static int16_t x240 = INT16_MAX;

	t59 = ((x237^(x238|x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	static int16_t x242 = -1;
	static int32_t x243 = INT32_MIN;
	int8_t x244 = 2;
	static int32_t t60 = 55757;

	t60 = ((x241^(x242|x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -46;
	int64_t x246 = INT64_MIN;
	static int8_t x247 = INT8_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = ((x245^(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -1LL;
	volatile uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 79U;
	int32_t t62 = 196660;

	t62 = ((x249^(x250|x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -368521211LL;
	int64_t x255 = -1894654309889LL;
	volatile int32_t t63 = 12;

	t63 = ((x253^(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = UINT64_MAX;
	volatile uint32_t x258 = 26U;
	volatile int64_t x260 = 37753280917952142LL;
	volatile int32_t t64 = -71264840;

	t64 = ((x257^(x258|x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MAX;
	uint64_t x263 = 40438LLU;
	static volatile int32_t t65 = 30573;

	t65 = ((x261^(x262|x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 166;
	int64_t x266 = -1LL;
	uint16_t x267 = UINT16_MAX;
	volatile int32_t t66 = -2;

	t66 = ((x265^(x266|x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 8U;
	int16_t x271 = 1;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -2526807;

	t67 = ((x269^(x270|x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = 12;
	uint64_t x276 = 130514991806207367LLU;

	t68 = ((x273^(x274|x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 9U;
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;

	t69 = ((x277^(x278|x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -6;
	int64_t x283 = INT64_MAX;

	t70 = ((x281^(x282|x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MAX;
	static int64_t x288 = -1LL;
	int32_t t71 = 34358296;

	t71 = ((x285^(x286|x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x290 = -1;
	int32_t t72 = 63688;

	t72 = ((x289^(x290|x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	static uint64_t x294 = UINT64_MAX;
	uint16_t x296 = 10770U;
	int32_t t73 = -1953;

	t73 = ((x293^(x294|x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = 5;
	int32_t t74 = -11159;

	t74 = ((x297^(x298|x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 58U;
	int32_t x302 = -1;
	uint32_t x303 = 28981U;
	volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = 4185;

	t75 = ((x301^(x302|x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = -38861;
	int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -88509032LL;
	int32_t t76 = 3566640;

	t76 = ((x305^(x306|x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 29U;
	static int16_t x310 = INT16_MAX;
	volatile uint64_t x311 = 2755725072LLU;
	volatile uint16_t x312 = 12181U;
	int32_t t77 = 432691;

	t77 = ((x309^(x310|x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MIN;
	uint32_t x314 = 31712463U;

	t78 = ((x313^(x314|x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	int16_t x320 = -1;
	volatile int32_t t79 = -10764;

	t79 = ((x317^(x318|x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	uint64_t x322 = UINT64_MAX;
	static volatile int16_t x323 = INT16_MIN;
	static volatile int64_t x324 = -1LL;
	volatile int32_t t80 = -175414512;

	t80 = ((x321^(x322|x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 30;
	int64_t x326 = INT64_MIN;
	static uint64_t x327 = 4051072390743807969LLU;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = 0;

	t81 = ((x325^(x326|x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int8_t x331 = -16;

	t82 = ((x329^(x330|x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 10U;
	int32_t x334 = -7452;
	int8_t x335 = INT8_MAX;
	static int8_t x336 = INT8_MIN;
	static int32_t t83 = 4;

	t83 = ((x333^(x334|x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	uint32_t x338 = 1U;
	int64_t x339 = -57LL;
	volatile int64_t x340 = -1LL;
	static volatile int32_t t84 = 1;

	t84 = ((x337^(x338|x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 3;
	static volatile int32_t x342 = INT32_MAX;
	static volatile uint32_t x343 = 69U;
	int16_t x344 = -1;
	int32_t t85 = 1225448;

	t85 = ((x341^(x342|x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x346 = -87812LL;
	int32_t x347 = INT32_MAX;
	static volatile uint8_t x348 = 50U;
	volatile int32_t t86 = 431553;

	t86 = ((x345^(x346|x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = 540851852909LLU;
	volatile int32_t t87 = -97807394;

	t87 = ((x349^(x350|x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	static volatile int32_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = 3612449LLU;
	int32_t t88 = 4744234;

	t88 = ((x353^(x354|x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = 133LLU;
	uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MAX;
	int32_t t89 = -61765495;

	t89 = ((x357^(x358|x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = 53;
	static int32_t x362 = -11006238;
	uint64_t x364 = 3331862731LLU;
	volatile int32_t t90 = 268712474;

	t90 = ((x361^(x362|x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 5112385;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = -19;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 30253;

	t91 = ((x365^(x366|x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -11711LL;
	static volatile int32_t x370 = -1;
	static volatile int8_t x371 = 0;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 250992;

	t92 = ((x369^(x370|x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 57075U;
	static int32_t x375 = INT32_MIN;

	t93 = ((x373^(x374|x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int8_t x378 = 41;
	uint8_t x379 = 1U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -326063142;

	t94 = ((x377^(x378|x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 6999581;
	static uint16_t x382 = 10623U;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 1041755437;

	t95 = ((x381^(x382|x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	static uint8_t x386 = 2U;
	static uint8_t x388 = 22U;
	volatile int32_t t96 = 115;

	t96 = ((x385^(x386|x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 302890451LLU;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 1U;
	volatile int32_t t97 = 5;

	t97 = ((x389^(x390|x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	static int32_t t98 = 49;

	t98 = ((x393^(x394|x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = 591U;
	int32_t x399 = INT32_MIN;
	volatile int32_t t99 = -9;

	t99 = ((x397^(x398|x399))<=x400);

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
